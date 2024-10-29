// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LearningAgentsInteractor.h"
#include "LearningAgentsObservations.h"
#include "LearningAgentsHelpers.h"
#include "Components/SplineComponent.h"
#include "LearningAgentsActions.h"
#include "DrivingInteractor.generated.h"

/**
 * 
 */
UCLASS()
class LEARNINGAGENTSDRIVE_API UDrivingInteractor : public ULearningAgentsInteractor
{
	GENERATED_BODY()

protected:
	

	void SetupObservations_Implementation() override;

	void SetObservations_Implementation(const TArray<int32>& AgentIds) override;

	void SetupActions_Implementation() override;

	void GetActions_Implementation(const TArray<int32>& AgentIds) override;

	UPlanarPositionObservation* TrackPositionObservation;

	UPlanarDirectionObservation* TrackDirectionObservation;

	UAngleObservation* TrackGlobalPositionObservation;

	UPlanarVelocityObservation* CarVelocityObservation;

	USplineComponentHelper* SplineComponentHelper;

	USplineComponent* TrackSpline;

	UFloatAction* ThrottleBrakeAction;

	UFloatAction* SteeringAction;
};
