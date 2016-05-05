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

// Vuforia.BaseStereoViewerCameraConfiguration
struct BaseStereoViewerCameraConfiguration_t_137772802_0;
// UnityEngine.Camera
struct Camera_t814710830_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1219597595.h"

// System.Void Vuforia.BaseStereoViewerCameraConfiguration::.ctor(UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void BaseStereoViewerCameraConfiguration__ctor_m_1343188876_0 (BaseStereoViewerCameraConfiguration_t_137772802_0 * __this, Camera_t814710830_0 * ___leftCamera, Camera_t814710830_0 * ___rightCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseStereoViewerCameraConfiguration::ConfigureVideoBackground()
extern "C"  void BaseStereoViewerCameraConfiguration_ConfigureVideoBackground_m1977076917_0 (BaseStereoViewerCameraConfiguration_t_137772802_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.BaseStereoViewerCameraConfiguration::CheckForSurfaceChanges(UnityEngine.ScreenOrientation&)
extern "C"  bool BaseStereoViewerCameraConfiguration_CheckForSurfaceChanges_m1053281630_0 (BaseStereoViewerCameraConfiguration_t_137772802_0 * __this, int32_t* ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseStereoViewerCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C"  void BaseStereoViewerCameraConfiguration_UpdateStereoDepth_m_1156691989_0 (BaseStereoViewerCameraConfiguration_t_137772802_0 * __this, Transform_t1584899523_0 * ___trackingReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.BaseStereoViewerCameraConfiguration::IsStereo()
extern "C"  bool BaseStereoViewerCameraConfiguration_IsStereo_m816126466_0 (BaseStereoViewerCameraConfiguration_t_137772802_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseStereoViewerCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C"  void BaseStereoViewerCameraConfiguration_SetSkewFrustum_m_1528670305_0 (BaseStereoViewerCameraConfiguration_t_137772802_0 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseStereoViewerCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C"  void BaseStereoViewerCameraConfiguration_ResolveVideoBackgroundBehaviours_m1300088613_0 (BaseStereoViewerCameraConfiguration_t_137772802_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseStereoViewerCameraConfiguration::ComputeViewPortRect(System.Int32,System.Int32)
extern "C"  void BaseStereoViewerCameraConfiguration_ComputeViewPortRect_m2137313461_0 (BaseStereoViewerCameraConfiguration_t_137772802_0 * __this, int32_t ___leftCameraViewPortHeight, int32_t ___leftCameraViewPortWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
