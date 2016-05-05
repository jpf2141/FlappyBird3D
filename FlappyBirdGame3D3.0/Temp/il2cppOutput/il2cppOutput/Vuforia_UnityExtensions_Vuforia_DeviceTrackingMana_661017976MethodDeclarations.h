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

// Vuforia.DeviceTrackingManager
struct DeviceTrackingManager_t_661017976_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// Vuforia.VuforiaManagerImpl/TrackableResultData[]
struct TrackableResultDataU5BU5D_t_1279381598_0;
// System.Action
struct Action_t2132293834_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1014981767.h"

// System.Void Vuforia.DeviceTrackingManager::RecenterPose(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void DeviceTrackingManager_RecenterPose_m_233641029_0 (DeviceTrackingManager_t_661017976_0 * __this, Transform_t1584899523_0 * ___cameraTransform, Vector3_t_725341337_0  ___modelCorrectionTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::UpdateCamera(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/TrackableResultData[],System.Int32)
extern "C"  void DeviceTrackingManager_UpdateCamera_m_276892582_0 (DeviceTrackingManager_t_661017976_0 * __this, Transform_t1584899523_0 * ___cameraTransform, TrackableResultDataU5BU5D_t_1279381598_0* ___trackableResultDataArray, int32_t ___deviceTrackableID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::RegisterBeforeDevicePoseUpdateCallback(System.Action)
extern "C"  void DeviceTrackingManager_RegisterBeforeDevicePoseUpdateCallback_m_1466594774_0 (DeviceTrackingManager_t_661017976_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::UnregisterBeforeDevicePoseUpdateCallback(System.Action)
extern "C"  void DeviceTrackingManager_UnregisterBeforeDevicePoseUpdateCallback_m1777447921_0 (DeviceTrackingManager_t_661017976_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::RegisterDevicePoseUpdatedCallback(System.Action)
extern "C"  void DeviceTrackingManager_RegisterDevicePoseUpdatedCallback_m1646535521_0 (DeviceTrackingManager_t_661017976_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::UnregisterDevicePoseUpdatedCallback(System.Action)
extern "C"  void DeviceTrackingManager_UnregisterDevicePoseUpdatedCallback_m665368890_0 (DeviceTrackingManager_t_661017976_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::PositionCamera(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/PoseData)
extern "C"  void DeviceTrackingManager_PositionCamera_m527299058_0 (DeviceTrackingManager_t_661017976_0 * __this, Vector3_t_725341337_0  ___localRefPosition, Quaternion_t1989680039_0  ___localRefRotation, Transform_t1584899523_0 * ___cameraTransform, PoseData_t1014981767_0  ___camToTargetPose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::.ctor()
extern "C"  void DeviceTrackingManager__ctor_m_1193830456_0 (DeviceTrackingManager_t_661017976_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
