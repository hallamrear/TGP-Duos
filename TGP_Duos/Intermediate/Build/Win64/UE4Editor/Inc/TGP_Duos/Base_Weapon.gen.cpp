// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGP_Duos/Public/Base_Weapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBase_Weapon() {}
// Cross Module References
	TGP_DUOS_API UClass* Z_Construct_UClass_ABase_Weapon_NoRegister();
	TGP_DUOS_API UClass* Z_Construct_UClass_ABase_Weapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TGP_Duos();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TGP_DUOS_API UClass* Z_Construct_UClass_ABase_Weapon_Projectile_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABase_Weapon::StaticRegisterNativesABase_Weapon()
	{
	}
	UClass* Z_Construct_UClass_ABase_Weapon_NoRegister()
	{
		return ABase_Weapon::StaticClass();
	}
	struct Z_Construct_UClass_ABase_Weapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_projectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_projectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_muzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_muzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_weaponBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_emptyRootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_emptyRootComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABase_Weapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TGP_Duos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Base_Weapon.h" },
		{ "ModuleRelativePath", "Public/Base_Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_projectileClass_MetaData[] = {
		{ "Category", "Base_Weapon" },
		{ "ModuleRelativePath", "Public/Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_projectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "projectileClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000020001, 1, nullptr, STRUCT_OFFSET(ABase_Weapon, projectileClass), Z_Construct_UClass_ABase_Weapon_Projectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_projectileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_projectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_muzzleLocation_MetaData[] = {
		{ "Category", "Base_Weapon" },
		{ "ModuleRelativePath", "Public/Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_muzzleLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "muzzleLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020001, 1, nullptr, STRUCT_OFFSET(ABase_Weapon, muzzleLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_muzzleLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_muzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_weaponBody_MetaData[] = {
		{ "Category", "Base_Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_weaponBody = { UE4CodeGen_Private::EPropertyClass::Object, "weaponBody", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ABase_Weapon, weaponBody), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_weaponBody_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_weaponBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_emptyRootComponent_MetaData[] = {
		{ "Category", "Base_Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_emptyRootComponent = { UE4CodeGen_Private::EPropertyClass::Object, "emptyRootComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ABase_Weapon, emptyRootComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_emptyRootComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_emptyRootComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABase_Weapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_projectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_muzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_weaponBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_emptyRootComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABase_Weapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABase_Weapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABase_Weapon_Statics::ClassParams = {
		&ABase_Weapon::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ABase_Weapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABase_Weapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABase_Weapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABase_Weapon, 4094652915);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABase_Weapon(Z_Construct_UClass_ABase_Weapon, &ABase_Weapon::StaticClass, TEXT("/Script/TGP_Duos"), TEXT("ABase_Weapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABase_Weapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
