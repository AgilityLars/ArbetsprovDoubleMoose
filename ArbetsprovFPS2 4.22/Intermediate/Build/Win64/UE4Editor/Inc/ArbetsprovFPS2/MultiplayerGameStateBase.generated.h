// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARBETSPROVFPS2_MultiplayerGameStateBase_generated_h
#error "MultiplayerGameStateBase.generated.h already included, missing '#pragma once' in MultiplayerGameStateBase.h"
#endif
#define ARBETSPROVFPS2_MultiplayerGameStateBase_generated_h

#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameStateBase_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_CurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CurrentState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EPlayState>*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateLivesLeft) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaLives); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateLivesLeft(Z_Param_DeltaLives); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLivesLeft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLivesLeft(); \
		P_NATIVE_END; \
	}


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameStateBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_CurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CurrentState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EPlayState>*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateLivesLeft) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaLives); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateLivesLeft(Z_Param_DeltaLives); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLivesLeft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLivesLeft(); \
		P_NATIVE_END; \
	}


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameStateBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerGameStateBase(); \
	friend struct Z_Construct_UClass_AMultiplayerGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArbetsprovFPS2"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerGameStateBase)


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameStateBase_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAMultiplayerGameStateBase(); \
	friend struct Z_Construct_UClass_AMultiplayerGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArbetsprovFPS2"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerGameStateBase)


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameStateBase_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMultiplayerGameStateBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiplayerGameStateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerGameStateBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerGameStateBase(AMultiplayerGameStateBase&&); \
	NO_API AMultiplayerGameStateBase(const AMultiplayerGameStateBase&); \
public:


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameStateBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerGameStateBase(AMultiplayerGameStateBase&&); \
	NO_API AMultiplayerGameStateBase(const AMultiplayerGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerGameStateBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerGameStateBase)


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameStateBase_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(AMultiplayerGameStateBase, CurrentState); }


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameStateBase_h_21_PROLOG
#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameStateBase_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameStateBase_h_24_PRIVATE_PROPERTY_OFFSET \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameStateBase_h_24_RPC_WRAPPERS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameStateBase_h_24_INCLASS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameStateBase_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameStateBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameStateBase_h_24_PRIVATE_PROPERTY_OFFSET \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameStateBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameStateBase_h_24_INCLASS_NO_PURE_DECLS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameStateBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARBETSPROVFPS2_API UClass* StaticClass<class AMultiplayerGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameStateBase_h


#define FOREACH_ENUM_EPLAYSTATE(op) \
	op(EPlaying) \
	op(EGameOver) \
	op(EWon) \
	op(EUnknown) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
