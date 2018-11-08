// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGP_Duos/TGP_DuosHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTGP_DuosHUD() {}
// Cross Module References
	TGP_DUOS_API UClass* Z_Construct_UClass_ATGP_DuosHUD_NoRegister();
	TGP_DUOS_API UClass* Z_Construct_UClass_ATGP_DuosHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TGP_Duos();
// End Cross Module References
	void ATGP_DuosHUD::StaticRegisterNativesATGP_DuosHUD()
	{
	}
	UClass* Z_Construct_UClass_ATGP_DuosHUD_NoRegister()
	{
		return ATGP_DuosHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATGP_DuosHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATGP_DuosHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TGP_Duos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATGP_DuosHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TGP_DuosHUD.h" },
		{ "ModuleRelativePath", "TGP_DuosHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATGP_DuosHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATGP_DuosHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATGP_DuosHUD_Statics::ClassParams = {
		&ATGP_DuosHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATGP_DuosHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATGP_DuosHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATGP_DuosHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATGP_DuosHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATGP_DuosHUD, 2740449776);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATGP_DuosHUD(Z_Construct_UClass_ATGP_DuosHUD, &ATGP_DuosHUD::StaticClass, TEXT("/Script/TGP_Duos"), TEXT("ATGP_DuosHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATGP_DuosHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
