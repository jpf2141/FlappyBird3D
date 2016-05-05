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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>
struct Transform_1_t_867862561_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_System_Collections_DictionaryEntry_1842557272.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1581478971.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1897500081_0_gshared (Transform_1_t_867862561_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1897500081_0(__this, ___object, ___method, method) ((  void (*) (Transform_1_t_867862561_0 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1897500081_0_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t_1842557272_0  Transform_1_Invoke_m1169886311_0_gshared (Transform_1_t_867862561_0 * __this, int32_t ___key, VirtualButtonData_t1581478971_0  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1169886311_0(__this, ___key, ___value, method) ((  DictionaryEntry_t_1842557272_0  (*) (Transform_1_t_867862561_0 *, int32_t, VirtualButtonData_t1581478971_0 , const MethodInfo*))Transform_1_Invoke_m1169886311_0_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m_28676206_0_gshared (Transform_1_t_867862561_0 * __this, int32_t ___key, VirtualButtonData_t1581478971_0  ___value, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m_28676206_0(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t_867862561_0 *, int32_t, VirtualButtonData_t1581478971_0 , AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m_28676206_0_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t_1842557272_0  Transform_1_EndInvoke_m_565600829_0_gshared (Transform_1_t_867862561_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m_565600829_0(__this, ___result, method) ((  DictionaryEntry_t_1842557272_0  (*) (Transform_1_t_867862561_0 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m_565600829_0_gshared)(__this, ___result, method)
