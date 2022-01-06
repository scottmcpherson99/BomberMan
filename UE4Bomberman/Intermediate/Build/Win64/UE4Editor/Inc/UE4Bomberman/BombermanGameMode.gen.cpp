// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Bomberman/Public/BombermanGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombermanGameMode() {}
// Cross Module References
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanGameMode_NoRegister();
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE4Bomberman();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_UGameHUDWidget_NoRegister();
// End Cross Module References
	void ABombermanGameMode::StaticRegisterNativesABombermanGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABombermanGameMode_NoRegister()
	{
		return ABombermanGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABombermanGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameTotalTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gameTotalTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABombermanGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Bomberman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABombermanGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BombermanGameMode.h" },
		{ "ModuleRelativePath", "Public/BombermanGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABombermanGameMode_Statics::NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "Class Types" },
		{ "Comment", "//widget class to use for our hud screen\n" },
		{ "ModuleRelativePath", "Public/BombermanGameMode.h" },
		{ "ToolTip", "widget class to use for our hud screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABombermanGameMode_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABombermanGameMode, HUDWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABombermanGameMode_Statics::NewProp_HUDWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABombermanGameMode_Statics::NewProp_HUDWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABombermanGameMode_Statics::NewProp_gameWidget_MetaData[] = {
		{ "Category", "Runtime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BombermanGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABombermanGameMode_Statics::NewProp_gameWidget = { "gameWidget", nullptr, (EPropertyFlags)0x00200800000a0809, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABombermanGameMode, gameWidget), Z_Construct_UClass_UGameHUDWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABombermanGameMode_Statics::NewProp_gameWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABombermanGameMode_Statics::NewProp_gameWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABombermanGameMode_Statics::NewProp_gameTotalTime_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Game Settings" },
		{ "ModuleRelativePath", "Public/BombermanGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABombermanGameMode_Statics::NewProp_gameTotalTime = { "gameTotalTime", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABombermanGameMode, gameTotalTime), METADATA_PARAMS(Z_Construct_UClass_ABombermanGameMode_Statics::NewProp_gameTotalTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABombermanGameMode_Statics::NewProp_gameTotalTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABombermanGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABombermanGameMode_Statics::NewProp_HUDWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABombermanGameMode_Statics::NewProp_gameWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABombermanGameMode_Statics::NewProp_gameTotalTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABombermanGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombermanGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABombermanGameMode_Statics::ClassParams = {
		&ABombermanGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABombermanGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABombermanGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABombermanGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABombermanGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABombermanGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABombermanGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABombermanGameMode, 3243764275);
	template<> UE4BOMBERMAN_API UClass* StaticClass<ABombermanGameMode>()
	{
		return ABombermanGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombermanGameMode(Z_Construct_UClass_ABombermanGameMode, &ABombermanGameMode::StaticClass, TEXT("/Script/UE4Bomberman"), TEXT("ABombermanGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombermanGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
