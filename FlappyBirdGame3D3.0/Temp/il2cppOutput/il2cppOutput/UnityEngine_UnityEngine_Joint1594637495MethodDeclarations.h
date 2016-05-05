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
struct Joint_t1594637495;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rigidbody1972007546.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// UnityEngine.Rigidbody UnityEngine.Joint::get_connectedBody()
extern "C"  Rigidbody_t1972007546 * Joint_get_connectedBody_m3483565964 (Joint_t1594637495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
extern "C"  void Joint_set_connectedBody_m2794572257 (Joint_t1594637495 * __this, Rigidbody_t1972007546 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::set_anchor(UnityEngine.Vector3)
extern "C"  void Joint_set_anchor_m1010170386 (Joint_t1594637495 * __this, Vector3_t3525329789  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::INTERNAL_set_anchor(UnityEngine.Vector3&)
extern "C"  void Joint_INTERNAL_set_anchor_m3282986580 (Joint_t1594637495 * __this, Vector3_t3525329789 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
