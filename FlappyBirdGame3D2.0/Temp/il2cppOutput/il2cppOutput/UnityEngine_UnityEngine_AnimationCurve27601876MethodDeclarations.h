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

// UnityEngine.AnimationCurve
struct AnimationCurve_t27601876_0;
struct AnimationCurve_t27601876_0_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1717331673_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Keyframe1910164791.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C"  void AnimationCurve__ctor_m_1858684965_0 (AnimationCurve_t27601876_0 * __this, KeyframeU5BU5D_t1717331673_0* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C"  void AnimationCurve__ctor_m_257122686_0 (AnimationCurve_t27601876_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C"  void AnimationCurve_Cleanup_m386995588_0 (AnimationCurve_t27601876_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C"  void AnimationCurve_Finalize_m_1912743264_0 (AnimationCurve_t27601876_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C"  float AnimationCurve_Evaluate_m547727012_0 (AnimationCurve_t27601876_0 * __this, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
extern "C"  Keyframe_t1910164791_0  AnimationCurve_get_Item_m_2009169447_0 (AnimationCurve_t27601876_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern "C"  int32_t AnimationCurve_get_length_m_1275737519_0 (AnimationCurve_t27601876_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)
extern "C"  Keyframe_t1910164791_0  AnimationCurve_GetKey_Internal_m_343697222_0 (AnimationCurve_t27601876_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::INTERNAL_CALL_GetKey_Internal(UnityEngine.AnimationCurve,System.Int32,UnityEngine.Keyframe&)
extern "C"  void AnimationCurve_INTERNAL_CALL_GetKey_Internal_m_129290416_0 (Object_t * __this /* static, unused */, AnimationCurve_t27601876_0 * ___self, int32_t ___index, Keyframe_t1910164791_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C"  void AnimationCurve_Init_m_282753813_0 (AnimationCurve_t27601876_0 * __this, KeyframeU5BU5D_t1717331673_0* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t27601876_0_marshal(const AnimationCurve_t27601876_0& unmarshaled, AnimationCurve_t27601876_0_marshaled& marshaled);
extern "C" void AnimationCurve_t27601876_0_marshal_back(const AnimationCurve_t27601876_0_marshaled& marshaled, AnimationCurve_t27601876_0& unmarshaled);
extern "C" void AnimationCurve_t27601876_0_marshal_cleanup(AnimationCurve_t27601876_0_marshaled& marshaled);
