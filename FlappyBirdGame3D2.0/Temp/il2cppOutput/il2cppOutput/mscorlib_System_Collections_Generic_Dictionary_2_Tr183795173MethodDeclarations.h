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
struct Transform_1_t183795173;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl2490169420.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m558890822_gshared (Transform_1_t183795173 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m558890822(__this, ___object, ___method, method) ((  void (*) (Transform_1_t183795173 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m558890822_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,Vuforia.VuforiaManagerImpl/TrackableResultData>::Invoke(TKey,TValue)
extern "C"  TrackableResultData_t2490169420  Transform_1_Invoke_m2064834290_gshared (Transform_1_t183795173 * __this, int32_t ___key, TrackableResultData_t2490169420  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2064834290(__this, ___key, ___value, method) ((  TrackableResultData_t2490169420  (*) (Transform_1_t183795173 *, int32_t, TrackableResultData_t2490169420 , const MethodInfo*))Transform_1_Invoke_m2064834290_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,Vuforia.VuforiaManagerImpl/TrackableResultData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2739079325_gshared (Transform_1_t183795173 * __this, int32_t ___key, TrackableResultData_t2490169420  ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2739079325(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t183795173 *, int32_t, TrackableResultData_t2490169420 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2739079325_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,Vuforia.VuforiaManagerImpl/TrackableResultData>::EndInvoke(System.IAsyncResult)
extern "C"  TrackableResultData_t2490169420  Transform_1_EndInvoke_m2746177112_gshared (Transform_1_t183795173 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2746177112(__this, ___result, method) ((  TrackableResultData_t2490169420  (*) (Transform_1_t183795173 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2746177112_gshared)(__this, ___result, method)
