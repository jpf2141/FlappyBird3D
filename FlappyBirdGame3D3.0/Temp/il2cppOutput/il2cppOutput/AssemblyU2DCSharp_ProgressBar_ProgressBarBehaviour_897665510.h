#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t212748479_0;
// ProgressBar.Utils.FillerProperty
struct FillerProperty_t593236933_0;
// ProgressBar.Utils.ProgressValue
struct ProgressValue_t920425188_0;
// UnityEngine.UI.Text
struct Text_t_204341102_0;
// ProgressBar.Utils.OnCompleteEvent
struct OnCompleteEvent_t1642268898_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// ProgressBar.ProgressBarBehaviour
struct  ProgressBarBehaviour_t_897665510_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.RectTransform ProgressBar.ProgressBarBehaviour::m_FillRect
	RectTransform_t212748479_0 * ___m_FillRect_2;
	// ProgressBar.Utils.FillerProperty ProgressBar.ProgressBarBehaviour::m_FillerInfo
	FillerProperty_t593236933_0 * ___m_FillerInfo_3;
	// ProgressBar.Utils.ProgressValue ProgressBar.ProgressBarBehaviour::m_Value
	ProgressValue_t920425188_0 * ___m_Value_4;
	// UnityEngine.UI.Text ProgressBar.ProgressBarBehaviour::m_AttachedText
	Text_t_204341102_0 * ___m_AttachedText_5;
	// System.Int32 ProgressBar.ProgressBarBehaviour::ProgressSpeed
	int32_t ___ProgressSpeed_6;
	// System.Boolean ProgressBar.ProgressBarBehaviour::TriggerOnComplete
	bool ___TriggerOnComplete_7;
	// ProgressBar.Utils.OnCompleteEvent ProgressBar.ProgressBarBehaviour::OnCompleteMethods
	OnCompleteEvent_t1642268898_0 * ___OnCompleteMethods_8;
	// System.Single ProgressBar.ProgressBarBehaviour::m_XOffset
	float ___m_XOffset_9;
	// System.Single ProgressBar.ProgressBarBehaviour::<TransitoryValue>k__BackingField
	float ___U3CTransitoryValueU3Ek__BackingField_10;
};
