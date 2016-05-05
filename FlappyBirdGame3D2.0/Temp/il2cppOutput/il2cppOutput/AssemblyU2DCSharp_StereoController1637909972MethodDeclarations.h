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

// StereoController
struct StereoController_t1637909972;
// CardboardEye[]
struct CardboardEyeU5BU5D_t1172581018;
// CardboardHead
struct CardboardHead_t2975823030;
// UnityEngine.Camera
struct Camera_t3533968274;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// CardboardEye
struct CardboardEye_t2174202011;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "AssemblyU2DCSharp_Cardboard_Eye70161.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_CardboardEye2174202011.h"

// System.Void StereoController::.ctor()
extern "C"  void StereoController__ctor_m3477860167 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardEye[] StereoController::get_Eyes()
extern "C"  CardboardEyeU5BU5D_t1172581018* StereoController_get_Eyes_m688534376 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead StereoController::get_Head()
extern "C"  CardboardHead_t2975823030 * StereoController_get_Head_m1004242787 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::InvalidateEyes()
extern "C"  void StereoController_InvalidateEyes_m1839724314 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::UpdateStereoValues()
extern "C"  void StereoController_UpdateStereoValues_m1590209024 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera StereoController::get_cam()
extern "C"  Camera_t3533968274 * StereoController_get_cam_m985276906 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::set_cam(UnityEngine.Camera)
extern "C"  void StereoController_set_cam_m330901083 (StereoController_t1637909972 * __this, Camera_t3533968274 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::Awake()
extern "C"  void StereoController_Awake_m3715465386 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::AddStereoRig()
extern "C"  void StereoController_AddStereoRig_m3918722484 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::CreateEye(Cardboard/Eye)
extern "C"  void StereoController_CreateEye_m1821140992 (StereoController_t1637909972 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 StereoController::ComputeStereoEyePosition(Cardboard/Eye,System.Single,System.Single)
extern "C"  Vector3_t3525329789  StereoController_ComputeStereoEyePosition_m2202238978 (StereoController_t1637909972 * __this, int32_t ___eye, float ___proj11, float ___zScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnEnable()
extern "C"  void StereoController_OnEnable_m3507732191 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnDisable()
extern "C"  void StereoController_OnDisable_m1806452782 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnPreCull()
extern "C"  void StereoController_OnPreCull_m4010756283 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StereoController::EndOfFrame()
extern "C"  Il2CppObject * StereoController_EndOfFrame_m473628192 (StereoController_t1637909972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StereoController::<get_Eyes>m__0(CardboardEye)
extern "C"  bool StereoController_U3Cget_EyesU3Em__0_m2503969616 (StereoController_t1637909972 * __this, CardboardEye_t2174202011 * ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead StereoController::<get_Head>m__1(CardboardEye)
extern "C"  CardboardHead_t2975823030 * StereoController_U3Cget_HeadU3Em__1_m408087484 (Il2CppObject * __this /* static, unused */, CardboardEye_t2174202011 * ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StereoController::<AddStereoRig>m__2(CardboardEye)
extern "C"  bool StereoController_U3CAddStereoRigU3Em__2_m3217909670 (StereoController_t1637909972 * __this, CardboardEye_t2174202011 * ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
