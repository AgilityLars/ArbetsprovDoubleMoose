// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArbetsprovFPS2/PickupSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupSpawner() {}
// Cross Module References
	ARBETSPROVFPS2_API UClass* Z_Construct_UClass_APickupSpawner_NoRegister();
	ARBETSPROVFPS2_API UClass* Z_Construct_UClass_APickupSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArbetsprovFPS2();
	ARBETSPROVFPS2_API UFunction* Z_Construct_UFunction_APickupSpawner_Spawn();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void APickupSpawner::StaticRegisterNativesAPickupSpawner()
	{
		UClass* Class = APickupSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Spawn", &APickupSpawner::execSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickupSpawner_Spawn_Statics
	{
		struct PickupSpawner_eventSpawn_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupSpawner_Spawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PickupSpawner_eventSpawn_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupSpawner_Spawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupSpawner_Spawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupSpawner_Spawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PickupSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupSpawner_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupSpawner, nullptr, "Spawn", sizeof(PickupSpawner_eventSpawn_Parms), Z_Construct_UFunction_APickupSpawner_Spawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APickupSpawner_Spawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupSpawner_Spawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickupSpawner_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupSpawner_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickupSpawner_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickupSpawner_NoRegister()
	{
		return APickupSpawner::StaticClass();
	}
	struct Z_Construct_UClass_APickupSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RespawnTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArbetsprovFPS2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickupSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupSpawner_Spawn, "Spawn" }, // 2736073624
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickupSpawner.h" },
		{ "ModuleRelativePath", "PickupSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupSpawner_Statics::NewProp_SpawnHeight_MetaData[] = {
		{ "Category", "PickupSpawner" },
		{ "ModuleRelativePath", "PickupSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickupSpawner_Statics::NewProp_SpawnHeight = { "SpawnHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupSpawner, SpawnHeight), METADATA_PARAMS(Z_Construct_UClass_APickupSpawner_Statics::NewProp_SpawnHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickupSpawner_Statics::NewProp_SpawnHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupSpawner_Statics::NewProp_RespawnTime_MetaData[] = {
		{ "Category", "PickupSpawner" },
		{ "ModuleRelativePath", "PickupSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickupSpawner_Statics::NewProp_RespawnTime = { "RespawnTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupSpawner, RespawnTime), METADATA_PARAMS(Z_Construct_UClass_APickupSpawner_Statics::NewProp_RespawnTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickupSpawner_Statics::NewProp_RespawnTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupSpawner_Statics::NewProp_ToSpawn_MetaData[] = {
		{ "Category", "PickupSpawner" },
		{ "ModuleRelativePath", "PickupSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupSpawner_Statics::NewProp_ToSpawn = { "ToSpawn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupSpawner, ToSpawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupSpawner_Statics::NewProp_ToSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickupSpawner_Statics::NewProp_ToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupSpawner_Statics::NewProp_SpawnHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupSpawner_Statics::NewProp_RespawnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupSpawner_Statics::NewProp_ToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickupSpawner_Statics::ClassParams = {
		&APickupSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickupSpawner_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APickupSpawner_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APickupSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APickupSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickupSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickupSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickupSpawner, 2083167365);
	template<> ARBETSPROVFPS2_API UClass* StaticClass<APickupSpawner>()
	{
		return APickupSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickupSpawner(Z_Construct_UClass_APickupSpawner, &APickupSpawner::StaticClass, TEXT("/Script/ArbetsprovFPS2"), TEXT("APickupSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
