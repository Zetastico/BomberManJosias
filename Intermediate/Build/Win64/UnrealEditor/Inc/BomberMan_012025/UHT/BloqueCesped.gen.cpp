// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Public/BloqueCesped.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueCesped() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueCesped();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueCesped_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloqueCesped
void ABloqueCesped::StaticRegisterNativesABloqueCesped()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueCesped);
UClass* Z_Construct_UClass_ABloqueCesped_NoRegister()
{
	return ABloqueCesped::StaticClass();
}
struct Z_Construct_UClass_ABloqueCesped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueCesped.h" },
		{ "ModuleRelativePath", "Public/BloqueCesped.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueCesped>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueCesped_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueCesped_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueCesped_Statics::ClassParams = {
	&ABloqueCesped::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueCesped_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueCesped_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueCesped()
{
	if (!Z_Registration_Info_UClass_ABloqueCesped.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueCesped.OuterSingleton, Z_Construct_UClass_ABloqueCesped_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueCesped.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueCesped>()
{
	return ABloqueCesped::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueCesped);
ABloqueCesped::~ABloqueCesped() {}
// End Class ABloqueCesped

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_BloqueCesped_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueCesped, ABloqueCesped::StaticClass, TEXT("ABloqueCesped"), &Z_Registration_Info_UClass_ABloqueCesped, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueCesped), 240919526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_BloqueCesped_h_592776763(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_BloqueCesped_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_BloqueCesped_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
