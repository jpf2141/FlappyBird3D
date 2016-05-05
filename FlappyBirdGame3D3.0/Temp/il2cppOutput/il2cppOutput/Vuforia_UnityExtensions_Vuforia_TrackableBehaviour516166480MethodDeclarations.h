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
struct TrackableBehaviour_t516166480_0;
// Vuforia.Trackable
struct Trackable_t915029997_0;
// System.String
struct String_t;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t_1152273820_0;
// UnityEngine.Renderer
struct Renderer_t907796364_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_203018319.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::get_CurrentStatus()
extern "C"  int32_t TrackableBehaviour_get_CurrentStatus_m1220010064_0 (TrackableBehaviour_t516166480_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.TrackableBehaviour::get_Trackable()
extern "C"  Object_t * TrackableBehaviour_get_Trackable_m164939878_0 (TrackableBehaviour_t516166480_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C"  String_t* TrackableBehaviour_get_TrackableName_m_1697698744_0 (TrackableBehaviour_t516166480_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Vuforia.TrackableBehaviour::get_TimeStamp()
extern "C"  double TrackableBehaviour_get_TimeStamp_m1755866542_0 (TrackableBehaviour_t516166480_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::set_TimeStamp(System.Double)
extern "C"  void TrackableBehaviour_set_TimeStamp_m1820909477_0 (TrackableBehaviour_t516166480_0 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C"  void TrackableBehaviour_RegisterTrackableEventHandler_m1526298110_0 (TrackableBehaviour_t516166480_0 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::UnregisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C"  bool TrackableBehaviour_UnregisterTrackableEventHandler_m_232121389_0 (TrackableBehaviour_t516166480_0 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status)
extern "C"  void TrackableBehaviour_OnTrackerUpdate_m_1182635857_0 (TrackableBehaviour_t516166480_0 * __this, int32_t ___newStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnFrameIndexUpdate(System.Int32)
extern "C"  void TrackableBehaviour_OnFrameIndexUpdate_m_26374564_0 (TrackableBehaviour_t516166480_0 * __this, int32_t ___newFrameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Start()
extern "C"  void TrackableBehaviour_Start_m_2106465658_0 (TrackableBehaviour_t516166480_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnDisable()
extern "C"  void TrackableBehaviour_OnDisable_m164522733_0 (TrackableBehaviour_t516166480_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.CorrectScale()
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_CorrectScale_m448576604_0 (TrackableBehaviour_t516166480_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::CorrectScaleImpl()
extern "C"  bool TrackableBehaviour_CorrectScaleImpl_m_43688080_0 (TrackableBehaviour_t516166480_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetNameForTrackable(System.String)
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetNameForTrackable_m_1109022637_0 (TrackableBehaviour_t516166480_0 * __this, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_PreviousScale()
extern "C"  Vector3_t_725341337_0  TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_PreviousScale_m_1143980760_0 (TrackableBehaviour_t516166480_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetPreviousScale(UnityEngine.Vector3)
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetPreviousScale_m1561264076_0 (TrackableBehaviour_t516166480_0 * __this, Vector3_t_725341337_0  ___previousScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_PreserveChildSize()
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_PreserveChildSize_m_580370770_0 (TrackableBehaviour_t516166480_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetPreserveChildSize(System.Boolean)
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetPreserveChildSize_m1109322466_0 (TrackableBehaviour_t516166480_0 * __this, bool ___preserveChildSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_InitializedInEditor()
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_InitializedInEditor_m1175713283_0 (TrackableBehaviour_t516166480_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetInitializedInEditor(System.Boolean)
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetInitializedInEditor_m_1094332873_0 (TrackableBehaviour_t516166480_0 * __this, bool ___initializedInEditor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.UnregisterTrackable()
extern "C"  void TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_UnregisterTrackable_m_260295231_0 (TrackableBehaviour_t516166480_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.GetRenderer()
extern "C"  Renderer_t907796364_0 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_GetRenderer_m_1948001712_0 (TrackableBehaviour_t516166480_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::.ctor()
extern "C"  void TrackableBehaviour__ctor_m_1053603450_0 (TrackableBehaviour_t516166480_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m1022598846_0 (TrackableBehaviour_t516166480_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C"  void TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m1984570035_0 (TrackableBehaviour_t516166480_0 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C"  Transform_t1584899523_0 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m14841789_0 (TrackableBehaviour_t516166480_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C"  GameObject_t_184308134_0 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m_1083294313_0 (TrackableBehaviour_t516166480_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
