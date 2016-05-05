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

// System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,Vuforia.Image/PIXEL_FORMAT>
struct Transform_1_t395543974;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT3232215024.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,Vuforia.Image/PIXEL_FORMAT>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3322767563_gshared (Transform_1_t395543974 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m3322767563(__this, ___object, ___method, method) ((  void (*) (Transform_1_t395543974 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3322767563_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,Vuforia.Image/PIXEL_FORMAT>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m312612689_gshared (Transform_1_t395543974 * __this, int32_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m312612689(__this, ___key, ___value, method) ((  int32_t (*) (Transform_1_t395543974 *, int32_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m312612689_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,Vuforia.Image/PIXEL_FORMAT>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m749492784_gshared (Transform_1_t395543974 * __this, int32_t ___key, Il2CppObject * ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m749492784(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t395543974 *, int32_t, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m749492784_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,Vuforia.Image/PIXEL_FORMAT>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m3285810329_gshared (Transform_1_t395543974 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3285810329(__this, ___result, method) ((  int32_t (*) (Transform_1_t395543974 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3285810329_gshared)(__this, ___result, method)
