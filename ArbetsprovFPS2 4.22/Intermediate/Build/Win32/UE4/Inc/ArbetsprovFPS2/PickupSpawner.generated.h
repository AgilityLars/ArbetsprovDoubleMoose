// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ARBETSPROVFPS2_PickupSpawner_generated_h
#error "PickupSpawner.generated.h already included, missing '#pragma once' in PickupSpawner.h"
#endif
#define ARBETSPROVFPS2_PickupSpawner_generated_h

#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_PickupSpawner_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->Spawn(); \
		P_NATIVE_END; \
	}


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_PickupSpawner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->Spawn(); \
		P_NATIVE_END; \
	}


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_PickupSpawner_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupSpawner(); \
	friend struct Z_Construct_UClass_APickupSpawner_Statics; \
public: \
	DECLARE_CLASS(APickupSpawner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArbetsprovFPS2"), NO_API) \
	DECLARE_SERIALIZER(APickupSpawner)


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_PickupSpawner_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPickupSpawner(); \
	friend struct Z_Construct_UClass_APickupSpawner_Statics; \
public: \
	DECLARE_CLASS(APickupSpawner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArbetsprovFPS2"), NO_API) \
	DECLARE_SERIALIZER(APickupSpawner)


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_PickupSpawner_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickupSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickupSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupSpawner(APickupSpawner&&); \
	NO_API APickupSpawner(const APickupSpawner&); \
public:


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_PickupSpawner_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupSpawner(APickupSpawner&&); \
	NO_API APickupSpawner(const APickupSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupSpawner)


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_PickupSpawner_h_14_PRIVATE_PROPERTY_OFFSET
#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_PickupSpawner_h_11_PROLOG
#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_PickupSpawner_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_PickupSpawner_h_14_PRIVATE_PROPERTY_OFFSET \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_PickupSpawner_h_14_RPC_WRAPPERS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_PickupSpawner_h_14_INCLASS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_PickupSpawner_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_PickupSpawner_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_PickupSpawner_h_14_PRIVATE_PROPERTY_OFFSET \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_PickupSpawner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_PickupSpawner_h_14_INCLASS_NO_PURE_DECLS \
	ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_PickupSpawner_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARBETSPROVFPS2_API UClass* StaticClass<class APickupSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArbetsprovFPS2_4_22_Source_ArbetsprovFPS2_PickupSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
