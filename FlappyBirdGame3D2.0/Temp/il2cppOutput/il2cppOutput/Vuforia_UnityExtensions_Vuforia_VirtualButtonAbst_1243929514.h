#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// System.Collections.Generic.List`1<Vuforia.IVirtualButtonEventHandler>
struct List_1_t_1017849884_0;
// Vuforia.VirtualButton
struct VirtualButton_t_1353895707_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "Vuforia_UnityExtensions_Vuforia_VirtualButton_Sensi_18537387.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"

// Vuforia.VirtualButtonAbstractBehaviour
struct  VirtualButtonAbstractBehaviour_t_1243929514_0  : public MonoBehaviour_t_92453903_0
{
	// System.String Vuforia.VirtualButtonAbstractBehaviour::mName
	String_t* ___mName_3;
	// Vuforia.VirtualButton/Sensitivity Vuforia.VirtualButtonAbstractBehaviour::mSensitivity
	int32_t ___mSensitivity_4;
	// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::mHasUpdatedPose
	bool ___mHasUpdatedPose_5;
	// UnityEngine.Matrix4x4 Vuforia.VirtualButtonAbstractBehaviour::mPrevTransform
	Matrix4x4_t1577636070_0  ___mPrevTransform_6;
	// UnityEngine.GameObject Vuforia.VirtualButtonAbstractBehaviour::mPrevParent
	GameObject_t_184308134_0 * ___mPrevParent_7;
	// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::mSensitivityDirty
	bool ___mSensitivityDirty_8;
	// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::mPreviouslyEnabled
	bool ___mPreviouslyEnabled_9;
	// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::mPressed
	bool ___mPressed_10;
	// System.Collections.Generic.List`1<Vuforia.IVirtualButtonEventHandler> Vuforia.VirtualButtonAbstractBehaviour::mHandlers
	List_1_t_1017849884_0 * ___mHandlers_11;
	// UnityEngine.Vector2 Vuforia.VirtualButtonAbstractBehaviour::mLeftTop
	Vector2_t_725341338_0  ___mLeftTop_12;
	// UnityEngine.Vector2 Vuforia.VirtualButtonAbstractBehaviour::mRightBottom
	Vector2_t_725341338_0  ___mRightBottom_13;
	// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::mUnregisterOnDestroy
	bool ___mUnregisterOnDestroy_14;
	// Vuforia.VirtualButton Vuforia.VirtualButtonAbstractBehaviour::mVirtualButton
	VirtualButton_t_1353895707_0 * ___mVirtualButton_15;
};
