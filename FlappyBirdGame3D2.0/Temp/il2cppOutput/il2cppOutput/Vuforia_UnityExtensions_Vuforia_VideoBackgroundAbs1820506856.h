#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t2427322319;
// UnityEngine.Camera
struct Camera_t3533968274;
// Vuforia.BackgroundPlaneAbstractBehaviour
struct BackgroundPlaneAbstractBehaviour_t1953260483;
// System.Collections.Generic.HashSet`1<UnityEngine.MeshRenderer>
struct HashSet_1_t3916426972;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VideoBackgroundAbstractBehaviour
struct  VideoBackgroundAbstractBehaviour_t1820506856  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 Vuforia.VideoBackgroundAbstractBehaviour::mClearBuffers
	int32_t ___mClearBuffers_2;
	// System.Int32 Vuforia.VideoBackgroundAbstractBehaviour::mSkipStateUpdates
	int32_t ___mSkipStateUpdates_3;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.VideoBackgroundAbstractBehaviour::mVuforiaAbstractBehaviour
	VuforiaAbstractBehaviour_t2427322319 * ___mVuforiaAbstractBehaviour_4;
	// UnityEngine.Camera Vuforia.VideoBackgroundAbstractBehaviour::mCamera
	Camera_t3533968274 * ___mCamera_5;
	// Vuforia.BackgroundPlaneAbstractBehaviour Vuforia.VideoBackgroundAbstractBehaviour::mBackgroundBehaviour
	BackgroundPlaneAbstractBehaviour_t1953260483 * ___mBackgroundBehaviour_6;
	// System.Single Vuforia.VideoBackgroundAbstractBehaviour::mStereoDepth
	float ___mStereoDepth_7;
	// System.Collections.Generic.HashSet`1<UnityEngine.MeshRenderer> Vuforia.VideoBackgroundAbstractBehaviour::mDisabledMeshRenderers
	HashSet_1_t3916426972 * ___mDisabledMeshRenderers_10;

public:
	inline static int32_t get_offset_of_mClearBuffers_2() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t1820506856, ___mClearBuffers_2)); }
	inline int32_t get_mClearBuffers_2() const { return ___mClearBuffers_2; }
	inline int32_t* get_address_of_mClearBuffers_2() { return &___mClearBuffers_2; }
	inline void set_mClearBuffers_2(int32_t value)
	{
		___mClearBuffers_2 = value;
	}

	inline static int32_t get_offset_of_mSkipStateUpdates_3() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t1820506856, ___mSkipStateUpdates_3)); }
	inline int32_t get_mSkipStateUpdates_3() const { return ___mSkipStateUpdates_3; }
	inline int32_t* get_address_of_mSkipStateUpdates_3() { return &___mSkipStateUpdates_3; }
	inline void set_mSkipStateUpdates_3(int32_t value)
	{
		___mSkipStateUpdates_3 = value;
	}

	inline static int32_t get_offset_of_mVuforiaAbstractBehaviour_4() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t1820506856, ___mVuforiaAbstractBehaviour_4)); }
	inline VuforiaAbstractBehaviour_t2427322319 * get_mVuforiaAbstractBehaviour_4() const { return ___mVuforiaAbstractBehaviour_4; }
	inline VuforiaAbstractBehaviour_t2427322319 ** get_address_of_mVuforiaAbstractBehaviour_4() { return &___mVuforiaAbstractBehaviour_4; }
	inline void set_mVuforiaAbstractBehaviour_4(VuforiaAbstractBehaviour_t2427322319 * value)
	{
		___mVuforiaAbstractBehaviour_4 = value;
		Il2CppCodeGenWriteBarrier(&___mVuforiaAbstractBehaviour_4, value);
	}

	inline static int32_t get_offset_of_mCamera_5() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t1820506856, ___mCamera_5)); }
	inline Camera_t3533968274 * get_mCamera_5() const { return ___mCamera_5; }
	inline Camera_t3533968274 ** get_address_of_mCamera_5() { return &___mCamera_5; }
	inline void set_mCamera_5(Camera_t3533968274 * value)
	{
		___mCamera_5 = value;
		Il2CppCodeGenWriteBarrier(&___mCamera_5, value);
	}

	inline static int32_t get_offset_of_mBackgroundBehaviour_6() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t1820506856, ___mBackgroundBehaviour_6)); }
	inline BackgroundPlaneAbstractBehaviour_t1953260483 * get_mBackgroundBehaviour_6() const { return ___mBackgroundBehaviour_6; }
	inline BackgroundPlaneAbstractBehaviour_t1953260483 ** get_address_of_mBackgroundBehaviour_6() { return &___mBackgroundBehaviour_6; }
	inline void set_mBackgroundBehaviour_6(BackgroundPlaneAbstractBehaviour_t1953260483 * value)
	{
		___mBackgroundBehaviour_6 = value;
		Il2CppCodeGenWriteBarrier(&___mBackgroundBehaviour_6, value);
	}

	inline static int32_t get_offset_of_mStereoDepth_7() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t1820506856, ___mStereoDepth_7)); }
	inline float get_mStereoDepth_7() const { return ___mStereoDepth_7; }
	inline float* get_address_of_mStereoDepth_7() { return &___mStereoDepth_7; }
	inline void set_mStereoDepth_7(float value)
	{
		___mStereoDepth_7 = value;
	}

	inline static int32_t get_offset_of_mDisabledMeshRenderers_10() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t1820506856, ___mDisabledMeshRenderers_10)); }
	inline HashSet_1_t3916426972 * get_mDisabledMeshRenderers_10() const { return ___mDisabledMeshRenderers_10; }
	inline HashSet_1_t3916426972 ** get_address_of_mDisabledMeshRenderers_10() { return &___mDisabledMeshRenderers_10; }
	inline void set_mDisabledMeshRenderers_10(HashSet_1_t3916426972 * value)
	{
		___mDisabledMeshRenderers_10 = value;
		Il2CppCodeGenWriteBarrier(&___mDisabledMeshRenderers_10, value);
	}
};

struct VideoBackgroundAbstractBehaviour_t1820506856_StaticFields
{
public:
	// System.Int32 Vuforia.VideoBackgroundAbstractBehaviour::mFrameCounter
	int32_t ___mFrameCounter_8;
	// System.Int32 Vuforia.VideoBackgroundAbstractBehaviour::mRenderCounter
	int32_t ___mRenderCounter_9;

public:
	inline static int32_t get_offset_of_mFrameCounter_8() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t1820506856_StaticFields, ___mFrameCounter_8)); }
	inline int32_t get_mFrameCounter_8() const { return ___mFrameCounter_8; }
	inline int32_t* get_address_of_mFrameCounter_8() { return &___mFrameCounter_8; }
	inline void set_mFrameCounter_8(int32_t value)
	{
		___mFrameCounter_8 = value;
	}

	inline static int32_t get_offset_of_mRenderCounter_9() { return static_cast<int32_t>(offsetof(VideoBackgroundAbstractBehaviour_t1820506856_StaticFields, ___mRenderCounter_9)); }
	inline int32_t get_mRenderCounter_9() const { return ___mRenderCounter_9; }
	inline int32_t* get_address_of_mRenderCounter_9() { return &___mRenderCounter_9; }
	inline void set_mRenderCounter_9(int32_t value)
	{
		___mRenderCounter_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
