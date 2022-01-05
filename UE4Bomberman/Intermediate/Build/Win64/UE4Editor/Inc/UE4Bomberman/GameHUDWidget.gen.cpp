// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Bomberman/Public/GameHUDWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHUDWidget() {}
// Cross Module References
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_UGameHUDWidget_NoRegister();
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_UGameHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UE4Bomberman();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UGameHUDWidget::StaticRegisterNativesUGameHUDWidget()
	{
	}
	UClass* Z_Construct_UClass_UGameHUDWidget_NoRegister()
	{
		return UGameHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGameHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPowerup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentPowerup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BombsRemaining_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BombsRemaining;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Bomberman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameHUDWidget.h" },
		{ "ModuleRelativePath", "Public/GameHUDWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUDWidget_Statics::NewProp_CurrentPowerup_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameHUDWidget_Statics::NewProp_CurrentPowerup = { "CurrentPowerup", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameHUDWidget, CurrentPowerup), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameHUDWidget_Statics::NewProp_CurrentPowerup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUDWidget_Statics::NewProp_CurrentPowerup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUDWidget_Statics::NewProp_BombsRemaining_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameHUDWidget_Statics::NewProp_BombsRemaining = { "BombsRemaining", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameHUDWidget, BombsRemaining), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameHUDWidget_Statics::NewProp_BombsRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUDWidget_Statics::NewProp_BombsRemaining_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameHUDWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHUDWidget_Statics::NewProp_CurrentPowerup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHUDWidget_Statics::NewProp_BombsRemaining,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameHUDWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameHUDWidget_Statics::ClassParams = {
		&UGameHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameHUDWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUDWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameHUDWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameHUDWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameHUDWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameHUDWidget, 3060402329);
	template<> UE4BOMBERMAN_API UClass* StaticClass<UGameHUDWidget>()
	{
		return UGameHUDWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameHUDWidget(Z_Construct_UClass_UGameHUDWidget, &UGameHUDWidget::StaticClass, TEXT("/Script/UE4Bomberman"), TEXT("UGameHUDWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameHUDWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
