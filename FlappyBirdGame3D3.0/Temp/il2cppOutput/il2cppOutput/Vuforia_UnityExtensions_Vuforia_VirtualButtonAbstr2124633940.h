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
struct GameObject_t4012695102;
// System.Collections.Generic.List`1<Vuforia.IVirtualButtonEventHandler>
struct List_1_t3030014931;
// Vuforia.VirtualButton
struct VirtualButton_t3523578643;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "Vuforia_UnityExtensions_Vuforia_VirtualButton_Sens2232272511.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VirtualButtonAbstractBehaviour
struct  VirtualButtonAbstractBehaviour_t2124633940  : public MonoBehaviour_t3012272455
{
public:
	// System.String Vuforia.VirtualButtonAbstractBehaviour::mName
	String_t* ___mName_3;
	// Vuforia.VirtualButton/Sensitivity Vuforia.VirtualButtonAbstractBehaviour::mSensitivity
	int32_t ___mSensitivity_4;
	// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::mHasUpdatedPose
	bool ___mHasUpdatedPose_5;
	// UnityEngine.Matrix4x4 Vuforia.VirtualButtonAbstractBehaviour::mPrevTransform
	Matrix4x4_t277289660  ___mPrevTransform_6;
	// UnityEngine.GameObject Vuforia.VirtualButtonAbstractBehaviour::mPrevParent
	GameObject_t4012695102 * ___mPrevParent_7;
	// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::mSensitivityDirty
	bool ___mSensitivityDirty_8;
	// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::mPreviouslyEnabled
	bool ___mPreviouslyEnabled_9;
	// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::mPressed
	bool ___mPressed_10;
	// System.Collections.Generic.List`1<Vuforia.IVirtualButtonEventHandler> Vuforia.VirtualButtonAbstractBehaviour::mHandlers
	List_1_t3030014931 * ___mHandlers_11;
	// UnityEngine.Vector2 Vuforia.VirtualButtonAbstractBehaviour::mLeftTop
	Vector2_t3525329788  ___mLeftTop_12;
	// UnityEngine.Vector2 Vuforia.VirtualButtonAbstractBehaviour::mRightBottom
	Vector2_t3525329788  ___mRightBottom_13;
	// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::mUnregisterOnDestroy
	bool ___mUnregisterOnDestroy_14;
	// Vuforia.VirtualButton Vuforia.VirtualButtonAbstractBehaviour::mVirtualButton
	VirtualButton_t3523578643 * ___mVirtualButton_15;

public:
	inline static int32_t get_offset_of_mName_3() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2124633940, ___mName_3)); }
	inline String_t* get_mName_3() const { return ___mName_3; }
	inline String_t** get_address_of_mName_3() { return &___mName_3; }
	inline void set_mName_3(String_t* value)
	{
		___mName_3 = value;
		Il2CppCodeGenWriteBarrier(&___mName_3, value);
	}

	inline static int32_t get_offset_of_mSensitivity_4() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2124633940, ___mSensitivity_4)); }
	inline int32_t get_mSensitivity_4() const { return ___mSensitivity_4; }
	inline int32_t* get_address_of_mSensitivity_4() { return &___mSensitivity_4; }
	inline void set_mSensitivity_4(int32_t value)
	{
		___mSensitivity_4 = value;
	}

	inline static int32_t get_offset_of_mHasUpdatedPose_5() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2124633940, ___mHasUpdatedPose_5)); }
	inline bool get_mHasUpdatedPose_5() const { return ___mHasUpdatedPose_5; }
	inline bool* get_address_of_mHasUpdatedPose_5() { return &___mHasUpdatedPose_5; }
	inline void set_mHasUpdatedPose_5(bool value)
	{
		___mHasUpdatedPose_5 = value;
	}

	inline static int32_t get_offset_of_mPrevTransform_6() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2124633940, ___mPrevTransform_6)); }
	inline Matrix4x4_t277289660  get_mPrevTransform_6() const { return ___mPrevTransform_6; }
	inline Matrix4x4_t277289660 * get_address_of_mPrevTransform_6() { return &___mPrevTransform_6; }
	inline void set_mPrevTransform_6(Matrix4x4_t277289660  value)
	{
		___mPrevTransform_6 = value;
	}

	inline static int32_t get_offset_of_mPrevParent_7() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2124633940, ___mPrevParent_7)); }
	inline GameObject_t4012695102 * get_mPrevParent_7() const { return ___mPrevParent_7; }
	inline GameObject_t4012695102 ** get_address_of_mPrevParent_7() { return &___mPrevParent_7; }
	inline void set_mPrevParent_7(GameObject_t4012695102 * value)
	{
		___mPrevParent_7 = value;
		Il2CppCodeGenWriteBarrier(&___mPrevParent_7, value);
	}

	inline static int32_t get_offset_of_mSensitivityDirty_8() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2124633940, ___mSensitivityDirty_8)); }
	inline bool get_mSensitivityDirty_8() const { return ___mSensitivityDirty_8; }
	inline bool* get_address_of_mSensitivityDirty_8() { return &___mSensitivityDirty_8; }
	inline void set_mSensitivityDirty_8(bool value)
	{
		___mSensitivityDirty_8 = value;
	}

	inline static int32_t get_offset_of_mPreviouslyEnabled_9() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2124633940, ___mPreviouslyEnabled_9)); }
	inline bool get_mPreviouslyEnabled_9() const { return ___mPreviouslyEnabled_9; }
	inline bool* get_address_of_mPreviouslyEnabled_9() { return &___mPreviouslyEnabled_9; }
	inline void set_mPreviouslyEnabled_9(bool value)
	{
		___mPreviouslyEnabled_9 = value;
	}

	inline static int32_t get_offset_of_mPressed_10() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2124633940, ___mPressed_10)); }
	inline bool get_mPressed_10() const { return ___mPressed_10; }
	inline bool* get_address_of_mPressed_10() { return &___mPressed_10; }
	inline void set_mPressed_10(bool value)
	{
		___mPressed_10 = value;
	}

	inline static int32_t get_offset_of_mHandlers_11() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2124633940, ___mHandlers_11)); }
	inline List_1_t3030014931 * get_mHandlers_11() const { return ___mHandlers_11; }
	inline List_1_t3030014931 ** get_address_of_mHandlers_11() { return &___mHandlers_11; }
	inline void set_mHandlers_11(List_1_t3030014931 * value)
	{
		___mHandlers_11 = value;
		Il2CppCodeGenWriteBarrier(&___mHandlers_11, value);
	}

	inline static int32_t get_offset_of_mLeftTop_12() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2124633940, ___mLeftTop_12)); }
	inline Vector2_t3525329788  get_mLeftTop_12() const { return ___mLeftTop_12; }
	inline Vector2_t3525329788 * get_address_of_mLeftTop_12() { return &___mLeftTop_12; }
	inline void set_mLeftTop_12(Vector2_t3525329788  value)
	{
		___mLeftTop_12 = value;
	}

	inline static int32_t get_offset_of_mRightBottom_13() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2124633940, ___mRightBottom_13)); }
	inline Vector2_t3525329788  get_mRightBottom_13() const { return ___mRightBottom_13; }
	inline Vector2_t3525329788 * get_address_of_mRightBottom_13() { return &___mRightBottom_13; }
	inline void set_mRightBottom_13(Vector2_t3525329788  value)
	{
		___mRightBottom_13 = value;
	}

	inline static int32_t get_offset_of_mUnregisterOnDestroy_14() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2124633940, ___mUnregisterOnDestroy_14)); }
	inline bool get_mUnregisterOnDestroy_14() const { return ___mUnregisterOnDestroy_14; }
	inline bool* get_address_of_mUnregisterOnDestroy_14() { return &___mUnregisterOnDestroy_14; }
	inline void set_mUnregisterOnDestroy_14(bool value)
	{
		___mUnregisterOnDestroy_14 = value;
	}

	inline static int32_t get_offset_of_mVirtualButton_15() { return static_cast<int32_t>(offsetof(VirtualButtonAbstractBehaviour_t2124633940, ___mVirtualButton_15)); }
	inline VirtualButton_t3523578643 * get_mVirtualButton_15() const { return ___mVirtualButton_15; }
	inline VirtualButton_t3523578643 ** get_address_of_mVirtualButton_15() { return &___mVirtualButton_15; }
	inline void set_mVirtualButton_15(VirtualButton_t3523578643 * value)
	{
		___mVirtualButton_15 = value;
		Il2CppCodeGenWriteBarrier(&___mVirtualButton_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
