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

#include <string>

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// ATGP_DuosCharacter

ATGP_DuosCharacter::ATGP_DuosCharacter()
{
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
	RootComponent = GetCapsuleComponent();

	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->RelativeRotation = FRotator(1.9f, -19.19f, 5.2f);
	Mesh1P->RelativeLocation = FVector(-0.5f, -4.4f, -155.7f);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	muzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	muzzleLocation->SetupAttachment(weaponMesh);
	muzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	weaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Current Weapon Body"));//example
	weaponMesh->SetOnlyOwnerSee(true);
	weaponMesh->bCastDynamicShadow = false;
	weaponMesh->CastShadow = false;
	weaponMesh->SetupAttachment(muzzleLocation);
}

void ATGP_DuosCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ATGP_DuosCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	muzzleLocation->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	auto weaponCDO = weaponOne->GetDefaultObject<ABase_Weapon>();
	tempBodyAsset = weaponCDO->GetWeaponMesh()->GetStaticMesh();
	weaponMesh->SetStaticMesh(tempBodyAsset);
	weaponMesh->SetRelativeRotation(FQuat(weaponCDO->GetWeaponBodyRotation().X, weaponCDO->GetWeaponBodyRotation().Y, weaponCDO->GetWeaponBodyRotation().Z, 1.0f));
	weaponMesh->SetWorldScale3D(FVector(weaponCDO->GetWeaponBodyScale()));
	currentWeapon = 1;
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
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ATGP_DuosCharacter::OnFire);
	PlayerInputComponent->BindAxis("MoveForward", this, &ATGP_DuosCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ATGP_DuosCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ATGP_DuosCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ATGP_DuosCharacter::LookUpAtRate);

	//_Weapons
	PlayerInputComponent->BindAction("Weapon_1", IE_Pressed, this, &ATGP_DuosCharacter::EquipWeapon_1);
	PlayerInputComponent->BindAction("Weapon_2", IE_Pressed, this, &ATGP_DuosCharacter::EquipWeapon_2);
	PlayerInputComponent->BindAction("Weapon_3", IE_Pressed, this, &ATGP_DuosCharacter::EquipWeapon_3);
}

void ATGP_DuosCharacter::EquipWeapon_1()
{
	if (currentWeapon != 1)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, TEXT("Weapon 1."));
		auto weaponCDO = weaponOne->GetDefaultObject<ABase_Weapon>();
		tempBodyAsset = weaponCDO->GetWeaponMesh()->GetStaticMesh();
		weaponMesh->SetStaticMesh(tempBodyAsset);
		weaponMesh->SetRelativeRotation(FQuat(weaponCDO->GetWeaponBodyRotation().X, weaponCDO->GetWeaponBodyRotation().Y, weaponCDO->GetWeaponBodyRotation().Z, 1.0f));
		weaponMesh->SetWorldScale3D(FVector(weaponCDO->GetWeaponBodyScale()));
		currentWeapon = 1;
	}
}

void ATGP_DuosCharacter::EquipWeapon_2()
{
	if (currentWeapon != 2)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, TEXT("Weapon 2."));
		auto weaponCDO = weaponTwo->GetDefaultObject<ABase_Weapon>();
		tempBodyAsset = weaponCDO->GetWeaponMesh()->GetStaticMesh();
		weaponMesh->SetStaticMesh(tempBodyAsset);
		weaponMesh->SetRelativeRotation(FQuat(weaponCDO->GetWeaponBodyRotation().X, weaponCDO->GetWeaponBodyRotation().Y, weaponCDO->GetWeaponBodyRotation().Z, 1.0f));
		weaponMesh->SetWorldScale3D(FVector(weaponCDO->GetWeaponBodyScale()));
		currentWeapon = 2;
	}
}

void ATGP_DuosCharacter::EquipWeapon_3()
{
	if (currentWeapon != 3)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, TEXT("Weapon 3."));
		auto weaponCDO = weaponThree->GetDefaultObject<ABase_Weapon>();
		tempBodyAsset = weaponCDO->GetWeaponMesh()->GetStaticMesh();
		weaponMesh->SetStaticMesh(tempBodyAsset);
		weaponMesh->SetRelativeRotation(FQuat(weaponCDO->GetWeaponBodyRotation().X, weaponCDO->GetWeaponBodyRotation().Y, weaponCDO->GetWeaponBodyRotation().Z, 1.0f));
		weaponMesh->SetWorldScale3D(FVector(weaponCDO->GetWeaponBodyScale()));
		currentWeapon = 3;
	}
}

void ATGP_DuosCharacter::OnFire()
{
	const FRotator SpawnRotation = GetControlRotation();
	const FVector SpawnLocation = ((muzzleLocation != nullptr) ? muzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);


	switch (currentWeapon)
	{
	case 1:
		weaponOne->GetDefaultObject<ABase_Weapon>()->Shoot(GetWorld(), SpawnLocation, SpawnRotation);
		break;
	case 2:
		weaponTwo->GetDefaultObject<ABase_Weapon>()->Shoot(GetWorld(), SpawnLocation, SpawnRotation);
		break;
	case 3:
		weaponThree->GetDefaultObject<ABase_Weapon>()->Shoot(GetWorld(), SpawnLocation, SpawnRotation);
		//Plays Sound
		
		break;
	}

	if (FireSound != NULL)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	//Plays Animations
	if (FireAnimation != NULL)
	{
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
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ATGP_DuosCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ATGP_DuosCharacter::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ATGP_DuosCharacter::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}