// Fill out your copyright notice in the Description page of Project Settings.


#include "SportCarTrackSpline.h"

// Sets default values
ASportCarTrackSpline::ASportCarTrackSpline()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SplineComponent = CreateDefaultSubobject<USplineComponent>("Spline");
	if (SplineComponent)
	{
		SplineComponent->SetupAttachment(RootComponent);
		//Make sure the Spline loops round
		SplineComponent->SetClosedLoop(true);
	}

}

// Called when the game starts or when spawned
void ASportCarTrackSpline::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASportCarTrackSpline::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


