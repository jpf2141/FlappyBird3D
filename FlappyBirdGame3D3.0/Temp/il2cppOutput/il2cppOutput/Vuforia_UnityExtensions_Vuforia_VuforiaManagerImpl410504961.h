#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t2878848245;
// UnityEngine.Transform
struct Transform_t284553113;
// Vuforia.VuforiaManagerImpl/TrackableResultData[]
struct TrackableResultDataU5BU5D_t3096477957;
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t73087933;
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t2015210476;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t292577037;
// Vuforia.VideoBackgroundManagerAbstractBehaviour
struct VideoBackgroundManagerAbstractBehaviour_t1915856045;

#include "Vuforia_UnityExtensions_Vuforia_VuforiaManager2943583809.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBeh3547146410.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1711858500.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl2005158436.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl
struct  VuforiaManagerImpl_t410504961  : public VuforiaManager_t2943583809
{
public:
	// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaManagerImpl::mWorldCenterMode
	int32_t ___mWorldCenterMode_1;
	// Vuforia.WorldCenterTrackableBehaviour Vuforia.VuforiaManagerImpl::mWorldCenter
	Il2CppObject * ___mWorldCenter_2;
	// UnityEngine.Transform Vuforia.VuforiaManagerImpl::mARCameraTransform
	Transform_t284553113 * ___mARCameraTransform_3;
	// UnityEngine.Transform Vuforia.VuforiaManagerImpl::mCentralAnchorPoint
	Transform_t284553113 * ___mCentralAnchorPoint_4;
	// UnityEngine.Transform Vuforia.VuforiaManagerImpl::mParentAnchorPoint
	Transform_t284553113 * ___mParentAnchorPoint_5;
	// Vuforia.VuforiaManagerImpl/TrackableResultData[] Vuforia.VuforiaManagerImpl::mTrackableResultDataArray
	TrackableResultDataU5BU5D_t3096477957* ___mTrackableResultDataArray_6;
	// Vuforia.VuforiaManagerImpl/WordData[] Vuforia.VuforiaManagerImpl::mWordDataArray
	WordDataU5BU5D_t73087933* ___mWordDataArray_7;
	// Vuforia.VuforiaManagerImpl/WordResultData[] Vuforia.VuforiaManagerImpl::mWordResultDataArray
	WordResultDataU5BU5D_t2015210476* ___mWordResultDataArray_8;
	// System.Collections.Generic.LinkedList`1<System.Int32> Vuforia.VuforiaManagerImpl::mTrackableFoundQueue
	LinkedList_1_t292577037 * ___mTrackableFoundQueue_9;
	// System.IntPtr Vuforia.VuforiaManagerImpl::mImageHeaderData
	IntPtr_t ___mImageHeaderData_10;
	// System.Int32 Vuforia.VuforiaManagerImpl::mNumImageHeaders
	int32_t ___mNumImageHeaders_11;
	// System.Int32 Vuforia.VuforiaManagerImpl::mInjectedFrameIdx
	int32_t ___mInjectedFrameIdx_12;
	// System.IntPtr Vuforia.VuforiaManagerImpl::mLastProcessedFrameStatePtr
	IntPtr_t ___mLastProcessedFrameStatePtr_13;
	// System.Boolean Vuforia.VuforiaManagerImpl::mInitialized
	bool ___mInitialized_14;
	// System.Boolean Vuforia.VuforiaManagerImpl::mPaused
	bool ___mPaused_15;
	// Vuforia.VuforiaManagerImpl/FrameState Vuforia.VuforiaManagerImpl::mFrameState
	FrameState_t1711858500  ___mFrameState_16;
	// Vuforia.VuforiaManagerImpl/AutoRotationState Vuforia.VuforiaManagerImpl::mAutoRotationState
	AutoRotationState_t2005158436  ___mAutoRotationState_17;
	// System.Boolean Vuforia.VuforiaManagerImpl::mVideoBackgroundNeedsRedrawing
	bool ___mVideoBackgroundNeedsRedrawing_18;
	// System.Int32 Vuforia.VuforiaManagerImpl::mDiscardStatesForRendering
	int32_t ___mDiscardStatesForRendering_19;
	// Vuforia.VideoBackgroundManagerAbstractBehaviour Vuforia.VuforiaManagerImpl::mVideoBackgroundMgr
	VideoBackgroundManagerAbstractBehaviour_t1915856045 * ___mVideoBackgroundMgr_20;
	// System.Int32 Vuforia.VuforiaManagerImpl::mLastFrameIdx
	int32_t ___mLastFrameIdx_21;
	// System.Boolean Vuforia.VuforiaManagerImpl::mIsSeeThroughDevice
	bool ___mIsSeeThroughDevice_22;
	// System.Boolean Vuforia.VuforiaManagerImpl::<VideoBackgroundTextureSet>k__BackingField
	bool ___U3CVideoBackgroundTextureSetU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_mWorldCenterMode_1() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mWorldCenterMode_1)); }
	inline int32_t get_mWorldCenterMode_1() const { return ___mWorldCenterMode_1; }
	inline int32_t* get_address_of_mWorldCenterMode_1() { return &___mWorldCenterMode_1; }
	inline void set_mWorldCenterMode_1(int32_t value)
	{
		___mWorldCenterMode_1 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_2() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mWorldCenter_2)); }
	inline Il2CppObject * get_mWorldCenter_2() const { return ___mWorldCenter_2; }
	inline Il2CppObject ** get_address_of_mWorldCenter_2() { return &___mWorldCenter_2; }
	inline void set_mWorldCenter_2(Il2CppObject * value)
	{
		___mWorldCenter_2 = value;
		Il2CppCodeGenWriteBarrier(&___mWorldCenter_2, value);
	}

	inline static int32_t get_offset_of_mARCameraTransform_3() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mARCameraTransform_3)); }
	inline Transform_t284553113 * get_mARCameraTransform_3() const { return ___mARCameraTransform_3; }
	inline Transform_t284553113 ** get_address_of_mARCameraTransform_3() { return &___mARCameraTransform_3; }
	inline void set_mARCameraTransform_3(Transform_t284553113 * value)
	{
		___mARCameraTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___mARCameraTransform_3, value);
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_4() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mCentralAnchorPoint_4)); }
	inline Transform_t284553113 * get_mCentralAnchorPoint_4() const { return ___mCentralAnchorPoint_4; }
	inline Transform_t284553113 ** get_address_of_mCentralAnchorPoint_4() { return &___mCentralAnchorPoint_4; }
	inline void set_mCentralAnchorPoint_4(Transform_t284553113 * value)
	{
		___mCentralAnchorPoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___mCentralAnchorPoint_4, value);
	}

	inline static int32_t get_offset_of_mParentAnchorPoint_5() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mParentAnchorPoint_5)); }
	inline Transform_t284553113 * get_mParentAnchorPoint_5() const { return ___mParentAnchorPoint_5; }
	inline Transform_t284553113 ** get_address_of_mParentAnchorPoint_5() { return &___mParentAnchorPoint_5; }
	inline void set_mParentAnchorPoint_5(Transform_t284553113 * value)
	{
		___mParentAnchorPoint_5 = value;
		Il2CppCodeGenWriteBarrier(&___mParentAnchorPoint_5, value);
	}

	inline static int32_t get_offset_of_mTrackableResultDataArray_6() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mTrackableResultDataArray_6)); }
	inline TrackableResultDataU5BU5D_t3096477957* get_mTrackableResultDataArray_6() const { return ___mTrackableResultDataArray_6; }
	inline TrackableResultDataU5BU5D_t3096477957** get_address_of_mTrackableResultDataArray_6() { return &___mTrackableResultDataArray_6; }
	inline void set_mTrackableResultDataArray_6(TrackableResultDataU5BU5D_t3096477957* value)
	{
		___mTrackableResultDataArray_6 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableResultDataArray_6, value);
	}

	inline static int32_t get_offset_of_mWordDataArray_7() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mWordDataArray_7)); }
	inline WordDataU5BU5D_t73087933* get_mWordDataArray_7() const { return ___mWordDataArray_7; }
	inline WordDataU5BU5D_t73087933** get_address_of_mWordDataArray_7() { return &___mWordDataArray_7; }
	inline void set_mWordDataArray_7(WordDataU5BU5D_t73087933* value)
	{
		___mWordDataArray_7 = value;
		Il2CppCodeGenWriteBarrier(&___mWordDataArray_7, value);
	}

	inline static int32_t get_offset_of_mWordResultDataArray_8() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mWordResultDataArray_8)); }
	inline WordResultDataU5BU5D_t2015210476* get_mWordResultDataArray_8() const { return ___mWordResultDataArray_8; }
	inline WordResultDataU5BU5D_t2015210476** get_address_of_mWordResultDataArray_8() { return &___mWordResultDataArray_8; }
	inline void set_mWordResultDataArray_8(WordResultDataU5BU5D_t2015210476* value)
	{
		___mWordResultDataArray_8 = value;
		Il2CppCodeGenWriteBarrier(&___mWordResultDataArray_8, value);
	}

	inline static int32_t get_offset_of_mTrackableFoundQueue_9() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mTrackableFoundQueue_9)); }
	inline LinkedList_1_t292577037 * get_mTrackableFoundQueue_9() const { return ___mTrackableFoundQueue_9; }
	inline LinkedList_1_t292577037 ** get_address_of_mTrackableFoundQueue_9() { return &___mTrackableFoundQueue_9; }
	inline void set_mTrackableFoundQueue_9(LinkedList_1_t292577037 * value)
	{
		___mTrackableFoundQueue_9 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableFoundQueue_9, value);
	}

	inline static int32_t get_offset_of_mImageHeaderData_10() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mImageHeaderData_10)); }
	inline IntPtr_t get_mImageHeaderData_10() const { return ___mImageHeaderData_10; }
	inline IntPtr_t* get_address_of_mImageHeaderData_10() { return &___mImageHeaderData_10; }
	inline void set_mImageHeaderData_10(IntPtr_t value)
	{
		___mImageHeaderData_10 = value;
	}

	inline static int32_t get_offset_of_mNumImageHeaders_11() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mNumImageHeaders_11)); }
	inline int32_t get_mNumImageHeaders_11() const { return ___mNumImageHeaders_11; }
	inline int32_t* get_address_of_mNumImageHeaders_11() { return &___mNumImageHeaders_11; }
	inline void set_mNumImageHeaders_11(int32_t value)
	{
		___mNumImageHeaders_11 = value;
	}

	inline static int32_t get_offset_of_mInjectedFrameIdx_12() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mInjectedFrameIdx_12)); }
	inline int32_t get_mInjectedFrameIdx_12() const { return ___mInjectedFrameIdx_12; }
	inline int32_t* get_address_of_mInjectedFrameIdx_12() { return &___mInjectedFrameIdx_12; }
	inline void set_mInjectedFrameIdx_12(int32_t value)
	{
		___mInjectedFrameIdx_12 = value;
	}

	inline static int32_t get_offset_of_mLastProcessedFrameStatePtr_13() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mLastProcessedFrameStatePtr_13)); }
	inline IntPtr_t get_mLastProcessedFrameStatePtr_13() const { return ___mLastProcessedFrameStatePtr_13; }
	inline IntPtr_t* get_address_of_mLastProcessedFrameStatePtr_13() { return &___mLastProcessedFrameStatePtr_13; }
	inline void set_mLastProcessedFrameStatePtr_13(IntPtr_t value)
	{
		___mLastProcessedFrameStatePtr_13 = value;
	}

	inline static int32_t get_offset_of_mInitialized_14() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mInitialized_14)); }
	inline bool get_mInitialized_14() const { return ___mInitialized_14; }
	inline bool* get_address_of_mInitialized_14() { return &___mInitialized_14; }
	inline void set_mInitialized_14(bool value)
	{
		___mInitialized_14 = value;
	}

	inline static int32_t get_offset_of_mPaused_15() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mPaused_15)); }
	inline bool get_mPaused_15() const { return ___mPaused_15; }
	inline bool* get_address_of_mPaused_15() { return &___mPaused_15; }
	inline void set_mPaused_15(bool value)
	{
		___mPaused_15 = value;
	}

	inline static int32_t get_offset_of_mFrameState_16() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mFrameState_16)); }
	inline FrameState_t1711858500  get_mFrameState_16() const { return ___mFrameState_16; }
	inline FrameState_t1711858500 * get_address_of_mFrameState_16() { return &___mFrameState_16; }
	inline void set_mFrameState_16(FrameState_t1711858500  value)
	{
		___mFrameState_16 = value;
	}

	inline static int32_t get_offset_of_mAutoRotationState_17() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mAutoRotationState_17)); }
	inline AutoRotationState_t2005158436  get_mAutoRotationState_17() const { return ___mAutoRotationState_17; }
	inline AutoRotationState_t2005158436 * get_address_of_mAutoRotationState_17() { return &___mAutoRotationState_17; }
	inline void set_mAutoRotationState_17(AutoRotationState_t2005158436  value)
	{
		___mAutoRotationState_17 = value;
	}

	inline static int32_t get_offset_of_mVideoBackgroundNeedsRedrawing_18() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mVideoBackgroundNeedsRedrawing_18)); }
	inline bool get_mVideoBackgroundNeedsRedrawing_18() const { return ___mVideoBackgroundNeedsRedrawing_18; }
	inline bool* get_address_of_mVideoBackgroundNeedsRedrawing_18() { return &___mVideoBackgroundNeedsRedrawing_18; }
	inline void set_mVideoBackgroundNeedsRedrawing_18(bool value)
	{
		___mVideoBackgroundNeedsRedrawing_18 = value;
	}

	inline static int32_t get_offset_of_mDiscardStatesForRendering_19() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mDiscardStatesForRendering_19)); }
	inline int32_t get_mDiscardStatesForRendering_19() const { return ___mDiscardStatesForRendering_19; }
	inline int32_t* get_address_of_mDiscardStatesForRendering_19() { return &___mDiscardStatesForRendering_19; }
	inline void set_mDiscardStatesForRendering_19(int32_t value)
	{
		___mDiscardStatesForRendering_19 = value;
	}

	inline static int32_t get_offset_of_mVideoBackgroundMgr_20() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mVideoBackgroundMgr_20)); }
	inline VideoBackgroundManagerAbstractBehaviour_t1915856045 * get_mVideoBackgroundMgr_20() const { return ___mVideoBackgroundMgr_20; }
	inline VideoBackgroundManagerAbstractBehaviour_t1915856045 ** get_address_of_mVideoBackgroundMgr_20() { return &___mVideoBackgroundMgr_20; }
	inline void set_mVideoBackgroundMgr_20(VideoBackgroundManagerAbstractBehaviour_t1915856045 * value)
	{
		___mVideoBackgroundMgr_20 = value;
		Il2CppCodeGenWriteBarrier(&___mVideoBackgroundMgr_20, value);
	}

	inline static int32_t get_offset_of_mLastFrameIdx_21() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mLastFrameIdx_21)); }
	inline int32_t get_mLastFrameIdx_21() const { return ___mLastFrameIdx_21; }
	inline int32_t* get_address_of_mLastFrameIdx_21() { return &___mLastFrameIdx_21; }
	inline void set_mLastFrameIdx_21(int32_t value)
	{
		___mLastFrameIdx_21 = value;
	}

	inline static int32_t get_offset_of_mIsSeeThroughDevice_22() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___mIsSeeThroughDevice_22)); }
	inline bool get_mIsSeeThroughDevice_22() const { return ___mIsSeeThroughDevice_22; }
	inline bool* get_address_of_mIsSeeThroughDevice_22() { return &___mIsSeeThroughDevice_22; }
	inline void set_mIsSeeThroughDevice_22(bool value)
	{
		___mIsSeeThroughDevice_22 = value;
	}

	inline static int32_t get_offset_of_U3CVideoBackgroundTextureSetU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(VuforiaManagerImpl_t410504961, ___U3CVideoBackgroundTextureSetU3Ek__BackingField_23)); }
	inline bool get_U3CVideoBackgroundTextureSetU3Ek__BackingField_23() const { return ___U3CVideoBackgroundTextureSetU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CVideoBackgroundTextureSetU3Ek__BackingField_23() { return &___U3CVideoBackgroundTextureSetU3Ek__BackingField_23; }
	inline void set_U3CVideoBackgroundTextureSetU3Ek__BackingField_23(bool value)
	{
		___U3CVideoBackgroundTextureSetU3Ek__BackingField_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
