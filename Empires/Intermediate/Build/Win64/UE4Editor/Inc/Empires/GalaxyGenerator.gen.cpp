// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Empires/Actors/GalaxyGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGalaxyGenerator() {}
// Cross Module References
	EMPIRES_API UClass* Z_Construct_UClass_AGalaxyGenerator_NoRegister();
	EMPIRES_API UClass* Z_Construct_UClass_AGalaxyGenerator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Empires();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AGalaxyGenerator::StaticRegisterNativesAGalaxyGenerator()
	{
	}
	UClass* Z_Construct_UClass_AGalaxyGenerator_NoRegister()
	{
		return AGalaxyGenerator::StaticClass();
	}
	struct Z_Construct_UClass_AGalaxyGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StarObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGalaxyGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Empires,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaxyGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/GalaxyGenerator.h" },
		{ "ModuleRelativePath", "Actors/GalaxyGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaxyGenerator_Statics::NewProp_StarObj_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GalaxyGenerator" },
		{ "ModuleRelativePath", "Actors/GalaxyGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGalaxyGenerator_Statics::NewProp_StarObj = { "StarObj", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaxyGenerator, StarObj), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGalaxyGenerator_Statics::NewProp_StarObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaxyGenerator_Statics::NewProp_StarObj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGalaxyGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaxyGenerator_Statics::NewProp_StarObj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGalaxyGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGalaxyGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGalaxyGenerator_Statics::ClassParams = {
		&AGalaxyGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGalaxyGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGalaxyGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGalaxyGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaxyGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGalaxyGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGalaxyGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGalaxyGenerator, 1996565956);
	template<> EMPIRES_API UClass* StaticClass<AGalaxyGenerator>()
	{
		return AGalaxyGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGalaxyGenerator(Z_Construct_UClass_AGalaxyGenerator, &AGalaxyGenerator::StaticClass, TEXT("/Script/Empires"), TEXT("AGalaxyGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGalaxyGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
