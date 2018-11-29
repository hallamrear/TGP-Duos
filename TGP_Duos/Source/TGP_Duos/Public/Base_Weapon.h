// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Base_Weapon.generated.h"

class UStaticMeshComponent;
class ABase_Weapon_Projectile;

UCLASS()
class TGP_DUOS_API ABase_Weapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABase_Weapon();

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent * emptyRootComponent;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent * weaponBody;
	UPROPERTY(VisibleAnywhere)
	FVector muzzleLocation;
	UPROPERTY(VisibleAnywhere)
	TSubclassOf<ABase_Weapon_Projectile> projectileClass;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Shoot();

	UStaticMeshComponent * GetWeaponMesh();
	TSubclassOf<ABase_Weapon_Projectile> GetProjectileClass();
	FVector GetMuzzleLocation();
};
