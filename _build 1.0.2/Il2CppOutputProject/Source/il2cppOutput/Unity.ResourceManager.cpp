#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Single>>>
struct Action_1_t07DD388597F5077D80ED66A6F55632991D676B3B;
// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF;
// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E;
// System.Action`1<UnityEngine.ResourceManagement.IUpdateReceiver>
struct Action_1_t966710EFD079374A3AE7E5D6B27FC53F0EE7E53F;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Action`1<UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext>
struct Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2;
// System.Action`2<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Exception>
struct Action_2_t67647DD70912484E9205AC38396D2849ED602730;
// System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Int32Enum,System.Int32,System.Object>
struct Action_4_t51F78DA8E58156577593F6C422DEBEB7642D6F42;
// System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType,System.Int32,System.Object>
struct Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>
struct AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.GameObject>
struct AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>
struct AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13;
// UnityEngine.ResourceManagement.Util.ComponentSingleton`1<MonoBehaviourCallbackHooks>
struct ComponentSingleton_1_tC7B5F2248ADF6892829DAF5987560976C064EC4F;
// UnityEngine.ResourceManagement.Util.ComponentSingleton`1<System.Object>
struct ComponentSingleton_1_t48E072079F42456220A56E31B3AA96C419BB3157;
// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>>
struct DelegateList_1_t932E16E3FBFE5A6A290BCE66829B9EBC952556E3;
// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>>
struct DelegateList_1_tE369497AF0258DCBC31956F5B9851785CDE755D8;
// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>>
struct DelegateList_1_tE5214C095910CA36010DD471BBF1F8F7EA6D4787;
// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct DelegateList_1_tC070A3D40FCD92D36D6C762C004DDB78978B4F88;
// DelegateList`1<System.Single>
struct DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD;
// System.Collections.Generic.Dictionary`2<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Func`2<System.Action`1<System.Single>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Single>>>
struct Func_2_t41A95935AFF0DB3FD25E84D4B4047C9BA04F25CB;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.ResourceManagement.Util.IOperationCacheKey>
struct IEqualityComparer_1_t7A2EF294B469C692DCE8C03D78E845D15B22617D;
// System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct KeyCollection_tE4E1B5A02FB0D6BD75E03C433462A8F287C04E9C;
// System.Collections.Generic.LinkedList`1<System.Action`1<System.Single>>
struct LinkedList_1_tB39B6153A160F24030669CA5FEF2B343043EC058;
// ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver>
struct ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF;
// ListWithEvents`1<System.Object>
struct ListWithEvents_1_t8929B883E04552186053FBFA4F86DAA5952A1DD7;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.IUpdateReceiver>
struct List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>
struct List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307;
// System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>
struct TaskCompletionSource_1_t82760B5622E48B21F74387D6CA1B0F25D6E599B0;
// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.GameObject>
struct TaskCompletionSource_1_t1CC46E6FFAF00F08BFB98C6822E0537C12BFFB73;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct ValueCollection_t9A9B4B5BC3C555F8A5302BB6419569CDD3A94D46;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>[]
struct EntryU5BU5D_tD6138F642C83681ADE557DF1B11E60CFF4E735F5;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation[]
struct IAsyncOperationU5BU5D_t038A8F7EFA4A20734A0425FC64571B389DE523DB;
// UnityEngine.ResourceManagement.IUpdateReceiver[]
struct IUpdateReceiverU5BU5D_tD65DA2CEC3E524A934059F101A46091E9382D66D;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest[]
struct DeferredCallbackRegisterRequestU5BU5D_t9EE53271E1B9497444A02DA609314E924A546CE4;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.ResourceManagement.AsyncOperations.GroupOperation
struct GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE;
// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation
struct IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation
struct IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067;
// UnityEngine.ResourceManagement.ResourceProviders.IInstanceProvider
struct IInstanceProvider_t6AD5AE64CB95B873B111117A37B8D967FC67FA37;
// UnityEngine.ResourceManagement.Util.IOperationCacheKey
struct IOperationCacheKey_t39BE25F281EA1D574F074D55F4CAF08F13DF3CCA;
// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation
struct IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C;
// UnityEngine.ResourceManagement.IUpdateReceiver
struct IUpdateReceiver_tCE1ECC31330B7BBF10BD42EEEF23DA08B9F49154;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MonoBehaviourCallbackHooks
struct MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ResourceManagement.Exceptions.OperationException
struct OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434;
// UnityEngine.ResourceManagement.ResourceManager
struct ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.ResourceManagement.ResourceManager/InstanceOperation
struct InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInstanceProvider_t6AD5AE64CB95B873B111117A37B8D967FC67FA37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUpdateReceiver_tCE1ECC31330B7BBF10BD42EEEF23DA08B9F49154_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral070CAE9ABBC9921BAD35C84FEBF95454A66D9532;
IL2CPP_EXTERN_C String_t* _stringLiteral5545562CB57BB8E6D1204C7308B5206ED7661CE4;
IL2CPP_EXTERN_C String_t* _stringLiteral820BFB423CB8C20E825524A0B74585E3BEEC752B;
IL2CPP_EXTERN_C String_t* _stringLiteral8A60C15B3F3484BC0138C5410F143D1EA05CA01D;
IL2CPP_EXTERN_C String_t* _stringLiteral9A0359BACB67159E4781CB3F47FB9DBDCD3466E5;
IL2CPP_EXTERN_C String_t* _stringLiteralC1CB6A68B8428D5E87DFAD85994359922F906838;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1_Complete_m34BA93C8DD45D0DDA01AD80F3B3E13AD552B24C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1_Complete_m9541DA0DF79E49EB30A8D94F916CD30BFCCF6535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_OperationException_mEBD2EA7D831F4DE48EB1B851F2E690179A2AD21F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_Status_mD78FF172C6BBCB662A9079992F40FDE886C46D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentSingleton_1__ctor_m3EA0A6453A0D409452BB226CAF4AA0A535DC37C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentSingleton_1_get_Instance_m6B8EE00B635642473CDAE5800239A4C9787F9EC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateList_1_Invoke_mFB21D7BA92CFEAA67905C35AAD3291DE4557CD8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mA34B37E0EA8C1526DB66CB39B478E761FD9CE6C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m1CA02D2DBE4C2EBC97C41AD6758B1F80AF72B920_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA302D5AD9BA1CAA03E24A9290D22DFC23C0CCCF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD14575CCF3C2A116C2F5722F6A6C812F1B8A4208_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m510C271E5E816200C5A7B15ECAF2ACA1C5D18850_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8BA038D71CA239DE45DF14F2C813EAB1CE665247_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m55AE98E914EAE503C9C49320301DC9D381D3FA6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9471395F103D524184B9C3431F6720602406AC65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListWithEvents_1_Remove_m3A98835CC0666BDD435BE0E1CCA7F919202DDF91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListWithEvents_1_get_Count_m54916F3A852ACE2E85ABCA0267C984ACCDCABB84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListWithEvents_1_get_Item_m40ED7F3FE796F695454AEFD5C5684D5CD0371B4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7996D932EA8B1E14EB2A7F229C3C8F03FE4CEEE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD29375DC691B22BB5FAF7730F821BE78564E3121_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mA9BA6B01DA0D7CD6FB80CEDA8B3591361D9D7688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m313491CB8382194A660D52F138BFC51642403F09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m564CB69E4A076D1B353881952DCCDD2AE019A03A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m842F5C74CDF71254D3DF14CBACB255E377C9BC4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4A970745FED9A3407988489DCA7D68ED56392E6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m078B41EA8CEF52CDAB3D6E90D5747D98533F1C1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644_0_0_0_var;
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D;;
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com;
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com;;
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke;
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct DeferredCallbackRegisterRequestU5BU5D_t9EE53271E1B9497444A02DA609314E924A546CE4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2EDA8CD519BED5983264A60869114EBD8462950A 
{
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>
struct AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D  : public RuntimeObject
{
	// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_referenceCount
	int32_t ___m_referenceCount_1;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Status
	int32_t ___m_Status_2;
	// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Error
	Exception_t* ___m_Error_3;
	// UnityEngine.ResourceManagement.ResourceManager UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_RM
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_RM_4;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Version
	int32_t ___m_Version_5;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_DestroyedAction
	DelegateList_1_tC070A3D40FCD92D36D6C762C004DDB78978B4F88* ___m_DestroyedAction_6;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_CompletedActionT
	DelegateList_1_t932E16E3FBFE5A6A290BCE66829B9EBC952556E3* ___m_CompletedActionT_7;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_OnDestroyAction
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_OnDestroyAction_8;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_dependencyCompleteAction
	Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___m_dependencyCompleteAction_9;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::HasExecuted
	bool ___HasExecuted_10;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_11;
	// System.Threading.Tasks.TaskCompletionSource`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSource
	TaskCompletionSource_1_t82760B5622E48B21F74387D6CA1B0F25D6E599B0* ___m_taskCompletionSource_12;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSourceTypeless
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___m_taskCompletionSourceTypeless_13;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_InDeferredCallbackQueue
	bool ___m_InDeferredCallbackQueue_14;
	// DelegateList`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallbacks
	DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* ___m_UpdateCallbacks_15;
	// System.Action`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallback
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___m_UpdateCallback_16;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.GameObject>
struct AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16  : public RuntimeObject
{
	// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<Result>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CResultU3Ek__BackingField_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_referenceCount
	int32_t ___m_referenceCount_1;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Status
	int32_t ___m_Status_2;
	// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Error
	Exception_t* ___m_Error_3;
	// UnityEngine.ResourceManagement.ResourceManager UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_RM
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_RM_4;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Version
	int32_t ___m_Version_5;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_DestroyedAction
	DelegateList_1_tC070A3D40FCD92D36D6C762C004DDB78978B4F88* ___m_DestroyedAction_6;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_CompletedActionT
	DelegateList_1_tE369497AF0258DCBC31956F5B9851785CDE755D8* ___m_CompletedActionT_7;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_OnDestroyAction
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_OnDestroyAction_8;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_dependencyCompleteAction
	Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___m_dependencyCompleteAction_9;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::HasExecuted
	bool ___HasExecuted_10;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_11;
	// System.Threading.Tasks.TaskCompletionSource`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSource
	TaskCompletionSource_1_t1CC46E6FFAF00F08BFB98C6822E0537C12BFFB73* ___m_taskCompletionSource_12;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSourceTypeless
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___m_taskCompletionSourceTypeless_13;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_InDeferredCallbackQueue
	bool ___m_InDeferredCallbackQueue_14;
	// DelegateList`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallbacks
	DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* ___m_UpdateCallbacks_15;
	// System.Action`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallback
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___m_UpdateCallback_16;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>
struct AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13  : public RuntimeObject
{
	// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_referenceCount
	int32_t ___m_referenceCount_1;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Status
	int32_t ___m_Status_2;
	// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Error
	Exception_t* ___m_Error_3;
	// UnityEngine.ResourceManagement.ResourceManager UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_RM
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_RM_4;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Version
	int32_t ___m_Version_5;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_DestroyedAction
	DelegateList_1_tC070A3D40FCD92D36D6C762C004DDB78978B4F88* ___m_DestroyedAction_6;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_CompletedActionT
	DelegateList_1_tE5214C095910CA36010DD471BBF1F8F7EA6D4787* ___m_CompletedActionT_7;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_OnDestroyAction
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_OnDestroyAction_8;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_dependencyCompleteAction
	Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___m_dependencyCompleteAction_9;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::HasExecuted
	bool ___HasExecuted_10;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_11;
	// System.Threading.Tasks.TaskCompletionSource`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSource
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___m_taskCompletionSource_12;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSourceTypeless
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___m_taskCompletionSourceTypeless_13;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_InDeferredCallbackQueue
	bool ___m_InDeferredCallbackQueue_14;
	// DelegateList`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallbacks
	DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* ___m_UpdateCallbacks_15;
	// System.Action`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallback
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___m_UpdateCallback_16;
};

// DelegateList`1<System.Single>
struct DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD  : public RuntimeObject
{
	// System.Func`2<System.Action`1<T>,System.Collections.Generic.LinkedListNode`1<System.Action`1<T>>> DelegateList`1::m_acquireFunc
	Func_2_t41A95935AFF0DB3FD25E84D4B4047C9BA04F25CB* ___m_acquireFunc_0;
	// System.Action`1<System.Collections.Generic.LinkedListNode`1<System.Action`1<T>>> DelegateList`1::m_releaseFunc
	Action_1_t07DD388597F5077D80ED66A6F55632991D676B3B* ___m_releaseFunc_1;
	// System.Collections.Generic.LinkedList`1<System.Action`1<T>> DelegateList`1::m_callbacks
	LinkedList_1_tB39B6153A160F24030669CA5FEF2B343043EC058* ___m_callbacks_2;
	// System.Boolean DelegateList`1::m_invoking
	bool ___m_invoking_3;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD6138F642C83681ADE557DF1B11E60CFF4E735F5* ____entries_1;
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
	KeyCollection_tE4E1B5A02FB0D6BD75E03C433462A8F287C04E9C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9A9B4B5BC3C555F8A5302BB6419569CDD3A94D46* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver>
struct ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> ListWithEvents`1::m_List
	List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1* ___m_List_0;
	// System.Action`1<T> ListWithEvents`1::OnElementRemoved
	Action_1_t966710EFD079374A3AE7E5D6B27FC53F0EE7E53F* ___OnElementRemoved_1;
};

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IAsyncOperationU5BU5D_t038A8F7EFA4A20734A0425FC64571B389DE523DB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.IUpdateReceiver>
struct List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IUpdateReceiverU5BU5D_tD65DA2CEC3E524A934059F101A46091E9382D66D* ____items_1;
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

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>
struct List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DeferredCallbackRegisterRequestU5BU5D_t9EE53271E1B9497444A02DA609314E924A546CE4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.ResourceManagement.ResourceManager
struct ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D  : public RuntimeObject
{
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::postProfilerEvents
	bool ___postProfilerEvents_0;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::CallbackHooksEnabled
	bool ___CallbackHooksEnabled_2;
	// ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver> UnityEngine.ResourceManagement.ResourceManager::m_UpdateReceivers
	ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* ___m_UpdateReceivers_3;
	// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.IUpdateReceiver> UnityEngine.ResourceManagement.ResourceManager::m_UpdateReceiversToRemove
	List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1* ___m_UpdateReceiversToRemove_4;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::m_UpdatingReceivers
	bool ___m_UpdatingReceivers_5;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::m_InsideUpdateMethod
	bool ___m_InsideUpdateMethod_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.ResourceManager::m_AssetOperationCache
	Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE* ___m_AssetOperationCache_7;
	// DelegateList`1<System.Single> UnityEngine.ResourceManagement.ResourceManager::m_UpdateCallbacks
	DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* ___m_UpdateCallbacks_8;
	// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.ResourceManager::m_DeferredCompleteCallbacks
	List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* ___m_DeferredCompleteCallbacks_9;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::m_InsideExecuteDeferredCallbacksMethod
	bool ___m_InsideExecuteDeferredCallbacksMethod_10;
	// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest> UnityEngine.ResourceManagement.ResourceManager::m_DeferredCallbacksToRegister
	List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* ___m_DeferredCallbacksToRegister_11;
	// System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType,System.Int32,System.Object> UnityEngine.ResourceManagement.ResourceManager::m_obsoleteDiagnosticsHandler
	Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D* ___m_obsoleteDiagnosticsHandler_12;
	// System.Action`1<UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext> UnityEngine.ResourceManagement.ResourceManager::m_diagnosticsHandler
	Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* ___m_diagnosticsHandler_13;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::m_RegisteredForCallbacks
	bool ___m_RegisteredForCallbacks_16;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>
struct AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>
struct AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.IUpdateReceiver>
struct Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D 
{
	// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_InternalOp
	RuntimeObject* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_LocationName
	String_t* ___m_LocationName_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke
{
	RuntimeObject* ___m_InternalOp_0;
	int32_t ___m_Version_1;
	char* ___m_LocationName_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com
{
	RuntimeObject* ___m_InternalOp_0;
	int32_t ___m_Version_1;
	Il2CppChar* ___m_LocationName_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
struct DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D 
{
	// System.Int64 UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus::TotalBytes
	int64_t ___TotalBytes_0;
	// System.Int64 UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus::DownloadedBytes
	int64_t ___DownloadedBytes_1;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus::IsDone
	bool ___IsDone_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
struct DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_pinvoke
{
	int64_t ___TotalBytes_0;
	int64_t ___DownloadedBytes_1;
	int32_t ___IsDone_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
struct DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_com
{
	int64_t ___TotalBytes_0;
	int64_t ___DownloadedBytes_1;
	int32_t ___IsDone_2;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.ResourceManagement.AsyncOperations.GroupOperation
struct GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE  : public AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D
{
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::m_InternalOnComplete
	Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___m_InternalOnComplete_17;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::m_LoadedCount
	int32_t ___m_LoadedCount_18;
	// UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/GroupOperationSettings UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::m_Settings
	int32_t ___m_Settings_19;
	// UnityEngine.ResourceManagement.Util.IOperationCacheKey UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::<UnityEngine.ResourceManagement.AsyncOperations.ICachable.Key>k__BackingField
	RuntimeObject* ___U3CUnityEngine_ResourceManagement_AsyncOperations_ICachable_KeyU3Ek__BackingField_20;
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

// UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 
{
	// System.Int32 UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::m_Version
	int32_t ___m_Version_0;
	// UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::m_InternalOp
	RuntimeObject* ___m_InternalOp_1;
	// UnityEngine.ResourceManagement.ResourceManager UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::m_ResourceManager
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_pinvoke
{
	int32_t ___m_Version_0;
	RuntimeObject* ___m_InternalOp_1;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_com
{
	int32_t ___m_Version_0;
	RuntimeObject* ___m_InternalOp_1;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager_2;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
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

// UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest
struct DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD 
{
	// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest::operation
	RuntimeObject* ___operation_0;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest::incrementRefCount
	bool ___incrementRefCount_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest
struct DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshaled_pinvoke
{
	RuntimeObject* ___operation_0;
	int32_t ___incrementRefCount_1;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest
struct DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshaled_com
{
	RuntimeObject* ___operation_0;
	int32_t ___incrementRefCount_1;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>
struct Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD ____current_3;
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

// UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters
struct InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669 
{
	// UnityEngine.Vector3 UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_0;
	// UnityEngine.Quaternion UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters::m_Rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation_1;
	// UnityEngine.Transform UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters::m_Parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Parent_2;
	// System.Boolean UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters::m_InstantiateInWorldPosition
	bool ___m_InstantiateInWorldPosition_3;
	// System.Boolean UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters::m_SetPositionRotation
	bool ___m_SetPositionRotation_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters
struct InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation_1;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Parent_2;
	int32_t ___m_InstantiateInWorldPosition_3;
	int32_t ___m_SetPositionRotation_4;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters
struct InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation_1;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Parent_2;
	int32_t ___m_InstantiateInWorldPosition_3;
	int32_t ___m_SetPositionRotation_4;
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

// UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext
struct DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::<OperationHandle>k__BackingField
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___U3COperationHandleU3Ek__BackingField_0;
	// UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_1;
	// System.Int32 UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::<EventValue>k__BackingField
	int32_t ___U3CEventValueU3Ek__BackingField_2;
	// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::<Location>k__BackingField
	RuntimeObject* ___U3CLocationU3Ek__BackingField_3;
	// System.Object UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::<Context>k__BackingField
	RuntimeObject* ___U3CContextU3Ek__BackingField_4;
	// System.String UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext
struct DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshaled_pinvoke
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke ___U3COperationHandleU3Ek__BackingField_0;
	int32_t ___U3CTypeU3Ek__BackingField_1;
	int32_t ___U3CEventValueU3Ek__BackingField_2;
	RuntimeObject* ___U3CLocationU3Ek__BackingField_3;
	Il2CppIUnknown* ___U3CContextU3Ek__BackingField_4;
	char* ___U3CErrorU3Ek__BackingField_5;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext
struct DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshaled_com
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com ___U3COperationHandleU3Ek__BackingField_0;
	int32_t ___U3CTypeU3Ek__BackingField_1;
	int32_t ___U3CEventValueU3Ek__BackingField_2;
	RuntimeObject* ___U3CLocationU3Ek__BackingField_3;
	Il2CppIUnknown* ___U3CContextU3Ek__BackingField_4;
	Il2CppChar* ___U3CErrorU3Ek__BackingField_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.ResourceManagement.Exceptions.OperationException
struct OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.ResourceManagement.ResourceManager/InstanceOperation
struct InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644  : public AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> UnityEngine.ResourceManagement.ResourceManager/InstanceOperation::m_dependency
	AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA ___m_dependency_17;
	// UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters UnityEngine.ResourceManagement.ResourceManager/InstanceOperation::m_instantiationParams
	InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669 ___m_instantiationParams_18;
	// UnityEngine.ResourceManagement.ResourceProviders.IInstanceProvider UnityEngine.ResourceManagement.ResourceManager/InstanceOperation::m_instanceProvider
	RuntimeObject* ___m_instanceProvider_19;
	// UnityEngine.GameObject UnityEngine.ResourceManagement.ResourceManager/InstanceOperation::m_instance
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_instance_20;
	// UnityEngine.SceneManagement.Scene UnityEngine.ResourceManagement.ResourceManager/InstanceOperation::m_scene
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___m_scene_21;
};

// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF  : public MulticastDelegate_t
{
};

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext>
struct Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Exception>
struct Action_2_t67647DD70912484E9205AC38396D2849ED602730  : public MulticastDelegate_t
{
};

// System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Int32Enum,System.Int32,System.Object>
struct Action_4_t51F78DA8E58156577593F6C422DEBEB7642D6F42  : public MulticastDelegate_t
{
};

// System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType,System.Int32,System.Object>
struct Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.ResourceManagement.Util.ComponentSingleton`1<MonoBehaviourCallbackHooks>
struct ComponentSingleton_1_tC7B5F2248ADF6892829DAF5987560976C064EC4F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MonoBehaviourCallbackHooks
struct MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F  : public ComponentSingleton_1_tC7B5F2248ADF6892829DAF5987560976C064EC4F
{
	// System.Action`1<System.Single> MonoBehaviourCallbackHooks::m_OnUpdateDelegate
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___m_OnUpdateDelegate_5;
};

// <Module>

// <Module>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.GameObject>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.GameObject>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>

// DelegateList`1<System.Single>

// DelegateList`1<System.Single>

// System.Collections.Generic.Dictionary`2<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>

// System.Collections.Generic.Dictionary`2<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>

// ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver>

// ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver>

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IAsyncOperationU5BU5D_t038A8F7EFA4A20734A0425FC64571B389DE523DB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.IUpdateReceiver>
struct List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IUpdateReceiverU5BU5D_tD65DA2CEC3E524A934059F101A46091E9382D66D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.IUpdateReceiver>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>
struct List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DeferredCallbackRegisterRequestU5BU5D_t9EE53271E1B9497444A02DA609314E924A546CE4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// UnityEngine.ResourceManagement.ResourceManager
struct ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_StaticFields
{
	// System.Action`2<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Exception> UnityEngine.ResourceManagement.ResourceManager::<ExceptionHandler>k__BackingField
	Action_2_t67647DD70912484E9205AC38396D2849ED602730* ___U3CExceptionHandlerU3Ek__BackingField_1;
	// System.Int32 UnityEngine.ResourceManagement.ResourceManager::s_GroupOperationTypeHash
	int32_t ___s_GroupOperationTypeHash_14;
	// System.Int32 UnityEngine.ResourceManagement.ResourceManager::s_InstanceOperationTypeHash
	int32_t ___s_InstanceOperationTypeHash_15;
};

// UnityEngine.ResourceManagement.ResourceManager

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.IUpdateReceiver>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.IUpdateReceiver>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus

// UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// UnityEngine.ResourceManagement.AsyncOperations.GroupOperation

// UnityEngine.ResourceManagement.AsyncOperations.GroupOperation

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle

// UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest

// UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters

// UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext

// UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.ResourceManagement.Exceptions.OperationException

// UnityEngine.ResourceManagement.Exceptions.OperationException

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

// UnityEngine.ResourceManagement.ResourceManager/InstanceOperation

// UnityEngine.ResourceManagement.ResourceManager/InstanceOperation

// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>

// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>

// System.Action`1<System.Single>

// System.Action`1<System.Single>

// System.Action`1<UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext>

// System.Action`1<UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext>

// System.Action`2<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Exception>

// System.Action`2<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Exception>

// System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Int32Enum,System.Int32,System.Object>

// System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Int32Enum,System.Int32,System.Object>

// System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType,System.Int32,System.Object>

// System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType,System.Int32,System.Object>

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.ResourceManagement.Util.ComponentSingleton`1<MonoBehaviourCallbackHooks>
struct ComponentSingleton_1_tC7B5F2248ADF6892829DAF5987560976C064EC4F_StaticFields
{
	// T UnityEngine.ResourceManagement.Util.ComponentSingleton`1::s_Instance
	MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* ___s_Instance_4;
};

// UnityEngine.ResourceManagement.Util.ComponentSingleton`1<MonoBehaviourCallbackHooks>

// MonoBehaviourCallbackHooks

// MonoBehaviourCallbackHooks
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
// UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest[]
struct DeferredCallbackRegisterRequestU5BU5D_t9EE53271E1B9497444A02DA609314E924A546CE4  : public RuntimeArray
{
	ALIGN_FIELD (8) DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD m_Items[1];

	inline DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___operation_0), (void*)NULL);
	}
	inline DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___operation_0), (void*)NULL);
	}
};

IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_pinvoke(const AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D& unmarshaled, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_pinvoke_back(const AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke& marshaled, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D& unmarshaled);
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_pinvoke_cleanup(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_com(const AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D& unmarshaled, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com& marshaled);
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_com_back(const AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com& marshaled, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D& unmarshaled);
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_com_cleanup(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com& marshaled);

// System.Void System.Action`1<System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Util.ComponentSingleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentSingleton_1__ctor_mE3C6A56ADC464B0E183DD01ACE533B50F1B3E365_gshared (ComponentSingleton_1_t48E072079F42456220A56E31B3AA96C419BB3157* __this, const RuntimeMethod* method) ;
// T UnityEngine.ResourceManagement.Util.ComponentSingleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ComponentSingleton_1_get_Instance_m4A3E22BB505964D1199EE767B0D16B00F3DD4427_gshared (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859_gshared (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m17694F84F89B1CA877E7FB810A103007F960CC3E_gshared_inline (Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* __this, DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Int32Enum,System.Int32,System.Object>::Invoke(T1,T2,T3,T4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_4_Invoke_m39604FFBE998E6D4F7BF665421372ED2E8F8A9B7_gshared_inline (Action_4_t51F78DA8E58156577593F6C422DEBEB7642D6F42* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___0_arg1, int32_t ___1_arg2, int32_t ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m842F5C74CDF71254D3DF14CBACB255E377C9BC4B_gshared (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m7996D932EA8B1E14EB2A7F229C3C8F03FE4CEEE5_gshared_inline (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* __this, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void DelegateList`1<System.Single>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateList_1_Invoke_mFB21D7BA92CFEAA67905C35AAD3291DE4557CD8A_gshared (DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* __this, float ___0_res, const RuntimeMethod* method) ;
// T ListWithEvents`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListWithEvents_1_get_Item_m965E426715FE506B4DE49DEDFCACD018E247FB8B_gshared (ListWithEvents_1_t8929B883E04552186053FBFA4F86DAA5952A1DD7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 ListWithEvents`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListWithEvents_1_get_Count_m40E9032D66172A330787433B8E0B8769A3D44A17_gshared (ListWithEvents_1_t8929B883E04552186053FBFA4F86DAA5952A1DD7* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean ListWithEvents`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListWithEvents_1_Remove_mCBD061E4C4AE5B2E97F3CE290BFDEEE08B402913_gshared (ListWithEvents_1_t8929B883E04552186053FBFA4F86DAA5952A1DD7* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676 List_1_GetEnumerator_m564CB69E4A076D1B353881952DCCDD2AE019A03A_gshared (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mA302D5AD9BA1CAA03E24A9290D22DFC23C0CCCF8_gshared (Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD Enumerator_get_Current_m9471395F103D524184B9C3431F6720602406AC65_gshared_inline (Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8BA038D71CA239DE45DF14F2C813EAB1CE665247_gshared (Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676* __this, const RuntimeMethod* method) ;
// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::get_OperationException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* AsyncOperationHandle_1_get_OperationException_mD78C7A280DECB70FA64B42517EEEEFAB79BE3086_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperationHandle_1_get_Status_m66615FF5C0E965DD89EC2878F815637D3D5C1672_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>::Complete(TObject,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_1_Complete_m113C44FFAB7DAA0DCB9C105663C50FA7D9BFD8F8_gshared (AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* __this, RuntimeObject* ___0_result, bool ___1_success, String_t* ___2_errorMsg, const RuntimeMethod* method) ;
// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationBase_1_get_Result_mCCD9D27A9D37A11B520A6D95B4EB191835B8C368_gshared_inline (AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>::Complete(TObject,System.Boolean,System.Exception,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_1_Complete_mCBEB3D85A0C514DB4453265D71CAF90A5FE14D5D_gshared (AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* __this, RuntimeObject* ___0_result, bool ___1_success, Exception_t* ___2_exception, bool ___3_releaseDependenciesOnFailure, const RuntimeMethod* method) ;

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
inline void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, float, const RuntimeMethod*))Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline)(__this, ___0_obj, method);
}
// System.Void UnityEngine.ResourceManagement.Util.ComponentSingleton`1<MonoBehaviourCallbackHooks>::.ctor()
inline void ComponentSingleton_1__ctor_m3EA0A6453A0D409452BB226CAF4AA0A535DC37C8 (ComponentSingleton_1_tC7B5F2248ADF6892829DAF5987560976C064EC4F* __this, const RuntimeMethod* method)
{
	((  void (*) (ComponentSingleton_1_tC7B5F2248ADF6892829DAF5987560976C064EC4F*, const RuntimeMethod*))ComponentSingleton_1__ctor_mE3C6A56ADC464B0E183DD01ACE533B50F1B3E365_gshared)(__this, method);
}
// T UnityEngine.ResourceManagement.Util.ComponentSingleton`1<MonoBehaviourCallbackHooks>::get_Instance()
inline MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* ComponentSingleton_1_get_Instance_m6B8EE00B635642473CDAE5800239A4C9787F9EC6 (const RuntimeMethod* method)
{
	return ((  MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* (*) (const RuntimeMethod*))ComponentSingleton_1_get_Instance_m4A3E22BB505964D1199EE767B0D16B00F3DD4427_gshared)(method);
}
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859 (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void MonoBehaviourCallbackHooks::add_OnUpdateDelegate(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourCallbackHooks_add_OnUpdateDelegate_m75B55B30965281C86C4A349DFBE713833E74853C (MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext>::Invoke(T)
inline void Action_1_Invoke_m17694F84F89B1CA877E7FB810A103007F960CC3E_inline (Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* __this, DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2*, DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F, const RuntimeMethod*))Action_1_Invoke_m17694F84F89B1CA877E7FB810A103007F960CC3E_gshared_inline)(__this, ___0_obj, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::get_OperationHandle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D DiagnosticEventContext_get_OperationHandle_mC766CD6C074CD2A0E3486FD41CE0B951B25B3FA6_inline (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DiagnosticEventContext_get_Type_mF65C73B3A0D1958041136121E877B4AF9ECFCEBB_inline (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::get_EventValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DiagnosticEventContext_get_EventValue_m1109E4CB1BFA64FEDC13FF72B293B68DA2D0A94F_inline (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DiagnosticEventContext_get_Error_m1BCCCD62C4402CD13F6E0E071111AF0BEEA00BD3_inline (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Object UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::get_Context()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DiagnosticEventContext_get_Context_m8DC1C15D121AD87B29AE6FAF53B6797221E2224B_inline (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType,System.Int32,System.Object>::Invoke(T1,T2,T3,T4)
inline void Action_4_Invoke_mF7B8B5B7B63A45CDA066B9A3D8BAB810B5061296_inline (Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___0_arg1, int32_t ___1_arg2, int32_t ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	((  void (*) (Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D*, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Action_4_Invoke_m39604FFBE998E6D4F7BF665421372ED2E8F8A9B7_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, method);
}
// System.Boolean UnityEngine.ResourceManagement.ResourceManager::IsOperationCached(UnityEngine.ResourceManagement.Util.IOperationCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceManager_IsOperationCached_m2B1EDD504388B6A568DAFC5417F719F85947A660 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>::Remove(TKey)
inline bool Dictionary_2_Remove_m1CA02D2DBE4C2EBC97C41AD6758B1F80AF72B920 (Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mA34B37E0EA8C1526DB66CB39B478E761FD9CE6C4 (Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// T System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m078B41EA8CEF52CDAB3D6E90D5747D98533F1C1E (List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>::get_Count()
inline int32_t List_1_get_Count_m4A970745FED9A3407988489DCA7D68ED56392E6E_inline (List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>::Clear()
inline void List_1_Clear_mA9BA6B01DA0D7CD6FB80CEDA8B3591361D9D7688_inline (List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::.ctor()
inline void List_1__ctor_m842F5C74CDF71254D3DF14CBACB255E377C9BC4B (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307*, const RuntimeMethod*))List_1__ctor_m842F5C74CDF71254D3DF14CBACB255E377C9BC4B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::Add(T)
inline void List_1_Add_m7996D932EA8B1E14EB2A7F229C3C8F03FE4CEEE5_inline (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* __this, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307*, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD, const RuntimeMethod*))List_1_Add_m7996D932EA8B1E14EB2A7F229C3C8F03FE4CEEE5_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>::Add(T)
inline void List_1_Add_mD29375DC691B22BB5FAF7730F821BE78564E3121_inline (List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::RegisterForCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_RegisterForCallbacks_m805F04D79BF5BFF608E92C029378AA498A0966E6 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void DelegateList`1<System.Single>::Invoke(T)
inline void DelegateList_1_Invoke_mFB21D7BA92CFEAA67905C35AAD3291DE4557CD8A (DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* __this, float ___0_res, const RuntimeMethod* method)
{
	((  void (*) (DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD*, float, const RuntimeMethod*))DelegateList_1_Invoke_mFB21D7BA92CFEAA67905C35AAD3291DE4557CD8A_gshared)(__this, ___0_res, method);
}
// T ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver>::get_Item(System.Int32)
inline RuntimeObject* ListWithEvents_1_get_Item_m40ED7F3FE796F695454AEFD5C5684D5CD0371B4B (ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF*, int32_t, const RuntimeMethod*))ListWithEvents_1_get_Item_m965E426715FE506B4DE49DEDFCACD018E247FB8B_gshared)(__this, ___0_index, method);
}
// System.Int32 ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver>::get_Count()
inline int32_t ListWithEvents_1_get_Count_m54916F3A852ACE2E85ABCA0267C984ACCDCABB84 (ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF*, const RuntimeMethod*))ListWithEvents_1_get_Count_m40E9032D66172A330787433B8E0B8769A3D44A17_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ResourceManagement.IUpdateReceiver>::GetEnumerator()
inline Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E List_1_GetEnumerator_m313491CB8382194A660D52F138BFC51642403F09 (List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E (*) (List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.IUpdateReceiver>::Dispose()
inline void Enumerator_Dispose_mD14575CCF3C2A116C2F5722F6A6C812F1B8A4208 (Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.IUpdateReceiver>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m55AE98E914EAE503C9C49320301DC9D381D3FA6D_inline (Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver>::Remove(T)
inline bool ListWithEvents_1_Remove_m3A98835CC0666BDD435BE0E1CCA7F919202DDF91 (ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF*, RuntimeObject*, const RuntimeMethod*))ListWithEvents_1_Remove_mCBD061E4C4AE5B2E97F3CE290BFDEEE08B402913_gshared)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.IUpdateReceiver>::MoveNext()
inline bool Enumerator_MoveNext_m510C271E5E816200C5A7B15ECAF2ACA1C5D18850 (Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::GetEnumerator()
inline Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676 List_1_GetEnumerator_m564CB69E4A076D1B353881952DCCDD2AE019A03A (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676 (*) (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307*, const RuntimeMethod*))List_1_GetEnumerator_m564CB69E4A076D1B353881952DCCDD2AE019A03A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::Dispose()
inline void Enumerator_Dispose_mA302D5AD9BA1CAA03E24A9290D22DFC23C0CCCF8 (Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676*, const RuntimeMethod*))Enumerator_Dispose_mA302D5AD9BA1CAA03E24A9290D22DFC23C0CCCF8_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::get_Current()
inline DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD Enumerator_get_Current_m9471395F103D524184B9C3431F6720602406AC65_inline (Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676* __this, const RuntimeMethod* method)
{
	return ((  DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD (*) (Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676*, const RuntimeMethod*))Enumerator_get_Current_m9471395F103D524184B9C3431F6720602406AC65_gshared_inline)(__this, method);
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::RegisterForDeferredCallback(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_RegisterForDeferredCallback_m05889AD5E7D950770177A9B2920B4736546B0225 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___0_op, bool ___1_incrementRefCount, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::MoveNext()
inline bool Enumerator_MoveNext_m8BA038D71CA239DE45DF14F2C813EAB1CE665247 (Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676*, const RuntimeMethod*))Enumerator_MoveNext_m8BA038D71CA239DE45DF14F2C813EAB1CE665247_gshared)(__this, method);
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::ExecuteDeferredCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_ExecuteDeferredCallbacks_m7BB2468360D4AAF86E437E93E9D52E134AE4AA7F (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::.ctor(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType,System.Int32,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventContext__ctor_m14E2DE6A37749D242E166A1CA6B94AC0F99D4C51 (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___0_op, int32_t ___1_type, int32_t ___2_eventValue, String_t* ___3_error, RuntimeObject* ___4_context, const RuntimeMethod* method) ;
// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>::get_OperationException()
inline Exception_t* AsyncOperationHandle_1_get_OperationException_mEBD2EA7D831F4DE48EB1B851F2E690179A2AD21F (AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA* __this, const RuntimeMethod* method)
{
	return ((  Exception_t* (*) (AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA*, const RuntimeMethod*))AsyncOperationHandle_1_get_OperationException_mD78C7A280DECB70FA64B42517EEEEFAB79BE3086_gshared)(__this, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>::get_Status()
inline int32_t AsyncOperationHandle_1_get_Status_mD78FF172C6BBCB662A9079992F40FDE886C46D22 (AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA*, const RuntimeMethod*))AsyncOperationHandle_1_get_Status_m66615FF5C0E965DD89EC2878F815637D3D5C1672_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.GameObject>::Complete(TObject,System.Boolean,System.String)
inline void AsyncOperationBase_1_Complete_m9541DA0DF79E49EB30A8D94F916CD30BFCCF6535 (AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_result, bool ___1_success, String_t* ___2_errorMsg, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, String_t*, const RuntimeMethod*))AsyncOperationBase_1_Complete_m113C44FFAB7DAA0DCB9C105663C50FA7D9BFD8F8_gshared)(__this, ___0_result, ___1_success, ___2_errorMsg, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Type System.Exception::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09 (Exception_t* __this, const RuntimeMethod* method) ;
// System.String System.Exception::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exception_get_Message_mCFE0D38FDF9001405299AAE43BBE2A9AD806C441 (Exception_t* __this, const RuntimeMethod* method) ;
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::.ctor(UnityEngine.ResourceManagement.ResourceManager,UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProvideHandle__ctor_m747E40C8B08DBF3EB4276D7B0836C0F0D5B59B0A (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___0_rm, RuntimeObject* ___1_op, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::.ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle__ctor_m68E6B69581AD8F879FE27693A96D6F36ABD3A264 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, RuntimeObject* ___0_op, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::.ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle__ctor_m40A34479B55F7F00CB5DF17F1003A38B12D0A51A (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, RuntimeObject* ___0_op, int32_t ___1_version, String_t* ___2_locationName, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_InternalOp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::add_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_add_Completed_mD5633623ADF00C97B6A1EE712E6654452F64B2E0 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::remove_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_remove_Completed_m538FFC6655C8FB0600775FFFB998D9903478DB44 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperationHandle_GetHashCode_mA261FCCE8588545912EAD2AC611FADD3F104DF15 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_OperationException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* AsyncOperationHandle_get_OperationException_m531FC4DC2E215075C0EA7CE135FF1D68F6049270 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Object UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperationHandle_get_Status_mD5FB502808777A3C88880942DB9595C614CF9B0A (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Object UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_System_Collections_IEnumerator_get_Current_mBAF3C14B4A6BD17BBBE6663D0061A1DD42E8FE37 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_System_Collections_IEnumerator_MoveNext_m8A793FA1EEE2DAAD8B74F95FFEC60D94B9B8610E (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_System_Collections_IEnumerator_Reset_m8921AB145EB1F53FD4352BE9E512505719FE6527 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>::get_Result()
inline RuntimeObject* AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D*, const RuntimeMethod*))AsyncOperationBase_1_get_Result_mCCD9D27A9D37A11B520A6D95B4EB191835B8C368_gshared_inline)(__this, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::CompleteIfDependenciesComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation_CompleteIfDependenciesComplete_m0CBDC4B0BC6DEB0F32D2E9884F99D6EA4FBFD346 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Exceptions.OperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationException__ctor_m86A0486864C0BBA58E2688D3FB650CAB1D616D59 (OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>::Complete(TObject,System.Boolean,System.Exception,System.Boolean)
inline void AsyncOperationBase_1_Complete_m34BA93C8DD45D0DDA01AD80F3B3E13AD552B24C8 (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D* __this, RuntimeObject* ___0_result, bool ___1_success, Exception_t* ___2_exception, bool ___3_releaseDependenciesOnFailure, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D*, RuntimeObject*, bool, Exception_t*, bool, const RuntimeMethod*))AsyncOperationBase_1_Complete_mCBEB3D85A0C514DB4453265D71CAF90A5FE14D5D_gshared)(__this, ___0_result, ___1_success, ___2_exception, ___3_releaseDependenciesOnFailure, method);
}
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
// System.Void MonoBehaviourCallbackHooks::add_OnUpdateDelegate(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourCallbackHooks_add_OnUpdateDelegate_m75B55B30965281C86C4A349DFBE713833E74853C (MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// add { m_OnUpdateDelegate += value; }
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___m_OnUpdateDelegate_5;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = ___0_value;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_0, L_1, NULL);
		__this->___m_OnUpdateDelegate_5 = ((Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)Castclass((RuntimeObject*)L_2, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnUpdateDelegate_5), (void*)((Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)Castclass((RuntimeObject*)L_2, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var)));
		// add { m_OnUpdateDelegate += value; }
		return;
	}
}
// System.Void MonoBehaviourCallbackHooks::remove_OnUpdateDelegate(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourCallbackHooks_remove_OnUpdateDelegate_mE887431AD33057B98989EEA888B2342D18FB5DE4 (MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remove { m_OnUpdateDelegate -= value; }
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___m_OnUpdateDelegate_5;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = ___0_value;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		__this->___m_OnUpdateDelegate_5 = ((Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)Castclass((RuntimeObject*)L_2, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnUpdateDelegate_5), (void*)((Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)Castclass((RuntimeObject*)L_2, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var)));
		// remove { m_OnUpdateDelegate -= value; }
		return;
	}
}
// System.String MonoBehaviourCallbackHooks::GetGameObjectName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MonoBehaviourCallbackHooks_GetGameObjectName_m5E0B21C825DC616AC283318401D06368388779FD (MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1CB6A68B8428D5E87DFAD85994359922F906838);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string GetGameObjectName() => "ResourceManagerCallbacks";
		return _stringLiteralC1CB6A68B8428D5E87DFAD85994359922F906838;
	}
}
// System.Void MonoBehaviourCallbackHooks::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourCallbackHooks_Update_m78B3E22F89771DAF1DF875FA9143E1071C29A1B2 (MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* __this, const RuntimeMethod* method) 
{
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* G_B2_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* G_B1_0 = NULL;
	{
		// m_OnUpdateDelegate?.Invoke(Time.unscaledDeltaTime);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___m_OnUpdateDelegate_5;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		float L_2;
		L_2 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(G_B2_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void MonoBehaviourCallbackHooks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourCallbackHooks__ctor_mBC4522B5FA1CA9A734337F48AEDE1A66F2C75796 (MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentSingleton_1__ctor_m3EA0A6453A0D409452BB226CAF4AA0A535DC37C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ComponentSingleton_1__ctor_m3EA0A6453A0D409452BB226CAF4AA0A535DC37C8(__this, ComponentSingleton_1__ctor_m3EA0A6453A0D409452BB226CAF4AA0A535DC37C8_RuntimeMethod_var);
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
// System.Action`2<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Exception> UnityEngine.ResourceManagement.ResourceManager::get_ExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t67647DD70912484E9205AC38396D2849ED602730* ResourceManager_get_ExceptionHandler_m438ACA3A226A2BB1F49C225927707FC47E3FDFC8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Action<AsyncOperationHandle, Exception> ExceptionHandler { get; set; }
		il2cpp_codegen_runtime_class_init_inline(ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var);
		Action_2_t67647DD70912484E9205AC38396D2849ED602730* L_0 = ((ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var))->___U3CExceptionHandlerU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::RegisterForCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_RegisterForCallbacks_m805F04D79BF5BFF608E92C029378AA498A0966E6 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentSingleton_1_get_Instance_m6B8EE00B635642473CDAE5800239A4C9787F9EC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CallbackHooksEnabled && !m_RegisteredForCallbacks)
		bool L_0 = __this->___CallbackHooksEnabled_2;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		bool L_1 = __this->___m_RegisteredForCallbacks_16;
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		// m_RegisteredForCallbacks = true;
		__this->___m_RegisteredForCallbacks_16 = (bool)1;
		// MonoBehaviourCallbackHooks.Instance.OnUpdateDelegate += Update;
		MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* L_2;
		L_2 = ComponentSingleton_1_get_Instance_m6B8EE00B635642473CDAE5800239A4C9787F9EC6(ComponentSingleton_1_get_Instance_m6B8EE00B635642473CDAE5800239A4C9787F9EC6_RuntimeMethod_var);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_3, __this, (intptr_t)((void*)ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		MonoBehaviourCallbackHooks_add_OnUpdateDelegate_m75B55B30965281C86C4A349DFBE713833E74853C(L_2, L_3, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::PostDiagnosticEvent(UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_PostDiagnosticEvent_m3D762299D2B95B1FC8AE649FDF1D79C6BF4CE67C (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F ___0_context, const RuntimeMethod* method) 
{
	Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* G_B2_0 = NULL;
	Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* G_B1_0 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D G_B7_2;
	memset((&G_B7_2), 0, sizeof(G_B7_2));
	Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D* G_B7_3 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D G_B6_2;
	memset((&G_B6_2), 0, sizeof(G_B6_2));
	Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D* G_B6_3 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	int32_t G_B8_2 = 0;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D G_B8_3;
	memset((&G_B8_3), 0, sizeof(G_B8_3));
	Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D* G_B8_4 = NULL;
	{
		// m_diagnosticsHandler?.Invoke(context);
		Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* L_0 = __this->___m_diagnosticsHandler_13;
		Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F L_2 = ___0_context;
		NullCheck(G_B2_0);
		Action_1_Invoke_m17694F84F89B1CA877E7FB810A103007F960CC3E_inline(G_B2_0, L_2, NULL);
	}

IL_0012:
	{
		// if (m_obsoleteDiagnosticsHandler == null)
		Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D* L_3 = __this->___m_obsoleteDiagnosticsHandler_12;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		return;
	}

IL_001b:
	{
		// m_obsoleteDiagnosticsHandler(context.OperationHandle, context.Type, context.EventValue, string.IsNullOrEmpty(context.Error) ? context.Context : context.Error);
		Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D* L_4 = __this->___m_obsoleteDiagnosticsHandler_12;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_5;
		L_5 = DiagnosticEventContext_get_OperationHandle_mC766CD6C074CD2A0E3486FD41CE0B951B25B3FA6_inline((&___0_context), NULL);
		int32_t L_6;
		L_6 = DiagnosticEventContext_get_Type_mF65C73B3A0D1958041136121E877B4AF9ECFCEBB_inline((&___0_context), NULL);
		int32_t L_7;
		L_7 = DiagnosticEventContext_get_EventValue_m1109E4CB1BFA64FEDC13FF72B293B68DA2D0A94F_inline((&___0_context), NULL);
		String_t* L_8;
		L_8 = DiagnosticEventContext_get_Error_m1BCCCD62C4402CD13F6E0E071111AF0BEEA00BD3_inline((&___0_context), NULL);
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		G_B6_0 = L_7;
		G_B6_1 = L_6;
		G_B6_2 = L_5;
		G_B6_3 = L_4;
		if (L_9)
		{
			G_B7_0 = L_7;
			G_B7_1 = L_6;
			G_B7_2 = L_5;
			G_B7_3 = L_4;
			goto IL_004d;
		}
	}
	{
		String_t* L_10;
		L_10 = DiagnosticEventContext_get_Error_m1BCCCD62C4402CD13F6E0E071111AF0BEEA00BD3_inline((&___0_context), NULL);
		G_B8_0 = ((RuntimeObject*)(L_10));
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		G_B8_4 = G_B6_3;
		goto IL_0054;
	}

IL_004d:
	{
		RuntimeObject* L_11;
		L_11 = DiagnosticEventContext_get_Context_m8DC1C15D121AD87B29AE6FAF53B6797221E2224B_inline((&___0_context), NULL);
		G_B8_0 = L_11;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
		G_B8_4 = G_B7_3;
	}

IL_0054:
	{
		NullCheck(G_B8_4);
		Action_4_Invoke_mF7B8B5B7B63A45CDA066B9A3D8BAB810B5061296_inline(G_B8_4, G_B8_3, G_B8_2, G_B8_1, G_B8_0, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.ResourceManagement.ResourceManager::RemoveOperationFromCache(UnityEngine.ResourceManagement.Util.IOperationCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceManager_RemoveOperationFromCache_m1CB4CDFB4320AE9B7191BCE7F77441274F5A42FD (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m1CA02D2DBE4C2EBC97C41AD6758B1F80AF72B920_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsOperationCached(key))
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ResourceManager_IsOperationCached_m2B1EDD504388B6A568DAFC5417F719F85947A660(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return m_AssetOperationCache.Remove(key);
		Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE* L_2 = __this->___m_AssetOperationCache_7;
		RuntimeObject* L_3 = ___0_key;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_Remove_m1CA02D2DBE4C2EBC97C41AD6758B1F80AF72B920(L_2, L_3, Dictionary_2_Remove_m1CA02D2DBE4C2EBC97C41AD6758B1F80AF72B920_RuntimeMethod_var);
		return L_4;
	}
}
// System.Boolean UnityEngine.ResourceManagement.ResourceManager::IsOperationCached(UnityEngine.ResourceManagement.Util.IOperationCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceManager_IsOperationCached_m2B1EDD504388B6A568DAFC5417F719F85947A660 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mA34B37E0EA8C1526DB66CB39B478E761FD9CE6C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_AssetOperationCache.ContainsKey(key);
		Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE* L_0 = __this->___m_AssetOperationCache_7;
		RuntimeObject* L_1 = ___0_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mA34B37E0EA8C1526DB66CB39B478E761FD9CE6C4(L_0, L_1, Dictionary_2_ContainsKey_mA34B37E0EA8C1526DB66CB39B478E761FD9CE6C4_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::ExecuteDeferredCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_ExecuteDeferredCallbacks_m7BB2468360D4AAF86E437E93E9D52E134AE4AA7F (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mA9BA6B01DA0D7CD6FB80CEDA8B3591361D9D7688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A970745FED9A3407988489DCA7D68ED56392E6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m078B41EA8CEF52CDAB3D6E90D5747D98533F1C1E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// m_InsideExecuteDeferredCallbacksMethod = true;
		__this->___m_InsideExecuteDeferredCallbacksMethod_10 = (bool)1;
		// for (int i = 0; i < m_DeferredCompleteCallbacks.Count; i++)
		V_0 = 0;
		goto IL_0031;
	}

IL_000b:
	{
		// m_DeferredCompleteCallbacks[i].InvokeCompletionEvent();
		List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* L_0 = __this->___m_DeferredCompleteCallbacks_9;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = List_1_get_Item_m078B41EA8CEF52CDAB3D6E90D5747D98533F1C1E(L_0, L_1, List_1_get_Item_m078B41EA8CEF52CDAB3D6E90D5747D98533F1C1E_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(9 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::InvokeCompletionEvent() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_2);
		// m_DeferredCompleteCallbacks[i].DecrementReferenceCount();
		List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* L_3 = __this->___m_DeferredCompleteCallbacks_9;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = List_1_get_Item_m078B41EA8CEF52CDAB3D6E90D5747D98533F1C1E(L_3, L_4, List_1_get_Item_m078B41EA8CEF52CDAB3D6E90D5747D98533F1C1E_RuntimeMethod_var);
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(2 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::DecrementReferenceCount() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_5);
		// for (int i = 0; i < m_DeferredCompleteCallbacks.Count; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0031:
	{
		// for (int i = 0; i < m_DeferredCompleteCallbacks.Count; i++)
		int32_t L_7 = V_0;
		List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* L_8 = __this->___m_DeferredCompleteCallbacks_9;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m4A970745FED9A3407988489DCA7D68ED56392E6E_inline(L_8, List_1_get_Count_m4A970745FED9A3407988489DCA7D68ED56392E6E_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_000b;
		}
	}
	{
		// m_DeferredCompleteCallbacks.Clear();
		List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* L_10 = __this->___m_DeferredCompleteCallbacks_9;
		NullCheck(L_10);
		List_1_Clear_mA9BA6B01DA0D7CD6FB80CEDA8B3591361D9D7688_inline(L_10, List_1_Clear_mA9BA6B01DA0D7CD6FB80CEDA8B3591361D9D7688_RuntimeMethod_var);
		// m_InsideExecuteDeferredCallbacksMethod = false;
		__this->___m_InsideExecuteDeferredCallbacksMethod_10 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::RegisterForDeferredCallback(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_RegisterForDeferredCallback_m05889AD5E7D950770177A9B2920B4736546B0225 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___0_op, bool ___1_incrementRefCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7996D932EA8B1E14EB2A7F229C3C8F03FE4CEEE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD29375DC691B22BB5FAF7730F821BE78564E3121_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m842F5C74CDF71254D3DF14CBACB255E377C9BC4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (CallbackHooksEnabled && m_InsideExecuteDeferredCallbacksMethod)
		bool L_0 = __this->___CallbackHooksEnabled_2;
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		bool L_1 = __this->___m_InsideExecuteDeferredCallbacksMethod_10;
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		// if (m_DeferredCallbacksToRegister == null)
		List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* L_2 = __this->___m_DeferredCallbacksToRegister_11;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		// m_DeferredCallbacksToRegister = new List<DeferredCallbackRegisterRequest>();
		List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* L_3 = (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307*)il2cpp_codegen_object_new(List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m842F5C74CDF71254D3DF14CBACB255E377C9BC4B(L_3, List_1__ctor_m842F5C74CDF71254D3DF14CBACB255E377C9BC4B_RuntimeMethod_var);
		__this->___m_DeferredCallbacksToRegister_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DeferredCallbacksToRegister_11), (void*)L_3);
	}

IL_0023:
	{
		// m_DeferredCallbacksToRegister.Add
		// (
		//     new DeferredCallbackRegisterRequest()
		//     {
		//         operation = op,
		//         incrementRefCount = incrementRefCount
		//     }
		// );
		List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* L_4 = __this->___m_DeferredCallbacksToRegister_11;
		il2cpp_codegen_initobj((&V_0), sizeof(DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD));
		RuntimeObject* L_5 = ___0_op;
		(&V_0)->___operation_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___operation_0), (void*)L_5);
		bool L_6 = ___1_incrementRefCount;
		(&V_0)->___incrementRefCount_1 = L_6;
		DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD L_7 = V_0;
		NullCheck(L_4);
		List_1_Add_m7996D932EA8B1E14EB2A7F229C3C8F03FE4CEEE5_inline(L_4, L_7, List_1_Add_m7996D932EA8B1E14EB2A7F229C3C8F03FE4CEEE5_RuntimeMethod_var);
		return;
	}

IL_0048:
	{
		// if (incrementRefCount)
		bool L_8 = ___1_incrementRefCount;
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		// op.IncrementReferenceCount();
		RuntimeObject* L_9 = ___0_op;
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(3 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::IncrementReferenceCount() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_9);
	}

IL_0051:
	{
		// m_DeferredCompleteCallbacks.Add(op);
		List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* L_10 = __this->___m_DeferredCompleteCallbacks_9;
		RuntimeObject* L_11 = ___0_op;
		NullCheck(L_10);
		List_1_Add_mD29375DC691B22BB5FAF7730F821BE78564E3121_inline(L_10, L_11, List_1_Add_mD29375DC691B22BB5FAF7730F821BE78564E3121_RuntimeMethod_var);
		// RegisterForCallbacks();
		ResourceManager_RegisterForCallbacks_m805F04D79BF5BFF608E92C029378AA498A0966E6(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, float ___0_unscaledDeltaTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateList_1_Invoke_mFB21D7BA92CFEAA67905C35AAD3291DE4557CD8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA302D5AD9BA1CAA03E24A9290D22DFC23C0CCCF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD14575CCF3C2A116C2F5722F6A6C812F1B8A4208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m510C271E5E816200C5A7B15ECAF2ACA1C5D18850_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8BA038D71CA239DE45DF14F2C813EAB1CE665247_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m55AE98E914EAE503C9C49320301DC9D381D3FA6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9471395F103D524184B9C3431F6720602406AC65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUpdateReceiver_tCE1ECC31330B7BBF10BD42EEEF23DA08B9F49154_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListWithEvents_1_Remove_m3A98835CC0666BDD435BE0E1CCA7F919202DDF91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListWithEvents_1_get_Count_m54916F3A852ACE2E85ABCA0267C984ACCDCABB84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListWithEvents_1_get_Item_m40ED7F3FE796F695454AEFD5C5684D5CD0371B4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m313491CB8382194A660D52F138BFC51642403F09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m564CB69E4A076D1B353881952DCCDD2AE019A03A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (m_InsideUpdateMethod)
		bool L_0 = __this->___m_InsideUpdateMethod_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new Exception("Reentering the Update method is not allowed.  This can happen when calling WaitForCompletion on an operation while inside of a callback.");
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9A0359BACB67159E4781CB3F47FB9DBDCD3466E5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C_RuntimeMethod_var)));
	}

IL_0013:
	{
		// m_InsideUpdateMethod = true;
		__this->___m_InsideUpdateMethod_6 = (bool)1;
		// m_UpdateCallbacks.Invoke(unscaledDeltaTime);
		DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* L_2 = __this->___m_UpdateCallbacks_8;
		float L_3 = ___0_unscaledDeltaTime;
		NullCheck(L_2);
		DelegateList_1_Invoke_mFB21D7BA92CFEAA67905C35AAD3291DE4557CD8A(L_2, L_3, DelegateList_1_Invoke_mFB21D7BA92CFEAA67905C35AAD3291DE4557CD8A_RuntimeMethod_var);
		// m_UpdatingReceivers = true;
		__this->___m_UpdatingReceivers_5 = (bool)1;
		// for (int i = 0; i < m_UpdateReceivers.Count; i++)
		V_0 = 0;
		goto IL_0047;
	}

IL_0031:
	{
		// m_UpdateReceivers[i].Update(unscaledDeltaTime);
		ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* L_4 = __this->___m_UpdateReceivers_3;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = ListWithEvents_1_get_Item_m40ED7F3FE796F695454AEFD5C5684D5CD0371B4B(L_4, L_5, ListWithEvents_1_get_Item_m40ED7F3FE796F695454AEFD5C5684D5CD0371B4B_RuntimeMethod_var);
		float L_7 = ___0_unscaledDeltaTime;
		NullCheck(L_6);
		InterfaceActionInvoker1< float >::Invoke(0 /* System.Void UnityEngine.ResourceManagement.IUpdateReceiver::Update(System.Single) */, IUpdateReceiver_tCE1ECC31330B7BBF10BD42EEEF23DA08B9F49154_il2cpp_TypeInfo_var, L_6, L_7);
		// for (int i = 0; i < m_UpdateReceivers.Count; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0047:
	{
		// for (int i = 0; i < m_UpdateReceivers.Count; i++)
		int32_t L_9 = V_0;
		ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* L_10 = __this->___m_UpdateReceivers_3;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = ListWithEvents_1_get_Count_m54916F3A852ACE2E85ABCA0267C984ACCDCABB84(L_10, ListWithEvents_1_get_Count_m54916F3A852ACE2E85ABCA0267C984ACCDCABB84_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0031;
		}
	}
	{
		// m_UpdatingReceivers = false;
		__this->___m_UpdatingReceivers_5 = (bool)0;
		// if (m_UpdateReceiversToRemove != null)
		List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1* L_12 = __this->___m_UpdateReceiversToRemove_4;
		if (!L_12)
		{
			goto IL_00a7;
		}
	}
	{
		// foreach (var r in m_UpdateReceiversToRemove)
		List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1* L_13 = __this->___m_UpdateReceiversToRemove_4;
		NullCheck(L_13);
		Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E L_14;
		L_14 = List_1_GetEnumerator_m313491CB8382194A660D52F138BFC51642403F09(L_13, List_1_GetEnumerator_m313491CB8382194A660D52F138BFC51642403F09_RuntimeMethod_var);
		V_1 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0092:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD14575CCF3C2A116C2F5722F6A6C812F1B8A4208((&V_1), Enumerator_Dispose_mD14575CCF3C2A116C2F5722F6A6C812F1B8A4208_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0087_1;
			}

IL_0072_1:
			{
				// foreach (var r in m_UpdateReceiversToRemove)
				RuntimeObject* L_15;
				L_15 = Enumerator_get_Current_m55AE98E914EAE503C9C49320301DC9D381D3FA6D_inline((&V_1), Enumerator_get_Current_m55AE98E914EAE503C9C49320301DC9D381D3FA6D_RuntimeMethod_var);
				V_2 = L_15;
				// m_UpdateReceivers.Remove(r);
				ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* L_16 = __this->___m_UpdateReceivers_3;
				RuntimeObject* L_17 = V_2;
				NullCheck(L_16);
				bool L_18;
				L_18 = ListWithEvents_1_Remove_m3A98835CC0666BDD435BE0E1CCA7F919202DDF91(L_16, L_17, ListWithEvents_1_Remove_m3A98835CC0666BDD435BE0E1CCA7F919202DDF91_RuntimeMethod_var);
			}

IL_0087_1:
			{
				// foreach (var r in m_UpdateReceiversToRemove)
				bool L_19;
				L_19 = Enumerator_MoveNext_m510C271E5E816200C5A7B15ECAF2ACA1C5D18850((&V_1), Enumerator_MoveNext_m510C271E5E816200C5A7B15ECAF2ACA1C5D18850_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0072_1;
				}
			}
			{
				goto IL_00a0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a0:
	{
		// m_UpdateReceiversToRemove = null;
		__this->___m_UpdateReceiversToRemove_4 = (List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UpdateReceiversToRemove_4), (void*)(List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1*)NULL);
	}

IL_00a7:
	{
		// if (m_DeferredCallbacksToRegister != null)
		List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* L_20 = __this->___m_DeferredCallbacksToRegister_11;
		if (!L_20)
		{
			goto IL_00fa;
		}
	}
	{
		// foreach (DeferredCallbackRegisterRequest callback in m_DeferredCallbacksToRegister)
		List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* L_21 = __this->___m_DeferredCallbacksToRegister_11;
		NullCheck(L_21);
		Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676 L_22;
		L_22 = List_1_GetEnumerator_m564CB69E4A076D1B353881952DCCDD2AE019A03A(L_21, List_1_GetEnumerator_m564CB69E4A076D1B353881952DCCDD2AE019A03A_RuntimeMethod_var);
		V_3 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e5:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA302D5AD9BA1CAA03E24A9290D22DFC23C0CCCF8((&V_3), Enumerator_Dispose_mA302D5AD9BA1CAA03E24A9290D22DFC23C0CCCF8_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00da_1;
			}

IL_00bd_1:
			{
				// foreach (DeferredCallbackRegisterRequest callback in m_DeferredCallbacksToRegister)
				DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD L_23;
				L_23 = Enumerator_get_Current_m9471395F103D524184B9C3431F6720602406AC65_inline((&V_3), Enumerator_get_Current_m9471395F103D524184B9C3431F6720602406AC65_RuntimeMethod_var);
				V_4 = L_23;
				// RegisterForDeferredCallback(callback.operation, callback.incrementRefCount);
				DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD L_24 = V_4;
				RuntimeObject* L_25 = L_24.___operation_0;
				DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD L_26 = V_4;
				bool L_27 = L_26.___incrementRefCount_1;
				ResourceManager_RegisterForDeferredCallback_m05889AD5E7D950770177A9B2920B4736546B0225(__this, L_25, L_27, NULL);
			}

IL_00da_1:
			{
				// foreach (DeferredCallbackRegisterRequest callback in m_DeferredCallbacksToRegister)
				bool L_28;
				L_28 = Enumerator_MoveNext_m8BA038D71CA239DE45DF14F2C813EAB1CE665247((&V_3), Enumerator_MoveNext_m8BA038D71CA239DE45DF14F2C813EAB1CE665247_RuntimeMethod_var);
				if (L_28)
				{
					goto IL_00bd_1;
				}
			}
			{
				goto IL_00f3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f3:
	{
		// m_DeferredCallbacksToRegister = null;
		__this->___m_DeferredCallbacksToRegister_11 = (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DeferredCallbacksToRegister_11), (void*)(List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307*)NULL);
	}

IL_00fa:
	{
		// ExecuteDeferredCallbacks();
		ResourceManager_ExecuteDeferredCallbacks_m7BB2468360D4AAF86E437E93E9D52E134AE4AA7F(__this, NULL);
		// m_InsideUpdateMethod = false;
		__this->___m_InsideUpdateMethod_6 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager__cctor_m2C88F867A5BFC4F01082256E7775C5459C60577E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static int s_GroupOperationTypeHash = typeof(GroupOperation).GetHashCode();
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		((ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var))->___s_GroupOperationTypeHash_14 = L_2;
		// static int s_InstanceOperationTypeHash = typeof(InstanceOperation).GetHashCode();
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		((ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var))->___s_InstanceOperationTypeHash_15 = L_5;
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


// Conversion methods for marshalling of: UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext
IL2CPP_EXTERN_C void DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshal_pinvoke(const DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F& unmarshaled, DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3COperationHandleU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<OperationHandle>k__BackingField' of type 'DiagnosticEventContext'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3COperationHandleU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshal_pinvoke_back(const DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshaled_pinvoke& marshaled, DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F& unmarshaled)
{
	Exception_t* ___U3COperationHandleU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<OperationHandle>k__BackingField' of type 'DiagnosticEventContext'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3COperationHandleU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext
IL2CPP_EXTERN_C void DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshal_pinvoke_cleanup(DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext
IL2CPP_EXTERN_C void DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshal_com(const DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F& unmarshaled, DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshaled_com& marshaled)
{
	Exception_t* ___U3COperationHandleU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<OperationHandle>k__BackingField' of type 'DiagnosticEventContext'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3COperationHandleU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshal_com_back(const DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshaled_com& marshaled, DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F& unmarshaled)
{
	Exception_t* ___U3COperationHandleU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<OperationHandle>k__BackingField' of type 'DiagnosticEventContext'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3COperationHandleU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext
IL2CPP_EXTERN_C void DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshal_com_cleanup(DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshaled_com& marshaled)
{
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::get_OperationHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D DiagnosticEventContext_get_OperationHandle_mC766CD6C074CD2A0E3486FD41CE0B951B25B3FA6 (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) 
{
	{
		// public AsyncOperationHandle OperationHandle { get; }
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_0 = __this->___U3COperationHandleU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D DiagnosticEventContext_get_OperationHandle_mC766CD6C074CD2A0E3486FD41CE0B951B25B3FA6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F*>(__this + _offset);
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D _returnValue;
	_returnValue = DiagnosticEventContext_get_OperationHandle_mC766CD6C074CD2A0E3486FD41CE0B951B25B3FA6_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiagnosticEventContext_get_Type_mF65C73B3A0D1958041136121E877B4AF9ECFCEBB (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) 
{
	{
		// public DiagnosticEventType Type { get; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t DiagnosticEventContext_get_Type_mF65C73B3A0D1958041136121E877B4AF9ECFCEBB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DiagnosticEventContext_get_Type_mF65C73B3A0D1958041136121E877B4AF9ECFCEBB_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::get_EventValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiagnosticEventContext_get_EventValue_m1109E4CB1BFA64FEDC13FF72B293B68DA2D0A94F (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) 
{
	{
		// public int EventValue { get; }
		int32_t L_0 = __this->___U3CEventValueU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t DiagnosticEventContext_get_EventValue_m1109E4CB1BFA64FEDC13FF72B293B68DA2D0A94F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DiagnosticEventContext_get_EventValue_m1109E4CB1BFA64FEDC13FF72B293B68DA2D0A94F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Object UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagnosticEventContext_get_Context_m8DC1C15D121AD87B29AE6FAF53B6797221E2224B (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) 
{
	{
		// public object Context { get; }
		RuntimeObject* L_0 = __this->___U3CContextU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DiagnosticEventContext_get_Context_m8DC1C15D121AD87B29AE6FAF53B6797221E2224B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = DiagnosticEventContext_get_Context_m8DC1C15D121AD87B29AE6FAF53B6797221E2224B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DiagnosticEventContext_get_Error_m1BCCCD62C4402CD13F6E0E071111AF0BEEA00BD3 (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) 
{
	{
		// public string Error { get; }
		String_t* L_0 = __this->___U3CErrorU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* DiagnosticEventContext_get_Error_m1BCCCD62C4402CD13F6E0E071111AF0BEEA00BD3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = DiagnosticEventContext_get_Error_m1BCCCD62C4402CD13F6E0E071111AF0BEEA00BD3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::.ctor(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType,System.Int32,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventContext__ctor_m14E2DE6A37749D242E166A1CA6B94AC0F99D4C51 (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___0_op, int32_t ___1_type, int32_t ___2_eventValue, String_t* ___3_error, RuntimeObject* ___4_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* G_B2_0 = NULL;
	DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* G_B1_0 = NULL;
	DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* G_B3_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* G_B4_1 = NULL;
	{
		// OperationHandle = op;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_0 = ___0_op;
		__this->___U3COperationHandleU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3COperationHandleU3Ek__BackingField_0))->___m_InternalOp_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3COperationHandleU3Ek__BackingField_0))->___m_LocationName_2), (void*)NULL);
		#endif
		// Type = type;
		int32_t L_1 = ___1_type;
		__this->___U3CTypeU3Ek__BackingField_1 = L_1;
		// EventValue = eventValue;
		int32_t L_2 = ___2_eventValue;
		__this->___U3CEventValueU3Ek__BackingField_2 = L_2;
		// Location = op.m_InternalOp != null && op.m_InternalOp is IGenericProviderOperation gen
		//     ? gen.Location
		//     : null;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_3 = ___0_op;
		RuntimeObject* L_4 = L_3.___m_InternalOp_0;
		G_B1_0 = __this;
		if (!L_4)
		{
			G_B2_0 = __this;
			goto IL_002d;
		}
	}
	{
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_5 = ___0_op;
		RuntimeObject* L_6 = L_5.___m_InternalOp_0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = V_0;
		G_B2_0 = G_B1_0;
		if (L_7)
		{
			G_B3_0 = G_B1_0;
			goto IL_0030;
		}
	}

IL_002d:
	{
		G_B4_0 = ((RuntimeObject*)(NULL));
		G_B4_1 = G_B2_0;
		goto IL_0036;
	}

IL_0030:
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation::get_Location() */, IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var, L_8);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_0;
	}

IL_0036:
	{
		G_B4_1->___U3CLocationU3Ek__BackingField_3 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___U3CLocationU3Ek__BackingField_3), (void*)G_B4_0);
		// Error = error;
		String_t* L_10 = ___3_error;
		__this->___U3CErrorU3Ek__BackingField_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorU3Ek__BackingField_5), (void*)L_10);
		// Context = context;
		RuntimeObject* L_11 = ___4_context;
		__this->___U3CContextU3Ek__BackingField_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContextU3Ek__BackingField_4), (void*)L_11);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DiagnosticEventContext__ctor_m14E2DE6A37749D242E166A1CA6B94AC0F99D4C51_AdjustorThunk (RuntimeObject* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___0_op, int32_t ___1_type, int32_t ___2_eventValue, String_t* ___3_error, RuntimeObject* ___4_context, const RuntimeMethod* method)
{
	DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F*>(__this + _offset);
	DiagnosticEventContext__ctor_m14E2DE6A37749D242E166A1CA6B94AC0F99D4C51(_thisAdjusted, ___0_op, ___1_type, ___2_eventValue, ___3_error, ___4_context, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest
IL2CPP_EXTERN_C void DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshal_pinvoke(const DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD& unmarshaled, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshaled_pinvoke& marshaled)
{
	Exception_t* ___operation_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'operation' of type 'DeferredCallbackRegisterRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___operation_0Exception, NULL);
}
IL2CPP_EXTERN_C void DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshal_pinvoke_back(const DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshaled_pinvoke& marshaled, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD& unmarshaled)
{
	Exception_t* ___operation_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'operation' of type 'DeferredCallbackRegisterRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___operation_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest
IL2CPP_EXTERN_C void DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshal_pinvoke_cleanup(DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest
IL2CPP_EXTERN_C void DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshal_com(const DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD& unmarshaled, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshaled_com& marshaled)
{
	Exception_t* ___operation_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'operation' of type 'DeferredCallbackRegisterRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___operation_0Exception, NULL);
}
IL2CPP_EXTERN_C void DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshal_com_back(const DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshaled_com& marshaled, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD& unmarshaled)
{
	Exception_t* ___operation_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'operation' of type 'DeferredCallbackRegisterRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___operation_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest
IL2CPP_EXTERN_C void DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshal_com_cleanup(DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ResourceManagement.ResourceManager/InstanceOperation::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstanceOperation_Execute_m01F6E265405DD013116E1C90C2B2CD1F713411EE (InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_Complete_m9541DA0DF79E49EB30A8D94F916CD30BFCCF6535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_OperationException_mEBD2EA7D831F4DE48EB1B851F2E690179A2AD21F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_Status_mD78FF172C6BBCB662A9079992F40FDE886C46D22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInstanceProvider_t6AD5AE64CB95B873B111117A37B8D967FC67FA37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral070CAE9ABBC9921BAD35C84FEBF95454A66D9532);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	{
		// Exception e = m_dependency.OperationException;
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA* L_0 = (AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA*)(&__this->___m_dependency_17);
		Exception_t* L_1;
		L_1 = AsyncOperationHandle_1_get_OperationException_mEBD2EA7D831F4DE48EB1B851F2E690179A2AD21F(L_0, AsyncOperationHandle_1_get_OperationException_mEBD2EA7D831F4DE48EB1B851F2E690179A2AD21F_RuntimeMethod_var);
		V_0 = L_1;
		// if (m_dependency.Status == AsyncOperationStatus.Succeeded)
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA* L_2 = (AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA*)(&__this->___m_dependency_17);
		int32_t L_3;
		L_3 = AsyncOperationHandle_1_get_Status_mD78FF172C6BBCB662A9079992F40FDE886C46D22(L_2, AsyncOperationHandle_1_get_Status_mD78FF172C6BBCB662A9079992F40FDE886C46D22_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		// m_instance = m_instanceProvider.ProvideInstance(m_RM, m_dependency, m_instantiationParams);
		RuntimeObject* L_4 = __this->___m_instanceProvider_19;
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_5 = ((AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16*)__this)->___m_RM_4;
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_6 = __this->___m_dependency_17;
		InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669 L_7 = __this->___m_instantiationParams_18;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = InterfaceFuncInvoker3< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D*, AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA, InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669 >::Invoke(0 /* UnityEngine.GameObject UnityEngine.ResourceManagement.ResourceProviders.IInstanceProvider::ProvideInstance(UnityEngine.ResourceManagement.ResourceManager,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>,UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters) */, IInstanceProvider_t6AD5AE64CB95B873B111117A37B8D967FC67FA37_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7);
		__this->___m_instance_20 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_instance_20), (void*)L_8);
		// if (m_instance != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___m_instance_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_005c;
		}
	}
	{
		// m_scene = m_instance.scene;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_instance_20;
		NullCheck(L_11);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_12;
		L_12 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_11, NULL);
		__this->___m_scene_21 = L_12;
	}

IL_005c:
	{
		// Complete(m_instance, true, null);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_instance_20;
		AsyncOperationBase_1_Complete_m9541DA0DF79E49EB30A8D94F916CD30BFCCF6535(__this, L_13, (bool)1, (String_t*)NULL, AsyncOperationBase_1_Complete_m9541DA0DF79E49EB30A8D94F916CD30BFCCF6535_RuntimeMethod_var);
		return;
	}

IL_006b:
	{
		// Complete(m_instance, false, string.Format("Dependency operation failed with {0}.", e));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___m_instance_20;
		Exception_t* L_15 = V_0;
		String_t* L_16;
		L_16 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral070CAE9ABBC9921BAD35C84FEBF95454A66D9532, L_15, NULL);
		AsyncOperationBase_1_Complete_m9541DA0DF79E49EB30A8D94F916CD30BFCCF6535(__this, L_14, (bool)0, L_16, AsyncOperationBase_1_Complete_m9541DA0DF79E49EB30A8D94F916CD30BFCCF6535_RuntimeMethod_var);
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
// System.Void UnityEngine.ResourceManagement.Exceptions.OperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationException__ctor_m86A0486864C0BBA58E2688D3FB650CAB1D616D59 (OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public OperationException(string message, Exception innerException = null) : base(message, innerException)
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_innerException;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.String UnityEngine.ResourceManagement.Exceptions.OperationException::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OperationException_ToString_m8544F18BF5A2A8B6194DBF46F672DB8C128AA34D (OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A60C15B3F3484BC0138C5410F143D1EA05CA01D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{GetType().Name} : {base.Message}\n{InnerException}";
		Type_t* L_0;
		L_0 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = Exception_get_Message_mCFE0D38FDF9001405299AAE43BBE2A9AD806C441(__this, NULL);
		Exception_t* L_3;
		L_3 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(__this, NULL);
		String_t* L_4;
		L_4 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral8A60C15B3F3484BC0138C5410F143D1EA05CA01D, L_1, L_2, L_3, NULL);
		return L_4;
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
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters
IL2CPP_EXTERN_C void InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshal_pinvoke(const InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669& unmarshaled, InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Parent_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Parent' of type 'InstantiationParameters': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Parent_2Exception, NULL);
}
IL2CPP_EXTERN_C void InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshal_pinvoke_back(const InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshaled_pinvoke& marshaled, InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669& unmarshaled)
{
	Exception_t* ___m_Parent_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Parent' of type 'InstantiationParameters': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Parent_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters
IL2CPP_EXTERN_C void InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshal_pinvoke_cleanup(InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters
IL2CPP_EXTERN_C void InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshal_com(const InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669& unmarshaled, InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshaled_com& marshaled)
{
	Exception_t* ___m_Parent_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Parent' of type 'InstantiationParameters': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Parent_2Exception, NULL);
}
IL2CPP_EXTERN_C void InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshal_com_back(const InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshaled_com& marshaled, InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669& unmarshaled)
{
	Exception_t* ___m_Parent_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Parent' of type 'InstantiationParameters': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Parent_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters
IL2CPP_EXTERN_C void InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshal_com_cleanup(InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
IL2CPP_EXTERN_C void ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshal_pinvoke(const ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631& unmarshaled, ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_InternalOp_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_InternalOp' of type 'ProvideHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_InternalOp_1Exception, NULL);
}
IL2CPP_EXTERN_C void ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshal_pinvoke_back(const ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_pinvoke& marshaled, ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631& unmarshaled)
{
	Exception_t* ___m_InternalOp_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_InternalOp' of type 'ProvideHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_InternalOp_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
IL2CPP_EXTERN_C void ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshal_pinvoke_cleanup(ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
IL2CPP_EXTERN_C void ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshal_com(const ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631& unmarshaled, ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_com& marshaled)
{
	Exception_t* ___m_InternalOp_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_InternalOp' of type 'ProvideHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_InternalOp_1Exception, NULL);
}
IL2CPP_EXTERN_C void ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshal_com_back(const ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_com& marshaled, ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631& unmarshaled)
{
	Exception_t* ___m_InternalOp_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_InternalOp' of type 'ProvideHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_InternalOp_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
IL2CPP_EXTERN_C void ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshal_com_cleanup(ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::.ctor(UnityEngine.ResourceManagement.ResourceManager,UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProvideHandle__ctor_m747E40C8B08DBF3EB4276D7B0836C0F0D5B59B0A (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___0_rm, RuntimeObject* ___1_op, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ResourceManager = rm;
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_0 = ___0_rm;
		__this->___m_ResourceManager_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ResourceManager_2), (void*)L_0);
		// m_InternalOp = op;
		RuntimeObject* L_1 = ___1_op;
		__this->___m_InternalOp_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalOp_1), (void*)L_1);
		// m_Version = op.ProvideHandleVersion;
		RuntimeObject* L_2 = ___1_op;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation::get_ProvideHandleVersion() */, IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var, L_2);
		__this->___m_Version_0 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ProvideHandle__ctor_m747E40C8B08DBF3EB4276D7B0836C0F0D5B59B0A_AdjustorThunk (RuntimeObject* __this, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___0_rm, RuntimeObject* ___1_op, const RuntimeMethod* method)
{
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631*>(__this + _offset);
	ProvideHandle__ctor_m747E40C8B08DBF3EB4276D7B0836C0F0D5B59B0A(_thisAdjusted, ___0_rm, ___1_op, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_pinvoke(const AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D& unmarshaled, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_InternalOp_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_InternalOp' of type 'AsyncOperationHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_InternalOp_0Exception, NULL);
}
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_pinvoke_back(const AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke& marshaled, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D& unmarshaled)
{
	Exception_t* ___m_InternalOp_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_InternalOp' of type 'AsyncOperationHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_InternalOp_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_pinvoke_cleanup(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_com(const AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D& unmarshaled, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com& marshaled)
{
	Exception_t* ___m_InternalOp_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_InternalOp' of type 'AsyncOperationHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_InternalOp_0Exception, NULL);
}
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_com_back(const AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com& marshaled, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D& unmarshaled)
{
	Exception_t* ___m_InternalOp_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_InternalOp' of type 'AsyncOperationHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_InternalOp_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_com_cleanup(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::.ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle__ctor_m68E6B69581AD8F879FE27693A96D6F36ABD3A264 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, RuntimeObject* ___0_op, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* G_B2_0 = NULL;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* G_B3_1 = NULL;
	{
		// m_InternalOp = op;
		RuntimeObject* L_0 = ___0_op;
		__this->___m_InternalOp_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalOp_0), (void*)L_0);
		// m_Version = op?.Version ?? 0;
		RuntimeObject* L_1 = ___0_op;
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_op;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_Version() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		G_B3_1->___m_Version_1 = G_B3_0;
		// m_LocationName = null;
		__this->___m_LocationName_2 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocationName_2), (void*)(String_t*)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle__ctor_m68E6B69581AD8F879FE27693A96D6F36ABD3A264_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_op, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle__ctor_m68E6B69581AD8F879FE27693A96D6F36ABD3A264(_thisAdjusted, ___0_op, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::.ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle__ctor_m40A34479B55F7F00CB5DF17F1003A38B12D0A51A (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, RuntimeObject* ___0_op, int32_t ___1_version, String_t* ___2_locationName, const RuntimeMethod* method) 
{
	{
		// m_InternalOp = op;
		RuntimeObject* L_0 = ___0_op;
		__this->___m_InternalOp_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalOp_0), (void*)L_0);
		// m_Version = version;
		int32_t L_1 = ___1_version;
		__this->___m_Version_1 = L_1;
		// m_LocationName = locationName;
		String_t* L_2 = ___2_locationName;
		__this->___m_LocationName_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocationName_2), (void*)L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle__ctor_m40A34479B55F7F00CB5DF17F1003A38B12D0A51A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_op, int32_t ___1_version, String_t* ___2_locationName, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle__ctor_m40A34479B55F7F00CB5DF17F1003A38B12D0A51A(_thisAdjusted, ___0_op, ___1_version, ___2_locationName, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::add_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_add_Completed_mD5633623ADF00C97B6A1EE712E6654452F64B2E0 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// add { InternalOp.CompletedTypeless += value; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* >::Invoke(7 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::add_CompletedTypeless(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>) */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0, L_1);
		// add { InternalOp.CompletedTypeless += value; }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle_add_Completed_mD5633623ADF00C97B6A1EE712E6654452F64B2E0_AdjustorThunk (RuntimeObject* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___0_value, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_add_Completed_mD5633623ADF00C97B6A1EE712E6654452F64B2E0(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::remove_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_remove_Completed_m538FFC6655C8FB0600775FFFB998D9903478DB44 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remove { InternalOp.CompletedTypeless -= value; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* >::Invoke(8 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::remove_CompletedTypeless(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>) */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0, L_1);
		// remove { InternalOp.CompletedTypeless -= value; }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle_remove_Completed_m538FFC6655C8FB0600775FFFB998D9903478DB44_AdjustorThunk (RuntimeObject* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___0_value, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_remove_Completed_m538FFC6655C8FB0600775FFFB998D9903478DB44(_thisAdjusted, ___0_value, method);
}
// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperationHandle_GetHashCode_mA261FCCE8588545912EAD2AC611FADD3F104DF15 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	{
		// return m_InternalOp == null ? 0 : m_InternalOp.GetHashCode() * 17 + m_Version;
		RuntimeObject* L_0 = __this->___m_InternalOp_0;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = __this->___m_InternalOp_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		int32_t L_3 = __this->___m_Version_1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)17))), L_3));
	}

IL_001e:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t AsyncOperationHandle_GetHashCode_mA261FCCE8588545912EAD2AC611FADD3F104DF15_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AsyncOperationHandle_GetHashCode_mA261FCCE8588545912EAD2AC611FADD3F104DF15(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_InternalOp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_InternalOp == null || m_InternalOp.Version != m_Version)
		RuntimeObject* L_0 = __this->___m_InternalOp_0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->___m_InternalOp_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_Version() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = __this->___m_Version_1;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0026;
		}
	}

IL_001b:
	{
		// throw new Exception("Attempting to use an invalid operation handle");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5545562CB57BB8E6D1204C7308B5206ED7661CE4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C_RuntimeMethod_var)));
	}

IL_0026:
	{
		// return m_InternalOp;
		RuntimeObject* L_5 = __this->___m_InternalOp_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return !IsValid() || InternalOp.IsDone; }
		bool L_0;
		L_0 = AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_IsDone() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	bool _returnValue;
	_returnValue = AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_InternalOp != null && m_InternalOp.Version == m_Version;
		RuntimeObject* L_0 = __this->___m_InternalOp_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = __this->___m_InternalOp_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_Version() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = __this->___m_Version_1;
		return (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
	}

IL_001c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	bool _returnValue;
	_returnValue = AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626(_thisAdjusted, method);
	return _returnValue;
}
// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_OperationException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* AsyncOperationHandle_get_OperationException_m531FC4DC2E215075C0EA7CE135FF1D68F6049270 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return InternalOp.OperationException; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_0);
		Exception_t* L_1;
		L_1 = InterfaceFuncInvoker0< Exception_t* >::Invoke(5 /* System.Exception UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_OperationException() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Exception_t* AsyncOperationHandle_get_OperationException_m531FC4DC2E215075C0EA7CE135FF1D68F6049270_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	Exception_t* _returnValue;
	_returnValue = AsyncOperationHandle_get_OperationException_m531FC4DC2E215075C0EA7CE135FF1D68F6049270(_thisAdjusted, method);
	return _returnValue;
}
// System.Object UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return InternalOp.GetResultAsObject(); }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Object UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::GetResultAsObject() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperationHandle_get_Status_mD5FB502808777A3C88880942DB9595C614CF9B0A (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return InternalOp.Status; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_Status() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t AsyncOperationHandle_get_Status_mD5FB502808777A3C88880942DB9595C614CF9B0A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AsyncOperationHandle_get_Status_mD5FB502808777A3C88880942DB9595C614CF9B0A(_thisAdjusted, method);
	return _returnValue;
}
// System.Object UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_System_Collections_IEnumerator_get_Current_mBAF3C14B4A6BD17BBBE6663D0061A1DD42E8FE37 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	{
		// get { return Result; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* AsyncOperationHandle_System_Collections_IEnumerator_get_Current_mBAF3C14B4A6BD17BBBE6663D0061A1DD42E8FE37_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = AsyncOperationHandle_System_Collections_IEnumerator_get_Current_mBAF3C14B4A6BD17BBBE6663D0061A1DD42E8FE37(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_System_Collections_IEnumerator_MoveNext_m8A793FA1EEE2DAAD8B74F95FFEC60D94B9B8610E (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	{
		// return !IsDone;
		bool L_0;
		L_0 = AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A(__this, NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool AsyncOperationHandle_System_Collections_IEnumerator_MoveNext_m8A793FA1EEE2DAAD8B74F95FFEC60D94B9B8610E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	bool _returnValue;
	_returnValue = AsyncOperationHandle_System_Collections_IEnumerator_MoveNext_m8A793FA1EEE2DAAD8B74F95FFEC60D94B9B8610E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_System_Collections_IEnumerator_Reset_m8921AB145EB1F53FD4352BE9E512505719FE6527 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle_System_Collections_IEnumerator_Reset_m8921AB145EB1F53FD4352BE9E512505719FE6527_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_System_Collections_IEnumerator_Reset_m8921AB145EB1F53FD4352BE9E512505719FE6527(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
IL2CPP_EXTERN_C void DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshal_pinvoke(const DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D& unmarshaled, DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_pinvoke& marshaled)
{
	marshaled.___TotalBytes_0 = unmarshaled.___TotalBytes_0;
	marshaled.___DownloadedBytes_1 = unmarshaled.___DownloadedBytes_1;
	marshaled.___IsDone_2 = static_cast<int32_t>(unmarshaled.___IsDone_2);
}
IL2CPP_EXTERN_C void DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshal_pinvoke_back(const DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_pinvoke& marshaled, DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D& unmarshaled)
{
	int64_t unmarshaledTotalBytes_temp_0 = 0;
	unmarshaledTotalBytes_temp_0 = marshaled.___TotalBytes_0;
	unmarshaled.___TotalBytes_0 = unmarshaledTotalBytes_temp_0;
	int64_t unmarshaledDownloadedBytes_temp_1 = 0;
	unmarshaledDownloadedBytes_temp_1 = marshaled.___DownloadedBytes_1;
	unmarshaled.___DownloadedBytes_1 = unmarshaledDownloadedBytes_temp_1;
	bool unmarshaledIsDone_temp_2 = false;
	unmarshaledIsDone_temp_2 = static_cast<bool>(marshaled.___IsDone_2);
	unmarshaled.___IsDone_2 = unmarshaledIsDone_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
IL2CPP_EXTERN_C void DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshal_pinvoke_cleanup(DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
IL2CPP_EXTERN_C void DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshal_com(const DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D& unmarshaled, DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_com& marshaled)
{
	marshaled.___TotalBytes_0 = unmarshaled.___TotalBytes_0;
	marshaled.___DownloadedBytes_1 = unmarshaled.___DownloadedBytes_1;
	marshaled.___IsDone_2 = static_cast<int32_t>(unmarshaled.___IsDone_2);
}
IL2CPP_EXTERN_C void DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshal_com_back(const DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_com& marshaled, DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D& unmarshaled)
{
	int64_t unmarshaledTotalBytes_temp_0 = 0;
	unmarshaledTotalBytes_temp_0 = marshaled.___TotalBytes_0;
	unmarshaled.___TotalBytes_0 = unmarshaledTotalBytes_temp_0;
	int64_t unmarshaledDownloadedBytes_temp_1 = 0;
	unmarshaledDownloadedBytes_temp_1 = marshaled.___DownloadedBytes_1;
	unmarshaled.___DownloadedBytes_1 = unmarshaledDownloadedBytes_temp_1;
	bool unmarshaledIsDone_temp_2 = false;
	unmarshaledIsDone_temp_2 = static_cast<bool>(marshaled.___IsDone_2);
	unmarshaled.___IsDone_2 = unmarshaledIsDone_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
IL2CPP_EXTERN_C void DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshal_com_cleanup(DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.ResourceManagement.Util.IOperationCacheKey UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::UnityEngine.ResourceManagement.AsyncOperations.ICachable.get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GroupOperation_UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key_mBE090D49C1F51ACDEB43492606BD9BEEC3E0DC43 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) 
{
	{
		// IOperationCacheKey ICachable.Key { get; set; }
		RuntimeObject* L_0 = __this->___U3CUnityEngine_ResourceManagement_AsyncOperations_ICachable_KeyU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation_Execute_mDACD8D19DE8A2916CC5D12093AC39E7709C826DD (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// m_LoadedCount = 0;
		__this->___m_LoadedCount_18 = 0;
		// for (int i = 0; i < Result.Count; i++)
		V_0 = 0;
		goto IL_004f;
	}

IL_000b:
	{
		// if (Result[i].IsDone)
		RuntimeObject* L_0;
		L_0 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_2;
		L_2 = InterfaceFuncInvoker1< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Item(System.Int32) */, IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var, L_0, L_1);
		V_1 = L_2;
		bool L_3;
		L_3 = AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A((&V_1), NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// m_LoadedCount++;
		int32_t L_4 = __this->___m_LoadedCount_18;
		__this->___m_LoadedCount_18 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		goto IL_004b;
	}

IL_0031:
	{
		// Result[i].Completed += m_InternalOnComplete;
		RuntimeObject* L_5;
		L_5 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_7;
		L_7 = InterfaceFuncInvoker1< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Item(System.Int32) */, IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var, L_5, L_6);
		V_1 = L_7;
		Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* L_8 = __this->___m_InternalOnComplete_17;
		AsyncOperationHandle_add_Completed_mD5633623ADF00C97B6A1EE712E6654452F64B2E0((&V_1), L_8, NULL);
	}

IL_004b:
	{
		// for (int i = 0; i < Result.Count; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_004f:
	{
		// for (int i = 0; i < Result.Count; i++)
		int32_t L_10 = V_0;
		RuntimeObject* L_11;
		L_11 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Count() */, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, L_11);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_000b;
		}
	}
	{
		// CompleteIfDependenciesComplete();
		GroupOperation_CompleteIfDependenciesComplete_m0CBDC4B0BC6DEB0F32D2E9884F99D6EA4FBFD346(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::CompleteIfDependenciesComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation_CompleteIfDependenciesComplete_m0CBDC4B0BC6DEB0F32D2E9884F99D6EA4FBFD346 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_Complete_m34BA93C8DD45D0DDA01AD80F3B3E13AD552B24C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral820BFB423CB8C20E825524A0B74585E3BEEC752B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434* V_1 = NULL;
	int32_t V_2 = 0;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (m_LoadedCount == Result.Count)
		int32_t L_0 = __this->___m_LoadedCount_18;
		RuntimeObject* L_1;
		L_1 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Count() */, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_00a6;
		}
	}
	{
		// bool success = true;
		V_0 = (bool)1;
		// OperationException ex = null;
		V_1 = (OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434*)NULL;
		// if (!m_Settings.HasFlag(GroupOperationSettings.AllowFailedDependencies))
		int32_t L_3 = __this->___m_Settings_19;
		int32_t L_4 = L_3;
		int32_t L_5 = 2;
		bool L_6 = il2cpp_codegen_enum_has_flag((int32_t)L_4, (int32_t)L_5);
		if (L_6)
		{
			goto IL_0082;
		}
	}
	{
		// for (int i = 0; i < Result.Count; i++)
		V_2 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		// if (Result[i].Status != AsyncOperationStatus.Succeeded)
		RuntimeObject* L_7;
		L_7 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		int32_t L_8 = V_2;
		NullCheck(L_7);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_9;
		L_9 = InterfaceFuncInvoker1< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Item(System.Int32) */, IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var, L_7, L_8);
		V_3 = L_9;
		int32_t L_10;
		L_10 = AsyncOperationHandle_get_Status_mD5FB502808777A3C88880942DB9595C614CF9B0A((&V_3), NULL);
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_0070;
		}
	}
	{
		// success = false;
		V_0 = (bool)0;
		// ex = new OperationException("GroupOperation failed because one of its dependencies failed", Result[i].OperationException);
		RuntimeObject* L_11;
		L_11 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_13;
		L_13 = InterfaceFuncInvoker1< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Item(System.Int32) */, IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var, L_11, L_12);
		V_3 = L_13;
		Exception_t* L_14;
		L_14 = AsyncOperationHandle_get_OperationException_m531FC4DC2E215075C0EA7CE135FF1D68F6049270((&V_3), NULL);
		OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434* L_15 = (OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434*)il2cpp_codegen_object_new(OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		OperationException__ctor_m86A0486864C0BBA58E2688D3FB650CAB1D616D59(L_15, _stringLiteral820BFB423CB8C20E825524A0B74585E3BEEC752B, L_14, NULL);
		V_1 = L_15;
		// break;
		goto IL_0082;
	}

IL_0070:
	{
		// for (int i = 0; i < Result.Count; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0074:
	{
		// for (int i = 0; i < Result.Count; i++)
		int32_t L_17 = V_2;
		RuntimeObject* L_18;
		L_18 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		NullCheck(L_18);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Count() */, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, L_18);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0036;
		}
	}

IL_0082:
	{
		// Complete(Result, success, ex, m_Settings.HasFlag(GroupOperationSettings.ReleaseDependenciesOnFailure));
		RuntimeObject* L_20;
		L_20 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		bool L_21 = V_0;
		OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434* L_22 = V_1;
		int32_t L_23 = __this->___m_Settings_19;
		int32_t L_24 = L_23;
		int32_t L_25 = 1;
		bool L_26 = il2cpp_codegen_enum_has_flag((int32_t)L_24, (int32_t)L_25);
		AsyncOperationBase_1_Complete_m34BA93C8DD45D0DDA01AD80F3B3E13AD552B24C8(__this, L_20, L_21, L_22, L_26, AsyncOperationBase_1_Complete_m34BA93C8DD45D0DDA01AD80F3B3E13AD552B24C8_RuntimeMethod_var);
	}

IL_00a6:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D DiagnosticEventContext_get_OperationHandle_mC766CD6C074CD2A0E3486FD41CE0B951B25B3FA6_inline (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) 
{
	{
		// public AsyncOperationHandle OperationHandle { get; }
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_0 = __this->___U3COperationHandleU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DiagnosticEventContext_get_Type_mF65C73B3A0D1958041136121E877B4AF9ECFCEBB_inline (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) 
{
	{
		// public DiagnosticEventType Type { get; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DiagnosticEventContext_get_EventValue_m1109E4CB1BFA64FEDC13FF72B293B68DA2D0A94F_inline (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) 
{
	{
		// public int EventValue { get; }
		int32_t L_0 = __this->___U3CEventValueU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DiagnosticEventContext_get_Error_m1BCCCD62C4402CD13F6E0E071111AF0BEEA00BD3_inline (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) 
{
	{
		// public string Error { get; }
		String_t* L_0 = __this->___U3CErrorU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DiagnosticEventContext_get_Context_m8DC1C15D121AD87B29AE6FAF53B6797221E2224B_inline (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) 
{
	{
		// public object Context { get; }
		RuntimeObject* L_0 = __this->___U3CContextU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->____innerException_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m17694F84F89B1CA877E7FB810A103007F960CC3E_gshared_inline (Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* __this, DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_4_Invoke_m39604FFBE998E6D4F7BF665421372ED2E8F8A9B7_gshared_inline (Action_4_t51F78DA8E58156577593F6C422DEBEB7642D6F42* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___0_arg1, int32_t ___1_arg2, int32_t ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m7996D932EA8B1E14EB2A7F229C3C8F03FE4CEEE5_gshared_inline (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* __this, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD ___0_item, const RuntimeMethod* method) 
{
	DeferredCallbackRegisterRequestU5BU5D_t9EE53271E1B9497444A02DA609314E924A546CE4* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		DeferredCallbackRegisterRequestU5BU5D_t9EE53271E1B9497444A02DA609314E924A546CE4* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		DeferredCallbackRegisterRequestU5BU5D_t9EE53271E1B9497444A02DA609314E924A546CE4* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		DeferredCallbackRegisterRequestU5BU5D_t9EE53271E1B9497444A02DA609314E924A546CE4* L_6 = V_0;
		int32_t L_7 = V_1;
		DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD)L_8);
		return;
	}

IL_0034:
	{
		DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD L_9 = ___0_item;
		((  void (*) (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307*, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD Enumerator_get_Current_m9471395F103D524184B9C3431F6720602406AC65_gshared_inline (Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676* __this, const RuntimeMethod* method) 
{
	{
		DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationBase_1_get_Result_mCCD9D27A9D37A11B520A6D95B4EB191835B8C368_gshared_inline (AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* __this, const RuntimeMethod* method) 
{
	{
		// public TObject Result { get; set; }
		RuntimeObject* L_0 = __this->___U3CResultU3Ek__BackingField_0;
		return L_0;
	}
}
