// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Bomberman/Public/BaseDrop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseDrop() {}
// Cross Module References
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_ABaseDrop_NoRegister();
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_ABaseDrop();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE4Bomberman();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaseDrop::execWasCollected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WasCollected_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseDrop::execSetActive)
	{
		P_GET_UBOOL(Z_Param_newPickupState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param_newPickupState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseDrop::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	static FName NAME_ABaseDrop_WasCollected = FName(TEXT("WasCollected"));
	void ABaseDrop::WasCollected()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseDrop_WasCollected),NULL);
	}
	void ABaseDrop::StaticRegisterNativesABaseDrop()
	{
		UClass* Class = ABaseDrop::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActive", &ABaseDrop::execIsActive },
			{ "SetActive", &ABaseDrop::execSetActive },
			{ "WasCollected", &ABaseDrop::execWasCollected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseDrop_IsActive_Statics
	{
		struct BaseDrop_eventIsActive_Parms
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
	void Z_Construct_UFunction_ABaseDrop_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseDrop_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseDrop_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseDrop_eventIsActive_Parms), &Z_Construct_UFunction_ABaseDrop_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseDrop_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseDrop_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseDrop_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "Comment", "//return whether the pickup is active\n" },
		{ "ModuleRelativePath", "Public/BaseDrop.h" },
		{ "ToolTip", "return whether the pickup is active" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseDrop_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseDrop, nullptr, "IsActive", nullptr, nullptr, sizeof(BaseDrop_eventIsActive_Parms), Z_Construct_UFunction_ABaseDrop_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseDrop_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseDrop_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseDrop_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseDrop_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseDrop_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseDrop_SetActive_Statics
	{
		struct BaseDrop_eventSetActive_Parms
		{
			bool newPickupState;
		};
		static void NewProp_newPickupState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_newPickupState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseDrop_SetActive_Statics::NewProp_newPickupState_SetBit(void* Obj)
	{
		((BaseDrop_eventSetActive_Parms*)Obj)->newPickupState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseDrop_SetActive_Statics::NewProp_newPickupState = { "newPickupState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseDrop_eventSetActive_Parms), &Z_Construct_UFunction_ABaseDrop_SetActive_Statics::NewProp_newPickupState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseDrop_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseDrop_SetActive_Statics::NewProp_newPickupState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseDrop_SetActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "Comment", "//allows other classes to safely change whether the pickup is active\n" },
		{ "ModuleRelativePath", "Public/BaseDrop.h" },
		{ "ToolTip", "allows other classes to safely change whether the pickup is active" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseDrop_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseDrop, nullptr, "SetActive", nullptr, nullptr, sizeof(BaseDrop_eventSetActive_Parms), Z_Construct_UFunction_ABaseDrop_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseDrop_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseDrop_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseDrop_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseDrop_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseDrop_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseDrop_WasCollected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseDrop_WasCollected_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//function to call when the pickup is collected\n" },
		{ "ModuleRelativePath", "Public/BaseDrop.h" },
		{ "ToolTip", "function to call when the pickup is collected" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseDrop_WasCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseDrop, nullptr, "WasCollected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseDrop_WasCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseDrop_WasCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseDrop_WasCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseDrop_WasCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseDrop_NoRegister()
	{
		return ABaseDrop::StaticClass();
	}
	struct Z_Construct_UClass_ABaseDrop_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseDrop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Bomberman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseDrop_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseDrop_IsActive, "IsActive" }, // 1243438138
		{ &Z_Construct_UFunction_ABaseDrop_SetActive, "SetActive" }, // 2612132112
		{ &Z_Construct_UFunction_ABaseDrop_WasCollected, "WasCollected" }, // 4097754099
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseDrop_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseDrop.h" },
		{ "ModuleRelativePath", "Public/BaseDrop.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseDrop_Statics::NewProp_PickupMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pickup" },
		{ "Comment", "//static mesh to represent the pickup in the level\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseDrop.h" },
		{ "ToolTip", "static mesh to represent the pickup in the level" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseDrop_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseDrop, PickupMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseDrop_Statics::NewProp_PickupMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseDrop_Statics::NewProp_PickupMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseDrop_Statics::NewProp_PickupMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseDrop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseDrop>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseDrop_Statics::ClassParams = {
		&ABaseDrop::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseDrop_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseDrop_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseDrop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseDrop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseDrop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseDrop_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseDrop, 3291713804);
	template<> UE4BOMBERMAN_API UClass* StaticClass<ABaseDrop>()
	{
		return ABaseDrop::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseDrop(Z_Construct_UClass_ABaseDrop, &ABaseDrop::StaticClass, TEXT("/Script/UE4Bomberman"), TEXT("ABaseDrop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseDrop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
