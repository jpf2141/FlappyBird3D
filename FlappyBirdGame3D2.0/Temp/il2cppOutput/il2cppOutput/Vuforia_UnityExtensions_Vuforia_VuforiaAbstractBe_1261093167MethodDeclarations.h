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

// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t_1261093167_0;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t516166480_0;
// System.String
struct String_t;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t962847284_0;
// System.Action
struct Action_t2132293834_0;
// System.Action`1<System.Boolean>
struct Action_1_t_1180387379_0;
// Vuforia.ITrackerEventHandler
struct ITrackerEventHandler_t2007049143_0;
// Vuforia.IVideoBackgroundEventHandler
struct IVideoBackgroundEventHandler_t1221936136_0;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_t1032042208_0;
// UnityEngine.Camera
struct Camera_t814710830_0;
// Vuforia.IUnityPlayer
struct IUnityPlayer_t249103045_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBe_1501798036.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_V_2015634094.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Came_1518894406.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1219597595.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Came_1036780098.h"

// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaAbstractBehaviour::get_WorldCenterModeSetting()
extern "C"  int32_t VuforiaAbstractBehaviour_get_WorldCenterModeSetting_m1104129865_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableBehaviour Vuforia.VuforiaAbstractBehaviour::get_WorldCenter()
extern "C"  TrackableBehaviour_t516166480_0 * VuforiaAbstractBehaviour_get_WorldCenter_m884234570_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::get_VideoBackGroundMirrored()
extern "C"  int32_t VuforiaAbstractBehaviour_get_VideoBackGroundMirrored_m2103405996_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaAbstractBehaviour::get_CameraDeviceMode()
extern "C"  int32_t VuforiaAbstractBehaviour_get_CameraDeviceMode_m_112474829_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_HasStarted()
extern "C"  bool VuforiaAbstractBehaviour_get_HasStarted_m2071756033_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaAbstractBehaviour::get_AppLicenseKey()
extern "C"  String_t* VuforiaAbstractBehaviour_get_AppLicenseKey_m_1034745418_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C"  void VuforiaAbstractBehaviour_RegisterVuforiaInitErrorCallback_m_1651328459_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Action_1_t962847284_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C"  void VuforiaAbstractBehaviour_UnregisterVuforiaInitErrorCallback_m_1473757124_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Action_1_t962847284_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaInitializedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_RegisterVuforiaInitializedCallback_m_1600677692_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaInitializedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_UnregisterVuforiaInitializedCallback_m1078917835_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaStartedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_RegisterVuforiaStartedCallback_m_40037129_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaStartedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_UnregisterVuforiaStartedCallback_m1944883838_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterTrackablesUpdatedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_RegisterTrackablesUpdatedCallback_m1165084811_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterTrackablesUpdatedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_UnregisterTrackablesUpdatedCallback_m835881380_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C"  void VuforiaAbstractBehaviour_RegisterOnPauseCallback_m1294751575_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Action_1_t_1180387379_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C"  void VuforiaAbstractBehaviour_UnregisterOnPauseCallback_m_336924816_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Action_1_t_1180387379_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterBackgroundTextureChangedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_RegisterBackgroundTextureChangedCallback_m_1759517393_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterBackgroundTextureChangedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_UnregisterBackgroundTextureChangedCallback_m_426678794_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C"  void VuforiaAbstractBehaviour_RegisterTrackerEventHandler_m_800635587_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Object_t * ___trackerEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::UnregisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C"  bool VuforiaAbstractBehaviour_UnregisterTrackerEventHandler_m160386898_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Object_t * ___trackerEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C"  void VuforiaAbstractBehaviour_RegisterVideoBgEventHandler_m867081460_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Object_t * ___videoBgEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::UnregisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C"  bool VuforiaAbstractBehaviour_UnregisterVideoBgEventHandler_m2062139913_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Object_t * ___videoBgEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetWorldCenterMode(Vuforia.VuforiaAbstractBehaviour/WorldCenterMode)
extern "C"  void VuforiaAbstractBehaviour_SetWorldCenterMode_m_268102745_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetWorldCenter(Vuforia.TrackableBehaviour)
extern "C"  void VuforiaAbstractBehaviour_SetWorldCenter_m_2146957312_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, TrackableBehaviour_t516166480_0 * ___trackable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetAppLicenseKey(System.String)
extern "C"  void VuforiaAbstractBehaviour_SetAppLicenseKey_m728425190_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.VuforiaAbstractBehaviour::GetVideoBackgroundRectInViewPort()
extern "C"  Rect_t_981940947_0  VuforiaAbstractBehaviour_GetVideoBackgroundRectInViewPort_m_835689407_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.VuforiaAbstractBehaviour::GetSurfaceOrientation()
extern "C"  int32_t VuforiaAbstractBehaviour_GetSurfaceOrientation_m_487867754_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateState(System.Boolean,System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_UpdateState_m399362363_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, bool ___forceUpdate, bool ___reapplyOldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_ApplyCorrectedProjectionMatrix_m1765308941_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Matrix4x4_t1577636070_0  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ICameraConfiguration Vuforia.VuforiaAbstractBehaviour::get_CameraConfiguration()
extern "C"  Object_t * VuforiaAbstractBehaviour_get_CameraConfiguration_m_1122631772_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_CameraConfiguration(Vuforia.ICameraConfiguration)
extern "C"  void VuforiaAbstractBehaviour_set_CameraConfiguration_m911453027_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::InitCameraConfiguration()
extern "C"  void VuforiaAbstractBehaviour_InitCameraConfiguration_m146900964_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ConfigureVideoBackground()
extern "C"  void VuforiaAbstractBehaviour_ConfigureVideoBackground_m568953922_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ResetBackgroundPlane(System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_ResetBackgroundPlane_m1971223925_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, bool ___disable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterRenderOnUpdateCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_RegisterRenderOnUpdateCallback_m_1847506760_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterRenderOnUpdateCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_UnregisterRenderOnUpdateCallback_m137414207_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::IsValidPrimaryCamera(UnityEngine.Camera)
extern "C"  bool VuforiaAbstractBehaviour_IsValidPrimaryCamera_m_1708494390_0 (Object_t * __this /* static, unused */, Camera_t814710830_0 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::IsValidSecondaryCamera(UnityEngine.Camera)
extern "C"  bool VuforiaAbstractBehaviour_IsValidSecondaryCamera_m1640168252_0 (Object_t * __this /* static, unused */, Camera_t814710830_0 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Awake()
extern "C"  void VuforiaAbstractBehaviour_Awake_m_585644472_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Start()
extern "C"  void VuforiaAbstractBehaviour_Start_m_1876111899_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnEnable()
extern "C"  void VuforiaAbstractBehaviour_OnEnable_m903294081_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnApplicationPause(System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_OnApplicationPause_m665307899_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnDisable()
extern "C"  void VuforiaAbstractBehaviour_OnDisable_m_1621717300_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnDestroy()
extern "C"  void VuforiaAbstractBehaviour_OnDestroy_m555814750_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetUnityPlayerImplementation(Vuforia.IUnityPlayer)
extern "C"  void VuforiaAbstractBehaviour_SetUnityPlayerImplementation_m_1976052180_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, Object_t * ___implementation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateStatePrivate(System.Boolean,System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_UpdateStatePrivate_m1767959500_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, bool ___forceUpdate, bool ___reapplyOldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::StartVuforia(System.Boolean,System.Boolean)
extern "C"  bool VuforiaAbstractBehaviour_StartVuforia_m1937248597_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, bool ___startObjectTracker, bool ___startMarkerTracker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::StopVuforia()
extern "C"  bool VuforiaAbstractBehaviour_StopVuforia_m1542637041_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::DisableCameraIfNotNeeded()
extern "C"  void VuforiaAbstractBehaviour_DisableCameraIfNotNeeded_m1167231645_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::DeinitRequestedTrackers()
extern "C"  void VuforiaAbstractBehaviour_DeinitRequestedTrackers_m_777803717_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnVideoBackgroundConfigChanged()
extern "C"  void VuforiaAbstractBehaviour_OnVideoBackgroundConfigChanged_m318572871_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::EnableObjectRenderer(UnityEngine.GameObject,System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_EnableObjectRenderer_m429461377_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, GameObject_t_184308134_0 * ___go, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ApplyMissedProjectionMatrices()
extern "C"  void VuforiaAbstractBehaviour_ApplyMissedProjectionMatrices_m_777172011_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetCameraDeviceMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C"  void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetCameraDeviceMode_m_2065639246_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetMaximumSimultaneousImageTargets()
extern "C"  int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetMaximumSimultaneousImageTargets_m_1872277984_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetMaximumSimultaneousImageTargets(System.Int32)
extern "C"  void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetMaximumSimultaneousImageTargets_m_900801639_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetMaximumSimultaneousObjectTargets()
extern "C"  int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetMaximumSimultaneousObjectTargets_m1892336716_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetMaximumSimultaneousObjectTargets(System.Int32)
extern "C"  void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetMaximumSimultaneousObjectTargets_m779838581_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetDelayedLoadingObjectTargets()
extern "C"  bool VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetDelayedLoadingObjectTargets_m_2055984083_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetUseDelayedLoadingObjectTargets(System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetUseDelayedLoadingObjectTargets_m1295935989_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, bool ___useDelayedLoading, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetCameraDirection()
extern "C"  int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetCameraDirection_m362203957_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetCameraDirection(Vuforia.CameraDevice/CameraDirection)
extern "C"  void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetCameraDirection_m_1653596306_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, int32_t ___cameraDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetMirrorVideoBackground()
extern "C"  int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetMirrorVideoBackground_m_458408687_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetMirrorVideoBackground(Vuforia.VuforiaRenderer/VideoBackgroundReflection)
extern "C"  void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetMirrorVideoBackground_m1356129796_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, int32_t ___reflection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::.ctor()
extern "C"  void VuforiaAbstractBehaviour__ctor_m_823249691_0 (VuforiaAbstractBehaviour_t_1261093167_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
