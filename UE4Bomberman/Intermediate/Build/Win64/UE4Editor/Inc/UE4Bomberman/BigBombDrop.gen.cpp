// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Bomberman/Public/BigBombDrop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBigBombDrop() {}
// Cross Module References
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_ABigBombDrop_NoRegister();
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_ABigBombDrop();
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_ABaseDrop();
	UPackage* Z_Construct_UPackage__Script_UE4Bomberman();
// End Cross Module References
	void ABigBombDrop::StaticRegisterNativesABigBombDrop()
	{
	}
	UClass* Z_Construct_UClass_ABigBombDrop_NoRegister()
	{
		return ABigBombDrop::StaticClass();
	}
	struct Z_Construct_UClass_ABigBombDrop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABigBombDrop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseDrop,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Bomberman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABigBombDrop_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BigBombDrop.h" },
		{ "ModuleRelativePath", "Public/BigBombDrop.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABigBombDrop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABigBombDrop>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABigBombDrop_Statics::ClassParams = {
		&ABigBombDrop::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABigBombDrop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABigBombDrop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABigBombDrop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABigBombDrop_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABigBombDrop, 2528982431);
	template<> UE4BOMBERMAN_API UClass* StaticClass<ABigBombDrop>()
	{
		return ABigBombDrop::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABigBombDrop(Z_Construct_UClass_ABigBombDrop, &ABigBombDrop::StaticClass, TEXT("/Script/UE4Bomberman"), TEXT("ABigBombDrop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABigBombDrop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
