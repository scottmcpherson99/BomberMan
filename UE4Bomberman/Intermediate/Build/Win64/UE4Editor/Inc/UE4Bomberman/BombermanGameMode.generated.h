// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBombermanPlayState : uint8;
#ifdef UE4BOMBERMAN_BombermanGameMode_generated_h
#error "BombermanGameMode.generated.h already included, missing '#pragma once' in BombermanGameMode.h"
#endif
#define UE4BOMBERMAN_BombermanGameMode_generated_h

#define UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_25_SPARSE_DATA
#define UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentState);


#define UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentState);


#define UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABombermanGameMode(); \
	friend struct Z_Construct_UClass_ABombermanGameMode_Statics; \
public: \
	DECLARE_CLASS(ABombermanGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ABombermanGameMode)


#define UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_25_INCLASS \
private: \
	static void StaticRegisterNativesABombermanGameMode(); \
	friend struct Z_Construct_UClass_ABombermanGameMode_Statics; \
public: \
	DECLARE_CLASS(ABombermanGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ABombermanGameMode)


#define UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABombermanGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABombermanGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABombermanGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABombermanGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABombermanGameMode(ABombermanGameMode&&); \
	NO_API ABombermanGameMode(const ABombermanGameMode&); \
public:


#define UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABombermanGameMode(ABombermanGameMode&&); \
	NO_API ABombermanGameMode(const ABombermanGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABombermanGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABombermanGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABombermanGameMode)


#define UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HUDWidgetClass() { return STRUCT_OFFSET(ABombermanGameMode, HUDWidgetClass); } \
	FORCEINLINE static uint32 __PPO__GameOverWidgetClass() { return STRUCT_OFFSET(ABombermanGameMode, GameOverWidgetClass); } \
	FORCEINLINE static uint32 __PPO__gameWidget() { return STRUCT_OFFSET(ABombermanGameMode, gameWidget); } \
	FORCEINLINE static uint32 __PPO__gameOverWidget() { return STRUCT_OFFSET(ABombermanGameMode, gameOverWidget); } \
	FORCEINLINE static uint32 __PPO__gameTotalTime() { return STRUCT_OFFSET(ABombermanGameMode, gameTotalTime); } \
	FORCEINLINE static uint32 __PPO__backgroundSoundBase() { return STRUCT_OFFSET(ABombermanGameMode, backgroundSoundBase); }


#define UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_22_PROLOG
#define UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_25_PRIVATE_PROPERTY_OFFSET \
	UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_25_SPARSE_DATA \
	UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_25_RPC_WRAPPERS \
	UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_25_INCLASS \
	UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_25_PRIVATE_PROPERTY_OFFSET \
	UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_25_SPARSE_DATA \
	UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_25_INCLASS_NO_PURE_DECLS \
	UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4BOMBERMAN_API UClass* StaticClass<class ABombermanGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4Bomberman_Source_UE4Bomberman_Public_BombermanGameMode_h


#define FOREACH_ENUM_EBOMBERMANPLAYSTATE(op) \
	op(EBombermanPlayState::EPlaying) \
	op(EBombermanPlayState::EGameOver) \
	op(EBombermanPlayState::EMainMenu) \
	op(EBombermanPlayState::EUnknown) 

enum class EBombermanPlayState : uint8;
template<> UE4BOMBERMAN_API UEnum* StaticEnum<EBombermanPlayState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
