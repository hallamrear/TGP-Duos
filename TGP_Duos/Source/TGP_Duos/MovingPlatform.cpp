// Fill out your copyright notice in the Description page of Project Settings.

#include "MovingPlatform.h"
#include "Classes/Components/SplineComponent.h"
#include "Classes/Components/StaticMeshComponent.h"


// Sets default values
AMovingPlatform::AMovingPlatform()
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
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
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

