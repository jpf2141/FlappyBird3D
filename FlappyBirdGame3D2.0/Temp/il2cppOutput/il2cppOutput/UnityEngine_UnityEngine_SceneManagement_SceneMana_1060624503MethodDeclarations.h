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

// System.String
struct String_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t59089492_0;
struct AsyncOperation_t59089492_0_marshaled;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1404257156.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadScene_1529229055.h"

// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneAt(System.Int32)
extern "C"  Scene_t1404257156_0  SceneManager_GetSceneAt_m_1898004114_0 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::INTERNAL_CALL_GetSceneAt(System.Int32,UnityEngine.SceneManagement.Scene&)
extern "C"  void SceneManager_INTERNAL_CALL_GetSceneAt_m1242004550_0 (Object_t * __this /* static, unused */, int32_t ___index, Scene_t1404257156_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m_2127153263_0 (Object_t * __this /* static, unused */, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void SceneManager_LoadScene_m_387798326_0 (Object_t * __this /* static, unused */, String_t* ___sceneName, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsyncNameIndexInternal(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C"  AsyncOperation_t59089492_0 * SceneManager_LoadSceneAsyncNameIndexInternal_m_519885727_0 (Object_t * __this /* static, unused */, String_t* ___sceneName, int32_t ___sceneBuildIndex, bool ___isAdditive, bool ___mustCompleteNextFrame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
