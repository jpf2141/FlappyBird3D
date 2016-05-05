#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// ProgressBar.Utils.FillerProperty
struct FillerProperty_t2347308440;
// ProgressBar.Utils.ProgressValue
struct ProgressValue_t329592119;
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

// ProgressBar.ProgressBarBehaviour
struct  ProgressBarBehaviour_t2517727609  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.RectTransform ProgressBar.ProgressBarBehaviour::m_FillRect
	RectTransform_t3317474837 * ___m_FillRect_2;
	// ProgressBar.Utils.FillerProperty ProgressBar.ProgressBarBehaviour::m_FillerInfo
	FillerProperty_t2347308440 * ___m_FillerInfo_3;
	// ProgressBar.Utils.ProgressValue ProgressBar.ProgressBarBehaviour::m_Value
	ProgressValue_t329592119 * ___m_Value_4;
	// UnityEngine.UI.Text ProgressBar.ProgressBarBehaviour::m_AttachedText
	Text_t3286458198 * ___m_AttachedText_5;
	// System.Int32 ProgressBar.ProgressBarBehaviour::ProgressSpeed
	int32_t ___ProgressSpeed_6;
	// System.Boolean ProgressBar.ProgressBarBehaviour::TriggerOnComplete
	bool ___TriggerOnComplete_7;
	// ProgressBar.Utils.OnCompleteEvent ProgressBar.ProgressBarBehaviour::OnCompleteMethods
	OnCompleteEvent_t3073938229 * ___OnCompleteMethods_8;
	// System.Single ProgressBar.ProgressBarBehaviour::m_XOffset
	float ___m_XOffset_9;
	// System.Single ProgressBar.ProgressBarBehaviour::<TransitoryValue>k__BackingField
	float ___U3CTransitoryValueU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_m_FillRect_2() { return static_cast<int32_t>(offsetof(ProgressBarBehaviour_t2517727609, ___m_FillRect_2)); }
	inline RectTransform_t3317474837 * get_m_FillRect_2() const { return ___m_FillRect_2; }
	inline RectTransform_t3317474837 ** get_address_of_m_FillRect_2() { return &___m_FillRect_2; }
	inline void set_m_FillRect_2(RectTransform_t3317474837 * value)
	{
		___m_FillRect_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_FillRect_2, value);
	}

	inline static int32_t get_offset_of_m_FillerInfo_3() { return static_cast<int32_t>(offsetof(ProgressBarBehaviour_t2517727609, ___m_FillerInfo_3)); }
	inline FillerProperty_t2347308440 * get_m_FillerInfo_3() const { return ___m_FillerInfo_3; }
	inline FillerProperty_t2347308440 ** get_address_of_m_FillerInfo_3() { return &___m_FillerInfo_3; }
	inline void set_m_FillerInfo_3(FillerProperty_t2347308440 * value)
	{
		___m_FillerInfo_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_FillerInfo_3, value);
	}

	inline static int32_t get_offset_of_m_Value_4() { return static_cast<int32_t>(offsetof(ProgressBarBehaviour_t2517727609, ___m_Value_4)); }
	inline ProgressValue_t329592119 * get_m_Value_4() const { return ___m_Value_4; }
	inline ProgressValue_t329592119 ** get_address_of_m_Value_4() { return &___m_Value_4; }
	inline void set_m_Value_4(ProgressValue_t329592119 * value)
	{
		___m_Value_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Value_4, value);
	}

	inline static int32_t get_offset_of_m_AttachedText_5() { return static_cast<int32_t>(offsetof(ProgressBarBehaviour_t2517727609, ___m_AttachedText_5)); }
	inline Text_t3286458198 * get_m_AttachedText_5() const { return ___m_AttachedText_5; }
	inline Text_t3286458198 ** get_address_of_m_AttachedText_5() { return &___m_AttachedText_5; }
	inline void set_m_AttachedText_5(Text_t3286458198 * value)
	{
		___m_AttachedText_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_AttachedText_5, value);
	}

	inline static int32_t get_offset_of_ProgressSpeed_6() { return static_cast<int32_t>(offsetof(ProgressBarBehaviour_t2517727609, ___ProgressSpeed_6)); }
	inline int32_t get_ProgressSpeed_6() const { return ___ProgressSpeed_6; }
	inline int32_t* get_address_of_ProgressSpeed_6() { return &___ProgressSpeed_6; }
	inline void set_ProgressSpeed_6(int32_t value)
	{
		___ProgressSpeed_6 = value;
	}

	inline static int32_t get_offset_of_TriggerOnComplete_7() { return static_cast<int32_t>(offsetof(ProgressBarBehaviour_t2517727609, ___TriggerOnComplete_7)); }
	inline bool get_TriggerOnComplete_7() const { return ___TriggerOnComplete_7; }
	inline bool* get_address_of_TriggerOnComplete_7() { return &___TriggerOnComplete_7; }
	inline void set_TriggerOnComplete_7(bool value)
	{
		___TriggerOnComplete_7 = value;
	}

	inline static int32_t get_offset_of_OnCompleteMethods_8() { return static_cast<int32_t>(offsetof(ProgressBarBehaviour_t2517727609, ___OnCompleteMethods_8)); }
	inline OnCompleteEvent_t3073938229 * get_OnCompleteMethods_8() const { return ___OnCompleteMethods_8; }
	inline OnCompleteEvent_t3073938229 ** get_address_of_OnCompleteMethods_8() { return &___OnCompleteMethods_8; }
	inline void set_OnCompleteMethods_8(OnCompleteEvent_t3073938229 * value)
	{
		___OnCompleteMethods_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnCompleteMethods_8, value);
	}

	inline static int32_t get_offset_of_m_XOffset_9() { return static_cast<int32_t>(offsetof(ProgressBarBehaviour_t2517727609, ___m_XOffset_9)); }
	inline float get_m_XOffset_9() const { return ___m_XOffset_9; }
	inline float* get_address_of_m_XOffset_9() { return &___m_XOffset_9; }
	inline void set_m_XOffset_9(float value)
	{
		___m_XOffset_9 = value;
	}

	inline static int32_t get_offset_of_U3CTransitoryValueU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ProgressBarBehaviour_t2517727609, ___U3CTransitoryValueU3Ek__BackingField_10)); }
	inline float get_U3CTransitoryValueU3Ek__BackingField_10() const { return ___U3CTransitoryValueU3Ek__BackingField_10; }
	inline float* get_address_of_U3CTransitoryValueU3Ek__BackingField_10() { return &___U3CTransitoryValueU3Ek__BackingField_10; }
	inline void set_U3CTransitoryValueU3Ek__BackingField_10(float value)
	{
		___U3CTransitoryValueU3Ek__BackingField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
