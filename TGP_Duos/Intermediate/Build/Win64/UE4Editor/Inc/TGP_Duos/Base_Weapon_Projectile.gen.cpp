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
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ABase_Weapon_Projectile::StaticRegisterNativesABase_Weapon_Projectile()
	{
	}
	UClass* Z_Construct_UClass_ABase_Weapon_Projectile_NoRegister()
	{
		return ABase_Weapon_Projectile::StaticClass();
	}
	struct Z_Construct_UClass_ABase_Weapon_Projectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_projectileMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projectileMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_emptyRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_emptyRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABase_Weapon_Projectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TGP_Duos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Projectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Base_Weapon_Projectile.h" },
		{ "ModuleRelativePath", "Public/Base_Weapon_Projectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_projectileMovementComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Base_Weapon_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_projectileMovementComponent = { UE4CodeGen_Private::EPropertyClass::Object, "projectileMovementComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ABase_Weapon_Projectile, projectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_projectileMovementComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_projectileMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_emptyRoot_MetaData[] = {
		{ "Category", "Base_Weapon_Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Base_Weapon_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_emptyRoot = { UE4CodeGen_Private::EPropertyClass::Object, "emptyRoot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ABase_Weapon_Projectile, emptyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_emptyRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_emptyRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABase_Weapon_Projectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_projectileMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Projectile_Statics::NewProp_emptyRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABase_Weapon_Projectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABase_Weapon_Projectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABase_Weapon_Projectile_Statics::ClassParams = {
		&ABase_Weapon_Projectile::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
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
	IMPLEMENT_CLASS(ABase_Weapon_Projectile, 3243153842);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABase_Weapon_Projectile(Z_Construct_UClass_ABase_Weapon_Projectile, &ABase_Weapon_Projectile::StaticClass, TEXT("/Script/TGP_Duos"), TEXT("ABase_Weapon_Projectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABase_Weapon_Projectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
