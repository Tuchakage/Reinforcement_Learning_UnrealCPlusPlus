// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LearningAgentsManager.h"
#include "DrivingPolicy.h"
#include "DrivingInteractor.h"
#include "DrivingRLTrainer.h"
#include "RLTrainingManager.generated.h"

/**
 * 
 */
UCLASS()
class LEARNINGAGENTSDRIVE_API ARLTrainingManager : public ALearningAgentsManager
{
	GENERATED_BODY()

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UDrivingPolicy* DrivingPolicy;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UDrivingRLTrainer* DrivingTrainer;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UDrivingInteractor* DrivingInteractor;

	FLearningAgentsPolicySettings PolicySettings;
	FLearningAgentsTrainerSettings TrainerSettings;


	FLearningAgentsTrainerTrainingSettings TrainerTrainingSettings;
	FLearningAgentsTrainerGameSettings TrainerGameSettings;
	FLearningAgentsTrainerPathSettings TrainerPathSettings;
	FLearningAgentsCriticSettings CriticSettings;

public: 
	ARLTrainingManager();

	virtual void Tick(float Delta) override;

	//Set this in the Blueprint
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	ULearningAgentsNeuralNetwork* NeuralNetworkAsset;
	
};
