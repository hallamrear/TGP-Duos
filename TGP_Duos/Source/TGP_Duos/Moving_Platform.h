// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Moving_Platform.generated.h"

class USplineComponent;
class UStaticMeshComponent;

UCLASS()
class TGP_DUOS_API AMoving_Platform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoving_Platform();

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* platformBase;

	UPROPERTY(EditAnywhere)
	USplineComponent* splinePath;

	UPROPERTY(EditAnywhere)
	float movingSpeed;

	UPROPERTY(BlueprintReadOnly)
	float distance;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
