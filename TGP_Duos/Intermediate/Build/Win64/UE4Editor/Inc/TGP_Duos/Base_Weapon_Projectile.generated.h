// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TGP_DUOS_Base_Weapon_Projectile_generated_h
#error "Base_Weapon_Projectile.generated.h already included, missing '#pragma once' in Base_Weapon_Projectile.h"
#endif
#define TGP_DUOS_Base_Weapon_Projectile_generated_h

#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABase_Weapon_Projectile(); \
	friend struct Z_Construct_UClass_ABase_Weapon_Projectile_Statics; \
public: \
	DECLARE_CLASS(ABase_Weapon_Projectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Duos"), NO_API) \
	DECLARE_SERIALIZER(ABase_Weapon_Projectile)


#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABase_Weapon_Projectile(); \
	friend struct Z_Construct_UClass_ABase_Weapon_Projectile_Statics; \
public: \
	DECLARE_CLASS(ABase_Weapon_Projectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Duos"), NO_API) \
	DECLARE_SERIALIZER(ABase_Weapon_Projectile)


#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABase_Weapon_Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABase_Weapon_Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABase_Weapon_Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABase_Weapon_Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABase_Weapon_Projectile(ABase_Weapon_Projectile&&); \
	NO_API ABase_Weapon_Projectile(const ABase_Weapon_Projectile&); \
public:


#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABase_Weapon_Projectile(ABase_Weapon_Projectile&&); \
	NO_API ABase_Weapon_Projectile(const ABase_Weapon_Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABase_Weapon_Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABase_Weapon_Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABase_Weapon_Projectile)


#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DamageDealtPerHit() { return STRUCT_OFFSET(ABase_Weapon_Projectile, DamageDealtPerHit); } \
	FORCEINLINE static uint32 __PPO__projectileMovementComponent() { return STRUCT_OFFSET(ABase_Weapon_Projectile, projectileMovementComponent); } \
	FORCEINLINE static uint32 __PPO__projectileMesh() { return STRUCT_OFFSET(ABase_Weapon_Projectile, projectileMesh); } \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ABase_Weapon_Projectile, CollisionComp); }


#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_Projectile_h_9_PROLOG
#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_Projectile_h_12_RPC_WRAPPERS \
	TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_Projectile_h_12_INCLASS \
	TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_Projectile_h_12_INCLASS_NO_PURE_DECLS \
	TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGP_Duos_Source_TGP_Duos_Public_Base_Weapon_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
