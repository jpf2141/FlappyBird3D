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
struct BaseCardboardDevice_t1657130464_0;
// System.Uri
struct Uri_t18014439_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;
// System.Single[]
struct SingleU5BU5D_t_2105059803_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"

// System.Void BaseCardboardDevice::.ctor()
extern "C"  void BaseCardboardDevice__ctor_m_1256684240_0 (BaseCardboardDevice_t1657130464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetDistortionCorrectionEnabled(System.Boolean)
extern "C"  void BaseCardboardDevice_SetDistortionCorrectionEnabled_m499852271_0 (BaseCardboardDevice_t1657130464_0 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetNeckModelScale(System.Single)
extern "C"  void BaseCardboardDevice_SetNeckModelScale_m1968583419_0 (BaseCardboardDevice_t1657130464_0 * __this, float ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetAutoDriftCorrectionEnabled(System.Boolean)
extern "C"  void BaseCardboardDevice_SetAutoDriftCorrectionEnabled_m1604873776_0 (BaseCardboardDevice_t1657130464_0 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetElectronicDisplayStabilizationEnabled(System.Boolean)
extern "C"  void BaseCardboardDevice_SetElectronicDisplayStabilizationEnabled_m_1099952143_0 (BaseCardboardDevice_t1657130464_0 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseCardboardDevice::SetDefaultDeviceProfile(System.Uri)
extern "C"  bool BaseCardboardDevice_SetDefaultDeviceProfile_m_1402574551_0 (BaseCardboardDevice_t1657130464_0 * __this, Uri_t18014439_0 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Init()
extern "C"  void BaseCardboardDevice_Init_m326640420_0 (BaseCardboardDevice_t1657130464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::UpdateState()
extern "C"  void BaseCardboardDevice_UpdateState_m2100132822_0 (BaseCardboardDevice_t1657130464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::UpdateScreenData()
extern "C"  void BaseCardboardDevice_UpdateScreenData_m1484176819_0 (BaseCardboardDevice_t1657130464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Recenter()
extern "C"  void BaseCardboardDevice_Recenter_m_640272676_0 (BaseCardboardDevice_t1657130464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::PostRender(UnityEngine.RenderTexture)
extern "C"  void BaseCardboardDevice_PostRender_m_1156086342_0 (BaseCardboardDevice_t1657130464_0 * __this, RenderTexture_t1203146108_0 * ___stereoScreen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::OnPause(System.Boolean)
extern "C"  void BaseCardboardDevice_OnPause_m1508998492_0 (BaseCardboardDevice_t1657130464_0 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::OnApplicationQuit()
extern "C"  void BaseCardboardDevice_OnApplicationQuit_m_1995265362_0 (BaseCardboardDevice_t1657130464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::UpdateView()
extern "C"  void BaseCardboardDevice_UpdateView_m420689762_0 (BaseCardboardDevice_t1657130464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::UpdateProfile()
extern "C"  void BaseCardboardDevice_UpdateProfile_m674875886_0 (BaseCardboardDevice_t1657130464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BaseCardboardDevice::ExtractMatrix(UnityEngine.Matrix4x4&,System.Single[],System.Int32)
extern "C"  int32_t BaseCardboardDevice_ExtractMatrix_m102653796_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0 * ___mat, SingleU5BU5D_t_2105059803_0* ___data, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::ProcessEvents()
extern "C"  void BaseCardboardDevice_ProcessEvents_m_1879707722_0 (BaseCardboardDevice_t1657130464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Start()
extern "C"  void BaseCardboardDevice_Start_m1985420848_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetTextureId(System.Int32)
extern "C"  void BaseCardboardDevice_SetTextureId_m_1829566279_0 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseCardboardDevice::SetDefaultProfile(System.Byte[],System.Int32)
extern "C"  bool BaseCardboardDevice_SetDefaultProfile_m_1492731686_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___uri, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetUnityVersion(System.Byte[],System.Int32)
extern "C"  void BaseCardboardDevice_SetUnityVersion_m1108654049_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___version_str, int32_t ___version_length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::EnableDistortionCorrection(System.Boolean)
extern "C"  void BaseCardboardDevice_EnableDistortionCorrection_m_138207671_0 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::EnableAutoDriftCorrection(System.Boolean)
extern "C"  void BaseCardboardDevice_EnableAutoDriftCorrection_m1329241210_0 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::EnableElectronicDisplayStabilization(System.Boolean)
extern "C"  void BaseCardboardDevice_EnableElectronicDisplayStabilization_m_213148729_0 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetNeckModelFactor(System.Single)
extern "C"  void BaseCardboardDevice_SetNeckModelFactor_m_903325376_0 (Object_t * __this /* static, unused */, float ___factor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::ResetHeadTracker()
extern "C"  void BaseCardboardDevice_ResetHeadTracker_m635830205_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BaseCardboardDevice::GetEventFlags()
extern "C"  int32_t BaseCardboardDevice_GetEventFlags_m_1128800353_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::GetProfile(System.Single[])
extern "C"  void BaseCardboardDevice_GetProfile_m_106303838_0 (Object_t * __this /* static, unused */, SingleU5BU5D_t_2105059803_0* ___profile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::GetHeadPose(System.Single[])
extern "C"  void BaseCardboardDevice_GetHeadPose_m_1408588140_0 (Object_t * __this /* static, unused */, SingleU5BU5D_t_2105059803_0* ___pose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::GetViewParameters(System.Single[])
extern "C"  void BaseCardboardDevice_GetViewParameters_m_2073186122_0 (Object_t * __this /* static, unused */, SingleU5BU5D_t_2105059803_0* ___viewParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Pause()
extern "C"  void BaseCardboardDevice_Pause_m_1202558268_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Resume()
extern "C"  void BaseCardboardDevice_Resume_m_234014143_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Stop()
extern "C"  void BaseCardboardDevice_Stop_m618647958_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
