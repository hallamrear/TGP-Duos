// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/Actor.h"
#include "Base_Weapon_Projectile.generated.h"

UCLASS()
class TGP_DUOS_API ABase_Weapon_Projectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABase_Weapon_Projectile();

protected:
	// Called when the game starts or when spawned
	virtual void PostInitializeComponents() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Projectile)
	int DamageDealtPerHit;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
	class UProjectileMovementComponent * projectileMovementComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UStaticMeshComponent * projectileMesh;
	UPROPERTY(VisibleAnywhere, Category = Projectile)
	class USphereComponent* CollisionComp;	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION()
	void OnHit(UPrimitiveComponent * HitComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, FVector NormalImpulse, const FHitResult & Hit);
	
};
