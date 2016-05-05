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

// UnityEngine.Joint
struct Joint_t_382482847_0;
// UnityEngine.Rigidbody
struct Rigidbody_t_1022613340_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// UnityEngine.Rigidbody UnityEngine.Joint::get_connectedBody()
extern "C"  Rigidbody_t_1022613340_0 * Joint_get_connectedBody_m_811401332_0 (Joint_t_382482847_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
extern "C"  void Joint_set_connectedBody_m_1500395039_0 (Joint_t_382482847_0 * __this, Rigidbody_t_1022613340_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::set_anchor(UnityEngine.Vector3)
extern "C"  void Joint_set_anchor_m1010170386_0 (Joint_t_382482847_0 * __this, Vector3_t_725341337_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::INTERNAL_set_anchor(UnityEngine.Vector3&)
extern "C"  void Joint_INTERNAL_set_anchor_m_1011980716_0 (Joint_t_382482847_0 * __this, Vector3_t_725341337_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
