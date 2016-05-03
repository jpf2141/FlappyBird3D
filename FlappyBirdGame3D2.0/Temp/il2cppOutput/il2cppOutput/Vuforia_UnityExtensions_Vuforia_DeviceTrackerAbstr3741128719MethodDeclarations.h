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

// Vuforia.DeviceTrackerAbstractBehaviour
struct DeviceTrackerAbstractBehaviour_t3741128719;
// System.Action
struct Action_t437523947;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action437523947.h"
#include "Vuforia_UnityExtensions_Vuforia_RotationalDeviceTr3521081518.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void Vuforia.DeviceTrackerAbstractBehaviour::Awake()
extern "C"  void DeviceTrackerAbstractBehaviour_Awake_m197758408 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::OnEnable()
extern "C"  void DeviceTrackerAbstractBehaviour_OnEnable_m406205697 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::OnDisable()
extern "C"  void DeviceTrackerAbstractBehaviour_OnDisable_m148411980 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::OnDestroy()
extern "C"  void DeviceTrackerAbstractBehaviour_OnDestroy_m2325944030 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::Update()
extern "C"  void DeviceTrackerAbstractBehaviour_Update_m491610952 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::RegisterTrackerStartedCallback(System.Action)
extern "C"  void DeviceTrackerAbstractBehaviour_RegisterTrackerStartedCallback_m1313154285 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, Action_t437523947 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::UnregisterTrackerStartedCallback(System.Action)
extern "C"  void DeviceTrackerAbstractBehaviour_UnregisterTrackerStartedCallback_m2636694132 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, Action_t437523947 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::RegisterBeforeDevicePoseUpdateCallback(System.Action)
extern "C"  void DeviceTrackerAbstractBehaviour_RegisterBeforeDevicePoseUpdateCallback_m2453169159 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, Action_t437523947 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::UnregisterBeforeDevicePoseUpdateCallback(System.Action)
extern "C"  void DeviceTrackerAbstractBehaviour_UnregisterBeforeDevicePoseUpdateCallback_m1984268942 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, Action_t437523947 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::RegisterDevicePoseUpdatedCallback(System.Action)
extern "C"  void DeviceTrackerAbstractBehaviour_RegisterDevicePoseUpdatedCallback_m808309604 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, Action_t437523947 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::UnregisterDevicePoseUpdatedCallback(System.Action)
extern "C"  void DeviceTrackerAbstractBehaviour_UnregisterDevicePoseUpdatedCallback_m2584114301 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, Action_t437523947 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::StartDeviceTracker()
extern "C"  void DeviceTrackerAbstractBehaviour_StartDeviceTracker_m2170395263 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::StopDeviceTracker()
extern "C"  void DeviceTrackerAbstractBehaviour_StopDeviceTracker_m3672032675 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::InitDeviceTracker()
extern "C"  void DeviceTrackerAbstractBehaviour_InitDeviceTracker_m3642223317 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::ApplySettings()
extern "C"  void DeviceTrackerAbstractBehaviour_ApplySettings_m3149294836 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::OnVuforiaInitialized()
extern "C"  void DeviceTrackerAbstractBehaviour_OnVuforiaInitialized_m2341503344 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::OnVuforiaStarted()
extern "C"  void DeviceTrackerAbstractBehaviour_OnVuforiaStarted_m1456597341 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::OnPause(System.Boolean)
extern "C"  void DeviceTrackerAbstractBehaviour_OnPause_m1574300305 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::Vuforia.IEditorDeviceTrackerBehaviour.SetAutomaticStart(System.Boolean)
extern "C"  void DeviceTrackerAbstractBehaviour_Vuforia_IEditorDeviceTrackerBehaviour_SetAutomaticStart_m3831411274 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, bool ___autoStart, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DeviceTrackerAbstractBehaviour::Vuforia.IEditorDeviceTrackerBehaviour.get_AutomaticStart()
extern "C"  bool DeviceTrackerAbstractBehaviour_Vuforia_IEditorDeviceTrackerBehaviour_get_AutomaticStart_m3658166650 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::Vuforia.IEditorDeviceTrackerBehaviour.SetPosePrediction(System.Boolean)
extern "C"  void DeviceTrackerAbstractBehaviour_Vuforia_IEditorDeviceTrackerBehaviour_SetPosePrediction_m1333589843 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, bool ___posePrediction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DeviceTrackerAbstractBehaviour::Vuforia.IEditorDeviceTrackerBehaviour.get_PosePrediction()
extern "C"  bool DeviceTrackerAbstractBehaviour_Vuforia_IEditorDeviceTrackerBehaviour_get_PosePrediction_m1341983299 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::Vuforia.IEditorDeviceTrackerBehaviour.SetModelCorrectionMode(Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE)
extern "C"  void DeviceTrackerAbstractBehaviour_Vuforia_IEditorDeviceTrackerBehaviour_SetModelCorrectionMode_m1542315126 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE Vuforia.DeviceTrackerAbstractBehaviour::Vuforia.IEditorDeviceTrackerBehaviour.get_ModelCorrectionMode()
extern "C"  int32_t DeviceTrackerAbstractBehaviour_Vuforia_IEditorDeviceTrackerBehaviour_get_ModelCorrectionMode_m1831986996 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::Vuforia.IEditorDeviceTrackerBehaviour.SetModelTransformEnabled(System.Boolean)
extern "C"  void DeviceTrackerAbstractBehaviour_Vuforia_IEditorDeviceTrackerBehaviour_SetModelTransformEnabled_m3819852091 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, bool ___modelTransformEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DeviceTrackerAbstractBehaviour::Vuforia.IEditorDeviceTrackerBehaviour.get_ModelTransformEnabled()
extern "C"  bool DeviceTrackerAbstractBehaviour_Vuforia_IEditorDeviceTrackerBehaviour_get_ModelTransformEnabled_m3281017213 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::Vuforia.IEditorDeviceTrackerBehaviour.SetModelTransform(UnityEngine.Vector3)
extern "C"  void DeviceTrackerAbstractBehaviour_Vuforia_IEditorDeviceTrackerBehaviour_SetModelTransform_m3450961178 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, Vector3_t3525329789  ___pivot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DeviceTrackerAbstractBehaviour::Vuforia.IEditorDeviceTrackerBehaviour.get_ModelTransform()
extern "C"  Vector3_t3525329789  DeviceTrackerAbstractBehaviour_Vuforia_IEditorDeviceTrackerBehaviour_get_ModelTransform_m3079193614 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::.ctor()
extern "C"  void DeviceTrackerAbstractBehaviour__ctor_m4255120485 (DeviceTrackerAbstractBehaviour_t3741128719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerAbstractBehaviour::.cctor()
extern "C"  void DeviceTrackerAbstractBehaviour__cctor_m2577619944 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
