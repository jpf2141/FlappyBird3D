#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;
// ICardboardGazePointer
struct ICardboardGazePointer_t396842795;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputM3800378272.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GazeInputModule
struct  GazeInputModule_t2064533489  : public BaseInputModule_t3800378272
{
public:
	// System.Boolean GazeInputModule::vrModeOnly
	bool ___vrModeOnly_6;
	// System.Single GazeInputModule::clickTime
	float ___clickTime_7;
	// UnityEngine.Vector2 GazeInputModule::hotspot
	Vector2_t3525329788  ___hotspot_8;
	// UnityEngine.EventSystems.PointerEventData GazeInputModule::pointerData
	PointerEventData_t3205101634 * ___pointerData_9;
	// UnityEngine.Vector2 GazeInputModule::lastHeadPose
	Vector2_t3525329788  ___lastHeadPose_10;
	// System.Boolean GazeInputModule::isActive
	bool ___isActive_12;

public:
	inline static int32_t get_offset_of_vrModeOnly_6() { return static_cast<int32_t>(offsetof(GazeInputModule_t2064533489, ___vrModeOnly_6)); }
	inline bool get_vrModeOnly_6() const { return ___vrModeOnly_6; }
	inline bool* get_address_of_vrModeOnly_6() { return &___vrModeOnly_6; }
	inline void set_vrModeOnly_6(bool value)
	{
		___vrModeOnly_6 = value;
	}

	inline static int32_t get_offset_of_clickTime_7() { return static_cast<int32_t>(offsetof(GazeInputModule_t2064533489, ___clickTime_7)); }
	inline float get_clickTime_7() const { return ___clickTime_7; }
	inline float* get_address_of_clickTime_7() { return &___clickTime_7; }
	inline void set_clickTime_7(float value)
	{
		___clickTime_7 = value;
	}

	inline static int32_t get_offset_of_hotspot_8() { return static_cast<int32_t>(offsetof(GazeInputModule_t2064533489, ___hotspot_8)); }
	inline Vector2_t3525329788  get_hotspot_8() const { return ___hotspot_8; }
	inline Vector2_t3525329788 * get_address_of_hotspot_8() { return &___hotspot_8; }
	inline void set_hotspot_8(Vector2_t3525329788  value)
	{
		___hotspot_8 = value;
	}

	inline static int32_t get_offset_of_pointerData_9() { return static_cast<int32_t>(offsetof(GazeInputModule_t2064533489, ___pointerData_9)); }
	inline PointerEventData_t3205101634 * get_pointerData_9() const { return ___pointerData_9; }
	inline PointerEventData_t3205101634 ** get_address_of_pointerData_9() { return &___pointerData_9; }
	inline void set_pointerData_9(PointerEventData_t3205101634 * value)
	{
		___pointerData_9 = value;
		Il2CppCodeGenWriteBarrier(&___pointerData_9, value);
	}

	inline static int32_t get_offset_of_lastHeadPose_10() { return static_cast<int32_t>(offsetof(GazeInputModule_t2064533489, ___lastHeadPose_10)); }
	inline Vector2_t3525329788  get_lastHeadPose_10() const { return ___lastHeadPose_10; }
	inline Vector2_t3525329788 * get_address_of_lastHeadPose_10() { return &___lastHeadPose_10; }
	inline void set_lastHeadPose_10(Vector2_t3525329788  value)
	{
		___lastHeadPose_10 = value;
	}

	inline static int32_t get_offset_of_isActive_12() { return static_cast<int32_t>(offsetof(GazeInputModule_t2064533489, ___isActive_12)); }
	inline bool get_isActive_12() const { return ___isActive_12; }
	inline bool* get_address_of_isActive_12() { return &___isActive_12; }
	inline void set_isActive_12(bool value)
	{
		___isActive_12 = value;
	}
};

struct GazeInputModule_t2064533489_StaticFields
{
public:
	// ICardboardGazePointer GazeInputModule::cardboardPointer
	Il2CppObject * ___cardboardPointer_11;

public:
	inline static int32_t get_offset_of_cardboardPointer_11() { return static_cast<int32_t>(offsetof(GazeInputModule_t2064533489_StaticFields, ___cardboardPointer_11)); }
	inline Il2CppObject * get_cardboardPointer_11() const { return ___cardboardPointer_11; }
	inline Il2CppObject ** get_address_of_cardboardPointer_11() { return &___cardboardPointer_11; }
	inline void set_cardboardPointer_11(Il2CppObject * value)
	{
		___cardboardPointer_11 = value;
		Il2CppCodeGenWriteBarrier(&___cardboardPointer_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
