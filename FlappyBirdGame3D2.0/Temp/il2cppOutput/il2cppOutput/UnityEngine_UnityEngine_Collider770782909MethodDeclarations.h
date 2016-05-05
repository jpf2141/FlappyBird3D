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

// UnityEngine.Collider
struct Collider_t770782909_0;
// UnityEngine.Rigidbody
struct Rigidbody_t_1022613340_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Ray1215250369.h"
#include "UnityEngine_UnityEngine_RaycastHit144185587.h"

// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C"  void Collider_set_enabled_m_1719296430_0 (Collider_t770782909_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C"  Rigidbody_t_1022613340_0 * Collider_get_attachedRigidbody_m_1473212454_0 (Collider_t770782909_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Collider_Internal_Raycast_m_1342908334_0 (Object_t * __this /* static, unused */, Collider_t770782909_0 * ___col, Ray_t1215250369_0  ___ray, RaycastHit_t144185587_0 * ___hitInfo, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::INTERNAL_CALL_Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray&,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Collider_INTERNAL_CALL_Internal_Raycast_m_1438948365_0 (Object_t * __this /* static, unused */, Collider_t770782909_0 * ___col, Ray_t1215250369_0 * ___ray, RaycastHit_t144185587_0 * ___hitInfo, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Collider_Raycast_m_520893903_0 (Collider_t770782909_0 * __this, Ray_t1215250369_0  ___ray, RaycastHit_t144185587_0 * ___hitInfo, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
