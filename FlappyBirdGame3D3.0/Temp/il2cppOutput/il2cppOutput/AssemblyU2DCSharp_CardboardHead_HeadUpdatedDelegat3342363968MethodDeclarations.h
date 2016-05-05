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

// CardboardHead/HeadUpdatedDelegate
struct HeadUpdatedDelegate_t3342363968;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void CardboardHead/HeadUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void HeadUpdatedDelegate__ctor_m4219867838 (HeadUpdatedDelegate_t3342363968 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardHead/HeadUpdatedDelegate::Invoke(UnityEngine.GameObject)
extern "C"  void HeadUpdatedDelegate_Invoke_m3662618128 (HeadUpdatedDelegate_t3342363968 * __this, GameObject_t4012695102 * ___head, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_HeadUpdatedDelegate_t3342363968(Il2CppObject* delegate, GameObject_t4012695102 * ___head);
// System.IAsyncResult CardboardHead/HeadUpdatedDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HeadUpdatedDelegate_BeginInvoke_m3775114515 (HeadUpdatedDelegate_t3342363968 * __this, GameObject_t4012695102 * ___head, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardHead/HeadUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void HeadUpdatedDelegate_EndInvoke_m1960612814 (HeadUpdatedDelegate_t3342363968 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
