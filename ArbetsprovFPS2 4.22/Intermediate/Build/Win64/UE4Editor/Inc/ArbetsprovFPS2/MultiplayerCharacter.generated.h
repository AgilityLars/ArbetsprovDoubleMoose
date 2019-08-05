// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARBETSPROVFPS2_MultiplayerCharacter_generated_h
#error "MultiplayerCharacter.generated.h already included, missing '#pragma once' in MultiplayerCharacter.h"
#endif
#define ARBETSPROVFPS2_MultiplayerCharacter_generated_h

#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_RPC_WRAPPERS \
	virtual bool ServerCollectPickups_Validate(); \
	virtual void ServerCollectPickups_Implementation(); \
	virtual bool ServerPerformTask_Validate(ETaskEnum::Type ); \
	virtual void ServerPerformTask_Implementation(ETaskEnum::Type NewTask); \
 \
	DECLARE_FUNCTION(execServerCollectPickups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerCollectPickups_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerCollectPickups_Validate")); \
			return; \
		} \
		P_THIS->ServerCollectPickups_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollectPickups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CollectPickups(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerPerformTask) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewTask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerPerformTask_Validate(ETaskEnum::Type(Z_Param_NewTask))) \
		{ \
			RPC_ValidateFailed(TEXT("ServerPerformTask_Validate")); \
			return; \
		} \
		P_THIS->ServerPerformTask_Implementation(ETaskEnum::Type(Z_Param_NewTask)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Health) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Health(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Task) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Task(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateLives) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaLives); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateLives(Z_Param_DeltaLives); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaHP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateHealth(Z_Param_DeltaHP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInitialHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInitialHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateAmmo) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaAmmo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateAmmo(Z_Param_DeltaAmmo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentLives) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentLives(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInitialAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInitialAmmo(); \
		P_NATIVE_END; \
	}


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execServerCollectPickups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerCollectPickups_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerCollectPickups_Validate")); \
			return; \
		} \
		P_THIS->ServerCollectPickups_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollectPickups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CollectPickups(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerPerformTask) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewTask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerPerformTask_Validate(ETaskEnum::Type(Z_Param_NewTask))) \
		{ \
			RPC_ValidateFailed(TEXT("ServerPerformTask_Validate")); \
			return; \
		} \
		P_THIS->ServerPerformTask_Implementation(ETaskEnum::Type(Z_Param_NewTask)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Health) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Health(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Task) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Task(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateLives) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaLives); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateLives(Z_Param_DeltaLives); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaHP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateHealth(Z_Param_DeltaHP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInitialHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInitialHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateAmmo) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaAmmo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateAmmo(Z_Param_DeltaAmmo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentLives) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentLives(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInitialAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInitialAmmo(); \
		P_NATIVE_END; \
	}


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_EVENT_PARMS \
	struct MultiplayerCharacter_eventServerPerformTask_Parms \
	{ \
		TEnumAsByte<ETaskEnum::Type> NewTask; \
	};


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_CALLBACK_WRAPPERS
#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerCharacter(); \
	friend struct Z_Construct_UClass_AMultiplayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArbetsprovFPS2"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerCharacter)


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAMultiplayerCharacter(); \
	friend struct Z_Construct_UClass_AMultiplayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArbetsprovFPS2"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerCharacter)


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMultiplayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiplayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerCharacter(AMultiplayerCharacter&&); \
	NO_API AMultiplayerCharacter(const AMultiplayerCharacter&); \
public:


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerCharacter(AMultiplayerCharacter&&); \
	NO_API AMultiplayerCharacter(const AMultiplayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerCharacter)


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FPSCamera() { return STRUCT_OFFSET(AMultiplayerCharacter, FPSCamera); } \
	FORCEINLINE static uint32 __PPO__CollectionSphere() { return STRUCT_OFFSET(AMultiplayerCharacter, CollectionSphere); } \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMultiplayerCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AMultiplayerCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AMultiplayerCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__Task() { return STRUCT_OFFSET(AMultiplayerCharacter, Task); } \
	FORCEINLINE static uint32 __PPO__InitialAmmo() { return STRUCT_OFFSET(AMultiplayerCharacter, InitialAmmo); } \
	FORCEINLINE static uint32 __PPO__InitialHealth() { return STRUCT_OFFSET(AMultiplayerCharacter, InitialHealth); } \
	FORCEINLINE static uint32 __PPO__Lives() { return STRUCT_OFFSET(AMultiplayerCharacter, Lives); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AMultiplayerCharacter, Health); } \
	FORCEINLINE static uint32 __PPO__CurrentAmmo() { return STRUCT_OFFSET(AMultiplayerCharacter, CurrentAmmo); } \
	FORCEINLINE static uint32 __PPO__CurrentHealth() { return STRUCT_OFFSET(AMultiplayerCharacter, CurrentHealth); }


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_19_PROLOG \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_EVENT_PARMS


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_RPC_WRAPPERS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_CALLBACK_WRAPPERS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_INCLASS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_CALLBACK_WRAPPERS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_INCLASS_NO_PURE_DECLS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARBETSPROVFPS2_API UClass* StaticClass<class AMultiplayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerCharacter_h


#define FOREACH_ENUM_ETASKENUM(op) \
	op(ETaskEnum::None) \
	op(ETaskEnum::Fire) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
