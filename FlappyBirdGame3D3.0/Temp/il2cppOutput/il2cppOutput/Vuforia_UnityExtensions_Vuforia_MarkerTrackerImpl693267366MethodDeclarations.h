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

// Vuforia.MarkerTrackerImpl
struct MarkerTrackerImpl_t693267366_0;
// Vuforia.MarkerAbstractBehaviour
struct MarkerAbstractBehaviour_t1467944553_0;
// System.String
struct String_t;
// Vuforia.Marker
struct Marker_t1297937010_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.Marker>
struct IEnumerable_1_t1393887323_0;

#include "codegen/il2cpp-codegen.h"

// System.Boolean Vuforia.MarkerTrackerImpl::Start()
extern "C"  bool MarkerTrackerImpl_Start_m21391772_0 (MarkerTrackerImpl_t693267366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerTrackerImpl::Stop()
extern "C"  void MarkerTrackerImpl_Stop_m_401960804_0 (MarkerTrackerImpl_t693267366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.MarkerTrackerImpl::CreateMarker(System.Int32,System.String,System.Single)
extern "C"  MarkerAbstractBehaviour_t1467944553_0 * MarkerTrackerImpl_CreateMarker_m_190412252_0 (MarkerTrackerImpl_t693267366_0 * __this, int32_t ___markerID, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MarkerTrackerImpl::DestroyMarker(Vuforia.Marker,System.Boolean)
extern "C"  bool MarkerTrackerImpl_DestroyMarker_m_2112034411_0 (MarkerTrackerImpl_t693267366_0 * __this, Object_t * ___marker, bool ___destroyGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Marker> Vuforia.MarkerTrackerImpl::GetMarkers()
extern "C"  Object_t* MarkerTrackerImpl_GetMarkers_m85309073_0 (MarkerTrackerImpl_t693267366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Marker Vuforia.MarkerTrackerImpl::GetMarkerByMarkerID(System.Int32)
extern "C"  Object_t * MarkerTrackerImpl_GetMarkerByMarkerID_m_1779914806_0 (MarkerTrackerImpl_t693267366_0 * __this, int32_t ___markerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Marker Vuforia.MarkerTrackerImpl::InternalCreateMarker(System.Int32,System.String,System.Single)
extern "C"  Object_t * MarkerTrackerImpl_InternalCreateMarker_m738137354_0 (MarkerTrackerImpl_t693267366_0 * __this, int32_t ___markerID, String_t* ___name, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerTrackerImpl::DestroyAllMarkers(System.Boolean)
extern "C"  void MarkerTrackerImpl_DestroyAllMarkers_m1695413041_0 (MarkerTrackerImpl_t693267366_0 * __this, bool ___destroyGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.MarkerTrackerImpl::RegisterMarker(System.Int32,System.String,System.Single)
extern "C"  int32_t MarkerTrackerImpl_RegisterMarker_m181167997_0 (MarkerTrackerImpl_t693267366_0 * __this, int32_t ___markerID, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerTrackerImpl::.ctor()
extern "C"  void MarkerTrackerImpl__ctor_m1464182506_0 (MarkerTrackerImpl_t693267366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
