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

// Vuforia.PropAbstractBehaviour
struct PropAbstractBehaviour_t635676768_0;
// Vuforia.Prop
struct Prop_t_1804128357_0;
// UnityEngine.MeshFilter
struct MeshFilter_t_19924914_0;
// UnityEngine.MeshCollider
struct MeshCollider_t_1878661302_0;
// UnityEngine.BoxCollider
struct BoxCollider_t1610448758_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"

// Vuforia.Prop Vuforia.PropAbstractBehaviour::get_Prop()
extern "C"  Object_t * PropAbstractBehaviour_get_Prop_m1791640692_0 (PropAbstractBehaviour_t635676768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::UpdateMeshAndColliders()
extern "C"  void PropAbstractBehaviour_UpdateMeshAndColliders_m_941532046_0 (PropAbstractBehaviour_t635676768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Start()
extern "C"  void PropAbstractBehaviour_Start_m_1045412368_0 (PropAbstractBehaviour_t635676768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void PropAbstractBehaviour_InternalUnregisterTrackable_m_508971622_0 (PropAbstractBehaviour_t635676768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.InitializeProp(Vuforia.Prop)
extern "C"  void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_InitializeProp_m_567392080_0 (PropAbstractBehaviour_t635676768_0 * __this, Object_t * ___prop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.SetMeshFilterToUpdate(UnityEngine.MeshFilter)
extern "C"  void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_SetMeshFilterToUpdate_m_1954786075_0 (PropAbstractBehaviour_t635676768_0 * __this, MeshFilter_t_19924914_0 * ___meshFilterToUpdate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshFilter Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.get_MeshFilterToUpdate()
extern "C"  MeshFilter_t_19924914_0 * PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_get_MeshFilterToUpdate_m1496444829_0 (PropAbstractBehaviour_t635676768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.SetMeshColliderToUpdate(UnityEngine.MeshCollider)
extern "C"  void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_SetMeshColliderToUpdate_m_157999259_0 (PropAbstractBehaviour_t635676768_0 * __this, MeshCollider_t_1878661302_0 * ___meshColliderToUpdate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshCollider Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.get_MeshColliderToUpdate()
extern "C"  MeshCollider_t_1878661302_0 * PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_get_MeshColliderToUpdate_m_520485603_0 (PropAbstractBehaviour_t635676768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.SetBoxColliderToUpdate(UnityEngine.BoxCollider)
extern "C"  void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_SetBoxColliderToUpdate_m535282717_0 (PropAbstractBehaviour_t635676768_0 * __this, BoxCollider_t1610448758_0 * ___boxColliderToUpdate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.BoxCollider Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.get_BoxColliderToUpdate()
extern "C"  BoxCollider_t1610448758_0 * PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_get_BoxColliderToUpdate_m_1286599451_0 (PropAbstractBehaviour_t635676768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::.ctor()
extern "C"  void PropAbstractBehaviour__ctor_m7449840_0 (PropAbstractBehaviour_t635676768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C"  bool PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m_294268852_0 (PropAbstractBehaviour_t635676768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C"  void PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m_722759011_0 (PropAbstractBehaviour_t635676768_0 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C"  Transform_t1584899523_0 * PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m_923019229_0 (PropAbstractBehaviour_t635676768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C"  GameObject_t_184308134_0 * PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m_1648408793_0 (PropAbstractBehaviour_t635676768_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
