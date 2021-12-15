// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Bomberman/Public/Wall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWall() {}
// Cross Module References
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_AWall_NoRegister();
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_AWall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE4Bomberman();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AWall::StaticRegisterNativesAWall()
	{
	}
	UClass* Z_Construct_UClass_AWall_NoRegister()
	{
		return AWall::StaticClass();
	}
	struct Z_Construct_UClass_AWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isBreakable_MetaData[];
#endif
		static void NewProp_isBreakable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBreakable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Bomberman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Wall.h" },
		{ "ModuleRelativePath", "Public/Wall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWall_Statics::NewProp_isBreakable_MetaData[] = {
		{ "Category", "Wall" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, BlueprintPure)\n//bool GetBreakable() const;\n" },
		{ "ModuleRelativePath", "Public/Wall.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, BlueprintPure)\nbool GetBreakable() const;" },
	};
#endif
	void Z_Construct_UClass_AWall_Statics::NewProp_isBreakable_SetBit(void* Obj)
	{
		((AWall*)Obj)->isBreakable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWall_Statics::NewProp_isBreakable = { "isBreakable", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWall), &Z_Construct_UClass_AWall_Statics::NewProp_isBreakable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWall_Statics::NewProp_isBreakable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWall_Statics::NewProp_isBreakable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWall_Statics::NewProp_RootComp_MetaData[] = {
		{ "Category", "Root" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Wall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWall_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWall, RootComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWall_Statics::NewProp_RootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWall_Statics::NewProp_RootComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWall_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Wall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWall_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWall, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWall_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWall_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWall_Statics::NewProp_isBreakable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWall_Statics::NewProp_RootComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWall_Statics::NewProp_MeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWall_Statics::ClassParams = {
		&AWall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWall, 2788425547);
	template<> UE4BOMBERMAN_API UClass* StaticClass<AWall>()
	{
		return AWall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWall(Z_Construct_UClass_AWall, &AWall::StaticClass, TEXT("/Script/UE4Bomberman"), TEXT("AWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
