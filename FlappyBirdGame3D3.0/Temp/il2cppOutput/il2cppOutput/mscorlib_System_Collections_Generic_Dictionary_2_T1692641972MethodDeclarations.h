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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
struct Transform_1_t1692641972_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m_691925626_0_gshared (Transform_1_t1692641972_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m_691925626_0(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1692641972_0 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m_691925626_0_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::Invoke(TKey,TValue)
extern "C"  Object_t * Transform_1_Invoke_m631029810_0_gshared (Transform_1_t1692641972_0 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m631029810_0(__this, ___key, ___value, method) ((  Object_t * (*) (Transform_1_t1692641972_0 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m631029810_0_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m2048389981_0_gshared (Transform_1_t1692641972_0 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2048389981_0(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t1692641972_0 *, Object_t *, int32_t, AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m2048389981_0_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * Transform_1_EndInvoke_m1212689688_0_gshared (Transform_1_t1692641972_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1212689688_0(__this, ___result, method) ((  Object_t * (*) (Transform_1_t1692641972_0 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m1212689688_0_gshared)(__this, ___result, method)
