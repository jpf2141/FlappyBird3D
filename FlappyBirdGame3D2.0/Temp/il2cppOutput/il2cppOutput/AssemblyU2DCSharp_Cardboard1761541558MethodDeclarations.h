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

// Cardboard
struct Cardboard_t1761541558;
// Cardboard/StereoScreenChangeDelegate
struct StereoScreenChangeDelegate_t4234461465;
// System.Action
struct Action_t437523947;
// StereoController
struct StereoController_t1637909972;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;
// CardboardProfile
struct CardboardProfile_t3514264339;
// Pose3D
struct Pose3D_t2396367586;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Cardboard_StereoScreenChangeDele4234461465.h"
#include "System_Core_System_Action437523947.h"
#include "AssemblyU2DCSharp_Cardboard_DistortionCorrectionMe3847017660.h"
#include "AssemblyU2DCSharp_Cardboard_BackButtonModes756131735.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"
#include "AssemblyU2DCSharp_Cardboard_Eye70161.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "AssemblyU2DCSharp_Cardboard_Distortion435440829.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void Cardboard::.ctor()
extern "C"  void Cardboard__ctor_m2464097397 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::.cctor()
extern "C"  void Cardboard__cctor_m2890479064 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::add_OnStereoScreenChanged(Cardboard/StereoScreenChangeDelegate)
extern "C"  void Cardboard_add_OnStereoScreenChanged_m2418113684 (Cardboard_t1761541558 * __this, StereoScreenChangeDelegate_t4234461465 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::remove_OnStereoScreenChanged(Cardboard/StereoScreenChangeDelegate)
extern "C"  void Cardboard_remove_OnStereoScreenChanged_m2385091411 (Cardboard_t1761541558 * __this, StereoScreenChangeDelegate_t4234461465 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::add_OnTrigger(System.Action)
extern "C"  void Cardboard_add_OnTrigger_m3118006959 (Cardboard_t1761541558 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::remove_OnTrigger(System.Action)
extern "C"  void Cardboard_remove_OnTrigger_m1014970448 (Cardboard_t1761541558 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::add_OnTilt(System.Action)
extern "C"  void Cardboard_add_OnTilt_m2995719252 (Cardboard_t1761541558 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::remove_OnTilt(System.Action)
extern "C"  void Cardboard_remove_OnTilt_m3749225043 (Cardboard_t1761541558 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::add_OnProfileChange(System.Action)
extern "C"  void Cardboard_add_OnProfileChange_m4226599758 (Cardboard_t1761541558 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::remove_OnProfileChange(System.Action)
extern "C"  void Cardboard_remove_OnProfileChange_m1495434287 (Cardboard_t1761541558 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::add_OnBackButton(System.Action)
extern "C"  void Cardboard_add_OnBackButton_m3718270168 (Cardboard_t1761541558 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::remove_OnBackButton(System.Action)
extern "C"  void Cardboard_remove_OnBackButton_m2845517719 (Cardboard_t1761541558 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Cardboard Cardboard::get_SDK()
extern "C"  Cardboard_t1761541558 * Cardboard_get_SDK_m2351368065 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::Create()
extern "C"  void Cardboard_Create_m1302291627 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StereoController Cardboard::get_Controller()
extern "C"  StereoController_t1637909972 * Cardboard_get_Controller_m2590536075 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_UILayerEnabled()
extern "C"  bool Cardboard_get_UILayerEnabled_m2111956616 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_UILayerEnabled(System.Boolean)
extern "C"  void Cardboard_set_UILayerEnabled_m274946471 (Cardboard_t1761541558 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_VRModeEnabled()
extern "C"  bool Cardboard_get_VRModeEnabled_m3135073984 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_VRModeEnabled(System.Boolean)
extern "C"  void Cardboard_set_VRModeEnabled_m3570037647 (Cardboard_t1761541558 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Cardboard/DistortionCorrectionMethod Cardboard::get_DistortionCorrection()
extern "C"  int32_t Cardboard_get_DistortionCorrection_m4255738667 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_DistortionCorrection(Cardboard/DistortionCorrectionMethod)
extern "C"  void Cardboard_set_DistortionCorrection_m1636220850 (Cardboard_t1761541558 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_EnableAlignmentMarker()
extern "C"  bool Cardboard_get_EnableAlignmentMarker_m3369568216 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_EnableAlignmentMarker(System.Boolean)
extern "C"  void Cardboard_set_EnableAlignmentMarker_m2167270055 (Cardboard_t1761541558 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_EnableSettingsButton()
extern "C"  bool Cardboard_get_EnableSettingsButton_m4037027740 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_EnableSettingsButton(System.Boolean)
extern "C"  void Cardboard_set_EnableSettingsButton_m3000158651 (Cardboard_t1761541558 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Cardboard/BackButtonModes Cardboard::get_BackButtonMode()
extern "C"  int32_t Cardboard_get_BackButtonMode_m3304186687 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_BackButtonMode(Cardboard/BackButtonModes)
extern "C"  void Cardboard_set_BackButtonMode_m3600482956 (Cardboard_t1761541558 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Cardboard::get_NeckModelScale()
extern "C"  float Cardboard_get_NeckModelScale_m1927189132 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_NeckModelScale(System.Single)
extern "C"  void Cardboard_set_NeckModelScale_m200320991 (Cardboard_t1761541558 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_AutoDriftCorrection()
extern "C"  bool Cardboard_get_AutoDriftCorrection_m1979577814 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_AutoDriftCorrection(System.Boolean)
extern "C"  void Cardboard_set_AutoDriftCorrection_m249494053 (Cardboard_t1761541558 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_ElectronicDisplayStabilization()
extern "C"  bool Cardboard_get_ElectronicDisplayStabilization_m3360434909 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_ElectronicDisplayStabilization(System.Boolean)
extern "C"  void Cardboard_set_ElectronicDisplayStabilization_m1910805820 (Cardboard_t1761541558 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_NativeDistortionCorrectionSupported()
extern "C"  bool Cardboard_get_NativeDistortionCorrectionSupported_m2392853210 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_NativeDistortionCorrectionSupported(System.Boolean)
extern "C"  void Cardboard_set_NativeDistortionCorrectionSupported_m3211806761 (Cardboard_t1761541558 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_NativeUILayerSupported()
extern "C"  bool Cardboard_get_NativeUILayerSupported_m600581484 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_NativeUILayerSupported(System.Boolean)
extern "C"  void Cardboard_set_NativeUILayerSupported_m3168899467 (Cardboard_t1761541558 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Cardboard::get_StereoScreenScale()
extern "C"  float Cardboard_get_StereoScreenScale_m1166541980 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_StereoScreenScale(System.Single)
extern "C"  void Cardboard_set_StereoScreenScale_m4238908751 (Cardboard_t1761541558 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Cardboard::get_StereoScreen()
extern "C"  RenderTexture_t12905170 * Cardboard_get_StereoScreen_m4232513943 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_StereoScreen(UnityEngine.RenderTexture)
extern "C"  void Cardboard_set_StereoScreen_m3242067188 (Cardboard_t1761541558 * __this, RenderTexture_t12905170 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile Cardboard::get_Profile()
extern "C"  CardboardProfile_t3514264339 * Cardboard_get_Profile_m1072312029 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D Cardboard::get_HeadPose()
extern "C"  Pose3D_t2396367586 * Cardboard_get_HeadPose_m2115147790 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D Cardboard::EyePose(Cardboard/Eye)
extern "C"  Pose3D_t2396367586 * Cardboard_EyePose_m3059382698 (Cardboard_t1761541558 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Cardboard::Projection(Cardboard/Eye,Cardboard/Distortion)
extern "C"  Matrix4x4_t277289660  Cardboard_Projection_m1655400281 (Cardboard_t1761541558 * __this, int32_t ___eye, int32_t ___distortion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Cardboard::Viewport(Cardboard/Eye,Cardboard/Distortion)
extern "C"  Rect_t1525428817  Cardboard_Viewport_m2018841897 (Cardboard_t1761541558 * __this, int32_t ___eye, int32_t ___distortion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Cardboard::get_ComfortableViewingRange()
extern "C"  Vector2_t3525329788  Cardboard_get_ComfortableViewingRange_m1310226859 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::InitDevice()
extern "C"  void Cardboard_InitDevice_m2887656885 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::Awake()
extern "C"  void Cardboard_Awake_m2701702616 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::Start()
extern "C"  void Cardboard_Start_m1411235189 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::AddCardboardCamera()
extern "C"  void Cardboard_AddCardboardCamera_m1554420969 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_Triggered()
extern "C"  bool Cardboard_get_Triggered_m4275418229 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_Triggered(System.Boolean)
extern "C"  void Cardboard_set_Triggered_m552436868 (Cardboard_t1761541558 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_Tilted()
extern "C"  bool Cardboard_get_Tilted_m1858204256 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_Tilted(System.Boolean)
extern "C"  void Cardboard_set_Tilted_m1672475519 (Cardboard_t1761541558 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_ProfileChanged()
extern "C"  bool Cardboard_get_ProfileChanged_m2950552655 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_ProfileChanged(System.Boolean)
extern "C"  void Cardboard_set_ProfileChanged_m2237540142 (Cardboard_t1761541558 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_BackButtonPressed()
extern "C"  bool Cardboard_get_BackButtonPressed_m2140205447 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_BackButtonPressed(System.Boolean)
extern "C"  void Cardboard_set_BackButtonPressed_m1139974678 (Cardboard_t1761541558 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::UpdateState()
extern "C"  void Cardboard_UpdateState_m2941178715 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::DispatchEvents()
extern "C"  void Cardboard_DispatchEvents_m365236770 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::PostRender(UnityEngine.RenderTexture)
extern "C"  void Cardboard_PostRender_m4051426879 (Cardboard_t1761541558 * __this, RenderTexture_t12905170 * ___stereoScreen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::Recenter()
extern "C"  void Cardboard_Recenter_m649500023 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::ShowSettingsDialog()
extern "C"  void Cardboard_ShowSettingsDialog_m1001626455 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnEnable()
extern "C"  void Cardboard_OnEnable_m416109297 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnDisable()
extern "C"  void Cardboard_OnDisable_m455423580 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnApplicationPause(System.Boolean)
extern "C"  void Cardboard_OnApplicationPause_m153985387 (Cardboard_t1761541558 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnApplicationFocus(System.Boolean)
extern "C"  void Cardboard_OnApplicationFocus_m2994785357 (Cardboard_t1761541558 * __this, bool ___focus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnLevelWasLoaded(System.Int32)
extern "C"  void Cardboard_OnLevelWasLoaded_m4101611817 (Cardboard_t1761541558 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnApplicationQuit()
extern "C"  void Cardboard_OnApplicationQuit_m2553514611 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnDestroy()
extern "C"  void Cardboard_OnDestroy_m2632955630 (Cardboard_t1761541558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
