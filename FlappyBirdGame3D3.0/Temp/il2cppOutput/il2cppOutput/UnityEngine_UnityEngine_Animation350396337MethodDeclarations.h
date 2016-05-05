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

// UnityEngine.Animation
struct Animation_t350396337;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.AnimationState
struct AnimationState_t3357637594;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_PlayMode3466086244.h"

// System.Boolean UnityEngine.Animation::Play()
extern "C"  bool Animation_Play_m4273654237 (Animation_t350396337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
extern "C"  bool Animation_Play_m2860559471 (Animation_t350396337 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C"  bool Animation_PlayDefaultAnimation_m170678930 (Animation_t350396337 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C"  Il2CppObject * Animation_GetEnumerator_m3015582503 (Animation_t350396337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C"  AnimationState_t3357637594 * Animation_GetStateAtIndex_m513456147 (Animation_t350396337 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C"  int32_t Animation_GetStateCount_m3537607527 (Animation_t350396337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
