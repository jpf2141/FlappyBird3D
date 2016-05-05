#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityStandardAssets.Utility.TimedObjectActivator
struct TimedObjectActivator_t27811713_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// UnityStandardAssets.Utility.TimedObjectActivator/Entry
struct Entry_t_1881352124_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.Utility.TimedObjectActivator::.ctor()
extern "C"  void TimedObjectActivator__ctor_m1404089525_0 (TimedObjectActivator_t27811713_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.TimedObjectActivator::Awake()
extern "C"  void TimedObjectActivator_Awake_m1641694744_0 (TimedObjectActivator_t27811713_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Activate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C"  Object_t * TimedObjectActivator_Activate_m_1483687083_0 (TimedObjectActivator_t27811713_0 * __this, Entry_t_1881352124_0 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Deactivate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C"  Object_t * TimedObjectActivator_Deactivate_m_671641514_0 (TimedObjectActivator_t27811713_0 * __this, Entry_t_1881352124_0 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::ReloadLevel(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C"  Object_t * TimedObjectActivator_ReloadLevel_m_361727535_0 (TimedObjectActivator_t27811713_0 * __this, Entry_t_1881352124_0 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
