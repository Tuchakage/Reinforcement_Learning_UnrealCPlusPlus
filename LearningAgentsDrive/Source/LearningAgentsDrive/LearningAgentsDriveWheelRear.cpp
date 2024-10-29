// Copyright Epic Games, Inc. All Rights Reserved.

#include "LearningAgentsDriveWheelRear.h"
#include "UObject/ConstructorHelpers.h"

ULearningAgentsDriveWheelRear::ULearningAgentsDriveWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}