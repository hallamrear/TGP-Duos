// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGP_Duos/Jump_Pad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJump_Pad() {}
// Cross Module References
	TGP_DUOS_API UClass* Z_Construct_UClass_AJump_Pad_NoRegister();
	TGP_DUOS_API UClass* Z_Construct_UClass_AJump_Pad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TGP_Duos();
	TGP_DUOS_API UFunction* Z_Construct_UFunction_AJump_Pad_LaunchData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TGP_DUOS_API UFunction* Z_Construct_UFunction_AJump_Pad_NotifyActorBeginOverlap();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AJump_Pad::StaticRegisterNativesAJump_Pad()
	{
		UClass* Class = AJump_Pad::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LaunchData", &AJump_Pad::execLaunchData },
			{ "NotifyActorBeginOverlap", &AJump_Pad::execNotifyActorBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AJump_Pad_LaunchData_Statics
	{
		struct Jump_Pad_eventLaunchData_Parms
		{
			FVector targetPosition;
			AActor* OtherActor;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AJump_Pad_LaunchData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Jump_Pad_eventLaunchData_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AJump_Pad_LaunchData_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Jump_Pad_eventLaunchData_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AJump_Pad_LaunchData_Statics::NewProp_targetPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "targetPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Jump_Pad_eventLaunchData_Parms, targetPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJump_Pad_LaunchData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJump_Pad_LaunchData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJump_Pad_LaunchData_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJump_Pad_LaunchData_Statics::NewProp_targetPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJump_Pad_LaunchData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Jump_Pad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJump_Pad_LaunchData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJump_Pad, "LaunchData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(Jump_Pad_eventLaunchData_Parms), Z_Construct_UFunction_AJump_Pad_LaunchData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AJump_Pad_LaunchData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJump_Pad_LaunchData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AJump_Pad_LaunchData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJump_Pad_LaunchData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJump_Pad_LaunchData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJump_Pad_NotifyActorBeginOverlap_Statics
	{
		struct Jump_Pad_eventNotifyActorBeginOverlap_Parms
		{
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AJump_Pad_NotifyActorBeginOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Jump_Pad_eventNotifyActorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJump_Pad_NotifyActorBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJump_Pad_NotifyActorBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJump_Pad_NotifyActorBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Jump_Pad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AJump_Pad_NotifyActorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJump_Pad, "NotifyActorBeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Jump_Pad_eventNotifyActorBeginOverlap_Parms), Z_Construct_UFunction_AJump_Pad_NotifyActorBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AJump_Pad_NotifyActorBeginOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJump_Pad_NotifyActorBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AJump_Pad_NotifyActorBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJump_Pad_NotifyActorBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AJump_Pad_NotifyActorBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AJump_Pad_NoRegister()
	{
		return AJump_Pad::StaticClass();
	}
	struct Z_Construct_UClass_AJump_Pad_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jumpTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_jumpTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_collisionBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collisionBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_padParticleEmitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_padParticleEmitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_padModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_padModel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJump_Pad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TGP_Duos,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AJump_Pad_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AJump_Pad_LaunchData, "LaunchData" }, // 3954897813
		{ &Z_Construct_UFunction_AJump_Pad_NotifyActorBeginOverlap, "NotifyActorBeginOverlap" }, // 857705212
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJump_Pad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Jump_Pad.h" },
		{ "ModuleRelativePath", "Jump_Pad.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJump_Pad_Statics::NewProp_jumpTime_MetaData[] = {
		{ "Category", "Jump_Pad" },
		{ "ModuleRelativePath", "Jump_Pad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJump_Pad_Statics::NewProp_jumpTime = { UE4CodeGen_Private::EPropertyClass::Float, "jumpTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(AJump_Pad, jumpTime), METADATA_PARAMS(Z_Construct_UClass_AJump_Pad_Statics::NewProp_jumpTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AJump_Pad_Statics::NewProp_jumpTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJump_Pad_Statics::NewProp_targetLocation_MetaData[] = {
		{ "Category", "Jump_Pad" },
		{ "ModuleRelativePath", "Jump_Pad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJump_Pad_Statics::NewProp_targetLocation = { UE4CodeGen_Private::EPropertyClass::Object, "targetLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AJump_Pad, targetLocation), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJump_Pad_Statics::NewProp_targetLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AJump_Pad_Statics::NewProp_targetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJump_Pad_Statics::NewProp_collisionBox_MetaData[] = {
		{ "Category", "Jump_Pad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jump_Pad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJump_Pad_Statics::NewProp_collisionBox = { UE4CodeGen_Private::EPropertyClass::Object, "collisionBox", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AJump_Pad, collisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJump_Pad_Statics::NewProp_collisionBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_AJump_Pad_Statics::NewProp_collisionBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJump_Pad_Statics::NewProp_padParticleEmitter_MetaData[] = {
		{ "Category", "Jump_Pad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jump_Pad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJump_Pad_Statics::NewProp_padParticleEmitter = { UE4CodeGen_Private::EPropertyClass::Object, "padParticleEmitter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AJump_Pad, padParticleEmitter), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJump_Pad_Statics::NewProp_padParticleEmitter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AJump_Pad_Statics::NewProp_padParticleEmitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJump_Pad_Statics::NewProp_padModel_MetaData[] = {
		{ "Category", "Jump_Pad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jump_Pad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJump_Pad_Statics::NewProp_padModel = { UE4CodeGen_Private::EPropertyClass::Object, "padModel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AJump_Pad, padModel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJump_Pad_Statics::NewProp_padModel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AJump_Pad_Statics::NewProp_padModel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJump_Pad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJump_Pad_Statics::NewProp_jumpTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJump_Pad_Statics::NewProp_targetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJump_Pad_Statics::NewProp_collisionBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJump_Pad_Statics::NewProp_padParticleEmitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJump_Pad_Statics::NewProp_padModel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJump_Pad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJump_Pad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJump_Pad_Statics::ClassParams = {
		&AJump_Pad::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AJump_Pad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AJump_Pad_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AJump_Pad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AJump_Pad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJump_Pad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJump_Pad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJump_Pad, 409884957);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJump_Pad(Z_Construct_UClass_AJump_Pad, &AJump_Pad::StaticClass, TEXT("/Script/TGP_Duos"), TEXT("AJump_Pad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJump_Pad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
