// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Bomberman/Public/DestructableWall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestructableWall() {}
// Cross Module References
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_ADestructableWall_NoRegister();
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_ADestructableWall();
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_AWall();
	UPackage* Z_Construct_UPackage__Script_UE4Bomberman();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ADestructableWall::StaticRegisterNativesADestructableWall()
	{
	}
	UClass* Z_Construct_UClass_ADestructableWall_NoRegister()
	{
		return ADestructableWall::StaticClass();
	}
	struct Z_Construct_UClass_ADestructableWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
	UObject* (*const Z_Construct_UClass_ADestructableWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWall,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Bomberman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructableWall_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DestructableWall.h" },
		{ "ModuleRelativePath", "Public/DestructableWall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructableWall_Statics::NewProp_SpeedIncrease__MetaData[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/DestructableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADestructableWall_Statics::NewProp_SpeedIncrease_ = { "SpeedIncrease_", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADestructableWall, SpeedIncrease_), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADestructableWall_Statics::NewProp_SpeedIncrease__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADestructableWall_Statics::NewProp_SpeedIncrease__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructableWall_Statics::NewProp_BigBomb__MetaData[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/DestructableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADestructableWall_Statics::NewProp_BigBomb_ = { "BigBomb_", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADestructableWall, BigBomb_), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADestructableWall_Statics::NewProp_BigBomb__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADestructableWall_Statics::NewProp_BigBomb__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructableWall_Statics::NewProp_MultiBomb__MetaData[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/DestructableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADestructableWall_Statics::NewProp_MultiBomb_ = { "MultiBomb_", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADestructableWall, MultiBomb_), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADestructableWall_Statics::NewProp_MultiBomb__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADestructableWall_Statics::NewProp_MultiBomb__MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADestructableWall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructableWall_Statics::NewProp_SpeedIncrease_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructableWall_Statics::NewProp_BigBomb_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructableWall_Statics::NewProp_MultiBomb_,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADestructableWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADestructableWall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADestructableWall_Statics::ClassParams = {
		&ADestructableWall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADestructableWall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADestructableWall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADestructableWall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADestructableWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADestructableWall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADestructableWall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADestructableWall, 3796520666);
	template<> UE4BOMBERMAN_API UClass* StaticClass<ADestructableWall>()
	{
		return ADestructableWall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADestructableWall(Z_Construct_UClass_ADestructableWall, &ADestructableWall::StaticClass, TEXT("/Script/UE4Bomberman"), TEXT("ADestructableWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADestructableWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
