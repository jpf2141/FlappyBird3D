#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// ICardboardGazePointer
struct ICardboardGazePointer_t396842795;
// ICardboardGazeResponder
struct ICardboardGazeResponder_t4178628976;
// UnityEngine.Camera
struct Camera_t3533968274;
// System.Func`2<UnityEngine.MonoBehaviour,ICardboardGazePointer>
struct Func_2_t2620891888;
// System.Func`2<ICardboardGazePointer,System.Boolean>
struct Func_2_t1318772078;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardGaze
struct  CardboardGaze_t2975790171  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject CardboardGaze::pointerObject
	GameObject_t4012695102 * ___pointerObject_2;
	// ICardboardGazePointer CardboardGaze::pointer
	Il2CppObject * ___pointer_3;
	// UnityEngine.LayerMask CardboardGaze::mask
	LayerMask_t1862190090  ___mask_4;
	// ICardboardGazeResponder CardboardGaze::currentTarget
	Il2CppObject * ___currentTarget_5;
	// UnityEngine.GameObject CardboardGaze::currentGazeObject
	GameObject_t4012695102 * ___currentGazeObject_6;
	// UnityEngine.Vector3 CardboardGaze::lastIntersectPosition
	Vector3_t3525329789  ___lastIntersectPosition_7;
	// System.Boolean CardboardGaze::cardboardTrigger
	bool ___cardboardTrigger_8;
	// UnityEngine.Camera CardboardGaze::<cam>k__BackingField
	Camera_t3533968274 * ___U3CcamU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_pointerObject_2() { return static_cast<int32_t>(offsetof(CardboardGaze_t2975790171, ___pointerObject_2)); }
	inline GameObject_t4012695102 * get_pointerObject_2() const { return ___pointerObject_2; }
	inline GameObject_t4012695102 ** get_address_of_pointerObject_2() { return &___pointerObject_2; }
	inline void set_pointerObject_2(GameObject_t4012695102 * value)
	{
		___pointerObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___pointerObject_2, value);
	}

	inline static int32_t get_offset_of_pointer_3() { return static_cast<int32_t>(offsetof(CardboardGaze_t2975790171, ___pointer_3)); }
	inline Il2CppObject * get_pointer_3() const { return ___pointer_3; }
	inline Il2CppObject ** get_address_of_pointer_3() { return &___pointer_3; }
	inline void set_pointer_3(Il2CppObject * value)
	{
		___pointer_3 = value;
		Il2CppCodeGenWriteBarrier(&___pointer_3, value);
	}

	inline static int32_t get_offset_of_mask_4() { return static_cast<int32_t>(offsetof(CardboardGaze_t2975790171, ___mask_4)); }
	inline LayerMask_t1862190090  get_mask_4() const { return ___mask_4; }
	inline LayerMask_t1862190090 * get_address_of_mask_4() { return &___mask_4; }
	inline void set_mask_4(LayerMask_t1862190090  value)
	{
		___mask_4 = value;
	}

	inline static int32_t get_offset_of_currentTarget_5() { return static_cast<int32_t>(offsetof(CardboardGaze_t2975790171, ___currentTarget_5)); }
	inline Il2CppObject * get_currentTarget_5() const { return ___currentTarget_5; }
	inline Il2CppObject ** get_address_of_currentTarget_5() { return &___currentTarget_5; }
	inline void set_currentTarget_5(Il2CppObject * value)
	{
		___currentTarget_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentTarget_5, value);
	}

	inline static int32_t get_offset_of_currentGazeObject_6() { return static_cast<int32_t>(offsetof(CardboardGaze_t2975790171, ___currentGazeObject_6)); }
	inline GameObject_t4012695102 * get_currentGazeObject_6() const { return ___currentGazeObject_6; }
	inline GameObject_t4012695102 ** get_address_of_currentGazeObject_6() { return &___currentGazeObject_6; }
	inline void set_currentGazeObject_6(GameObject_t4012695102 * value)
	{
		___currentGazeObject_6 = value;
		Il2CppCodeGenWriteBarrier(&___currentGazeObject_6, value);
	}

	inline static int32_t get_offset_of_lastIntersectPosition_7() { return static_cast<int32_t>(offsetof(CardboardGaze_t2975790171, ___lastIntersectPosition_7)); }
	inline Vector3_t3525329789  get_lastIntersectPosition_7() const { return ___lastIntersectPosition_7; }
	inline Vector3_t3525329789 * get_address_of_lastIntersectPosition_7() { return &___lastIntersectPosition_7; }
	inline void set_lastIntersectPosition_7(Vector3_t3525329789  value)
	{
		___lastIntersectPosition_7 = value;
	}

	inline static int32_t get_offset_of_cardboardTrigger_8() { return static_cast<int32_t>(offsetof(CardboardGaze_t2975790171, ___cardboardTrigger_8)); }
	inline bool get_cardboardTrigger_8() const { return ___cardboardTrigger_8; }
	inline bool* get_address_of_cardboardTrigger_8() { return &___cardboardTrigger_8; }
	inline void set_cardboardTrigger_8(bool value)
	{
		___cardboardTrigger_8 = value;
	}

	inline static int32_t get_offset_of_U3CcamU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(CardboardGaze_t2975790171, ___U3CcamU3Ek__BackingField_9)); }
	inline Camera_t3533968274 * get_U3CcamU3Ek__BackingField_9() const { return ___U3CcamU3Ek__BackingField_9; }
	inline Camera_t3533968274 ** get_address_of_U3CcamU3Ek__BackingField_9() { return &___U3CcamU3Ek__BackingField_9; }
	inline void set_U3CcamU3Ek__BackingField_9(Camera_t3533968274 * value)
	{
		___U3CcamU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcamU3Ek__BackingField_9, value);
	}
};

struct CardboardGaze_t2975790171_StaticFields
{
public:
	// System.Func`2<UnityEngine.MonoBehaviour,ICardboardGazePointer> CardboardGaze::<>f__am$cache8
	Func_2_t2620891888 * ___U3CU3Ef__amU24cache8_10;
	// System.Func`2<ICardboardGazePointer,System.Boolean> CardboardGaze::<>f__am$cache9
	Func_2_t1318772078 * ___U3CU3Ef__amU24cache9_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_10() { return static_cast<int32_t>(offsetof(CardboardGaze_t2975790171_StaticFields, ___U3CU3Ef__amU24cache8_10)); }
	inline Func_2_t2620891888 * get_U3CU3Ef__amU24cache8_10() const { return ___U3CU3Ef__amU24cache8_10; }
	inline Func_2_t2620891888 ** get_address_of_U3CU3Ef__amU24cache8_10() { return &___U3CU3Ef__amU24cache8_10; }
	inline void set_U3CU3Ef__amU24cache8_10(Func_2_t2620891888 * value)
	{
		___U3CU3Ef__amU24cache8_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_11() { return static_cast<int32_t>(offsetof(CardboardGaze_t2975790171_StaticFields, ___U3CU3Ef__amU24cache9_11)); }
	inline Func_2_t1318772078 * get_U3CU3Ef__amU24cache9_11() const { return ___U3CU3Ef__amU24cache9_11; }
	inline Func_2_t1318772078 ** get_address_of_U3CU3Ef__amU24cache9_11() { return &___U3CU3Ef__amU24cache9_11; }
	inline void set_U3CU3Ef__amU24cache9_11(Func_2_t1318772078 * value)
	{
		___U3CU3Ef__amU24cache9_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
