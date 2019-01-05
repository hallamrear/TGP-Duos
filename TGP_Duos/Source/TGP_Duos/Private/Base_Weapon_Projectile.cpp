// Fill out your copyright notice in the Description page of Project Settings.

#include "Base_Weapon_Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
ABase_Weapon_Projectile::ABase_Weapon_Projectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->OnComponentHit.AddDynamic(this, &ABase_Weapon_Projectile::OnHit);
	RootComponent = CollisionComp;

	projectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile body"));
	projectileMesh->SetupAttachment(RootComponent);

	// Use a ProjectileMovementComponent to govern this projectile's movement
	projectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	projectileMovementComponent->InitialSpeed = 3000.0f;
	projectileMovementComponent->MaxSpeed = 3000.f;
	projectileMovementComponent->bRotationFollowsVelocity = true;
	projectileMovementComponent->bShouldBounce = true;

	InitialLifeSpan = 3.0f;
}

// Called when the game starts or when spawned
void ABase_Weapon_Projectile::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	
}

// Called every frame
void ABase_Weapon_Projectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABase_Weapon_Projectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());

		Destroy();
	}
}

