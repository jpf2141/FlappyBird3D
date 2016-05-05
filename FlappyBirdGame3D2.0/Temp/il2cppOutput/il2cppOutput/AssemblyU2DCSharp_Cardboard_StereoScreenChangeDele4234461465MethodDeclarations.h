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

// Cardboard/StereoScreenChangeDelegate
struct StereoScreenChangeDelegate_t4234461465;
// System.Object
struct Il2CppObject;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Cardboard/StereoScreenChangeDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void StereoScreenChangeDelegate__ctor_m4109925561 (StereoScreenChangeDelegate_t4234461465 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard/StereoScreenChangeDelegate::Invoke(UnityEngine.RenderTexture)
extern "C"  void StereoScreenChangeDelegate_Invoke_m3145588785 (StereoScreenChangeDelegate_t4234461465 * __this, RenderTexture_t12905170 * ___newStereoScreen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_StereoScreenChangeDelegate_t4234461465(Il2CppObject* delegate, RenderTexture_t12905170 * ___newStereoScreen);
// System.IAsyncResult Cardboard/StereoScreenChangeDelegate::BeginInvoke(UnityEngine.RenderTexture,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * StereoScreenChangeDelegate_BeginInvoke_m4033199538 (StereoScreenChangeDelegate_t4234461465 * __this, RenderTexture_t12905170 * ___newStereoScreen, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard/StereoScreenChangeDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void StereoScreenChangeDelegate_EndInvoke_m3505468233 (StereoScreenChangeDelegate_t4234461465 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
