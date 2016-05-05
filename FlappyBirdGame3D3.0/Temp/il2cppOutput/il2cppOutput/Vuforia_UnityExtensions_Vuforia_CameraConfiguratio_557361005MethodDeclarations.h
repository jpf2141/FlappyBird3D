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

// UnityEngine.Camera
struct Camera_t814710830_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Vector4_725341336.h"

// System.Void Vuforia.CameraConfigurationUtility::ExtractCameraClippingPlanes(UnityEngine.Matrix4x4,System.Single&,System.Single&)
extern "C"  void CameraConfigurationUtility_ExtractCameraClippingPlanes_m_748577670_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0  ___inverseProjMatrix, float* ___near, float* ___far, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CameraConfigurationUtility::ExtractVerticalCameraFoV(UnityEngine.Matrix4x4)
extern "C"  float CameraConfigurationUtility_ExtractVerticalCameraFoV_m204823996_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0  ___inverseProjMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CameraConfigurationUtility::ExtractHorizontalCameraFoV(UnityEngine.Matrix4x4)
extern "C"  float CameraConfigurationUtility_ExtractHorizontalCameraFoV_m_1268152022_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0  ___inverseProjMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.CameraConfigurationUtility::ScalePerspectiveProjectionMatrix(UnityEngine.Matrix4x4,System.Single,System.Single)
extern "C"  Matrix4x4_t1577636070_0  CameraConfigurationUtility_ScalePerspectiveProjectionMatrix_m1914541254_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0  ___inputMatrix, float ___targetVerticalFoVDeg, float ___targetHorizontalFoVDeg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CameraConfigurationUtility::CalculateHorizontalFoVFromViewPortAspect(System.Single,System.Single)
extern "C"  float CameraConfigurationUtility_CalculateHorizontalFoVFromViewPortAspect_m_1872054088_0 (Object_t * __this /* static, unused */, float ___verticalFoVDeg, float ___viewportAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraConfigurationUtility::SetFovForCustomProjection(UnityEngine.Camera)
extern "C"  void CameraConfigurationUtility_SetFovForCustomProjection_m_301634141_0 (Object_t * __this /* static, unused */, Camera_t814710830_0 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.CameraConfigurationUtility::HomogenizedVec3(UnityEngine.Vector4)
extern "C"  Vector3_t_725341337_0  CameraConfigurationUtility_HomogenizedVec3_m1861290299_0 (Object_t * __this /* static, unused */, Vector4_t_725341336_0  ___vec4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraConfigurationUtility::.cctor()
extern "C"  void CameraConfigurationUtility__cctor_m_636542102_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
