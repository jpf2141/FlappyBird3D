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

// Vuforia.ReconstructionFromTargetImpl
struct ReconstructionFromTargetImpl_t3639963509;
// Vuforia.CylinderTarget
struct CylinderTarget_t3460838973;
// Vuforia.ImageTarget
struct ImageTarget_t2294340546;
// Vuforia.MultiTarget
struct MultiTarget_t4153944352;
// Vuforia.Trackable
struct Trackable_t1174201883;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// System.Void Vuforia.ReconstructionFromTargetImpl::.ctor(System.IntPtr)
extern "C"  void ReconstructionFromTargetImpl__ctor_m298934325 (ReconstructionFromTargetImpl_t3639963509 * __this, IntPtr_t ___nativeReconstructionPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m2137691665 (ReconstructionFromTargetImpl_t3639963509 * __this, Il2CppObject * ___cylinderTarget, Vector3_t3525329789  ___occluderMin, Vector3_t3525329789  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m3931279917 (ReconstructionFromTargetImpl_t3639963509 * __this, Il2CppObject * ___cylinderTarget, Vector3_t3525329789  ___occluderMin, Vector3_t3525329789  ___occluderMax, Vector3_t3525329789  ___offsetToOccluderOrigin, Quaternion_t1891715979  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m2482175418 (ReconstructionFromTargetImpl_t3639963509 * __this, Il2CppObject * ___imageTarget, Vector3_t3525329789  ___occluderMin, Vector3_t3525329789  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m490822372 (ReconstructionFromTargetImpl_t3639963509 * __this, Il2CppObject * ___imageTarget, Vector3_t3525329789  ___occluderMin, Vector3_t3525329789  ___occluderMax, Vector3_t3525329789  ___offsetToOccluderOrigin, Quaternion_t1891715979  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m2870989340 (ReconstructionFromTargetImpl_t3639963509 * __this, Il2CppObject * ___multiTarget, Vector3_t3525329789  ___occluderMin, Vector3_t3525329789  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m676879682 (ReconstructionFromTargetImpl_t3639963509 * __this, Il2CppObject * ___multiTarget, Vector3_t3525329789  ___occluderMin, Vector3_t3525329789  ___occluderMax, Vector3_t3525329789  ___offsetToOccluderOrigin, Quaternion_t1891715979  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  Il2CppObject * ReconstructionFromTargetImpl_GetInitializationTarget_m679262140 (ReconstructionFromTargetImpl_t3639963509 * __this, Vector3_t3525329789 * ___occluderMin, Vector3_t3525329789 * ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  Il2CppObject * ReconstructionFromTargetImpl_GetInitializationTarget_m2838270328 (ReconstructionFromTargetImpl_t3639963509 * __this, Vector3_t3525329789 * ___occluderMin, Vector3_t3525329789 * ___occluderMax, Vector3_t3525329789 * ___offsetToOccluderOrigin, Quaternion_t1891715979 * ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Reset()
extern "C"  bool ReconstructionFromTargetImpl_Reset_m2216929338 (ReconstructionFromTargetImpl_t3639963509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Start()
extern "C"  bool ReconstructionFromTargetImpl_Start_m3517634189 (ReconstructionFromTargetImpl_t3639963509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(System.IntPtr,Vuforia.Trackable,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m3681674799 (ReconstructionFromTargetImpl_t3639963509 * __this, IntPtr_t ___datasetPtr, Il2CppObject * ___trackable, Vector3_t3525329789  ___occluderMin, Vector3_t3525329789  ___occluderMax, Vector3_t3525329789  ___offsetToOccluderOrigin, Quaternion_t1891715979  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::get_CanAutoSetInitializationTarget()
extern "C"  bool ReconstructionFromTargetImpl_get_CanAutoSetInitializationTarget_m100261780 (ReconstructionFromTargetImpl_t3639963509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionFromTargetImpl::set_CanAutoSetInitializationTarget(System.Boolean)
extern "C"  void ReconstructionFromTargetImpl_set_CanAutoSetInitializationTarget_m1198447437 (ReconstructionFromTargetImpl_t3639963509 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
