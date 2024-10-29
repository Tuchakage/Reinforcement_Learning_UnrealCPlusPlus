// Copyright Epic Games, Inc. All Rights Reserved.

#include "LearningAgentsDriveWheelFront.h"
#include "UObject/ConstructorHelpers.h"

ULearningAgentsDriveWheelFront::ULearningAgentsDriveWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}