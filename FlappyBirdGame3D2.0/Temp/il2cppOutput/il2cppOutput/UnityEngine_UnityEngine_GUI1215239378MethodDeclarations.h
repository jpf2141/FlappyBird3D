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

// UnityEngine.GUISkin
struct GUISkin_t_1636059793_0;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t_1764161721_0;
// UnityEngine.GUIStyle
struct GUIStyle_t822037503_0;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t361791205_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_818288618.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C"  void GUI__cctor_m1345698031_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C"  void GUI_set_nextScrollStepTime_m_474454500_0 (Object_t * __this /* static, unused */, DateTime_t_818288618_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C"  void GUI_set_skin_m1213959601_0 (Object_t * __this /* static, unused */, GUISkin_t_1636059793_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C"  GUISkin_t_1636059793_0 * GUI_get_skin_m_293512454_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C"  void GUI_DoSetSkin_m800823745_0 (Object_t * __this /* static, unused */, GUISkin_t_1636059793_0 * ___newSkin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C"  void GUI_Label_m1483857617_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_Label_m_2001265027_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C"  bool GUI_Button_m885093907_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C"  Rect_t_981940947_0  GUI_Window_m_1979990601_0 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t_981940947_0  ___clientRect, WindowFunction_t361791205_0 * ___func, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  void GUI_CallWindowDelegate_m_2034628492_0 (Object_t * __this /* static, unused */, WindowFunction_t361791205_0 * ___func, int32_t ___id, GUISkin_t_1636059793_0 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C"  void GUI_set_changed_m727947722_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  void GUI_DoLabel_m_1304958283_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, GUIContent_t_1764161721_0 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  void GUI_INTERNAL_CALL_DoLabel_m_1587287330_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0 * ___position, GUIContent_t_1764161721_0 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_DoButton_m_2100473027_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, GUIContent_t_1764161721_0 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_INTERNAL_CALL_DoButton_m1954108340_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0 * ___position, GUIContent_t_1764161721_0 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C"  Rect_t_981940947_0  GUI_DoWindow_m_1563283580_0 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t_981940947_0  ___clientRect, WindowFunction_t361791205_0 * ___func, GUIContent_t_1764161721_0 * ___title, GUIStyle_t822037503_0 * ___style, GUISkin_t_1636059793_0 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean,UnityEngine.Rect&)
extern "C"  void GUI_INTERNAL_CALL_DoWindow_m104027050_0 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t_981940947_0 * ___clientRect, WindowFunction_t361791205_0 * ___func, GUIContent_t_1764161721_0 * ___title, GUIStyle_t822037503_0 * ___style, GUISkin_t_1636059793_0 * ___skin, bool ___forceRectOnLayout, Rect_t_981940947_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
