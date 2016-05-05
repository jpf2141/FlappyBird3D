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

// Vuforia.EyewearUserCalibratorImpl
struct EyewearUserCalibratorImpl_t_270643644_0;
// Vuforia.EyewearDevice/EyewearCalibrationReading[]
struct EyewearCalibrationReadingU5BU5D_t_2039083725_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"

// System.Boolean Vuforia.EyewearUserCalibratorImpl::init(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  bool EyewearUserCalibratorImpl_init_m_489913456_0 (EyewearUserCalibratorImpl_t_270643644_0 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.EyewearUserCalibratorImpl::getMinScaleHint()
extern "C"  float EyewearUserCalibratorImpl_getMinScaleHint_m_962294901_0 (EyewearUserCalibratorImpl_t_270643644_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.EyewearUserCalibratorImpl::getMaxScaleHint()
extern "C"  float EyewearUserCalibratorImpl_getMaxScaleHint_m_1619210951_0 (EyewearUserCalibratorImpl_t_270643644_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearUserCalibratorImpl::isStereoStretched()
extern "C"  bool EyewearUserCalibratorImpl_isStereoStretched_m_409285698_0 (EyewearUserCalibratorImpl_t_270643644_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearUserCalibratorImpl::getProjectionMatrix(Vuforia.EyewearDevice/EyewearCalibrationReading[],UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C"  bool EyewearUserCalibratorImpl_getProjectionMatrix_m_190150287_0 (EyewearUserCalibratorImpl_t_270643644_0 * __this, EyewearCalibrationReadingU5BU5D_t_2039083725_0* ___readings, Matrix4x4_t1577636070_0 * ___cameraToEyeMatrix, Matrix4x4_t1577636070_0 * ___projectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.EyewearUserCalibratorImpl::.ctor()
extern "C"  void EyewearUserCalibratorImpl__ctor_m1906456844_0 (EyewearUserCalibratorImpl_t_270643644_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
