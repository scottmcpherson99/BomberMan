// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Bomberman/Public/EndGameWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndGameWidget() {}
// Cross Module References
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_UEndGameWidget_NoRegister();
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_UEndGameWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UE4Bomberman();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UEndGameWidget::StaticRegisterNativesUEndGameWidget()
	{
	}
	UClass* Z_Construct_UClass_UEndGameWidget_NoRegister()
	{
		return UEndGameWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEndGameWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinnerText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WinnerText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEndGameWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Bomberman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EndGameWidget.h" },
		{ "ModuleRelativePath", "Public/EndGameWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameWidget_Statics::NewProp_WinnerText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "EndGameWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EndGameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEndGameWidget_Statics::NewProp_WinnerText = { "WinnerText", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEndGameWidget, WinnerText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEndGameWidget_Statics::NewProp_WinnerText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameWidget_Statics::NewProp_WinnerText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEndGameWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGameWidget_Statics::NewProp_WinnerText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEndGameWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndGameWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEndGameWidget_Statics::ClassParams = {
		&UEndGameWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEndGameWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEndGameWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEndGameWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEndGameWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEndGameWidget, 2781884105);
	template<> UE4BOMBERMAN_API UClass* StaticClass<UEndGameWidget>()
	{
		return UEndGameWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEndGameWidget(Z_Construct_UClass_UEndGameWidget, &UEndGameWidget::StaticClass, TEXT("/Script/UE4Bomberman"), TEXT("UEndGameWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEndGameWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
