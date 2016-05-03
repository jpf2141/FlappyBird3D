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
struct ObjectTargetAbstractBehaviour_t4270136289;
// Vuforia.ObjectTarget
struct ObjectTarget_t1628866278;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t1377534133;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"

// System.Void Vuforia.ObjectTargetAbstractBehaviour::.ctor()
extern "C"  void ObjectTargetAbstractBehaviour__ctor_m2769949693 (ObjectTargetAbstractBehaviour_t4270136289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ObjectTarget Vuforia.ObjectTargetAbstractBehaviour::get_ObjectTarget()
extern "C"  Il2CppObject * ObjectTargetAbstractBehaviour_get_ObjectTarget_m3816047201 (ObjectTargetAbstractBehaviour_t4270136289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::OnDrawGizmos()
extern "C"  void ObjectTargetAbstractBehaviour_OnDrawGizmos_m2442000003 (ObjectTargetAbstractBehaviour_t4270136289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::CorrectScaleImpl()
extern "C"  bool ObjectTargetAbstractBehaviour_CorrectScaleImpl_m3135116277 (ObjectTargetAbstractBehaviour_t4270136289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void ObjectTargetAbstractBehaviour_InternalUnregisterTrackable_m3514803431 (ObjectTargetAbstractBehaviour_t4270136289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void ObjectTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m692000342 (ObjectTargetAbstractBehaviour_t4270136289 * __this, Vector3_t3525329789 * ___boundsMin, Vector3_t3525329789 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C"  void ObjectTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m3036105151 (ObjectTargetAbstractBehaviour_t4270136289 * __this, Il2CppObject * ___reconstructionFromTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetBoundingBox(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void ObjectTargetAbstractBehaviour_SetBoundingBox_m936914112 (ObjectTargetAbstractBehaviour_t4270136289 * __this, Vector3_t3525329789  ___minBBox, Vector3_t3525329789  ___maxBBox, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.ObjectTargetAbstractBehaviour::GetSize()
extern "C"  Vector3_t3525329789  ObjectTargetAbstractBehaviour_GetSize_m1409366476 (ObjectTargetAbstractBehaviour_t4270136289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetLength(System.Single)
extern "C"  void ObjectTargetAbstractBehaviour_SetLength_m2431470216 (ObjectTargetAbstractBehaviour_t4270136289 * __this, float ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetWidth(System.Single)
extern "C"  void ObjectTargetAbstractBehaviour_SetWidth_m2850660192 (ObjectTargetAbstractBehaviour_t4270136289 * __this, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetHeight(System.Single)
extern "C"  void ObjectTargetAbstractBehaviour_SetHeight_m622168615 (ObjectTargetAbstractBehaviour_t4270136289 * __this, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_AspectRatioXY()
extern "C"  float ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_AspectRatioXY_m3946926619 (ObjectTargetAbstractBehaviour_t4270136289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_AspectRatioXZ()
extern "C"  float ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_AspectRatioXZ_m3946927580 (ObjectTargetAbstractBehaviour_t4270136289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.SetAspectRatio(System.Single,System.Single)
extern "C"  bool ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_SetAspectRatio_m454613831 (ObjectTargetAbstractBehaviour_t4270136289 * __this, float ___aspectRatioXY, float ___aspectRatioXZ, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.InitializeObjectTarget(Vuforia.ObjectTarget)
extern "C"  void ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_InitializeObjectTarget_m2790733802 (ObjectTargetAbstractBehaviour_t4270136289 * __this, Il2CppObject * ___objectTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.SetShowBoundingBox(System.Boolean)
extern "C"  void ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_SetShowBoundingBox_m1088422565 (ObjectTargetAbstractBehaviour_t4270136289 * __this, bool ___showBoundingBox, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_ShowBoundingBox()
extern "C"  bool ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_ShowBoundingBox_m3186381739 (ObjectTargetAbstractBehaviour_t4270136289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_PreviewImage()
extern "C"  Texture2D_t2509538522 * ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_PreviewImage_m239481439 (ObjectTargetAbstractBehaviour_t4270136289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.SetPreviewImage(UnityEngine.Texture2D)
extern "C"  void ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_SetPreviewImage_m2267525643 (ObjectTargetAbstractBehaviour_t4270136289 * __this, Texture2D_t2509538522 * ___previewImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C"  bool ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m3571225689 (ObjectTargetAbstractBehaviour_t4270136289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C"  void ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m1932070378 (ObjectTargetAbstractBehaviour_t4270136289 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C"  Transform_t284553113 * ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m1885872368 (ObjectTargetAbstractBehaviour_t4270136289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C"  GameObject_t4012695102 * ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m2582928634 (ObjectTargetAbstractBehaviour_t4270136289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
