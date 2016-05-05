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

// UnityEngine.Object
struct Object_t1159094344_0;
struct Object_t1159094344_0_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t59089492_0;
struct AsyncOperation_t59089492_0_marshaled;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C"  Object_t1159094344_0 * Resources_Load_m_2107575451_0 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C"  Object_t1159094344_0 * Resources_Load_m_693267688_0 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Resources::UnloadUnusedAssets()
extern "C"  AsyncOperation_t59089492_0 * Resources_UnloadUnusedAssets_m_463828869_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
