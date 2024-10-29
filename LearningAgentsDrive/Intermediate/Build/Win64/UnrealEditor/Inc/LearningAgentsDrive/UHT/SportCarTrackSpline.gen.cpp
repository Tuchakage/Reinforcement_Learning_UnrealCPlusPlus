// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsDrive/SportCarTrackSpline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSportCarTrackSpline() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_ASportCarTrackSpline();
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_ASportCarTrackSpline_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LearningAgentsDrive();
// End Cross Module References
	void ASportCarTrackSpline::StaticRegisterNativesASportCarTrackSpline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASportCarTrackSpline);
	UClass* Z_Construct_UClass_ASportCarTrackSpline_NoRegister()
	{
		return ASportCarTrackSpline::StaticClass();
	}
	struct Z_Construct_UClass_ASportCarTrackSpline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASportCarTrackSpline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsDrive,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASportCarTrackSpline_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASportCarTrackSpline_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SportCarTrackSpline.h" },
		{ "ModuleRelativePath", "SportCarTrackSpline.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASportCarTrackSpline_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SportCarTrackSpline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASportCarTrackSpline_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASportCarTrackSpline, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASportCarTrackSpline_Statics::NewProp_SplineComponent_MetaData), Z_Construct_UClass_ASportCarTrackSpline_Statics::NewProp_SplineComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASportCarTrackSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASportCarTrackSpline_Statics::NewProp_SplineComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASportCarTrackSpline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASportCarTrackSpline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASportCarTrackSpline_Statics::ClassParams = {
		&ASportCarTrackSpline::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASportCarTrackSpline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASportCarTrackSpline_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASportCarTrackSpline_Statics::Class_MetaDataParams), Z_Construct_UClass_ASportCarTrackSpline_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASportCarTrackSpline_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASportCarTrackSpline()
	{
		if (!Z_Registration_Info_UClass_ASportCarTrackSpline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASportCarTrackSpline.OuterSingleton, Z_Construct_UClass_ASportCarTrackSpline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASportCarTrackSpline.OuterSingleton;
	}
	template<> LEARNINGAGENTSDRIVE_API UClass* StaticClass<ASportCarTrackSpline>()
	{
		return ASportCarTrackSpline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASportCarTrackSpline);
	ASportCarTrackSpline::~ASportCarTrackSpline() {}
	struct Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_SportCarTrackSpline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_SportCarTrackSpline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASportCarTrackSpline, ASportCarTrackSpline::StaticClass, TEXT("ASportCarTrackSpline"), &Z_Registration_Info_UClass_ASportCarTrackSpline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASportCarTrackSpline), 292093893U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_SportCarTrackSpline_h_2739301637(TEXT("/Script/LearningAgentsDrive"),
		Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_SportCarTrackSpline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_SportCarTrackSpline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
