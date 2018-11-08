// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGP_Duos/TGP_DuosGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTGP_DuosGameMode() {}
// Cross Module References
	TGP_DUOS_API UClass* Z_Construct_UClass_ATGP_DuosGameMode_NoRegister();
	TGP_DUOS_API UClass* Z_Construct_UClass_ATGP_DuosGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TGP_Duos();
// End Cross Module References
	void ATGP_DuosGameMode::StaticRegisterNativesATGP_DuosGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATGP_DuosGameMode_NoRegister()
	{
		return ATGP_DuosGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATGP_DuosGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATGP_DuosGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TGP_Duos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATGP_DuosGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TGP_DuosGameMode.h" },
		{ "ModuleRelativePath", "TGP_DuosGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATGP_DuosGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATGP_DuosGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATGP_DuosGameMode_Statics::ClassParams = {
		&ATGP_DuosGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATGP_DuosGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATGP_DuosGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATGP_DuosGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATGP_DuosGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATGP_DuosGameMode, 3521007178);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATGP_DuosGameMode(Z_Construct_UClass_ATGP_DuosGameMode, &ATGP_DuosGameMode::StaticClass, TEXT("/Script/TGP_Duos"), TEXT("ATGP_DuosGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATGP_DuosGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
