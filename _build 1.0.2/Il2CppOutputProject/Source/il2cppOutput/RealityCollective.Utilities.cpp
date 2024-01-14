#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Guid,System.Object>
struct Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A;
// System.Collections.Generic.Dictionary`2<System.Guid,System.Type>
struct Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Collections.Generic.IEqualityComparer`1<System.Guid>
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,System.Type>
struct KeyCollection_t6C9C69A11E3707FE33315DC119E44751065C484C;
// System.Collections.Generic.List`1<System.Reflection.Assembly>
struct List_1_t1BED237EBA2788604B1D39FC183B07E28F912A89;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,System.Type>
struct ValueCollection_t68A3B576857A64E5A28057446E2CAC5DC85EF43C;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,System.Type>[]
struct EntryU5BU5D_tA29C9702626FEE68BF8C553571149E55D6D9B850;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// RealityCollective.Utilities.Async.AwaitYieldInstructions.BackgroundThread
struct BackgroundThread_t26D0B2A07C86C689A433AA708F1F294691902582;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// RealityCollective.Utilities.CaptureApplicationLog
struct CaptureApplicationLog_t1E7911E7491718782A373F575D3626534455A9EE;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// RealityCollective.Attributes.ImplementsAttribute
struct ImplementsAttribute_tA860407A2CAD81BE53BD11D93BD84DD7C094584B;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.MulticastDelegate
struct MulticastDelegate_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// RealityCollective.Definitions.Utilities.SystemType
struct SystemType_tB5B24A89EB4E146E8834D2B7639D49A8573CB692;
// RealityCollective.Attributes.SystemTypeAttribute
struct SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// RealityCollective.Utilities.Async.AwaitYieldInstructions.UnityMainThread
struct UnityMainThread_t59A021915103C8216F7CC077A856A8696948CE38;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;
// RealityCollective.Utilities.Async.AwaiterExtensions/CoroutineRunner
struct CoroutineRunner_t1E1D8F2F614EA4651347EC938A0D60D2DC6F72E5;
// RealityCollective.Utilities.StaticLogger/SampleEventHandler
struct SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Awaiters_tE8A66E36BB0DF9DE43ED6A1A22D40EFCD4CE17CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BackgroundThread_t26D0B2A07C86C689A433AA708F1F294691902582_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1BED237EBA2788604B1D39FC183B07E28F912A89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SyncContextUtility_t04A13A902AABFAC7E069C8B6B52A0379EAF1165A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMainThread_t59A021915103C8216F7CC077A856A8696948CE38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B590A2DA605C4ACE411C09E803C72CE23A58D9C;
IL2CPP_EXTERN_C String_t* _stringLiteral1732F7776A03D9C8C5A8E0EDB01E25276BF6B50C;
IL2CPP_EXTERN_C String_t* _stringLiteral17F41FF9E16BE6764A333984153A7EF6E8E0F383;
IL2CPP_EXTERN_C String_t* _stringLiteral2F04864B7F8E8E33B4C29ACCC47D05C1FC60EFCC;
IL2CPP_EXTERN_C String_t* _stringLiteral309C3C8C8BE2328BA2D6B29B0EFD1E8628F19EC7;
IL2CPP_EXTERN_C String_t* _stringLiteral3280DCDC2F48063F5689EB982E7E16AEFC843B60;
IL2CPP_EXTERN_C String_t* _stringLiteral4022A8BC8D35BEF968F6E01AEB2C7737F701E4C4;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral5BE4DADFBDE5EF555F83BE5D0B680C62B8DD7D03;
IL2CPP_EXTERN_C String_t* _stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64;
IL2CPP_EXTERN_C String_t* _stringLiteral61F55878342A2013C48FD41A861A86C7CF593386;
IL2CPP_EXTERN_C String_t* _stringLiteral665E797A3599B9897D67B275B03AA411D5F46D5C;
IL2CPP_EXTERN_C String_t* _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralA595045A170FFFCA7DD1E3542FD870097B41D647;
IL2CPP_EXTERN_C String_t* _stringLiteralA5DC1E9AD63D4AA760901AB13611579972177BE8;
IL2CPP_EXTERN_C String_t* _stringLiteralAB0548768781A1B335044212785C35DD6D2732DD;
IL2CPP_EXTERN_C String_t* _stringLiteralB64F92F3CD058D0D2E20DDD086D6243E5EA3750D;
IL2CPP_EXTERN_C String_t* _stringLiteralB9254CCAEB4BE5E2AF70D95144BCDF5CA631FECE;
IL2CPP_EXTERN_C String_t* _stringLiteralCFEF3227A766442073C70EFE7DC19B6BA9C63006;
IL2CPP_EXTERN_C String_t* _stringLiteralFB0231D69D93A47A94ABFDE22A07442F753F031D;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CaptureApplicationLog_Log_mA455A737AFE06DF63DD073999CC90CFCF502FE4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA0E12EE07EE50922F0FE000A6B1FFBF302EBE803_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m7C96DF572979FE8ACED100C3AFCD087C9BB92BCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m23C37DF5836546C93887648DDAB58EF35EB3EC7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m00D927111369708DCF4E263CE662DBB8A55E841A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m08AFE23A2CFC262FC92C2865D20C4A06EC91144E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC333738F45652C892517660DEE4B22270EF9D0A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m4F2991627C669A2015A7B431CA6E37AD2E10B024_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F799D24C042923B6F560AF8FEA1CB00A1233888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_BuildTypeCache_m5A5D18643418D9F0CE3A1F2B2697287F5B265F32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_TryResolveType_m5D65584E4432E6726DE4D40EDD8D9283481D7FF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t91D6C8C92FD980CABFB0E672180E2B8390611A4F 
{
};

// System.Collections.Generic.Dictionary`2<System.Guid,System.Type>
struct Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA29C9702626FEE68BF8C553571149E55D6D9B850* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t6C9C69A11E3707FE33315DC119E44751065C484C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t68A3B576857A64E5A28057446E2CAC5DC85EF43C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<System.Reflection.Assembly>
struct List_1_t1BED237EBA2788604B1D39FC183B07E28F912A89  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// RealityCollective.Extensions.ArrayExtensions
struct ArrayExtensions_t0C88E0E96074CA62C41A12DBE11BC23BE39EB533  : public RuntimeObject
{
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// RealityCollective.Utilities.Async.AwaiterExtensions
struct AwaiterExtensions_t443DB9BB39C420AEDDF2D15E5AD4394A4877027E  : public RuntimeObject
{
};

// RealityCollective.Utilities.Async.Awaiters
struct Awaiters_tE8A66E36BB0DF9DE43ED6A1A22D40EFCD4CE17CB  : public RuntimeObject
{
};

// RealityCollective.Utilities.Async.AwaitYieldInstructions.BackgroundThread
struct BackgroundThread_t26D0B2A07C86C689A433AA708F1F294691902582  : public RuntimeObject
{
};

// RealityCollective.Extensions.ComponentExtensions
struct ComponentExtensions_t785632CA50CFB68DC5A5533F44D2AD6BC82E0F2E  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// RealityCollective.Utilities.StaticLogger
struct StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// RealityCollective.Utilities.Async.Internal.SyncContextUtility
struct SyncContextUtility_t04A13A902AABFAC7E069C8B6B52A0379EAF1165A  : public RuntimeObject
{
};

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
};

// RealityCollective.Utilities.TypeCache
struct TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457  : public RuntimeObject
{
};

// RealityCollective.Extensions.TypeExtensions
struct TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293  : public RuntimeObject
{
};

// RealityCollective.Extensions.UnityObjectExtensions
struct UnityObjectExtensions_t541B55C3CD87501B5A8575336F93E518080373C2  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

// RealityCollective.Utilities.Async.AwaitYieldInstructions.UnityMainThread
struct UnityMainThread_t59A021915103C8216F7CC077A856A8696948CE38  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// RealityCollective.Definitions.Utilities.SystemType
struct SystemType_tB5B24A89EB4E146E8834D2B7639D49A8573CB692  : public RuntimeObject
{
	// System.String RealityCollective.Definitions.Utilities.SystemType::reference
	String_t* ___reference_0;
	// System.Type RealityCollective.Definitions.Utilities.SystemType::type
	Type_t* ___type_1;
	// System.Guid RealityCollective.Definitions.Utilities.SystemType::guid
	Guid_t ___guid_2;
};

// RealityCollective.Attributes.SystemTypeAttribute
struct SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// RealityCollective.Definitions.Utilities.TypeGrouping RealityCollective.Attributes.SystemTypeAttribute::<Grouping>k__BackingField
	int32_t ___U3CGroupingU3Ek__BackingField_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// RealityCollective.Attributes.ImplementsAttribute
struct ImplementsAttribute_tA860407A2CAD81BE53BD11D93BD84DD7C094584B  : public SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D
{
	// System.Type RealityCollective.Attributes.ImplementsAttribute::<InterfaceType>k__BackingField
	Type_t* ___U3CInterfaceTypeU3Ek__BackingField_1;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413  : public MulticastDelegate_t
{
};

// RealityCollective.Utilities.StaticLogger/SampleEventHandler
struct SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// RealityCollective.Utilities.CaptureApplicationLog
struct CaptureApplicationLog_t1E7911E7491718782A373F575D3626534455A9EE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// RealityCollective.Utilities.Async.AwaiterExtensions/CoroutineRunner
struct CoroutineRunner_t1E1D8F2F614EA4651347EC938A0D60D2DC6F72E5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Guid,System.Type>

// System.Collections.Generic.Dictionary`2<System.Guid,System.Type>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<System.Reflection.Assembly>
struct List_1_t1BED237EBA2788604B1D39FC183B07E28F912A89_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Reflection.Assembly>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// RealityCollective.Extensions.ArrayExtensions

// RealityCollective.Extensions.ArrayExtensions

// System.Reflection.Assembly

// System.Reflection.Assembly

// RealityCollective.Utilities.Async.AwaiterExtensions

// RealityCollective.Utilities.Async.AwaiterExtensions

// RealityCollective.Utilities.Async.Awaiters
struct Awaiters_tE8A66E36BB0DF9DE43ED6A1A22D40EFCD4CE17CB_StaticFields
{
	// RealityCollective.Utilities.Async.AwaitYieldInstructions.UnityMainThread RealityCollective.Utilities.Async.Awaiters::<UnityMainThread>k__BackingField
	UnityMainThread_t59A021915103C8216F7CC077A856A8696948CE38* ___U3CUnityMainThreadU3Ek__BackingField_0;
	// RealityCollective.Utilities.Async.AwaitYieldInstructions.BackgroundThread RealityCollective.Utilities.Async.Awaiters::<BackgroundThread>k__BackingField
	BackgroundThread_t26D0B2A07C86C689A433AA708F1F294691902582* ___U3CBackgroundThreadU3Ek__BackingField_1;
};

// RealityCollective.Utilities.Async.Awaiters

// RealityCollective.Utilities.Async.AwaitYieldInstructions.BackgroundThread

// RealityCollective.Utilities.Async.AwaitYieldInstructions.BackgroundThread

// RealityCollective.Extensions.ComponentExtensions

// RealityCollective.Extensions.ComponentExtensions

// UnityEngine.CustomYieldInstruction

// UnityEngine.CustomYieldInstruction

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// RealityCollective.Utilities.StaticLogger
struct StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_StaticFields
{
	// RealityCollective.Utilities.StaticLogger/SampleEventHandler RealityCollective.Utilities.StaticLogger::OnLogEvent
	SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8* ___OnLogEvent_0;
	// System.Text.StringBuilder RealityCollective.Utilities.StaticLogger::sb
	StringBuilder_t* ___sb_1;
	// System.Int32 RealityCollective.Utilities.StaticLogger::logIndex
	int32_t ___logIndex_2;
	// RealityCollective.Definitions.Utilities.FilterLogType RealityCollective.Utilities.StaticLogger::currentLogFilter
	int32_t ___currentLogFilter_3;
	// System.Boolean RealityCollective.Utilities.StaticLogger::pauseLog
	bool ___pauseLog_4;
	// System.Boolean RealityCollective.Utilities.StaticLogger::<DebugMode>k__BackingField
	bool ___U3CDebugModeU3Ek__BackingField_5;
};

// RealityCollective.Utilities.StaticLogger

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// RealityCollective.Utilities.Async.Internal.SyncContextUtility
struct SyncContextUtility_t04A13A902AABFAC7E069C8B6B52A0379EAF1165A_StaticFields
{
	// System.Int32 RealityCollective.Utilities.Async.Internal.SyncContextUtility::<UnityThreadId>k__BackingField
	int32_t ___U3CUnityThreadIdU3Ek__BackingField_0;
	// System.Threading.SynchronizationContext RealityCollective.Utilities.Async.Internal.SyncContextUtility::<UnitySynchronizationContext>k__BackingField
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___U3CUnitySynchronizationContextU3Ek__BackingField_1;
};

// RealityCollective.Utilities.Async.Internal.SyncContextUtility

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_StaticFields
{
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t* ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t* ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t* ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t* ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t* ___s_cachedPreparedType5_5;
};

// System.Threading.SynchronizationContext

// RealityCollective.Utilities.TypeCache
struct TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Guid,System.Type> RealityCollective.Utilities.TypeCache::typeCache
	Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* ___typeCache_0;
};

// RealityCollective.Utilities.TypeCache

// RealityCollective.Extensions.TypeExtensions
struct TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_StaticFields
{
	// System.String[] RealityCollective.Extensions.TypeExtensions::ignoredDomains
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ignoredDomains_0;
};

// RealityCollective.Extensions.TypeExtensions

// RealityCollective.Extensions.UnityObjectExtensions

// RealityCollective.Extensions.UnityObjectExtensions

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.PropertyAttribute

// UnityEngine.PropertyAttribute

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// RealityCollective.Utilities.Async.AwaitYieldInstructions.UnityMainThread

// RealityCollective.Utilities.Async.AwaitYieldInstructions.UnityMainThread

// System.Void

// System.Void

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// RealityCollective.Definitions.Utilities.SystemType

// RealityCollective.Definitions.Utilities.SystemType

// RealityCollective.Attributes.SystemTypeAttribute

// RealityCollective.Attributes.SystemTypeAttribute

// RealityCollective.Attributes.ImplementsAttribute

// RealityCollective.Attributes.ImplementsAttribute

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// UnityEngine.Application/LogCallback

// UnityEngine.Application/LogCallback

// RealityCollective.Utilities.StaticLogger/SampleEventHandler

// RealityCollective.Utilities.StaticLogger/SampleEventHandler

// System.ArgumentNullException

// System.ArgumentNullException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// RealityCollective.Utilities.CaptureApplicationLog

// RealityCollective.Utilities.CaptureApplicationLog

// RealityCollective.Utilities.Async.AwaiterExtensions/CoroutineRunner

// RealityCollective.Utilities.Async.AwaiterExtensions/CoroutineRunner
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339  : public RuntimeArray
{
	ALIGN_FIELD (8) Assembly_t* m_Items[1];

	inline Assembly_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m47DD6DE10DF49155FCF329CC0B0FC21C23EDA26A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mADEF13A6F00847BA930B57377C0F34719842FE6A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE1D4EB8E35047347D05CF24CE7482F447D77EB9D_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;

// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___0_value, const RuntimeMethod* method) ;
// RealityCollective.Definitions.Utilities.FilterLogType RealityCollective.Utilities.StaticLogger::get_CurrentLogFilter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StaticLogger_get_CurrentLogFilter_m780534DF1ED3E329C2C1981DF13D8084D9B67E66_inline (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void RealityCollective.Utilities.StaticLogger::Log(System.String,UnityEngine.LogType,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticLogger_Log_mC8344DD6838AC03D1517ED579BED4DF53DEBDBF8 (String_t* ___0_message, int32_t ___1_logType, bool ___2_appLog, bool ___3_includeStackTrace, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean RealityCollective.Utilities.StaticLogger::get_DebugMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StaticLogger_get_DebugMode_mFB6C2FAABB6448DD58401E40520A249C35DECE04_inline (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UnityEngine.Debug::LogFormat(UnityEngine.LogType,UnityEngine.LogOption,UnityEngine.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m37A43E151078921783B62F980955A0EAFFA4CBA6 (int32_t ___0_logType, int32_t ___1_logOptions, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___2_context, String_t* ___3_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___4_args, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void RealityCollective.Utilities.StaticLogger/SampleEventHandler::Invoke(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_inline (SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,System.Type>::get_Count()
inline int32_t Dictionary_2_get_Count_m08AFE23A2CFC262FC92C2865D20C4A06EC91144E (Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16*, const RuntimeMethod*))Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.Guid,System.Type> RealityCollective.Extensions.TypeExtensions::BuildTypeCache(System.Collections.Generic.Dictionary`2<System.Guid,System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* TypeExtensions_BuildTypeCache_m5A5D18643418D9F0CE3A1F2B2697287F5B265F32 (Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* ___0_typeCache, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.Type>::.ctor()
inline void Dictionary_2__ctor_m00D927111369708DCF4E263CE662DBB8A55E841A (Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16*, const RuntimeMethod*))Dictionary_2__ctor_m47DD6DE10DF49155FCF329CC0B0FC21C23EDA26A_gshared)(__this, method);
}
// System.Void RealityCollective.Utilities.Async.AwaitYieldInstructions.UnityMainThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThread__ctor_m3DBB57CEDCBA97014CE9A597FB39A72900FE292E (UnityMainThread_t59A021915103C8216F7CC077A856A8696948CE38* __this, const RuntimeMethod* method) ;
// System.Void RealityCollective.Utilities.Async.AwaitYieldInstructions.BackgroundThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundThread__ctor_m26E19F306ECFDA4E25374F56F2557138F48AD555 (BackgroundThread_t26D0B2A07C86C689A433AA708F1F294691902582* __this, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82 (const RuntimeMethod* method) ;
// System.Void RealityCollective.Utilities.Async.Internal.SyncContextUtility::set_UnitySynchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SyncContextUtility_set_UnitySynchronizationContext_mD4E7BA1E4FDA9BD25AC92AB255864A36F95E204D_inline (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___0_value, const RuntimeMethod* method) ;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD (const RuntimeMethod* method) ;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void RealityCollective.Utilities.Async.Internal.SyncContextUtility::set_UnityThreadId(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SyncContextUtility_set_UnityThreadId_m322B93AD773227C1ED02664F99699C73747E96A0_inline (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50 (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.Reflection.Assembly[] RealityCollective.Extensions.TypeExtensions::filterIgnoredDomains(System.Reflection.Assembly[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* TypeExtensions_filterIgnoredDomains_m32D454CA0DCA6ED3E0ABE950EC9068500FD63D3F (AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* ___0_assemblies, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Guid::op_Inequality(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_op_Inequality_mAA2FAB73FCD2CB2D2128ECF7016AC16AFBDF6163 (Guid_t ___0_a, Guid_t ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.Type>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m7C96DF572979FE8ACED100C3AFCD087C9BB92BCC (Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16*, Guid_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mADEF13A6F00847BA930B57377C0F34719842FE6A_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.Type>::Add(TKey,TValue)
inline void Dictionary_2_Add_mA0E12EE07EE50922F0FE000A6B1FFBF302EBE803 (Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* __this, Guid_t ___0_key, Type_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16*, Guid_t, Type_t*, const RuntimeMethod*))Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Reflection.Assembly>::.ctor()
inline void List_1__ctor_m7F799D24C042923B6F560AF8FEA1CB00A1233888 (List_1_t1BED237EBA2788604B1D39FC183B07E28F912A89* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1BED237EBA2788604B1D39FC183B07E28F912A89*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Reflection.Assembly>::Add(T)
inline void List_1_Add_mC333738F45652C892517660DEE4B22270EF9D0A2_inline (List_1_t1BED237EBA2788604B1D39FC183B07E28F912A89* __this, Assembly_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1BED237EBA2788604B1D39FC183B07E28F912A89*, Assembly_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T[] System.Collections.Generic.List`1<System.Reflection.Assembly>::ToArray()
inline AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* List_1_ToArray_m4F2991627C669A2015A7B431CA6E37AD2E10B024 (List_1_t1BED237EBA2788604B1D39FC183B07E28F912A89* __this, const RuntimeMethod* method)
{
	return ((  AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* (*) (List_1_t1BED237EBA2788604B1D39FC183B07E28F912A89*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Boolean System.Guid::op_Equality(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240 (Guid_t ___0_a, Guid_t ___1_b, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Guid,System.Type> RealityCollective.Utilities.TypeCache::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* TypeCache_get_Current_mE655EC6DD45BD92373C396BEAFF551B257A08772 (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.Type>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m23C37DF5836546C93887648DDAB58EF35EB3EC7A (Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* __this, Guid_t ___0_key, Type_t** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16*, Guid_t, Type_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mE1D4EB8E35047347D05CF24CE7482F447D77EB9D_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Guid::TryParse(System.String,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_TryParse_m0A3C27800A8CEB35EF6CABBABD87ED7F968A7B4D (String_t* ___0_input, Guid_t* ___1_result, const RuntimeMethod* method) ;
// System.Boolean RealityCollective.Extensions.TypeExtensions::TryResolveType(System.Guid,System.Type&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_TryResolveType_m35EB78676D636C213F181C04546F8B324B4923AE (Guid_t ___0_guid, Type_t** ___1_resolvedType, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean RealityCollective.Extensions.UnityObjectExtensions::IsNull(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityObjectExtensions_IsNull_mFCF700ACB2B22B558B9A6DE14BE2A9F5DCB798D2 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_object, const RuntimeMethod* method) ;
// System.Void RealityCollective.Definitions.Utilities.SystemType::set_Type(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemType_set_Type_m790AEB8FA0CC54088F20960CCB4F9E30B849D5FA (SystemType_tB5B24A89EB4E146E8834D2B7639D49A8573CB692* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean RealityCollective.Extensions.TypeExtensions::TryResolveType(System.String,System.Type&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_TryResolveType_m5D65584E4432E6726DE4D40EDD8D9283481D7FF0 (String_t* ___0_typeRef, Type_t** ___1_resolvedType, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Type RealityCollective.Definitions.Utilities.SystemType::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SystemType_get_Type_m7B59720378938C4E71B2933E2E4B438EECD0EAEC_inline (SystemType_tB5B24A89EB4E146E8834D2B7639D49A8573CB692* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void RealityCollective.Attributes.SystemTypeAttribute::.ctor(System.Type,RealityCollective.Definitions.Utilities.TypeGrouping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTypeAttribute__ctor_m79A75C46653FC9492C264ABAFA6FCCAB46F4FEFB (SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D* __this, Type_t* ___0_type, int32_t ___1_grouping, const RuntimeMethod* method) ;
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC (Type_t* __this, const RuntimeMethod* method) ;
// System.Void RealityCollective.Attributes.SystemTypeAttribute::set_Grouping(RealityCollective.Definitions.Utilities.TypeGrouping)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SystemTypeAttribute_set_Grouping_m6B4340EF5EBBF01DCDB713715291D6FEF7E43786_inline (SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RealityCollective.Utilities.CaptureApplicationLog::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureApplicationLog_Awake_m08EA9A9C44AFAA30F553E2EAEAF40BC3EE372387 (CaptureApplicationLog_t1E7911E7491718782A373F575D3626534455A9EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureApplicationLog_Log_mA455A737AFE06DF63DD073999CC90CFCF502FE4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.logMessageReceived += Log;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, __this, (intptr_t)((void*)CaptureApplicationLog_Log_mA455A737AFE06DF63DD073999CC90CFCF502FE4C_RuntimeMethod_var), NULL);
		Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C(L_0, NULL);
		// }
		return;
	}
}
// System.Void RealityCollective.Utilities.CaptureApplicationLog::Log(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureApplicationLog_Log_mA455A737AFE06DF63DD073999CC90CFCF502FE4C (CaptureApplicationLog_t1E7911E7491718782A373F575D3626534455A9EE* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_logType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5DC1E9AD63D4AA760901AB13611579972177BE8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (StaticLogger.CurrentLogFilter == FilterLogType.All || ((int)logType) == ((int)StaticLogger.CurrentLogFilter))
		il2cpp_codegen_runtime_class_init_inline(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = StaticLogger_get_CurrentLogFilter_m780534DF1ED3E329C2C1981DF13D8084D9B67E66_inline(NULL);
		if ((((int32_t)L_0) == ((int32_t)5)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___2_logType;
		il2cpp_codegen_runtime_class_init_inline(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = StaticLogger_get_CurrentLogFilter_m780534DF1ED3E329C2C1981DF13D8084D9B67E66_inline(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0029;
		}
	}

IL_0010:
	{
		// StaticLogger.Log($"{logType}-{condition}\n", logType, true);
		int32_t L_3 = ___2_logType;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = ___0_condition;
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA5DC1E9AD63D4AA760901AB13611579972177BE8, L_5, L_6, NULL);
		int32_t L_8 = ___2_logType;
		il2cpp_codegen_runtime_class_init_inline(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var);
		StaticLogger_Log_mC8344DD6838AC03D1517ED579BED4DF53DEBDBF8(L_7, L_8, (bool)1, (bool)1, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void RealityCollective.Utilities.CaptureApplicationLog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureApplicationLog__ctor_mAB5897A9A40DF89ED27784333ADADB4A15699520 (CaptureApplicationLog_t1E7911E7491718782A373F575D3626534455A9EE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// RealityCollective.Definitions.Utilities.FilterLogType RealityCollective.Utilities.StaticLogger::get_CurrentLogFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StaticLogger_get_CurrentLogFilter_m780534DF1ED3E329C2C1981DF13D8084D9B67E66 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static FilterLogType CurrentLogFilter => currentLogFilter;
		il2cpp_codegen_runtime_class_init_inline(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var);
		int32_t L_0 = ((StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_StaticFields*)il2cpp_codegen_static_fields_for(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var))->___currentLogFilter_3;
		return L_0;
	}
}
// System.Boolean RealityCollective.Utilities.StaticLogger::get_DebugMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StaticLogger_get_DebugMode_mFB6C2FAABB6448DD58401E40520A249C35DECE04 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool DebugMode { get; set; }
		il2cpp_codegen_runtime_class_init_inline(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var);
		bool L_0 = ((StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_StaticFields*)il2cpp_codegen_static_fields_for(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var))->___U3CDebugModeU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void RealityCollective.Utilities.StaticLogger::Log(System.String,UnityEngine.LogType,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticLogger_Log_mC8344DD6838AC03D1517ED579BED4DF53DEBDBF8 (String_t* ___0_message, int32_t ___1_logType, bool ___2_appLog, bool ___3_includeStackTrace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8* G_B10_0 = NULL;
	SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8* G_B9_0 = NULL;
	{
		// if (!pauseLog)
		il2cpp_codegen_runtime_class_init_inline(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var);
		bool L_0 = ((StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_StaticFields*)il2cpp_codegen_static_fields_for(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var))->___pauseLog_4;
		if (L_0)
		{
			goto IL_0068;
		}
	}
	{
		// if (!appLog)
		bool L_1 = ___2_appLog;
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		// Console.WriteLine(message);
		String_t* L_2 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA(L_2, NULL);
		// if (DebugMode)
		il2cpp_codegen_runtime_class_init_inline(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StaticLogger_get_DebugMode_mFB6C2FAABB6448DD58401E40520A249C35DECE04_inline(NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// Debug.LogFormat(logType, includeStackTrace ? LogOption.None : LogOption.NoStacktrace, null, message);
		int32_t L_4 = ___1_logType;
		bool L_5 = ___3_includeStackTrace;
		G_B4_0 = L_4;
		if (L_5)
		{
			G_B5_0 = L_4;
			goto IL_001e;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		goto IL_001f;
	}

IL_001e:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_001f:
	{
		String_t* L_6 = ___0_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m37A43E151078921783B62F980955A0EAFFA4CBA6(G_B6_1, G_B6_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_6, L_7, NULL);
	}

IL_002b:
	{
		// return;
		return;
	}

IL_002c:
	{
		// sb.AppendLine($"{logIndex}-{message}");
		il2cpp_codegen_runtime_class_init_inline(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var);
		StringBuilder_t* L_8 = ((StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_StaticFields*)il2cpp_codegen_static_fields_for(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var))->___sb_1;
		int32_t L_9 = ((StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_StaticFields*)il2cpp_codegen_static_fields_for(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var))->___logIndex_2;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12 = ___0_message;
		String_t* L_13;
		L_13 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8, L_11, L_12, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_8, L_13, NULL);
		// logIndex++;
		int32_t L_15 = ((StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_StaticFields*)il2cpp_codegen_static_fields_for(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var))->___logIndex_2;
		((StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_StaticFields*)il2cpp_codegen_static_fields_for(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var))->___logIndex_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		// OnLogEvent?.Invoke(null);
		SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8* L_16 = ((StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_StaticFields*)il2cpp_codegen_static_fields_for(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var))->___OnLogEvent_0;
		SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8* L_17 = L_16;
		G_B9_0 = L_17;
		if (L_17)
		{
			G_B10_0 = L_17;
			goto IL_0062;
		}
	}
	{
		return;
	}

IL_0062:
	{
		NullCheck(G_B10_0);
		SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_inline(G_B10_0, NULL, NULL);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void RealityCollective.Utilities.StaticLogger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticLogger__cctor_m98BD54C6FD4CFF2718BF06B82679EF721876356E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static StringBuilder sb = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		((StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_StaticFields*)il2cpp_codegen_static_fields_for(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var))->___sb_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_StaticFields*)il2cpp_codegen_static_fields_for(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var))->___sb_1), (void*)L_0);
		// private static int logIndex = 0;
		((StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_StaticFields*)il2cpp_codegen_static_fields_for(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var))->___logIndex_2 = 0;
		// private static FilterLogType currentLogFilter = FilterLogType.All;
		((StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_StaticFields*)il2cpp_codegen_static_fields_for(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var))->___currentLogFilter_3 = 5;
		// private static bool pauseLog = false;
		((StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_StaticFields*)il2cpp_codegen_static_fields_for(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var))->___pauseLog_4 = (bool)0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_Multicast(SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8* currentDelegate = reinterpret_cast<SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_sender, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_OpenInst(SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, method);
}
void SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_OpenStatic(SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, method);
}
void SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_OpenStaticInvoker(SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_sender);
}
void SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_ClosedStaticInvoker(SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_sender);
}
void SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_OpenVirtual(SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_sender);
}
void SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_OpenInterface(SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_sender);
}
void SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_OpenGenericVirtual(SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericVirtualActionInvoker0::Invoke(method, ___0_sender);
}
void SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_OpenGenericInterface(SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_sender);
}
// System.Void RealityCollective.Utilities.StaticLogger/SampleEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleEventHandler__ctor_mCBF50A2BD057862FB096FB140BE6622075977782 (SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_Multicast;
}
// System.Void RealityCollective.Utilities.StaticLogger/SampleEventHandler::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE (SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.Dictionary`2<System.Guid,System.Type> RealityCollective.Utilities.TypeCache::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* TypeCache_get_Current_mE655EC6DD45BD92373C396BEAFF551B257A08772 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m08AFE23A2CFC262FC92C2865D20C4A06EC91144E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (typeCache.Count == 0)
		il2cpp_codegen_runtime_class_init_inline(TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_il2cpp_TypeInfo_var);
		Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* L_0 = ((TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_StaticFields*)il2cpp_codegen_static_fields_for(TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_il2cpp_TypeInfo_var))->___typeCache_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m08AFE23A2CFC262FC92C2865D20C4A06EC91144E(L_0, Dictionary_2_get_Count_m08AFE23A2CFC262FC92C2865D20C4A06EC91144E_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// TypeExtensions.BuildTypeCache(typeCache);
		il2cpp_codegen_runtime_class_init_inline(TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_il2cpp_TypeInfo_var);
		Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* L_2 = ((TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_StaticFields*)il2cpp_codegen_static_fields_for(TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_il2cpp_TypeInfo_var))->___typeCache_0;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_il2cpp_TypeInfo_var);
		Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* L_3;
		L_3 = TypeExtensions_BuildTypeCache_m5A5D18643418D9F0CE3A1F2B2697287F5B265F32(L_2, NULL);
	}

IL_0017:
	{
		// return typeCache;
		il2cpp_codegen_runtime_class_init_inline(TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_il2cpp_TypeInfo_var);
		Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* L_4 = ((TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_StaticFields*)il2cpp_codegen_static_fields_for(TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_il2cpp_TypeInfo_var))->___typeCache_0;
		return L_4;
	}
}
// System.Void RealityCollective.Utilities.TypeCache::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeCache__cctor_m7B4323836FE8E88FCB1B92E10DE599072A80B68F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m00D927111369708DCF4E263CE662DBB8A55E841A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<Guid, Type> typeCache = new Dictionary<Guid, Type>();
		Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* L_0 = (Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16*)il2cpp_codegen_object_new(Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m00D927111369708DCF4E263CE662DBB8A55E841A(L_0, Dictionary_2__ctor_m00D927111369708DCF4E263CE662DBB8A55E841A_RuntimeMethod_var);
		((TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_StaticFields*)il2cpp_codegen_static_fields_for(TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_il2cpp_TypeInfo_var))->___typeCache_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_StaticFields*)il2cpp_codegen_static_fields_for(TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_il2cpp_TypeInfo_var))->___typeCache_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RealityCollective.Utilities.Async.AwaiterExtensions/CoroutineRunner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineRunner__ctor_mE7ED25BFE6567CCE899F0408C6E64E4C48C7CD72 (CoroutineRunner_t1E1D8F2F614EA4651347EC938A0D60D2DC6F72E5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RealityCollective.Utilities.Async.Awaiters::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiters__cctor_m2EDE0FB53D1D7B21D95C2A8EBB136B6E11A2B692 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiters_tE8A66E36BB0DF9DE43ED6A1A22D40EFCD4CE17CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundThread_t26D0B2A07C86C689A433AA708F1F294691902582_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMainThread_t59A021915103C8216F7CC077A856A8696948CE38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UnityMainThread UnityMainThread { get; } = new UnityMainThread();
		UnityMainThread_t59A021915103C8216F7CC077A856A8696948CE38* L_0 = (UnityMainThread_t59A021915103C8216F7CC077A856A8696948CE38*)il2cpp_codegen_object_new(UnityMainThread_t59A021915103C8216F7CC077A856A8696948CE38_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityMainThread__ctor_m3DBB57CEDCBA97014CE9A597FB39A72900FE292E(L_0, NULL);
		((Awaiters_tE8A66E36BB0DF9DE43ED6A1A22D40EFCD4CE17CB_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_tE8A66E36BB0DF9DE43ED6A1A22D40EFCD4CE17CB_il2cpp_TypeInfo_var))->___U3CUnityMainThreadU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Awaiters_tE8A66E36BB0DF9DE43ED6A1A22D40EFCD4CE17CB_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_tE8A66E36BB0DF9DE43ED6A1A22D40EFCD4CE17CB_il2cpp_TypeInfo_var))->___U3CUnityMainThreadU3Ek__BackingField_0), (void*)L_0);
		// public static BackgroundThread BackgroundThread { get; } = new BackgroundThread();
		BackgroundThread_t26D0B2A07C86C689A433AA708F1F294691902582* L_1 = (BackgroundThread_t26D0B2A07C86C689A433AA708F1F294691902582*)il2cpp_codegen_object_new(BackgroundThread_t26D0B2A07C86C689A433AA708F1F294691902582_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BackgroundThread__ctor_m26E19F306ECFDA4E25374F56F2557138F48AD555(L_1, NULL);
		((Awaiters_tE8A66E36BB0DF9DE43ED6A1A22D40EFCD4CE17CB_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_tE8A66E36BB0DF9DE43ED6A1A22D40EFCD4CE17CB_il2cpp_TypeInfo_var))->___U3CBackgroundThreadU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Awaiters_tE8A66E36BB0DF9DE43ED6A1A22D40EFCD4CE17CB_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_tE8A66E36BB0DF9DE43ED6A1A22D40EFCD4CE17CB_il2cpp_TypeInfo_var))->___U3CBackgroundThreadU3Ek__BackingField_1), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RealityCollective.Utilities.Async.Internal.SyncContextUtility::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncContextUtility_Initialize_m8016B5632D969F07326503141625C302F7AD5E53 (const RuntimeMethod* method) 
{
	{
		// UnitySynchronizationContext = SynchronizationContext.Current;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0;
		L_0 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		SyncContextUtility_set_UnitySynchronizationContext_mD4E7BA1E4FDA9BD25AC92AB255864A36F95E204D_inline(L_0, NULL);
		// UnityThreadId = Thread.CurrentThread.ManagedThreadId;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_1;
		L_1 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_1, NULL);
		SyncContextUtility_set_UnityThreadId_m322B93AD773227C1ED02664F99699C73747E96A0_inline(L_2, NULL);
		// }
		return;
	}
}
// System.Void RealityCollective.Utilities.Async.Internal.SyncContextUtility::set_UnityThreadId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncContextUtility_set_UnityThreadId_m322B93AD773227C1ED02664F99699C73747E96A0 (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_t04A13A902AABFAC7E069C8B6B52A0379EAF1165A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int UnityThreadId { get; private set; }
		int32_t L_0 = ___0_value;
		((SyncContextUtility_t04A13A902AABFAC7E069C8B6B52A0379EAF1165A_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_t04A13A902AABFAC7E069C8B6B52A0379EAF1165A_il2cpp_TypeInfo_var))->___U3CUnityThreadIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void RealityCollective.Utilities.Async.Internal.SyncContextUtility::set_UnitySynchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncContextUtility_set_UnitySynchronizationContext_mD4E7BA1E4FDA9BD25AC92AB255864A36F95E204D (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_t04A13A902AABFAC7E069C8B6B52A0379EAF1165A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext UnitySynchronizationContext { get; private set; }
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ___0_value;
		((SyncContextUtility_t04A13A902AABFAC7E069C8B6B52A0379EAF1165A_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_t04A13A902AABFAC7E069C8B6B52A0379EAF1165A_il2cpp_TypeInfo_var))->___U3CUnitySynchronizationContextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SyncContextUtility_t04A13A902AABFAC7E069C8B6B52A0379EAF1165A_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_t04A13A902AABFAC7E069C8B6B52A0379EAF1165A_il2cpp_TypeInfo_var))->___U3CUnitySynchronizationContextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RealityCollective.Utilities.Async.AwaitYieldInstructions.BackgroundThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundThread__ctor_m26E19F306ECFDA4E25374F56F2557138F48AD555 (BackgroundThread_t26D0B2A07C86C689A433AA708F1F294691902582* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean RealityCollective.Utilities.Async.AwaitYieldInstructions.UnityMainThread::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityMainThread_get_keepWaiting_m6D86FCA8EC91382C44CFA7EC9C09B469149CBB06 (UnityMainThread_t59A021915103C8216F7CC077A856A8696948CE38* __this, const RuntimeMethod* method) 
{
	{
		// public override bool keepWaiting => false;
		return (bool)0;
	}
}
// System.Void RealityCollective.Utilities.Async.AwaitYieldInstructions.UnityMainThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThread__ctor_m3DBB57CEDCBA97014CE9A597FB39A72900FE292E (UnityMainThread_t59A021915103C8216F7CC077A856A8696948CE38* __this, const RuntimeMethod* method) 
{
	{
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.Dictionary`2<System.Guid,System.Type> RealityCollective.Extensions.TypeExtensions::BuildTypeCache(System.Collections.Generic.Dictionary`2<System.Guid,System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* TypeExtensions_BuildTypeCache_m5A5D18643418D9F0CE3A1F2B2697287F5B265F32 (Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* ___0_typeCache, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA0E12EE07EE50922F0FE000A6B1FFBF302EBE803_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m7C96DF572979FE8ACED100C3AFCD087C9BB92BCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B590A2DA605C4ACE411C09E803C72CE23A58D9C);
		s_Il2CppMethodInitialized = true;
	}
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* V_0 = NULL;
	int32_t V_1 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_2 = NULL;
	int32_t V_3 = 0;
	Type_t* V_4 = NULL;
	Guid_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (typeCache == null)
		Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* L_0 = ___0_typeCache;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException("typeCache", "No type cache dictionary supplied");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9254CCAEB4BE5E2AF70D95144BCDF5CA631FECE)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB64F92F3CD058D0D2E20DDD086D6243E5EA3750D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_BuildTypeCache_m5A5D18643418D9F0CE3A1F2B2697287F5B265F32_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var assemblies = AppDomain.CurrentDomain.GetAssemblies().filterIgnoredDomains();
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_2;
		L_2 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		NullCheck(L_2);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_3;
		L_3 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_il2cpp_TypeInfo_var);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_4;
		L_4 = TypeExtensions_filterIgnoredDomains_m32D454CA0DCA6ED3E0ABE950EC9068500FD63D3F(L_3, NULL);
		// foreach (var assembly in assemblies)
		V_0 = L_4;
		V_1 = 0;
		goto IL_00dd;
	}

IL_002a:
	{
		// foreach (var assembly in assemblies)
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Assembly_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// var types = assembly.GetTypes();
		NullCheck(L_8);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9;
		L_9 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(18 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_8);
		// foreach (var type in types)
		V_2 = L_9;
		V_3 = 0;
		goto IL_00d0;
	}

IL_003a:
	{
		// foreach (var type in types)
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Type_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		// if (type.BaseType != null && type.BaseType.Name.Contains("Delegate"))
		Type_t* L_14 = V_4;
		NullCheck(L_14);
		Type_t* L_15;
		L_15 = VirtualFuncInvoker0< Type_t* >::Invoke(126 /* System.Type System.Type::get_BaseType() */, L_14);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_15, (Type_t*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_17 = V_4;
		NullCheck(L_17);
		Type_t* L_18;
		L_18 = VirtualFuncInvoker0< Type_t* >::Invoke(126 /* System.Type System.Type::get_BaseType() */, L_17);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_18);
		NullCheck(L_19);
		bool L_20;
		L_20 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_19, _stringLiteral0B590A2DA605C4ACE411C09E803C72CE23A58D9C, NULL);
		if (L_20)
		{
			goto IL_00cc;
		}
	}

IL_0066:
	{
		// if (type.IsClass && !type.IsAbstract && type.GUID != Guid.Empty)
		Type_t* L_21 = V_4;
		NullCheck(L_21);
		bool L_22;
		L_22 = Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549(L_21, NULL);
		if (!L_22)
		{
			goto IL_00cc;
		}
	}
	{
		Type_t* L_23 = V_4;
		NullCheck(L_23);
		bool L_24;
		L_24 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_23, NULL);
		if (L_24)
		{
			goto IL_00cc;
		}
	}
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		Guid_t L_26;
		L_26 = VirtualFuncInvoker0< Guid_t >::Invoke(125 /* System.Guid System.Type::get_GUID() */, L_25);
		Guid_t L_27 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->___Empty_0;
		bool L_28;
		L_28 = Guid_op_Inequality_mAA2FAB73FCD2CB2D2128ECF7016AC16AFBDF6163(L_26, L_27, NULL);
		if (!L_28)
		{
			goto IL_00cc;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// var guid = type.GUID;
			Type_t* L_29 = V_4;
			NullCheck(L_29);
			Guid_t L_30;
			L_30 = VirtualFuncInvoker0< Guid_t >::Invoke(125 /* System.Guid System.Type::get_GUID() */, L_29);
			V_5 = L_30;
			// if (!typeCache.ContainsKey(guid))
			Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* L_31 = ___0_typeCache;
			Guid_t L_32 = V_5;
			NullCheck(L_31);
			bool L_33;
			L_33 = Dictionary_2_ContainsKey_m7C96DF572979FE8ACED100C3AFCD087C9BB92BCC(L_31, L_32, Dictionary_2_ContainsKey_m7C96DF572979FE8ACED100C3AFCD087C9BB92BCC_RuntimeMethod_var);
			if (L_33)
			{
				goto IL_00a8_1;
			}
		}
		{
			// typeCache.Add(guid, type);
			Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* L_34 = ___0_typeCache;
			Guid_t L_35 = V_5;
			Type_t* L_36 = V_4;
			NullCheck(L_34);
			Dictionary_2_Add_mA0E12EE07EE50922F0FE000A6B1FFBF302EBE803(L_34, L_35, L_36, Dictionary_2_Add_mA0E12EE07EE50922F0FE000A6B1FFBF302EBE803_RuntimeMethod_var);
		}

IL_00a8_1:
		{
			// }
			goto IL_00cc;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00aa;
		}
		throw e;
	}

CATCH_00aa:
	{// begin catch(System.Exception)
		// Debug.LogError($"Failed to add {type.Name} to type cache.");
		Type_t* L_37 = V_4;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_37);
		String_t* L_39;
		L_39 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4022A8BC8D35BEF968F6E01AEB2C7737F701E4C4)), L_38, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB0548768781A1B335044212785C35DD6D2732DD)), NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_39, NULL);
		// Debug.LogException(ex);
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00cc;
	}// end catch (depth: 1)

IL_00cc:
	{
		int32_t L_40 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00d0:
	{
		// foreach (var type in types)
		int32_t L_41 = V_3;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_42 = V_2;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00dd:
	{
		// foreach (var assembly in assemblies)
		int32_t L_44 = V_1;
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_45 = V_0;
		NullCheck(L_45);
		if ((((int32_t)L_44) < ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)))))
		{
			goto IL_002a;
		}
	}
	{
		// return typeCache;
		Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* L_46 = ___0_typeCache;
		return L_46;
	}
}
// System.Reflection.Assembly[] RealityCollective.Extensions.TypeExtensions::filterIgnoredDomains(System.Reflection.Assembly[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* TypeExtensions_filterIgnoredDomains_m32D454CA0DCA6ED3E0ABE950EC9068500FD63D3F (AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* ___0_assemblies, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC333738F45652C892517660DEE4B22270EF9D0A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m4F2991627C669A2015A7B431CA6E37AD2E10B024_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F799D24C042923B6F560AF8FEA1CB00A1233888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1BED237EBA2788604B1D39FC183B07E28F912A89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1BED237EBA2788604B1D39FC183B07E28F912A89* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// List<Assembly> returnAssemblies = new List<Assembly>();
		List_1_t1BED237EBA2788604B1D39FC183B07E28F912A89* L_0 = (List_1_t1BED237EBA2788604B1D39FC183B07E28F912A89*)il2cpp_codegen_object_new(List_1_t1BED237EBA2788604B1D39FC183B07E28F912A89_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7F799D24C042923B6F560AF8FEA1CB00A1233888(L_0, List_1__ctor_m7F799D24C042923B6F560AF8FEA1CB00A1233888_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = assemblies.Length - 1; i > 0; i--)
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_1 = ___0_assemblies;
		NullCheck(L_1);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1));
		goto IL_0056;
	}

IL_000e:
	{
		// bool ignoreAssembly = false;
		V_2 = (bool)0;
		// for (int j = ignoredDomains.Length - 1; j > 0; j--)
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ((TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_il2cpp_TypeInfo_var))->___ignoredDomains_0;
		NullCheck(L_2);
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
		goto IL_0042;
	}

IL_001c:
	{
		// if (assemblies[i].FullName.ToLower().Contains(ignoredDomains[j].ToLower()))
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_3 = ___0_assemblies;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Assembly_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.Assembly::get_FullName() */, L_6);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = ((TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_il2cpp_TypeInfo_var))->___ignoredDomains_0;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		String_t* L_13;
		L_13 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_12, NULL);
		NullCheck(L_8);
		bool L_14;
		L_14 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_8, L_13, NULL);
		if (!L_14)
		{
			goto IL_003e;
		}
	}
	{
		// ignoreAssembly = true;
		V_2 = (bool)1;
	}

IL_003e:
	{
		// for (int j = ignoredDomains.Length - 1; j > 0; j--)
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_0042:
	{
		// for (int j = ignoredDomains.Length - 1; j > 0; j--)
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		// if (!ignoreAssembly)
		bool L_17 = V_2;
		if (L_17)
		{
			goto IL_0052;
		}
	}
	{
		// returnAssemblies.Add(assemblies[i]);
		List_1_t1BED237EBA2788604B1D39FC183B07E28F912A89* L_18 = V_0;
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_19 = ___0_assemblies;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Assembly_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		List_1_Add_mC333738F45652C892517660DEE4B22270EF9D0A2_inline(L_18, L_22, List_1_Add_mC333738F45652C892517660DEE4B22270EF9D0A2_RuntimeMethod_var);
	}

IL_0052:
	{
		// for (int i = assemblies.Length - 1; i > 0; i--)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
	}

IL_0056:
	{
		// for (int i = assemblies.Length - 1; i > 0; i--)
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		// return returnAssemblies.ToArray();
		List_1_t1BED237EBA2788604B1D39FC183B07E28F912A89* L_25 = V_0;
		NullCheck(L_25);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_26;
		L_26 = List_1_ToArray_m4F2991627C669A2015A7B431CA6E37AD2E10B024(L_25, List_1_ToArray_m4F2991627C669A2015A7B431CA6E37AD2E10B024_RuntimeMethod_var);
		return L_26;
	}
}
// System.Boolean RealityCollective.Extensions.TypeExtensions::TryResolveType(System.Guid,System.Type&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_TryResolveType_m35EB78676D636C213F181C04546F8B324B4923AE (Guid_t ___0_guid, Type_t** ___1_resolvedType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA0E12EE07EE50922F0FE000A6B1FFBF302EBE803_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m7C96DF572979FE8ACED100C3AFCD087C9BB92BCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m23C37DF5836546C93887648DDAB58EF35EB3EC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BE4DADFBDE5EF555F83BE5D0B680C62B8DD7D03);
		s_Il2CppMethodInitialized = true;
	}
	{
		// resolvedType = null;
		Type_t** L_0 = ___1_resolvedType;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// if (guid == Guid.Empty)
		Guid_t L_1 = ___0_guid;
		Guid_t L_2 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->___Empty_0;
		bool L_3;
		L_3 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0012:
	{
		// if (!TypeCache.Current.TryGetValue(guid, out resolvedType))
		il2cpp_codegen_runtime_class_init_inline(TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_il2cpp_TypeInfo_var);
		Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* L_4;
		L_4 = TypeCache_get_Current_mE655EC6DD45BD92373C396BEAFF551B257A08772(NULL);
		Guid_t L_5 = ___0_guid;
		Type_t** L_6 = ___1_resolvedType;
		NullCheck(L_4);
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_m23C37DF5836546C93887648DDAB58EF35EB3EC7A(L_4, L_5, L_6, Dictionary_2_TryGetValue_m23C37DF5836546C93887648DDAB58EF35EB3EC7A_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		// var message = $"Configured Type Guid [{guid}] not found, either missing or lost to the curring room floor of Unity Code Stripping.\n If the class is in the project, consider including it in a Link.xml";
		Guid_t L_8 = ___0_guid;
		Guid_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Guid_t_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral5BE4DADFBDE5EF555F83BE5D0B680C62B8DD7D03, L_10, NULL);
		// Debug.LogError(message);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_11, NULL);
		// return false;
		return (bool)0;
	}

IL_0037:
	{
		// if (resolvedType != null && !resolvedType.IsAbstract)
		Type_t** L_12 = ___1_resolvedType;
		Type_t* L_13 = *((Type_t**)L_12);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_13, (Type_t*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0066;
		}
	}
	{
		Type_t** L_15 = ___1_resolvedType;
		Type_t* L_16 = *((Type_t**)L_15);
		NullCheck(L_16);
		bool L_17;
		L_17 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_16, NULL);
		if (L_17)
		{
			goto IL_0066;
		}
	}
	{
		// if (!TypeCache.Current.ContainsKey(guid))
		il2cpp_codegen_runtime_class_init_inline(TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_il2cpp_TypeInfo_var);
		Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* L_18;
		L_18 = TypeCache_get_Current_mE655EC6DD45BD92373C396BEAFF551B257A08772(NULL);
		Guid_t L_19 = ___0_guid;
		NullCheck(L_18);
		bool L_20;
		L_20 = Dictionary_2_ContainsKey_m7C96DF572979FE8ACED100C3AFCD087C9BB92BCC(L_18, L_19, Dictionary_2_ContainsKey_m7C96DF572979FE8ACED100C3AFCD087C9BB92BCC_RuntimeMethod_var);
		if (L_20)
		{
			goto IL_0064;
		}
	}
	{
		// TypeCache.Current.Add(guid, resolvedType);
		il2cpp_codegen_runtime_class_init_inline(TypeCache_tDFC80A2CF2E5E3BFC2CF859BCCDD6D7F38FFD457_il2cpp_TypeInfo_var);
		Dictionary_2_t8E4E91DBE8943FDE4A8ED7856E05059B016A7A16* L_21;
		L_21 = TypeCache_get_Current_mE655EC6DD45BD92373C396BEAFF551B257A08772(NULL);
		Guid_t L_22 = ___0_guid;
		Type_t** L_23 = ___1_resolvedType;
		Type_t* L_24 = *((Type_t**)L_23);
		NullCheck(L_21);
		Dictionary_2_Add_mA0E12EE07EE50922F0FE000A6B1FFBF302EBE803(L_21, L_22, L_24, Dictionary_2_Add_mA0E12EE07EE50922F0FE000A6B1FFBF302EBE803_RuntimeMethod_var);
	}

IL_0064:
	{
		// return true;
		return (bool)1;
	}

IL_0066:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean RealityCollective.Extensions.TypeExtensions::TryResolveType(System.String,System.Type&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_TryResolveType_m5D65584E4432E6726DE4D40EDD8D9283481D7FF0 (String_t* ___0_typeRef, Type_t** ___1_resolvedType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_TryResolveType_m5D65584E4432E6726DE4D40EDD8D9283481D7FF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17F41FF9E16BE6764A333984153A7EF6E8E0F383);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// resolvedType = null;
		Type_t** L_0 = ___1_resolvedType;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// if (string.IsNullOrEmpty(typeRef)) { return false; }
		String_t* L_1 = ___0_typeRef;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (!L_2)
		{
			goto IL_000d;
		}
	}
	{
		// if (string.IsNullOrEmpty(typeRef)) { return false; }
		return (bool)0;
	}

IL_000d:
	{
		// if (Guid.TryParse(typeRef, out var guid))
		String_t* L_3 = ___0_typeRef;
		bool L_4;
		L_4 = Guid_TryParse_m0A3C27800A8CEB35EF6CABBABD87ED7F968A7B4D(L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		// return TryResolveType(guid, out resolvedType);
		Guid_t L_5 = V_0;
		Type_t** L_6 = ___1_resolvedType;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = TypeExtensions_TryResolveType_m35EB78676D636C213F181C04546F8B324B4923AE(L_5, L_6, NULL);
		return L_7;
	}

IL_001f:
	{
		// resolvedType = Type.GetType(typeRef);
		Type_t** L_8 = ___1_resolvedType;
		String_t* L_9 = ___0_typeRef;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = il2cpp_codegen_get_type(L_9, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, TypeExtensions_TryResolveType_m5D65584E4432E6726DE4D40EDD8D9283481D7FF0_RuntimeMethod_var);
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_10);
		// if (resolvedType != null)
		Type_t** L_11 = ___1_resolvedType;
		Type_t* L_12 = *((Type_t**)L_11);
		bool L_13;
		L_13 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_12, (Type_t*)NULL, NULL);
		if (!L_13)
		{
			goto IL_006d;
		}
	}
	{
		// if (resolvedType.GUID != Guid.Empty)
		Type_t** L_14 = ___1_resolvedType;
		Type_t* L_15 = *((Type_t**)L_14);
		NullCheck(L_15);
		Guid_t L_16;
		L_16 = VirtualFuncInvoker0< Guid_t >::Invoke(125 /* System.Guid System.Type::get_GUID() */, L_15);
		Guid_t L_17 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->___Empty_0;
		bool L_18;
		L_18 = Guid_op_Inequality_mAA2FAB73FCD2CB2D2128ECF7016AC16AFBDF6163(L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_004c;
		}
	}
	{
		// return TryResolveType(guid, out resolvedType);
		Guid_t L_19 = V_0;
		Type_t** L_20 = ___1_resolvedType;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = TypeExtensions_TryResolveType_m35EB78676D636C213F181C04546F8B324B4923AE(L_19, L_20, NULL);
		return L_21;
	}

IL_004c:
	{
		// if (!resolvedType.IsAbstract)
		Type_t** L_22 = ___1_resolvedType;
		Type_t* L_23 = *((Type_t**)L_22);
		NullCheck(L_23);
		bool L_24;
		L_24 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_23, NULL);
		if (L_24)
		{
			goto IL_006d;
		}
	}
	{
		// Debug.LogWarning($"{resolvedType.Name} is missing a {nameof(GuidAttribute)}. This extension has been upgraded to use System.Type.GUID instead of System.Type.AssemblyQualifiedName");
		Type_t** L_25 = ___1_resolvedType;
		Type_t* L_26 = *((Type_t**)L_25);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_26);
		String_t* L_28;
		L_28 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_27, _stringLiteral17F41FF9E16BE6764A333984153A7EF6E8E0F383, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_28, NULL);
		// return true;
		return (bool)1;
	}

IL_006d:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void RealityCollective.Extensions.TypeExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeExtensions__cctor_m83A780A5901D02BF70A7ABCF14288F9B125736F6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1732F7776A03D9C8C5A8E0EDB01E25276BF6B50C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F04864B7F8E8E33B4C29ACCC47D05C1FC60EFCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral309C3C8C8BE2328BA2D6B29B0EFD1E8628F19EC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3280DCDC2F48063F5689EB982E7E16AEFC843B60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral665E797A3599B9897D67B275B03AA411D5F46D5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA595045A170FFFCA7DD1E3542FD870097B41D647);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFEF3227A766442073C70EFE7DC19B6BA9C63006);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string[] ignoredDomains = new string[]
		// {
		//     "UnityEngine",
		//     "Unity",
		//     "System",
		//     "Mono",
		//     "NetStandard",
		//     "nunit",
		//     "log4net",
		//     "Bee",
		//     "NiceIO"
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralCFEF3227A766442073C70EFE7DC19B6BA9C63006);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCFEF3227A766442073C70EFE7DC19B6BA9C63006);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral2F04864B7F8E8E33B4C29ACCC47D05C1FC60EFCC);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2F04864B7F8E8E33B4C29ACCC47D05C1FC60EFCC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralA595045A170FFFCA7DD1E3542FD870097B41D647);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA595045A170FFFCA7DD1E3542FD870097B41D647);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral665E797A3599B9897D67B275B03AA411D5F46D5C);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral665E797A3599B9897D67B275B03AA411D5F46D5C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral309C3C8C8BE2328BA2D6B29B0EFD1E8628F19EC7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral309C3C8C8BE2328BA2D6B29B0EFD1E8628F19EC7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral1732F7776A03D9C8C5A8E0EDB01E25276BF6B50C);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral1732F7776A03D9C8C5A8E0EDB01E25276BF6B50C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral3280DCDC2F48063F5689EB982E7E16AEFC843B60);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral3280DCDC2F48063F5689EB982E7E16AEFC843B60);
		((TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_il2cpp_TypeInfo_var))->___ignoredDomains_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_il2cpp_TypeInfo_var))->___ignoredDomains_0), (void*)L_9);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean RealityCollective.Extensions.UnityObjectExtensions::IsNull(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityObjectExtensions_IsNull_mFCF700ACB2B22B558B9A6DE14BE2A9F5DCB798D2 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// return @object == null;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_object;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		goto IL_000f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000a;
		}
		throw e;
	}

CATCH_000a:
	{// begin catch(System.Object)
		// catch
		// return true;
		V_0 = (bool)1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_000f;
	}// end catch (depth: 1)

IL_000f:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean RealityCollective.Extensions.UnityObjectExtensions::IsNotNull(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityObjectExtensions_IsNotNull_m57BC885E60DB38FA7F4190C16508061AC5412E92 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_object, const RuntimeMethod* method) 
{
	{
		// public static bool IsNotNull(this Object @object) => !@object.IsNull();
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_object;
		bool L_1;
		L_1 = UnityObjectExtensions_IsNull_mFCF700ACB2B22B558B9A6DE14BE2A9F5DCB798D2(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RealityCollective.Definitions.Utilities.SystemType::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemType__ctor_m6E41FF8D9A3C787F7350FFF6EE8673E14EC2E460 (SystemType_tB5B24A89EB4E146E8834D2B7639D49A8573CB692* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string reference = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___reference_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reference_0), (void*)L_0);
		// private Guid guid = Guid.Empty;
		Guid_t L_1 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->___Empty_0;
		__this->___guid_2 = L_1;
		// public SystemType(Type type)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Type = type;
		Type_t* L_2 = ___0_type;
		SystemType_set_Type_m790AEB8FA0CC54088F20960CCB4F9E30B849D5FA(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void RealityCollective.Definitions.Utilities.SystemType::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemType_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m2F50818BCED33B7A464437DA7B82456096AEFBD2 (SystemType_tB5B24A89EB4E146E8834D2B7639D49A8573CB692* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TypeExtensions.TryResolveType(reference, out type);
		String_t* L_0 = __this->___reference_0;
		Type_t** L_1 = (Type_t**)(&__this->___type_1);
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_tD37631472F0D074BFDF6F46DC417AB1D5E132293_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = TypeExtensions_TryResolveType_m5D65584E4432E6726DE4D40EDD8D9283481D7FF0(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void RealityCollective.Definitions.Utilities.SystemType::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemType_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m57C8512F09F84A848D01FE2918B861D5125DEC04 (SystemType_tB5B24A89EB4E146E8834D2B7639D49A8573CB692* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Type RealityCollective.Definitions.Utilities.SystemType::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SystemType_get_Type_m7B59720378938C4E71B2933E2E4B438EECD0EAEC (SystemType_tB5B24A89EB4E146E8834D2B7639D49A8573CB692* __this, const RuntimeMethod* method) 
{
	{
		// get => type;
		Type_t* L_0 = __this->___type_1;
		return L_0;
	}
}
// System.Void RealityCollective.Definitions.Utilities.SystemType::set_Type(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemType_set_Type_m790AEB8FA0CC54088F20960CCB4F9E30B849D5FA (SystemType_tB5B24A89EB4E146E8834D2B7639D49A8573CB692* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB0231D69D93A47A94ABFDE22A07442F753F031D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B6_0 = 0;
	{
		// if (value != null)
		Type_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		// bool isValid = value.IsValueType && !value.IsEnum && !value.IsAbstract || value.IsClass;
		Type_t* L_2 = ___0_value;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		Type_t* L_4 = ___0_value;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(81 /* System.Boolean System.Type::get_IsEnum() */, L_4);
		if (L_5)
		{
			goto IL_0021;
		}
	}
	{
		Type_t* L_6 = ___0_value;
		NullCheck(L_6);
		bool L_7;
		L_7 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_6, NULL);
		if (!L_7)
		{
			goto IL_0029;
		}
	}

IL_0021:
	{
		Type_t* L_8 = ___0_value;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549(L_8, NULL);
		G_B6_0 = ((int32_t)(L_9));
		goto IL_002a;
	}

IL_0029:
	{
		G_B6_0 = 1;
	}

IL_002a:
	{
		// if (!isValid)
		if (G_B6_0)
		{
			goto IL_0046;
		}
	}
	{
		// Debug.LogError($"'{value.FullName}' is not a valid class or struct type.");
		Type_t* L_10 = ___0_value;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_FullName() */, L_10);
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, L_11, _stringLiteralFB0231D69D93A47A94ABFDE22A07442F753F031D, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_12, NULL);
	}

IL_0046:
	{
		// type = value;
		Type_t* L_13 = ___0_value;
		__this->___type_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_1), (void*)L_13);
		// if (type != null)
		Type_t* L_14 = __this->___type_1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_14, (Type_t*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0084;
		}
	}
	{
		// guid = type.GUID;
		Type_t* L_16 = __this->___type_1;
		NullCheck(L_16);
		Guid_t L_17;
		L_17 = VirtualFuncInvoker0< Guid_t >::Invoke(125 /* System.Guid System.Type::get_GUID() */, L_16);
		__this->___guid_2 = L_17;
		// reference = guid.ToString();
		Guid_t* L_18 = (Guid_t*)(&__this->___guid_2);
		String_t* L_19;
		L_19 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C(L_18, NULL);
		__this->___reference_0 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reference_0), (void*)L_19);
		return;
	}

IL_0084:
	{
		// guid = Guid.Empty;
		Guid_t L_20 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->___Empty_0;
		__this->___guid_2 = L_20;
		// reference = string.Empty;
		String_t* L_21 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___reference_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reference_0), (void*)L_21);
		// }
		return;
	}
}
// System.Type RealityCollective.Definitions.Utilities.SystemType::op_Implicit(RealityCollective.Definitions.Utilities.SystemType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SystemType_op_Implicit_m6EABD2341B0EECEF22238323845D6BF894F81F95 (SystemType_tB5B24A89EB4E146E8834D2B7639D49A8573CB692* ___0_type, const RuntimeMethod* method) 
{
	{
		// return type?.Type;
		SystemType_tB5B24A89EB4E146E8834D2B7639D49A8573CB692* L_0 = ___0_type;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (Type_t*)NULL;
	}

IL_0005:
	{
		SystemType_tB5B24A89EB4E146E8834D2B7639D49A8573CB692* L_1 = ___0_type;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = SystemType_get_Type_m7B59720378938C4E71B2933E2E4B438EECD0EAEC_inline(L_1, NULL);
		return L_2;
	}
}
// System.String RealityCollective.Definitions.Utilities.SystemType::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemType_ToString_mA3901E2D40EC783BE8CC2D8206A099F023D5B7FE (SystemType_tB5B24A89EB4E146E8834D2B7639D49A8573CB692* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61F55878342A2013C48FD41A861A86C7CF593386);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B2_0 = NULL;
	Type_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		// return Type?.FullName ?? (string.IsNullOrWhiteSpace(reference) ? "{None}" : reference);
		Type_t* L_0;
		L_0 = SystemType_get_Type_m7B59720378938C4E71B2933E2E4B438EECD0EAEC_inline(__this, NULL);
		Type_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_FullName() */, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		String_t* L_3 = G_B3_0;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B7_0 = L_3;
			goto IL_002f;
		}
	}
	{
		String_t* L_4 = __this->___reference_0;
		bool L_5;
		L_5 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_4, NULL);
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_6 = __this->___reference_0;
		return L_6;
	}

IL_002a:
	{
		G_B7_0 = _stringLiteral61F55878342A2013C48FD41A861A86C7CF593386;
	}

IL_002f:
	{
		return G_B7_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RealityCollective.Attributes.ImplementsAttribute::.ctor(System.Type,RealityCollective.Definitions.Utilities.TypeGrouping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementsAttribute__ctor_mA698F892A969A9AD0E6B44F89BF19E0C78EE179F (ImplementsAttribute_tA860407A2CAD81BE53BD11D93BD84DD7C094584B* __this, Type_t* ___0_interfaceType, int32_t ___1_grouping, const RuntimeMethod* method) 
{
	{
		// : base(interfaceType, grouping)
		Type_t* L_0 = ___0_interfaceType;
		int32_t L_1 = ___1_grouping;
		SystemTypeAttribute__ctor_m79A75C46653FC9492C264ABAFA6FCCAB46F4FEFB(__this, L_0, L_1, NULL);
		// InterfaceType = interfaceType;
		Type_t* L_2 = ___0_interfaceType;
		__this->___U3CInterfaceTypeU3Ek__BackingField_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInterfaceTypeU3Ek__BackingField_1), (void*)L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RealityCollective.Attributes.SystemTypeAttribute::set_Grouping(RealityCollective.Definitions.Utilities.TypeGrouping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTypeAttribute_set_Grouping_m6B4340EF5EBBF01DCDB713715291D6FEF7E43786 (SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TypeGrouping Grouping { get; protected set; }
		int32_t L_0 = ___0_value;
		__this->___U3CGroupingU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void RealityCollective.Attributes.SystemTypeAttribute::.ctor(System.Type,RealityCollective.Definitions.Utilities.TypeGrouping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTypeAttribute__ctor_m79A75C46653FC9492C264ABAFA6FCCAB46F4FEFB (SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D* __this, Type_t* ___0_type, int32_t ___1_grouping, const RuntimeMethod* method) 
{
	int32_t G_B6_0 = 0;
	{
		// public SystemTypeAttribute(Type type, TypeGrouping grouping = TypeGrouping.ByNamespaceFlat)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// bool isValid = type.IsClass || type.IsInterface || type.IsValueType && !type.IsEnum;
		Type_t* L_0 = ___0_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549(L_0, NULL);
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_2 = ___0_type;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_2, NULL);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_4 = ___0_type;
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_4, NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Type_t* L_6 = ___0_type;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(81 /* System.Boolean System.Type::get_IsEnum() */, L_6);
		G_B6_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_0029:
	{
		G_B6_0 = 0;
		goto IL_002d;
	}

IL_002c:
	{
		G_B6_0 = 1;
	}

IL_002d:
	{
		// Grouping = grouping;
		int32_t L_8 = ___1_grouping;
		SystemTypeAttribute_set_Grouping_m6B4340EF5EBBF01DCDB713715291D6FEF7E43786_inline(__this, L_8, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StaticLogger_get_CurrentLogFilter_m780534DF1ED3E329C2C1981DF13D8084D9B67E66_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static FilterLogType CurrentLogFilter => currentLogFilter;
		il2cpp_codegen_runtime_class_init_inline(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var);
		int32_t L_0 = ((StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_StaticFields*)il2cpp_codegen_static_fields_for(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var))->___currentLogFilter_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StaticLogger_get_DebugMode_mFB6C2FAABB6448DD58401E40520A249C35DECE04_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool DebugMode { get; set; }
		il2cpp_codegen_runtime_class_init_inline(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var);
		bool L_0 = ((StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_StaticFields*)il2cpp_codegen_static_fields_for(StaticLogger_t80E45B3B4B52A5AD0C9C5568E9407830E2795B42_il2cpp_TypeInfo_var))->___U3CDebugModeU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SampleEventHandler_Invoke_mCB0714B618F41F7E5A59F4A40AAD18649946E9EE_inline (SampleEventHandler_tC9A293E964AD35F38BE43C039B0C77592589EDD8* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SyncContextUtility_set_UnitySynchronizationContext_mD4E7BA1E4FDA9BD25AC92AB255864A36F95E204D_inline (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_t04A13A902AABFAC7E069C8B6B52A0379EAF1165A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext UnitySynchronizationContext { get; private set; }
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ___0_value;
		((SyncContextUtility_t04A13A902AABFAC7E069C8B6B52A0379EAF1165A_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_t04A13A902AABFAC7E069C8B6B52A0379EAF1165A_il2cpp_TypeInfo_var))->___U3CUnitySynchronizationContextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SyncContextUtility_t04A13A902AABFAC7E069C8B6B52A0379EAF1165A_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_t04A13A902AABFAC7E069C8B6B52A0379EAF1165A_il2cpp_TypeInfo_var))->___U3CUnitySynchronizationContextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SyncContextUtility_set_UnityThreadId_m322B93AD773227C1ED02664F99699C73747E96A0_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_t04A13A902AABFAC7E069C8B6B52A0379EAF1165A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int UnityThreadId { get; private set; }
		int32_t L_0 = ___0_value;
		((SyncContextUtility_t04A13A902AABFAC7E069C8B6B52A0379EAF1165A_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_t04A13A902AABFAC7E069C8B6B52A0379EAF1165A_il2cpp_TypeInfo_var))->___U3CUnityThreadIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SystemType_get_Type_m7B59720378938C4E71B2933E2E4B438EECD0EAEC_inline (SystemType_tB5B24A89EB4E146E8834D2B7639D49A8573CB692* __this, const RuntimeMethod* method) 
{
	{
		// get => type;
		Type_t* L_0 = __this->___type_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SystemTypeAttribute_set_Grouping_m6B4340EF5EBBF01DCDB713715291D6FEF7E43786_inline (SystemTypeAttribute_t2716978F86472359470C3D7281A9DBA3D24DA37D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TypeGrouping Grouping { get; protected set; }
		int32_t L_0 = ___0_value;
		__this->___U3CGroupingU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
