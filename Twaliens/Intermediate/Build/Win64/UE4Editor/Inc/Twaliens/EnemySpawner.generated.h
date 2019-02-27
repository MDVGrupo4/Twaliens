// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWALIENS_EnemySpawner_generated_h
#error "EnemySpawner.generated.h already included, missing '#pragma once' in EnemySpawner.h"
#endif
#define TWALIENS_EnemySpawner_generated_h

#define Twaliens_Source_Twaliens_EnemySpawner_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnEnemy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnEnemy(); \
		P_NATIVE_END; \
	}


#define Twaliens_Source_Twaliens_EnemySpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnEnemy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnEnemy(); \
		P_NATIVE_END; \
	}


#define Twaliens_Source_Twaliens_EnemySpawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemySpawner(); \
	friend struct Z_Construct_UClass_AEnemySpawner_Statics; \
public: \
	DECLARE_CLASS(AEnemySpawner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Twaliens"), NO_API) \
	DECLARE_SERIALIZER(AEnemySpawner)


#define Twaliens_Source_Twaliens_EnemySpawner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemySpawner(); \
	friend struct Z_Construct_UClass_AEnemySpawner_Statics; \
public: \
	DECLARE_CLASS(AEnemySpawner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Twaliens"), NO_API) \
	DECLARE_SERIALIZER(AEnemySpawner)


#define Twaliens_Source_Twaliens_EnemySpawner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemySpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemySpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemySpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemySpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemySpawner(AEnemySpawner&&); \
	NO_API AEnemySpawner(const AEnemySpawner&); \
public:


#define Twaliens_Source_Twaliens_EnemySpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemySpawner(AEnemySpawner&&); \
	NO_API AEnemySpawner(const AEnemySpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemySpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemySpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemySpawner)


#define Twaliens_Source_Twaliens_EnemySpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnTime() { return STRUCT_OFFSET(AEnemySpawner, SpawnTime); }


#define Twaliens_Source_Twaliens_EnemySpawner_h_9_PROLOG
#define Twaliens_Source_Twaliens_EnemySpawner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Twaliens_Source_Twaliens_EnemySpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	Twaliens_Source_Twaliens_EnemySpawner_h_12_RPC_WRAPPERS \
	Twaliens_Source_Twaliens_EnemySpawner_h_12_INCLASS \
	Twaliens_Source_Twaliens_EnemySpawner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Twaliens_Source_Twaliens_EnemySpawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Twaliens_Source_Twaliens_EnemySpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	Twaliens_Source_Twaliens_EnemySpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Twaliens_Source_Twaliens_EnemySpawner_h_12_INCLASS_NO_PURE_DECLS \
	Twaliens_Source_Twaliens_EnemySpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Twaliens_Source_Twaliens_EnemySpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
