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

// Vuforia.CustomViewerParameters
struct CustomViewerParameters_t320314725_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_ViewerButtonType_935569034.h"
#include "Vuforia_UnityExtensions_Vuforia_ViewerTrayAlignmen_779324637.h"
#include "UnityEngine_UnityEngine_Vector4_725341336.h"

// System.Void Vuforia.CustomViewerParameters::.ctor(System.Single,System.String,System.String)
extern "C"  void CustomViewerParameters__ctor_m1587620914_0 (CustomViewerParameters_t320314725_0 * __this, float ___version, String_t* ___viewerName, String_t* ___manufacturer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::Finalize()
extern "C"  void CustomViewerParameters_Finalize_m_232651471_0 (CustomViewerParameters_t320314725_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetButtonType(Vuforia.ViewerButtonType)
extern "C"  void CustomViewerParameters_SetButtonType_m_865209261_0 (CustomViewerParameters_t320314725_0 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetScreenToLensDistance(System.Single)
extern "C"  void CustomViewerParameters_SetScreenToLensDistance_m_220271840_0 (CustomViewerParameters_t320314725_0 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetInterLensDistance(System.Single)
extern "C"  void CustomViewerParameters_SetInterLensDistance_m_80318069_0 (CustomViewerParameters_t320314725_0 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetTrayAlignment(Vuforia.ViewerTrayAlignment)
extern "C"  void CustomViewerParameters_SetTrayAlignment_m_994724667_0 (CustomViewerParameters_t320314725_0 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetLensCentreToTrayDistance(System.Single)
extern "C"  void CustomViewerParameters_SetLensCentreToTrayDistance_m1983579387_0 (CustomViewerParameters_t320314725_0 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::ClearDistortionCoefficients()
extern "C"  void CustomViewerParameters_ClearDistortionCoefficients_m163290103_0 (CustomViewerParameters_t320314725_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::AddDistortionCoefficient(System.Single)
extern "C"  void CustomViewerParameters_AddDistortionCoefficient_m_2125210399_0 (CustomViewerParameters_t320314725_0 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetFieldOfView(UnityEngine.Vector4)
extern "C"  void CustomViewerParameters_SetFieldOfView_m_132630127_0 (CustomViewerParameters_t320314725_0 * __this, Vector4_t_725341336_0  ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetContainsMagnet(System.Boolean)
extern "C"  void CustomViewerParameters_SetContainsMagnet_m_416384431_0 (CustomViewerParameters_t320314725_0 * __this, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
