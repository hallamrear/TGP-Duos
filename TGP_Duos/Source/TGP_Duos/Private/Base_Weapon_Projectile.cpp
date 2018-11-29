// Fill out your copyright notice in the Description page of Project Settings.

#include "Base_Weapon_Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ABase_Weapon_Projectile::ABase_Weapon_Projectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set as root component
	RootComponent = emptyRoot;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	projectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	projectileMovementComponent->InitialSpeed = 3000.f;
	projectileMovementComponent->MaxSpeed = 3000.f;
	projectileMovementComponent->bRotationFollowsVelocity = true;
	projectileMovementComponent->bShouldBounce = true;

	InitialLifeSpan = 3.0f;
}

// Called when the game starts or when spawned
void ABase_Weapon_Projectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABase_Weapon_Projectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

