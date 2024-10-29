// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LearningAgentsTrainer.h"
#include "Components/SplineComponent.h"
#include "LearningAgentsRewards.h"
#include "LearningAgentsHelpers.h"
#include "LearningAgentsCompletions.h"
#include "DrivingRLTrainer.generated.h"

/**
 * 
 */
UCLASS()
class LEARNINGAGENTSDRIVE_API UDrivingRLTrainer : public ULearningAgentsTrainer
{
	GENERATED_BODY()



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	USplineComponent* TrackSpline;

	void SetupRewards_Implementation() override;

	void SetRewards_Implementation(const TArray<int32>& AgentIds) override;

	void SetupCompletions_Implementation() override;

	void SetCompletions_Implementation(const TArray<int32>& AgentIds) override;

	void ResetEpisodes_Implementation(const TArray<int32>& AgentId) override;

	UPlanarPositionDifferencePenalty* OffTrackPenalty;

	UScalarVelocityReward* VelocityAlongTrackReward;

	USplineComponentHelper* SplineComponentRewardHelper;

	UPlanarPositionDifferenceCompletion* OffTrackTermination;
	
};
