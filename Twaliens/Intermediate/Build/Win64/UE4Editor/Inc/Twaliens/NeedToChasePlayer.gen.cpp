// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Twaliens/NeedToChasePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeedToChasePlayer() {}
// Cross Module References
	TWALIENS_API UClass* Z_Construct_UClass_UNeedToChasePlayer_NoRegister();
	TWALIENS_API UClass* Z_Construct_UClass_UNeedToChasePlayer();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_Twaliens();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UNeedToChasePlayer::StaticRegisterNativesUNeedToChasePlayer()
	{
	}
	UClass* Z_Construct_UClass_UNeedToChasePlayer_NoRegister()
	{
		return UNeedToChasePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UNeedToChasePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapDistance_MetaData[];
#endif
		static void NewProp_OverlapDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverlapDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeleeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeedToChasePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Twaliens,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeedToChasePlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NeedToChasePlayer.h" },
		{ "ModuleRelativePath", "NeedToChasePlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeedToChasePlayer_Statics::NewProp_OverlapDistance_MetaData[] = {
		{ "Category", "Decorator Property" },
		{ "ModuleRelativePath", "NeedToChasePlayer.h" },
	};
#endif
	void Z_Construct_UClass_UNeedToChasePlayer_Statics::NewProp_OverlapDistance_SetBit(void* Obj)
	{
		((UNeedToChasePlayer*)Obj)->OverlapDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNeedToChasePlayer_Statics::NewProp_OverlapDistance = { UE4CodeGen_Private::EPropertyClass::Bool, "OverlapDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UNeedToChasePlayer), &Z_Construct_UClass_UNeedToChasePlayer_Statics::NewProp_OverlapDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNeedToChasePlayer_Statics::NewProp_OverlapDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNeedToChasePlayer_Statics::NewProp_OverlapDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeedToChasePlayer_Statics::NewProp_MeleeRange_MetaData[] = {
		{ "Category", "Decorator Property" },
		{ "ModuleRelativePath", "NeedToChasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNeedToChasePlayer_Statics::NewProp_MeleeRange = { UE4CodeGen_Private::EPropertyClass::Float, "MeleeRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UNeedToChasePlayer, MeleeRange), METADATA_PARAMS(Z_Construct_UClass_UNeedToChasePlayer_Statics::NewProp_MeleeRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNeedToChasePlayer_Statics::NewProp_MeleeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeedToChasePlayer_Statics::NewProp_TargetKey_MetaData[] = {
		{ "Category", "BlackBoard key" },
		{ "ModuleRelativePath", "NeedToChasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNeedToChasePlayer_Statics::NewProp_TargetKey = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UNeedToChasePlayer, TargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UNeedToChasePlayer_Statics::NewProp_TargetKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNeedToChasePlayer_Statics::NewProp_TargetKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeedToChasePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeedToChasePlayer_Statics::NewProp_OverlapDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeedToChasePlayer_Statics::NewProp_MeleeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeedToChasePlayer_Statics::NewProp_TargetKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeedToChasePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeedToChasePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNeedToChasePlayer_Statics::ClassParams = {
		&UNeedToChasePlayer::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UNeedToChasePlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UNeedToChasePlayer_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UNeedToChasePlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNeedToChasePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeedToChasePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNeedToChasePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNeedToChasePlayer, 1944748407);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNeedToChasePlayer(Z_Construct_UClass_UNeedToChasePlayer, &UNeedToChasePlayer::StaticClass, TEXT("/Script/Twaliens"), TEXT("UNeedToChasePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeedToChasePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
