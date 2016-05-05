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
struct PlayModeEyewearUserCalibratorImpl_t1882503483;
// Vuforia.EyewearDevice/EyewearCalibrationReading[]
struct EyewearCalibrationReadingU5BU5D_t3327693703;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// System.Boolean Vuforia.PlayModeEyewearUserCalibratorImpl::init(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  bool PlayModeEyewearUserCalibratorImpl_init_m3068360231 (PlayModeEyewearUserCalibratorImpl_t1882503483 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.PlayModeEyewearUserCalibratorImpl::getMinScaleHint()
extern "C"  float PlayModeEyewearUserCalibratorImpl_getMinScaleHint_m3175425826 (PlayModeEyewearUserCalibratorImpl_t1882503483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.PlayModeEyewearUserCalibratorImpl::getMaxScaleHint()
extern "C"  float PlayModeEyewearUserCalibratorImpl_getMaxScaleHint_m2518509776 (PlayModeEyewearUserCalibratorImpl_t1882503483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearUserCalibratorImpl::isStereoStretched()
extern "C"  bool PlayModeEyewearUserCalibratorImpl_isStereoStretched_m316823445 (PlayModeEyewearUserCalibratorImpl_t1882503483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearUserCalibratorImpl::getProjectionMatrix(Vuforia.EyewearDevice/EyewearCalibrationReading[],UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C"  bool PlayModeEyewearUserCalibratorImpl_getProjectionMatrix_m1028738170 (PlayModeEyewearUserCalibratorImpl_t1882503483 * __this, EyewearCalibrationReadingU5BU5D_t3327693703* ___readings, Matrix4x4_t277289660 * ___cameraToEyeMatrix, Matrix4x4_t277289660 * ___projectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PlayModeEyewearUserCalibratorImpl::.ctor()
extern "C"  void PlayModeEyewearUserCalibratorImpl__ctor_m3227869539 (PlayModeEyewearUserCalibratorImpl_t1882503483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
