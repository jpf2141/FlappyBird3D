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

// Vuforia.StereoViewerCameraConfiguration
struct StereoViewerCameraConfiguration_t154340879_0;
// UnityEngine.Camera
struct Camera_t814710830_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"

// System.Void Vuforia.StereoViewerCameraConfiguration::.ctor(UnityEngine.Camera,UnityEngine.Camera,System.Single,System.Boolean)
extern "C"  void StereoViewerCameraConfiguration__ctor_m209402579_0 (StereoViewerCameraConfiguration_t154340879_0 * __this, Camera_t814710830_0 * ___leftCamera, Camera_t814710830_0 * ___rightCamera, float ___cameraOffset, bool ___isDistorted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoViewerCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void StereoViewerCameraConfiguration_ApplyCorrectedProjectionMatrix_m_808882031_0 (StereoViewerCameraConfiguration_t154340879_0 * __this, Matrix4x4_t1577636070_0  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoViewerCameraConfiguration::SetDistortion(System.Boolean)
extern "C"  void StereoViewerCameraConfiguration_SetDistortion_m_1118483755_0 (StereoViewerCameraConfiguration_t154340879_0 * __this, bool ___isDistorted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoViewerCameraConfiguration::ConfigureVideoBackground()
extern "C"  void StereoViewerCameraConfiguration_ConfigureVideoBackground_m_890296378_0 (StereoViewerCameraConfiguration_t154340879_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StereoViewerCameraConfiguration::CameraParameterChanged()
extern "C"  bool StereoViewerCameraConfiguration_CameraParameterChanged_m_1954840351_0 (StereoViewerCameraConfiguration_t154340879_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoViewerCameraConfiguration::UpdateProjection()
extern "C"  void StereoViewerCameraConfiguration_UpdateProjection_m1525748795_0 (StereoViewerCameraConfiguration_t154340879_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
