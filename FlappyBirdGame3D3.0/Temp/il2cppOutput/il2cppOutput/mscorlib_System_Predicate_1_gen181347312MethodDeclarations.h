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

// System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>
struct Predicate_1_t181347312;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinder_Targe3905350710.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m956249021_gshared (Predicate_1_t181347312 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m956249021(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t181347312 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m956249021_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m3881059177_gshared (Predicate_1_t181347312 * __this, TargetSearchResult_t3905350710  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m3881059177(__this, ___obj, method) ((  bool (*) (Predicate_1_t181347312 *, TargetSearchResult_t3905350710 , const MethodInfo*))Predicate_1_Invoke_m3881059177_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m1989953852_gshared (Predicate_1_t181347312 * __this, TargetSearchResult_t3905350710  ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m1989953852(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t181347312 *, TargetSearchResult_t3905350710 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m1989953852_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m548498443_gshared (Predicate_1_t181347312 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m548498443(__this, ___result, method) ((  bool (*) (Predicate_1_t181347312 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m548498443_gshared)(__this, ___result, method)
