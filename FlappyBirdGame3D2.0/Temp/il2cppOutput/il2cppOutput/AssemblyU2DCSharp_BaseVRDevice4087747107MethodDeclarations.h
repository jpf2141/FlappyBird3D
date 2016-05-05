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

// BaseVRDevice
struct BaseVRDevice_t4087747107;
// CardboardProfile
struct CardboardProfile_t3514264339;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;
// System.Uri
struct Uri_t2776692961;
// Pose3D
struct Pose3D_t2396367586;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CardboardProfile3514264339.h"
#include "System_System_Uri2776692961.h"
#include "AssemblyU2DCSharp_Cardboard_Eye70161.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "AssemblyU2DCSharp_Cardboard_Distortion435440829.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

// System.Void BaseVRDevice::.ctor()
extern "C"  void BaseVRDevice__ctor_m3739260888 (BaseVRDevice_t4087747107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::.cctor()
extern "C"  void BaseVRDevice__cctor_m3765841621 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile BaseVRDevice::get_Profile()
extern "C"  CardboardProfile_t3514264339 * BaseVRDevice_get_Profile_m750425516 (BaseVRDevice_t4087747107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::set_Profile(CardboardProfile)
extern "C"  void BaseVRDevice_set_Profile_m2165468751 (BaseVRDevice_t4087747107 * __this, CardboardProfile_t3514264339 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseVRDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern "C"  bool BaseVRDevice_SupportsNativeDistortionCorrection_m984184266 (BaseVRDevice_t4087747107 * __this, List_1_t1765447871 * ___diagnostics, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseVRDevice::RequiresNativeDistortionCorrection()
extern "C"  bool BaseVRDevice_RequiresNativeDistortionCorrection_m4285159360 (BaseVRDevice_t4087747107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseVRDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>)
extern "C"  bool BaseVRDevice_SupportsNativeUILayer_m1937514360 (BaseVRDevice_t4087747107 * __this, List_1_t1765447871 * ___diagnostics, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseVRDevice::ShouldRecreateStereoScreen(System.Int32,System.Int32)
extern "C"  bool BaseVRDevice_ShouldRecreateStereoScreen_m1395042848 (BaseVRDevice_t4087747107 * __this, int32_t ___curWidth, int32_t ___curHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture BaseVRDevice::CreateStereoScreen()
extern "C"  RenderTexture_t12905170 * BaseVRDevice_CreateStereoScreen_m1518340817 (BaseVRDevice_t4087747107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseVRDevice::SetDefaultDeviceProfile(System.Uri)
extern "C"  bool BaseVRDevice_SetDefaultDeviceProfile_m397397225 (BaseVRDevice_t4087747107 * __this, Uri_t2776692961 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::ShowSettingsDialog()
extern "C"  void BaseVRDevice_ShowSettingsDialog_m866779348 (BaseVRDevice_t4087747107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D BaseVRDevice::GetHeadPose()
extern "C"  Pose3D_t2396367586 * BaseVRDevice_GetHeadPose_m1841166146 (BaseVRDevice_t4087747107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D BaseVRDevice::GetEyePose(Cardboard/Eye)
extern "C"  Pose3D_t2396367586 * BaseVRDevice_GetEyePose_m3849410663 (BaseVRDevice_t4087747107 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 BaseVRDevice::GetProjection(Cardboard/Eye,Cardboard/Distortion)
extern "C"  Matrix4x4_t277289660  BaseVRDevice_GetProjection_m4004302614 (BaseVRDevice_t4087747107 * __this, int32_t ___eye, int32_t ___distortion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect BaseVRDevice::GetViewport(Cardboard/Eye,Cardboard/Distortion)
extern "C"  Rect_t1525428817  BaseVRDevice_GetViewport_m3344169318 (BaseVRDevice_t4087747107 * __this, int32_t ___eye, int32_t ___distortion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::OnPause(System.Boolean)
extern "C"  void BaseVRDevice_OnPause_m3570352132 (BaseVRDevice_t4087747107 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::OnFocus(System.Boolean)
extern "C"  void BaseVRDevice_OnFocus_m2116184806 (BaseVRDevice_t4087747107 * __this, bool ___focus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::OnLevelLoaded(System.Int32)
extern "C"  void BaseVRDevice_OnLevelLoaded_m2660839441 (BaseVRDevice_t4087747107 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::OnApplicationQuit()
extern "C"  void BaseVRDevice_OnApplicationQuit_m55312726 (BaseVRDevice_t4087747107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::Destroy()
extern "C"  void BaseVRDevice_Destroy_m176250160 (BaseVRDevice_t4087747107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseVRDevice::ComputeEyesFromProfile()
extern "C"  void BaseVRDevice_ComputeEyesFromProfile_m3128397778 (BaseVRDevice_t4087747107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 BaseVRDevice::MakeProjection(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  Matrix4x4_t277289660  BaseVRDevice_MakeProjection_m3715252544 (Il2CppObject * __this /* static, unused */, float ___l, float ___t, float ___r, float ___b, float ___n, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BaseVRDevice BaseVRDevice::GetDevice()
extern "C"  BaseVRDevice_t4087747107 * BaseVRDevice_GetDevice_m3548291464 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
