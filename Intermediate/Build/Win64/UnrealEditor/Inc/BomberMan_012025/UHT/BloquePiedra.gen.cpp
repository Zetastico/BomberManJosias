// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Public/BloquePiedra.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloquePiedra() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloquePiedra();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloquePiedra_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloquePiedra
void ABloquePiedra::StaticRegisterNativesABloquePiedra()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloquePiedra);
UClass* Z_Construct_UClass_ABloquePiedra_NoRegister()
{
	return ABloquePiedra::StaticClass();
}
struct Z_Construct_UClass_ABloquePiedra_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloquePiedra.h" },
		{ "ModuleRelativePath", "Public/BloquePiedra.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloquePiedra>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloquePiedra_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloquePiedra_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloquePiedra_Statics::ClassParams = {
	&ABloquePiedra::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloquePiedra_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloquePiedra_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloquePiedra()
{
	if (!Z_Registration_Info_UClass_ABloquePiedra.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloquePiedra.OuterSingleton, Z_Construct_UClass_ABloquePiedra_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloquePiedra.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloquePiedra>()
{
	return ABloquePiedra::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloquePiedra);
ABloquePiedra::~ABloquePiedra() {}
// End Class ABloquePiedra

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_BloquePiedra_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloquePiedra, ABloquePiedra::StaticClass, TEXT("ABloquePiedra"), &Z_Registration_Info_UClass_ABloquePiedra, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloquePiedra), 1088217564U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_BloquePiedra_h_3379950504(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_BloquePiedra_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_BloquePiedra_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
