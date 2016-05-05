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

// Vuforia.DedicatedEyewearCameraConfiguration
struct DedicatedEyewearCameraConfiguration_t422674584_0;
// UnityEngine.Camera
struct Camera_t814710830_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1219597595.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"

// System.Void Vuforia.DedicatedEyewearCameraConfiguration::.ctor(UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void DedicatedEyewearCameraConfiguration__ctor_m1125978766_0 (DedicatedEyewearCameraConfiguration_t422674584_0 * __this, Camera_t814710830_0 * ___leftCamera, Camera_t814710830_0 * ___rightCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::Init()
extern "C"  void DedicatedEyewearCameraConfiguration_Init_m_2019203492_0 (DedicatedEyewearCameraConfiguration_t422674584_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::ConfigureVideoBackground()
extern "C"  void DedicatedEyewearCameraConfiguration_ConfigureVideoBackground_m2085257551_0 (DedicatedEyewearCameraConfiguration_t422674584_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DedicatedEyewearCameraConfiguration::CheckForSurfaceChanges(UnityEngine.ScreenOrientation&)
extern "C"  bool DedicatedEyewearCameraConfiguration_CheckForSurfaceChanges_m217315064_0 (DedicatedEyewearCameraConfiguration_t422674584_0 * __this, int32_t* ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C"  void DedicatedEyewearCameraConfiguration_UpdateStereoDepth_m_424417531_0 (DedicatedEyewearCameraConfiguration_t422674584_0 * __this, Transform_t1584899523_0 * ___trackingReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DedicatedEyewearCameraConfiguration::IsStereo()
extern "C"  bool DedicatedEyewearCameraConfiguration_IsStereo_m_1405599076_0 (DedicatedEyewearCameraConfiguration_t422674584_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void DedicatedEyewearCameraConfiguration_ApplyCorrectedProjectionMatrix_m250203866_0 (DedicatedEyewearCameraConfiguration_t422674584_0 * __this, Matrix4x4_t1577636070_0  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C"  void DedicatedEyewearCameraConfiguration_ResolveVideoBackgroundBehaviours_m287785407_0 (DedicatedEyewearCameraConfiguration_t422674584_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DedicatedEyewearCameraConfiguration::CameraParameterChanged()
extern "C"  bool DedicatedEyewearCameraConfiguration_CameraParameterChanged_m_1896418902_0 (DedicatedEyewearCameraConfiguration_t422674584_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::UpdateProjection()
extern "C"  void DedicatedEyewearCameraConfiguration_UpdateProjection_m532612804_0 (DedicatedEyewearCameraConfiguration_t422674584_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::ApplyMatrix(UnityEngine.Camera,UnityEngine.Matrix4x4)
extern "C"  void DedicatedEyewearCameraConfiguration_ApplyMatrix_m1887059901_0 (DedicatedEyewearCameraConfiguration_t422674584_0 * __this, Camera_t814710830_0 * ___cam, Matrix4x4_t1577636070_0  ___inputMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C"  void DedicatedEyewearCameraConfiguration_SetSkewFrustum_m324349753_0 (DedicatedEyewearCameraConfiguration_t422674584_0 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
