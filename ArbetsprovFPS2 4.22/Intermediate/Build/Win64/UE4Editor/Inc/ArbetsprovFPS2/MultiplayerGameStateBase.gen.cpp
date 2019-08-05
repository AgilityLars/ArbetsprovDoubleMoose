// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArbetsprovFPS2/MultiplayerGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerGameStateBase() {}
// Cross Module References
	ARBETSPROVFPS2_API UEnum* Z_Construct_UEnum_ArbetsprovFPS2_EPlayState();
	UPackage* Z_Construct_UPackage__Script_ArbetsprovFPS2();
	ARBETSPROVFPS2_API UClass* Z_Construct_UClass_AMultiplayerGameStateBase_NoRegister();
	ARBETSPROVFPS2_API UClass* Z_Construct_UClass_AMultiplayerGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	ARBETSPROVFPS2_API UFunction* Z_Construct_UFunction_AMultiplayerGameStateBase_GetCurrentState();
	ARBETSPROVFPS2_API UFunction* Z_Construct_UFunction_AMultiplayerGameStateBase_GetLivesLeft();
	ARBETSPROVFPS2_API UFunction* Z_Construct_UFunction_AMultiplayerGameStateBase_OnRep_CurrentState();
	ARBETSPROVFPS2_API UFunction* Z_Construct_UFunction_AMultiplayerGameStateBase_UpdateLivesLeft();
// End Cross Module References
	static UEnum* EPlayState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArbetsprovFPS2_EPlayState, Z_Construct_UPackage__Script_ArbetsprovFPS2(), TEXT("EPlayState"));
		}
		return Singleton;
	}
	template<> ARBETSPROVFPS2_API UEnum* StaticEnum<EPlayState>()
	{
		return EPlayState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayState(EPlayState_StaticEnum, TEXT("/Script/ArbetsprovFPS2"), TEXT("EPlayState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArbetsprovFPS2_EPlayState_Hash() { return 2751309720U; }
	UEnum* Z_Construct_UEnum_ArbetsprovFPS2_EPlayState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArbetsprovFPS2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayState"), 0, Get_Z_Construct_UEnum_ArbetsprovFPS2_EPlayState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlaying", (int64)EPlaying },
				{ "EGameOver", (int64)EGameOver },
				{ "EWon", (int64)EWon },
				{ "EUnknown", (int64)EUnknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "MultiplayerGameStateBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArbetsprovFPS2,
				nullptr,
				"EPlayState",
				"EPlayState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AMultiplayerGameStateBase::StaticRegisterNativesAMultiplayerGameStateBase()
	{
		UClass* Class = AMultiplayerGameStateBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &AMultiplayerGameStateBase::execGetCurrentState },
			{ "GetLivesLeft", &AMultiplayerGameStateBase::execGetLivesLeft },
			{ "OnRep_CurrentState", &AMultiplayerGameStateBase::execOnRep_CurrentState },
			{ "UpdateLivesLeft", &AMultiplayerGameStateBase::execUpdateLivesLeft },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMultiplayerGameStateBase_GetCurrentState_Statics
	{
		struct MultiplayerGameStateBase_eventGetCurrentState_Parms
		{
			TEnumAsByte<EPlayState> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMultiplayerGameStateBase_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiplayerGameStateBase_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_ArbetsprovFPS2_EPlayState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGameStateBase_GetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGameStateBase_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGameStateBase_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "WinCriteria" },
		{ "ModuleRelativePath", "MultiplayerGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGameStateBase_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGameStateBase, nullptr, "GetCurrentState", sizeof(MultiplayerGameStateBase_eventGetCurrentState_Parms), Z_Construct_UFunction_AMultiplayerGameStateBase_GetCurrentState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameStateBase_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerGameStateBase_GetCurrentState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameStateBase_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerGameStateBase_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiplayerGameStateBase_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGameStateBase_GetLivesLeft_Statics
	{
		struct MultiplayerGameStateBase_eventGetLivesLeft_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGameStateBase_GetLivesLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiplayerGameStateBase_eventGetLivesLeft_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGameStateBase_GetLivesLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGameStateBase_GetLivesLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGameStateBase_GetLivesLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "WinCriteria" },
		{ "ModuleRelativePath", "MultiplayerGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGameStateBase_GetLivesLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGameStateBase, nullptr, "GetLivesLeft", sizeof(MultiplayerGameStateBase_eventGetLivesLeft_Parms), Z_Construct_UFunction_AMultiplayerGameStateBase_GetLivesLeft_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameStateBase_GetLivesLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerGameStateBase_GetLivesLeft_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameStateBase_GetLivesLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerGameStateBase_GetLivesLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiplayerGameStateBase_GetLivesLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGameStateBase_OnRep_CurrentState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGameStateBase_OnRep_CurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MultiplayerGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGameStateBase_OnRep_CurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGameStateBase, nullptr, "OnRep_CurrentState", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerGameStateBase_OnRep_CurrentState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameStateBase_OnRep_CurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerGameStateBase_OnRep_CurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiplayerGameStateBase_OnRep_CurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerGameStateBase_UpdateLivesLeft_Statics
	{
		struct MultiplayerGameStateBase_eventUpdateLivesLeft_Parms
		{
			float DeltaLives;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaLives;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerGameStateBase_UpdateLivesLeft_Statics::NewProp_DeltaLives = { "DeltaLives", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiplayerGameStateBase_eventUpdateLivesLeft_Parms, DeltaLives), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerGameStateBase_UpdateLivesLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerGameStateBase_UpdateLivesLeft_Statics::NewProp_DeltaLives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerGameStateBase_UpdateLivesLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "WinCriteria" },
		{ "ModuleRelativePath", "MultiplayerGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerGameStateBase_UpdateLivesLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerGameStateBase, nullptr, "UpdateLivesLeft", sizeof(MultiplayerGameStateBase_eventUpdateLivesLeft_Parms), Z_Construct_UFunction_AMultiplayerGameStateBase_UpdateLivesLeft_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameStateBase_UpdateLivesLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerGameStateBase_UpdateLivesLeft_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerGameStateBase_UpdateLivesLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerGameStateBase_UpdateLivesLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiplayerGameStateBase_UpdateLivesLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMultiplayerGameStateBase_NoRegister()
	{
		return AMultiplayerGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayerGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LivesLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LivesLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayerGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ArbetsprovFPS2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMultiplayerGameStateBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMultiplayerGameStateBase_GetCurrentState, "GetCurrentState" }, // 3493757803
		{ &Z_Construct_UFunction_AMultiplayerGameStateBase_GetLivesLeft, "GetLivesLeft" }, // 3694637503
		{ &Z_Construct_UFunction_AMultiplayerGameStateBase_OnRep_CurrentState, "OnRep_CurrentState" }, // 1782164623
		{ &Z_Construct_UFunction_AMultiplayerGameStateBase_UpdateLivesLeft, "UpdateLivesLeft" }, // 3812566330
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MultiplayerGameStateBase.h" },
		{ "ModuleRelativePath", "MultiplayerGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGameStateBase_Statics::NewProp_CurrentState_MetaData[] = {
		{ "ModuleRelativePath", "MultiplayerGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMultiplayerGameStateBase_Statics::NewProp_CurrentState = { "CurrentState", "OnRep_CurrentState", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerGameStateBase, CurrentState), Z_Construct_UEnum_ArbetsprovFPS2_EPlayState, METADATA_PARAMS(Z_Construct_UClass_AMultiplayerGameStateBase_Statics::NewProp_CurrentState_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGameStateBase_Statics::NewProp_CurrentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerGameStateBase_Statics::NewProp_LivesLeft_MetaData[] = {
		{ "Category", "WinCriteria" },
		{ "ModuleRelativePath", "MultiplayerGameStateBase.h" },
		{ "ToolTip", "Amount of kills to win the game" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerGameStateBase_Statics::NewProp_LivesLeft = { "LivesLeft", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerGameStateBase, LivesLeft), METADATA_PARAMS(Z_Construct_UClass_AMultiplayerGameStateBase_Statics::NewProp_LivesLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGameStateBase_Statics::NewProp_LivesLeft_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMultiplayerGameStateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGameStateBase_Statics::NewProp_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerGameStateBase_Statics::NewProp_LivesLeft,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayerGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerGameStateBase_Statics::ClassParams = {
		&AMultiplayerGameStateBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMultiplayerGameStateBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGameStateBase_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMultiplayerGameStateBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiplayerGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMultiplayerGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMultiplayerGameStateBase, 3293177750);
	template<> ARBETSPROVFPS2_API UClass* StaticClass<AMultiplayerGameStateBase>()
	{
		return AMultiplayerGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMultiplayerGameStateBase(Z_Construct_UClass_AMultiplayerGameStateBase, &AMultiplayerGameStateBase::StaticClass, TEXT("/Script/ArbetsprovFPS2"), TEXT("AMultiplayerGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
