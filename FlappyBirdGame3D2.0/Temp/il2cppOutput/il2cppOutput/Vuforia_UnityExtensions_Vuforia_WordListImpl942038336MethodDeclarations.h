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

// Vuforia.WordListImpl
struct WordListImpl_t942038336_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaUnity_Stor_1234840399.h"
#include "Vuforia_UnityExtensions_Vuforia_WordFilterMode1730249245.h"

// System.Boolean Vuforia.WordListImpl::LoadWordListFile(System.String)
extern "C"  bool WordListImpl_LoadWordListFile_m_1987069448_0 (WordListImpl_t942038336_0 * __this, String_t* ___relativePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::LoadWordListFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  bool WordListImpl_LoadWordListFile_m1533454665_0 (WordListImpl_t942038336_0 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WordListImpl::AddWordsFromFile(System.String)
extern "C"  int32_t WordListImpl_AddWordsFromFile_m2013765658_0 (WordListImpl_t942038336_0 * __this, String_t* ___relativePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WordListImpl::AddWordsFromFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  int32_t WordListImpl_AddWordsFromFile_m3903335_0 (WordListImpl_t942038336_0 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::AddWord(System.String)
extern "C"  bool WordListImpl_AddWord_m481103829_0 (WordListImpl_t942038336_0 * __this, String_t* ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::RemoveWord(System.String)
extern "C"  bool WordListImpl_RemoveWord_m318576884_0 (WordListImpl_t942038336_0 * __this, String_t* ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::ContainsWord(System.String)
extern "C"  bool WordListImpl_ContainsWord_m_1961288903_0 (WordListImpl_t942038336_0 * __this, String_t* ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::UnloadAllLists()
extern "C"  bool WordListImpl_UnloadAllLists_m330436851_0 (WordListImpl_t942038336_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordFilterMode Vuforia.WordListImpl::GetFilterMode()
extern "C"  int32_t WordListImpl_GetFilterMode_m1305152987_0 (WordListImpl_t942038336_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::SetFilterMode(Vuforia.WordFilterMode)
extern "C"  bool WordListImpl_SetFilterMode_m_1750993586_0 (WordListImpl_t942038336_0 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::LoadFilterListFile(System.String)
extern "C"  bool WordListImpl_LoadFilterListFile_m_1067927798_0 (WordListImpl_t942038336_0 * __this, String_t* ___relativePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::LoadFilterListFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  bool WordListImpl_LoadFilterListFile_m_827517321_0 (WordListImpl_t942038336_0 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::AddWordToFilterList(System.String)
extern "C"  bool WordListImpl_AddWordToFilterList_m_2117655420_0 (WordListImpl_t942038336_0 * __this, String_t* ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::RemoveWordFromFilterList(System.String)
extern "C"  bool WordListImpl_RemoveWordFromFilterList_m1852731412_0 (WordListImpl_t942038336_0 * __this, String_t* ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::ClearFilterList()
extern "C"  bool WordListImpl_ClearFilterList_m_1207317403_0 (WordListImpl_t942038336_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WordListImpl::GetFilterListWordCount()
extern "C"  int32_t WordListImpl_GetFilterListWordCount_m216750291_0 (WordListImpl_t942038336_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.WordListImpl::GetFilterListWord(System.Int32)
extern "C"  String_t* WordListImpl_GetFilterListWord_m_807499624_0 (WordListImpl_t942038336_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordListImpl::.ctor()
extern "C"  void WordListImpl__ctor_m43526102_0 (WordListImpl_t942038336_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
