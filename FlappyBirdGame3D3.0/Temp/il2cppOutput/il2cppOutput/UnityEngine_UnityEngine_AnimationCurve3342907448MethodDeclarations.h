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
struct AnimationCurve_t3342907448;
struct AnimationCurve_t3342907448_marshaled_pinvoke;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t2477572954;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Keyframe2095052507.h"
#include "UnityEngine_UnityEngine_AnimationCurve3342907448.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C"  void AnimationCurve__ctor_m2436282331 (AnimationCurve_t3342907448 * __this, KeyframeU5BU5D_t2477572954* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C"  void AnimationCurve__ctor_m4037844610 (AnimationCurve_t3342907448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C"  void AnimationCurve_Cleanup_m386995588 (AnimationCurve_t3342907448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C"  void AnimationCurve_Finalize_m2382224032 (AnimationCurve_t3342907448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C"  float AnimationCurve_Evaluate_m547727012 (AnimationCurve_t3342907448 * __this, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
extern "C"  Keyframe_t2095052507  AnimationCurve_get_Item_m2285797849 (AnimationCurve_t3342907448 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern "C"  int32_t AnimationCurve_get_length_m3019229777 (AnimationCurve_t3342907448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)
extern "C"  Keyframe_t2095052507  AnimationCurve_GetKey_Internal_m3951270074 (AnimationCurve_t3342907448 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::INTERNAL_CALL_GetKey_Internal(UnityEngine.AnimationCurve,System.Int32,UnityEngine.Keyframe&)
extern "C"  void AnimationCurve_INTERNAL_CALL_GetKey_Internal_m4165676880 (Il2CppObject * __this /* static, unused */, AnimationCurve_t3342907448 * ___self, int32_t ___index, Keyframe_t2095052507 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C"  void AnimationCurve_Init_m4012213483 (AnimationCurve_t3342907448 * __this, KeyframeU5BU5D_t2477572954* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct AnimationCurve_t3342907448;
struct AnimationCurve_t3342907448_marshaled_pinvoke;

extern "C" void AnimationCurve_t3342907448_marshal_pinvoke(const AnimationCurve_t3342907448& unmarshaled, AnimationCurve_t3342907448_marshaled_pinvoke& marshaled);
extern "C" void AnimationCurve_t3342907448_marshal_pinvoke_back(const AnimationCurve_t3342907448_marshaled_pinvoke& marshaled, AnimationCurve_t3342907448& unmarshaled);
extern "C" void AnimationCurve_t3342907448_marshal_pinvoke_cleanup(AnimationCurve_t3342907448_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct AnimationCurve_t3342907448;
struct AnimationCurve_t3342907448_marshaled_com;

extern "C" void AnimationCurve_t3342907448_marshal_com(const AnimationCurve_t3342907448& unmarshaled, AnimationCurve_t3342907448_marshaled_com& marshaled);
extern "C" void AnimationCurve_t3342907448_marshal_com_back(const AnimationCurve_t3342907448_marshaled_com& marshaled, AnimationCurve_t3342907448& unmarshaled);
extern "C" void AnimationCurve_t3342907448_marshal_com_cleanup(AnimationCurve_t3342907448_marshaled_com& marshaled);
