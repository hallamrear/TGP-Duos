// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
#ifdef TGP_DUOS_Jump_Pad_generated_h
#error "Jump_Pad.generated.h already included, missing '#pragma once' in Jump_Pad.h"
#endif
#define TGP_DUOS_Jump_Pad_generated_h

#define TGP_Duos_Source_TGP_Duos_Jump_Pad_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotifyActorBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyActorBeginOverlap(Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchData) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_targetPosition); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->LaunchData(Z_Param_targetPosition,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define TGP_Duos_Source_TGP_Duos_Jump_Pad_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotifyActorBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyActorBeginOverlap(Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchData) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_targetPosition); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->LaunchData(Z_Param_targetPosition,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define TGP_Duos_Source_TGP_Duos_Jump_Pad_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJump_Pad(); \
	friend struct Z_Construct_UClass_AJump_Pad_Statics; \
public: \
	DECLARE_CLASS(AJump_Pad, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Duos"), NO_API) \
	DECLARE_SERIALIZER(AJump_Pad)


#define TGP_Duos_Source_TGP_Duos_Jump_Pad_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAJump_Pad(); \
	friend struct Z_Construct_UClass_AJump_Pad_Statics; \
public: \
	DECLARE_CLASS(AJump_Pad, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Duos"), NO_API) \
	DECLARE_SERIALIZER(AJump_Pad)


#define TGP_Duos_Source_TGP_Duos_Jump_Pad_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AJump_Pad(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AJump_Pad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJump_Pad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJump_Pad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJump_Pad(AJump_Pad&&); \
	NO_API AJump_Pad(const AJump_Pad&); \
public:


#define TGP_Duos_Source_TGP_Duos_Jump_Pad_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJump_Pad(AJump_Pad&&); \
	NO_API AJump_Pad(const AJump_Pad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJump_Pad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJump_Pad); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJump_Pad)


#define TGP_Duos_Source_TGP_Duos_Jump_Pad_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__padModel() { return STRUCT_OFFSET(AJump_Pad, padModel); } \
	FORCEINLINE static uint32 __PPO__padParticleEmitter() { return STRUCT_OFFSET(AJump_Pad, padParticleEmitter); } \
	FORCEINLINE static uint32 __PPO__collisionBox() { return STRUCT_OFFSET(AJump_Pad, collisionBox); } \
	FORCEINLINE static uint32 __PPO__targetLocation() { return STRUCT_OFFSET(AJump_Pad, targetLocation); } \
	FORCEINLINE static uint32 __PPO__jumpTime() { return STRUCT_OFFSET(AJump_Pad, jumpTime); }


#define TGP_Duos_Source_TGP_Duos_Jump_Pad_h_14_PROLOG
#define TGP_Duos_Source_TGP_Duos_Jump_Pad_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Duos_Source_TGP_Duos_Jump_Pad_h_17_PRIVATE_PROPERTY_OFFSET \
	TGP_Duos_Source_TGP_Duos_Jump_Pad_h_17_RPC_WRAPPERS \
	TGP_Duos_Source_TGP_Duos_Jump_Pad_h_17_INCLASS \
	TGP_Duos_Source_TGP_Duos_Jump_Pad_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGP_Duos_Source_TGP_Duos_Jump_Pad_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Duos_Source_TGP_Duos_Jump_Pad_h_17_PRIVATE_PROPERTY_OFFSET \
	TGP_Duos_Source_TGP_Duos_Jump_Pad_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TGP_Duos_Source_TGP_Duos_Jump_Pad_h_17_INCLASS_NO_PURE_DECLS \
	TGP_Duos_Source_TGP_Duos_Jump_Pad_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGP_Duos_Source_TGP_Duos_Jump_Pad_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
