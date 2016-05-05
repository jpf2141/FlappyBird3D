#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t_2049549674_0;
// UnityEngine.UI.Text
struct Text_t_204341102_0;
// ProgressBar.Utils.OnCompleteEvent
struct OnCompleteEvent_t1642268898_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// ProgressBar.ProgressRadialBehaviour
struct  ProgressRadialBehaviour_t_1531117778_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.UI.Image ProgressBar.ProgressRadialBehaviour::m_Fill
	Image_t_2049549674_0 * ___m_Fill_2;
	// System.Single ProgressBar.ProgressRadialBehaviour::m_Value
	float ___m_Value_3;
	// UnityEngine.UI.Text ProgressBar.ProgressRadialBehaviour::m_AttachedText
	Text_t_204341102_0 * ___m_AttachedText_4;
	// System.Single ProgressBar.ProgressRadialBehaviour::ProgressSpeed
	float ___ProgressSpeed_5;
	// System.Boolean ProgressBar.ProgressRadialBehaviour::TriggerOnComplete
	bool ___TriggerOnComplete_6;
	// ProgressBar.Utils.OnCompleteEvent ProgressBar.ProgressRadialBehaviour::OnCompleteMethods
	OnCompleteEvent_t1642268898_0 * ___OnCompleteMethods_7;
	// System.Single ProgressBar.ProgressRadialBehaviour::<TransitoryValue>k__BackingField
	float ___U3CTransitoryValueU3Ek__BackingField_8;
};
