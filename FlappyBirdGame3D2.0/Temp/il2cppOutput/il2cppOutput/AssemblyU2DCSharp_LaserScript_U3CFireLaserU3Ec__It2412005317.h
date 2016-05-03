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
// LaserScript
struct LaserScript_t2082381654;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LaserScript/<FireLaser>c__Iterator1
struct  U3CFireLaserU3Ec__Iterator1_t2412005317  : public Il2CppObject
{
public:
	// UnityEngine.Ray LaserScript/<FireLaser>c__Iterator1::<ray>__0
	Ray_t1522967639  ___U3CrayU3E__0_0;
	// UnityEngine.RaycastHit LaserScript/<FireLaser>c__Iterator1::<hit>__1
	RaycastHit_t46221527  ___U3ChitU3E__1_1;
	// System.Int32 LaserScript/<FireLaser>c__Iterator1::$PC
	int32_t ___U24PC_2;
	// System.Object LaserScript/<FireLaser>c__Iterator1::$current
	Il2CppObject * ___U24current_3;
	// LaserScript LaserScript/<FireLaser>c__Iterator1::<>f__this
	LaserScript_t2082381654 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_U3CrayU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFireLaserU3Ec__Iterator1_t2412005317, ___U3CrayU3E__0_0)); }
	inline Ray_t1522967639  get_U3CrayU3E__0_0() const { return ___U3CrayU3E__0_0; }
	inline Ray_t1522967639 * get_address_of_U3CrayU3E__0_0() { return &___U3CrayU3E__0_0; }
	inline void set_U3CrayU3E__0_0(Ray_t1522967639  value)
	{
		___U3CrayU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3ChitU3E__1_1() { return static_cast<int32_t>(offsetof(U3CFireLaserU3Ec__Iterator1_t2412005317, ___U3ChitU3E__1_1)); }
	inline RaycastHit_t46221527  get_U3ChitU3E__1_1() const { return ___U3ChitU3E__1_1; }
	inline RaycastHit_t46221527 * get_address_of_U3ChitU3E__1_1() { return &___U3ChitU3E__1_1; }
	inline void set_U3ChitU3E__1_1(RaycastHit_t46221527  value)
	{
		___U3ChitU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CFireLaserU3Ec__Iterator1_t2412005317, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CFireLaserU3Ec__Iterator1_t2412005317, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CFireLaserU3Ec__Iterator1_t2412005317, ___U3CU3Ef__this_4)); }
	inline LaserScript_t2082381654 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline LaserScript_t2082381654 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(LaserScript_t2082381654 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
