// Fill out your copyright notice in the Description page of Project Settings.

#include "Jump_Pad.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PrimitiveComponent.h"
#include "TGP_DuosCharacter.h"
#include "Classes/GameFramework/CharacterMovementComponent.h"


// Sets default values
AJump_Pad::AJump_Pad()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	padModel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Jump-pad Model"));
	RootComponent = padModel;

	collisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Jump-pad Collision Box"));
	collisionBox->SetupAttachment(padModel);



	padParticleEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Jump-pad Particle System"));
	padParticleEmitter->SetupAttachment(padModel);

	jumpTime = 2.0f;
}

// Called when the game starts or when spawned
void AJump_Pad::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AJump_Pad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector AJump_Pad::LaunchData(FVector targetLocation, AActor* OtherActor)
{
	FVector jumpVelocity;
	FVector direction = targetLocation - OtherActor->GetActorLocation();

	direction = FVector(direction.X, direction.Y, 0.0f);			//Removing Z component from direction for later use

	jumpVelocity = direction / jumpTime;							//Setting jumpVelocity X component to X = x/t

	jumpVelocity.Z = ((targetLocation.Z - this->GetActorLocation().Z) / jumpTime) + ((980 * jumpTime) / 2);		//Setting jumpVelocity Z component to Z = (y/t) + (gt/2)

	return jumpVelocity;
}

void AJump_Pad::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (ATGP_DuosCharacter* character = Cast<ATGP_DuosCharacter>(OtherActor))
	{
		UCharacterMovementComponent* movementComp = character->GetCharacterMovement();
		character->Jump();
		movementComp->Velocity = LaunchData(targetLocation->GetActorLocation(), OtherActor);
	}

}
