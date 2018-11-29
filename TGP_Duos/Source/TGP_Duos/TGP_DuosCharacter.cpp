// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TGP_DuosCharacter.h"
#include "TGP_DuosProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Base_Weapon.h"
#include "Base_Weapon_Projectile.h"
#include <Runtime/Engine/Classes/Engine/Engine.h>

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// ATGP_DuosCharacter

ATGP_DuosCharacter::ATGP_DuosCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->RelativeRotation = FRotator(1.9f, -19.19f, 5.2f);
	Mesh1P->RelativeLocation = FVector(-0.5f, -4.4f, -155.7f);

	// Create a gun mesh component
	weaponMesh = weaponOne->GetDefaultObject<ABase_Weapon>()->GetWeaponMesh();
	weaponMesh->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	weaponMesh->bCastDynamicShadow = false;
	weaponMesh->CastShadow = false;
	weaponMesh->SetupAttachment(RootComponent);

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Note: The ProjectileClass and the skeletal mesh/anim bluepwrints for Mesh1P, FP_Gun, and VR_Gun 
	// are set in the derived blueprint asset named MyCharacter to avoid direct content references in C++.
}

void ATGP_DuosCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	weaponOne->GetDefaultObject<ABase_Weapon>()->GetWeaponMesh()->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

}	

//////////////////////////////////////////////////////////////////////////
// Input

void ATGP_DuosCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ATGP_DuosCharacter::OnFire);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &ATGP_DuosCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ATGP_DuosCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ATGP_DuosCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ATGP_DuosCharacter::LookUpAtRate);

	//_Weapons_
	//Equiping buttons for 3 weapons.
	PlayerInputComponent->BindAction("Weapon_1", IE_Pressed, this, &ATGP_DuosCharacter::EquipWeapon_1);
	PlayerInputComponent->BindAction("Weapon_2", IE_Pressed, this, &ATGP_DuosCharacter::EquipWeapon_2);
	PlayerInputComponent->BindAction("Weapon_3", IE_Pressed, this, &ATGP_DuosCharacter::EquipWeapon_3);
}

void ATGP_DuosCharacter::EquipWeapon_1()
{
	GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, TEXT("Weapon 1 button pressed."));

	if (hasWeaponOne)
	{

	}
}

void ATGP_DuosCharacter::EquipWeapon_2()
{
	GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, TEXT("Weapon 2 button pressed."));

	if (hasWeaponTwo)
	{

	}
}

void ATGP_DuosCharacter::EquipWeapon_3()
{
	GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, TEXT("Weapon 3 button pressed."));

	if (hasWeaponThree)
	{

	}
}

void ATGP_DuosCharacter::OnFire()
{
	weaponOne->GetDefaultObject<ABase_Weapon>()->Shoot();

	// try and play the sound if specified
	if (FireSound != NULL)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation != NULL)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != NULL)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
}

void ATGP_DuosCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ATGP_DuosCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ATGP_DuosCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ATGP_DuosCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}