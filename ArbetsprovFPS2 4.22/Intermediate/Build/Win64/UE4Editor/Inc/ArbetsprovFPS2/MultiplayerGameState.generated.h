// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARBETSPROVFPS2_MultiplayerGameState_generated_h
#error "MultiplayerGameState.generated.h already included, missing '#pragma once' in MultiplayerGameState.h"
#endif
#define ARBETSPROVFPS2_MultiplayerGameState_generated_h

#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameState_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetKillsToWin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetKillsToWin(); \
		P_NATIVE_END; \
	}


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetKillsToWin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetKillsToWin(); \
		P_NATIVE_END; \
	}


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerGameState(); \
	friend struct Z_Construct_UClass_AMultiplayerGameState_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerGameState, AGameState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArbetsprovFPS2"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerGameState)


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMultiplayerGameState(); \
	friend struct Z_Construct_UClass_AMultiplayerGameState_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerGameState, AGameState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArbetsprovFPS2"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerGameState)


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMultiplayerGameState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiplayerGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerGameState(AMultiplayerGameState&&); \
	NO_API AMultiplayerGameState(const AMultiplayerGameState&); \
public:


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerGameState(AMultiplayerGameState&&); \
	NO_API AMultiplayerGameState(const AMultiplayerGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerGameState)


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameState_h_15_PRIVATE_PROPERTY_OFFSET
#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameState_h_12_PROLOG
#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameState_h_15_RPC_WRAPPERS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameState_h_15_INCLASS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameState_h_15_INCLASS_NO_PURE_DECLS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARBETSPROVFPS2_API UClass* StaticClass<class AMultiplayerGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
