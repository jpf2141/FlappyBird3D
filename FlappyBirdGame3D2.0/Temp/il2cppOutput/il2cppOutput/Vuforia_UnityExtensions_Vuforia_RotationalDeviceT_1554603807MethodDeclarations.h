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

// Vuforia.RotationalDeviceTrackerImpl
struct RotationalDeviceTrackerImpl_t_1554603807_0;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_RotationalDeviceT_1440122816.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Boolean Vuforia.RotationalDeviceTrackerImpl::Start()
extern "C"  bool RotationalDeviceTrackerImpl_Start_m_1655507967_0 (RotationalDeviceTrackerImpl_t_1554603807_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalDeviceTrackerImpl::Stop()
extern "C"  void RotationalDeviceTrackerImpl_Stop_m_1788027113_0 (RotationalDeviceTrackerImpl_t_1554603807_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalDeviceTrackerImpl::RecenterPose()
extern "C"  void RotationalDeviceTrackerImpl_RecenterPose_m266695246_0 (RotationalDeviceTrackerImpl_t_1554603807_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalDeviceTrackerImpl::RecenterPose(System.Boolean)
extern "C"  void RotationalDeviceTrackerImpl_RecenterPose_m_206108859_0 (RotationalDeviceTrackerImpl_t_1554603807_0 * __this, bool ___resetToCurrentPose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalDeviceTrackerImpl::SetPosePrediction(System.Boolean)
extern "C"  void RotationalDeviceTrackerImpl_SetPosePrediction_m_449885530_0 (RotationalDeviceTrackerImpl_t_1554603807_0 * __this, bool ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.RotationalDeviceTrackerImpl::GetPosePrediction()
extern "C"  bool RotationalDeviceTrackerImpl_GetPosePrediction_m277096085_0 (RotationalDeviceTrackerImpl_t_1554603807_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalDeviceTrackerImpl::SetModelCorrectionMode(Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE)
extern "C"  void RotationalDeviceTrackerImpl_SetModelCorrectionMode_m_271663287_0 (RotationalDeviceTrackerImpl_t_1554603807_0 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE Vuforia.RotationalDeviceTrackerImpl::GetModelCorrectionMode()
extern "C"  int32_t RotationalDeviceTrackerImpl_GetModelCorrectionMode_m590928866_0 (RotationalDeviceTrackerImpl_t_1554603807_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalDeviceTrackerImpl::SetModelCorrectionModeWithTransform(Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE,UnityEngine.Vector3)
extern "C"  void RotationalDeviceTrackerImpl_SetModelCorrectionModeWithTransform_m_380560402_0 (RotationalDeviceTrackerImpl_t_1554603807_0 * __this, int32_t ___mode, Vector3_t_725341337_0  ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.RotationalDeviceTrackerImpl::GetModelCorrectionTransform()
extern "C"  Vector3_t_725341337_0  RotationalDeviceTrackerImpl_GetModelCorrectionTransform_m_1705129886_0 (RotationalDeviceTrackerImpl_t_1554603807_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalDeviceTrackerImpl::RecenterPoseToCurrentAnchorPointPosition(System.Boolean)
extern "C"  void RotationalDeviceTrackerImpl_RecenterPoseToCurrentAnchorPointPosition_m947641515_0 (RotationalDeviceTrackerImpl_t_1554603807_0 * __this, bool ___resetToCurrentPose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalDeviceTrackerImpl::.ctor()
extern "C"  void RotationalDeviceTrackerImpl__ctor_m1445799887_0 (RotationalDeviceTrackerImpl_t_1554603807_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
