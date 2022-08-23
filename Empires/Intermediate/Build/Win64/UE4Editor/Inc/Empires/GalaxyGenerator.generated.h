// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EMPIRES_GalaxyGenerator_generated_h
#error "GalaxyGenerator.generated.h already included, missing '#pragma once' in GalaxyGenerator.h"
#endif
#define EMPIRES_GalaxyGenerator_generated_h

#define Empires_Source_Empires_Actors_GalaxyGenerator_h_10_SPARSE_DATA
#define Empires_Source_Empires_Actors_GalaxyGenerator_h_10_RPC_WRAPPERS
#define Empires_Source_Empires_Actors_GalaxyGenerator_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Empires_Source_Empires_Actors_GalaxyGenerator_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGalaxyGenerator(); \
	friend struct Z_Construct_UClass_AGalaxyGenerator_Statics; \
public: \
	DECLARE_CLASS(AGalaxyGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Empires"), NO_API) \
	DECLARE_SERIALIZER(AGalaxyGenerator)


#define Empires_Source_Empires_Actors_GalaxyGenerator_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAGalaxyGenerator(); \
	friend struct Z_Construct_UClass_AGalaxyGenerator_Statics; \
public: \
	DECLARE_CLASS(AGalaxyGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Empires"), NO_API) \
	DECLARE_SERIALIZER(AGalaxyGenerator)


#define Empires_Source_Empires_Actors_GalaxyGenerator_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGalaxyGenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGalaxyGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaxyGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaxyGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaxyGenerator(AGalaxyGenerator&&); \
	NO_API AGalaxyGenerator(const AGalaxyGenerator&); \
public:


#define Empires_Source_Empires_Actors_GalaxyGenerator_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaxyGenerator(AGalaxyGenerator&&); \
	NO_API AGalaxyGenerator(const AGalaxyGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaxyGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaxyGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGalaxyGenerator)


#define Empires_Source_Empires_Actors_GalaxyGenerator_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StarObj() { return STRUCT_OFFSET(AGalaxyGenerator, StarObj); }


#define Empires_Source_Empires_Actors_GalaxyGenerator_h_7_PROLOG
#define Empires_Source_Empires_Actors_GalaxyGenerator_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Empires_Source_Empires_Actors_GalaxyGenerator_h_10_PRIVATE_PROPERTY_OFFSET \
	Empires_Source_Empires_Actors_GalaxyGenerator_h_10_SPARSE_DATA \
	Empires_Source_Empires_Actors_GalaxyGenerator_h_10_RPC_WRAPPERS \
	Empires_Source_Empires_Actors_GalaxyGenerator_h_10_INCLASS \
	Empires_Source_Empires_Actors_GalaxyGenerator_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Empires_Source_Empires_Actors_GalaxyGenerator_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Empires_Source_Empires_Actors_GalaxyGenerator_h_10_PRIVATE_PROPERTY_OFFSET \
	Empires_Source_Empires_Actors_GalaxyGenerator_h_10_SPARSE_DATA \
	Empires_Source_Empires_Actors_GalaxyGenerator_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Empires_Source_Empires_Actors_GalaxyGenerator_h_10_INCLASS_NO_PURE_DECLS \
	Empires_Source_Empires_Actors_GalaxyGenerator_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EMPIRES_API UClass* StaticClass<class AGalaxyGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Empires_Source_Empires_Actors_GalaxyGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
