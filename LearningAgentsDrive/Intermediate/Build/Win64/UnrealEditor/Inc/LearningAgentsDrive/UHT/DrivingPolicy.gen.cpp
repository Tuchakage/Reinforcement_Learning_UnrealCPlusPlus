// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsDrive/DrivingPolicy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrivingPolicy() {}
// Cross Module References
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsPolicy();
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_UDrivingPolicy();
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_UDrivingPolicy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LearningAgentsDrive();
// End Cross Module References
	void UDrivingPolicy::StaticRegisterNativesUDrivingPolicy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrivingPolicy);
	UClass* Z_Construct_UClass_UDrivingPolicy_NoRegister()
	{
		return UDrivingPolicy::StaticClass();
	}
	struct Z_Construct_UClass_UDrivingPolicy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDrivingPolicy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsPolicy,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsDrive,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrivingPolicy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrivingPolicy_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DrivingPolicy.h" },
		{ "ModuleRelativePath", "DrivingPolicy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDrivingPolicy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrivingPolicy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrivingPolicy_Statics::ClassParams = {
		&UDrivingPolicy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDrivingPolicy_Statics::Class_MetaDataParams), Z_Construct_UClass_UDrivingPolicy_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDrivingPolicy()
	{
		if (!Z_Registration_Info_UClass_UDrivingPolicy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrivingPolicy.OuterSingleton, Z_Construct_UClass_UDrivingPolicy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDrivingPolicy.OuterSingleton;
	}
	template<> LEARNINGAGENTSDRIVE_API UClass* StaticClass<UDrivingPolicy>()
	{
		return UDrivingPolicy::StaticClass();
	}
	UDrivingPolicy::UDrivingPolicy() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrivingPolicy);
	UDrivingPolicy::~UDrivingPolicy() {}
	struct Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_DrivingPolicy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_DrivingPolicy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDrivingPolicy, UDrivingPolicy::StaticClass, TEXT("UDrivingPolicy"), &Z_Registration_Info_UClass_UDrivingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrivingPolicy), 2582625999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_DrivingPolicy_h_2474695997(TEXT("/Script/LearningAgentsDrive"),
		Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_DrivingPolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_DrivingPolicy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
