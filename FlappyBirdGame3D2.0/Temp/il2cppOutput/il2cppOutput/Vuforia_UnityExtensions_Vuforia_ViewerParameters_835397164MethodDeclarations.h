#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vuforia.ViewerParameters
struct ViewerParameters_t_835397164_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "Vuforia_UnityExtensions_Vuforia_ViewerButtonType_935569034.h"
#include "Vuforia_UnityExtensions_Vuforia_ViewerTrayAlignmen_779324637.h"
#include "UnityEngine_UnityEngine_Vector4_725341336.h"

// System.Void Vuforia.ViewerParameters::.ctor(System.IntPtr)
extern "C"  void ViewerParameters__ctor_m_502853806_0 (ViewerParameters_t_835397164_0 * __this, IntPtr_t ___nativePtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ViewerParameters::Finalize()
extern "C"  void ViewerParameters_Finalize_m_964161312_0 (ViewerParameters_t_835397164_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ViewerParameters::GetVersion()
extern "C"  float ViewerParameters_GetVersion_m_603460688_0 (ViewerParameters_t_835397164_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.ViewerParameters::GetName()
extern "C"  String_t* ViewerParameters_GetName_m_1603421282_0 (ViewerParameters_t_835397164_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.ViewerParameters::GetManufacturer()
extern "C"  String_t* ViewerParameters_GetManufacturer_m1646541156_0 (ViewerParameters_t_835397164_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ViewerButtonType Vuforia.ViewerParameters::GetButtonType()
extern "C"  int32_t ViewerParameters_GetButtonType_m1771268977_0 (ViewerParameters_t_835397164_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ViewerTrayAlignment Vuforia.ViewerParameters::GetTrayAlignment()
extern "C"  int32_t ViewerParameters_GetTrayAlignment_m_843441635_0 (ViewerParameters_t_835397164_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ViewerParameters::GetScreenToLensDistance()
extern "C"  float ViewerParameters_GetScreenToLensDistance_m_372086588_0 (ViewerParameters_t_835397164_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ViewerParameters::GetInterLensDistance()
extern "C"  float ViewerParameters_GetInterLensDistance_m_625688985_0 (ViewerParameters_t_835397164_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ViewerParameters::GetLensCentreToTrayDistance()
extern "C"  float ViewerParameters_GetLensCentreToTrayDistance_m_236285303_0 (ViewerParameters_t_835397164_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ViewerParameters::GetNumDistortionCoefficients()
extern "C"  int32_t ViewerParameters_GetNumDistortionCoefficients_m2063799257_0 (ViewerParameters_t_835397164_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ViewerParameters::GetDistortionCoefficient(System.Int32)
extern "C"  float ViewerParameters_GetDistortionCoefficient_m_315816895_0 (ViewerParameters_t_835397164_0 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 Vuforia.ViewerParameters::GetFieldOfView()
extern "C"  Vector4_t_725341336_0  ViewerParameters_GetFieldOfView_m1551957595_0 (ViewerParameters_t_835397164_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ViewerParameters::ContainsMagnet()
extern "C"  bool ViewerParameters_ContainsMagnet_m1267375965_0 (ViewerParameters_t_835397164_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.ViewerParameters::get_NativePtr()
extern "C"  IntPtr_t ViewerParameters_get_NativePtr_m1477562617_0 (ViewerParameters_t_835397164_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
