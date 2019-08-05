// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ARBETSPROVFPS2_MultiplayerProjectile_generated_h
#error "MultiplayerProjectile.generated.h already included, missing '#pragma once' in MultiplayerProjectile.h"
#endif
#define ARBETSPROVFPS2_MultiplayerProjectile_generated_h

#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerProjectile(); \
	friend struct Z_Construct_UClass_AMultiplayerProjectile_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArbetsprovFPS2"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMultiplayerProjectile(); \
	friend struct Z_Construct_UClass_AMultiplayerProjectile_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArbetsprovFPS2"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMultiplayerProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiplayerProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerProjectile(AMultiplayerProjectile&&); \
	NO_API AMultiplayerProjectile(const AMultiplayerProjectile&); \
public:


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerProjectile(AMultiplayerProjectile&&); \
	NO_API AMultiplayerProjectile(const AMultiplayerProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerProjectile)


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionSphere() { return STRUCT_OFFSET(AMultiplayerProjectile, CollisionSphere); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMultiplayerProjectile, ProjectileMovement); }


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerProjectile_h_9_PROLOG
#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerProjectile_h_12_RPC_WRAPPERS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerProjectile_h_12_INCLASS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerProjectile_h_12_INCLASS_NO_PURE_DECLS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARBETSPROVFPS2_API UClass* StaticClass<class AMultiplayerProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_MultiplayerProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
