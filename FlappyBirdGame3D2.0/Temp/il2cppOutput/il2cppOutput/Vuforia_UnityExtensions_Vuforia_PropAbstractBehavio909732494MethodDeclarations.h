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
struct PropAbstractBehaviour_t909732494;
// Vuforia.Prop
struct Prop_t2737501337;
// UnityEngine.MeshFilter
struct MeshFilter_t4177078322;
// UnityEngine.MeshCollider
struct MeshCollider_t1080724846;
// UnityEngine.BoxCollider
struct BoxCollider_t131631884;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_MeshFilter4177078322.h"
#include "UnityEngine_UnityEngine_MeshCollider1080724846.h"
#include "UnityEngine_UnityEngine_BoxCollider131631884.h"

// Vuforia.Prop Vuforia.PropAbstractBehaviour::get_Prop()
extern "C"  Il2CppObject * PropAbstractBehaviour_get_Prop_m1791640692 (PropAbstractBehaviour_t909732494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::UpdateMeshAndColliders()
extern "C"  void PropAbstractBehaviour_UpdateMeshAndColliders_m3353435250 (PropAbstractBehaviour_t909732494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Start()
extern "C"  void PropAbstractBehaviour_Start_m3249554928 (PropAbstractBehaviour_t909732494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void PropAbstractBehaviour_InternalUnregisterTrackable_m3785995674 (PropAbstractBehaviour_t909732494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.InitializeProp(Vuforia.Prop)
extern "C"  void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_InitializeProp_m3727575216 (PropAbstractBehaviour_t909732494 * __this, Il2CppObject * ___prop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.SetMeshFilterToUpdate(UnityEngine.MeshFilter)
extern "C"  void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_SetMeshFilterToUpdate_m2340181221 (PropAbstractBehaviour_t909732494 * __this, MeshFilter_t4177078322 * ___meshFilterToUpdate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshFilter Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.get_MeshFilterToUpdate()
extern "C"  MeshFilter_t4177078322 * PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_get_MeshFilterToUpdate_m1496444829 (PropAbstractBehaviour_t909732494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.SetMeshColliderToUpdate(UnityEngine.MeshCollider)
extern "C"  void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_SetMeshColliderToUpdate_m4136968037 (PropAbstractBehaviour_t909732494 * __this, MeshCollider_t1080724846 * ___meshColliderToUpdate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshCollider Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.get_MeshColliderToUpdate()
extern "C"  MeshCollider_t1080724846 * PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_get_MeshColliderToUpdate_m3774481693 (PropAbstractBehaviour_t909732494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.SetBoxColliderToUpdate(UnityEngine.BoxCollider)
extern "C"  void PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_SetBoxColliderToUpdate_m535282717 (PropAbstractBehaviour_t909732494 * __this, BoxCollider_t131631884 * ___boxColliderToUpdate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.BoxCollider Vuforia.PropAbstractBehaviour::Vuforia.IEditorPropBehaviour.get_BoxColliderToUpdate()
extern "C"  BoxCollider_t131631884 * PropAbstractBehaviour_Vuforia_IEditorPropBehaviour_get_BoxColliderToUpdate_m3008367845 (PropAbstractBehaviour_t909732494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::.ctor()
extern "C"  void PropAbstractBehaviour__ctor_m7449840 (PropAbstractBehaviour_t909732494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C"  bool PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m4000698444 (PropAbstractBehaviour_t909732494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C"  void PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m3572208285 (PropAbstractBehaviour_t909732494 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C"  Transform_t284553113 * PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m3371948067 (PropAbstractBehaviour_t909732494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.PropAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C"  GameObject_t4012695102 * PropAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m2646558503 (PropAbstractBehaviour_t909732494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
