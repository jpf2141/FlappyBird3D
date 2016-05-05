#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_t_803753146_0;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>
struct Dictionary_2_t1817414794_0;

#include "Vuforia_UnityExtensions_Vuforia_TargetFinder_689276593.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinderImpl_T_281980006.h"

// Vuforia.TargetFinderImpl
struct  TargetFinderImpl_t_8253425_0  : public TargetFinder_t_689276593_0
{
	// System.IntPtr Vuforia.TargetFinderImpl::mTargetFinderStatePtr
	IntPtr_t ___mTargetFinderStatePtr_0;
	// Vuforia.TargetFinderImpl/TargetFinderState Vuforia.TargetFinderImpl::mTargetFinderState
	TargetFinderState_t_281980006_0  ___mTargetFinderState_1;
	// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinderImpl::mNewResults
	List_1_t_803753146_0 * ___mNewResults_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget> Vuforia.TargetFinderImpl::mImageTargets
	Dictionary_2_t1817414794_0 * ___mImageTargets_3;
};
