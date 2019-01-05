// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
struct FVector;
struct FRotator;
#ifdef TGP_DUOS_Base_Weapon_generated_h
#error "Base_Weapon.generated.h already included, missing '#pragma once' in Base_Weapon.h"
#endif
#define TGP_DUOS_Base_Weapon_generated_h

#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_RPC_WRAPPERS \
	virtual void Shoot_Implementation(UWorld* passedWorld, FVector playerPos, FRotator playerRot); \
 \
	DECLARE_FUNCTION(execShoot) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_passedWorld); \
		P_GET_STRUCT(FVector,Z_Param_playerPos); \
		P_GET_STRUCT(FRotator,Z_Param_playerRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Shoot_Implementation(Z_Param_passedWorld,Z_Param_playerPos,Z_Param_playerRot); \
		P_NATIVE_END; \
	}


#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Shoot_Implementation(UWorld* passedWorld, FVector playerPos, FRotator playerRot); \
 \
	DECLARE_FUNCTION(execShoot) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_passedWorld); \
		P_GET_STRUCT(FVector,Z_Param_playerPos); \
		P_GET_STRUCT(FRotator,Z_Param_playerRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Shoot_Implementation(Z_Param_passedWorld,Z_Param_playerPos,Z_Param_playerRot); \
		P_NATIVE_END; \
	}


#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_EVENT_PARMS \
	struct Base_Weapon_eventShoot_Parms \
	{ \
		UWorld* passedWorld; \
		FVector playerPos; \
		FRotator playerRot; \
	};


#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_CALLBACK_WRAPPERS
#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABase_Weapon(); \
	friend struct Z_Construct_UClass_ABase_Weapon_Statics; \
public: \
	DECLARE_CLASS(ABase_Weapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Duos"), NO_API) \
	DECLARE_SERIALIZER(ABase_Weapon)


#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABase_Weapon(); \
	friend struct Z_Construct_UClass_ABase_Weapon_Statics; \
public: \
	DECLARE_CLASS(ABase_Weapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Duos"), NO_API) \
	DECLARE_SERIALIZER(ABase_Weapon)


#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABase_Weapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABase_Weapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABase_Weapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABase_Weapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABase_Weapon(ABase_Weapon&&); \
	NO_API ABase_Weapon(const ABase_Weapon&); \
public:


#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABase_Weapon(ABase_Weapon&&); \
	NO_API ABase_Weapon(const ABase_Weapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABase_Weapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABase_Weapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABase_Weapon)


#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__emptyRootComponent() { return STRUCT_OFFSET(ABase_Weapon, emptyRootComponent); } \
	FORCEINLINE static uint32 __PPO__weaponBody() { return STRUCT_OFFSET(ABase_Weapon, weaponBody); } \
	FORCEINLINE static uint32 __PPO__projectileClass() { return STRUCT_OFFSET(ABase_Weapon, projectileClass); } \
	FORCEINLINE static uint32 __PPO__bodyRotation() { return STRUCT_OFFSET(ABase_Weapon, bodyRotation); } \
	FORCEINLINE static uint32 __PPO__bodyScale() { return STRUCT_OFFSET(ABase_Weapon, bodyScale); }


#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_12_PROLOG \
	TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_EVENT_PARMS


#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_PRIVATE_PROPERTY_OFFSET \
	TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_RPC_WRAPPERS \
	TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_CALLBACK_WRAPPERS \
	TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_INCLASS \
	TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_PRIVATE_PROPERTY_OFFSET \
	TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_CALLBACK_WRAPPERS \
	TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_INCLASS_NO_PURE_DECLS \
	TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
