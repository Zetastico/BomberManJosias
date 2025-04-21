// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Public/EnemigoAereo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoAereo() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoAereo();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoAereo_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AEnemigoAereo
void AEnemigoAereo::StaticRegisterNativesAEnemigoAereo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoAereo);
UClass* Z_Construct_UClass_AEnemigoAereo_NoRegister()
{
	return AEnemigoAereo::StaticClass();
}
struct Z_Construct_UClass_AEnemigoAereo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoAereo.h" },
		{ "ModuleRelativePath", "Public/EnemigoAereo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoAereo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigoAereo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAereo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoAereo_Statics::ClassParams = {
	&AEnemigoAereo::StaticClass,
	"Game",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAereo_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoAereo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoAereo()
{
	if (!Z_Registration_Info_UClass_AEnemigoAereo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoAereo.OuterSingleton, Z_Construct_UClass_AEnemigoAereo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoAereo.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AEnemigoAereo>()
{
	return AEnemigoAereo::StaticClass();
}
AEnemigoAereo::AEnemigoAereo() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoAereo);
AEnemigoAereo::~AEnemigoAereo() {}
// End Class AEnemigoAereo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_EnemigoAereo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoAereo, AEnemigoAereo::StaticClass, TEXT("AEnemigoAereo"), &Z_Registration_Info_UClass_AEnemigoAereo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoAereo), 392976750U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_EnemigoAereo_h_2328043509(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_EnemigoAereo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_EnemigoAereo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
