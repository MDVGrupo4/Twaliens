// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Twaliens/PickableObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickableObject() {}
// Cross Module References
	TWALIENS_API UEnum* Z_Construct_UEnum_Twaliens_EObjectType();
	UPackage* Z_Construct_UPackage__Script_Twaliens();
	TWALIENS_API UClass* Z_Construct_UClass_APickableObject_NoRegister();
	TWALIENS_API UClass* Z_Construct_UClass_APickableObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static UEnum* EObjectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Twaliens_EObjectType, Z_Construct_UPackage__Script_Twaliens(), TEXT("EObjectType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EObjectType(EObjectType_StaticEnum, TEXT("/Script/Twaliens"), TEXT("EObjectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Twaliens_EObjectType_CRC() { return 2819851752U; }
	UEnum* Z_Construct_UEnum_Twaliens_EObjectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Twaliens();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EObjectType"), 0, Get_Z_Construct_UEnum_Twaliens_EObjectType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EObjectType::Type_Health", (int64)EObjectType::Type_Health },
				{ "EObjectType::Type_Ammunition", (int64)EObjectType::Type_Ammunition },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "PickableObject.h" },
				{ "ToolTip", "\"BlueprintType\" is essential to include" },
				{ "Type_Ammunition.DisplayName", "Ammunition" },
				{ "Type_Health.DisplayName", "Health" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Twaliens,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EObjectType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EObjectType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void APickableObject::StaticRegisterNativesAPickableObject()
	{
	}
	UClass* Z_Construct_UClass_APickableObject_NoRegister()
	{
		return APickableObject::StaticClass();
	}
	struct Z_Construct_UClass_APickableObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedTagsToInteract_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedTagsToInteract;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AllowedTagsToInteract_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RechargeAmmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RechargeAmmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObjectType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickableObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Twaliens,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickableObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickableObject.h" },
		{ "ModuleRelativePath", "PickableObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickableObject_Statics::NewProp_AllowedTagsToInteract_MetaData[] = {
		{ "Category", "Projectile Settings" },
		{ "ModuleRelativePath", "PickableObject.h" },
		{ "ToolTip", "Tags Allowed to Interact" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APickableObject_Statics::NewProp_AllowedTagsToInteract = { UE4CodeGen_Private::EPropertyClass::Array, "AllowedTagsToInteract", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(APickableObject, AllowedTagsToInteract), METADATA_PARAMS(Z_Construct_UClass_APickableObject_Statics::NewProp_AllowedTagsToInteract_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickableObject_Statics::NewProp_AllowedTagsToInteract_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_APickableObject_Statics::NewProp_AllowedTagsToInteract_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "AllowedTagsToInteract", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickableObject_Statics::NewProp_RechargeAmmount_MetaData[] = {
		{ "Category", "Object Settings" },
		{ "ModuleRelativePath", "PickableObject.h" },
		{ "ToolTip", "Object Type" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickableObject_Statics::NewProp_RechargeAmmount = { UE4CodeGen_Private::EPropertyClass::Float, "RechargeAmmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(APickableObject, RechargeAmmount), METADATA_PARAMS(Z_Construct_UClass_APickableObject_Statics::NewProp_RechargeAmmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickableObject_Statics::NewProp_RechargeAmmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickableObject_Statics::NewProp_ObjectType_MetaData[] = {
		{ "Category", "Object Settings" },
		{ "ModuleRelativePath", "PickableObject.h" },
		{ "ToolTip", "Object Type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APickableObject_Statics::NewProp_ObjectType = { UE4CodeGen_Private::EPropertyClass::Enum, "ObjectType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(APickableObject, ObjectType), Z_Construct_UEnum_Twaliens_EObjectType, METADATA_PARAMS(Z_Construct_UClass_APickableObject_Statics::NewProp_ObjectType_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickableObject_Statics::NewProp_ObjectType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APickableObject_Statics::NewProp_ObjectType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickableObject_Statics::NewProp_ObjectMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickableObject.h" },
		{ "ToolTip", "Object Mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickableObject_Statics::NewProp_ObjectMesh = { UE4CodeGen_Private::EPropertyClass::Object, "ObjectMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000b0009, 1, nullptr, STRUCT_OFFSET(APickableObject, ObjectMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickableObject_Statics::NewProp_ObjectMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickableObject_Statics::NewProp_ObjectMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickableObject_Statics::NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickableObject_Statics::NewProp_CollisionComp = { UE4CodeGen_Private::EPropertyClass::Object, "CollisionComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000b0009, 1, nullptr, STRUCT_OFFSET(APickableObject, CollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickableObject_Statics::NewProp_CollisionComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickableObject_Statics::NewProp_CollisionComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickableObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickableObject_Statics::NewProp_AllowedTagsToInteract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickableObject_Statics::NewProp_AllowedTagsToInteract_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickableObject_Statics::NewProp_RechargeAmmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickableObject_Statics::NewProp_ObjectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickableObject_Statics::NewProp_ObjectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickableObject_Statics::NewProp_ObjectMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickableObject_Statics::NewProp_CollisionComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickableObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickableObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickableObject_Statics::ClassParams = {
		&APickableObject::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_APickableObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APickableObject_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APickableObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APickableObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickableObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickableObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickableObject, 3509830763);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickableObject(Z_Construct_UClass_APickableObject, &APickableObject::StaticClass, TEXT("/Script/Twaliens"), TEXT("APickableObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickableObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
