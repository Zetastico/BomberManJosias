// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Public/BloqueCeramica.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueCeramica() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueCeramica();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueCeramica_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloqueCeramica
void ABloqueCeramica::StaticRegisterNativesABloqueCeramica()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueCeramica);
UClass* Z_Construct_UClass_ABloqueCeramica_NoRegister()
{
	return ABloqueCeramica::StaticClass();
}
struct Z_Construct_UClass_ABloqueCeramica_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueCeramica.h" },
		{ "ModuleRelativePath", "Public/BloqueCeramica.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueCeramica>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueCeramica_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueCeramica_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueCeramica_Statics::ClassParams = {
	&ABloqueCeramica::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueCeramica_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueCeramica_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueCeramica()
{
	if (!Z_Registration_Info_UClass_ABloqueCeramica.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueCeramica.OuterSingleton, Z_Construct_UClass_ABloqueCeramica_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueCeramica.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueCeramica>()
{
	return ABloqueCeramica::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueCeramica);
ABloqueCeramica::~ABloqueCeramica() {}
// End Class ABloqueCeramica

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_BloqueCeramica_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueCeramica, ABloqueCeramica::StaticClass, TEXT("ABloqueCeramica"), &Z_Registration_Info_UClass_ABloqueCeramica, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueCeramica), 1174408415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_BloqueCeramica_h_1722469765(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_BloqueCeramica_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_BloqueCeramica_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
