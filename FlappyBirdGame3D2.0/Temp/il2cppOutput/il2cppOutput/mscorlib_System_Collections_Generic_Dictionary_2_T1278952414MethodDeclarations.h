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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>
struct Transform_1_t1278952414;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_g25956863.h"
#include "Vuforia_UnityExtensions_Vuforia_WebCamProfile_Prof1845074131.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4165652396_gshared (Transform_1_t1278952414 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m4165652396(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1278952414 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4165652396_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t25956863  Transform_1_Invoke_m3224213324_gshared (Transform_1_t1278952414 * __this, Il2CppObject * ___key, ProfileData_t1845074131  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m3224213324(__this, ___key, ___value, method) ((  KeyValuePair_2_t25956863  (*) (Transform_1_t1278952414 *, Il2CppObject *, ProfileData_t1845074131 , const MethodInfo*))Transform_1_Invoke_m3224213324_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2621851383_gshared (Transform_1_t1278952414 * __this, Il2CppObject * ___key, ProfileData_t1845074131  ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2621851383(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t1278952414 *, Il2CppObject *, ProfileData_t1845074131 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2621851383_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t25956863  Transform_1_EndInvoke_m1839579582_gshared (Transform_1_t1278952414 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1839579582(__this, ___result, method) ((  KeyValuePair_2_t25956863  (*) (Transform_1_t1278952414 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1839579582_gshared)(__this, ___result, method)
