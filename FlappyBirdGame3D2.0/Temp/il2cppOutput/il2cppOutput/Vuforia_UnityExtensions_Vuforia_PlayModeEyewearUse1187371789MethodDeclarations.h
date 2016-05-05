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

// Vuforia.PlayModeEyewearUserCalibratorImpl
struct PlayModeEyewearUserCalibratorImpl_t1187371789_0;
// Vuforia.EyewearDevice/EyewearCalibrationReading[]
struct EyewearCalibrationReadingU5BU5D_t_2039083725_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"

// System.Boolean Vuforia.PlayModeEyewearUserCalibratorImpl::init(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  bool PlayModeEyewearUserCalibratorImpl_init_m_1226607065_0 (PlayModeEyewearUserCalibratorImpl_t1187371789_0 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.PlayModeEyewearUserCalibratorImpl::getMinScaleHint()
extern "C"  float PlayModeEyewearUserCalibratorImpl_getMinScaleHint_m_1119541470_0 (PlayModeEyewearUserCalibratorImpl_t1187371789_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.PlayModeEyewearUserCalibratorImpl::getMaxScaleHint()
extern "C"  float PlayModeEyewearUserCalibratorImpl_getMaxScaleHint_m_1776457520_0 (PlayModeEyewearUserCalibratorImpl_t1187371789_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearUserCalibratorImpl::isStereoStretched()
extern "C"  bool PlayModeEyewearUserCalibratorImpl_isStereoStretched_m316823445_0 (PlayModeEyewearUserCalibratorImpl_t1187371789_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearUserCalibratorImpl::getProjectionMatrix(Vuforia.EyewearDevice/EyewearCalibrationReading[],UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C"  bool PlayModeEyewearUserCalibratorImpl_getProjectionMatrix_m1028738170_0 (PlayModeEyewearUserCalibratorImpl_t1187371789_0 * __this, EyewearCalibrationReadingU5BU5D_t_2039083725_0* ___readings, Matrix4x4_t1577636070_0 * ___cameraToEyeMatrix, Matrix4x4_t1577636070_0 * ___projectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PlayModeEyewearUserCalibratorImpl::.ctor()
extern "C"  void PlayModeEyewearUserCalibratorImpl__ctor_m_1067097757_0 (PlayModeEyewearUserCalibratorImpl_t1187371789_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
