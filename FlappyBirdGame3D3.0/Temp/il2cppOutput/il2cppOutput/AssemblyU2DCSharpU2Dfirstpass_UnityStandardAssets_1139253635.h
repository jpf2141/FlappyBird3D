#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIText
struct GUIText_t2614635829;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.SimpleActivatorMenu
struct  SimpleActivatorMenu_t1139253635  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GUIText UnityStandardAssets.Utility.SimpleActivatorMenu::camSwitchButton
	GUIText_t2614635829 * ___camSwitchButton_2;
	// UnityEngine.GameObject[] UnityStandardAssets.Utility.SimpleActivatorMenu::objects
	GameObjectU5BU5D_t3499186955* ___objects_3;
	// System.Int32 UnityStandardAssets.Utility.SimpleActivatorMenu::m_CurrentActiveObject
	int32_t ___m_CurrentActiveObject_4;

public:
	inline static int32_t get_offset_of_camSwitchButton_2() { return static_cast<int32_t>(offsetof(SimpleActivatorMenu_t1139253635, ___camSwitchButton_2)); }
	inline GUIText_t2614635829 * get_camSwitchButton_2() const { return ___camSwitchButton_2; }
	inline GUIText_t2614635829 ** get_address_of_camSwitchButton_2() { return &___camSwitchButton_2; }
	inline void set_camSwitchButton_2(GUIText_t2614635829 * value)
	{
		___camSwitchButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___camSwitchButton_2, value);
	}

	inline static int32_t get_offset_of_objects_3() { return static_cast<int32_t>(offsetof(SimpleActivatorMenu_t1139253635, ___objects_3)); }
	inline GameObjectU5BU5D_t3499186955* get_objects_3() const { return ___objects_3; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_objects_3() { return &___objects_3; }
	inline void set_objects_3(GameObjectU5BU5D_t3499186955* value)
	{
		___objects_3 = value;
		Il2CppCodeGenWriteBarrier(&___objects_3, value);
	}

	inline static int32_t get_offset_of_m_CurrentActiveObject_4() { return static_cast<int32_t>(offsetof(SimpleActivatorMenu_t1139253635, ___m_CurrentActiveObject_4)); }
	inline int32_t get_m_CurrentActiveObject_4() const { return ___m_CurrentActiveObject_4; }
	inline int32_t* get_address_of_m_CurrentActiveObject_4() { return &___m_CurrentActiveObject_4; }
	inline void set_m_CurrentActiveObject_4(int32_t value)
	{
		___m_CurrentActiveObject_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
