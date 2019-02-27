// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATwalien;
#ifdef TWALIENS_CharacterManager_generated_h
#error "CharacterManager.generated.h already included, missing '#pragma once' in CharacterManager.h"
#endif
#define TWALIENS_CharacterManager_generated_h

#define Twaliens_Source_Twaliens_CharacterManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisablePlayer) \
	{ \
		P_GET_OBJECT(ATwalien,Z_Param_APlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisablePlayer(Z_Param_APlayer); \
		P_NATIVE_END; \
	}


#define Twaliens_Source_Twaliens_CharacterManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisablePlayer) \
	{ \
		P_GET_OBJECT(ATwalien,Z_Param_APlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisablePlayer(Z_Param_APlayer); \
		P_NATIVE_END; \
	}


#define Twaliens_Source_Twaliens_CharacterManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterManager(); \
	friend struct Z_Construct_UClass_ACharacterManager_Statics; \
public: \
	DECLARE_CLASS(ACharacterManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Twaliens"), NO_API) \
	DECLARE_SERIALIZER(ACharacterManager)


#define Twaliens_Source_Twaliens_CharacterManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACharacterManager(); \
	friend struct Z_Construct_UClass_ACharacterManager_Statics; \
public: \
	DECLARE_CLASS(ACharacterManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Twaliens"), NO_API) \
	DECLARE_SERIALIZER(ACharacterManager)


#define Twaliens_Source_Twaliens_CharacterManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterManager(ACharacterManager&&); \
	NO_API ACharacterManager(const ACharacterManager&); \
public:


#define Twaliens_Source_Twaliens_CharacterManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterManager(ACharacterManager&&); \
	NO_API ACharacterManager(const ACharacterManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterManager)


#define Twaliens_Source_Twaliens_CharacterManager_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShootingGun() { return STRUCT_OFFSET(ACharacterManager, ShootingGun); } \
	FORCEINLINE static uint32 __PPO__SuckGun() { return STRUCT_OFFSET(ACharacterManager, SuckGun); } \
	FORCEINLINE static uint32 __PPO__RespawnLocation() { return STRUCT_OFFSET(ACharacterManager, RespawnLocation); } \
	FORCEINLINE static uint32 __PPO__Players() { return STRUCT_OFFSET(ACharacterManager, Players); } \
	FORCEINLINE static uint32 __PPO__RespawnTime() { return STRUCT_OFFSET(ACharacterManager, RespawnTime); } \
	FORCEINLINE static uint32 __PPO__SwitchTime() { return STRUCT_OFFSET(ACharacterManager, SwitchTime); }


#define Twaliens_Source_Twaliens_CharacterManager_h_12_PROLOG
#define Twaliens_Source_Twaliens_CharacterManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Twaliens_Source_Twaliens_CharacterManager_h_15_PRIVATE_PROPERTY_OFFSET \
	Twaliens_Source_Twaliens_CharacterManager_h_15_RPC_WRAPPERS \
	Twaliens_Source_Twaliens_CharacterManager_h_15_INCLASS \
	Twaliens_Source_Twaliens_CharacterManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Twaliens_Source_Twaliens_CharacterManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Twaliens_Source_Twaliens_CharacterManager_h_15_PRIVATE_PROPERTY_OFFSET \
	Twaliens_Source_Twaliens_CharacterManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Twaliens_Source_Twaliens_CharacterManager_h_15_INCLASS_NO_PURE_DECLS \
	Twaliens_Source_Twaliens_CharacterManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Twaliens_Source_Twaliens_CharacterManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
