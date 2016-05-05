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

// Vuforia.ObjectTrackerImpl
struct ObjectTrackerImpl_t_997771391_0;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t432668007_0;
// Vuforia.TargetFinder
struct TargetFinder_t_689276593_0;
// Vuforia.DataSet
struct DataSet_t_2109692640_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet>
struct IEnumerable_1_t1802886319_0;

#include "codegen/il2cpp-codegen.h"

// Vuforia.ImageTargetBuilder Vuforia.ObjectTrackerImpl::get_ImageTargetBuilder()
extern "C"  ImageTargetBuilder_t432668007_0 * ObjectTrackerImpl_get_ImageTargetBuilder_m2103646317_0 (ObjectTrackerImpl_t_997771391_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder Vuforia.ObjectTrackerImpl::get_TargetFinder()
extern "C"  TargetFinder_t_689276593_0 * ObjectTrackerImpl_get_TargetFinder_m_1727031299_0 (ObjectTrackerImpl_t_997771391_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::.ctor()
extern "C"  void ObjectTrackerImpl__ctor_m1310261615_0 (ObjectTrackerImpl_t_997771391_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::Start()
extern "C"  bool ObjectTrackerImpl_Start_m_132529119_0 (ObjectTrackerImpl_t_997771391_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::Stop()
extern "C"  void ObjectTrackerImpl_Stop_m701452663_0 (ObjectTrackerImpl_t_997771391_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSet Vuforia.ObjectTrackerImpl::CreateDataSet()
extern "C"  DataSet_t_2109692640_0 * ObjectTrackerImpl_CreateDataSet_m_433215696_0 (ObjectTrackerImpl_t_997771391_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::DestroyDataSet(Vuforia.DataSet,System.Boolean)
extern "C"  bool ObjectTrackerImpl_DestroyDataSet_m1705684856_0 (ObjectTrackerImpl_t_997771391_0 * __this, DataSet_t_2109692640_0 * ___dataSet, bool ___destroyTrackables, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::ActivateDataSet(Vuforia.DataSet)
extern "C"  bool ObjectTrackerImpl_ActivateDataSet_m_732730206_0 (ObjectTrackerImpl_t_997771391_0 * __this, DataSet_t_2109692640_0 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::DeactivateDataSet(Vuforia.DataSet)
extern "C"  bool ObjectTrackerImpl_DeactivateDataSet_m1563794595_0 (ObjectTrackerImpl_t_997771391_0 * __this, DataSet_t_2109692640_0 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::GetActiveDataSets()
extern "C"  Object_t* ObjectTrackerImpl_GetActiveDataSets_m_726216452_0 (ObjectTrackerImpl_t_997771391_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::GetDataSets()
extern "C"  Object_t* ObjectTrackerImpl_GetDataSets_m1882917078_0 (ObjectTrackerImpl_t_997771391_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::DestroyAllDataSets(System.Boolean)
extern "C"  void ObjectTrackerImpl_DestroyAllDataSets_m_871871698_0 (ObjectTrackerImpl_t_997771391_0 * __this, bool ___destroyTrackables, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::PersistExtendedTracking(System.Boolean)
extern "C"  bool ObjectTrackerImpl_PersistExtendedTracking_m1843293434_0 (ObjectTrackerImpl_t_997771391_0 * __this, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::ResetExtendedTracking()
extern "C"  bool ObjectTrackerImpl_ResetExtendedTracking_m125516542_0 (ObjectTrackerImpl_t_997771391_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
