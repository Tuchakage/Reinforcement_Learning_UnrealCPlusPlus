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
	else 
	{

	}

	DrivingPolicy->SetupPolicy(DrivingInteractor, PolicySettings, NeuralNetworkAsset);
	DrivingTrainer->SetupTrainer(DrivingInteractor, DrivingPolicy, nullptr, TrainerSettings);
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("Begin Play ")));
}

void ARLTrainingManager::Tick(float Delta)
{
	Super::Tick(Delta);
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("Update ")));
	UE_LOG(LogTemp, Display, TEXT("Update"));
	DrivingTrainer->RunTraining(TrainerTrainingSettings, TrainerGameSettings, TrainerPathSettings, CriticSettings, false, true, true);
}




