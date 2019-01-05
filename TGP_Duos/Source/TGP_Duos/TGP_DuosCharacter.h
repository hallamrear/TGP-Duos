// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TGP_DuosCharacter.generated.h"

class UInputComponent;

UCLASS(config=Game)
class ATGP_DuosCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	class USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;
	UPROPERTY(EditDefaultsOnly, Category = Weapon)
	TSubclassOf<class ABase_Weapon> weaponOne;
	UPROPERTY(EditDefaultsOnly, Category = Weapon)
	TSubclassOf<class ABase_Weapon> weaponTwo;
	UPROPERTY(EditDefaultsOnly, Category = Weapon)
	TSubclassOf<class ABase_Weapon> weaponThree;
	UPROPERTY(EditDefaultsOnly, Category = Weapon)
	class UStaticMeshComponent * weaponMesh;
	UPROPERTY(VisibleDefaultsOnly)
	UStaticMesh* tempBodyAsset;
	UPROPERTY(VisibleDefaultsOnly, Category = Weapon)
	class USceneComponent * muzzleLocation;

	int currentWeapon = 1;

public:
	ATGP_DuosCharacter();


protected:
	virtual void BeginPlay();
	virtual void PostInitializeComponents();

public:
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;
	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;
	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	FVector GunOffset;
	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	class USoundBase* FireSound;
	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	class UAnimMontage* FireAnimation;


protected:
	
	void OnFire();
	void MoveForward(float Val);
	void MoveRight(float Val);
	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);

	//Handles equiping weapon keys.
	void EquipWeapon_1();
	void EquipWeapon_2();
	void EquipWeapon_3();
	
protected:
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

public:
	FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

};

