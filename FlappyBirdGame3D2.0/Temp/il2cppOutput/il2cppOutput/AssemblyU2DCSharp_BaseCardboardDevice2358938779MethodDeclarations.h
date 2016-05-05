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

// BaseCardboardDevice
struct BaseCardboardDevice_t2358938779;
// System.Uri
struct Uri_t2776692961;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri2776692961.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// System.Void BaseCardboardDevice::.ctor()
extern "C"  void BaseCardboardDevice__ctor_m3038283056 (BaseCardboardDevice_t2358938779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetDistortionCorrectionEnabled(System.Boolean)
extern "C"  void BaseCardboardDevice_SetDistortionCorrectionEnabled_m499852271 (BaseCardboardDevice_t2358938779 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetNeckModelScale(System.Single)
extern "C"  void BaseCardboardDevice_SetNeckModelScale_m1968583419 (BaseCardboardDevice_t2358938779 * __this, float ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetAutoDriftCorrectionEnabled(System.Boolean)
extern "C"  void BaseCardboardDevice_SetAutoDriftCorrectionEnabled_m1604873776 (BaseCardboardDevice_t2358938779 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetElectronicDisplayStabilizationEnabled(System.Boolean)
extern "C"  void BaseCardboardDevice_SetElectronicDisplayStabilizationEnabled_m3195015153 (BaseCardboardDevice_t2358938779 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseCardboardDevice::SetDefaultDeviceProfile(System.Uri)
extern "C"  bool BaseCardboardDevice_SetDefaultDeviceProfile_m2892392745 (BaseCardboardDevice_t2358938779 * __this, Uri_t2776692961 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Init()
extern "C"  void BaseCardboardDevice_Init_m326640420 (BaseCardboardDevice_t2358938779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::UpdateState()
extern "C"  void BaseCardboardDevice_UpdateState_m2100132822 (BaseCardboardDevice_t2358938779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::UpdateScreenData()
extern "C"  void BaseCardboardDevice_UpdateScreenData_m1484176819 (BaseCardboardDevice_t2358938779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Recenter()
extern "C"  void BaseCardboardDevice_Recenter_m3654694620 (BaseCardboardDevice_t2358938779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::PostRender(UnityEngine.RenderTexture)
extern "C"  void BaseCardboardDevice_PostRender_m3138880954 (BaseCardboardDevice_t2358938779 * __this, RenderTexture_t12905170 * ___stereoScreen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::OnPause(System.Boolean)
extern "C"  void BaseCardboardDevice_OnPause_m1508998492 (BaseCardboardDevice_t2358938779 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::OnApplicationQuit()
extern "C"  void BaseCardboardDevice_OnApplicationQuit_m2299701934 (BaseCardboardDevice_t2358938779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::UpdateView()
extern "C"  void BaseCardboardDevice_UpdateView_m420689762 (BaseCardboardDevice_t2358938779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::UpdateProfile()
extern "C"  void BaseCardboardDevice_UpdateProfile_m674875886 (BaseCardboardDevice_t2358938779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BaseCardboardDevice::ExtractMatrix(UnityEngine.Matrix4x4&,System.Single[],System.Int32)
extern "C"  int32_t BaseCardboardDevice_ExtractMatrix_m102653796 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660 * ___mat, SingleU5BU5D_t1219431280* ___data, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::ProcessEvents()
extern "C"  void BaseCardboardDevice_ProcessEvents_m2415259574 (BaseCardboardDevice_t2358938779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Start()
extern "C"  void BaseCardboardDevice_Start_m1985420848 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetTextureId(System.Int32)
extern "C"  void BaseCardboardDevice_SetTextureId_m2465401017 (Il2CppObject * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseCardboardDevice::SetDefaultProfile(System.Byte[],System.Int32)
extern "C"  bool BaseCardboardDevice_SetDefaultProfile_m2802235610 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___uri, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetUnityVersion(System.Byte[],System.Int32)
extern "C"  void BaseCardboardDevice_SetUnityVersion_m1108654049 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___version_str, int32_t ___version_length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::EnableDistortionCorrection(System.Boolean)
extern "C"  void BaseCardboardDevice_EnableDistortionCorrection_m4156759625 (Il2CppObject * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::EnableAutoDriftCorrection(System.Boolean)
extern "C"  void BaseCardboardDevice_EnableAutoDriftCorrection_m1329241210 (Il2CppObject * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::EnableElectronicDisplayStabilization(System.Boolean)
extern "C"  void BaseCardboardDevice_EnableElectronicDisplayStabilization_m4081818567 (Il2CppObject * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetNeckModelFactor(System.Single)
extern "C"  void BaseCardboardDevice_SetNeckModelFactor_m3391641920 (Il2CppObject * __this /* static, unused */, float ___factor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::ResetHeadTracker()
extern "C"  void BaseCardboardDevice_ResetHeadTracker_m635830205 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BaseCardboardDevice::GetEventFlags()
extern "C"  int32_t BaseCardboardDevice_GetEventFlags_m3166166943 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::GetProfile(System.Single[])
extern "C"  void BaseCardboardDevice_GetProfile_m4188663458 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t1219431280* ___profile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::GetHeadPose(System.Single[])
extern "C"  void BaseCardboardDevice_GetHeadPose_m2886379156 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t1219431280* ___pose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::GetViewParameters(System.Single[])
extern "C"  void BaseCardboardDevice_GetViewParameters_m2221781174 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t1219431280* ___viewParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Pause()
extern "C"  void BaseCardboardDevice_Pause_m3092409028 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Resume()
extern "C"  void BaseCardboardDevice_Resume_m4060953153 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Stop()
extern "C"  void BaseCardboardDevice_Stop_m618647958 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
