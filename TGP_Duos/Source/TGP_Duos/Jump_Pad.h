// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Jump_Pad.generated.h"

class StaticMeshComponent;
class UParticleSystemComponent;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS()
class TGP_DUOS_API AJump_Pad : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AJump_Pad();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* padModel;

	UPROPERTY(EditAnywhere)
		UParticleSystemComponent* padParticleEmitter;

	UPROPERTY(EditAnywhere)
		UBoxComponent* collisionBox;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		AActor * targetLocation;

	UPROPERTY(EditAnywhere)
		float jumpTime;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		virtual FVector LaunchData(FVector targetPosition, AActor* OtherActor);

	UFUNCTION()
		void NotifyActorBeginOverlap(AActor* OtherActor);
};
