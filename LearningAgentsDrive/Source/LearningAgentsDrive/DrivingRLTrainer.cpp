// Fill out your copyright notice in the Description page of Project Settings.


#include "DrivingRLTrainer.h"
# include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "SportCarTrackSpline.h"
#include "LearningAgentsDrivePawn.h"

void UDrivingRLTrainer::BeginPlay()
{
	Super::BeginPlay();

	AActor* SplineActor = UGameplayStatics::GetActorOfClass(GetWorld(), ASportCarTrackSpline::StaticClass());

	if (ASportCarTrackSpline* Spline = Cast< ASportCarTrackSpline>(SplineActor)) 
	{
		//Get the spline and store it
		TrackSpline = Spline->SplineComponent;
	}
}

void UDrivingRLTrainer::SetupRewards_Implementation()
{
	//Add a penalty to the agent if it goes too far from the track
	OffTrackPenalty = UPlanarPositionDifferencePenalty::AddPlanarPositionDifferencePenalty(this, FName("OffTrackPenalty"), 1.f, 100.f, 800, FVector(1, 0, 0), FVector(0, 1, 0));

	//Reward player for the Speed
	VelocityAlongTrackReward = UScalarVelocityReward::AddScalarVelocityReward(this, FName("SpeedReward"), 0.1f, 200.f);

	// Adds a new spline component helper to the given manager component
	SplineComponentRewardHelper = USplineComponentHelper::AddSplineComponentHelper(this, FName("SplineComponentRewardHelper"));

	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("Reward Setup")));
}

void UDrivingRLTrainer::SetRewards_Implementation(const TArray<int32>& AgentIds)
{
	//For each Agent 
	for (int AgID : AgentIds)
	{

		//Get reference to the Agent Object
		UObject* agent = GetAgent(AgID, ALearningAgentsDrivePawn::StaticClass());

		//Cast to actor class to get position and velocity
		if (AActor* agentActor = Cast<AActor>(agent))
		{
			FVector agentPosition = agentActor->GetActorLocation();
			FVector agentVelocity = agentActor->GetVelocity();

			FVector nearestPositionOnSpline = SplineComponentRewardHelper->GetNearestPositionOnSpline(AgID, TrackSpline, agentPosition, ESplineCoordinateSpace::World);

			//Set the penalty
			OffTrackPenalty->SetPlanarPositionDifferencePenalty(AgID, nearestPositionOnSpline, agentPosition);

			float velocityAlongSpline = SplineComponentRewardHelper->GetVelocityAlongSpline(AgID, TrackSpline, agentPosition, agentVelocity, 10.f, ESplineCoordinateSpace::World);
			
			//Set Rewards
			VelocityAlongTrackReward->SetScalarVelocityReward(AgID, velocityAlongSpline);
		}
	}
}

void UDrivingRLTrainer::SetupCompletions_Implementation()
{
	// Adds a new planar position difference completion to the given trainer
	OffTrackTermination = UPlanarPositionDifferenceCompletion::AddPlanarPositionDifferenceCompletion(this, FName("OffTrackCompletion"), 1200.f, ELearningAgentsCompletion::Termination, FVector(1, 0, 0), FVector(0, 1, 0));
}

void UDrivingRLTrainer::SetCompletions_Implementation(const TArray<int32>& AgentIds)
{
	//For each Agent 
	for (int AgID : AgentIds)
	{

		//Get reference to the Agent Object
		UObject* agent = GetAgent(AgID, ALearningAgentsDrivePawn::StaticClass());

		//Cast to actor class to get position and velocity
		if (AActor* agentActor = Cast<AActor>(agent)) 
		{
			FVector agentPosition = agentActor->GetActorLocation();

			FVector nearestPositionOnSpline = SplineComponentRewardHelper->GetNearestPositionOnSpline(AgID, TrackSpline, agentPosition, ESplineCoordinateSpace::World);

			//Terminates the episode when the agent has driven off the track
			OffTrackTermination->SetPlanarPositionDifferenceCompletion(AgID, nearestPositionOnSpline, agentPosition);
		}
	}
}

void UDrivingRLTrainer::ResetEpisodes_Implementation(const TArray<int32>& AgentId)
{
	//For each Agent 
	for (int AgID : AgentId)
	{

		//Get reference to the Agent Object
		UObject* agent = GetAgent(AgID, ALearningAgentsDrivePawn::StaticClass());

		//Cast to ALearningAgentsDrivePawn class to reset the car
		if (ALearningAgentsDrivePawn* agentActor = Cast<ALearningAgentsDrivePawn>(agent))
		{
			agentActor->ResetToRandomPointOnSpline(TrackSpline);
		}
	}
}
