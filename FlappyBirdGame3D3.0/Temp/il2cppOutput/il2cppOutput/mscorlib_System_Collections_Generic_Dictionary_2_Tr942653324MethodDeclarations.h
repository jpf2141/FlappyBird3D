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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>>
struct Transform_1_t942653324_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_151457536.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_695874624.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m653979806_0_gshared (Transform_1_t942653324_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m653979806_0(__this, ___object, ___method, method) ((  void (*) (Transform_1_t942653324_0 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m653979806_0_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t151457536_0  Transform_1_Invoke_m1611372186_0_gshared (Transform_1_t942653324_0 * __this, int32_t ___key, TrackableResultData_t695874624_0  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1611372186_0(__this, ___key, ___value, method) ((  KeyValuePair_2_t151457536_0  (*) (Transform_1_t942653324_0 *, int32_t, TrackableResultData_t695874624_0 , const MethodInfo*))Transform_1_Invoke_m1611372186_0_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m1644850757_0_gshared (Transform_1_t942653324_0 * __this, int32_t ___key, TrackableResultData_t695874624_0  ___value, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1644850757_0(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t942653324_0 *, int32_t, TrackableResultData_t695874624_0 , AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1644850757_0_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t151457536_0  Transform_1_EndInvoke_m2105722288_0_gshared (Transform_1_t942653324_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2105722288_0(__this, ___result, method) ((  KeyValuePair_2_t151457536_0  (*) (Transform_1_t942653324_0 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m2105722288_0_gshared)(__this, ___result, method)
