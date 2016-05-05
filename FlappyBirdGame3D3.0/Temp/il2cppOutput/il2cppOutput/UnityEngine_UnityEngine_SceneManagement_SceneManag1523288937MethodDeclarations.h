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
struct AsyncOperation_t3374395064;
struct AsyncOperation_t3374395064_marshaled_pinvoke;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene2772977204.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM2068802481.h"

// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneAt(System.Int32)
extern "C"  Scene_t2772977204  SceneManager_GetSceneAt_m2396963182 (Il2CppObject * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::INTERNAL_CALL_GetSceneAt(System.Int32,UnityEngine.SceneManagement.Scene&)
extern "C"  void SceneManager_INTERNAL_CALL_GetSceneAt_m1242004550 (Il2CppObject * __this /* static, unused */, int32_t ___index, Scene_t2772977204 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m2167814033 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void SceneManager_LoadScene_m3907168970 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsyncNameIndexInternal(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C"  AsyncOperation_t3374395064 * SceneManager_LoadSceneAsyncNameIndexInternal_m3775081569 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName, int32_t ___sceneBuildIndex, bool ___isAdditive, bool ___mustCompleteNextFrame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
