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

// Vuforia.EyewearCalibrationProfileManagerImpl
struct EyewearCalibrationProfileManagerImpl_t481665654_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "Vuforia_UnityExtensions_Vuforia_EyewearDevice_EyeI_920168437.h"

// System.Int32 Vuforia.EyewearCalibrationProfileManagerImpl::getMaxCount()
extern "C"  int32_t EyewearCalibrationProfileManagerImpl_getMaxCount_m_1169982381_0 (EyewearCalibrationProfileManagerImpl_t481665654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.EyewearCalibrationProfileManagerImpl::getUsedCount()
extern "C"  int32_t EyewearCalibrationProfileManagerImpl_getUsedCount_m_1543509844_0 (EyewearCalibrationProfileManagerImpl_t481665654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::isProfileUsed(System.Int32)
extern "C"  bool EyewearCalibrationProfileManagerImpl_isProfileUsed_m1467457913_0 (EyewearCalibrationProfileManagerImpl_t481665654_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.EyewearCalibrationProfileManagerImpl::getActiveProfile()
extern "C"  int32_t EyewearCalibrationProfileManagerImpl_getActiveProfile_m230688861_0 (EyewearCalibrationProfileManagerImpl_t481665654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setActiveProfile(System.Int32)
extern "C"  bool EyewearCalibrationProfileManagerImpl_setActiveProfile_m_1061967480_0 (EyewearCalibrationProfileManagerImpl_t481665654_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.EyewearCalibrationProfileManagerImpl::getCameraToEyePose(System.Int32,Vuforia.EyewearDevice/EyeID)
extern "C"  Matrix4x4_t1577636070_0  EyewearCalibrationProfileManagerImpl_getCameraToEyePose_m74572721_0 (EyewearCalibrationProfileManagerImpl_t481665654_0 * __this, int32_t ___profileID, int32_t ___eyeID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.EyewearCalibrationProfileManagerImpl::getEyeProjection(System.Int32,Vuforia.EyewearDevice/EyeID)
extern "C"  Matrix4x4_t1577636070_0  EyewearCalibrationProfileManagerImpl_getEyeProjection_m208247247_0 (EyewearCalibrationProfileManagerImpl_t481665654_0 * __this, int32_t ___profileID, int32_t ___eyeID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setCameraToEyePose(System.Int32,Vuforia.EyewearDevice/EyeID,UnityEngine.Matrix4x4)
extern "C"  bool EyewearCalibrationProfileManagerImpl_setCameraToEyePose_m712505328_0 (EyewearCalibrationProfileManagerImpl_t481665654_0 * __this, int32_t ___profileID, int32_t ___eyeID, Matrix4x4_t1577636070_0  ___projectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setEyeProjection(System.Int32,Vuforia.EyewearDevice/EyeID,UnityEngine.Matrix4x4)
extern "C"  bool EyewearCalibrationProfileManagerImpl_setEyeProjection_m_1332053426_0 (EyewearCalibrationProfileManagerImpl_t481665654_0 * __this, int32_t ___profileID, int32_t ___eyeID, Matrix4x4_t1577636070_0  ___projectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.EyewearCalibrationProfileManagerImpl::getProfileName(System.Int32)
extern "C"  String_t* EyewearCalibrationProfileManagerImpl_getProfileName_m983971478_0 (EyewearCalibrationProfileManagerImpl_t481665654_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setProfileName(System.Int32,System.String)
extern "C"  bool EyewearCalibrationProfileManagerImpl_setProfileName_m822017301_0 (EyewearCalibrationProfileManagerImpl_t481665654_0 * __this, int32_t ___profileID, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::clearProfile(System.Int32)
extern "C"  bool EyewearCalibrationProfileManagerImpl_clearProfile_m_728278813_0 (EyewearCalibrationProfileManagerImpl_t481665654_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.EyewearCalibrationProfileManagerImpl::.ctor()
extern "C"  void EyewearCalibrationProfileManagerImpl__ctor_m581211744_0 (EyewearCalibrationProfileManagerImpl_t481665654_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
