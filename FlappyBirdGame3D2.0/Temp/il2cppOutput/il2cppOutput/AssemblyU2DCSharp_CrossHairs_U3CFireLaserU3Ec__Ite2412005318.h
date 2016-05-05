#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// CrossHairs
struct CrossHairs_t2351085713;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CrossHairs/<FireLaser>c__Iterator2
struct  U3CFireLaserU3Ec__Iterator2_t2412005318  : public Il2CppObject
{
public:
	// UnityEngine.Ray CrossHairs/<FireLaser>c__Iterator2::<ray>__0
	Ray_t1522967639  ___U3CrayU3E__0_0;
	// UnityEngine.RaycastHit CrossHairs/<FireLaser>c__Iterator2::<hit>__1
	RaycastHit_t46221527  ___U3ChitU3E__1_1;
	// System.Int32 CrossHairs/<FireLaser>c__Iterator2::$PC
	int32_t ___U24PC_2;
	// System.Object CrossHairs/<FireLaser>c__Iterator2::$current
	Il2CppObject * ___U24current_3;
	// CrossHairs CrossHairs/<FireLaser>c__Iterator2::<>f__this
	CrossHairs_t2351085713 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_U3CrayU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFireLaserU3Ec__Iterator2_t2412005318, ___U3CrayU3E__0_0)); }
	inline Ray_t1522967639  get_U3CrayU3E__0_0() const { return ___U3CrayU3E__0_0; }
	inline Ray_t1522967639 * get_address_of_U3CrayU3E__0_0() { return &___U3CrayU3E__0_0; }
	inline void set_U3CrayU3E__0_0(Ray_t1522967639  value)
	{
		___U3CrayU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3ChitU3E__1_1() { return static_cast<int32_t>(offsetof(U3CFireLaserU3Ec__Iterator2_t2412005318, ___U3ChitU3E__1_1)); }
	inline RaycastHit_t46221527  get_U3ChitU3E__1_1() const { return ___U3ChitU3E__1_1; }
	inline RaycastHit_t46221527 * get_address_of_U3ChitU3E__1_1() { return &___U3ChitU3E__1_1; }
	inline void set_U3ChitU3E__1_1(RaycastHit_t46221527  value)
	{
		___U3ChitU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CFireLaserU3Ec__Iterator2_t2412005318, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CFireLaserU3Ec__Iterator2_t2412005318, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CFireLaserU3Ec__Iterator2_t2412005318, ___U3CU3Ef__this_4)); }
	inline CrossHairs_t2351085713 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline CrossHairs_t2351085713 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(CrossHairs_t2351085713 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
