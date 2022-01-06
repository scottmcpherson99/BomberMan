// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE4BOMBERMAN_PlayerCharacter2_generated_h
#error "PlayerCharacter2.generated.h already included, missing '#pragma once' in PlayerCharacter2.h"
#endif
#define UE4BOMBERMAN_PlayerCharacter2_generated_h

#define UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_17_SPARSE_DATA
#define UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentPowerup); \
	DECLARE_FUNCTION(execSetMaxBombs); \
	DECLARE_FUNCTION(execGetBombs); \
	DECLARE_FUNCTION(execSetBombs); \
	DECLARE_FUNCTION(execCollectPickups);


#define UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentPowerup); \
	DECLARE_FUNCTION(execSetMaxBombs); \
	DECLARE_FUNCTION(execGetBombs); \
	DECLARE_FUNCTION(execSetBombs); \
	DECLARE_FUNCTION(execCollectPickups);


#define UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter2(); \
	friend struct Z_Construct_UClass_APlayerCharacter2_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter2, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4Bomberman"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter2)


#define UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter2(); \
	friend struct Z_Construct_UClass_APlayerCharacter2_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter2, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4Bomberman"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter2)


#define UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter2(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter2(APlayerCharacter2&&); \
	NO_API APlayerCharacter2(const APlayerCharacter2&); \
public:


#define UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter2(APlayerCharacter2&&); \
	NO_API APlayerCharacter2(const APlayerCharacter2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter2); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter2)


#define UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(APlayerCharacter2, MeshComp); } \
	FORCEINLINE static uint32 __PPO__CollectionSphere() { return STRUCT_OFFSET(APlayerCharacter2, CollectionSphere); } \
	FORCEINLINE static uint32 __PPO__bombToSpawn() { return STRUCT_OFFSET(APlayerCharacter2, bombToSpawn); } \
	FORCEINLINE static uint32 __PPO__bombInitialScale_() { return STRUCT_OFFSET(APlayerCharacter2, bombInitialScale_); }


#define UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_14_PROLOG
#define UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_17_PRIVATE_PROPERTY_OFFSET \
	UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_17_SPARSE_DATA \
	UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_17_RPC_WRAPPERS \
	UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_17_INCLASS \
	UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_17_PRIVATE_PROPERTY_OFFSET \
	UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_17_SPARSE_DATA \
	UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_17_INCLASS_NO_PURE_DECLS \
	UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4BOMBERMAN_API UClass* StaticClass<class APlayerCharacter2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4Bomberman_Source_UE4Bomberman_Public_PlayerCharacter2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
