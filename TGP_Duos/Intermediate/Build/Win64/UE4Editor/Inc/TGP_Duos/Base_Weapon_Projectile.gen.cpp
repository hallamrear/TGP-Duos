// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGP_Duos/Public/Base_Weapon_Projectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBase_Weapon_Projectile() {}
// Cross Module References
	TGP_DUOS_API UClass* Z_Construct_UClass_ABase_Weapon_Projectile_NoRegister();
	TGP_DUOS_API UClass* Z_Construct_UClass_ABase_Weapon_Projectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TGP_Duos();
	TGP_DUOS_API UFunction* Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	void ABase_Weapon_Projectile::StaticRegisterNativesABase_Weapon_Projectile()
	{
		UClass* Class = ABase_Weapon_Projectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &ABase_Weapon_Projectile::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics
	{
		struct Base_Weapon_Projectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(Base_Weapon_Projectile_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::NewProp_NormalImpulse = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalImpulse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Base_Weapon_Projectile_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Base_Weapon_Projectile_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Base_Weapon_Projectile_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::NewProp_HitComp = { UE4CodeGen_Private::EPropertyClass::Object, "HitComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Base_Weapon_Projectile_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::NewProp_HitComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::NewProp_HitComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Base_Weapon_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABase_Weapon_Projectile, "OnHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C20401, sizeof(Base_Weapon_Projectile_eventOnHit_Parms), Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABase_Weapon_Projectile_NoRegister()
	{
		return ABase_Weapon_Projectile::StaticClass();
	}
	struct Z_Construct_UClass_ABase_Weapon_Projectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_projectileMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projectileMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_projectileMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projectileMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageDealtPerHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DamageDealtPerHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABase_Weapon_Projectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TGP_Duos,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABase_Weapon_Projectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABase_Weapon_Projectile_OnHit, "OnHit" }, // 3447163234
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Projectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Base_Weapon_Projectile.h" },
		{ "ModuleRelativePath", "Public/Base_Weapon_Projectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Base_Weapon_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_CollisionComp = { UE4CodeGen_Private::EPropertyClass::Object, "CollisionComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ABase_Weapon_Projectile, CollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_CollisionComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_CollisionComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_projectileMesh_MetaData[] = {
		{ "Category", "Base_Weapon_Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Base_Weapon_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_projectileMesh = { UE4CodeGen_Private::EPropertyClass::Object, "projectileMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ABase_Weapon_Projectile, projectileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_projectileMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_projectileMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_projectileMovementComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Base_Weapon_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_projectileMovementComponent = { UE4CodeGen_Private::EPropertyClass::Object, "projectileMovementComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ABase_Weapon_Projectile, projectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_projectileMovementComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_projectileMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_DamageDealtPerHit_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Base_Weapon_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_DamageDealtPerHit = { UE4CodeGen_Private::EPropertyClass::Int, "DamageDealtPerHit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(ABase_Weapon_Projectile, DamageDealtPerHit), METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_DamageDealtPerHit_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_DamageDealtPerHit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABase_Weapon_Projectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_CollisionComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_projectileMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_projectileMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_DamageDealtPerHit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABase_Weapon_Projectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABase_Weapon_Projectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABase_Weapon_Projectile_Statics::ClassParams = {
		&ABase_Weapon_Projectile::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ABase_Weapon_Projectile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Projectile_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Projectile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Projectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABase_Weapon_Projectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABase_Weapon_Projectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABase_Weapon_Projectile, 2929873188);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABase_Weapon_Projectile(Z_Construct_UClass_ABase_Weapon_Projectile, &ABase_Weapon_Projectile::StaticClass, TEXT("/Script/TGP_Duos"), TEXT("ABase_Weapon_Projectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABase_Weapon_Projectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
