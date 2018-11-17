// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGP_Duos/Moving_Platform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoving_Platform() {}
// Cross Module References
	TGP_DUOS_API UClass* Z_Construct_UClass_AMoving_Platform_NoRegister();
	TGP_DUOS_API UClass* Z_Construct_UClass_AMoving_Platform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TGP_Duos();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMoving_Platform::StaticRegisterNativesAMoving_Platform()
	{
	}
	UClass* Z_Construct_UClass_AMoving_Platform_NoRegister()
	{
		return AMoving_Platform::StaticClass();
	}
	struct Z_Construct_UClass_AMoving_Platform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_movingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_splinePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_splinePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_platformBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_platformBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoving_Platform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TGP_Duos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoving_Platform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Moving_Platform.h" },
		{ "ModuleRelativePath", "Moving_Platform.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoving_Platform_Statics::NewProp_distance_MetaData[] = {
		{ "Category", "Moving_Platform" },
		{ "ModuleRelativePath", "Moving_Platform.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoving_Platform_Statics::NewProp_distance = { UE4CodeGen_Private::EPropertyClass::Float, "distance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(AMoving_Platform, distance), METADATA_PARAMS(Z_Construct_UClass_AMoving_Platform_Statics::NewProp_distance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMoving_Platform_Statics::NewProp_distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoving_Platform_Statics::NewProp_movingSpeed_MetaData[] = {
		{ "Category", "Moving_Platform" },
		{ "ModuleRelativePath", "Moving_Platform.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoving_Platform_Statics::NewProp_movingSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "movingSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMoving_Platform, movingSpeed), METADATA_PARAMS(Z_Construct_UClass_AMoving_Platform_Statics::NewProp_movingSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMoving_Platform_Statics::NewProp_movingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoving_Platform_Statics::NewProp_splinePath_MetaData[] = {
		{ "Category", "Moving_Platform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Moving_Platform.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoving_Platform_Statics::NewProp_splinePath = { UE4CodeGen_Private::EPropertyClass::Object, "splinePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AMoving_Platform, splinePath), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoving_Platform_Statics::NewProp_splinePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMoving_Platform_Statics::NewProp_splinePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoving_Platform_Statics::NewProp_platformBase_MetaData[] = {
		{ "Category", "Moving_Platform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Moving_Platform.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoving_Platform_Statics::NewProp_platformBase = { UE4CodeGen_Private::EPropertyClass::Object, "platformBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AMoving_Platform, platformBase), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoving_Platform_Statics::NewProp_platformBase_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMoving_Platform_Statics::NewProp_platformBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoving_Platform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoving_Platform_Statics::NewProp_distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoving_Platform_Statics::NewProp_movingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoving_Platform_Statics::NewProp_splinePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoving_Platform_Statics::NewProp_platformBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoving_Platform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoving_Platform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMoving_Platform_Statics::ClassParams = {
		&AMoving_Platform::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AMoving_Platform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMoving_Platform_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMoving_Platform_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMoving_Platform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoving_Platform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMoving_Platform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMoving_Platform, 1472772005);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMoving_Platform(Z_Construct_UClass_AMoving_Platform, &AMoving_Platform::StaticClass, TEXT("/Script/TGP_Duos"), TEXT("AMoving_Platform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoving_Platform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
