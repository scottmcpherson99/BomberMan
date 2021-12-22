// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Bomberman/Public/SppedIncreaseDrop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSppedIncreaseDrop() {}
// Cross Module References
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_ASppedIncreaseDrop_NoRegister();
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_ASppedIncreaseDrop();
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_ABaseDrop();
	UPackage* Z_Construct_UPackage__Script_UE4Bomberman();
// End Cross Module References
	void ASppedIncreaseDrop::StaticRegisterNativesASppedIncreaseDrop()
	{
	}
	UClass* Z_Construct_UClass_ASppedIncreaseDrop_NoRegister()
	{
		return ASppedIncreaseDrop::StaticClass();
	}
	struct Z_Construct_UClass_ASppedIncreaseDrop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASppedIncreaseDrop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseDrop,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Bomberman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASppedIncreaseDrop_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SppedIncreaseDrop.h" },
		{ "ModuleRelativePath", "Public/SppedIncreaseDrop.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASppedIncreaseDrop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASppedIncreaseDrop>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASppedIncreaseDrop_Statics::ClassParams = {
		&ASppedIncreaseDrop::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASppedIncreaseDrop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASppedIncreaseDrop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASppedIncreaseDrop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASppedIncreaseDrop_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASppedIncreaseDrop, 3969924672);
	template<> UE4BOMBERMAN_API UClass* StaticClass<ASppedIncreaseDrop>()
	{
		return ASppedIncreaseDrop::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASppedIncreaseDrop(Z_Construct_UClass_ASppedIncreaseDrop, &ASppedIncreaseDrop::StaticClass, TEXT("/Script/UE4Bomberman"), TEXT("ASppedIncreaseDrop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASppedIncreaseDrop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
