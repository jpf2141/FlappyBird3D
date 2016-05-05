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

// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t_795762921_0;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t_533356922_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t895775363_0;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t1674018936_0;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t_855216337_0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>
struct KeyCollection_t1709932713_0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t_99834281_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair__1746551967.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2030389994.h"
#include "mscorlib_System_Collections_DictionaryEntry_1842557272.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor()
extern "C"  void Dictionary_2__ctor_m1446664671_0_gshared (Dictionary_2_t_795762921_0 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1446664671_0(__this, method) ((  void (*) (Dictionary_2_t_795762921_0 *, const MethodInfo*))Dictionary_2__ctor_m1446664671_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m_800878890_0_gshared (Dictionary_2_t_795762921_0 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m_800878890_0(__this, ___comparer, method) ((  void (*) (Dictionary_2_t_795762921_0 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m_800878890_0_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m925710512_0_gshared (Dictionary_2_t_795762921_0 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m925710512_0(__this, ___capacity, method) ((  void (*) (Dictionary_2_t_795762921_0 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m925710512_0_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m_726651232_0_gshared (Dictionary_2_t_795762921_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m_726651232_0(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t_795762921_0 *, SerializationInfo_t526833679_0 *, StreamingContext_t_1216992900_0 , const MethodInfo*))Dictionary_2__ctor_m_726651232_0_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1994144457_0_gshared (Dictionary_2_t_795762921_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1994144457_0(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t_795762921_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1994144457_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m_1140368466_0_gshared (Dictionary_2_t_795762921_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m_1140368466_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_795762921_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m_1140368466_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m1308872163_0_gshared (Dictionary_2_t_795762921_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1308872163_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_795762921_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1308872163_0_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m_2068709453_0_gshared (Dictionary_2_t_795762921_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m_2068709453_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_795762921_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m_2068709453_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m789770732_0_gshared (Dictionary_2_t_795762921_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m789770732_0(__this, ___key, method) ((  void (*) (Dictionary_2_t_795762921_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m789770732_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m394790017_0_gshared (Dictionary_2_t_795762921_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m394790017_0(__this, method) ((  bool (*) (Dictionary_2_t_795762921_0 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m394790017_0_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m_474851667_0_gshared (Dictionary_2_t_795762921_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m_474851667_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_795762921_0 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m_474851667_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m658188677_0_gshared (Dictionary_2_t_795762921_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m658188677_0(__this, method) ((  bool (*) (Dictionary_2_t_795762921_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m658188677_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m_358893438_0_gshared (Dictionary_2_t_795762921_0 * __this, KeyValuePair_2_t_1746551967_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m_358893438_0(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t_795762921_0 *, KeyValuePair_2_t_1746551967_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m_358893438_0_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m889007104_0_gshared (Dictionary_2_t_795762921_0 * __this, KeyValuePair_2_t_1746551967_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m889007104_0(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t_795762921_0 *, KeyValuePair_2_t_1746551967_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m889007104_0_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1304447974_0_gshared (Dictionary_2_t_795762921_0 * __this, KeyValuePair_2U5BU5D_t895775363_0* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1304447974_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_795762921_0 *, KeyValuePair_2U5BU5D_t895775363_0*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1304447974_0_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1575375653_0_gshared (Dictionary_2_t_795762921_0 * __this, KeyValuePair_2_t_1746551967_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1575375653_0(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t_795762921_0 *, KeyValuePair_2_t_1746551967_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1575375653_0_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m_1578891195_0_gshared (Dictionary_2_t_795762921_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m_1578891195_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_795762921_0 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m_1578891195_0_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_1930089088_0_gshared (Dictionary_2_t_795762921_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_1930089088_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_795762921_0 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_1930089088_0_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m_1219663235_0_gshared (Dictionary_2_t_795762921_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m_1219663235_0(__this, method) ((  Object_t* (*) (Dictionary_2_t_795762921_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m_1219663235_0_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_355102440_0_gshared (Dictionary_2_t_795762921_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_355102440_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_795762921_0 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_355102440_0_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m_1674274361_0_gshared (Dictionary_2_t_795762921_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m_1674274361_0(__this, method) ((  int32_t (*) (Dictionary_2_t_795762921_0 *, const MethodInfo*))Dictionary_2_get_Count_m_1674274361_0_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Item(TKey)
extern "C"  uint16_t Dictionary_2_get_Item_m546681156_0_gshared (Dictionary_2_t_795762921_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m546681156_0(__this, ___key, method) ((  uint16_t (*) (Dictionary_2_t_795762921_0 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m546681156_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m1455447391_0_gshared (Dictionary_2_t_795762921_0 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1455447391_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_795762921_0 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_set_Item_m1455447391_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m888191319_0_gshared (Dictionary_2_t_795762921_0 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m888191319_0(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t_795762921_0 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m888191319_0_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m506518336_0_gshared (Dictionary_2_t_795762921_0 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m506518336_0(__this, ___size, method) ((  void (*) (Dictionary_2_t_795762921_0 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m506518336_0_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m_2139945156_0_gshared (Dictionary_2_t_795762921_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m_2139945156_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_795762921_0 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m_2139945156_0_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t_1746551967_0  Dictionary_2_make_pair_m97373832_0_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m97373832_0(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t_1746551967_0  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_make_pair_m97373832_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_key(TKey,TValue)
extern "C"  Object_t * Dictionary_2_pick_key_m_1558317970_0_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m_1558317970_0(__this /* static, unused */, ___key, ___value, method) ((  Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_key_m_1558317970_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_value(TKey,TValue)
extern "C"  uint16_t Dictionary_2_pick_value_m2040095662_0_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m2040095662_0(__this /* static, unused */, ___key, ___value, method) ((  uint16_t (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_value_m2040095662_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m_358522605_0_gshared (Dictionary_2_t_795762921_0 * __this, KeyValuePair_2U5BU5D_t895775363_0* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m_358522605_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_795762921_0 *, KeyValuePair_2U5BU5D_t895775363_0*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m_358522605_0_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Resize()
extern "C"  void Dictionary_2_Resize_m1954728505_0_gshared (Dictionary_2_t_795762921_0 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1954728505_0(__this, method) ((  void (*) (Dictionary_2_t_795762921_0 *, const MethodInfo*))Dictionary_2_Resize_m1954728505_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m_883259978_0_gshared (Dictionary_2_t_795762921_0 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m_883259978_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_795762921_0 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_Add_m_883259978_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Clear()
extern "C"  void Dictionary_2_Clear_m_1147202038_0_gshared (Dictionary_2_t_795762921_0 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m_1147202038_0(__this, method) ((  void (*) (Dictionary_2_t_795762921_0 *, const MethodInfo*))Dictionary_2_Clear_m_1147202038_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m_882915728_0_gshared (Dictionary_2_t_795762921_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m_882915728_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_795762921_0 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m_882915728_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m_460168592_0_gshared (Dictionary_2_t_795762921_0 * __this, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m_460168592_0(__this, ___value, method) ((  bool (*) (Dictionary_2_t_795762921_0 *, uint16_t, const MethodInfo*))Dictionary_2_ContainsValue_m_460168592_0_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m_1683433987_0_gshared (Dictionary_2_t_795762921_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m_1683433987_0(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t_795762921_0 *, SerializationInfo_t526833679_0 *, StreamingContext_t_1216992900_0 , const MethodInfo*))Dictionary_2_GetObjectData_m_1683433987_0_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m88019079_0_gshared (Dictionary_2_t_795762921_0 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m88019079_0(__this, ___sender, method) ((  void (*) (Dictionary_2_t_795762921_0 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m88019079_0_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m_2047202176_0_gshared (Dictionary_2_t_795762921_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m_2047202176_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_795762921_0 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m_2047202176_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m_675893559_0_gshared (Dictionary_2_t_795762921_0 * __this, Object_t * ___key, uint16_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m_675893559_0(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t_795762921_0 *, Object_t *, uint16_t*, const MethodInfo*))Dictionary_2_TryGetValue_m_675893559_0_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Keys()
extern "C"  KeyCollection_t1709932713_0 * Dictionary_2_get_Keys_m1976661718_0_gshared (Dictionary_2_t_795762921_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1976661718_0(__this, method) ((  KeyCollection_t1709932713_0 * (*) (Dictionary_2_t_795762921_0 *, const MethodInfo*))Dictionary_2_get_Keys_m1976661718_0_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Values()
extern "C"  ValueCollection_t_99834281_0 * Dictionary_2_get_Values_m_2132319786_0_gshared (Dictionary_2_t_795762921_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m_2132319786_0(__this, method) ((  ValueCollection_t_99834281_0 * (*) (Dictionary_2_t_795762921_0 *, const MethodInfo*))Dictionary_2_get_Values_m_2132319786_0_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTKey(System.Object)
extern "C"  Object_t * Dictionary_2_ToTKey_m_2108459063_0_gshared (Dictionary_2_t_795762921_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m_2108459063_0(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t_795762921_0 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m_2108459063_0_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTValue(System.Object)
extern "C"  uint16_t Dictionary_2_ToTValue_m352409801_0_gshared (Dictionary_2_t_795762921_0 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m352409801_0(__this, ___value, method) ((  uint16_t (*) (Dictionary_2_t_795762921_0 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m352409801_0_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m_1065919901_0_gshared (Dictionary_2_t_795762921_0 * __this, KeyValuePair_2_t_1746551967_0  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m_1065919901_0(__this, ___pair, method) ((  bool (*) (Dictionary_2_t_795762921_0 *, KeyValuePair_2_t_1746551967_0 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m_1065919901_0_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetEnumerator()
extern "C"  Enumerator_t2030389994_0  Dictionary_2_GetEnumerator_m2001289956_0_gshared (Dictionary_2_t_795762921_0 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m2001289956_0(__this, method) ((  Enumerator_t2030389994_0  (*) (Dictionary_2_t_795762921_0 *, const MethodInfo*))Dictionary_2_GetEnumerator_m2001289956_0_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t_1842557272_0  Dictionary_2_U3CCopyToU3Em__0_m1067208243_0_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1067208243_0(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t_1842557272_0  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1067208243_0_gshared)(__this /* static, unused */, ___key, ___value, method)
