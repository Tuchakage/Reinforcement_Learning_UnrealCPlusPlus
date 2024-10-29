// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsDrive/LearningAgentsDriveOffroadWheelRear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningAgentsDriveOffroadWheelRear() {}
// Cross Module References
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_ULearningAgentsDriveOffroadWheelRear();
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_ULearningAgentsDriveOffroadWheelRear_NoRegister();
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_ULearningAgentsDriveWheelRear();
	UPackage* Z_Construct_UPackage__Script_LearningAgentsDrive();
// End Cross Module References
	void ULearningAgentsDriveOffroadWheelRear::StaticRegisterNativesULearningAgentsDriveOffroadWheelRear()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULearningAgentsDriveOffroadWheelRear);
	UClass* Z_Construct_UClass_ULearningAgentsDriveOffroadWheelRear_NoRegister()
	{
		return ULearningAgentsDriveOffroadWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_ULearningAgentsDriveOffroadWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULearningAgentsDriveOffroadWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsDriveWheelRear,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsDrive,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsDriveOffroadWheelRear_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsDriveOffroadWheelRear_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Rear wheel definition for Offroad Car.\n */" },
#endif
		{ "IncludePath", "LearningAgentsDriveOffroadWheelRear.h" },
		{ "ModuleRelativePath", "LearningAgentsDriveOffroadWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rear wheel definition for Offroad Car." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULearningAgentsDriveOffroadWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULearningAgentsDriveOffroadWheelRear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULearningAgentsDriveOffroadWheelRear_Statics::ClassParams = {
		&ULearningAgentsDriveOffroadWheelRear::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsDriveOffroadWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_ULearningAgentsDriveOffroadWheelRear_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULearningAgentsDriveOffroadWheelRear()
	{
		if (!Z_Registration_Info_UClass_ULearningAgentsDriveOffroadWheelRear.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULearningAgentsDriveOffroadWheelRear.OuterSingleton, Z_Construct_UClass_ULearningAgentsDriveOffroadWheelRear_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULearningAgentsDriveOffroadWheelRear.OuterSingleton;
	}
	template<> LEARNINGAGENTSDRIVE_API UClass* StaticClass<ULearningAgentsDriveOffroadWheelRear>()
	{
		return ULearningAgentsDriveOffroadWheelRear::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULearningAgentsDriveOffroadWheelRear);
	ULearningAgentsDriveOffroadWheelRear::~ULearningAgentsDriveOffroadWheelRear() {}
	struct Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDriveOffroadWheelRear_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDriveOffroadWheelRear_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULearningAgentsDriveOffroadWheelRear, ULearningAgentsDriveOffroadWheelRear::StaticClass, TEXT("ULearningAgentsDriveOffroadWheelRear"), &Z_Registration_Info_UClass_ULearningAgentsDriveOffroadWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULearningAgentsDriveOffroadWheelRear), 3176122187U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDriveOffroadWheelRear_h_375963505(TEXT("/Script/LearningAgentsDrive"),
		Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDriveOffroadWheelRear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDriveOffroadWheelRear_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
