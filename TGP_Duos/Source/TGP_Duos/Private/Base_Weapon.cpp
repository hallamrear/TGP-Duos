// Fill out your copyright notice in the Description page of Project Settings.

#include "Base_Weapon.h"
#include "Components/StaticMeshComponent.h"
#include "Base_Weapon_Projectile.h"
#include "Runtime/Engine/Classes/Engine/World.h"

// Sets default values
ABase_Weapon::ABase_Weapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	emptyRootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));
	RootComponent = emptyRootComponent;

	weaponBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon Body"));
	weaponBody->SetupAttachment(RootComponent); 
}

// Called when the game starts or when spawned
void ABase_Weapon::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

// Called every frame
void ABase_Weapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABase_Weapon::Shoot_Implementation(UWorld* passedWorld, FVector playerPos, FRotator playerRot)
{
	//Firing Projectile
	if (projectileClass != NULL)
	{
		if (passedWorld != NULL)
		{
			//Set Spawn Collision Handling Override
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

			// spawn the projectile at the muzzle
			passedWorld->SpawnActor<ABase_Weapon_Projectile>(projectileClass, playerPos, playerRot, ActorSpawnParams);
		}
	}
}

UStaticMeshComponent * ABase_Weapon::GetWeaponMesh()
{
	if (weaponBody != nullptr)
		return weaponBody;

	return nullptr;
}

void ABase_Weapon::SetProjectileClass(TSubclassOf<ABase_Weapon_Projectile> weaponProjClass)
{
	if (weaponProjClass)
	{
		projectileClass = weaponProjClass;
	}
}

TSubclassOf<ABase_Weapon_Projectile> ABase_Weapon::GetProjectileClass()
{
	return projectileClass;
}

FVector ABase_Weapon::GetWeaponBodyRotation()
{
	return bodyRotation;
}

FVector ABase_Weapon::GetWeaponBodyScale()
{
	return bodyScale;
}
