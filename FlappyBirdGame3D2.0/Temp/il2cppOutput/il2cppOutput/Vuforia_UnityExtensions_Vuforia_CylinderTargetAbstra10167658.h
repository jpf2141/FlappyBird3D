#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.CylinderTarget
struct CylinderTarget_t3460838973;

#include "Vuforia_UnityExtensions_Vuforia_DataSetTrackableBe1793464454.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CylinderTargetAbstractBehaviour
struct  CylinderTargetAbstractBehaviour_t10167658  : public DataSetTrackableBehaviour_t1793464454
{
public:
	// Vuforia.CylinderTarget Vuforia.CylinderTargetAbstractBehaviour::mCylinderTarget
	Il2CppObject * ___mCylinderTarget_21;
	// System.Single Vuforia.CylinderTargetAbstractBehaviour::mTopDiameterRatio
	float ___mTopDiameterRatio_22;
	// System.Single Vuforia.CylinderTargetAbstractBehaviour::mBottomDiameterRatio
	float ___mBottomDiameterRatio_23;
	// System.Int32 Vuforia.CylinderTargetAbstractBehaviour::mFrameIndex
	int32_t ___mFrameIndex_24;
	// System.Int32 Vuforia.CylinderTargetAbstractBehaviour::mUpdateFrameIndex
	int32_t ___mUpdateFrameIndex_25;
	// System.Single Vuforia.CylinderTargetAbstractBehaviour::mFutureScale
	float ___mFutureScale_26;

public:
	inline static int32_t get_offset_of_mCylinderTarget_21() { return static_cast<int32_t>(offsetof(CylinderTargetAbstractBehaviour_t10167658, ___mCylinderTarget_21)); }
	inline Il2CppObject * get_mCylinderTarget_21() const { return ___mCylinderTarget_21; }
	inline Il2CppObject ** get_address_of_mCylinderTarget_21() { return &___mCylinderTarget_21; }
	inline void set_mCylinderTarget_21(Il2CppObject * value)
	{
		___mCylinderTarget_21 = value;
		Il2CppCodeGenWriteBarrier(&___mCylinderTarget_21, value);
	}

	inline static int32_t get_offset_of_mTopDiameterRatio_22() { return static_cast<int32_t>(offsetof(CylinderTargetAbstractBehaviour_t10167658, ___mTopDiameterRatio_22)); }
	inline float get_mTopDiameterRatio_22() const { return ___mTopDiameterRatio_22; }
	inline float* get_address_of_mTopDiameterRatio_22() { return &___mTopDiameterRatio_22; }
	inline void set_mTopDiameterRatio_22(float value)
	{
		___mTopDiameterRatio_22 = value;
	}

	inline static int32_t get_offset_of_mBottomDiameterRatio_23() { return static_cast<int32_t>(offsetof(CylinderTargetAbstractBehaviour_t10167658, ___mBottomDiameterRatio_23)); }
	inline float get_mBottomDiameterRatio_23() const { return ___mBottomDiameterRatio_23; }
	inline float* get_address_of_mBottomDiameterRatio_23() { return &___mBottomDiameterRatio_23; }
	inline void set_mBottomDiameterRatio_23(float value)
	{
		___mBottomDiameterRatio_23 = value;
	}

	inline static int32_t get_offset_of_mFrameIndex_24() { return static_cast<int32_t>(offsetof(CylinderTargetAbstractBehaviour_t10167658, ___mFrameIndex_24)); }
	inline int32_t get_mFrameIndex_24() const { return ___mFrameIndex_24; }
	inline int32_t* get_address_of_mFrameIndex_24() { return &___mFrameIndex_24; }
	inline void set_mFrameIndex_24(int32_t value)
	{
		___mFrameIndex_24 = value;
	}

	inline static int32_t get_offset_of_mUpdateFrameIndex_25() { return static_cast<int32_t>(offsetof(CylinderTargetAbstractBehaviour_t10167658, ___mUpdateFrameIndex_25)); }
	inline int32_t get_mUpdateFrameIndex_25() const { return ___mUpdateFrameIndex_25; }
	inline int32_t* get_address_of_mUpdateFrameIndex_25() { return &___mUpdateFrameIndex_25; }
	inline void set_mUpdateFrameIndex_25(int32_t value)
	{
		___mUpdateFrameIndex_25 = value;
	}

	inline static int32_t get_offset_of_mFutureScale_26() { return static_cast<int32_t>(offsetof(CylinderTargetAbstractBehaviour_t10167658, ___mFutureScale_26)); }
	inline float get_mFutureScale_26() const { return ___mFutureScale_26; }
	inline float* get_address_of_mFutureScale_26() { return &___mFutureScale_26; }
	inline void set_mFutureScale_26(float value)
	{
		___mFutureScale_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
