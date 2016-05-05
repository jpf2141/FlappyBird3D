#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1872284309_0;
// System.Collections.Generic.HashSet`1/Link<Vuforia.BackgroundPlaneAbstractBehaviour>[]
struct LinkU5BU5D_t1143057331_0;
// Vuforia.BackgroundPlaneAbstractBehaviour[]
struct BackgroundPlaneAbstractBehaviourU5BU5D_t_825591577_0;
// System.Collections.Generic.IEqualityComparer`1<Vuforia.BackgroundPlaneAbstractBehaviour>
struct IEqualityComparer_1_t_414917306_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;

#include "mscorlib_System_Object_887538054.h"

// System.Collections.Generic.HashSet`1<Vuforia.BackgroundPlaneAbstractBehaviour>
struct  HashSet_1_t971887371_0  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1::table
	Int32U5BU5D_t1872284309_0* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1::links
	LinkU5BU5D_t1143057331_0* ___links_5;
	// T[] System.Collections.Generic.HashSet`1::slots
	BackgroundPlaneAbstractBehaviourU5BU5D_t_825591577_0* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::comparer
	Object_t* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::si
	SerializationInfo_t526833679_0 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1::generation
	int32_t ___generation_13;
};
