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
struct StereoViewerCameraConfiguration_t1054822973;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// System.Void Vuforia.StereoViewerCameraConfiguration::.ctor(UnityEngine.Camera,UnityEngine.Camera,System.Single,System.Boolean)
extern "C"  void StereoViewerCameraConfiguration__ctor_m209402579 (StereoViewerCameraConfiguration_t1054822973 * __this, Camera_t3533968274 * ___leftCamera, Camera_t3533968274 * ___rightCamera, float ___cameraOffset, bool ___isDistorted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoViewerCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void StereoViewerCameraConfiguration_ApplyCorrectedProjectionMatrix_m3486085265 (StereoViewerCameraConfiguration_t1054822973 * __this, Matrix4x4_t277289660  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoViewerCameraConfiguration::SetDistortion(System.Boolean)
extern "C"  void StereoViewerCameraConfiguration_SetDistortion_m3176483541 (StereoViewerCameraConfiguration_t1054822973 * __this, bool ___isDistorted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoViewerCameraConfiguration::ConfigureVideoBackground()
extern "C"  void StereoViewerCameraConfiguration_ConfigureVideoBackground_m3404670918 (StereoViewerCameraConfiguration_t1054822973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StereoViewerCameraConfiguration::CameraParameterChanged()
extern "C"  bool StereoViewerCameraConfiguration_CameraParameterChanged_m2340126945 (StereoViewerCameraConfiguration_t1054822973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoViewerCameraConfiguration::UpdateProjection()
extern "C"  void StereoViewerCameraConfiguration_UpdateProjection_m1525748795 (StereoViewerCameraConfiguration_t1054822973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
