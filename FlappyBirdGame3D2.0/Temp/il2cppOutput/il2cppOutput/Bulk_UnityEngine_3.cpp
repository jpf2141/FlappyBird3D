#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// UnityEngineInternal.TypeInferenceRuleAttribute
struct TypeInferenceRuleAttribute_t_519348787_0;
// System.String
struct String_t;
// UnityEngineInternal.GenericStack
struct GenericStack_t1899127421_0;
// System.Delegate
struct Delegate_t_1791715840_0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t502362143_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1621492670.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules987657412.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules987657412MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleA_519348787.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleA_519348787MethodDeclarations.h"
#include "mscorlib_System_Void_224166001.h"
#include "mscorlib_System_Enum_224673028.h"
#include "mscorlib_System_Enum_224673028MethodDeclarations.h"
#include "mscorlib_System_String_756155572.h"
#include "mscorlib_System_Attribute675283329MethodDeclarations.h"
#include "mscorlib_System_Attribute675283329.h"
#include "UnityEngine_UnityEngineInternal_GenericStack1899127421.h"
#include "UnityEngine_UnityEngineInternal_GenericStack1899127421MethodDeclarations.h"
#include "mscorlib_System_Collections_Stack_1068416332MethodDeclarations.h"
#include "mscorlib_System_Collections_Stack_1068416332.h"
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensions45183286.h"
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensions45183286MethodDeclarations.h"
#include "mscorlib_System_Delegate_1791715840.h"
#include "mscorlib_System_Reflection_MethodInfo553963095.h"
#include "mscorlib_System_Type_224215755.h"
#include "mscorlib_System_Object_887538054.h"
#include "mscorlib_System_Delegate_1791715840MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityAction502362143.h"
#include "UnityEngine_UnityEngine_Events_UnityAction502362143MethodDeclarations.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_System_AsyncCallback_266361018.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern TypeInfo* TypeInferenceRules_t987657412_0_il2cpp_TypeInfo_var;
extern "C"  void TypeInferenceRuleAttribute__ctor_m1168575159_0 (TypeInferenceRuleAttribute_t_519348787_0 * __this, int32_t ___rule, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRules_t987657412_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(976);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TypeInferenceRules_t987657412_0_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		TypeInferenceRuleAttribute__ctor_m_2121573255_0(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C"  void TypeInferenceRuleAttribute__ctor_m_2121573255_0 (TypeInferenceRuleAttribute_t_519348787_0 * __this, String_t* ___rule, const MethodInfo* method)
{
	{
		Attribute__ctor_m_1309613515_0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C"  String_t* TypeInferenceRuleAttribute_ToString_m318752778_0 (TypeInferenceRuleAttribute_t_519348787_0 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C"  void GenericStack__ctor_m_1966421063_0 (GenericStack_t1899127421_0 * __this, const MethodInfo* method)
{
	{
		Stack__ctor_m1821673314_0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C"  Delegate_t_1791715840_0 * NetFxCoreExtensions_CreateDelegate_m_886361430_0 (Object_t * __this /* static, unused */, MethodInfo_t * ___self, Type_t * ___delegateType, Object_t * ___target, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___delegateType;
		Object_t * L_1 = ___target;
		MethodInfo_t * L_2 = ___self;
		Delegate_t_1791715840_0 * L_3 = Delegate_CreateDelegate_m_834469550_0(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
extern "C"  MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m1628849205_0 (Object_t * __this /* static, unused */, Delegate_t_1791715840_0 * ___self, const MethodInfo* method)
{
	{
		Delegate_t_1791715840_0 * L_0 = ___self;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m669548326_0(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction__ctor_m_164788053_0 (UnityAction_t502362143_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern "C"  void UnityAction_Invoke_m1979593925_0 (UnityAction_t502362143_0 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_Invoke_m1979593925_0((UnityAction_t502362143_0 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnityAction_t502362143_0(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * UnityAction_BeginInvoke_m_753696098_0 (UnityAction_t502362143_0 * __this, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_EndInvoke_m794691643_0 (UnityAction_t502362143_0 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
