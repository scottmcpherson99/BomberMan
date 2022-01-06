// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Bomberman/Public/PlayerCharacter2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacter2() {}
// Cross Module References
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_APlayerCharacter2_NoRegister();
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_APlayerCharacter2();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UE4Bomberman();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_ABomb_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlayerCharacter2::execGetCurrentPowerup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentPowerup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter2::execSetMaxBombs)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_maxBombs_);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxBombs(Z_Param_maxBombs_);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter2::execGetBombs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBombs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter2::execSetBombs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBombs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter2::execCollectPickups)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectPickups();
		P_NATIVE_END;
	}
	void APlayerCharacter2::StaticRegisterNativesAPlayerCharacter2()
	{
		UClass* Class = APlayerCharacter2::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectPickups", &APlayerCharacter2::execCollectPickups },
			{ "GetBombs", &APlayerCharacter2::execGetBombs },
			{ "GetCurrentPowerup", &APlayerCharacter2::execGetCurrentPowerup },
			{ "SetBombs", &APlayerCharacter2::execSetBombs },
			{ "SetMaxBombs", &APlayerCharacter2::execSetMaxBombs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerCharacter2_CollectPickups_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter2_CollectPickups_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickups" },
		{ "Comment", "//called when we collect any pickups inside the collectionsphere\n" },
		{ "ModuleRelativePath", "Public/PlayerCharacter2.h" },
		{ "ToolTip", "called when we collect any pickups inside the collectionsphere" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter2_CollectPickups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter2, nullptr, "CollectPickups", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter2_CollectPickups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter2_CollectPickups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter2_CollectPickups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerCharacter2_CollectPickups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter2_GetBombs_Statics
	{
		struct PlayerCharacter2_eventGetBombs_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerCharacter2_GetBombs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerCharacter2_eventGetBombs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter2_GetBombs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter2_GetBombs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter2_GetBombs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bombs" },
		{ "ModuleRelativePath", "Public/PlayerCharacter2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter2_GetBombs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter2, nullptr, "GetBombs", nullptr, nullptr, sizeof(PlayerCharacter2_eventGetBombs_Parms), Z_Construct_UFunction_APlayerCharacter2_GetBombs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter2_GetBombs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter2_GetBombs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter2_GetBombs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter2_GetBombs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerCharacter2_GetBombs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter2_GetCurrentPowerup_Statics
	{
		struct PlayerCharacter2_eventGetCurrentPowerup_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerCharacter2_GetCurrentPowerup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerCharacter2_eventGetCurrentPowerup_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter2_GetCurrentPowerup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter2_GetCurrentPowerup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter2_GetCurrentPowerup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCharacter2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter2_GetCurrentPowerup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter2, nullptr, "GetCurrentPowerup", nullptr, nullptr, sizeof(PlayerCharacter2_eventGetCurrentPowerup_Parms), Z_Construct_UFunction_APlayerCharacter2_GetCurrentPowerup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter2_GetCurrentPowerup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter2_GetCurrentPowerup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter2_GetCurrentPowerup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter2_GetCurrentPowerup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerCharacter2_GetCurrentPowerup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter2_SetBombs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter2_SetBombs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bombs" },
		{ "ModuleRelativePath", "Public/PlayerCharacter2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter2_SetBombs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter2, nullptr, "SetBombs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter2_SetBombs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter2_SetBombs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter2_SetBombs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerCharacter2_SetBombs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter2_SetMaxBombs_Statics
	{
		struct PlayerCharacter2_eventSetMaxBombs_Parms
		{
			int32 maxBombs_;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxBombs_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerCharacter2_SetMaxBombs_Statics::NewProp_maxBombs_ = { "maxBombs_", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerCharacter2_eventSetMaxBombs_Parms, maxBombs_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter2_SetMaxBombs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter2_SetMaxBombs_Statics::NewProp_maxBombs_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter2_SetMaxBombs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bombs" },
		{ "ModuleRelativePath", "Public/PlayerCharacter2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter2_SetMaxBombs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter2, nullptr, "SetMaxBombs", nullptr, nullptr, sizeof(PlayerCharacter2_eventSetMaxBombs_Parms), Z_Construct_UFunction_APlayerCharacter2_SetMaxBombs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter2_SetMaxBombs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter2_SetMaxBombs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter2_SetMaxBombs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter2_SetMaxBombs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerCharacter2_SetMaxBombs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerCharacter2_NoRegister()
	{
		return APlayerCharacter2::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCharacter2_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollectionSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bombToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bombToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bombInitialScale__MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bombInitialScale_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedIncrease__MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpeedIncrease_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BigBomb__MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BigBomb_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiBomb__MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MultiBomb_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCharacter2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Bomberman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerCharacter2_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCharacter2_CollectPickups, "CollectPickups" }, // 279108630
		{ &Z_Construct_UFunction_APlayerCharacter2_GetBombs, "GetBombs" }, // 1767191807
		{ &Z_Construct_UFunction_APlayerCharacter2_GetCurrentPowerup, "GetCurrentPowerup" }, // 2556929198
		{ &Z_Construct_UFunction_APlayerCharacter2_SetBombs, "SetBombs" }, // 1205215511
		{ &Z_Construct_UFunction_APlayerCharacter2_SetMaxBombs, "SetMaxBombs" }, // 3186565368
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter2_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCharacter2.h" },
		{ "ModuleRelativePath", "Public/PlayerCharacter2.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Skeletal Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerCharacter2.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCharacter2, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_CollectionSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Collection Sphere */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerCharacter2.h" },
		{ "ToolTip", "Collection Sphere" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_CollectionSphere = { "CollectionSphere", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCharacter2, CollectionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_CollectionSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_CollectionSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_bombToSpawn_MetaData[] = {
		{ "Category", "Type of Bomb to spawn" },
		{ "ModuleRelativePath", "Public/PlayerCharacter2.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_bombToSpawn = { "bombToSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCharacter2, bombToSpawn), Z_Construct_UClass_ABomb_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_bombToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_bombToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_bombInitialScale__MetaData[] = {
		{ "Category", "Bomb Size" },
		{ "ModuleRelativePath", "Public/PlayerCharacter2.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_bombInitialScale_ = { "bombInitialScale_", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCharacter2, bombInitialScale_), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_bombInitialScale__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_bombInitialScale__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_SpeedIncrease__MetaData[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/PlayerCharacter2.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_SpeedIncrease_ = { "SpeedIncrease_", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCharacter2, SpeedIncrease_), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_SpeedIncrease__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_SpeedIncrease__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_BigBomb__MetaData[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/PlayerCharacter2.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_BigBomb_ = { "BigBomb_", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCharacter2, BigBomb_), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_BigBomb__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_BigBomb__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_MultiBomb__MetaData[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/PlayerCharacter2.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_MultiBomb_ = { "MultiBomb_", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCharacter2, MultiBomb_), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_MultiBomb__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_MultiBomb__MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_CollectionSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_bombToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_bombInitialScale_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_SpeedIncrease_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_BigBomb_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter2_Statics::NewProp_MultiBomb_,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCharacter2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacter2_Statics::ClassParams = {
		&APlayerCharacter2::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerCharacter2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter2_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCharacter2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerCharacter2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerCharacter2, 784410796);
	template<> UE4BOMBERMAN_API UClass* StaticClass<APlayerCharacter2>()
	{
		return APlayerCharacter2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerCharacter2(Z_Construct_UClass_APlayerCharacter2, &APlayerCharacter2::StaticClass, TEXT("/Script/UE4Bomberman"), TEXT("APlayerCharacter2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacter2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
