// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArbetsprovFPS2/AKAmmoPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAKAmmoPickup() {}
// Cross Module References
	ARBETSPROVFPS2_API UClass* Z_Construct_UClass_AAKAmmoPickup_NoRegister();
	ARBETSPROVFPS2_API UClass* Z_Construct_UClass_AAKAmmoPickup();
	ARBETSPROVFPS2_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_ArbetsprovFPS2();
// End Cross Module References
	void AAKAmmoPickup::StaticRegisterNativesAAKAmmoPickup()
	{
	}
	UClass* Z_Construct_UClass_AAKAmmoPickup_NoRegister()
	{
		return AAKAmmoPickup::StaticClass();
	}
	struct Z_Construct_UClass_AAKAmmoPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmmoAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAKAmmoPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_ArbetsprovFPS2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAKAmmoPickup_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "AKAmmoPickup.h" },
		{ "ModuleRelativePath", "AKAmmoPickup.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAKAmmoPickup_Statics::NewProp_AmmoAmount_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "AKAmmoPickup.h" },
		{ "ToolTip", "Set amount of ammo the pickup holds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAKAmmoPickup_Statics::NewProp_AmmoAmount = { "AmmoAmount", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAKAmmoPickup, AmmoAmount), METADATA_PARAMS(Z_Construct_UClass_AAKAmmoPickup_Statics::NewProp_AmmoAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAKAmmoPickup_Statics::NewProp_AmmoAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAKAmmoPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAKAmmoPickup_Statics::NewProp_AmmoAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAKAmmoPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAKAmmoPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAKAmmoPickup_Statics::ClassParams = {
		&AAKAmmoPickup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAKAmmoPickup_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AAKAmmoPickup_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAKAmmoPickup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAKAmmoPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAKAmmoPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAKAmmoPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAKAmmoPickup, 947969840);
	template<> ARBETSPROVFPS2_API UClass* StaticClass<AAKAmmoPickup>()
	{
		return AAKAmmoPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAKAmmoPickup(Z_Construct_UClass_AAKAmmoPickup, &AAKAmmoPickup::StaticClass, TEXT("/Script/ArbetsprovFPS2"), TEXT("AAKAmmoPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAKAmmoPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
