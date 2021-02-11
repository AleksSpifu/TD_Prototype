// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TD_Prototype/EnemyGoal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyGoal() {}
// Cross Module References
	TD_PROTOTYPE_API UClass* Z_Construct_UClass_AEnemyGoal_NoRegister();
	TD_PROTOTYPE_API UClass* Z_Construct_UClass_AEnemyGoal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TD_Prototype();
// End Cross Module References
	void AEnemyGoal::StaticRegisterNativesAEnemyGoal()
	{
	}
	UClass* Z_Construct_UClass_AEnemyGoal_NoRegister()
	{
		return AEnemyGoal::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyGoal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Number_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Number;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyGoal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TD_Prototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyGoal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyGoal.h" },
		{ "ModuleRelativePath", "EnemyGoal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyGoal_Statics::NewProp_Number_MetaData[] = {
		{ "Category", "EnemyGoal" },
		{ "ModuleRelativePath", "EnemyGoal.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEnemyGoal_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyGoal, Number), METADATA_PARAMS(Z_Construct_UClass_AEnemyGoal_Statics::NewProp_Number_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyGoal_Statics::NewProp_Number_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyGoal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyGoal_Statics::NewProp_Number,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyGoal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyGoal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyGoal_Statics::ClassParams = {
		&AEnemyGoal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyGoal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyGoal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyGoal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyGoal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyGoal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyGoal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyGoal, 4047652737);
	template<> TD_PROTOTYPE_API UClass* StaticClass<AEnemyGoal>()
	{
		return AEnemyGoal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyGoal(Z_Construct_UClass_AEnemyGoal, &AEnemyGoal::StaticClass, TEXT("/Script/TD_Prototype"), TEXT("AEnemyGoal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyGoal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
