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
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Projectile)
	TSubclassOf<ABase_Weapon_Projectile> projectileClass;
	
	UPROPERTY(EditDefaultsOnly, Category = Weapon)
	FVector bodyRotation;	
	UPROPERTY(EditDefaultsOnly, Category = Weapon)
	FVector bodyScale;

	// Called when the game starts or when spawned
	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "Shoot"))
	void Shoot(UWorld * passedWorld, FVector playerPos, FRotator playerRot);

	UStaticMeshComponent * GetWeaponMesh();
	void SetProjectileClass(TSubclassOf<ABase_Weapon_Projectile> weaponProjClass);
	TSubclassOf<ABase_Weapon_Projectile> GetProjectileClass();
	FVector GetWeaponBodyScale();
	FVector GetWeaponBodyRotation();
};

