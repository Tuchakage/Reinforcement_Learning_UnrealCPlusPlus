// Fill out your copyright notice in the Description page of Project Settings.


#include "RLTrainingManager.h"

ARLTrainingManager::ARLTrainingManager()
{
	DrivingPolicy = CreateDefaultSubobject<UDrivingPolicy>(TEXT("Driving Policy"));

	DrivingTrainer = CreateDefaultSubobject<UDrivingRLTrainer>(TEXT("Driving Trainer"));

	DrivingInteractor = CreateDefaultSubobject<UDrivingInteractor>(TEXT("Driving Interactor"));


	
}

void ARLTrainingManager::BeginPlay()
{
	Super::BeginPlay();
	if (DrivingInteractor) 
	{
		DrivingInteractor->SetupInteractor();
		UE_LOG(LogTemp, Display, TEXT("Interactor Exists"));
	}
	else { UE_LOG(LogTemp, Display, TEXT("The Interactor is not set")); }


	if (DrivingPolicy) 
	{
		DrivingPolicy->SetupPolicy(DrivingInteractor, PolicySettings, NeuralNetworkAsset);
		UE_LOG(LogTemp, Display, TEXT("Policy Exists"));
	}
	else { UE_LOG(LogTemp, Display, TEXT("The Policy is not set")); }


	if (DrivingTrainer) 
	{
		DrivingTrainer->SetupTrainer(DrivingInteractor, DrivingPolicy, nullptr, TrainerSettings);
		UE_LOG(LogTemp, Display, TEXT("Trainer Exists"));
	}
	else { UE_LOG(LogTemp, Display, TEXT("The Trainer is not set")); }
	
	
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("Begin Play in Training Manager")));
}



void ARLTrainingManager::Tick(float Delta)
{
	Super::Tick(Delta);

	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("Update in Training Manager")));
	//UE_LOG(LogTemp, Display, TEXT("Update"));
	DrivingTrainer->RunTraining(TrainerTrainingSettings, TrainerGameSettings, TrainerPathSettings, CriticSettings, false, true, true);
}




