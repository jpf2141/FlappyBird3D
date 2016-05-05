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
struct HeadUpdatedDelegate_t_86775060_0;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void CardboardHead/HeadUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void HeadUpdatedDelegate__ctor_m_75099458_0 (HeadUpdatedDelegate_t_86775060_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardHead/HeadUpdatedDelegate::Invoke(UnityEngine.GameObject)
extern "C"  void HeadUpdatedDelegate_Invoke_m_632349168_0 (HeadUpdatedDelegate_t_86775060_0 * __this, GameObject_t_184308134_0 * ___head, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_HeadUpdatedDelegate_t_86775060_0(Il2CppObject* delegate, GameObject_t_184308134_0 * ___head);
// System.IAsyncResult CardboardHead/HeadUpdatedDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Object_t * HeadUpdatedDelegate_BeginInvoke_m_519852781_0 (HeadUpdatedDelegate_t_86775060_0 * __this, GameObject_t_184308134_0 * ___head, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardHead/HeadUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void HeadUpdatedDelegate_EndInvoke_m1960612814_0 (HeadUpdatedDelegate_t_86775060_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
