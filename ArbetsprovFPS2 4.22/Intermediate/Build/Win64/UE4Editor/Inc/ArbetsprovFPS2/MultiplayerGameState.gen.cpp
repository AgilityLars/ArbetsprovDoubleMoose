// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArbetsprovFPS2/MultiplayerGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerGameState() {}
// Cross Module References
	ARBETSPROVFPS2_API UClass* Z_Construct_UClass_AMultiplayerGameState_NoRegister();
	ARBETSPROVFPS2_API UClass* Z_Construct_UClass_AMultiplayerGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_ArbetsprovFPS2();
	ARBETSPROVFPS2_API UFunction* Z_Construct_UFunction_AMultiplayerGameState_GetKillsToWin();
// End Cross Module References
	void AMultiplayerGameState::StaticRegisterNativesAMultiplayerGameState()
	{
		UClass* Class = AMultiplayerGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetKillsToWin", &AMultiplayerGameState::execGetKillsToWin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMultiplayerGameState_GetKillsToWin_Statics
	{
		struct MultiplayerGameState_eventGetKillsToWin_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGameState_GetKillsToWin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiplayerGameState_eventGetKillsToWin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGameState_GetKillsToWin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGameState_GetKillsToWin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGameState_GetKillsToWin_Statics::Function_MetaDataParams[] = {
		{ "Category", "WinCriteria" },
		{ "ModuleRelativePath", "MultiplayerGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGameState_GetKillsToWin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGameState, nullptr, "GetKillsToWin", sizeof(MultiplayerGameState_eventGetKillsToWin_Parms), Z_Construct_UFunction_AMultiplayerGameState_GetKillsToWin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameState_GetKillsToWin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerGameState_GetKillsToWin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameState_GetKillsToWin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerGameState_GetKillsToWin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiplayerGameState_GetKillsToWin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMultiplayerGameState_NoRegister()
	{
		return AMultiplayerGameState::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayerGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillsToWin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KillsToWin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayerGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_ArbetsprovFPS2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMultiplayerGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMultiplayerGameState_GetKillsToWin, "GetKillsToWin" }, // 4189730131
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGameState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MultiplayerGameState.h" },
		{ "ModuleRelativePath", "MultiplayerGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGameState_Statics::NewProp_KillsToWin_MetaData[] = {
		{ "Category", "WinCriteria" },
		{ "ModuleRelativePath", "MultiplayerGameState.h" },
		{ "ToolTip", "Amount of kills to win the game" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGameState_Statics::NewProp_KillsToWin = { "KillsToWin", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerGameState, KillsToWin), METADATA_PARAMS(Z_Construct_UClass_AMultiplayerGameState_Statics::NewProp_KillsToWin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGameState_Statics::NewProp_KillsToWin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMultiplayerGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGameState_Statics::NewProp_KillsToWin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayerGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerGameState_Statics::ClassParams = {
		&AMultiplayerGameState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMultiplayerGameState_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGameState_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMultiplayerGameState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiplayerGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMultiplayerGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMultiplayerGameState, 2034083735);
	template<> ARBETSPROVFPS2_API UClass* StaticClass<AMultiplayerGameState>()
	{
		return AMultiplayerGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMultiplayerGameState(Z_Construct_UClass_AMultiplayerGameState, &AMultiplayerGameState::StaticClass, TEXT("/Script/ArbetsprovFPS2"), TEXT("AMultiplayerGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
