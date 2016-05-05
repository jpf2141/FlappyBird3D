#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// ICardboardGazePointer
struct ICardboardGazePointer_t268917552_0;
// ICardboardGazeResponder
struct ICardboardGazeResponder_t1501554741_0;
// UnityEngine.Camera
struct Camera_t814710830_0;
// System.Func`2<UnityEngine.MonoBehaviour,ICardboardGazePointer>
struct Func_2_t_930800322_0;
// System.Func`2<ICardboardGazePointer,System.Boolean>
struct Func_2_t200518258_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_LayerMask_1132430796.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// CardboardGaze
struct  CardboardGaze_t_732836512_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.GameObject CardboardGaze::pointerObject
	GameObject_t_184308134_0 * ___pointerObject_2;
	// ICardboardGazePointer CardboardGaze::pointer
	Object_t * ___pointer_3;
	// UnityEngine.LayerMask CardboardGaze::mask
	LayerMask_t_1132430796_0  ___mask_4;
	// ICardboardGazeResponder CardboardGaze::currentTarget
	Object_t * ___currentTarget_5;
	// UnityEngine.GameObject CardboardGaze::currentGazeObject
	GameObject_t_184308134_0 * ___currentGazeObject_6;
	// UnityEngine.Vector3 CardboardGaze::lastIntersectPosition
	Vector3_t_725341337_0  ___lastIntersectPosition_7;
	// System.Boolean CardboardGaze::cardboardTrigger
	bool ___cardboardTrigger_8;
	// UnityEngine.Camera CardboardGaze::<cam>k__BackingField
	Camera_t814710830_0 * ___U3CcamU3Ek__BackingField_9;
};
struct CardboardGaze_t_732836512_0_StaticFields{
	// System.Func`2<UnityEngine.MonoBehaviour,ICardboardGazePointer> CardboardGaze::<>f__am$cache8
	Func_2_t_930800322_0 * ___U3CU3Ef__amU24cache8_10;
	// System.Func`2<ICardboardGazePointer,System.Boolean> CardboardGaze::<>f__am$cache9
	Func_2_t200518258_0 * ___U3CU3Ef__amU24cache9_11;
};
