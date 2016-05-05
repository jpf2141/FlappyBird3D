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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct Transform_1_t1539665204_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_695874624.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m558890822_0_gshared (Transform_1_t1539665204_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m558890822_0(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1539665204_0 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m558890822_0_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,Vuforia.VuforiaManagerImpl/TrackableResultData>::Invoke(TKey,TValue)
extern "C"  TrackableResultData_t695874624_0  Transform_1_Invoke_m2064834290_0_gshared (Transform_1_t1539665204_0 * __this, int32_t ___key, TrackableResultData_t695874624_0  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2064834290_0(__this, ___key, ___value, method) ((  TrackableResultData_t695874624_0  (*) (Transform_1_t1539665204_0 *, int32_t, TrackableResultData_t695874624_0 , const MethodInfo*))Transform_1_Invoke_m2064834290_0_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,Vuforia.VuforiaManagerImpl/TrackableResultData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m_1555887971_0_gshared (Transform_1_t1539665204_0 * __this, int32_t ___key, TrackableResultData_t695874624_0  ___value, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m_1555887971_0(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t1539665204_0 *, int32_t, TrackableResultData_t695874624_0 , AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m_1555887971_0_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,Vuforia.VuforiaManagerImpl/TrackableResultData>::EndInvoke(System.IAsyncResult)
extern "C"  TrackableResultData_t695874624_0  Transform_1_EndInvoke_m_1548790184_0_gshared (Transform_1_t1539665204_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m_1548790184_0(__this, ___result, method) ((  TrackableResultData_t695874624_0  (*) (Transform_1_t1539665204_0 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m_1548790184_0_gshared)(__this, ___result, method)
