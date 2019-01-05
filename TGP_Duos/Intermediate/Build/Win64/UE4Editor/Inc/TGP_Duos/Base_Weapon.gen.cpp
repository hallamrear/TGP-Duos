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
	TGP_DUOS_API UFunction* Z_Construct_UFunction_ABase_Weapon_Shoot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TGP_DUOS_API UClass* Z_Construct_UClass_ABase_Weapon_Projectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABase_Weapon_Shoot = FName(TEXT("Shoot"));
	void ABase_Weapon::Shoot(UWorld* passedWorld, FVector playerPos, FRotator playerRot)
	{
		Base_Weapon_eventShoot_Parms Parms;
		Parms.passedWorld=passedWorld;
		Parms.playerPos=playerPos;
		Parms.playerRot=playerRot;
		ProcessEvent(FindFunctionChecked(NAME_ABase_Weapon_Shoot),&Parms);
	}
	void ABase_Weapon::StaticRegisterNativesABase_Weapon()
	{
		UClass* Class = ABase_Weapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Shoot", &ABase_Weapon::execShoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABase_Weapon_Shoot_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerRot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerPos;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_passedWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABase_Weapon_Shoot_Statics::NewProp_playerRot = { UE4CodeGen_Private::EPropertyClass::Struct, "playerRot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Base_Weapon_eventShoot_Parms, playerRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABase_Weapon_Shoot_Statics::NewProp_playerPos = { UE4CodeGen_Private::EPropertyClass::Struct, "playerPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Base_Weapon_eventShoot_Parms, playerPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABase_Weapon_Shoot_Statics::NewProp_passedWorld = { UE4CodeGen_Private::EPropertyClass::Object, "passedWorld", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Base_Weapon_eventShoot_Parms, passedWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABase_Weapon_Shoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABase_Weapon_Shoot_Statics::NewProp_playerRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABase_Weapon_Shoot_Statics::NewProp_playerPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABase_Weapon_Shoot_Statics::NewProp_passedWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABase_Weapon_Shoot_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Shoot" },
		{ "ModuleRelativePath", "Public/Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABase_Weapon_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABase_Weapon, "Shoot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08820C00, sizeof(Base_Weapon_eventShoot_Parms), Z_Construct_UFunction_ABase_Weapon_Shoot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABase_Weapon_Shoot_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABase_Weapon_Shoot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABase_Weapon_Shoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABase_Weapon_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABase_Weapon_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABase_Weapon_NoRegister()
	{
		return ABase_Weapon::StaticClass();
	}
	struct Z_Construct_UClass_ABase_Weapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bodyScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bodyScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bodyRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bodyRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_projectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_projectileClass;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_ABase_Weapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABase_Weapon_Shoot, "Shoot" }, // 610641523
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Base_Weapon.h" },
		{ "ModuleRelativePath", "Public/Base_Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_bodyScale_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_bodyScale = { UE4CodeGen_Private::EPropertyClass::Struct, "bodyScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABase_Weapon, bodyScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_bodyScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_bodyScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_bodyRotation_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_bodyRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "bodyRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABase_Weapon, bodyRotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_bodyRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_bodyRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Weapon_Statics::NewProp_projectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Base_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABase_Weapon_Statics::NewProp_projectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "projectileClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010005, 1, nullptr, STRUCT_OFFSET(ABase_Weapon, projectileClass), Z_Construct_UClass_ABase_Weapon_Projectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_projectileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Weapon_Statics::NewProp_projectileClass_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_bodyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_bodyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Weapon_Statics::NewProp_projectileClass,
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
		FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ABase_Weapon, 3336887560);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABase_Weapon(Z_Construct_UClass_ABase_Weapon, &ABase_Weapon::StaticClass, TEXT("/Script/TGP_Duos"), TEXT("ABase_Weapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABase_Weapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
