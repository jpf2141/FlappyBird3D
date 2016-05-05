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

// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t2427445838;
// Vuforia.Trackable
struct Trackable_t1174201883;
// System.String
struct String_t;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t2602716514;
// UnityEngine.Renderer
struct Renderer_t1092684080;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour2486352914.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::get_CurrentStatus()
extern "C"  int32_t TrackableBehaviour_get_CurrentStatus_m1220010064 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.TrackableBehaviour::get_Trackable()
extern "C"  Il2CppObject * TrackableBehaviour_get_Trackable_m164939878 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C"  String_t* TrackableBehaviour_get_TrackableName_m2597268552 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Vuforia.TrackableBehaviour::get_TimeStamp()
extern "C"  double TrackableBehaviour_get_TimeStamp_m1755866542 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::set_TimeStamp(System.Double)
extern "C"  void TrackableBehaviour_set_TimeStamp_m1820909477 (TrackableBehaviour_t2427445838 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C"  void TrackableBehaviour_RegisterTrackableEventHandler_m1526298110 (TrackableBehaviour_t2427445838 * __this, Il2CppObject * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::UnregisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C"  bool TrackableBehaviour_UnregisterTrackableEventHandler_m4062845907 (TrackableBehaviour_t2427445838 * __this, Il2CppObject * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status)
extern "C"  void TrackableBehaviour_OnTrackerUpdate_m3112331439 (TrackableBehaviour_t2427445838 * __this, int32_t ___newStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnFrameIndexUpdate(System.Int32)
extern "C"  void TrackableBehaviour_OnFrameIndexUpdate_m4268592732 (TrackableBehaviour_t2427445838 * __this, int32_t ___newFrameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Start()
extern "C"  void TrackableBehaviour_Start_m2188501638 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnDisable()
extern "C"  void TrackableBehaviour_OnDisable_m164522733 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.CorrectScale()
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_CorrectScale_m448576604 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::CorrectScaleImpl()
extern "C"  bool TrackableBehaviour_CorrectScaleImpl_m4251279216 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetNameForTrackable(System.String)
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetNameForTrackable_m3185944659 (TrackableBehaviour_t2427445838 * __this, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_PreviousScale()
extern "C"  Vector3_t3525329789  TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_PreviousScale_m3150986536 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetPreviousScale(UnityEngine.Vector3)
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetPreviousScale_m1561264076 (TrackableBehaviour_t2427445838 * __this, Vector3_t3525329789  ___previousScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_PreserveChildSize()
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_PreserveChildSize_m3714596526 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetPreserveChildSize(System.Boolean)
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetPreserveChildSize_m1109322466 (TrackableBehaviour_t2427445838 * __this, bool ___preserveChildSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_InitializedInEditor()
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_InitializedInEditor_m1175713283 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetInitializedInEditor(System.Boolean)
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetInitializedInEditor_m3200634423 (TrackableBehaviour_t2427445838 * __this, bool ___initializedInEditor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.UnregisterTrackable()
extern "C"  void TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_UnregisterTrackable_m4034672065 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.GetRenderer()
extern "C"  Renderer_t1092684080 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_GetRenderer_m2346965584 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::.ctor()
extern "C"  void TrackableBehaviour__ctor_m3241363846 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m1022598846 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C"  void TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m1984570035 (TrackableBehaviour_t2427445838 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C"  Transform_t284553113 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m14841789 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C"  GameObject_t4012695102 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m3211672983 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
