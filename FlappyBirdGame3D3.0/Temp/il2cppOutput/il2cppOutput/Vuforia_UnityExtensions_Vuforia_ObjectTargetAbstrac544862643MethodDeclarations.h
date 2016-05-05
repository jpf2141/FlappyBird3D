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

// Vuforia.ObjectTargetAbstractBehaviour
struct ObjectTargetAbstractBehaviour_t544862643_0;
// Vuforia.ObjectTarget
struct ObjectTarget_t_1036703256_0;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t1984085943_0;
// UnityEngine.Texture2D
struct Texture2D_t_485082364_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void Vuforia.ObjectTargetAbstractBehaviour::.ctor()
extern "C"  void ObjectTargetAbstractBehaviour__ctor_m_1525017603_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ObjectTarget Vuforia.ObjectTargetAbstractBehaviour::get_ObjectTarget()
extern "C"  Object_t * ObjectTargetAbstractBehaviour_get_ObjectTarget_m_478920095_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::OnDrawGizmos()
extern "C"  void ObjectTargetAbstractBehaviour_OnDrawGizmos_m_1852967293_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::CorrectScaleImpl()
extern "C"  bool ObjectTargetAbstractBehaviour_CorrectScaleImpl_m_1159851019_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void ObjectTargetAbstractBehaviour_InternalUnregisterTrackable_m_780163865_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void ObjectTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m692000342_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, Vector3_t_725341337_0 * ___boundsMin, Vector3_t_725341337_0 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C"  void ObjectTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m_1258862145_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, Object_t * ___reconstructionFromTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetBoundingBox(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void ObjectTargetAbstractBehaviour_SetBoundingBox_m936914112_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, Vector3_t_725341337_0  ___minBBox, Vector3_t_725341337_0  ___maxBBox, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.ObjectTargetAbstractBehaviour::GetSize()
extern "C"  Vector3_t_725341337_0  ObjectTargetAbstractBehaviour_GetSize_m1409366476_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetLength(System.Single)
extern "C"  void ObjectTargetAbstractBehaviour_SetLength_m_1863497080_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, float ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetWidth(System.Single)
extern "C"  void ObjectTargetAbstractBehaviour_SetWidth_m_1444307104_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetHeight(System.Single)
extern "C"  void ObjectTargetAbstractBehaviour_SetHeight_m622168615_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_AspectRatioXY()
extern "C"  float ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_AspectRatioXY_m_348040677_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_AspectRatioXZ()
extern "C"  float ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_AspectRatioXZ_m_348039716_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.SetAspectRatio(System.Single,System.Single)
extern "C"  bool ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_SetAspectRatio_m454613831_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, float ___aspectRatioXY, float ___aspectRatioXZ, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.InitializeObjectTarget(Vuforia.ObjectTarget)
extern "C"  void ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_InitializeObjectTarget_m_1504233494_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, Object_t * ___objectTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.SetShowBoundingBox(System.Boolean)
extern "C"  void ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_SetShowBoundingBox_m1088422565_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, bool ___showBoundingBox, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_ShowBoundingBox()
extern "C"  bool ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_ShowBoundingBox_m_1108585557_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_PreviewImage()
extern "C"  Texture2D_t_485082364_0 * ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_PreviewImage_m239481439_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.SetPreviewImage(UnityEngine.Texture2D)
extern "C"  void ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_SetPreviewImage_m_2027441653_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, Texture2D_t_485082364_0 * ___previewImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C"  bool ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m_723741607_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C"  void ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m1932070378_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C"  Transform_t1584899523_0 * ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m1885872368_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C"  GameObject_t_184308134_0 * ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m_1712038662_0 (ObjectTargetAbstractBehaviour_t544862643_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
