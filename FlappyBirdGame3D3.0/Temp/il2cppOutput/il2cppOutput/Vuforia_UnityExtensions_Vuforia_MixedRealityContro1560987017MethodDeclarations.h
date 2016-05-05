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

// Vuforia.MixedRealityController
struct MixedRealityController_t1560987017_0;
// Vuforia.IViewerParameters
struct IViewerParameters_t904938221_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.Camera
struct Camera_t814710830_0;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_MixedRealityContro1349207689.h"
#include "Vuforia_UnityExtensions_Vuforia_DigitalEyewearAbs_1324354270.h"
#include "Vuforia_UnityExtensions_Vuforia_RotationalDeviceT_1440122816.h"

// Vuforia.MixedRealityController Vuforia.MixedRealityController::get_Instance()
extern "C"  MixedRealityController_t1560987017_0 * MixedRealityController_get_Instance_m_1786385293_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetMode(Vuforia.MixedRealityController/Mode)
extern "C"  void MixedRealityController_SetMode_m1421074253_0 (MixedRealityController_t1560987017_0 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetViewerParameters(Vuforia.IViewerParameters)
extern "C"  void MixedRealityController_SetViewerParameters_m_603545072_0 (MixedRealityController_t1560987017_0 * __this, Object_t * ___viewerParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::ConfigureForDifferentStereoFramework(Vuforia.DigitalEyewearAbstractBehaviour/StereoFramework,UnityEngine.Transform,UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void MixedRealityController_ConfigureForDifferentStereoFramework_m_930837228_0 (MixedRealityController_t1560987017_0 * __this, int32_t ___stereoFramework, Transform_t1584899523_0 * ___centralAnchorPoint, Camera_t814710830_0 * ___leftCamera, Camera_t814710830_0 * ___RightCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MixedRealityController::get_AutoStopCameraIfNotRequired()
extern "C"  bool MixedRealityController_get_AutoStopCameraIfNotRequired_m_1430776657_0 (MixedRealityController_t1560987017_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::set_AutoStopCameraIfNotRequired(System.Boolean)
extern "C"  void MixedRealityController_set_AutoStopCameraIfNotRequired_m416696164_0 (MixedRealityController_t1560987017_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::ResolveMembers()
extern "C"  void MixedRealityController_ResolveMembers_m137238660_0 (MixedRealityController_t1560987017_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetVideoBackgroundEnabled(System.Boolean)
extern "C"  void MixedRealityController_SetVideoBackgroundEnabled_m_117975492_0 (MixedRealityController_t1560987017_0 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetViewer(System.Boolean)
extern "C"  void MixedRealityController_SetViewer_m1295097174_0 (MixedRealityController_t1560987017_0 * __this, bool ___viewerPresent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetTargetFPS(System.Boolean)
extern "C"  void MixedRealityController_SetTargetFPS_m_839509948_0 (MixedRealityController_t1560987017_0 * __this, bool ___isVR, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::StopDeviceTracker()
extern "C"  void MixedRealityController_StopDeviceTracker_m1162371883_0 (MixedRealityController_t1560987017_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::StartDeviceTracker(System.Boolean,Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE)
extern "C"  void MixedRealityController_StartDeviceTracker_m_1450854002_0 (MixedRealityController_t1560987017_0 * __this, bool ___videoBackground, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::StopCameraAndTrackersIfNotRequired()
extern "C"  void MixedRealityController_StopCameraAndTrackersIfNotRequired_m532823489_0 (MixedRealityController_t1560987017_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::StartCameraAndTrackersIfStopped()
extern "C"  void MixedRealityController_StartCameraAndTrackersIfStopped_m1782390000_0 (MixedRealityController_t1560987017_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetHandheldAR()
extern "C"  void MixedRealityController_SetHandheldAR_m_1529824094_0 (MixedRealityController_t1560987017_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetRotationalHandheldAR()
extern "C"  void MixedRealityController_SetRotationalHandheldAR_m1405079659_0 (MixedRealityController_t1560987017_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetHandheldVR()
extern "C"  void MixedRealityController_SetHandheldVR_m_1529198483_0 (MixedRealityController_t1560987017_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetViewerAR()
extern "C"  void MixedRealityController_SetViewerAR_m_16483696_0 (MixedRealityController_t1560987017_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetRotationalViewerAR()
extern "C"  void MixedRealityController_SetRotationalViewerAR_m554167449_0 (MixedRealityController_t1560987017_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetViewerVR()
extern "C"  void MixedRealityController_SetViewerVR_m_15858085_0 (MixedRealityController_t1560987017_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::.ctor()
extern "C"  void MixedRealityController__ctor_m530818541_0 (MixedRealityController_t1560987017_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::.cctor()
extern "C"  void MixedRealityController__cctor_m_1206590624_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
