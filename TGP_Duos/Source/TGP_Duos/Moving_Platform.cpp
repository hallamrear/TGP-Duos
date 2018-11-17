// Fill out your copyright notice in the Description page of Project Settings.

#include "Moving_Platform.h"
#include "Classes/Components/SplineComponent.h"
#include "Classes/Components/StaticMeshComponent.h"


// Sets default values
AMoving_Platform::AMoving_Platform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	splinePath = CreateDefaultSubobject<USplineComponent>(TEXT("Spline Path"));
	RootComponent = splinePath;
	splinePath->SetClosedLoop(true);

	platformBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Platoform Mesh"));
	platformBase->SetupAttachment(splinePath);

	distance = 0.0f;
	platformBase->SetWorldLocation(splinePath->GetLocationAtDistanceAlongSpline(distance, ESplineCoordinateSpace::World));

	movingSpeed = 100.0f;
}

// Called when the game starts or when spawned
void AMoving_Platform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMoving_Platform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (distance > splinePath->GetSplineLength())
	{
		distance = 0.0f;
	}
	else
	{
		distance = distance + movingSpeed * DeltaTime;
	}

	platformBase->SetWorldLocation(splinePath->GetLocationAtDistanceAlongSpline(distance, ESplineCoordinateSpace::World));
}

