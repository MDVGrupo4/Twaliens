// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Twaliens/BasicWarrior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicWarrior() {}
// Cross Module References
	TWALIENS_API UClass* Z_Construct_UClass_ABasicWarrior_NoRegister();
	TWALIENS_API UClass* Z_Construct_UClass_ABasicWarrior();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Twaliens();
	TWALIENS_API UFunction* Z_Construct_UFunction_ABasicWarrior_ActivatePunchDamage();
	TWALIENS_API UFunction* Z_Construct_UFunction_ABasicWarrior_DeactivatePunchDamage();
	TWALIENS_API UFunction* Z_Construct_UFunction_ABasicWarrior_GetIsAttacking();
	TWALIENS_API UFunction* Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TWALIENS_API UFunction* Z_Construct_UFunction_ABasicWarrior_SetIsAttacking();
	TWALIENS_API UFunction* Z_Construct_UFunction_ABasicWarrior_SpawnCoins();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	TWALIENS_API UClass* Z_Construct_UClass_ULifeComponent_NoRegister();
// End Cross Module References
	void ABasicWarrior::StaticRegisterNativesABasicWarrior()
	{
		UClass* Class = ABasicWarrior::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivatePunchDamage", &ABasicWarrior::execActivatePunchDamage },
			{ "DeactivatePunchDamage", &ABasicWarrior::execDeactivatePunchDamage },
			{ "GetIsAttacking", &ABasicWarrior::execGetIsAttacking },
			{ "OnPunchBeginOverlap", &ABasicWarrior::execOnPunchBeginOverlap },
			{ "SetIsAttacking", &ABasicWarrior::execSetIsAttacking },
			{ "SpawnCoins", &ABasicWarrior::execSpawnCoins },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABasicWarrior_ActivatePunchDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicWarrior_ActivatePunchDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BasicWarrior.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicWarrior_ActivatePunchDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicWarrior, "ActivatePunchDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicWarrior_ActivatePunchDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABasicWarrior_ActivatePunchDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicWarrior_ActivatePunchDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicWarrior_ActivatePunchDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicWarrior_DeactivatePunchDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicWarrior_DeactivatePunchDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BasicWarrior.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicWarrior_DeactivatePunchDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicWarrior, "DeactivatePunchDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicWarrior_DeactivatePunchDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABasicWarrior_DeactivatePunchDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicWarrior_DeactivatePunchDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicWarrior_DeactivatePunchDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicWarrior_GetIsAttacking_Statics
	{
		struct BasicWarrior_eventGetIsAttacking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABasicWarrior_GetIsAttacking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BasicWarrior_eventGetIsAttacking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABasicWarrior_GetIsAttacking_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BasicWarrior_eventGetIsAttacking_Parms), &Z_Construct_UFunction_ABasicWarrior_GetIsAttacking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasicWarrior_GetIsAttacking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicWarrior_GetIsAttacking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicWarrior_GetIsAttacking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BasicWarrior.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicWarrior_GetIsAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicWarrior, "GetIsAttacking", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BasicWarrior_eventGetIsAttacking_Parms), Z_Construct_UFunction_ABasicWarrior_GetIsAttacking_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABasicWarrior_GetIsAttacking_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicWarrior_GetIsAttacking_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABasicWarrior_GetIsAttacking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicWarrior_GetIsAttacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicWarrior_GetIsAttacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics
	{
		struct BasicWarrior_eventOnPunchBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(BasicWarrior_eventOnPunchBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BasicWarrior_eventOnPunchBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BasicWarrior_eventOnPunchBeginOverlap_Parms), &Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BasicWarrior_eventOnPunchBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BasicWarrior_eventOnPunchBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BasicWarrior_eventOnPunchBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BasicWarrior_eventOnPunchBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BasicWarrior.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicWarrior, "OnPunchBeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(BasicWarrior_eventOnPunchBeginOverlap_Parms), Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicWarrior_SetIsAttacking_Statics
	{
		struct BasicWarrior_eventSetIsAttacking_Parms
		{
			bool NewAttackState;
		};
		static void NewProp_NewAttackState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewAttackState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABasicWarrior_SetIsAttacking_Statics::NewProp_NewAttackState_SetBit(void* Obj)
	{
		((BasicWarrior_eventSetIsAttacking_Parms*)Obj)->NewAttackState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABasicWarrior_SetIsAttacking_Statics::NewProp_NewAttackState = { UE4CodeGen_Private::EPropertyClass::Bool, "NewAttackState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BasicWarrior_eventSetIsAttacking_Parms), &Z_Construct_UFunction_ABasicWarrior_SetIsAttacking_Statics::NewProp_NewAttackState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasicWarrior_SetIsAttacking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicWarrior_SetIsAttacking_Statics::NewProp_NewAttackState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicWarrior_SetIsAttacking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BasicWarrior.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicWarrior_SetIsAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicWarrior, "SetIsAttacking", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BasicWarrior_eventSetIsAttacking_Parms), Z_Construct_UFunction_ABasicWarrior_SetIsAttacking_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABasicWarrior_SetIsAttacking_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicWarrior_SetIsAttacking_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABasicWarrior_SetIsAttacking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicWarrior_SetIsAttacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicWarrior_SetIsAttacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicWarrior_SpawnCoins_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicWarrior_SpawnCoins_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BasicWarrior.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicWarrior_SpawnCoins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicWarrior, "SpawnCoins", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicWarrior_SpawnCoins_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABasicWarrior_SpawnCoins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicWarrior_SpawnCoins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicWarrior_SpawnCoins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABasicWarrior_NoRegister()
	{
		return ABasicWarrior::StaticClass();
	}
	struct Z_Construct_UClass_ABasicWarrior_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PunchTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PunchTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HPComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicWarrior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Twaliens,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABasicWarrior_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasicWarrior_ActivatePunchDamage, "ActivatePunchDamage" }, // 3546312129
		{ &Z_Construct_UFunction_ABasicWarrior_DeactivatePunchDamage, "DeactivatePunchDamage" }, // 2812938616
		{ &Z_Construct_UFunction_ABasicWarrior_GetIsAttacking, "GetIsAttacking" }, // 3445860115
		{ &Z_Construct_UFunction_ABasicWarrior_OnPunchBeginOverlap, "OnPunchBeginOverlap" }, // 2069612894
		{ &Z_Construct_UFunction_ABasicWarrior_SetIsAttacking, "SetIsAttacking" }, // 1173136094
		{ &Z_Construct_UFunction_ABasicWarrior_SpawnCoins, "SpawnCoins" }, // 1176969354
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicWarrior_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasicWarrior.h" },
		{ "ModuleRelativePath", "BasicWarrior.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicWarrior_Statics::NewProp_PunchTrigger_MetaData[] = {
		{ "Category", "Player Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasicWarrior.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicWarrior_Statics::NewProp_PunchTrigger = { UE4CodeGen_Private::EPropertyClass::Object, "PunchTrigger", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(ABasicWarrior, PunchTrigger), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicWarrior_Statics::NewProp_PunchTrigger_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasicWarrior_Statics::NewProp_PunchTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicWarrior_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "Player Settings" },
		{ "ModuleRelativePath", "BasicWarrior.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicWarrior_Statics::NewProp_damage = { UE4CodeGen_Private::EPropertyClass::Float, "damage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABasicWarrior, damage), METADATA_PARAMS(Z_Construct_UClass_ABasicWarrior_Statics::NewProp_damage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasicWarrior_Statics::NewProp_damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicWarrior_Statics::NewProp_HPComponent_MetaData[] = {
		{ "Category", "Player Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasicWarrior.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicWarrior_Statics::NewProp_HPComponent = { UE4CodeGen_Private::EPropertyClass::Object, "HPComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ABasicWarrior, HPComponent), Z_Construct_UClass_ULifeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicWarrior_Statics::NewProp_HPComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasicWarrior_Statics::NewProp_HPComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicWarrior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicWarrior_Statics::NewProp_PunchTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicWarrior_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicWarrior_Statics::NewProp_HPComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicWarrior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicWarrior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicWarrior_Statics::ClassParams = {
		&ABasicWarrior::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ABasicWarrior_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABasicWarrior_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABasicWarrior_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABasicWarrior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicWarrior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicWarrior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicWarrior, 3342411347);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicWarrior(Z_Construct_UClass_ABasicWarrior, &ABasicWarrior::StaticClass, TEXT("/Script/Twaliens"), TEXT("ABasicWarrior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicWarrior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
