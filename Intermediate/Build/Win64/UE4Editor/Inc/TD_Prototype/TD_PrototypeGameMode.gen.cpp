// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TD_Prototype/TD_PrototypeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTD_PrototypeGameMode() {}
// Cross Module References
	TD_PROTOTYPE_API UClass* Z_Construct_UClass_ATD_PrototypeGameMode_NoRegister();
	TD_PROTOTYPE_API UClass* Z_Construct_UClass_ATD_PrototypeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TD_Prototype();
// End Cross Module References
	void ATD_PrototypeGameMode::StaticRegisterNativesATD_PrototypeGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATD_PrototypeGameMode_NoRegister()
	{
		return ATD_PrototypeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATD_PrototypeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATD_PrototypeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TD_Prototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATD_PrototypeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TD_PrototypeGameMode.h" },
		{ "ModuleRelativePath", "TD_PrototypeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATD_PrototypeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATD_PrototypeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATD_PrototypeGameMode_Statics::ClassParams = {
		&ATD_PrototypeGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATD_PrototypeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATD_PrototypeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATD_PrototypeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATD_PrototypeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATD_PrototypeGameMode, 1759535397);
	template<> TD_PROTOTYPE_API UClass* StaticClass<ATD_PrototypeGameMode>()
	{
		return ATD_PrototypeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATD_PrototypeGameMode(Z_Construct_UClass_ATD_PrototypeGameMode, &ATD_PrototypeGameMode::StaticClass, TEXT("/Script/TD_Prototype"), TEXT("ATD_PrototypeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATD_PrototypeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
