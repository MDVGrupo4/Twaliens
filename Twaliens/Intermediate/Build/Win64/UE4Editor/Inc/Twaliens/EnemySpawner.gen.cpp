// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Twaliens/EnemySpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawner() {}
// Cross Module References
	TWALIENS_API UClass* Z_Construct_UClass_AEnemySpawner_NoRegister();
	TWALIENS_API UClass* Z_Construct_UClass_AEnemySpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Twaliens();
	TWALIENS_API UFunction* Z_Construct_UFunction_AEnemySpawner_SpawnEnemy();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AEnemySpawner::StaticRegisterNativesAEnemySpawner()
	{
		UClass* Class = AEnemySpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnEnemy", &AEnemySpawner::execSpawnEnemy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemySpawner_SpawnEnemy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemySpawner_SpawnEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemySpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemySpawner_SpawnEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemySpawner, "SpawnEnemy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemySpawner_SpawnEnemy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemySpawner_SpawnEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemySpawner_SpawnEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemySpawner_SpawnEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemySpawner_NoRegister()
	{
		return AEnemySpawner::StaticClass();
	}
	struct Z_Construct_UClass_AEnemySpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemySpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Twaliens,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemySpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemySpawner_SpawnEnemy, "SpawnEnemy" }, // 1236281064
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemySpawner.h" },
		{ "ModuleRelativePath", "EnemySpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnVolume_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemySpawner.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, Category = Default)\n               UStaticMeshComponent* Meshcomp;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnVolume = { UE4CodeGen_Private::EPropertyClass::Object, "SpawnVolume", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000090009, 1, nullptr, STRUCT_OFFSET(AEnemySpawner, SpawnVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnTime_MetaData[] = {
		{ "Category", "Spawner Settings" },
		{ "ModuleRelativePath", "EnemySpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnTime = { UE4CodeGen_Private::EPropertyClass::Float, "SpawnTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(AEnemySpawner, SpawnTime), METADATA_PARAMS(Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemySpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_SpawnTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemySpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpawner_Statics::ClassParams = {
		&AEnemySpawner::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AEnemySpawner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AEnemySpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemySpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemySpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemySpawner, 1582304360);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemySpawner(Z_Construct_UClass_AEnemySpawner, &AEnemySpawner::StaticClass, TEXT("/Script/Twaliens"), TEXT("AEnemySpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
