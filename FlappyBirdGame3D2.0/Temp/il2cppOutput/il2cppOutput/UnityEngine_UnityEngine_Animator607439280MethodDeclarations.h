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

// UnityEngine.Animator
struct Animator_t607439280_0;
// System.String
struct String_t;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t_2061686734_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo_306960113.h"

// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C"  void Animator_SetFloat_m1775105839_0 (Animator_t607439280_0 * __this, String_t* ___name, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single,System.Single,System.Single)
extern "C"  void Animator_SetFloat_m359795641_0 (Animator_t607439280_0 * __this, String_t* ___name, float ___value, float ___dampTime, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C"  void Animator_SetBool_m_1958131093_0 (Animator_t607439280_0 * __this, String_t* ___name, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C"  void Animator_SetTrigger_m514363822_0 (Animator_t607439280_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C"  void Animator_ResetTrigger_m_142545381_0 (Animator_t607439280_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Animator::get_deltaPosition()
extern "C"  Vector3_t_725341337_0  Animator_get_deltaPosition_m1658225602_0 (Animator_t607439280_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::INTERNAL_get_deltaPosition(UnityEngine.Vector3&)
extern "C"  void Animator_INTERNAL_get_deltaPosition_m_565692249_0 (Animator_t607439280_0 * __this, Vector3_t_725341337_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
extern "C"  void Animator_set_applyRootMotion_m394805828_0 (Animator_t607439280_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C"  AnimatorStateInfo_t_306960113_0  Animator_GetCurrentAnimatorStateInfo_m_1233107848_0 (Animator_t607439280_0 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::set_speed(System.Single)
extern "C"  void Animator_set_speed_m_1781031267_0 (Animator_t607439280_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C"  RuntimeAnimatorController_t_2061686734_0 * Animator_get_runtimeAnimatorController_m1822082727_0 (Animator_t607439280_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C"  int32_t Animator_StringToHash_m_274070198_0 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
extern "C"  void Animator_SetFloatString_m82432478_0 (Animator_t607439280_0 * __this, String_t* ___name, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C"  void Animator_SetBoolString_m275475356_0 (Animator_t607439280_0 * __this, String_t* ___name, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C"  void Animator_SetTriggerString_m1378271133_0 (Animator_t607439280_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C"  void Animator_ResetTriggerString_m1817269834_0 (Animator_t607439280_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
extern "C"  void Animator_SetFloatStringDamp_m_2020816152_0 (Animator_t607439280_0 * __this, String_t* ___name, float ___value, float ___dampTime, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
