// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Bomberman/Public/Bomb.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomb() {}
// Cross Module References
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_ABomb_NoRegister();
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_ABomb();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE4Bomberman();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UE4BOMBERMAN_API UClass* Z_Construct_UClass_ADestructableWall_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABomb::execExplodeBomb)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExplodeBomb();
		P_NATIVE_END;
	}
	void ABomb::StaticRegisterNativesABomb()
	{
		UClass* Class = ABomb::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExplodeBomb", &ABomb::execExplodeBomb },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABomb_ExplodeBomb_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABomb_ExplodeBomb_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Bomb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomb_ExplodeBomb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomb, nullptr, "ExplodeBomb", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABomb_ExplodeBomb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomb_ExplodeBomb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABomb_ExplodeBomb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABomb_ExplodeBomb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABomb_NoRegister()
	{
		return ABomb::StaticClass();
	}
	struct Z_Construct_UClass_ABomb_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionBoxX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionBoxX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionBoxY_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionBoxY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bombSoundBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bombSoundBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestructrableWall__MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DestructrableWall_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter__MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerCharacter_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerCharacter_2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABomb_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Bomberman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABomb_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABomb_ExplodeBomb, "ExplodeBomb" }, // 1907772532
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomb_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bomb.h" },
		{ "ModuleRelativePath", "Public/Bomb.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomb_Statics::NewProp_RootComp_MetaData[] = {
		{ "Category", "Bomb Mesh" },
		{ "Comment", "//Create the root mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bomb.h" },
		{ "ToolTip", "Create the root mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomb_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomb, RootComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomb_Statics::NewProp_RootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomb_Statics::NewProp_RootComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomb_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Bomb Mesh" },
		{ "Comment", "//Create the bomb mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bomb.h" },
		{ "ToolTip", "Create the bomb mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomb_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomb, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomb_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomb_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomb_Statics::NewProp_CollisionBoxX_MetaData[] = {
		{ "Category", "Collision Box" },
		{ "Comment", "//Create the collision boxes for the bombs explosion\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bomb.h" },
		{ "ToolTip", "Create the collision boxes for the bombs explosion" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomb_Statics::NewProp_CollisionBoxX = { "CollisionBoxX", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomb, CollisionBoxX), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomb_Statics::NewProp_CollisionBoxX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomb_Statics::NewProp_CollisionBoxX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomb_Statics::NewProp_CollisionBoxY_MetaData[] = {
		{ "Category", "Collision Box" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bomb.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomb_Statics::NewProp_CollisionBoxY = { "CollisionBoxY", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomb, CollisionBoxY), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomb_Statics::NewProp_CollisionBoxY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomb_Statics::NewProp_CollisionBoxY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomb_Statics::NewProp_bombSoundBase_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Bomb.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomb_Statics::NewProp_bombSoundBase = { "bombSoundBase", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomb, bombSoundBase), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomb_Statics::NewProp_bombSoundBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomb_Statics::NewProp_bombSoundBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomb_Statics::NewProp_DestructrableWall__MetaData[] = {
		{ "Category", "Wall" },
		{ "ModuleRelativePath", "Public/Bomb.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomb_Statics::NewProp_DestructrableWall_ = { "DestructrableWall_", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomb, DestructrableWall_), Z_Construct_UClass_ADestructableWall_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABomb_Statics::NewProp_DestructrableWall__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomb_Statics::NewProp_DestructrableWall__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomb_Statics::NewProp_PlayerCharacter__MetaData[] = {
		{ "Category", "Player 1" },
		{ "ModuleRelativePath", "Public/Bomb.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomb_Statics::NewProp_PlayerCharacter_ = { "PlayerCharacter_", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomb, PlayerCharacter_), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABomb_Statics::NewProp_PlayerCharacter__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomb_Statics::NewProp_PlayerCharacter__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomb_Statics::NewProp_PlayerCharacter_2_MetaData[] = {
		{ "Category", "Player 2" },
		{ "ModuleRelativePath", "Public/Bomb.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomb_Statics::NewProp_PlayerCharacter_2 = { "PlayerCharacter_2", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomb, PlayerCharacter_2), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABomb_Statics::NewProp_PlayerCharacter_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomb_Statics::NewProp_PlayerCharacter_2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomb_Statics::NewProp_RootComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomb_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomb_Statics::NewProp_CollisionBoxX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomb_Statics::NewProp_CollisionBoxY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomb_Statics::NewProp_bombSoundBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomb_Statics::NewProp_DestructrableWall_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomb_Statics::NewProp_PlayerCharacter_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomb_Statics::NewProp_PlayerCharacter_2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABomb_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomb>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABomb_Statics::ClassParams = {
		&ABomb::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABomb_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABomb_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABomb_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABomb_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABomb()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABomb_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABomb, 3385494694);
	template<> UE4BOMBERMAN_API UClass* StaticClass<ABomb>()
	{
		return ABomb::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomb(Z_Construct_UClass_ABomb, &ABomb::StaticClass, TEXT("/Script/UE4Bomberman"), TEXT("ABomb"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomb);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
