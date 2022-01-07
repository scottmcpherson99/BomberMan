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
	UE4BOMBERMAN_API UEnum* Z_Construct_UEnum_UE4Bomberman_EBombermanPlayState();
	UPackage* Z_Construct_UPackage__Script_UE4Bomberman();
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanGameMode_NoRegister();
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_UGameHUDWidget_NoRegister();
// End Cross Module References
	static UEnum* EBombermanPlayState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE4Bomberman_EBombermanPlayState, Z_Construct_UPackage__Script_UE4Bomberman(), TEXT("EBombermanPlayState"));
		}
		return Singleton;
	}
	template<> UE4BOMBERMAN_API UEnum* StaticEnum<EBombermanPlayState>()
	{
		return EBombermanPlayState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBombermanPlayState(EBombermanPlayState_StaticEnum, TEXT("/Script/UE4Bomberman"), TEXT("EBombermanPlayState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE4Bomberman_EBombermanPlayState_Hash() { return 2775526868U; }
	UEnum* Z_Construct_UEnum_UE4Bomberman_EBombermanPlayState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE4Bomberman();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBombermanPlayState"), 0, Get_Z_Construct_UEnum_UE4Bomberman_EBombermanPlayState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBombermanPlayState::EPlaying", (int64)EBombermanPlayState::EPlaying },
				{ "EBombermanPlayState::EGameOver", (int64)EBombermanPlayState::EGameOver },
				{ "EBombermanPlayState::EMainMenu", (int64)EBombermanPlayState::EMainMenu },
				{ "EBombermanPlayState::EUnknown", (int64)EBombermanPlayState::EUnknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "EGameOver.Comment", "/**\n * \n */" },
				{ "EGameOver.DisplayName", "game over" },
				{ "EGameOver.Name", "EBombermanPlayState::EGameOver" },
				{ "EMainMenu.Comment", "/**\n * \n */" },
				{ "EMainMenu.DisplayName", "main menu" },
				{ "EMainMenu.Name", "EBombermanPlayState::EMainMenu" },
				{ "EPlaying.Comment", "/**\n * \n */" },
				{ "EPlaying.DisplayName", "playing" },
				{ "EPlaying.Name", "EBombermanPlayState::EPlaying" },
				{ "EUnknown.Comment", "/**\n * \n */" },
				{ "EUnknown.DisplayName", "Unknown" },
				{ "EUnknown.Name", "EBombermanPlayState::EUnknown" },
				{ "ModuleRelativePath", "Public/BombermanGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE4Bomberman,
				nullptr,
				"EBombermanPlayState",
				"EBombermanPlayState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ABombermanGameMode::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EBombermanPlayState*)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	void ABombermanGameMode::StaticRegisterNativesABombermanGameMode()
	{
		UClass* Class = ABombermanGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &ABombermanGameMode::execGetCurrentState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABombermanGameMode_GetCurrentState_Statics
	{
		struct BombermanGameMode_eventGetCurrentState_Parms
		{
			EBombermanPlayState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABombermanGameMode_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABombermanGameMode_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BombermanGameMode_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_UE4Bomberman_EBombermanPlayState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABombermanGameMode_GetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABombermanGameMode_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABombermanGameMode_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABombermanGameMode_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game settings" },
		{ "Comment", "//returns the current playing state\n" },
		{ "ModuleRelativePath", "Public/BombermanGameMode.h" },
		{ "ToolTip", "returns the current playing state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABombermanGameMode_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABombermanGameMode, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(BombermanGameMode_eventGetCurrentState_Parms), Z_Construct_UFunction_ABombermanGameMode_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABombermanGameMode_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABombermanGameMode_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABombermanGameMode_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABombermanGameMode_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABombermanGameMode_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABombermanGameMode_NoRegister()
	{
		return ABombermanGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABombermanGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_ABombermanGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABombermanGameMode_GetCurrentState, "GetCurrentState" }, // 94771284
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABombermanGameMode_Statics::Class_MetaDataParams[] = {
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
		FuncInfo,
		Z_Construct_UClass_ABombermanGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ABombermanGameMode, 4052017259);
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
