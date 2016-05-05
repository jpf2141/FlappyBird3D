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

// Vuforia.DataSetTrackableBehaviour
struct DataSetTrackableBehaviour_t1793464454;
// System.String
struct String_t;
// Vuforia.ReconstructionFromTargetAbstractBehaviour
struct ReconstructionFromTargetAbstractBehaviour_t2363955698;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour2486352914.h"
#include "mscorlib_System_String968488902.h"
#include "Vuforia_UnityExtensions_Vuforia_ReconstructionFrom2363955698.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// System.Void Vuforia.DataSetTrackableBehaviour::OnDrawGizmos()
extern "C"  void DataSetTrackableBehaviour_OnDrawGizmos_m3391848104 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status)
extern "C"  void DataSetTrackableBehaviour_OnTrackerUpdate_m3064034173 (DataSetTrackableBehaviour_t1793464454 * __this, int32_t ___newStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::SetAsSmartTerrainInitializationTarget()
extern "C"  bool DataSetTrackableBehaviour_SetAsSmartTerrainInitializationTarget_m1247101433 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_DataSetName()
extern "C"  String_t* DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_DataSetName_m1004378779 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_DataSetPath()
extern "C"  String_t* DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_DataSetPath_m1061848501 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetDataSetPath(System.String)
extern "C"  bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetDataSetPath_m3741909111 (DataSetTrackableBehaviour_t1793464454 * __this, String_t* ___dataSetPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_ExtendedTracking()
extern "C"  bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_ExtendedTracking_m1258644393 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetExtendedTracking(System.Boolean)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetExtendedTracking_m2094034189 (DataSetTrackableBehaviour_t1793464454 * __this, bool ___extendedTracking, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_InitializeSmartTerrain()
extern "C"  bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_InitializeSmartTerrain_m1413308533 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetInitializeSmartTerrain(System.Boolean)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetInitializeSmartTerrain_m3447643929 (DataSetTrackableBehaviour_t1793464454 * __this, bool ___initializeSmartTerrain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ReconstructionFromTargetAbstractBehaviour Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_ReconstructionToInitialize()
extern "C"  ReconstructionFromTargetAbstractBehaviour_t2363955698 * DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_ReconstructionToInitialize_m740731577 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetReconstructionToInitialize(Vuforia.ReconstructionFromTargetAbstractBehaviour)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetReconstructionToInitialize_m3256777645 (DataSetTrackableBehaviour_t1793464454 * __this, ReconstructionFromTargetAbstractBehaviour_t2363955698 * ___reconstructionToInitialize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderBoundsMin()
extern "C"  Vector3_t3525329789  DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderBoundsMin_m3427912825 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetSmartTerrainOccluderBoundsMin(UnityEngine.Vector3)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetSmartTerrainOccluderBoundsMin_m2264934629 (DataSetTrackableBehaviour_t1793464454 * __this, Vector3_t3525329789  ___occluderBoundsMin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderBoundsMax()
extern "C"  Vector3_t3525329789  DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderBoundsMax_m3427684107 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetSmartTerrainOccluderBoundsMax(UnityEngine.Vector3)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetSmartTerrainOccluderBoundsMax_m1991026963 (DataSetTrackableBehaviour_t1793464454 * __this, Vector3_t3525329789  ___occluderBoundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_IsSmartTerrainOccluderOffset()
extern "C"  bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_IsSmartTerrainOccluderOffset_m2959688027 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetIsSmartTerrainOccluderOffset(System.Boolean)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetIsSmartTerrainOccluderOffset_m1855606719 (DataSetTrackableBehaviour_t1793464454 * __this, bool ___isOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderOffset()
extern "C"  Vector3_t3525329789  DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderOffset_m144071513 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetSmartTerrainOccluderOffset(UnityEngine.Vector3)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetSmartTerrainOccluderOffset_m4011410395 (DataSetTrackableBehaviour_t1793464454 * __this, Vector3_t3525329789  ___occluderOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderRotation()
extern "C"  Quaternion_t1891715979  DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderRotation_m1567187024 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetSmartTerrainOccluderRotation(UnityEngine.Quaternion)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetSmartTerrainOccluderRotation_m698697716 (DataSetTrackableBehaviour_t1793464454 * __this, Quaternion_t1891715979  ___occluderRotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderLockedInPlace()
extern "C"  bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderLockedInPlace_m4279365788 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetLockSmartTerrainOccluderInPlace(System.Boolean)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetLockSmartTerrainOccluderInPlace_m2558497861 (DataSetTrackableBehaviour_t1793464454 * __this, bool ___lockOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.GetDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_GetDefaultOccluderBounds_m328800623 (DataSetTrackableBehaviour_t1793464454 * __this, Vector3_t3525329789 * ___boundsMin, Vector3_t3525329789 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_AutoSetOccluderFromTargetSize()
extern "C"  bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_AutoSetOccluderFromTargetSize_m2076537233 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetAutoSetOccluderFromTargetSize(System.Boolean)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetAutoSetOccluderFromTargetSize_m1379059387 (DataSetTrackableBehaviour_t1793464454 * __this, bool ___autoset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::.ctor()
extern "C"  void DataSetTrackableBehaviour__ctor_m795032440 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C"  bool DataSetTrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m3904998868 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m2167663397 (DataSetTrackableBehaviour_t1793464454 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C"  Transform_t284553113 * DataSetTrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m647232939 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C"  GameObject_t4012695102 * DataSetTrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m2471138591 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
