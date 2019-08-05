// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArbetsprovFPS2/MultiplayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerCharacter() {}
// Cross Module References
	ARBETSPROVFPS2_API UEnum* Z_Construct_UEnum_ArbetsprovFPS2_ETaskEnum();
	UPackage* Z_Construct_UPackage__Script_ArbetsprovFPS2();
	ARBETSPROVFPS2_API UClass* Z_Construct_UClass_AMultiplayerCharacter_NoRegister();
	ARBETSPROVFPS2_API UClass* Z_Construct_UClass_AMultiplayerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ARBETSPROVFPS2_API UFunction* Z_Construct_UFunction_AMultiplayerCharacter_CollectPickups();
	ARBETSPROVFPS2_API UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentAmmo();
	ARBETSPROVFPS2_API UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentHealth();
	ARBETSPROVFPS2_API UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentLives();
	ARBETSPROVFPS2_API UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetHealth();
	ARBETSPROVFPS2_API UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetInitialAmmo();
	ARBETSPROVFPS2_API UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetInitialHealth();
	ARBETSPROVFPS2_API UFunction* Z_Construct_UFunction_AMultiplayerCharacter_OnRep_Health();
	ARBETSPROVFPS2_API UFunction* Z_Construct_UFunction_AMultiplayerCharacter_OnRep_Task();
	ARBETSPROVFPS2_API UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerCollectPickups();
	ARBETSPROVFPS2_API UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerPerformTask();
	ARBETSPROVFPS2_API UFunction* Z_Construct_UFunction_AMultiplayerCharacter_UpdateAmmo();
	ARBETSPROVFPS2_API UFunction* Z_Construct_UFunction_AMultiplayerCharacter_UpdateHealth();
	ARBETSPROVFPS2_API UFunction* Z_Construct_UFunction_AMultiplayerCharacter_UpdateLives();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ARBETSPROVFPS2_API UClass* Z_Construct_UClass_AMultiplayerProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	static UEnum* ETaskEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArbetsprovFPS2_ETaskEnum, Z_Construct_UPackage__Script_ArbetsprovFPS2(), TEXT("ETaskEnum"));
		}
		return Singleton;
	}
	template<> ARBETSPROVFPS2_API UEnum* StaticEnum<ETaskEnum::Type>()
	{
		return ETaskEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETaskEnum(ETaskEnum_StaticEnum, TEXT("/Script/ArbetsprovFPS2"), TEXT("ETaskEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArbetsprovFPS2_ETaskEnum_Hash() { return 932777278U; }
	UEnum* Z_Construct_UEnum_ArbetsprovFPS2_ETaskEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArbetsprovFPS2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETaskEnum"), 0, Get_Z_Construct_UEnum_ArbetsprovFPS2_ETaskEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETaskEnum::None", (int64)ETaskEnum::None },
				{ "ETaskEnum::Fire", (int64)ETaskEnum::Fire },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "MultiplayerCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArbetsprovFPS2,
				nullptr,
				"ETaskEnum",
				"ETaskEnum::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_AMultiplayerCharacter_ServerCollectPickups = FName(TEXT("ServerCollectPickups"));
	void AMultiplayerCharacter::ServerCollectPickups()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerCharacter_ServerCollectPickups),NULL);
	}
	static FName NAME_AMultiplayerCharacter_ServerPerformTask = FName(TEXT("ServerPerformTask"));
	void AMultiplayerCharacter::ServerPerformTask(ETaskEnum::Type NewTask)
	{
		MultiplayerCharacter_eventServerPerformTask_Parms Parms;
		Parms.NewTask=NewTask;
		ProcessEvent(FindFunctionChecked(NAME_AMultiplayerCharacter_ServerPerformTask),&Parms);
	}
	void AMultiplayerCharacter::StaticRegisterNativesAMultiplayerCharacter()
	{
		UClass* Class = AMultiplayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectPickups", &AMultiplayerCharacter::execCollectPickups },
			{ "GetCurrentAmmo", &AMultiplayerCharacter::execGetCurrentAmmo },
			{ "GetCurrentHealth", &AMultiplayerCharacter::execGetCurrentHealth },
			{ "GetCurrentLives", &AMultiplayerCharacter::execGetCurrentLives },
			{ "GetHealth", &AMultiplayerCharacter::execGetHealth },
			{ "GetInitialAmmo", &AMultiplayerCharacter::execGetInitialAmmo },
			{ "GetInitialHealth", &AMultiplayerCharacter::execGetInitialHealth },
			{ "OnRep_Health", &AMultiplayerCharacter::execOnRep_Health },
			{ "OnRep_Task", &AMultiplayerCharacter::execOnRep_Task },
			{ "ServerCollectPickups", &AMultiplayerCharacter::execServerCollectPickups },
			{ "ServerPerformTask", &AMultiplayerCharacter::execServerPerformTask },
			{ "UpdateAmmo", &AMultiplayerCharacter::execUpdateAmmo },
			{ "UpdateHealth", &AMultiplayerCharacter::execUpdateHealth },
			{ "UpdateLives", &AMultiplayerCharacter::execUpdateLives },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMultiplayerCharacter_CollectPickups_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerCharacter_CollectPickups_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "Entry, Called on overlap with collisionSphere" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_CollectPickups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "CollectPickups", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerCharacter_CollectPickups_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_CollectPickups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerCharacter_CollectPickups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_CollectPickups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentAmmo_Statics
	{
		struct MultiplayerCharacter_eventGetCurrentAmmo_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetCurrentAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentAmmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "Access to the character's current ammo" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetCurrentAmmo", sizeof(MultiplayerCharacter_eventGetCurrentAmmo_Parms), Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentAmmo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentAmmo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentHealth_Statics
	{
		struct MultiplayerCharacter_eventGetCurrentHealth_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "HP" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "Access to the character's current health" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetCurrentHealth", sizeof(MultiplayerCharacter_eventGetCurrentHealth_Parms), Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentLives_Statics
	{
		struct MultiplayerCharacter_eventGetCurrentLives_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentLives_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetCurrentLives_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentLives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentLives_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentLives_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "Access to the character's current ammo" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentLives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetCurrentLives", sizeof(MultiplayerCharacter_eventGetCurrentLives_Parms), Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentLives_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentLives_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentLives_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentLives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentLives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentLives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics
	{
		struct MultiplayerCharacter_eventGetHealth_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "HP" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "Access to the character's current health" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetHealth", sizeof(MultiplayerCharacter_eventGetHealth_Parms), Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerCharacter_GetInitialAmmo_Statics
	{
		struct MultiplayerCharacter_eventGetInitialAmmo_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetInitialAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetInitialAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetInitialAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetInitialAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerCharacter_GetInitialAmmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "Access to the character's starting ammo" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetInitialAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetInitialAmmo", sizeof(MultiplayerCharacter_eventGetInitialAmmo_Parms), Z_Construct_UFunction_AMultiplayerCharacter_GetInitialAmmo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetInitialAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerCharacter_GetInitialAmmo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetInitialAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetInitialAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetInitialAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerCharacter_GetInitialHealth_Statics
	{
		struct MultiplayerCharacter_eventGetInitialHealth_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_GetInitialHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiplayerCharacter_eventGetInitialHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_GetInitialHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_GetInitialHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerCharacter_GetInitialHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "HP" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "Access to the character's starting health" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_GetInitialHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "GetInitialHealth", sizeof(MultiplayerCharacter_eventGetInitialHealth_Parms), Z_Construct_UFunction_AMultiplayerCharacter_GetInitialHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetInitialHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerCharacter_GetInitialHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_GetInitialHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerCharacter_GetInitialHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_GetInitialHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerCharacter_OnRep_Health_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerCharacter_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "OnRep_Health", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerCharacter_OnRep_Health_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerCharacter_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerCharacter_OnRep_Task_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerCharacter_OnRep_Task_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_OnRep_Task_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "OnRep_Task", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerCharacter_OnRep_Task_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_OnRep_Task_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerCharacter_OnRep_Task()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_OnRep_Task_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerCharacter_ServerCollectPickups_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerCharacter_ServerCollectPickups_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "Called on server to process the collection of pickups" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerCollectPickups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerCollectPickups", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerCharacter_ServerCollectPickups_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerCollectPickups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerCollectPickups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerCollectPickups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerCharacter_ServerPerformTask_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMultiplayerCharacter_ServerPerformTask_Statics::NewProp_NewTask = { "NewTask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiplayerCharacter_eventServerPerformTask_Parms, NewTask), Z_Construct_UEnum_ArbetsprovFPS2_ETaskEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_ServerPerformTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_ServerPerformTask_Statics::NewProp_NewTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerCharacter_ServerPerformTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_ServerPerformTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "ServerPerformTask", sizeof(MultiplayerCharacter_eventServerPerformTask_Parms), Z_Construct_UFunction_AMultiplayerCharacter_ServerPerformTask_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerPerformTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerCharacter_ServerPerformTask_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_ServerPerformTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerCharacter_ServerPerformTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_ServerPerformTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerCharacter_UpdateAmmo_Statics
	{
		struct MultiplayerCharacter_eventUpdateAmmo_Parms
		{
			float DeltaAmmo;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_UpdateAmmo_Statics::NewProp_DeltaAmmo = { "DeltaAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiplayerCharacter_eventUpdateAmmo_Parms, DeltaAmmo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_UpdateAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_UpdateAmmo_Statics::NewProp_DeltaAmmo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerCharacter_UpdateAmmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "This updates the character's ammo amount\n@param DeltaAmmo This is the amount to change ammo by, can be + or -" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_UpdateAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "UpdateAmmo", sizeof(MultiplayerCharacter_eventUpdateAmmo_Parms), Z_Construct_UFunction_AMultiplayerCharacter_UpdateAmmo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_UpdateAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerCharacter_UpdateAmmo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_UpdateAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerCharacter_UpdateAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_UpdateAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerCharacter_UpdateHealth_Statics
	{
		struct MultiplayerCharacter_eventUpdateHealth_Parms
		{
			float DeltaHP;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaHP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_UpdateHealth_Statics::NewProp_DeltaHP = { "DeltaHP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiplayerCharacter_eventUpdateHealth_Parms, DeltaHP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_UpdateHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_UpdateHealth_Statics::NewProp_DeltaHP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerCharacter_UpdateHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "HP" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "This updates the character's health\n@param DeltaAmmo This is the amount to change health by, can be + or -" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_UpdateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "UpdateHealth", sizeof(MultiplayerCharacter_eventUpdateHealth_Parms), Z_Construct_UFunction_AMultiplayerCharacter_UpdateHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_UpdateHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerCharacter_UpdateHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_UpdateHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerCharacter_UpdateHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_UpdateHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiplayerCharacter_UpdateLives_Statics
	{
		struct MultiplayerCharacter_eventUpdateLives_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiplayerCharacter_UpdateLives_Statics::NewProp_DeltaLives = { "DeltaLives", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiplayerCharacter_eventUpdateLives_Parms, DeltaLives), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerCharacter_UpdateLives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerCharacter_UpdateLives_Statics::NewProp_DeltaLives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiplayerCharacter_UpdateLives_Statics::Function_MetaDataParams[] = {
		{ "Category", "HP" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerCharacter_UpdateLives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerCharacter, nullptr, "UpdateLives", sizeof(MultiplayerCharacter_eventUpdateLives_Parms), Z_Construct_UFunction_AMultiplayerCharacter_UpdateLives_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_UpdateLives_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiplayerCharacter_UpdateLives_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerCharacter_UpdateLives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiplayerCharacter_UpdateLives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiplayerCharacter_UpdateLives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMultiplayerCharacter_NoRegister()
	{
		return AMultiplayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lives_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Lives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionSphereRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollectionSphereRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Task;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollectionSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ArbetsprovFPS2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMultiplayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMultiplayerCharacter_CollectPickups, "CollectPickups" }, // 3953414626
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentAmmo, "GetCurrentAmmo" }, // 1180676060
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentHealth, "GetCurrentHealth" }, // 2105164186
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetCurrentLives, "GetCurrentLives" }, // 1849980614
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetHealth, "GetHealth" }, // 2068954404
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetInitialAmmo, "GetInitialAmmo" }, // 2911210051
		{ &Z_Construct_UFunction_AMultiplayerCharacter_GetInitialHealth, "GetInitialHealth" }, // 2989104021
		{ &Z_Construct_UFunction_AMultiplayerCharacter_OnRep_Health, "OnRep_Health" }, // 684461992
		{ &Z_Construct_UFunction_AMultiplayerCharacter_OnRep_Task, "OnRep_Task" }, // 1654399960
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerCollectPickups, "ServerCollectPickups" }, // 3989424979
		{ &Z_Construct_UFunction_AMultiplayerCharacter_ServerPerformTask, "ServerPerformTask" }, // 1410575633
		{ &Z_Construct_UFunction_AMultiplayerCharacter_UpdateAmmo, "UpdateAmmo" }, // 2776393151
		{ &Z_Construct_UFunction_AMultiplayerCharacter_UpdateHealth, "UpdateHealth" }, // 526949630
		{ &Z_Construct_UFunction_AMultiplayerCharacter_UpdateLives, "UpdateLives" }, // 4028142287
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MultiplayerCharacter.h" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "HP" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "The character's current health amount during gameplay" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0040000000020021, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerCharacter, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "Category", "HP" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "The character's current ammo amount during gameplay" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0040000000020021, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerCharacter, CurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentAmmo_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "The character's starting health" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_Lives_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Lives" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "The character's starting health" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_Lives = { "Lives", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerCharacter, Lives), METADATA_PARAMS(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_Lives_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_Lives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_InitialHealth_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "HP" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "The character's starting health" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_InitialHealth = { "InitialHealth", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerCharacter, InitialHealth), METADATA_PARAMS(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_InitialHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_InitialHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_InitialAmmo_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "HP" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "The character's starting ammo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_InitialAmmo = { "InitialAmmo", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerCharacter, InitialAmmo), METADATA_PARAMS(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_InitialAmmo_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_InitialAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CollectionSphereRadius_MetaData[] = {
		{ "AllowPrivateAcces", "true" },
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "Variable radius can be changed in the editor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CollectionSphereRadius = { "CollectionSphereRadius", nullptr, (EPropertyFlags)0x0010000000020035, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerCharacter, CollectionSphereRadius), METADATA_PARAMS(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CollectionSphereRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CollectionSphereRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerCharacter, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FireAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerCharacter, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FireSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerCharacter, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_GunOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "Projectile class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerCharacter, ProjectileClass), Z_Construct_UClass_AMultiplayerProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ProjectileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_Task_MetaData[] = {
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "Replication for special character actions" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_Task = { "Task", "OnRep_Task", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerCharacter, Task), Z_Construct_UEnum_ArbetsprovFPS2_ETaskEnum, METADATA_PARAMS(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_Task_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_Task_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "Location on gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FP_MuzzleLocation = { "FP_MuzzleLocation", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerCharacter, FP_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FP_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "Gun mesh: 1st person view (seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FP_Gun = { "FP_Gun", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerCharacter, FP_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FP_Gun_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FP_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_Mesh1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CollectionSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CollectionSphere = { "CollectionSphere", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerCharacter, CollectionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CollectionSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CollectionSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FPSCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MultiplayerCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FPSCamera = { "FPSCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiplayerCharacter, FPSCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FPSCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FPSCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMultiplayerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CurrentAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_Lives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_InitialHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_InitialAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CollectionSphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FP_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FP_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_Mesh1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_CollectionSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerCharacter_Statics::NewProp_FPSCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerCharacter_Statics::ClassParams = {
		&AMultiplayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMultiplayerCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMultiplayerCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiplayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMultiplayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMultiplayerCharacter, 2385905834);
	template<> ARBETSPROVFPS2_API UClass* StaticClass<AMultiplayerCharacter>()
	{
		return AMultiplayerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMultiplayerCharacter(Z_Construct_UClass_AMultiplayerCharacter, &AMultiplayerCharacter::StaticClass, TEXT("/Script/ArbetsprovFPS2"), TEXT("AMultiplayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
