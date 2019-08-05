// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArbetsprovFPS2/MultiplayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerController() {}
// Cross Module References
	ARBETSPROVFPS2_API UClass* Z_Construct_UClass_AMultiplayerController_NoRegister();
	ARBETSPROVFPS2_API UClass* Z_Construct_UClass_AMultiplayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ArbetsprovFPS2();
// End Cross Module References
	void AMultiplayerController::StaticRegisterNativesAMultiplayerController()
	{
	}
	UClass* Z_Construct_UClass_AMultiplayerController_NoRegister()
	{
		return AMultiplayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ArbetsprovFPS2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MultiplayerController.h" },
		{ "ModuleRelativePath", "MultiplayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerController_Statics::ClassParams = {
		&AMultiplayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMultiplayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiplayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMultiplayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMultiplayerController, 462739491);
	template<> ARBETSPROVFPS2_API UClass* StaticClass<AMultiplayerController>()
	{
		return AMultiplayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMultiplayerController(Z_Construct_UClass_AMultiplayerController, &AMultiplayerController::StaticClass, TEXT("/Script/ArbetsprovFPS2"), TEXT("AMultiplayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
