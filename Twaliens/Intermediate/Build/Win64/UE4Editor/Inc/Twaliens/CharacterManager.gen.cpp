// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Twaliens/CharacterManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterManager() {}
// Cross Module References
	TWALIENS_API UClass* Z_Construct_UClass_ACharacterManager_NoRegister();
	TWALIENS_API UClass* Z_Construct_UClass_ACharacterManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Twaliens();
	TWALIENS_API UFunction* Z_Construct_UFunction_ACharacterManager_DisablePlayer();
	TWALIENS_API UClass* Z_Construct_UClass_ATwalien_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart_NoRegister();
	TWALIENS_API UClass* Z_Construct_UClass_UDustpan_NoRegister();
	TWALIENS_API UClass* Z_Construct_UClass_UWeapon_NoRegister();
// End Cross Module References
	void ACharacterManager::StaticRegisterNativesACharacterManager()
	{
		UClass* Class = ACharacterManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisablePlayer", &ACharacterManager::execDisablePlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacterManager_DisablePlayer_Statics
	{
		struct CharacterManager_eventDisablePlayer_Parms
		{
			ATwalien* APlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_APlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterManager_DisablePlayer_Statics::NewProp_APlayer = { UE4CodeGen_Private::EPropertyClass::Object, "APlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterManager_eventDisablePlayer_Parms, APlayer), Z_Construct_UClass_ATwalien_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterManager_DisablePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterManager_DisablePlayer_Statics::NewProp_APlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterManager_DisablePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterManager.h" },
		{ "ToolTip", "Disable the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterManager_DisablePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterManager, "DisablePlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(CharacterManager_eventDisablePlayer_Parms), Z_Construct_UFunction_ACharacterManager_DisablePlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACharacterManager_DisablePlayer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterManager_DisablePlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACharacterManager_DisablePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterManager_DisablePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterManager_DisablePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACharacterManager_NoRegister()
	{
		return ACharacterManager::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwitchTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RespawnTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Players;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Players_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RespawnLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RespawnLocation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuckGun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuckGun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootingGun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShootingGun;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Twaliens,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharacterManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacterManager_DisablePlayer, "DisablePlayer" }, // 1239692414
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterManager.h" },
		{ "ModuleRelativePath", "CharacterManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterManager_Statics::NewProp_SwitchTime_MetaData[] = {
		{ "Category", "Player Settings" },
		{ "ModuleRelativePath", "CharacterManager.h" },
		{ "ToolTip", "Time to wait before the weapons switch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterManager_Statics::NewProp_SwitchTime = { UE4CodeGen_Private::EPropertyClass::Float, "SwitchTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ACharacterManager, SwitchTime), METADATA_PARAMS(Z_Construct_UClass_ACharacterManager_Statics::NewProp_SwitchTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACharacterManager_Statics::NewProp_SwitchTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterManager_Statics::NewProp_RespawnTime_MetaData[] = {
		{ "Category", "Player Settings" },
		{ "ModuleRelativePath", "CharacterManager.h" },
		{ "ToolTip", "Time Player have to wait to respawn when dead" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterManager_Statics::NewProp_RespawnTime = { UE4CodeGen_Private::EPropertyClass::Float, "RespawnTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ACharacterManager, RespawnTime), METADATA_PARAMS(Z_Construct_UClass_ACharacterManager_Statics::NewProp_RespawnTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACharacterManager_Statics::NewProp_RespawnTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterManager_Statics::NewProp_Players_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "CharacterManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacterManager_Statics::NewProp_Players = { UE4CodeGen_Private::EPropertyClass::Array, "Players", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020001, 1, nullptr, STRUCT_OFFSET(ACharacterManager, Players), METADATA_PARAMS(Z_Construct_UClass_ACharacterManager_Statics::NewProp_Players_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACharacterManager_Statics::NewProp_Players_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterManager_Statics::NewProp_Players_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Players", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_ATwalien_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterManager_Statics::NewProp_RespawnLocation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "CharacterManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacterManager_Statics::NewProp_RespawnLocation = { UE4CodeGen_Private::EPropertyClass::Array, "RespawnLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020001, 1, nullptr, STRUCT_OFFSET(ACharacterManager, RespawnLocation), METADATA_PARAMS(Z_Construct_UClass_ACharacterManager_Statics::NewProp_RespawnLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACharacterManager_Statics::NewProp_RespawnLocation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterManager_Statics::NewProp_RespawnLocation_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "RespawnLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterManager_Statics::NewProp_SuckGun_MetaData[] = {
		{ "Category", "Player Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterManager_Statics::NewProp_SuckGun = { UE4CodeGen_Private::EPropertyClass::Object, "SuckGun", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ACharacterManager, SuckGun), Z_Construct_UClass_UDustpan_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterManager_Statics::NewProp_SuckGun_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACharacterManager_Statics::NewProp_SuckGun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterManager_Statics::NewProp_ShootingGun_MetaData[] = {
		{ "Category", "Player Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterManager_Statics::NewProp_ShootingGun = { UE4CodeGen_Private::EPropertyClass::Object, "ShootingGun", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ACharacterManager, ShootingGun), Z_Construct_UClass_UWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterManager_Statics::NewProp_ShootingGun_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACharacterManager_Statics::NewProp_ShootingGun_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterManager_Statics::NewProp_SwitchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterManager_Statics::NewProp_RespawnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterManager_Statics::NewProp_Players,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterManager_Statics::NewProp_Players_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterManager_Statics::NewProp_RespawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterManager_Statics::NewProp_RespawnLocation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterManager_Statics::NewProp_SuckGun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterManager_Statics::NewProp_ShootingGun,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacterManager_Statics::ClassParams = {
		&ACharacterManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ACharacterManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACharacterManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACharacterManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacterManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacterManager, 2861033380);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacterManager(Z_Construct_UClass_ACharacterManager, &ACharacterManager::StaticClass, TEXT("/Script/Twaliens"), TEXT("ACharacterManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
