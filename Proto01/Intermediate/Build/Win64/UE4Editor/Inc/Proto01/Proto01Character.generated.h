// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROTO01_Proto01Character_generated_h
#error "Proto01Character.generated.h already included, missing '#pragma once' in Proto01Character.h"
#endif
#define PROTO01_Proto01Character_generated_h

#define Proto01_Source_Proto01_Proto01Character_h_14_SPARSE_DATA
#define Proto01_Source_Proto01_Proto01Character_h_14_RPC_WRAPPERS
#define Proto01_Source_Proto01_Proto01Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Proto01_Source_Proto01_Proto01Character_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProto01Character(); \
	friend struct Z_Construct_UClass_AProto01Character_Statics; \
public: \
	DECLARE_CLASS(AProto01Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Proto01"), NO_API) \
	DECLARE_SERIALIZER(AProto01Character)


#define Proto01_Source_Proto01_Proto01Character_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAProto01Character(); \
	friend struct Z_Construct_UClass_AProto01Character_Statics; \
public: \
	DECLARE_CLASS(AProto01Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Proto01"), NO_API) \
	DECLARE_SERIALIZER(AProto01Character)


#define Proto01_Source_Proto01_Proto01Character_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProto01Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProto01Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProto01Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProto01Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProto01Character(AProto01Character&&); \
	NO_API AProto01Character(const AProto01Character&); \
public:


#define Proto01_Source_Proto01_Proto01Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProto01Character(AProto01Character&&); \
	NO_API AProto01Character(const AProto01Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProto01Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProto01Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProto01Character)


#define Proto01_Source_Proto01_Proto01Character_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AProto01Character, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AProto01Character, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AProto01Character, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AProto01Character, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AProto01Character, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AProto01Character, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AProto01Character, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AProto01Character, L_MotionController); }


#define Proto01_Source_Proto01_Proto01Character_h_11_PROLOG
#define Proto01_Source_Proto01_Proto01Character_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Proto01_Source_Proto01_Proto01Character_h_14_PRIVATE_PROPERTY_OFFSET \
	Proto01_Source_Proto01_Proto01Character_h_14_SPARSE_DATA \
	Proto01_Source_Proto01_Proto01Character_h_14_RPC_WRAPPERS \
	Proto01_Source_Proto01_Proto01Character_h_14_INCLASS \
	Proto01_Source_Proto01_Proto01Character_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Proto01_Source_Proto01_Proto01Character_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Proto01_Source_Proto01_Proto01Character_h_14_PRIVATE_PROPERTY_OFFSET \
	Proto01_Source_Proto01_Proto01Character_h_14_SPARSE_DATA \
	Proto01_Source_Proto01_Proto01Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Proto01_Source_Proto01_Proto01Character_h_14_INCLASS_NO_PURE_DECLS \
	Proto01_Source_Proto01_Proto01Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTO01_API UClass* StaticClass<class AProto01Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Proto01_Source_Proto01_Proto01Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
