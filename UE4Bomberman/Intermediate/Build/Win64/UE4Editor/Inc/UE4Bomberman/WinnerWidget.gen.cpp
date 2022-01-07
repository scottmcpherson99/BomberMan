// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Bomberman/Public/WinnerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWinnerWidget() {}
// Cross Module References
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_UWinnerWidget_NoRegister();
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_UWinnerWidget();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_UE4Bomberman();
// End Cross Module References
	void UWinnerWidget::StaticRegisterNativesUWinnerWidget()
	{
	}
	UClass* Z_Construct_UClass_UWinnerWidget_NoRegister()
	{
		return UWinnerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UWinnerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWinnerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Bomberman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinnerWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "WinnerWidget.h" },
		{ "ModuleRelativePath", "Public/WinnerWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWinnerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWinnerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWinnerWidget_Statics::ClassParams = {
		&UWinnerWidget::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWinnerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWinnerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWinnerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWinnerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWinnerWidget, 3986525454);
	template<> UE4BOMBERMAN_API UClass* StaticClass<UWinnerWidget>()
	{
		return UWinnerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWinnerWidget(Z_Construct_UClass_UWinnerWidget, &UWinnerWidget::StaticClass, TEXT("/Script/UE4Bomberman"), TEXT("UWinnerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWinnerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
