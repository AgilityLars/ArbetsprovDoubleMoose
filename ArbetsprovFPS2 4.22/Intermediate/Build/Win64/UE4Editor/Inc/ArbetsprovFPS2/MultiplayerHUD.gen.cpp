// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArbetsprovFPS2/MultiplayerHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerHUD() {}
// Cross Module References
	ARBETSPROVFPS2_API UClass* Z_Construct_UClass_AMultiplayerHUD_NoRegister();
	ARBETSPROVFPS2_API UClass* Z_Construct_UClass_AMultiplayerHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ArbetsprovFPS2();
// End Cross Module References
	void AMultiplayerHUD::StaticRegisterNativesAMultiplayerHUD()
	{
	}
	UClass* Z_Construct_UClass_AMultiplayerHUD_NoRegister()
	{
		return AMultiplayerHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ArbetsprovFPS2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MultiplayerHUD.h" },
		{ "ModuleRelativePath", "MultiplayerHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerHUD_Statics::ClassParams = {
		&AMultiplayerHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMultiplayerHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiplayerHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMultiplayerHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMultiplayerHUD, 1030994786);
	template<> ARBETSPROVFPS2_API UClass* StaticClass<AMultiplayerHUD>()
	{
		return AMultiplayerHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMultiplayerHUD(Z_Construct_UClass_AMultiplayerHUD, &AMultiplayerHUD::StaticClass, TEXT("/Script/ArbetsprovFPS2"), TEXT("AMultiplayerHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
