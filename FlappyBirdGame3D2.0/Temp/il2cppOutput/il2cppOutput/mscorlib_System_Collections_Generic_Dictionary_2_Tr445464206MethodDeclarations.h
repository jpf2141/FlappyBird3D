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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>
struct Transform_1_t445464206;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2191038339_gshared (Transform_1_t445464206 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2191038339(__this, ___object, ___method, method) ((  void (*) (Transform_1_t445464206 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2191038339_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>::Invoke(TKey,TValue)
extern "C"  uint16_t Transform_1_Invoke_m1314156057_gshared (Transform_1_t445464206 * __this, Il2CppObject * ___key, uint16_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1314156057(__this, ___key, ___value, method) ((  uint16_t (*) (Transform_1_t445464206 *, Il2CppObject *, uint16_t, const MethodInfo*))Transform_1_Invoke_m1314156057_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3928468856_gshared (Transform_1_t445464206 * __this, Il2CppObject * ___key, uint16_t ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3928468856(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t445464206 *, Il2CppObject *, uint16_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3928468856_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>::EndInvoke(System.IAsyncResult)
extern "C"  uint16_t Transform_1_EndInvoke_m1430165713_gshared (Transform_1_t445464206 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1430165713(__this, ___result, method) ((  uint16_t (*) (Transform_1_t445464206 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1430165713_gshared)(__this, ___result, method)
