// Fill out your copyright notice in the Description page of Project Settings.


#include "DrivingInteractor.h"
#include "LearningAgentsDrivePawn.h"
#include "Kismet/GameplayStatics.h"
#include "SportCarTrackSpline.h"
#include "ChaosWheeledVehicleMovementComponent.h"




//This function will be called once by the training manager during the initial setup
void UDrivingInteractor::SetupObservations_Implementation()
{
	//Observe the position of the track
	TrackPositionObservation = UPlanarPositionObservation::AddPlanarPositionObservation(this, FName("TrackPositionObservation"), 100, FVector(1, 0, 0), FVector(0, 1, 0));

	//Observe the direction the Track is going
	TrackDirectionObservation = UPlanarDirectionObservation::AddPlanarDirectionObservation(this, FName("TrackDirectionObservation"), 1, FVector(1, 0, 0), FVector(0, 1, 0));

	//Observe Global Position of track
	TrackGlobalPositionObservation = UAngleObservation::AddAngleObservation(this, FName("TrackGlobalPositionObservation"));

	// Observating the velocity of the Car
	CarVelocityObservation = UPlanarVelocityObservation::AddPlanarVelocityObservation(this, FName("CarVelocityObservation"), 200, FVector(1, 0, 0), FVector(0, 1, 0));

	// Adds a new spline component helper to the given manager component
	SplineComponentHelper = USplineComponentHelper::AddSplineComponentHelper(this, FName("SplineComponentHelper"));

	//Look for the first actor that has the "ASportCarTrackSpline" class (There will only be one)
	AActor* TrackSplineActor = UGameplayStatics::GetActorOfClass(GetWorld(), ASportCarTrackSpline::StaticClass());

	//Cast to SportCarTrackSpline
	if (ASportCarTrackSpline* Spline = Cast<ASportCarTrackSpline>(TrackSpline))
	{
		//Get the Spline Component and keep a reference of it here
		TrackSpline = Spline->SplineComponent;

	}
}

//We need to define how each of the observations are gathered for our position observation
void UDrivingInteractor::SetObservations_Implementation(const TArray<int32>& AgentIds)
{
	//For each Agent 
	for (int AgID : AgentIds) 
	{

		//Get reference to the Agent Object
		UObject* agent = GetAgent(AgID, ALearningAgentsDrivePawn::StaticClass());
		//Cast to Actor class so we can get the Transform
		if (AActor* AgentActor = Cast<AActor>(agent))
		{
			FVector AgentLocation = AgentActor->GetActorLocation();

			FRotator AgentRotation = AgentActor->GetActorRotation();

			//Get the distance along a spline closest to the given position (The given position is the agent)
			float distanceAlongSplineAtPosition = SplineComponentHelper->GetDistanceAlongSplineAtPosition(AgID, TrackSpline, AgentLocation, ESplineCoordinateSpace::World);

			// Gets the position along a spline at the given distance.
			FVector PositionAtDistanceAlongSpline = SplineComponentHelper->GetPositionAtDistanceAlongSpline(AgID, TrackSpline, distanceAlongSplineAtPosition, ESplineCoordinateSpace::World);

			//Observe the agents position and rotation relative to the spline
			TrackPositionObservation->SetPlanarPositionObservation(AgID, PositionAtDistanceAlongSpline, AgentLocation, AgentRotation);

			// Gets the direction along a spline at the given distance (The given distance is the distance between the Agent and the spline)
			FVector DirectionAtDistanceAlongSpline = SplineComponentHelper->GetDirectionAtDistanceAlongSpline(AgID, TrackSpline, distanceAlongSplineAtPosition, ESplineCoordinateSpace::World);

			//Observe the Agents direction and rotation relative to the spline
			TrackDirectionObservation->SetPlanarDirectionObservation(AgID, DirectionAtDistanceAlongSpline, AgentRotation);

			// Gets the proportion along a spline encoded as an angle between -180 and 180 degrees for a given distance (The given distance is the distance between the Agent and the spline) 
			float ProportionAlongSplineAsAngle = SplineComponentHelper->GetProportionAlongSplineAsAngle(AgID, TrackSpline, distanceAlongSplineAtPosition);

			// Observes the angle
			TrackGlobalPositionObservation->SetAngleObservation(AgID, ProportionAlongSplineAsAngle, 0);

			//Observe the Velocity of the Car
			CarVelocityObservation->SetPlanarVelocityObservation(AgID, AgentActor->GetVelocity(), AgentRotation);
		}	
	}
}

void UDrivingInteractor::SetupActions_Implementation()
{
	ThrottleBrakeAction = UFloatAction::AddFloatAction(this, FName("ThrottleBrakeAction"));
	SteeringAction = UFloatAction::AddFloatAction(this, FName("SteeringAction"));
}

void UDrivingInteractor::GetActions_Implementation(const TArray<int32>& AgentIds)
{
	//For each Agent 
	for (int AgID : AgentIds)
	{

		//Get reference to the Agent Object
		UObject* agent = GetAgent(AgID, ALearningAgentsDrivePawn::StaticClass());

		//Get the value of the float action for the Throttle & Brake actions
		float ThrottleBrakeFloat = ThrottleBrakeAction->GetFloatAction(AgID);

		//Cast to Vehicle Component Of Agent
		if (UChaosVehicleMovementComponent* VehicleComponent = Cast<UChaosVehicleMovementComponent>(agent))
		{
			//If Car is trying to move forawrd
			if (ThrottleBrakeFloat > 0)
			{
				//Start the throttle
				VehicleComponent->SetThrottleInput(ThrottleBrakeFloat);

				//Turn the brakes off
				VehicleComponent->SetBrakeInput(0.f);
			}
			else 
			{
				//Stop the throttle 
				VehicleComponent->SetThrottleInput(0.f);

				//Put the brakes on
				VehicleComponent->SetBrakeInput(0 - ThrottleBrakeFloat);
			}

			//Steer
			VehicleComponent->SetSteeringInput(SteeringAction->GetFloatAction(AgID));
			
		}

	}
}
