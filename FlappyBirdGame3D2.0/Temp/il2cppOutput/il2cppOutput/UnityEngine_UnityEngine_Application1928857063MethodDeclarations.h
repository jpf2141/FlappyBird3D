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
#include "UnityEngine_UnityEngine_RuntimePlatform321659266.h"
#include "UnityEngine_UnityEngine_LogType_721401675.h"
#include "UnityEngine_UnityEngine_UserAuthorization1386731973.h"

// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m1187862186_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C"  bool Application_get_isPlaying_m987993960_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C"  bool Application_get_isEditor_m1279348309_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C"  int32_t Application_get_platform_m_1376334440_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
extern "C"  void Application_set_runInBackground_m_1961756033_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_dataPath()
extern "C"  String_t* Application_get_dataPath_m_1775272976_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_unityVersion()
extern "C"  String_t* Application_get_unityVersion_m_851616860_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern "C"  void Application_set_targetFrameRate_m498658007_0 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern "C"  void Application_CallLogCallback_m419361836_0 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Application::RequestUserAuthorization(UnityEngine.UserAuthorization)
extern "C"  AsyncOperation_t59089492_0 * Application_RequestUserAuthorization_m_1557131538_0 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::HasUserAuthorization(UnityEngine.UserAuthorization)
extern "C"  bool Application_HasUserAuthorization_m_1988683086_0 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
