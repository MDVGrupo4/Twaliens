// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWALIENS_PickableObject_generated_h
#error "PickableObject.generated.h already included, missing '#pragma once' in PickableObject.h"
#endif
#define TWALIENS_PickableObject_generated_h

#define Twaliens_Source_Twaliens_PickableObject_h_19_RPC_WRAPPERS
#define Twaliens_Source_Twaliens_PickableObject_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Twaliens_Source_Twaliens_PickableObject_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickableObject(); \
	friend struct Z_Construct_UClass_APickableObject_Statics; \
public: \
	DECLARE_CLASS(APickableObject, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Twaliens"), NO_API) \
	DECLARE_SERIALIZER(APickableObject)


#define Twaliens_Source_Twaliens_PickableObject_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPickableObject(); \
	friend struct Z_Construct_UClass_APickableObject_Statics; \
public: \
	DECLARE_CLASS(APickableObject, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Twaliens"), NO_API) \
	DECLARE_SERIALIZER(APickableObject)


#define Twaliens_Source_Twaliens_PickableObject_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickableObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickableObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickableObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickableObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickableObject(APickableObject&&); \
	NO_API APickableObject(const APickableObject&); \
public:


#define Twaliens_Source_Twaliens_PickableObject_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickableObject(APickableObject&&); \
	NO_API APickableObject(const APickableObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickableObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickableObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickableObject)


#define Twaliens_Source_Twaliens_PickableObject_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(APickableObject, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ObjectMesh() { return STRUCT_OFFSET(APickableObject, ObjectMesh); } \
	FORCEINLINE static uint32 __PPO__ObjectType() { return STRUCT_OFFSET(APickableObject, ObjectType); } \
	FORCEINLINE static uint32 __PPO__RechargeAmmount() { return STRUCT_OFFSET(APickableObject, RechargeAmmount); } \
	FORCEINLINE static uint32 __PPO__AllowedTagsToInteract() { return STRUCT_OFFSET(APickableObject, AllowedTagsToInteract); }


#define Twaliens_Source_Twaliens_PickableObject_h_16_PROLOG
#define Twaliens_Source_Twaliens_PickableObject_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Twaliens_Source_Twaliens_PickableObject_h_19_PRIVATE_PROPERTY_OFFSET \
	Twaliens_Source_Twaliens_PickableObject_h_19_RPC_WRAPPERS \
	Twaliens_Source_Twaliens_PickableObject_h_19_INCLASS \
	Twaliens_Source_Twaliens_PickableObject_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Twaliens_Source_Twaliens_PickableObject_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Twaliens_Source_Twaliens_PickableObject_h_19_PRIVATE_PROPERTY_OFFSET \
	Twaliens_Source_Twaliens_PickableObject_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Twaliens_Source_Twaliens_PickableObject_h_19_INCLASS_NO_PURE_DECLS \
	Twaliens_Source_Twaliens_PickableObject_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Twaliens_Source_Twaliens_PickableObject_h


#define FOREACH_ENUM_EOBJECTTYPE(op) \
	op(EObjectType::Type_Health) \
	op(EObjectType::Type_Ammunition) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
