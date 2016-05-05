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
struct ReconstructionFromTargetImpl_t318825079_0;
// Vuforia.CylinderTarget
struct CylinderTarget_t_1266207937_0;
// Vuforia.ImageTarget
struct ImageTarget_t_576971884_0;
// Vuforia.MultiTarget
struct MultiTarget_t1282631922_0;
// Vuforia.Trackable
struct Trackable_t915029997_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"

// System.Void Vuforia.ReconstructionFromTargetImpl::.ctor(System.IntPtr)
extern "C"  void ReconstructionFromTargetImpl__ctor_m298934325_0 (ReconstructionFromTargetImpl_t318825079_0 * __this, IntPtr_t ___nativeReconstructionPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m2137691665_0 (ReconstructionFromTargetImpl_t318825079_0 * __this, Object_t * ___cylinderTarget, Vector3_t_725341337_0  ___occluderMin, Vector3_t_725341337_0  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m_363687379_0 (ReconstructionFromTargetImpl_t318825079_0 * __this, Object_t * ___cylinderTarget, Vector3_t_725341337_0  ___occluderMin, Vector3_t_725341337_0  ___occluderMax, Vector3_t_725341337_0  ___offsetToOccluderOrigin, Quaternion_t1989680039_0  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m_1812791878_0 (ReconstructionFromTargetImpl_t318825079_0 * __this, Object_t * ___imageTarget, Vector3_t_725341337_0  ___occluderMin, Vector3_t_725341337_0  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m490822372_0 (ReconstructionFromTargetImpl_t318825079_0 * __this, Object_t * ___imageTarget, Vector3_t_725341337_0  ___occluderMin, Vector3_t_725341337_0  ___occluderMax, Vector3_t_725341337_0  ___offsetToOccluderOrigin, Quaternion_t1989680039_0  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m_1423977956_0 (ReconstructionFromTargetImpl_t318825079_0 * __this, Object_t * ___multiTarget, Vector3_t_725341337_0  ___occluderMin, Vector3_t_725341337_0  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m676879682_0 (ReconstructionFromTargetImpl_t318825079_0 * __this, Object_t * ___multiTarget, Vector3_t_725341337_0  ___occluderMin, Vector3_t_725341337_0  ___occluderMax, Vector3_t_725341337_0  ___offsetToOccluderOrigin, Quaternion_t1989680039_0  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  Object_t * ReconstructionFromTargetImpl_GetInitializationTarget_m679262140_0 (ReconstructionFromTargetImpl_t318825079_0 * __this, Vector3_t_725341337_0 * ___occluderMin, Vector3_t_725341337_0 * ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  Object_t * ReconstructionFromTargetImpl_GetInitializationTarget_m_1456696968_0 (ReconstructionFromTargetImpl_t318825079_0 * __this, Vector3_t_725341337_0 * ___occluderMin, Vector3_t_725341337_0 * ___occluderMax, Vector3_t_725341337_0 * ___offsetToOccluderOrigin, Quaternion_t1989680039_0 * ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Reset()
extern "C"  bool ReconstructionFromTargetImpl_Reset_m_2078037958_0 (ReconstructionFromTargetImpl_t318825079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Start()
extern "C"  bool ReconstructionFromTargetImpl_Start_m_777333107_0 (ReconstructionFromTargetImpl_t318825079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(System.IntPtr,Vuforia.Trackable,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m_613292497_0 (ReconstructionFromTargetImpl_t318825079_0 * __this, IntPtr_t ___datasetPtr, Object_t * ___trackable, Vector3_t_725341337_0  ___occluderMin, Vector3_t_725341337_0  ___occluderMax, Vector3_t_725341337_0  ___offsetToOccluderOrigin, Quaternion_t1989680039_0  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::get_CanAutoSetInitializationTarget()
extern "C"  bool ReconstructionFromTargetImpl_get_CanAutoSetInitializationTarget_m100261780_0 (ReconstructionFromTargetImpl_t318825079_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionFromTargetImpl::set_CanAutoSetInitializationTarget(System.Boolean)
extern "C"  void ReconstructionFromTargetImpl_set_CanAutoSetInitializationTarget_m1198447437_0 (ReconstructionFromTargetImpl_t318825079_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
