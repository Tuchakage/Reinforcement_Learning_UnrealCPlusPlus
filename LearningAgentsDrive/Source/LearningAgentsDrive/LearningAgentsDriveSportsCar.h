// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "LearningAgentsDrivePawn.h"
#include "LearningAgentsDriveSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class LEARNINGAGENTSDRIVE_API ALearningAgentsDriveSportsCar : public ALearningAgentsDrivePawn
{
	GENERATED_BODY()
	
public:

	ALearningAgentsDriveSportsCar();
};
