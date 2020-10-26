// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Proto01/Proto01HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProto01HUD() {}
// Cross Module References
	PROTO01_API UClass* Z_Construct_UClass_AProto01HUD_NoRegister();
	PROTO01_API UClass* Z_Construct_UClass_AProto01HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Proto01();
// End Cross Module References
	void AProto01HUD::StaticRegisterNativesAProto01HUD()
	{
	}
	UClass* Z_Construct_UClass_AProto01HUD_NoRegister()
	{
		return AProto01HUD::StaticClass();
	}
	struct Z_Construct_UClass_AProto01HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProto01HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Proto01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProto01HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Proto01HUD.h" },
		{ "ModuleRelativePath", "Proto01HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProto01HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProto01HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProto01HUD_Statics::ClassParams = {
		&AProto01HUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProto01HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProto01HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProto01HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProto01HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProto01HUD, 3992329529);
	template<> PROTO01_API UClass* StaticClass<AProto01HUD>()
	{
		return AProto01HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProto01HUD(Z_Construct_UClass_AProto01HUD, &AProto01HUD::StaticClass, TEXT("/Script/Proto01"), TEXT("AProto01HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProto01HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
