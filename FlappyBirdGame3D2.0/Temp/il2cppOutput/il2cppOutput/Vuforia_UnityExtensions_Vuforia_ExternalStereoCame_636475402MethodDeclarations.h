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

// Vuforia.ExternalStereoCameraConfiguration
struct ExternalStereoCameraConfiguration_t_636475402_0;
// UnityEngine.Camera
struct Camera_t814710830_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1219597595.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"

// System.Void Vuforia.ExternalStereoCameraConfiguration::.ctor(UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void ExternalStereoCameraConfiguration__ctor_m1733815852_0 (ExternalStereoCameraConfiguration_t_636475402_0 * __this, Camera_t814710830_0 * ___leftCamera, Camera_t814710830_0 * ___rightCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ExternalStereoCameraConfiguration::CheckForSurfaceChanges(UnityEngine.ScreenOrientation&)
extern "C"  bool ExternalStereoCameraConfiguration_CheckForSurfaceChanges_m_109498218_0 (ExternalStereoCameraConfiguration_t_636475402_0 * __this, int32_t* ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ExternalStereoCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void ExternalStereoCameraConfiguration_ApplyCorrectedProjectionMatrix_m_1932316552_0 (ExternalStereoCameraConfiguration_t_636475402_0 * __this, Matrix4x4_t1577636070_0  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ExternalStereoCameraConfiguration::CameraParameterChanged()
extern "C"  bool ExternalStereoCameraConfiguration_CameraParameterChanged_m_984337464_0 (ExternalStereoCameraConfiguration_t_636475402_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ExternalStereoCameraConfiguration::UpdateProjection()
extern "C"  void ExternalStereoCameraConfiguration_UpdateProjection_m1506683874_0 (ExternalStereoCameraConfiguration_t_636475402_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
