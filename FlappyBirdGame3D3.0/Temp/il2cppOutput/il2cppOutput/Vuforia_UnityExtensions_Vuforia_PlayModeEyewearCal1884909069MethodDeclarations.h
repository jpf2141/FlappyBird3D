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

// Vuforia.PlayModeEyewearCalibrationProfileManagerImpl
struct PlayModeEyewearCalibrationProfileManagerImpl_t1884909069_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "Vuforia_UnityExtensions_Vuforia_EyewearDevice_EyeI_920168437.h"

// System.Int32 Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::getMaxCount()
extern "C"  int32_t PlayModeEyewearCalibrationProfileManagerImpl_getMaxCount_m_1168590628_0 (PlayModeEyewearCalibrationProfileManagerImpl_t1884909069_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::getUsedCount()
extern "C"  int32_t PlayModeEyewearCalibrationProfileManagerImpl_getUsedCount_m_1500365501_0 (PlayModeEyewearCalibrationProfileManagerImpl_t1884909069_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::isProfileUsed(System.Int32)
extern "C"  bool PlayModeEyewearCalibrationProfileManagerImpl_isProfileUsed_m690044994_0 (PlayModeEyewearCalibrationProfileManagerImpl_t1884909069_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::getActiveProfile()
extern "C"  int32_t PlayModeEyewearCalibrationProfileManagerImpl_getActiveProfile_m525875572_0 (PlayModeEyewearCalibrationProfileManagerImpl_t1884909069_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::setActiveProfile(System.Int32)
extern "C"  bool PlayModeEyewearCalibrationProfileManagerImpl_setActiveProfile_m1788389919_0 (PlayModeEyewearCalibrationProfileManagerImpl_t1884909069_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::getCameraToEyePose(System.Int32,Vuforia.EyewearDevice/EyeID)
extern "C"  Matrix4x4_t1577636070_0  PlayModeEyewearCalibrationProfileManagerImpl_getCameraToEyePose_m519571720_0 (PlayModeEyewearCalibrationProfileManagerImpl_t1884909069_0 * __this, int32_t ___profileID, int32_t ___eyeID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::getEyeProjection(System.Int32,Vuforia.EyewearDevice/EyeID)
extern "C"  Matrix4x4_t1577636070_0  PlayModeEyewearCalibrationProfileManagerImpl_getEyeProjection_m1545021670_0 (PlayModeEyewearCalibrationProfileManagerImpl_t1884909069_0 * __this, int32_t ___profileID, int32_t ___eyeID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::setCameraToEyePose(System.Int32,Vuforia.EyewearDevice/EyeID,UnityEngine.Matrix4x4)
extern "C"  bool PlayModeEyewearCalibrationProfileManagerImpl_setCameraToEyePose_m1769712391_0 (PlayModeEyewearCalibrationProfileManagerImpl_t1884909069_0 * __this, int32_t ___profileID, int32_t ___eyeID, Matrix4x4_t1577636070_0  ___projectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::setEyeProjection(System.Int32,Vuforia.EyewearDevice/EyeID,UnityEngine.Matrix4x4)
extern "C"  bool PlayModeEyewearCalibrationProfileManagerImpl_setEyeProjection_m_1907488987_0 (PlayModeEyewearCalibrationProfileManagerImpl_t1884909069_0 * __this, int32_t ___profileID, int32_t ___eyeID, Matrix4x4_t1577636070_0  ___projectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::getProfileName(System.Int32)
extern "C"  String_t* PlayModeEyewearCalibrationProfileManagerImpl_getProfileName_m1703636973_0 (PlayModeEyewearCalibrationProfileManagerImpl_t1884909069_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::setProfileName(System.Int32,System.String)
extern "C"  bool PlayModeEyewearCalibrationProfileManagerImpl_setProfileName_m_626207956_0 (PlayModeEyewearCalibrationProfileManagerImpl_t1884909069_0 * __this, int32_t ___profileID, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::clearProfile(System.Int32)
extern "C"  bool PlayModeEyewearCalibrationProfileManagerImpl_clearProfile_m_1723187974_0 (PlayModeEyewearCalibrationProfileManagerImpl_t1884909069_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::.ctor()
extern "C"  void PlayModeEyewearCalibrationProfileManagerImpl__ctor_m1798807977_0 (PlayModeEyewearCalibrationProfileManagerImpl_t1884909069_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
