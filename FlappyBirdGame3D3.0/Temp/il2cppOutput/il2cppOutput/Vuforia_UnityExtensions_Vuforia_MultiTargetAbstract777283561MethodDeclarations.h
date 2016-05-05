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

// Vuforia.MultiTargetAbstractBehaviour
struct MultiTargetAbstractBehaviour_t777283561_0;
// Vuforia.MultiTarget
struct MultiTarget_t1282631922_0;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t1984085943_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// Vuforia.MultiTarget Vuforia.MultiTargetAbstractBehaviour::get_MultiTarget()
extern "C"  Object_t * MultiTargetAbstractBehaviour_get_MultiTarget_m_957121609_0 (MultiTargetAbstractBehaviour_t777283561_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void MultiTargetAbstractBehaviour_InternalUnregisterTrackable_m1673411127_0 (MultiTargetAbstractBehaviour_t777283561_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void MultiTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m_1175522394_0 (MultiTargetAbstractBehaviour_t777283561_0 * __this, Vector3_t_725341337_0 * ___boundsMin, Vector3_t_725341337_0 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C"  void MultiTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m_1417489809_0 (MultiTargetAbstractBehaviour_t777283561_0 * __this, Object_t * ___reconstructionFromTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorMultiTargetBehaviour.InitializeMultiTarget(Vuforia.MultiTarget)
extern "C"  void MultiTargetAbstractBehaviour_Vuforia_IEditorMultiTargetBehaviour_InitializeMultiTarget_m124836704_0 (MultiTargetAbstractBehaviour_t777283561_0 * __this, Object_t * ___multiTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::.ctor()
extern "C"  void MultiTargetAbstractBehaviour__ctor_m_1141668531_0 (MultiTargetAbstractBehaviour_t777283561_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C"  bool MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m_1542328827_0 (MultiTargetAbstractBehaviour_t777283561_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C"  void MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m1899914042_0 (MultiTargetAbstractBehaviour_t777283561_0 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C"  Transform_t1584899523_0 * MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m1300097092_0 (MultiTargetAbstractBehaviour_t777283561_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C"  GameObject_t_184308134_0 * MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m_613648464_0 (MultiTargetAbstractBehaviour_t777283561_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
