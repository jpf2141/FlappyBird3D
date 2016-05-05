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

// Vuforia.NullCameraConfiguration
struct NullCameraConfiguration_t_1548964462_0;
// System.Action
struct Action_t2132293834_0;
// Vuforia.WebCamAbstractBehaviour
struct WebCamAbstractBehaviour_t1328164072_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Came_1518894406.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_V_2015634094.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1219597595.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"

// System.Void Vuforia.NullCameraConfiguration::Init()
extern "C"  void NullCameraConfiguration_Init_m_295789098_0 (NullCameraConfiguration_t_1548964462_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::InitCameraDevice(Vuforia.CameraDevice/CameraDeviceMode,Vuforia.VuforiaRenderer/VideoBackgroundReflection,System.Action)
extern "C"  void NullCameraConfiguration_InitCameraDevice_m_838139584_0 (NullCameraConfiguration_t_1548964462_0 * __this, int32_t ___cameraDeviceMode, int32_t ___mirrorVideoBackground, Action_t2132293834_0 * ___onVideoBackgroundConfigChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ConfigureVideoBackground()
extern "C"  void NullCameraConfiguration_ConfigureVideoBackground_m707213257_0 (NullCameraConfiguration_t_1548964462_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::UpdatePlayModeParameters(Vuforia.WebCamAbstractBehaviour,System.Single)
extern "C"  void NullCameraConfiguration_UpdatePlayModeParameters_m867822451_0 (NullCameraConfiguration_t_1548964462_0 * __this, WebCamAbstractBehaviour_t1328164072_0 * ___webCamBehaviour, float ___cameraOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.NullCameraConfiguration::CheckForSurfaceChanges(UnityEngine.ScreenOrientation&)
extern "C"  bool NullCameraConfiguration_CheckForSurfaceChanges_m_18712718_0 (NullCameraConfiguration_t_1548964462_0 * __this, int32_t* ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C"  void NullCameraConfiguration_UpdateStereoDepth_m_206913537_0 (NullCameraConfiguration_t_1548964462_0 * __this, Transform_t1584899523_0 * ___trackingReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.NullCameraConfiguration::IsStereo()
extern "C"  bool NullCameraConfiguration_IsStereo_m327455254_0 (NullCameraConfiguration_t_1548964462_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ResetBackgroundPlane(System.Boolean)
extern "C"  void NullCameraConfiguration_ResetBackgroundPlane_m1568451644_0 (NullCameraConfiguration_t_1548964462_0 * __this, bool ___disable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.NullCameraConfiguration::get_VideoBackgroundMirrored()
extern "C"  int32_t NullCameraConfiguration_get_VideoBackgroundMirrored_m27850223_0 (NullCameraConfiguration_t_1548964462_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::set_VideoBackgroundMirrored(Vuforia.VuforiaRenderer/VideoBackgroundReflection)
extern "C"  void NullCameraConfiguration_set_VideoBackgroundMirrored_m_1773546994_0 (NullCameraConfiguration_t_1548964462_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void NullCameraConfiguration_ApplyCorrectedProjectionMatrix_m1873923284_0 (NullCameraConfiguration_t_1548964462_0 * __this, Matrix4x4_t1577636070_0  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C"  void NullCameraConfiguration_SetSkewFrustum_m2124290227_0 (NullCameraConfiguration_t_1548964462_0 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.NullCameraConfiguration::get_VideoBackgroundViewportRect()
extern "C"  Rect_t_981940947_0  NullCameraConfiguration_get_VideoBackgroundViewportRect_m_1214934074_0 (NullCameraConfiguration_t_1548964462_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.NullCameraConfiguration::get_EyewearUserCalibrationProfileId()
extern "C"  int32_t NullCameraConfiguration_get_EyewearUserCalibrationProfileId_m967747732_0 (NullCameraConfiguration_t_1548964462_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::set_EyewearUserCalibrationProfileId(System.Int32)
extern "C"  void NullCameraConfiguration_set_EyewearUserCalibrationProfileId_m_1354393179_0 (NullCameraConfiguration_t_1548964462_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::SetCameraParameterChanged()
extern "C"  void NullCameraConfiguration_SetCameraParameterChanged_m1312883950_0 (NullCameraConfiguration_t_1548964462_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::.ctor()
extern "C"  void NullCameraConfiguration__ctor_m922837182_0 (NullCameraConfiguration_t_1548964462_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
