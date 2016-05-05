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

// UnityStandardAssets.Utility.WaypointCircuit
struct WaypointCircuit_t_1906496954_0;
// UnityEngine.Transform[]
struct TransformU5BU5D_t1323741872_0;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_U127415376.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void UnityStandardAssets.Utility.WaypointCircuit::.ctor()
extern "C"  void WaypointCircuit__ctor_m_869379446_0 (WaypointCircuit_t_1906496954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Utility.WaypointCircuit::get_Length()
extern "C"  float WaypointCircuit_get_Length_m_1425702243_0 (WaypointCircuit_t_1906496954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::set_Length(System.Single)
extern "C"  void WaypointCircuit_set_Length_m23613806_0 (WaypointCircuit_t_1906496954_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit::get_Waypoints()
extern "C"  TransformU5BU5D_t1323741872_0* WaypointCircuit_get_Waypoints_m1220263181_0 (WaypointCircuit_t_1906496954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::Awake()
extern "C"  void WaypointCircuit_Awake_m_631774227_0 (WaypointCircuit_t_1906496954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointCircuit::GetRoutePoint(System.Single)
extern "C"  RoutePoint_t127415376_0  WaypointCircuit_GetRoutePoint_m_1394571510_0 (WaypointCircuit_t_1906496954_0 * __this, float ___dist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::GetRoutePosition(System.Single)
extern "C"  Vector3_t_725341337_0  WaypointCircuit_GetRoutePosition_m_1384292337_0 (WaypointCircuit_t_1906496954_0 * __this, float ___dist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t_725341337_0  WaypointCircuit_CatmullRom_m_505103803_0 (WaypointCircuit_t_1906496954_0 * __this, Vector3_t_725341337_0  ___p0, Vector3_t_725341337_0  ___p1, Vector3_t_725341337_0  ___p2, Vector3_t_725341337_0  ___p3, float ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::CachePositionsAndDistances()
extern "C"  void WaypointCircuit_CachePositionsAndDistances_m_1968139479_0 (WaypointCircuit_t_1906496954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmos()
extern "C"  void WaypointCircuit_OnDrawGizmos_m_874664106_0 (WaypointCircuit_t_1906496954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmosSelected()
extern "C"  void WaypointCircuit_OnDrawGizmosSelected_m1601314385_0 (WaypointCircuit_t_1906496954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::DrawGizmos(System.Boolean)
extern "C"  void WaypointCircuit_DrawGizmos_m82865998_0 (WaypointCircuit_t_1906496954_0 * __this, bool ___selected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
