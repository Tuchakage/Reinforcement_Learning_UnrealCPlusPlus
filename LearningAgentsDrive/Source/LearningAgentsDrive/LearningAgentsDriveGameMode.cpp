// Copyright Epic Games, Inc. All Rights Reserved.

#include "LearningAgentsDriveGameMode.h"
#include "LearningAgentsDrivePlayerController.h"

ALearningAgentsDriveGameMode::ALearningAgentsDriveGameMode()
{
	PlayerControllerClass = ALearningAgentsDrivePlayerController::StaticClass();
}
