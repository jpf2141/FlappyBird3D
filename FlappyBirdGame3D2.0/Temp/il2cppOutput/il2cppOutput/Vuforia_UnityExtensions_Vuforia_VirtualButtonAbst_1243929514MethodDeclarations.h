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

// Vuforia.VirtualButtonAbstractBehaviour
struct VirtualButtonAbstractBehaviour_t_1243929514_0;
// System.String
struct String_t;
// Vuforia.VirtualButton
struct VirtualButton_t_1353895707_0;
// Vuforia.IVirtualButtonEventHandler
struct IVirtualButtonEventHandler_t_1901440036_0;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t_440988281_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.Renderer
struct Renderer_t907796364_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "Vuforia_UnityExtensions_Vuforia_VirtualButton_Sensi_18537387.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"

// System.String Vuforia.VirtualButtonAbstractBehaviour::get_VirtualButtonName()
extern "C"  String_t* VirtualButtonAbstractBehaviour_get_VirtualButtonName_m1249475962_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_Pressed()
extern "C"  bool VirtualButtonAbstractBehaviour_get_Pressed_m_1885905627_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_HasUpdatedPose()
extern "C"  bool VirtualButtonAbstractBehaviour_get_HasUpdatedPose_m1225594545_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_UnregisterOnDestroy()
extern "C"  bool VirtualButtonAbstractBehaviour_get_UnregisterOnDestroy_m_2057659646_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::set_UnregisterOnDestroy(System.Boolean)
extern "C"  void VirtualButtonAbstractBehaviour_set_UnregisterOnDestroy_m_1777628041_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.VirtualButtonAbstractBehaviour::get_VirtualButton()
extern "C"  VirtualButton_t_1353895707_0 * VirtualButtonAbstractBehaviour_get_VirtualButton_m1243004304_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::.ctor()
extern "C"  void VirtualButtonAbstractBehaviour__ctor_m_2091115840_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::RegisterEventHandler(Vuforia.IVirtualButtonEventHandler)
extern "C"  void VirtualButtonAbstractBehaviour_RegisterEventHandler_m_1540502329_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, Object_t * ___eventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UnregisterEventHandler(Vuforia.IVirtualButtonEventHandler)
extern "C"  bool VirtualButtonAbstractBehaviour_UnregisterEventHandler_m1357918546_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, Object_t * ___eventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::CalculateButtonArea(UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C"  bool VirtualButtonAbstractBehaviour_CalculateButtonArea_m_1450647019_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, Vector2_t_725341338_0 * ___topLeft, Vector2_t_725341338_0 * ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateAreaRectangle()
extern "C"  bool VirtualButtonAbstractBehaviour_UpdateAreaRectangle_m2064957189_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateSensitivity()
extern "C"  bool VirtualButtonAbstractBehaviour_UpdateSensitivity_m1916999554_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateEnabled()
extern "C"  bool VirtualButtonAbstractBehaviour_UpdateEnabled_m_851770204_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdatePose()
extern "C"  bool VirtualButtonAbstractBehaviour_UpdatePose_m821956592_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnTrackerUpdated(System.Boolean)
extern "C"  void VirtualButtonAbstractBehaviour_OnTrackerUpdated_m825860765_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, bool ___pressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.VirtualButtonAbstractBehaviour::GetImageTargetBehaviour()
extern "C"  ImageTargetAbstractBehaviour_t_440988281_0 * VirtualButtonAbstractBehaviour_GetImageTargetBehaviour_m_51502203_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetVirtualButtonName(System.String)
extern "C"  bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetVirtualButtonName_m1206660514_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton/Sensitivity Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_SensitivitySetting()
extern "C"  int32_t VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_SensitivitySetting_m_706970572_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetSensitivitySetting(Vuforia.VirtualButton/Sensitivity)
extern "C"  bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetSensitivitySetting_m1446855126_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, int32_t ___sensibility, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_PreviousTransform()
extern "C"  Matrix4x4_t1577636070_0  VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_PreviousTransform_m742676043_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPreviousTransform(UnityEngine.Matrix4x4)
extern "C"  bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPreviousTransform_m_1528120179_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, Matrix4x4_t1577636070_0  ___transformMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_PreviousParent()
extern "C"  GameObject_t_184308134_0 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_PreviousParent_m2024786917_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPreviousParent(UnityEngine.GameObject)
extern "C"  bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPreviousParent_m_1942506557_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, GameObject_t_184308134_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.InitializeVirtualButton(Vuforia.VirtualButton)
extern "C"  void VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_InitializeVirtualButton_m1023735258_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, VirtualButton_t_1353895707_0 * ___virtualButton, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPosAndScaleFromButtonArea(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPosAndScaleFromButtonArea_m1829431014_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, Vector2_t_725341338_0  ___topLeft, Vector2_t_725341338_0  ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.GetRenderer()
extern "C"  Renderer_t907796364_0 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_GetRenderer_m_720989166_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::LateUpdate()
extern "C"  void VirtualButtonAbstractBehaviour_LateUpdate_m1419503507_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnDisable()
extern "C"  void VirtualButtonAbstractBehaviour_OnDisable_m_61337817_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnDestroy()
extern "C"  void VirtualButtonAbstractBehaviour_OnDestroy_m2116194233_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Equals(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  bool VirtualButtonAbstractBehaviour_Equals_m446130622_0 (Object_t * __this /* static, unused */, Vector2_t_725341338_0  ___vec1, Vector2_t_725341338_0  ___vec2, float ___threshold, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_enabled()
extern "C"  bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_enabled_m_1912038784_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.set_enabled(System.Boolean)
extern "C"  void VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_set_enabled_m1173634805_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_transform()
extern "C"  Transform_t1584899523_0 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_transform_m904913663_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_gameObject()
extern "C"  GameObject_t_184308134_0 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_gameObject_m_189861739_0 (VirtualButtonAbstractBehaviour_t_1243929514_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
