// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Empires/Actors/ElipseSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElipseSpawner() {}
// Cross Module References
	EMPIRES_API UClass* Z_Construct_UClass_UElipseSpawner_NoRegister();
	EMPIRES_API UClass* Z_Construct_UClass_UElipseSpawner();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Empires();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UElipseSpawner::StaticRegisterNativesUElipseSpawner()
	{
	}
	UClass* Z_Construct_UClass_UElipseSpawner_NoRegister()
	{
		return UElipseSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UElipseSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CelestialObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CelestialObj;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_elipseEntities_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_elipseEntities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_elipseSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_elipseSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElipseSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Empires,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElipseSpawner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Actors/ElipseSpawner.h" },
		{ "ModuleRelativePath", "Actors/ElipseSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElipseSpawner_Statics::NewProp_CelestialObj_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ElipseSpawner" },
		{ "ModuleRelativePath", "Actors/ElipseSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UElipseSpawner_Statics::NewProp_CelestialObj = { "CelestialObj", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElipseSpawner, CelestialObj), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UElipseSpawner_Statics::NewProp_CelestialObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElipseSpawner_Statics::NewProp_CelestialObj_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElipseSpawner_Statics::NewProp_elipseEntities_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ElipseSpawner" },
		{ "ModuleRelativePath", "Actors/ElipseSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UElipseSpawner_Statics::NewProp_elipseEntities = { "elipseEntities", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElipseSpawner, elipseEntities), METADATA_PARAMS(Z_Construct_UClass_UElipseSpawner_Statics::NewProp_elipseEntities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElipseSpawner_Statics::NewProp_elipseEntities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElipseSpawner_Statics::NewProp_elipseSize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ElipseSpawner" },
		{ "ModuleRelativePath", "Actors/ElipseSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UElipseSpawner_Statics::NewProp_elipseSize = { "elipseSize", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElipseSpawner, elipseSize), METADATA_PARAMS(Z_Construct_UClass_UElipseSpawner_Statics::NewProp_elipseSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElipseSpawner_Statics::NewProp_elipseSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElipseSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElipseSpawner_Statics::NewProp_CelestialObj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElipseSpawner_Statics::NewProp_elipseEntities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElipseSpawner_Statics::NewProp_elipseSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElipseSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElipseSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElipseSpawner_Statics::ClassParams = {
		&UElipseSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UElipseSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UElipseSpawner_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UElipseSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UElipseSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElipseSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElipseSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElipseSpawner, 915708595);
	template<> EMPIRES_API UClass* StaticClass<UElipseSpawner>()
	{
		return UElipseSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElipseSpawner(Z_Construct_UClass_UElipseSpawner, &UElipseSpawner::StaticClass, TEXT("/Script/Empires"), TEXT("UElipseSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElipseSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
