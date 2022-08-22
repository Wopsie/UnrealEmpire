// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EMPIRES_EmpiresPawn_generated_h
#error "EmpiresPawn.generated.h already included, missing '#pragma once' in EmpiresPawn.h"
#endif
#define EMPIRES_EmpiresPawn_generated_h

#define Empires_Source_Empires_EmpiresPawn_h_12_SPARSE_DATA
#define Empires_Source_Empires_EmpiresPawn_h_12_RPC_WRAPPERS
#define Empires_Source_Empires_EmpiresPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Empires_Source_Empires_EmpiresPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEmpiresPawn(); \
	friend struct Z_Construct_UClass_AEmpiresPawn_Statics; \
public: \
	DECLARE_CLASS(AEmpiresPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Empires"), NO_API) \
	DECLARE_SERIALIZER(AEmpiresPawn)


#define Empires_Source_Empires_EmpiresPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEmpiresPawn(); \
	friend struct Z_Construct_UClass_AEmpiresPawn_Statics; \
public: \
	DECLARE_CLASS(AEmpiresPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Empires"), NO_API) \
	DECLARE_SERIALIZER(AEmpiresPawn)


#define Empires_Source_Empires_EmpiresPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEmpiresPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEmpiresPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEmpiresPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEmpiresPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEmpiresPawn(AEmpiresPawn&&); \
	NO_API AEmpiresPawn(const AEmpiresPawn&); \
public:


#define Empires_Source_Empires_EmpiresPawn_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEmpiresPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEmpiresPawn(AEmpiresPawn&&); \
	NO_API AEmpiresPawn(const AEmpiresPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEmpiresPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEmpiresPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEmpiresPawn)


#define Empires_Source_Empires_EmpiresPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentBlockFocus() { return STRUCT_OFFSET(AEmpiresPawn, CurrentBlockFocus); }


#define Empires_Source_Empires_EmpiresPawn_h_9_PROLOG
#define Empires_Source_Empires_EmpiresPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Empires_Source_Empires_EmpiresPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Empires_Source_Empires_EmpiresPawn_h_12_SPARSE_DATA \
	Empires_Source_Empires_EmpiresPawn_h_12_RPC_WRAPPERS \
	Empires_Source_Empires_EmpiresPawn_h_12_INCLASS \
	Empires_Source_Empires_EmpiresPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Empires_Source_Empires_EmpiresPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Empires_Source_Empires_EmpiresPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Empires_Source_Empires_EmpiresPawn_h_12_SPARSE_DATA \
	Empires_Source_Empires_EmpiresPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Empires_Source_Empires_EmpiresPawn_h_12_INCLASS_NO_PURE_DECLS \
	Empires_Source_Empires_EmpiresPawn_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EmpiresPawn."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EMPIRES_API UClass* StaticClass<class AEmpiresPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Empires_Source_Empires_EmpiresPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
