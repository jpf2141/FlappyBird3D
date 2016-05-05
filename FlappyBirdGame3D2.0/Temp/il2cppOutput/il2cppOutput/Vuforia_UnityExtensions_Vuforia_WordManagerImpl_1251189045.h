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
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>
struct Dictionary_2_t1997230271_0;
// System.Collections.Generic.List`1<Vuforia.WordResult>
struct List_1_t1078765089_0;
// System.Collections.Generic.List`1<Vuforia.Word>
struct List_1_t1968747198_0;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour>
struct Dictionary_2_t_544700123_0;
// System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>
struct List_1_t1636917891_0;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>
struct Dictionary_2_t_1925654566_0;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t_1261093167_0;

#include "Vuforia_UnityExtensions_Vuforia_WordManager_1394506229.h"
#include "Vuforia_UnityExtensions_Vuforia_WordPrefabCreation_565184600.h"

// Vuforia.WordManagerImpl
struct  WordManagerImpl_t_1251189045_0  : public WordManager_t_1394506229_0
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult> Vuforia.WordManagerImpl::mTrackedWords
	Dictionary_2_t1997230271_0 * ___mTrackedWords_1;
	// System.Collections.Generic.List`1<Vuforia.WordResult> Vuforia.WordManagerImpl::mNewWords
	List_1_t1078765089_0 * ___mNewWords_2;
	// System.Collections.Generic.List`1<Vuforia.Word> Vuforia.WordManagerImpl::mLostWords
	List_1_t1968747198_0 * ___mLostWords_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::mActiveWordBehaviours
	Dictionary_2_t_544700123_0 * ___mActiveWordBehaviours_4;
	// System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::mWordBehavioursMarkedForDeletion
	List_1_t1636917891_0 * ___mWordBehavioursMarkedForDeletion_5;
	// System.Collections.Generic.List`1<Vuforia.Word> Vuforia.WordManagerImpl::mWaitingQueue
	List_1_t1968747198_0 * ___mWaitingQueue_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>> Vuforia.WordManagerImpl::mWordBehaviours
	Dictionary_2_t_1925654566_0 * ___mWordBehaviours_7;
	// System.Boolean Vuforia.WordManagerImpl::mAutomaticTemplate
	bool ___mAutomaticTemplate_8;
	// System.Int32 Vuforia.WordManagerImpl::mMaxInstances
	int32_t ___mMaxInstances_9;
	// Vuforia.WordPrefabCreationMode Vuforia.WordManagerImpl::mWordPrefabCreationMode
	int32_t ___mWordPrefabCreationMode_10;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.WordManagerImpl::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t_1261093167_0 * ___mVuforiaBehaviour_11;
};
