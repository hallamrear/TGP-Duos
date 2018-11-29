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
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/Weapons/Assets/AUG/AUG.AUG'"));
	UStaticMesh* Asset = MeshAsset.Object;
	weaponBody->SetStaticMesh(Asset);
	weaponBody->SetupAttachment(RootComponent); 
}

// Called when the game starts or when spawned
void ABase_Weapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABase_Weapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABase_Weapon::Shoot()
{
	//Firing Projectile
	if (projectileClass != NULL)
	{
		UWorld* const World = GetWorld();

		if (World != NULL)
		{
			const FRotator SpawnRotation = FRotator(0, 0, 0);
			// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
			const FVector SpawnLocation = muzzleLocation;

			//Set Spawn Collision Handling Override
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

			// spawn the projectile at the muzzle
			World->SpawnActor<ABase_Weapon_Projectile>(projectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
		}
	}
}

UStaticMeshComponent * ABase_Weapon::GetWeaponMesh()
{
	if (weaponBody != nullptr)
		return weaponBody;

	return nullptr;
}

TSubclassOf<ABase_Weapon_Projectile> ABase_Weapon::GetProjectileClass()
{
	return projectileClass;
}

FVector ABase_Weapon::GetMuzzleLocation()
{
	return muzzleLocation;
}
