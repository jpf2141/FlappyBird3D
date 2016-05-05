#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.UI.Text
struct Text_t3286458198;
// ProgressBar.Utils.OnCompleteEvent
struct OnCompleteEvent_t3073938229;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProgressBar.ProgressRadialBehaviour
struct  ProgressRadialBehaviour_t3667507187  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Image ProgressBar.ProgressRadialBehaviour::m_Fill
	Image_t3354615620 * ___m_Fill_2;
	// System.Single ProgressBar.ProgressRadialBehaviour::m_Value
	float ___m_Value_3;
	// UnityEngine.UI.Text ProgressBar.ProgressRadialBehaviour::m_AttachedText
	Text_t3286458198 * ___m_AttachedText_4;
	// System.Single ProgressBar.ProgressRadialBehaviour::ProgressSpeed
	float ___ProgressSpeed_5;
	// System.Boolean ProgressBar.ProgressRadialBehaviour::TriggerOnComplete
	bool ___TriggerOnComplete_6;
	// ProgressBar.Utils.OnCompleteEvent ProgressBar.ProgressRadialBehaviour::OnCompleteMethods
	OnCompleteEvent_t3073938229 * ___OnCompleteMethods_7;
	// System.Single ProgressBar.ProgressRadialBehaviour::<TransitoryValue>k__BackingField
	float ___U3CTransitoryValueU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_m_Fill_2() { return static_cast<int32_t>(offsetof(ProgressRadialBehaviour_t3667507187, ___m_Fill_2)); }
	inline Image_t3354615620 * get_m_Fill_2() const { return ___m_Fill_2; }
	inline Image_t3354615620 ** get_address_of_m_Fill_2() { return &___m_Fill_2; }
	inline void set_m_Fill_2(Image_t3354615620 * value)
	{
		___m_Fill_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Fill_2, value);
	}

	inline static int32_t get_offset_of_m_Value_3() { return static_cast<int32_t>(offsetof(ProgressRadialBehaviour_t3667507187, ___m_Value_3)); }
	inline float get_m_Value_3() const { return ___m_Value_3; }
	inline float* get_address_of_m_Value_3() { return &___m_Value_3; }
	inline void set_m_Value_3(float value)
	{
		___m_Value_3 = value;
	}

	inline static int32_t get_offset_of_m_AttachedText_4() { return static_cast<int32_t>(offsetof(ProgressRadialBehaviour_t3667507187, ___m_AttachedText_4)); }
	inline Text_t3286458198 * get_m_AttachedText_4() const { return ___m_AttachedText_4; }
	inline Text_t3286458198 ** get_address_of_m_AttachedText_4() { return &___m_AttachedText_4; }
	inline void set_m_AttachedText_4(Text_t3286458198 * value)
	{
		___m_AttachedText_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_AttachedText_4, value);
	}

	inline static int32_t get_offset_of_ProgressSpeed_5() { return static_cast<int32_t>(offsetof(ProgressRadialBehaviour_t3667507187, ___ProgressSpeed_5)); }
	inline float get_ProgressSpeed_5() const { return ___ProgressSpeed_5; }
	inline float* get_address_of_ProgressSpeed_5() { return &___ProgressSpeed_5; }
	inline void set_ProgressSpeed_5(float value)
	{
		___ProgressSpeed_5 = value;
	}

	inline static int32_t get_offset_of_TriggerOnComplete_6() { return static_cast<int32_t>(offsetof(ProgressRadialBehaviour_t3667507187, ___TriggerOnComplete_6)); }
	inline bool get_TriggerOnComplete_6() const { return ___TriggerOnComplete_6; }
	inline bool* get_address_of_TriggerOnComplete_6() { return &___TriggerOnComplete_6; }
	inline void set_TriggerOnComplete_6(bool value)
	{
		___TriggerOnComplete_6 = value;
	}

	inline static int32_t get_offset_of_OnCompleteMethods_7() { return static_cast<int32_t>(offsetof(ProgressRadialBehaviour_t3667507187, ___OnCompleteMethods_7)); }
	inline OnCompleteEvent_t3073938229 * get_OnCompleteMethods_7() const { return ___OnCompleteMethods_7; }
	inline OnCompleteEvent_t3073938229 ** get_address_of_OnCompleteMethods_7() { return &___OnCompleteMethods_7; }
	inline void set_OnCompleteMethods_7(OnCompleteEvent_t3073938229 * value)
	{
		___OnCompleteMethods_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnCompleteMethods_7, value);
	}

	inline static int32_t get_offset_of_U3CTransitoryValueU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ProgressRadialBehaviour_t3667507187, ___U3CTransitoryValueU3Ek__BackingField_8)); }
	inline float get_U3CTransitoryValueU3Ek__BackingField_8() const { return ___U3CTransitoryValueU3Ek__BackingField_8; }
	inline float* get_address_of_U3CTransitoryValueU3Ek__BackingField_8() { return &___U3CTransitoryValueU3Ek__BackingField_8; }
	inline void set_U3CTransitoryValueU3Ek__BackingField_8(float value)
	{
		___U3CTransitoryValueU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
