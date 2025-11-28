// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Temperature.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALC_Temperature_generated_h
#error "Temperature.generated.h already included, missing '#pragma once' in Temperature.h"
#endif
#define UNREALC_Temperature_generated_h

#define FID_Archivo_Docuemntos_GitHub_unrealC_unrealC_Source_unrealC_Temperature_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCalculateAverageTemperature); \
	DECLARE_FUNCTION(execConvertToKelvinCelsius); \
	DECLARE_FUNCTION(execCalculateStaticTemperatureDifference); \
	DECLARE_FUNCTION(execCalculateTemperatureDifference); \
	DECLARE_FUNCTION(execGetTemperatureFahrenheit);


#define FID_Archivo_Docuemntos_GitHub_unrealC_unrealC_Source_unrealC_Temperature_h_12_CALLBACK_WRAPPERS
#define FID_Archivo_Docuemntos_GitHub_unrealC_unrealC_Source_unrealC_Temperature_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATemperature(); \
	friend struct Z_Construct_UClass_ATemperature_Statics; \
public: \
	DECLARE_CLASS(ATemperature, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/unrealC"), NO_API) \
	DECLARE_SERIALIZER(ATemperature)


#define FID_Archivo_Docuemntos_GitHub_unrealC_unrealC_Source_unrealC_Temperature_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATemperature(ATemperature&&); \
	ATemperature(const ATemperature&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATemperature); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATemperature); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATemperature) \
	NO_API virtual ~ATemperature();


#define FID_Archivo_Docuemntos_GitHub_unrealC_unrealC_Source_unrealC_Temperature_h_9_PROLOG
#define FID_Archivo_Docuemntos_GitHub_unrealC_unrealC_Source_unrealC_Temperature_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Archivo_Docuemntos_GitHub_unrealC_unrealC_Source_unrealC_Temperature_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Archivo_Docuemntos_GitHub_unrealC_unrealC_Source_unrealC_Temperature_h_12_CALLBACK_WRAPPERS \
	FID_Archivo_Docuemntos_GitHub_unrealC_unrealC_Source_unrealC_Temperature_h_12_INCLASS_NO_PURE_DECLS \
	FID_Archivo_Docuemntos_GitHub_unrealC_unrealC_Source_unrealC_Temperature_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALC_API UClass* StaticClass<class ATemperature>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Archivo_Docuemntos_GitHub_unrealC_unrealC_Source_unrealC_Temperature_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
