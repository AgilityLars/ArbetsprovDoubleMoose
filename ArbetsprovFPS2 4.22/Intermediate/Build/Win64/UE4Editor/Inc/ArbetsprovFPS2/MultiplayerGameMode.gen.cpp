// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArbetsprovFPS2/MultiplayerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerGameMode() {}
// Cross Module References
	ARBETSPROVFPS2_API UClass* Z_Construct_UClass_AMultiplayerGameMode_NoRegister();
	ARBETSPROVFPS2_API UClass* Z_Construct_UClass_AMultiplayerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ArbetsprovFPS2();
// End Cross Module References
	void AMultiplayerGameMode::StaticRegisterNativesAMultiplayerGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMultiplayerGameMode_NoRegister()
	{
		return AMultiplayerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ArbetsprovFPS2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MultiplayerGameMode.h" },
		{ "ModuleRelativePath", "MultiplayerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerGameMode_Statics::ClassParams = {
		&AMultiplayerGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AMultiplayerGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiplayerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMultiplayerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMultiplayerGameMode, 498869193);
	template<> ARBETSPROVFPS2_API UClass* StaticClass<AMultiplayerGameMode>()
	{
		return AMultiplayerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMultiplayerGameMode(Z_Construct_UClass_AMultiplayerGameMode, &AMultiplayerGameMode::StaticClass, TEXT("/Script/ArbetsprovFPS2"), TEXT("AMultiplayerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
