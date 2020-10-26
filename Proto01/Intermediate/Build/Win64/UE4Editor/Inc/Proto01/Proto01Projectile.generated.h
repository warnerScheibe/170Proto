// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PROTO01_Proto01Projectile_generated_h
#error "Proto01Projectile.generated.h already included, missing '#pragma once' in Proto01Projectile.h"
#endif
#define PROTO01_Proto01Projectile_generated_h

#define Proto01_Source_Proto01_Proto01Projectile_h_12_SPARSE_DATA
#define Proto01_Source_Proto01_Proto01Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Proto01_Source_Proto01_Proto01Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Proto01_Source_Proto01_Proto01Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProto01Projectile(); \
	friend struct Z_Construct_UClass_AProto01Projectile_Statics; \
public: \
	DECLARE_CLASS(AProto01Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Proto01"), NO_API) \
	DECLARE_SERIALIZER(AProto01Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Proto01_Source_Proto01_Proto01Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProto01Projectile(); \
	friend struct Z_Construct_UClass_AProto01Projectile_Statics; \
public: \
	DECLARE_CLASS(AProto01Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Proto01"), NO_API) \
	DECLARE_SERIALIZER(AProto01Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Proto01_Source_Proto01_Proto01Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProto01Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProto01Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProto01Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProto01Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProto01Projectile(AProto01Projectile&&); \
	NO_API AProto01Projectile(const AProto01Projectile&); \
public:


#define Proto01_Source_Proto01_Proto01Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProto01Projectile(AProto01Projectile&&); \
	NO_API AProto01Projectile(const AProto01Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProto01Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProto01Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProto01Projectile)


#define Proto01_Source_Proto01_Proto01Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AProto01Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AProto01Projectile, ProjectileMovement); }


#define Proto01_Source_Proto01_Proto01Projectile_h_9_PROLOG
#define Proto01_Source_Proto01_Proto01Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Proto01_Source_Proto01_Proto01Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Proto01_Source_Proto01_Proto01Projectile_h_12_SPARSE_DATA \
	Proto01_Source_Proto01_Proto01Projectile_h_12_RPC_WRAPPERS \
	Proto01_Source_Proto01_Proto01Projectile_h_12_INCLASS \
	Proto01_Source_Proto01_Proto01Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Proto01_Source_Proto01_Proto01Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Proto01_Source_Proto01_Proto01Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Proto01_Source_Proto01_Proto01Projectile_h_12_SPARSE_DATA \
	Proto01_Source_Proto01_Proto01Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Proto01_Source_Proto01_Proto01Projectile_h_12_INCLASS_NO_PURE_DECLS \
	Proto01_Source_Proto01_Proto01Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTO01_API UClass* StaticClass<class AProto01Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Proto01_Source_Proto01_Proto01Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
