// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Public/PuertaCambio.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuertaCambio() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_APuertaCambio();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_APuertaCambio_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class APuertaCambio Function AlEntrarEnZona
struct Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics
{
	struct PuertaCambio_eventAlEntrarEnZona_Parms
	{
		UPrimitiveComponent* ComponenteTocado;
		AActor* OtroActor;
		UPrimitiveComponent* OtroComponente;
		int32 OtroIndice;
		bool bDesdeBarrido;
		FHitResult Resultado;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PuertaCambio.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponenteTocado_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtroComponente_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resultado_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponenteTocado;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtroActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtroComponente;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtroIndice;
	static void NewProp_bDesdeBarrido_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDesdeBarrido;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resultado;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::NewProp_ComponenteTocado = { "ComponenteTocado", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuertaCambio_eventAlEntrarEnZona_Parms, ComponenteTocado), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponenteTocado_MetaData), NewProp_ComponenteTocado_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::NewProp_OtroActor = { "OtroActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuertaCambio_eventAlEntrarEnZona_Parms, OtroActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::NewProp_OtroComponente = { "OtroComponente", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuertaCambio_eventAlEntrarEnZona_Parms, OtroComponente), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtroComponente_MetaData), NewProp_OtroComponente_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::NewProp_OtroIndice = { "OtroIndice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuertaCambio_eventAlEntrarEnZona_Parms, OtroIndice), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::NewProp_bDesdeBarrido_SetBit(void* Obj)
{
	((PuertaCambio_eventAlEntrarEnZona_Parms*)Obj)->bDesdeBarrido = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::NewProp_bDesdeBarrido = { "bDesdeBarrido", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PuertaCambio_eventAlEntrarEnZona_Parms), &Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::NewProp_bDesdeBarrido_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::NewProp_Resultado = { "Resultado", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PuertaCambio_eventAlEntrarEnZona_Parms, Resultado), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resultado_MetaData), NewProp_Resultado_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::NewProp_ComponenteTocado,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::NewProp_OtroActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::NewProp_OtroComponente,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::NewProp_OtroIndice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::NewProp_bDesdeBarrido,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::NewProp_Resultado,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuertaCambio, nullptr, "AlEntrarEnZona", nullptr, nullptr, Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::PuertaCambio_eventAlEntrarEnZona_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::PuertaCambio_eventAlEntrarEnZona_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APuertaCambio::execAlEntrarEnZona)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponenteTocado);
	P_GET_OBJECT(AActor,Z_Param_OtroActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtroComponente);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtroIndice);
	P_GET_UBOOL(Z_Param_bDesdeBarrido);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Resultado);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AlEntrarEnZona(Z_Param_ComponenteTocado,Z_Param_OtroActor,Z_Param_OtroComponente,Z_Param_OtroIndice,Z_Param_bDesdeBarrido,Z_Param_Out_Resultado);
	P_NATIVE_END;
}
// End Class APuertaCambio Function AlEntrarEnZona

// Begin Class APuertaCambio
void APuertaCambio::StaticRegisterNativesAPuertaCambio()
{
	UClass* Class = APuertaCambio::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AlEntrarEnZona", &APuertaCambio::execAlEntrarEnZona },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APuertaCambio);
UClass* Z_Construct_UClass_APuertaCambio_NoRegister()
{
	return APuertaCambio::StaticClass();
}
struct Z_Construct_UClass_APuertaCambio_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PuertaCambio.h" },
		{ "ModuleRelativePath", "Public/PuertaCambio.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZonaDeteccion_MetaData[] = {
		{ "Category", "PuertaCambio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PuertaCambio.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UbicacionPuerta_MetaData[] = {
		{ "Category", "PuertaCambio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PuertaCambio.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ZonaDeteccion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UbicacionPuerta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APuertaCambio_AlEntrarEnZona, "AlEntrarEnZona" }, // 1440965309
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuertaCambio>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuertaCambio_Statics::NewProp_ZonaDeteccion = { "ZonaDeteccion", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuertaCambio, ZonaDeteccion), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZonaDeteccion_MetaData), NewProp_ZonaDeteccion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuertaCambio_Statics::NewProp_UbicacionPuerta = { "UbicacionPuerta", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuertaCambio, UbicacionPuerta), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UbicacionPuerta_MetaData), NewProp_UbicacionPuerta_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuertaCambio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuertaCambio_Statics::NewProp_ZonaDeteccion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuertaCambio_Statics::NewProp_UbicacionPuerta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuertaCambio_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APuertaCambio_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuertaCambio_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APuertaCambio_Statics::ClassParams = {
	&APuertaCambio::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APuertaCambio_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APuertaCambio_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuertaCambio_Statics::Class_MetaDataParams), Z_Construct_UClass_APuertaCambio_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APuertaCambio()
{
	if (!Z_Registration_Info_UClass_APuertaCambio.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APuertaCambio.OuterSingleton, Z_Construct_UClass_APuertaCambio_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APuertaCambio.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<APuertaCambio>()
{
	return APuertaCambio::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APuertaCambio);
APuertaCambio::~APuertaCambio() {}
// End Class APuertaCambio

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_01202500_Source_BomberMan_012025_Public_PuertaCambio_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APuertaCambio, APuertaCambio::StaticClass, TEXT("APuertaCambio"), &Z_Registration_Info_UClass_APuertaCambio, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APuertaCambio), 2479956022U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_01202500_Source_BomberMan_012025_Public_PuertaCambio_h_2747127330(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_01202500_Source_BomberMan_012025_Public_PuertaCambio_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_01202500_Source_BomberMan_012025_Public_PuertaCambio_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
