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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>
struct Transform_1_t296645358;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1659019043_gshared (Transform_1_t296645358 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1659019043(__this, ___object, ___method, method) ((  void (*) (Transform_1_t296645358 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1659019043_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>::Invoke(TKey,TValue)
extern "C"  Il2CppObject * Transform_1_Invoke_m2893027961_gshared (Transform_1_t296645358 * __this, Il2CppObject * ___key, uint16_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2893027961(__this, ___key, ___value, method) ((  Il2CppObject * (*) (Transform_1_t296645358 *, Il2CppObject *, uint16_t, const MethodInfo*))Transform_1_Invoke_m2893027961_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m708278744_gshared (Transform_1_t296645358 * __this, Il2CppObject * ___key, uint16_t ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m708278744(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t296645358 *, Il2CppObject *, uint16_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m708278744_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Transform_1_EndInvoke_m3858591857_gshared (Transform_1_t296645358 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3858591857(__this, ___result, method) ((  Il2CppObject * (*) (Transform_1_t296645358 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3858591857_gshared)(__this, ___result, method)
