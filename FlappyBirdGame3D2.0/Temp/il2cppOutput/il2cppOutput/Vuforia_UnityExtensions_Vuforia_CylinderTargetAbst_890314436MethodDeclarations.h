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

// Vuforia.CylinderTargetAbstractBehaviour
struct CylinderTargetAbstractBehaviour_t_890314436_0;
// Vuforia.CylinderTarget
struct CylinderTarget_t_1266207937_0;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t1984085943_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// Vuforia.CylinderTarget Vuforia.CylinderTargetAbstractBehaviour::get_CylinderTarget()
extern "C"  Object_t * CylinderTargetAbstractBehaviour_get_CylinderTarget_m101371096_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_SideLength()
extern "C"  float CylinderTargetAbstractBehaviour_get_SideLength_m_1450385462_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_TopDiameter()
extern "C"  float CylinderTargetAbstractBehaviour_get_TopDiameter_m367556631_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_BottomDiameter()
extern "C"  float CylinderTargetAbstractBehaviour_get_BottomDiameter_m356456389_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetSideLength(System.Single)
extern "C"  bool CylinderTargetAbstractBehaviour_SetSideLength_m_1595625080_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetTopDiameter(System.Single)
extern "C"  bool CylinderTargetAbstractBehaviour_SetTopDiameter_m_1922925459_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetBottomDiameter(System.Single)
extern "C"  bool CylinderTargetAbstractBehaviour_SetBottomDiameter_m_1115652627_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::OnFrameIndexUpdate(System.Int32)
extern "C"  void CylinderTargetAbstractBehaviour_OnFrameIndexUpdate_m803441742_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, int32_t ___newFrameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::CorrectScaleImpl()
extern "C"  bool CylinderTargetAbstractBehaviour_CorrectScaleImpl_m_735354690_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void CylinderTargetAbstractBehaviour_InternalUnregisterTrackable_m1409299710_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void CylinderTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m1033445357_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, Vector3_t_725341337_0 * ___boundsMin, Vector3_t_725341337_0 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C"  void CylinderTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m398628936_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, Object_t * ___reconstructionFromTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::GetScale()
extern "C"  float CylinderTargetAbstractBehaviour_GetScale_m1950537336_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetScale(System.Single)
extern "C"  bool CylinderTargetAbstractBehaviour_SetScale_m246521573_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::ApplyScale(System.Single)
extern "C"  void CylinderTargetAbstractBehaviour_ApplyScale_m699935103_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorCylinderTargetBehaviour.InitializeCylinderTarget(Vuforia.CylinderTarget)
extern "C"  void CylinderTargetAbstractBehaviour_Vuforia_IEditorCylinderTargetBehaviour_InitializeCylinderTarget_m_368980680_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, Object_t * ___cylinderTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorCylinderTargetBehaviour.SetAspectRatio(System.Single,System.Single)
extern "C"  void CylinderTargetAbstractBehaviour_Vuforia_IEditorCylinderTargetBehaviour_SetAspectRatio_m_2042344437_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, float ___topRatio, float ___bottomRatio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::.ctor()
extern "C"  void CylinderTargetAbstractBehaviour__ctor_m1041092436_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C"  bool CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m_986347472_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C"  void CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m_1647607295_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C"  Transform_t1584899523_0 * CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m666234887_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C"  GameObject_t_184308134_0 * CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m_215926269_0 (CylinderTargetAbstractBehaviour_t_890314436_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
