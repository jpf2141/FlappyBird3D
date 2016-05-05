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
struct Animation_t1650742747_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// UnityEngine.AnimationState
struct AnimationState_t42332022_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_PlayMode_1013768768.h"

// System.Boolean UnityEngine.Animation::Play()
extern "C"  bool Animation_Play_m_21313059_0 (Animation_t1650742747_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
extern "C"  bool Animation_Play_m_1434407825_0 (Animation_t1650742747_0 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C"  bool Animation_PlayDefaultAnimation_m170678930_0 (Animation_t1650742747_0 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C"  Object_t * Animation_GetEnumerator_m_1279384793_0 (Animation_t1650742747_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C"  AnimationState_t42332022_0 * Animation_GetStateAtIndex_m513456147_0 (Animation_t1650742747_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C"  int32_t Animation_GetStateCount_m_757359769_0 (Animation_t1650742747_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
