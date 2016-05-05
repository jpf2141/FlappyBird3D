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

// Vuforia.MonoCameraConfiguration
struct MonoCameraConfiguration_t40903350_0;
// UnityEngine.Camera
struct Camera_t814710830_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1219597595.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"

// System.Void Vuforia.MonoCameraConfiguration::.ctor(UnityEngine.Camera)
extern "C"  void MonoCameraConfiguration__ctor_m130471486_0 (MonoCameraConfiguration_t40903350_0 * __this, Camera_t814710830_0 * ___leftCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ConfigureVideoBackground()
extern "C"  void MonoCameraConfiguration_ConfigureVideoBackground_m_384479507_0 (MonoCameraConfiguration_t40903350_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MonoCameraConfiguration::CheckForSurfaceChanges(UnityEngine.ScreenOrientation&)
extern "C"  bool MonoCameraConfiguration_CheckForSurfaceChanges_m697577622_0 (MonoCameraConfiguration_t40903350_0 * __this, int32_t* ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C"  void MonoCameraConfiguration_UpdateStereoDepth_m1400866851_0 (MonoCameraConfiguration_t40903350_0 * __this, Transform_t1584899523_0 * ___trackingReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MonoCameraConfiguration::IsStereo()
extern "C"  bool MonoCameraConfiguration_IsStereo_m_768773830_0 (MonoCameraConfiguration_t40903350_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void MonoCameraConfiguration_ApplyCorrectedProjectionMatrix_m_1018775816_0 (MonoCameraConfiguration_t40903350_0 * __this, Matrix4x4_t1577636070_0  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C"  void MonoCameraConfiguration_SetSkewFrustum_m1554251223_0 (MonoCameraConfiguration_t40903350_0 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdateProjection()
extern "C"  void MonoCameraConfiguration_UpdateProjection_m382227042_0 (MonoCameraConfiguration_t40903350_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C"  void MonoCameraConfiguration_ResolveVideoBackgroundBehaviours_m1662095709_0 (MonoCameraConfiguration_t40903350_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MonoCameraConfiguration::CameraParameterChanged()
extern "C"  bool MonoCameraConfiguration_CameraParameterChanged_m_2035338296_0 (MonoCameraConfiguration_t40903350_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
