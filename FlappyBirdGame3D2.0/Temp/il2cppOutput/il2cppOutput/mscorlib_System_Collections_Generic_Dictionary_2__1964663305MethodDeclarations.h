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
struct Transform_1_t_1964663305_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m_2103928957_0_gshared (Transform_1_t_1964663305_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m_2103928957_0(__this, ___object, ___method, method) ((  void (*) (Transform_1_t_1964663305_0 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m_2103928957_0_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>::Invoke(TKey,TValue)
extern "C"  uint16_t Transform_1_Invoke_m1314156057_0_gshared (Transform_1_t_1964663305_0 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1314156057_0(__this, ___key, ___value, method) ((  uint16_t (*) (Transform_1_t_1964663305_0 *, Object_t *, uint16_t, const MethodInfo*))Transform_1_Invoke_m1314156057_0_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m_366498440_0_gshared (Transform_1_t_1964663305_0 * __this, Object_t * ___key, uint16_t ___value, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m_366498440_0(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t_1964663305_0 *, Object_t *, uint16_t, AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m_366498440_0_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>::EndInvoke(System.IAsyncResult)
extern "C"  uint16_t Transform_1_EndInvoke_m1430165713_0_gshared (Transform_1_t_1964663305_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1430165713_0(__this, ___result, method) ((  uint16_t (*) (Transform_1_t_1964663305_0 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m1430165713_0_gshared)(__this, ___result, method)
