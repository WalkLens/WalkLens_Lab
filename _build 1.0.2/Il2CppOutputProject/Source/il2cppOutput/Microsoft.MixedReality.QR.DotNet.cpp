#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		R ret;
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		R ret;
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<WinRT.EventSource/_Invoke>
struct Action_1_t73AC50EBBEBE2294086BCA7C6510850E9A338B32;
// System.Action`1<WinRT.Interop.IAsyncOperation/CompletedHandler>
struct Action_1_tE294E9648C5B0ECD47391E217DFB6319AF245983;
// WinRT.Interop.DelegateProperty`1<System.Object>
struct DelegateProperty_1_tB8134BD5DC38DCA6B4354ABAB973397A51E4377D;
// WinRT.Interop.DelegateProperty`1<WinRT.Interop.IAsyncOperation/CompletedHandler>
struct DelegateProperty_1_t1C6E81A9EDE98BE96F54144C8497B203A9DA4AD9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>
struct Dictionary_2_t3795BDA214C147B8B018698C2A6E69460C12086C;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<Microsoft.MixedReality.QR.QRCodeAddedEventArgs>
struct EventHandler_1_t0CA7918F7F63C72A71A73B76EBF9E8FA5AB9A926;
// System.EventHandler`1<Microsoft.MixedReality.QR.QRCodeRemovedEventArgs>
struct EventHandler_1_t186924C9090318A81202DAE25B45846A2F011B1E;
// System.EventHandler`1<Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>
struct EventHandler_1_t8E85A75707F8C26E7861055C6D1E6C531430CF46;
// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeAddedHandler,System.Object,System.Object>
struct EventSource_3_t77191C60CA172B42BC2A9B5D53495EC4D15ED0C8;
// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeAddedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeAddedEventArgs>
struct EventSource_3_t617C7084FCA4BB93A2E431B08052C02E7A5954B9;
// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeEnumerationCompletedHandler,System.Object,System.Object>
struct EventSource_3_t5B55BDB8413A691B4F570F35BD846A40D90E0048;
// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeEnumerationCompletedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,System.Object>
struct EventSource_3_tE1C3A8281ED3C9A3E3C8CBD6DB9B539C57002208;
// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeRemovedHandler,System.Object,System.Object>
struct EventSource_3_t346BF82E9B4E3D978DDA408A61E58FD80EB8B9A4;
// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeRemovedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeRemovedEventArgs>
struct EventSource_3_tC0A5454196001589D94A605A94D82D117EC64CAD;
// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeUpdatedHandler,System.Object,System.Object>
struct EventSource_3_tE87FAC24F05BF26B4B2B241106ED4625E39B0DE6;
// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeUpdatedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>
struct EventSource_3_t610553071539C339481F8394CD1CBE2967AD8861;
// System.Func`1<System.Collections.Generic.HashSet`1<System.IntPtr>>
struct Func_1_tCBE7D669FFD68F602047907C9C2D8EBADA1C188A;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<WinRT.WinrtModule>
struct Func_1_t32236569AC09127D00BA2FAC19A3D57F7BBA8765;
// System.Func`1<Microsoft.MixedReality.QR.QRCodeWatcher/Statics>
struct Func_1_tDABFA402D6D4B31EB69C02720105AAC50F8CE606;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Int32,System.Int32Enum>
struct Func_2_t27812FE58E785602A6A0494E3EBE39B1DE1597C2;
// System.Func`2<System.Int32,Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>
struct Func_2_t94B038EBC18D2A3B1F9F1134927EC9DF0F3F2F6B;
// System.Collections.Generic.HashSet`1<System.IntPtr>
struct HashSet_1_t3E357372EAB73A7B5E49D739B3175D9C5DE270FD;
// WinRT.Interop.IAsyncOperation_Enum`2<System.Int32Enum,Microsoft.MixedReality.QR.IAsyncOperationCompletedHandler_QRCodeWatcherAccessStatus>
struct IAsyncOperation_Enum_2_t6D9F33F9639678FEC998E0087546723D1D02FC87;
// WinRT.Interop.IAsyncOperation_Enum`2<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus,Microsoft.MixedReality.QR.IAsyncOperationCompletedHandler_QRCodeWatcherAccessStatus>
struct IAsyncOperation_Enum_2_tBAE87559F80C7E57168AC240D5A2F4E7B609BD4A;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t0C62219A7981BC3254B9E9404B17F934FE7D7908;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.WeakReference`1<WinRT.DllModule>>
struct KeyCollection_t5268A3EDC4B5D3A484C5066B0F0F31E729A7DF34;
// System.Lazy`1<System.Collections.Generic.HashSet`1<System.IntPtr>>
struct Lazy_1_tF1F993EAE4F44D33B36FFF7D9310F2A84485A643;
// System.Lazy`1<System.Boolean>
struct Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6;
// System.Lazy`1<System.Object>
struct Lazy_1_tAD66CD7CC97BB996411F4FE0F49A1817031B906E;
// WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl>
struct ObjectReference_1_t2BE9E2A525679BDB04174543B74311303327E8DD;
// WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl>
struct ObjectReference_1_tD121C03E6E8107C35A4B7717FA7FFEFA92485DC5;
// WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>
struct ObjectReference_1_t81B67CD294B31DA00DA91F177EFC7632539F4DBF;
// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCode/Vftbl>
struct ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05;
// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl>
struct ObjectReference_1_t7B7A6E71970334EC248BD99A424F0F5D929745C5;
// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl>
struct ObjectReference_1_t3705DE5AB44717B102A29CE29AA411BFE06E41B4;
// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl>
struct ObjectReference_1_tF3D0191716991966F93B81CBE75037784DA7D720;
// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl>
struct ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F;
// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl>
struct ObjectReference_1_t469AE3F6C4AC12D30FDA14DB6C055BA469085EED;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>
struct TaskFactory_1_t48E1FDC6BD0D1BC39B5C84C4BA057707718664D0;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>
struct Task_1_t0CA270124835536D2EC0B9F820E916762C5F14DD;
// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeAddedHandler,System.Object,System.Object>
struct UnmarshalArgs_tC59A64ADE57338AB94043FD5054C80B5E4F31016;
// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeAddedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeAddedEventArgs>
struct UnmarshalArgs_t021850FDA961D6DB7F0FE73422AE6BD5BDD2C6CE;
// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeEnumerationCompletedHandler,System.Object,System.Object>
struct UnmarshalArgs_tBE51C0128AD0A11A81228B5789FBD38B236DCCE1;
// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeEnumerationCompletedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,System.Object>
struct UnmarshalArgs_tBAD263BBEE30B538B58292AF503D10274F68BEAE;
// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeRemovedHandler,System.Object,System.Object>
struct UnmarshalArgs_tD241B9AF9B80C3BDA11B1E0DA5FA313ECDFE4B2F;
// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeRemovedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeRemovedEventArgs>
struct UnmarshalArgs_tCF30549DA5BC69A6B300D2468FD29F4D22549114;
// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeUpdatedHandler,System.Object,System.Object>
struct UnmarshalArgs_tE65A912AC7905726076D4F5D542B60CCC18F6D33;
// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeUpdatedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>
struct UnmarshalArgs_tBF999913624F2E64EB0395B280213EF2225EC792;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.WeakReference`1<WinRT.DllModule>>
struct ValueCollection_tC053DAECDA4B6C9C858A0D202F89A521F818BD40;
// WinRT.WeakLazy`1<System.Object>
struct WeakLazy_1_t06935F7271963CA74DA8B3D3CE447881398F3453;
// WinRT.WeakLazy`1<WinRT.WinrtModule>
struct WeakLazy_1_t6DB148C2C80364F816855A8A29911932E7C81356;
// WinRT.WeakLazy`1<Microsoft.MixedReality.QR.QRCodeWatcher/Statics>
struct WeakLazy_1_tEB593B90A27476DA223599A6DC2674C5B37DB4C2;
// System.WeakReference`1<WinRT.DllModule>
struct WeakReference_1_tF0FE779FF19F60CD0EDCF701B7267706C91AB14F;
// System.WeakReference`1<System.Object>
struct WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE;
// System.WeakReference`1<WinRT.WinrtModule>
struct WeakReference_1_tA51EA6DFCF9908EC1DDD0E15B833481C926D651D;
// System.WeakReference`1<Microsoft.MixedReality.QR.QRCodeWatcher/Statics>
struct WeakReference_1_t9891161A36A6054AAE746F544D2FEA8F212A3FE9;
// WinRT.Interop._IAsyncOperation`2<System.Threading.Tasks.Task`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>,Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>
struct _IAsyncOperation_2_t773B5059C8F097672594D03D8810346042775464;
// WinRT.Interop._IAsyncOperation`2<System.Object,System.Int32Enum>
struct _IAsyncOperation_2_t4E24877B06FAEC8AA1D3645615F2FD3AA097D274;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.WeakReference`1<WinRT.DllModule>>[]
struct EntryU5BU5D_tB4722B26A14C3FC644288EB3D4E2C9B2E4C0AD81;
// System.Collections.Generic.HashSet`1/Slot<System.IntPtr>[]
struct SlotU5BU5D_t937639EB855C30161F5062155D473513102FD578;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// WinRT.Delegate
struct Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// WinRT.DllModule
struct DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tF49071DA4AF6B506C6C15167DAF92D03C1EA66E1;
// WinRT.EventSource
struct EventSource_t7A3A7FAFD4DF4419E8654DAB2D6E63087D9491D0;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E;
// System.Exception
struct Exception_t;
// WinRT.HString
struct HString_t734316CC9188B0454711CDE6F9D311FD99F46E54;
// WinRT.Interop.IAsyncInfo
struct IAsyncInfo_t90E25D767953743ED58A5F7326524116BC5BB9D2;
// WinRT.Interop.IAsyncOperation
struct IAsyncOperation_tA0BCF6F0668C9A832BFD02DE1A0F08CE40A7FAED;
// WinRT.Interop.IDelegate2_Obj_Enum
struct IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30;
// WinRT.Interop.IDelegate2_Obj_Obj
struct IDelegate2_Obj_Obj_t66149A37DDD95F736A19120D62BD83A3E5FD39CA;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485;
// WinRT.IObjectReference
struct IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38;
// Microsoft.MixedReality.QR.IQRCode
struct IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109;
// Microsoft.MixedReality.QR.IQRCodeAddedEventArgs
struct IQRCodeAddedEventArgs_t8B6EE6766A132337A219F22E89DA2473BA74EED7;
// Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs
struct IQRCodeRemovedEventArgs_t9384E060335713DFBA0B79664F4119C9B2792553;
// Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs
struct IQRCodeUpdatedEventArgs_tCFF323A3B8B9642D8DA20079A74598BCE8A88AE6;
// Microsoft.MixedReality.QR.IQRCodeWatcher
struct IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD;
// Microsoft.MixedReality.QR.IQRCodeWatcherStatics
struct IQRCodeWatcherStatics_t491160E09A4D8EAC7A3F66E780433B8E7A901DBC;
// WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_tD038F91408AD5A05C12AE7834A3D70977536BDAA;
// System.LazyHelper
struct LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// WinRT.Interop.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_tFEE42FDDD0C003825984DDD5893532E298DF6D52;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// Microsoft.MixedReality.QR.QRCode
struct QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32;
// Microsoft.MixedReality.QR.QRCodeAddedEventArgs
struct QRCodeAddedEventArgs_tE7D4C2D6732F6E25B93A46E5F91318D9709A09C9;
// Microsoft.MixedReality.QR.QRCodeRemovedEventArgs
struct QRCodeRemovedEventArgs_tBE44C5681EC50973BB9E0D32B8A4155F60AFEA72;
// Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs
struct QRCodeUpdatedEventArgs_t45762E7847BD1B62D097405830082E521BCF29B9;
// Microsoft.MixedReality.QR.QRCodeWatcher
struct QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// WinRT.WinrtModule
struct WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3;
// WinRT.Interop._add_EventHandler
struct _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D;
// WinRT.Interop._get_PropertyAsBool
struct _get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E;
// WinRT.Interop._get_PropertyAsDateTime
struct _get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0;
// WinRT.Interop._get_PropertyAsEnum
struct _get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0;
// WinRT.Interop._get_PropertyAsFloat
struct _get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86;
// WinRT.Interop._get_PropertyAsGuid
struct _get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC;
// WinRT.Interop._get_PropertyAsInt
struct _get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95;
// WinRT.Interop._get_PropertyAsObject
struct _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11;
// WinRT.Interop._get_PropertyAsTimeSpan
struct _get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21;
// WinRT.Interop._get_PropertyAsUInt
struct _get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C;
// WinRT.Interop._method0
struct _method0_tED7C943BF18C50F2E18BDD75577047424BD63602;
// WinRT.Interop._put_PropertyAsObject
struct _put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A;
// WinRT.Interop._remove_EventHandler
struct _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0;
// WinRT.Delegate/InitialReference
struct InitialReference_t299B9416400FAAD6E7D4078310CB3509EDCBBE3B;
// WinRT.DllModule/DllGetActivationFactory
struct DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB;
// WinRT.EventSource/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tCA38C61070B18F5F4B9C5F4A309A9455E2ECCBE7;
// WinRT.EventSource/_Invoke
struct _Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276;
// WinRT.Interop.IActivationFactoryVftbl/_ActivateInstance
struct _ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8;
// WinRT.Interop.IAsyncOperation/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tC3E072A3170990CD124C7969CF7191A9FE02673D;
// WinRT.Interop.IAsyncOperation/CompletedHandler
struct CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3;
// WinRT.Interop.IInspectableVftbl/_GetIids
struct _GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033;
// WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName
struct _GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909;
// WinRT.Interop.IInspectableVftbl/_GetTrustLevel
struct _GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D;
// Microsoft.MixedReality.QR.IQRCodeWatcher/<>c
struct U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B;
// Microsoft.MixedReality.QR.IQRCodeWatcherStatics/<>c
struct U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4;
// WinRT.Interop.IUnknownVftbl/_AddRef
struct _AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A;
// WinRT.Interop.IUnknownVftbl/_QueryInterface
struct _QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543;
// WinRT.Interop.IUnknownVftbl/_Release
struct _Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE;
// WinRT.Mono/<>c
struct U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47;
// WinRT.Mono/ThreadContext
struct ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8;
// WinRT.Mono/mono_thread_cleanup_initialize
struct mono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47;
// WinRT.Mono/mono_thread_cleanup_register
struct mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C;
// WinRT.Mono/mono_thread_internal_attach
struct mono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50;
// WinRT.Platform/DotNETLinkage
struct DotNETLinkage_tFEB21AA499440559A5E46F95441093B3E159993F;
// WinRT.Platform/IL2CPPLinkage
struct IL2CPPLinkage_t86525598B7C6F2BE24822BBB29E1FD220B1F8C63;
// WinRT.Platform/IPlatformLinkage
struct IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018;
// Microsoft.MixedReality.QR.QRCodeWatcher/Statics
struct Statics_tE2846030F55D8A85D7243DA142CCFFEF8AEB65F6;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Microsoft.MixedReality.QR.IQRCode/Vftbl/_GetRawData
struct _GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751;
// Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl/_RequestAccessAsync
struct _RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t73AC50EBBEBE2294086BCA7C6510850E9A338B32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE294E9648C5B0ECD47391E217DFB6319AF245983_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ActivationFactory_1_tA8752488EBFCE8BF2803402941C13A47E6255250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelegateProperty_1_t1C6E81A9EDE98BE96F54144C8497B203A9DA4AD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3795BDA214C147B8B018698C2A6E69460C12086C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DotNETLinkage_tFEB21AA499440559A5E46F95441093B3E159993F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSource_3_t610553071539C339481F8394CD1CBE2967AD8861_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSource_3_t617C7084FCA4BB93A2E431B08052C02E7A5954B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSource_3_tC0A5454196001589D94A605A94D82D117EC64CAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSource_3_tE1C3A8281ED3C9A3E3C8CBD6DB9B539C57002208_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSource_t7A3A7FAFD4DF4419E8654DAB2D6E63087D9491D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t94B038EBC18D2A3B1F9F1134927EC9DF0F3F2F6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HString_t734316CC9188B0454711CDE6F9D311FD99F46E54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncInfo_t90E25D767953743ED58A5F7326524116BC5BB9D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncOperation_Enum_2_tBAE87559F80C7E57168AC240D5A2F4E7B609BD4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncOperation_tA0BCF6F0668C9A832BFD02DE1A0F08CE40A7FAED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDelegate2_Obj_Obj_t66149A37DDD95F736A19120D62BD83A3E5FD39CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IL2CPPLinkage_t86525598B7C6F2BE24822BBB29E1FD220B1F8C63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IQRCodeAddedEventArgs_t8B6EE6766A132337A219F22E89DA2473BA74EED7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IQRCodeRemovedEventArgs_t9384E060335713DFBA0B79664F4119C9B2792553_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IQRCodeUpdatedEventArgs_tCFF323A3B8B9642D8DA20079A74598BCE8A88AE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lazy_1_tF1F993EAE4F44D33B36FFF7D9310F2A84485A643_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QRCodeAddedEventArgs_tE7D4C2D6732F6E25B93A46E5F91318D9709A09C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QRCodeRemovedEventArgs_tBE44C5681EC50973BB9E0D32B8A4155F60AFEA72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QRCodeUpdatedEventArgs_t45762E7847BD1B62D097405830082E521BCF29B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_tCA38C61070B18F5F4B9C5F4A309A9455E2ECCBE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tC3E072A3170990CD124C7969CF7191A9FE02673D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmarshalArgs_t021850FDA961D6DB7F0FE73422AE6BD5BDD2C6CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmarshalArgs_tBAD263BBEE30B538B58292AF503D10274F68BEAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmarshalArgs_tBF999913624F2E64EB0395B280213EF2225EC792_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmarshalArgs_tCF30549DA5BC69A6B300D2468FD29F4D22549114_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakLazy_1_t6DB148C2C80364F816855A8A29911932E7C81356_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakLazy_1_tEB593B90A27476DA223599A6DC2674C5B37DB4C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_1_tF0FE779FF19F60CD0EDCF701B7267706C91AB14F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1DFB64A8BEB4B9535BAF32FC2D1D478C88752C96;
IL2CPP_EXTERN_C String_t* _stringLiteral1F7E940B2021E8BF65852F73C3E2CECACCD01456;
IL2CPP_EXTERN_C String_t* _stringLiteral35588C4FF7022D2E8A6DFBE65CE509BB624FF21C;
IL2CPP_EXTERN_C String_t* _stringLiteral4535E88AFD16EB73A1C33E88E92D77F5476E9CAA;
IL2CPP_EXTERN_C String_t* _stringLiteral885E8980C78A0F622B164E0FA16B56B9CF8B06B5;
IL2CPP_EXTERN_C String_t* _stringLiteral8C30C2A121B10CF66C074014633BC557626C1D72;
IL2CPP_EXTERN_C String_t* _stringLiteralA32285E57C5E37519691CDF44133FC9D59D7069B;
IL2CPP_EXTERN_C const RuntimeMethod* ActivationFactory_1_ActivateInstance_TisVftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_mEED6670CCDCA14DDB7D2DB19B98601776E0F39FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivationFactory_1_As_TisVftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_m6FA2F30C82ADF2A84D48851E641884565C8D1F62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateProperty_1__ctor_m3913119D72ACBD0391B8B0D6E4F288C171DACFD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateProperty_1_set_Value_m2E87DBBBA2DA631F1A570F422CA836C68E7F29E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Delegate_AddRef_mD98DF69C12609B6E08C419D0F8FC59EEFA5506E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Delegate_MarshalInvoke_TisCompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3_m3589B54C241B795F43BC2B39F6642B1AF385FC36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Delegate_MarshalInvoke_Tis_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276_m508D189AF0EF98305FFF90A12B39BA8A25921573_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Delegate_QueryInterface_mD5AB1EB8A8A38FCE479AFE27A77B443DF4415CF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Delegate_Release_m220300670F20C22F3666B121E61E46B48567761C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Delegate_Release_mD1AA995D7731AE8F4716A13CF8BC22ADFADE1C01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Delegate__Dispose_m7F7633C80FF3EEEF2A62CB2F88308537966AA4D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mF02147E5DC050F20B8FF94EB37F5F3B513145D73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB9794AEF42AE0E6B1CD21D9F7B8493A48D70C658_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BC59C330688857D597990E8C9DAE2E22663E35D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventSource_3__ctor_m8F6DEDE0FE85764F6C30E9EDDC4F9C47863758F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventSource_3__ctor_m946B8A442CB9732FDFDF395D9097BA60FA02A43F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventSource_3__ctor_mAF32617027EA585A28B7D902D06524458D31AC6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventSource_3__ctor_mD20C895BDF9075DF3AA0BC5AE73AC5D81707AD25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventSource_3_add_Event_m3314D19D61D88F8A157802F920A9BAC68C26ACF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventSource_3_remove_Event_mD32B02AF23B6CA7E54CF59D2A5AC152322E8D7B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventSource__invoke_m0C1EEA1EBB5008722C1E0A9A99ADC570938DF34E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m38EDB84AA15D55ADA0359297102CBB72444E651D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m3715E69647F22B53E7555EBDC0DDD78612F49F77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAsyncOperation_Enum_2__ctor_mF1A030578CCED26C8B70B50D428D483D4C51FA6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAsyncOperation__OnCompleted_m1BA76E56DCB467FB2FF3057B15964CD8948DFA77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IObjectReference_As_TisVftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_m783D62D813E4D899F27B9660BAD0E2063D174710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1__ctor_mDE4E036B099035F21688E3B1D7BE2EE6CBDBE772_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1__ctor_mF1487AB0FCFAFBB12664FCD33F33BA90049923B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1_get_Value_m4176FB66D83003824F2693A2E79CA31D317D5B19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1_get_Value_m50BC2FE5ACA123147959F3A8B3C523A1242C2E45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_TisIDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30_m8FC9BCAAEA572E4003051DDF22D29FA820991E5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_Tis_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A_mA939725AC522AD4D78E67DA10C488A64EBF0912F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_Tis_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543_m641E6F1035B24B3861E17E12C67483DF9C28BF2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_Tis_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE_m189D710BC9784B465C2440E0471FE8E4FDA3AA89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_PtrToStructure_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_m5C09A9E750405E5894ABC90041204F2107CA270F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_SizeOf_TisIDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0_mA5A70DE2935DE6D4A20B1377B1E09D82C707F3DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_SizeOf_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_mA268FF722247201B76B5143AD28FC7E0594C821C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToPtr_TisIDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0_m5C946AC3EC0DF53C6DBB4F412642404137DA513D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToPtr_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_m333CC2C23D557EDF665616B9E02A71276C949439_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleReference_Release_m6C96CC6FC8F67EC8365CEECC91BE1D110DD424D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_m943A0FB7F01D3EEA8427204198F7F7D422F06ADF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_mF03F8A0982F269228D9CD07BA1DA8765DDD7D0A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_mF60DC5A348914FAD3D2E54DC4B588DB3987BF8AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_FromNativePtrNoRef_m1EED31C6220DC426A757B561A81B146A13956F94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_FromNativePtrNoRef_m22BE26B2E4AF02CD8C4F6CE6E696DCFAFE9043F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_FromNativePtrNoRef_m5D088DF342D130C456166C6546BF1DC244C88802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Platform_GetProcAddress_Tismono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47_m1C6CF42015C0BD89BCFB5523659F4767368AFA71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Platform_GetProcAddress_Tismono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C_m379B936F46AB23965B311613218CB38C0E4E8ACC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Platform_TryGetProcAddress_TisDllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB_m5E1173FA34F1261EF030548060E71EBDAD1512A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Platform_TryGetProcAddress_Tismono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50_m0CB919D1A3B830EC36AEBC8985022A80C25FBA64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRequestAccessAsyncU3Eb__6_0_mC0BE77B479F679ADDD52F88108D45DA39EA45B7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__8_0_m8151C87366CA91F3974C198BC8938F47433FC46E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__5_0_mBA2929082FA3EA318E5F00A9D65F985DCAD2A5F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__5_1_m297D6F2185FEE6962BCDA6B17FF6E9118412605D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__5_2_m98E0FCD660875C989300A09FE4E59BEACEAE0098_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__5_3_m45ED56C82B64490B877B586AC58CE78460881AA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3C_invokeU3Eb__0_m5C692B574985EBE63FCCE2523123AF95276247B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3C_OnCompletedU3Eb__0_mF486F64E32462372F1DA88BD235E69170C1B9FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakLazy_1__ctor_m4518A4E0A51C3595F331457714DDFE2DA846C7CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakLazy_1__ctor_m9E935751234933DCEAD6DB0DE51380D85E48A129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakLazy_1_get_Value_m3432E00C5EE3034731EDF75FE2B22F3361E271C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakLazy_1_get_Value_mC89189DBE8E83BA11AF890A78CB40807751329C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_TryGetTarget_mE44534789AB9D63110C51A95EECEC3D26F7E048C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1__ctor_mA0AFC3035B461906D586803F0062B4DD30521CF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _IAsyncOperation_2_AsTask_mFF2DC445613BE2EFCF98790B57B0CBB840B4207E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485;;
struct IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_com;
struct IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_com;;
struct IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_pinvoke;
struct IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_pinvoke;;
struct IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860;;
struct IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_com;
struct IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_com;;
struct IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_pinvoke;
struct IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_pinvoke;;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCEC53A61388B90F9E205DE6FCCD9B22D91421ACA 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>
struct Dictionary_2_t3795BDA214C147B8B018698C2A6E69460C12086C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB4722B26A14C3FC644288EB3D4E2C9B2E4C0AD81* ____entries_1;
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
	KeyCollection_t5268A3EDC4B5D3A484C5066B0F0F31E729A7DF34* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC053DAECDA4B6C9C858A0D202F89A521F818BD40* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<System.IntPtr>
struct HashSet_1_t3E357372EAB73A7B5E49D739B3175D9C5DE270FD  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t937639EB855C30161F5062155D473513102FD578* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Lazy`1<System.Collections.Generic.HashSet`1<System.IntPtr>>
struct Lazy_1_tF1F993EAE4F44D33B36FFF7D9310F2A84485A643  : public RuntimeObject
{
	// System.LazyHelper modreq(System.Runtime.CompilerServices.IsVolatile) System.Lazy`1::_state
	LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* ____state_0;
	// System.Func`1<T> System.Lazy`1::_factory
	Func_1_tCBE7D669FFD68F602047907C9C2D8EBADA1C188A* ____factory_1;
	// T System.Lazy`1::_value
	HashSet_1_t3E357372EAB73A7B5E49D739B3175D9C5DE270FD* ____value_2;
};

// System.Lazy`1<System.Boolean>
struct Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6  : public RuntimeObject
{
	// System.LazyHelper modreq(System.Runtime.CompilerServices.IsVolatile) System.Lazy`1::_state
	LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* ____state_0;
	// System.Func`1<T> System.Lazy`1::_factory
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ____factory_1;
	// T System.Lazy`1::_value
	bool ____value_2;
};

// WinRT.WeakLazy`1<WinRT.WinrtModule>
struct WeakLazy_1_t6DB148C2C80364F816855A8A29911932E7C81356  : public RuntimeObject
{
	// System.Func`1<T> WinRT.WeakLazy`1::_constructor
	Func_1_t32236569AC09127D00BA2FAC19A3D57F7BBA8765* ____constructor_0;
	// System.WeakReference`1<T> WinRT.WeakLazy`1::_instance
	WeakReference_1_tA51EA6DFCF9908EC1DDD0E15B833481C926D651D* ____instance_1;
};

// WinRT.WeakLazy`1<Microsoft.MixedReality.QR.QRCodeWatcher/Statics>
struct WeakLazy_1_tEB593B90A27476DA223599A6DC2674C5B37DB4C2  : public RuntimeObject
{
	// System.Func`1<T> WinRT.WeakLazy`1::_constructor
	Func_1_tDABFA402D6D4B31EB69C02720105AAC50F8CE606* ____constructor_0;
	// System.WeakReference`1<T> WinRT.WeakLazy`1::_instance
	WeakReference_1_t9891161A36A6054AAE746F544D2FEA8F212A3FE9* ____instance_1;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// WinRT.EventSource
struct EventSource_t7A3A7FAFD4DF4419E8654DAB2D6E63087D9491D0  : public RuntimeObject
{
};

// WinRT.Interop.IAsyncInfo
struct IAsyncInfo_t90E25D767953743ED58A5F7326524116BC5BB9D2  : public RuntimeObject
{
	// WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl> WinRT.Interop.IAsyncInfo::_obj
	ObjectReference_1_tD121C03E6E8107C35A4B7717FA7FFEFA92485DC5* ____obj_0;
};

// WinRT.Interop.IAsyncOperation
struct IAsyncOperation_tA0BCF6F0668C9A832BFD02DE1A0F08CE40A7FAED  : public RuntimeObject
{
	// WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl> WinRT.Interop.IAsyncOperation::_obj
	ObjectReference_1_t81B67CD294B31DA00DA91F177EFC7632539F4DBF* ____obj_0;
	// WinRT.Interop.DelegateProperty`1<WinRT.Interop.IAsyncOperation/CompletedHandler> WinRT.Interop.IAsyncOperation::_Completed
	DelegateProperty_1_t1C6E81A9EDE98BE96F54144C8497B203A9DA4AD9* ____Completed_2;
};

// Microsoft.MixedReality.QR.IQRCode
struct IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109  : public RuntimeObject
{
	// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCode/Vftbl> Microsoft.MixedReality.QR.IQRCode::_obj
	ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* ____obj_0;
};

// Microsoft.MixedReality.QR.IQRCodeAddedEventArgs
struct IQRCodeAddedEventArgs_t8B6EE6766A132337A219F22E89DA2473BA74EED7  : public RuntimeObject
{
	// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl> Microsoft.MixedReality.QR.IQRCodeAddedEventArgs::_obj
	ObjectReference_1_t7B7A6E71970334EC248BD99A424F0F5D929745C5* ____obj_0;
};

// Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs
struct IQRCodeRemovedEventArgs_t9384E060335713DFBA0B79664F4119C9B2792553  : public RuntimeObject
{
	// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl> Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs::_obj
	ObjectReference_1_t3705DE5AB44717B102A29CE29AA411BFE06E41B4* ____obj_0;
};

// Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs
struct IQRCodeUpdatedEventArgs_tCFF323A3B8B9642D8DA20079A74598BCE8A88AE6  : public RuntimeObject
{
	// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl> Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs::_obj
	ObjectReference_1_tF3D0191716991966F93B81CBE75037784DA7D720* ____obj_0;
};

// Microsoft.MixedReality.QR.IQRCodeWatcher
struct IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD  : public RuntimeObject
{
	// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl> Microsoft.MixedReality.QR.IQRCodeWatcher::_obj
	ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* ____obj_0;
	// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeAddedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeAddedEventArgs> Microsoft.MixedReality.QR.IQRCodeWatcher::Added
	EventSource_3_t617C7084FCA4BB93A2E431B08052C02E7A5954B9* ___Added_1;
	// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeUpdatedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs> Microsoft.MixedReality.QR.IQRCodeWatcher::Updated
	EventSource_3_t610553071539C339481F8394CD1CBE2967AD8861* ___Updated_2;
	// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeRemovedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeRemovedEventArgs> Microsoft.MixedReality.QR.IQRCodeWatcher::Removed
	EventSource_3_tC0A5454196001589D94A605A94D82D117EC64CAD* ___Removed_3;
	// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeEnumerationCompletedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,System.Object> Microsoft.MixedReality.QR.IQRCodeWatcher::EnumerationCompleted
	EventSource_3_tE1C3A8281ED3C9A3E3C8CBD6DB9B539C57002208* ___EnumerationCompleted_4;
};

// Microsoft.MixedReality.QR.IQRCodeWatcherStatics
struct IQRCodeWatcherStatics_t491160E09A4D8EAC7A3F66E780433B8E7A901DBC  : public RuntimeObject
{
	// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl> Microsoft.MixedReality.QR.IQRCodeWatcherStatics::_obj
	ObjectReference_1_t469AE3F6C4AC12D30FDA14DB6C055BA469085EED* ____obj_0;
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

// WinRT.Mono
struct Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87  : public RuntimeObject
{
};

// WinRT.Platform
struct Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06  : public RuntimeObject
{
};

// Microsoft.MixedReality.QR.QRCode
struct QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32  : public RuntimeObject
{
	// Microsoft.MixedReality.QR.IQRCode Microsoft.MixedReality.QR.QRCode::_interface
	IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* ____interface_0;
};

// Microsoft.MixedReality.QR.QRCodeAddedEventArgs
struct QRCodeAddedEventArgs_tE7D4C2D6732F6E25B93A46E5F91318D9709A09C9  : public RuntimeObject
{
	// Microsoft.MixedReality.QR.IQRCodeAddedEventArgs Microsoft.MixedReality.QR.QRCodeAddedEventArgs::_args
	IQRCodeAddedEventArgs_t8B6EE6766A132337A219F22E89DA2473BA74EED7* ____args_0;
};

// Microsoft.MixedReality.QR.QRCodeRemovedEventArgs
struct QRCodeRemovedEventArgs_tBE44C5681EC50973BB9E0D32B8A4155F60AFEA72  : public RuntimeObject
{
	// Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs Microsoft.MixedReality.QR.QRCodeRemovedEventArgs::_args
	IQRCodeRemovedEventArgs_t9384E060335713DFBA0B79664F4119C9B2792553* ____args_0;
};

// Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs
struct QRCodeUpdatedEventArgs_t45762E7847BD1B62D097405830082E521BCF29B9  : public RuntimeObject
{
	// Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs::_args
	IQRCodeUpdatedEventArgs_tCFF323A3B8B9642D8DA20079A74598BCE8A88AE6* ____args_0;
};

// Microsoft.MixedReality.QR.QRCodeWatcher
struct QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7  : public RuntimeObject
{
	// Microsoft.MixedReality.QR.IQRCodeWatcher Microsoft.MixedReality.QR.QRCodeWatcher::_interface
	IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* ____interface_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
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

// WinRT.Delegate/InitialReference
struct InitialReference_t299B9416400FAAD6E7D4078310CB3509EDCBBE3B  : public RuntimeObject
{
	// WinRT.Delegate WinRT.Delegate/InitialReference::_delegate
	Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* ____delegate_0;
};

// WinRT.Interop.IAsyncOperation/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tC3E072A3170990CD124C7969CF7191A9FE02673D  : public RuntimeObject
{
	// System.Int32 WinRT.Interop.IAsyncOperation/<>c__DisplayClass4_0::status
	int32_t ___status_0;
};

// Microsoft.MixedReality.QR.IQRCodeWatcher/<>c
struct U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B  : public RuntimeObject
{
};

// Microsoft.MixedReality.QR.IQRCodeWatcherStatics/<>c
struct U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4  : public RuntimeObject
{
};

// WinRT.Mono/<>c
struct U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47  : public RuntimeObject
{
};

// WinRT.Mono/ThreadContext
struct ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8  : public RuntimeObject
{
};

// WinRT.Platform/DotNETLinkage
struct DotNETLinkage_tFEB21AA499440559A5E46F95441093B3E159993F  : public RuntimeObject
{
};

// WinRT.Platform/IL2CPPLinkage
struct IL2CPPLinkage_t86525598B7C6F2BE24822BBB29E1FD220B1F8C63  : public RuntimeObject
{
};

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>
struct Task_1_t0CA270124835536D2EC0B9F820E916762C5F14DD  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

// WinRT.Interop._IAsyncOperation`2<System.Threading.Tasks.Task`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>,Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>
struct _IAsyncOperation_2_t773B5059C8F097672594D03D8810346042775464  : public IAsyncOperation_tA0BCF6F0668C9A832BFD02DE1A0F08CE40A7FAED
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tF49071DA4AF6B506C6C15167DAF92D03C1EA66E1  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// WinRT.Interop.EventRegistrationToken
struct EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30 
{
	// System.Int64 WinRT.Interop.EventRegistrationToken::Value
	int64_t ___Value_0;
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

// Microsoft.MixedReality.QR.IAsyncOperationCompletedHandler_QRCodeWatcherAccessStatus
struct IAsyncOperationCompletedHandler_QRCodeWatcherAccessStatus_t4E8318E1E93E18BA998162D1AC93B6D99FA75596 
{
	static const Il2CppGuid CLSID;

	union
	{
		struct
		{
		};
		uint8_t IAsyncOperationCompletedHandler_QRCodeWatcherAccessStatus_t4E8318E1E93E18BA998162D1AC93B6D99FA75596__padding[1];
	};
};

// Microsoft.MixedReality.QR.IQRCodeAddedHandler
struct IQRCodeAddedHandler_tD6C03BD0D87F0DF763F19F4BE521F7B4C1534B99 
{
	static const Il2CppGuid CLSID;

	union
	{
		struct
		{
		};
		uint8_t IQRCodeAddedHandler_tD6C03BD0D87F0DF763F19F4BE521F7B4C1534B99__padding[1];
	};
};

// Microsoft.MixedReality.QR.IQRCodeEnumerationCompletedHandler
struct IQRCodeEnumerationCompletedHandler_tDAC96C0CE9F4726FDADBB8E96987AEBC6370625D 
{
	static const Il2CppGuid CLSID;

	union
	{
		struct
		{
		};
		uint8_t IQRCodeEnumerationCompletedHandler_tDAC96C0CE9F4726FDADBB8E96987AEBC6370625D__padding[1];
	};
};

// Microsoft.MixedReality.QR.IQRCodeRemovedHandler
struct IQRCodeRemovedHandler_tF6DD445211B1DC57A4E63F971998DF51E12F0C20 
{
	static const Il2CppGuid CLSID;

	union
	{
		struct
		{
		};
		uint8_t IQRCodeRemovedHandler_tF6DD445211B1DC57A4E63F971998DF51E12F0C20__padding[1];
	};
};

// Microsoft.MixedReality.QR.IQRCodeUpdatedHandler
struct IQRCodeUpdatedHandler_t2F088233A239A15C9C28EACB87DD3CE637026FED 
{
	static const Il2CppGuid CLSID;

	union
	{
		struct
		{
		};
		uint8_t IQRCodeUpdatedHandler_t2F088233A239A15C9C28EACB87DD3CE637026FED__padding[1];
	};
};

// WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860 
{
	static const Il2CppGuid CLSID;

	// WinRT.Interop.IUnknownVftbl/_QueryInterface WinRT.Interop.IUnknownVftbl::QueryInterface
	_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543* ___QueryInterface_0;
	// WinRT.Interop.IUnknownVftbl/_AddRef WinRT.Interop.IUnknownVftbl::AddRef
	_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A* ___AddRef_1;
	// WinRT.Interop.IUnknownVftbl/_Release WinRT.Interop.IUnknownVftbl::Release
	_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE* ___Release_2;
};
// Native definition for P/Invoke marshalling of WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_pinvoke
{
	Il2CppMethodPointer ___QueryInterface_0;
	Il2CppMethodPointer ___AddRef_1;
	Il2CppMethodPointer ___Release_2;
};
// Native definition for COM marshalling of WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_com
{
	Il2CppMethodPointer ___QueryInterface_0;
	Il2CppMethodPointer ___AddRef_1;
	Il2CppMethodPointer ___Release_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_tD038F91408AD5A05C12AE7834A3D70977536BDAA  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// WinRT.Interop.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_tFEE42FDDD0C003825984DDD5893532E298DF6D52  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type WinRT.Interop.MonoPInvokeCallbackAttribute::<DelegateType>k__BackingField
	Type_t* ___U3CDelegateTypeU3Ek__BackingField_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// WinRT.Interop._Bool
struct _Bool_tA3BBB9726FE45A1680F93253B328394D390A545F 
{
	// System.Int32 WinRT.Interop._Bool::RawValue
	int32_t ___RawValue_0;
};

// WinRT.Interop._DateTime
struct _DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1 
{
	// System.Int64 WinRT.Interop._DateTime::UniversalTime
	int64_t ___UniversalTime_0;
};

// WinRT.Interop._TimeSpan
struct _TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A 
{
	// System.Int64 WinRT.Interop._TimeSpan::Duration
	int64_t ___Duration_0;
};

// Microsoft.MixedReality.QR.QRCodeWatcher/Statics
struct Statics_tE2846030F55D8A85D7243DA142CCFFEF8AEB65F6  : public IQRCodeWatcherStatics_t491160E09A4D8EAC7A3F66E780433B8E7A901DBC
{
};

// WinRT.Interop.DelegateProperty`1<WinRT.Interop.IAsyncOperation/CompletedHandler>
struct DelegateProperty_1_t1C6E81A9EDE98BE96F54144C8497B203A9DA4AD9  : public RuntimeObject
{
	// WinRT.Interop._get_PropertyAsObject WinRT.Interop.DelegateProperty`1::_get_Delegate
	_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* ____get_Delegate_0;
	// WinRT.Interop._put_PropertyAsObject WinRT.Interop.DelegateProperty`1::_put_Delegate
	_put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A* ____put_Delegate_1;
	// System.Guid WinRT.Interop.DelegateProperty`1::_iid
	Guid_t ____iid_2;
	// WinRT.IObjectReference WinRT.Interop.DelegateProperty`1::_obj
	IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* ____obj_3;
	// System.IntPtr WinRT.Interop.DelegateProperty`1::_invokerPtr
	intptr_t ____invokerPtr_4;
	// T WinRT.Interop.DelegateProperty`1::_delegate
	CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3* ____delegate_5;
	// System.IntPtr WinRT.Interop.DelegateProperty`1::_delegatePtr
	intptr_t ____delegatePtr_6;
};

// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeAddedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeAddedEventArgs>
struct EventSource_3_t617C7084FCA4BB93A2E431B08052C02E7A5954B9  : public EventSource_t7A3A7FAFD4DF4419E8654DAB2D6E63087D9491D0
{
	// S WinRT.EventSource`3::Sender
	QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7* ___Sender_1;
	// WinRT.IObjectReference WinRT.EventSource`3::_obj
	IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* ____obj_2;
	// WinRT.Interop._add_EventHandler WinRT.EventSource`3::_addHandler
	_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* ____addHandler_3;
	// WinRT.Interop._remove_EventHandler WinRT.EventSource`3::_removeHandler
	_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* ____removeHandler_4;
	// WinRT.EventSource`3/UnmarshalArgs<I,S,A> WinRT.EventSource`3::_unmarshalArgs
	UnmarshalArgs_t021850FDA961D6DB7F0FE73422AE6BD5BDD2C6CE* ____unmarshalArgs_5;
	// WinRT.EventSource/_Invoke WinRT.EventSource`3::_invoker
	_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276* ____invoker_6;
	// WinRT.Interop.EventRegistrationToken WinRT.EventSource`3::_token
	EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30 ____token_7;
	// System.EventHandler`1<A> WinRT.EventSource`3::_event
	EventHandler_1_t0CA7918F7F63C72A71A73B76EBF9E8FA5AB9A926* ____event_8;
};

// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeEnumerationCompletedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,System.Object>
struct EventSource_3_tE1C3A8281ED3C9A3E3C8CBD6DB9B539C57002208  : public EventSource_t7A3A7FAFD4DF4419E8654DAB2D6E63087D9491D0
{
	// S WinRT.EventSource`3::Sender
	QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7* ___Sender_1;
	// WinRT.IObjectReference WinRT.EventSource`3::_obj
	IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* ____obj_2;
	// WinRT.Interop._add_EventHandler WinRT.EventSource`3::_addHandler
	_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* ____addHandler_3;
	// WinRT.Interop._remove_EventHandler WinRT.EventSource`3::_removeHandler
	_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* ____removeHandler_4;
	// WinRT.EventSource`3/UnmarshalArgs<I,S,A> WinRT.EventSource`3::_unmarshalArgs
	UnmarshalArgs_tBAD263BBEE30B538B58292AF503D10274F68BEAE* ____unmarshalArgs_5;
	// WinRT.EventSource/_Invoke WinRT.EventSource`3::_invoker
	_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276* ____invoker_6;
	// WinRT.Interop.EventRegistrationToken WinRT.EventSource`3::_token
	EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30 ____token_7;
	// System.EventHandler`1<A> WinRT.EventSource`3::_event
	EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* ____event_8;
};

// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeRemovedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeRemovedEventArgs>
struct EventSource_3_tC0A5454196001589D94A605A94D82D117EC64CAD  : public EventSource_t7A3A7FAFD4DF4419E8654DAB2D6E63087D9491D0
{
	// S WinRT.EventSource`3::Sender
	QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7* ___Sender_1;
	// WinRT.IObjectReference WinRT.EventSource`3::_obj
	IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* ____obj_2;
	// WinRT.Interop._add_EventHandler WinRT.EventSource`3::_addHandler
	_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* ____addHandler_3;
	// WinRT.Interop._remove_EventHandler WinRT.EventSource`3::_removeHandler
	_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* ____removeHandler_4;
	// WinRT.EventSource`3/UnmarshalArgs<I,S,A> WinRT.EventSource`3::_unmarshalArgs
	UnmarshalArgs_tCF30549DA5BC69A6B300D2468FD29F4D22549114* ____unmarshalArgs_5;
	// WinRT.EventSource/_Invoke WinRT.EventSource`3::_invoker
	_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276* ____invoker_6;
	// WinRT.Interop.EventRegistrationToken WinRT.EventSource`3::_token
	EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30 ____token_7;
	// System.EventHandler`1<A> WinRT.EventSource`3::_event
	EventHandler_1_t186924C9090318A81202DAE25B45846A2F011B1E* ____event_8;
};

// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeUpdatedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>
struct EventSource_3_t610553071539C339481F8394CD1CBE2967AD8861  : public EventSource_t7A3A7FAFD4DF4419E8654DAB2D6E63087D9491D0
{
	// S WinRT.EventSource`3::Sender
	QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7* ___Sender_1;
	// WinRT.IObjectReference WinRT.EventSource`3::_obj
	IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* ____obj_2;
	// WinRT.Interop._add_EventHandler WinRT.EventSource`3::_addHandler
	_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* ____addHandler_3;
	// WinRT.Interop._remove_EventHandler WinRT.EventSource`3::_removeHandler
	_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* ____removeHandler_4;
	// WinRT.EventSource`3/UnmarshalArgs<I,S,A> WinRT.EventSource`3::_unmarshalArgs
	UnmarshalArgs_tBF999913624F2E64EB0395B280213EF2225EC792* ____unmarshalArgs_5;
	// WinRT.EventSource/_Invoke WinRT.EventSource`3::_invoker
	_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276* ____invoker_6;
	// WinRT.Interop.EventRegistrationToken WinRT.EventSource`3::_token
	EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30 ____token_7;
	// System.EventHandler`1<A> WinRT.EventSource`3::_event
	EventHandler_1_t8E85A75707F8C26E7861055C6D1E6C531430CF46* ____event_8;
};

// WinRT.Interop.IAsyncOperation`2<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus,Microsoft.MixedReality.QR.IAsyncOperationCompletedHandler_QRCodeWatcherAccessStatus>
struct IAsyncOperation_2_t4D386FFCD4F863F971D3FC200E33B7783DDF96B1  : public _IAsyncOperation_2_t773B5059C8F097672594D03D8810346042775464
{
};

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_9;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_10;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// WinRT.HString
struct HString_t734316CC9188B0454711CDE6F9D311FD99F46E54  : public RuntimeObject
{
	// System.IntPtr WinRT.HString::Handle
	intptr_t ___Handle_0;
};

// WinRT.Interop.IAgileObjectVftbl
struct IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969 
{
	static const Il2CppGuid CLSID;

	// WinRT.Interop.IUnknownVftbl WinRT.Interop.IAgileObjectVftbl::IUnknownVftbl
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860 ___IUnknownVftbl_0;
};
// Native definition for P/Invoke marshalling of WinRT.Interop.IAgileObjectVftbl
struct IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969_marshaled_pinvoke
{
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_pinvoke ___IUnknownVftbl_0;
};
// Native definition for COM marshalling of WinRT.Interop.IAgileObjectVftbl
struct IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969_marshaled_com
{
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_com ___IUnknownVftbl_0;
};

// WinRT.Interop.IDelegateVftbl
struct IDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0 
{
	// System.IntPtr WinRT.Interop.IDelegateVftbl::QueryInterface
	intptr_t ___QueryInterface_0;
	// System.IntPtr WinRT.Interop.IDelegateVftbl::AddRef
	intptr_t ___AddRef_1;
	// System.IntPtr WinRT.Interop.IDelegateVftbl::Release
	intptr_t ___Release_2;
	// System.IntPtr WinRT.Interop.IDelegateVftbl::Invoke
	intptr_t ___Invoke_3;
};

// WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 
{
	static const Il2CppGuid CLSID;

	// WinRT.Interop.IUnknownVftbl WinRT.Interop.IInspectableVftbl::IUnknownVftbl
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860 ___IUnknownVftbl_0;
	// WinRT.Interop.IInspectableVftbl/_GetIids WinRT.Interop.IInspectableVftbl::GetIids
	_GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033* ___GetIids_1;
	// WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName WinRT.Interop.IInspectableVftbl::GetRuntimeClassName
	_GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909* ___GetRuntimeClassName_2;
	// WinRT.Interop.IInspectableVftbl/_GetTrustLevel WinRT.Interop.IInspectableVftbl::GetTrustLevel
	_GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D* ___GetTrustLevel_3;
};
// Native definition for P/Invoke marshalling of WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_pinvoke
{
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_pinvoke ___IUnknownVftbl_0;
	Il2CppMethodPointer ___GetIids_1;
	Il2CppMethodPointer ___GetRuntimeClassName_2;
	Il2CppMethodPointer ___GetTrustLevel_3;
};
// Native definition for COM marshalling of WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_com
{
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_com ___IUnknownVftbl_0;
	Il2CppMethodPointer ___GetIids_1;
	Il2CppMethodPointer ___GetRuntimeClassName_2;
	Il2CppMethodPointer ___GetTrustLevel_3;
};

// WinRT.ModuleReference
struct ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 
{
	// System.Object WinRT.ModuleReference::_module
	RuntimeObject* ____module_0;
	// System.Int32* WinRT.ModuleReference::_refCountPtr
	int32_t* ____refCountPtr_1;
	// System.IntPtr WinRT.ModuleReference::_nativeHandle
	intptr_t ____nativeHandle_2;
};
// Native definition for P/Invoke marshalling of WinRT.ModuleReference
struct ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8_marshaled_pinvoke
{
	Il2CppIUnknown* ____module_0;
	int32_t* ____refCountPtr_1;
	intptr_t ____nativeHandle_2;
};
// Native definition for COM marshalling of WinRT.ModuleReference
struct ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8_marshaled_com
{
	Il2CppIUnknown* ____module_0;
	int32_t* ____refCountPtr_1;
	intptr_t ____nativeHandle_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// WinRT.VftblPtr
struct VftblPtr_t506D1549C4FF02EBC85C6B49CD6BA2AEEEF7A777 
{
	// System.IntPtr WinRT.VftblPtr::Vftbl
	intptr_t ___Vftbl_0;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// WinRT.Delegate/UnmanagedObject
struct UnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290 
{
	// System.IntPtr WinRT.Delegate/UnmanagedObject::_vftblPtr
	intptr_t ____vftblPtr_0;
	// System.IntPtr WinRT.Delegate/UnmanagedObject::_gchandlePtr
	intptr_t ____gchandlePtr_1;
};

// WinRT.EventSource/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tCA38C61070B18F5F4B9C5F4A309A9455E2ECCBE7  : public RuntimeObject
{
	// System.IntPtr WinRT.EventSource/<>c__DisplayClass1_0::senderPtr
	intptr_t ___senderPtr_0;
	// System.IntPtr WinRT.EventSource/<>c__DisplayClass1_0::argsPtr
	intptr_t ___argsPtr_1;
};

// WinRT.Interop.IAsyncOperation_Enum`2<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus,Microsoft.MixedReality.QR.IAsyncOperationCompletedHandler_QRCodeWatcherAccessStatus>
struct IAsyncOperation_Enum_2_tBAE87559F80C7E57168AC240D5A2F4E7B609BD4A  : public IAsyncOperation_2_t4D386FFCD4F863F971D3FC200E33B7783DDF96B1
{
	// WinRT.Interop._get_PropertyAsEnum WinRT.Interop.IAsyncOperation_Enum`2::_GetResults
	_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0* ____GetResults_3;
	// System.Func`2<System.Int32,T> WinRT.Interop.IAsyncOperation_Enum`2::_castResult
	Func_2_t94B038EBC18D2A3B1F9F1134927EC9DF0F3F2F6B* ____castResult_4;
};

// System.WeakReference`1<WinRT.DllModule>
struct WeakReference_1_tF0FE779FF19F60CD0EDCF701B7267706C91AB14F  : public RuntimeObject
{
	// System.Runtime.InteropServices.GCHandle System.WeakReference`1::handle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___handle_0;
	// System.Boolean System.WeakReference`1::trackResurrection
	bool ___trackResurrection_1;
};

// WinRT.Delegate
struct Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13  : public RuntimeObject
{
	// System.Int32 WinRT.Delegate::_refs
	int32_t ____refs_0;
	// System.IntPtr WinRT.Delegate::ThisPtr
	intptr_t ___ThisPtr_1;
	// System.Guid WinRT.Delegate::_iid
	Guid_t ____iid_2;
	// WinRT.ModuleReference WinRT.Delegate::_module
	ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 ____module_7;
	// System.Runtime.InteropServices.GCHandle WinRT.Delegate::_thisHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____thisHandle_8;
	// System.WeakReference WinRT.Delegate::_weakInvoker
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ____weakInvoker_9;
	// WinRT.Delegate/UnmanagedObject WinRT.Delegate::_unmanagedObj
	UnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290 ____unmanagedObj_10;
};

// WinRT.DllModule
struct DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63  : public RuntimeObject
{
	// System.String WinRT.DllModule::_fileName
	String_t* ____fileName_0;
	// WinRT.ModuleReference WinRT.DllModule::_moduleHandle
	ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 ____moduleHandle_1;
	// WinRT.DllModule/DllGetActivationFactory WinRT.DllModule::_GetActivationFactory
	DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* ____GetActivationFactory_2;
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
{
};

// WinRT.Interop.IActivationFactoryVftbl
struct IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209 
{
	static const Il2CppGuid CLSID;

	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IActivationFactoryVftbl::IInspectableVftbl
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 ___IInspectableVftbl_0;
	// WinRT.Interop.IActivationFactoryVftbl/_ActivateInstance WinRT.Interop.IActivationFactoryVftbl::ActivateInstance
	_ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8* ___ActivateInstance_1;
};
// Native definition for P/Invoke marshalling of WinRT.Interop.IActivationFactoryVftbl
struct IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209_marshaled_pinvoke
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___ActivateInstance_1;
};
// Native definition for COM marshalling of WinRT.Interop.IActivationFactoryVftbl
struct IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209_marshaled_com
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___ActivateInstance_1;
};

// WinRT.IObjectReference
struct IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38  : public RuntimeObject
{
	// System.IntPtr WinRT.IObjectReference::ThisPtr
	intptr_t ___ThisPtr_0;
	// WinRT.ModuleReference WinRT.IObjectReference::Module
	ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 ___Module_1;
	// WinRT.Interop.IUnknownVftbl WinRT.IObjectReference::<VftblIUnknown>k__BackingField
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860 ___U3CVftblIUnknownU3Ek__BackingField_2;
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

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
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

// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E  : public RuntimeObject
{
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle_1;
};

// WinRT.WinrtModule
struct WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3  : public RuntimeObject
{
	// WinRT.ModuleReference WinRT.WinrtModule::_module
	ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 ____module_0;
};

// WinRT.Interop.IAsyncInfo/Vftbl
struct Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8 
{
	static const Il2CppGuid CLSID;

	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IAsyncInfo/Vftbl::IInspectableVftbl
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsInt WinRT.Interop.IAsyncInfo/Vftbl::get_Id
	_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95* ___get_Id_1;
	// WinRT.Interop._get_PropertyAsEnum WinRT.Interop.IAsyncInfo/Vftbl::get_Status
	_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0* ___get_Status_2;
	// WinRT.Interop._get_PropertyAsInt WinRT.Interop.IAsyncInfo/Vftbl::get_ErrorCode
	_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95* ___get_ErrorCode_3;
	// WinRT.Interop._method0 WinRT.Interop.IAsyncInfo/Vftbl::Cancel
	_method0_tED7C943BF18C50F2E18BDD75577047424BD63602* ___Cancel_4;
	// WinRT.Interop._method0 WinRT.Interop.IAsyncInfo/Vftbl::Close
	_method0_tED7C943BF18C50F2E18BDD75577047424BD63602* ___Close_5;
};
// Native definition for P/Invoke marshalling of WinRT.Interop.IAsyncInfo/Vftbl
struct Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_marshaled_pinvoke
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Id_1;
	Il2CppMethodPointer ___get_Status_2;
	Il2CppMethodPointer ___get_ErrorCode_3;
	Il2CppMethodPointer ___Cancel_4;
	Il2CppMethodPointer ___Close_5;
};
// Native definition for COM marshalling of WinRT.Interop.IAsyncInfo/Vftbl
struct Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_marshaled_com
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Id_1;
	Il2CppMethodPointer ___get_Status_2;
	Il2CppMethodPointer ___get_ErrorCode_3;
	Il2CppMethodPointer ___Cancel_4;
	Il2CppMethodPointer ___Close_5;
};

// WinRT.Interop.IAsyncOperation/Vftbl
struct Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756 
{
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IAsyncOperation/Vftbl::IInspectableVftbl
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 ___IInspectableVftbl_0;
	// WinRT.Interop._put_PropertyAsObject WinRT.Interop.IAsyncOperation/Vftbl::put_Completed
	_put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A* ___put_Completed_1;
	// WinRT.Interop._get_PropertyAsObject WinRT.Interop.IAsyncOperation/Vftbl::get_Completed
	_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* ___get_Completed_2;
	// System.IntPtr WinRT.Interop.IAsyncOperation/Vftbl::GetResults
	intptr_t ___GetResults_3;
};
// Native definition for P/Invoke marshalling of WinRT.Interop.IAsyncOperation/Vftbl
struct Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756_marshaled_pinvoke
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___put_Completed_1;
	Il2CppMethodPointer ___get_Completed_2;
	intptr_t ___GetResults_3;
};
// Native definition for COM marshalling of WinRT.Interop.IAsyncOperation/Vftbl
struct Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756_marshaled_com
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___put_Completed_1;
	Il2CppMethodPointer ___get_Completed_2;
	intptr_t ___GetResults_3;
};

// Microsoft.MixedReality.QR.IQRCode/Vftbl
struct Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68 
{
	static const Il2CppGuid CLSID;

	// WinRT.Interop.IInspectableVftbl Microsoft.MixedReality.QR.IQRCode/Vftbl::IInspectableVftbl
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsGuid Microsoft.MixedReality.QR.IQRCode/Vftbl::get_Id
	_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC* ___get_Id_1;
	// WinRT.Interop._get_PropertyAsGuid Microsoft.MixedReality.QR.IQRCode/Vftbl::get_SpatialGraphNodeId
	_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC* ___get_SpatialGraphNodeId_2;
	// WinRT.Interop._get_PropertyAsEnum Microsoft.MixedReality.QR.IQRCode/Vftbl::get_Version
	_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0* ___get_Version_3;
	// WinRT.Interop._get_PropertyAsFloat Microsoft.MixedReality.QR.IQRCode/Vftbl::get_PhysicalSideLength
	_get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86* ___get_PhysicalSideLength_4;
	// WinRT.Interop._get_PropertyAsTimeSpan Microsoft.MixedReality.QR.IQRCode/Vftbl::get_SystemRelativeLastDetectedTime
	_get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21* ___get_SystemRelativeLastDetectedTime_5;
	// WinRT.Interop._get_PropertyAsDateTime Microsoft.MixedReality.QR.IQRCode/Vftbl::get_LastDetectedTime
	_get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0* ___get_LastDetectedTime_6;
	// WinRT.Interop._get_PropertyAsObject Microsoft.MixedReality.QR.IQRCode/Vftbl::get_Data
	_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* ___get_Data_7;
	// WinRT.Interop._get_PropertyAsUInt Microsoft.MixedReality.QR.IQRCode/Vftbl::get_RawDataSize
	_get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C* ___get_RawDataSize_8;
	// Microsoft.MixedReality.QR.IQRCode/Vftbl/_GetRawData Microsoft.MixedReality.QR.IQRCode/Vftbl::GetRawData
	_GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751* ___GetRawData_9;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.QR.IQRCode/Vftbl
struct Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68_marshaled_pinvoke
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Id_1;
	Il2CppMethodPointer ___get_SpatialGraphNodeId_2;
	Il2CppMethodPointer ___get_Version_3;
	Il2CppMethodPointer ___get_PhysicalSideLength_4;
	Il2CppMethodPointer ___get_SystemRelativeLastDetectedTime_5;
	Il2CppMethodPointer ___get_LastDetectedTime_6;
	Il2CppMethodPointer ___get_Data_7;
	Il2CppMethodPointer ___get_RawDataSize_8;
	Il2CppMethodPointer ___GetRawData_9;
};
// Native definition for COM marshalling of Microsoft.MixedReality.QR.IQRCode/Vftbl
struct Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68_marshaled_com
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Id_1;
	Il2CppMethodPointer ___get_SpatialGraphNodeId_2;
	Il2CppMethodPointer ___get_Version_3;
	Il2CppMethodPointer ___get_PhysicalSideLength_4;
	Il2CppMethodPointer ___get_SystemRelativeLastDetectedTime_5;
	Il2CppMethodPointer ___get_LastDetectedTime_6;
	Il2CppMethodPointer ___get_Data_7;
	Il2CppMethodPointer ___get_RawDataSize_8;
	Il2CppMethodPointer ___GetRawData_9;
};

// Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl
struct Vftbl_t8A646A4FF10C4E61B9567706D6341532F98049E4 
{
	// WinRT.Interop.IInspectableVftbl Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl::IInspectableVftbl
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl::get_Code
	_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* ___get_Code_1;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl
struct Vftbl_t8A646A4FF10C4E61B9567706D6341532F98049E4_marshaled_pinvoke
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Code_1;
};
// Native definition for COM marshalling of Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl
struct Vftbl_t8A646A4FF10C4E61B9567706D6341532F98049E4_marshaled_com
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Code_1;
};

// Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl
struct Vftbl_t59B53990324AB3321755599430E19E4BD8BFB5C6 
{
	// WinRT.Interop.IInspectableVftbl Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl::IInspectableVftbl
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl::get_Code
	_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* ___get_Code_1;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl
struct Vftbl_t59B53990324AB3321755599430E19E4BD8BFB5C6_marshaled_pinvoke
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Code_1;
};
// Native definition for COM marshalling of Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl
struct Vftbl_t59B53990324AB3321755599430E19E4BD8BFB5C6_marshaled_com
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Code_1;
};

// Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl
struct Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA 
{
	// WinRT.Interop.IInspectableVftbl Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl::IInspectableVftbl
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl::get_Code
	_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* ___get_Code_1;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl
struct Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA_marshaled_pinvoke
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Code_1;
};
// Native definition for COM marshalling of Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl
struct Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA_marshaled_com
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Code_1;
};

// Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl
struct Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0 
{
	static const Il2CppGuid CLSID;

	// WinRT.Interop.IInspectableVftbl Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl::IInspectableVftbl
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 ___IInspectableVftbl_0;
	// WinRT.Interop._add_EventHandler Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl::add_Added
	_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* ___add_Added_1;
	// WinRT.Interop._remove_EventHandler Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl::remove_Added
	_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* ___remove_Added_2;
	// WinRT.Interop._add_EventHandler Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl::add_Updated
	_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* ___add_Updated_3;
	// WinRT.Interop._remove_EventHandler Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl::remove_Updated
	_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* ___remove_Updated_4;
	// WinRT.Interop._add_EventHandler Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl::add_Removed
	_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* ___add_Removed_5;
	// WinRT.Interop._remove_EventHandler Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl::remove_Removed
	_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* ___remove_Removed_6;
	// WinRT.Interop._add_EventHandler Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl::add_EnumerationCompleted
	_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* ___add_EnumerationCompleted_7;
	// WinRT.Interop._remove_EventHandler Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl::remove_EnumerationCompleted
	_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* ___remove_EnumerationCompleted_8;
	// WinRT.Interop._method0 Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl::Start
	_method0_tED7C943BF18C50F2E18BDD75577047424BD63602* ___Start_9;
	// WinRT.Interop._method0 Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl::Stop
	_method0_tED7C943BF18C50F2E18BDD75577047424BD63602* ___Stop_10;
	// WinRT.Interop._get_PropertyAsObject Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl::GetList
	_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* ___GetList_11;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl
struct Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_marshaled_pinvoke
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___add_Added_1;
	Il2CppMethodPointer ___remove_Added_2;
	Il2CppMethodPointer ___add_Updated_3;
	Il2CppMethodPointer ___remove_Updated_4;
	Il2CppMethodPointer ___add_Removed_5;
	Il2CppMethodPointer ___remove_Removed_6;
	Il2CppMethodPointer ___add_EnumerationCompleted_7;
	Il2CppMethodPointer ___remove_EnumerationCompleted_8;
	Il2CppMethodPointer ___Start_9;
	Il2CppMethodPointer ___Stop_10;
	Il2CppMethodPointer ___GetList_11;
};
// Native definition for COM marshalling of Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl
struct Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_marshaled_com
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___add_Added_1;
	Il2CppMethodPointer ___remove_Added_2;
	Il2CppMethodPointer ___add_Updated_3;
	Il2CppMethodPointer ___remove_Updated_4;
	Il2CppMethodPointer ___add_Removed_5;
	Il2CppMethodPointer ___remove_Removed_6;
	Il2CppMethodPointer ___add_EnumerationCompleted_7;
	Il2CppMethodPointer ___remove_EnumerationCompleted_8;
	Il2CppMethodPointer ___Start_9;
	Il2CppMethodPointer ___Stop_10;
	Il2CppMethodPointer ___GetList_11;
};

// Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl
struct Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED 
{
	static const Il2CppGuid CLSID;

	// WinRT.Interop.IInspectableVftbl Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl::IInspectableVftbl
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsBool Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl::IsSupported
	_get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E* ___IsSupported_1;
	// Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl/_RequestAccessAsync Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl::RequestAccessAsync
	_RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E* ___RequestAccessAsync_2;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl
struct Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_marshaled_pinvoke
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___IsSupported_1;
	Il2CppMethodPointer ___RequestAccessAsync_2;
};
// Native definition for COM marshalling of Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl
struct Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_marshaled_com
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___IsSupported_1;
	Il2CppMethodPointer ___RequestAccessAsync_2;
};

// System.Action`1<WinRT.EventSource/_Invoke>
struct Action_1_t73AC50EBBEBE2294086BCA7C6510850E9A338B32  : public MulticastDelegate_t
{
};

// System.Action`1<WinRT.Interop.IAsyncOperation/CompletedHandler>
struct Action_1_tE294E9648C5B0ECD47391E217DFB6319AF245983  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>
struct EventHandler_1_t8E85A75707F8C26E7861055C6D1E6C531430CF46  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32,Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>
struct Func_2_t94B038EBC18D2A3B1F9F1134927EC9DF0F3F2F6B  : public MulticastDelegate_t
{
};

// WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl>
struct ObjectReference_1_t2BE9E2A525679BDB04174543B74311303327E8DD  : public IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209 ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl>
struct ObjectReference_1_tD121C03E6E8107C35A4B7717FA7FFEFA92485DC5  : public IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8 ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>
struct ObjectReference_1_t81B67CD294B31DA00DA91F177EFC7632539F4DBF  : public IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756 ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCode/Vftbl>
struct ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05  : public IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68 ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl>
struct ObjectReference_1_t7B7A6E71970334EC248BD99A424F0F5D929745C5  : public IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t8A646A4FF10C4E61B9567706D6341532F98049E4 ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl>
struct ObjectReference_1_t3705DE5AB44717B102A29CE29AA411BFE06E41B4  : public IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t59B53990324AB3321755599430E19E4BD8BFB5C6 ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl>
struct ObjectReference_1_tF3D0191716991966F93B81CBE75037784DA7D720  : public IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl>
struct ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F  : public IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0 ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl>
struct ObjectReference_1_t469AE3F6C4AC12D30FDA14DB6C055BA469085EED  : public IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeAddedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeAddedEventArgs>
struct UnmarshalArgs_t021850FDA961D6DB7F0FE73422AE6BD5BDD2C6CE  : public MulticastDelegate_t
{
};

// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeEnumerationCompletedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,System.Object>
struct UnmarshalArgs_tBAD263BBEE30B538B58292AF503D10274F68BEAE  : public MulticastDelegate_t
{
};

// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeRemovedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeRemovedEventArgs>
struct UnmarshalArgs_tCF30549DA5BC69A6B300D2468FD29F4D22549114  : public MulticastDelegate_t
{
};

// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeUpdatedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>
struct UnmarshalArgs_tBF999913624F2E64EB0395B280213EF2225EC792  : public MulticastDelegate_t
{
};

// WinRT.Interop.IDelegate2_Obj_Enum
struct IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30  : public MulticastDelegate_t
{
};

// WinRT.Interop.IDelegate2_Obj_Obj
struct IDelegate2_Obj_Obj_t66149A37DDD95F736A19120D62BD83A3E5FD39CA  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449  : public SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// System.TypeLoadException
struct TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_18;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_19;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_20;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_21;
};

// WinRT.Interop._add_EventHandler
struct _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D  : public MulticastDelegate_t
{
};

// WinRT.Interop._get_PropertyAsBool
struct _get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E  : public MulticastDelegate_t
{
};

// WinRT.Interop._get_PropertyAsDateTime
struct _get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0  : public MulticastDelegate_t
{
};

// WinRT.Interop._get_PropertyAsEnum
struct _get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0  : public MulticastDelegate_t
{
};

// WinRT.Interop._get_PropertyAsFloat
struct _get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86  : public MulticastDelegate_t
{
};

// WinRT.Interop._get_PropertyAsGuid
struct _get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC  : public MulticastDelegate_t
{
};

// WinRT.Interop._get_PropertyAsInt
struct _get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95  : public MulticastDelegate_t
{
};

// WinRT.Interop._get_PropertyAsObject
struct _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11  : public MulticastDelegate_t
{
};

// WinRT.Interop._get_PropertyAsTimeSpan
struct _get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21  : public MulticastDelegate_t
{
};

// WinRT.Interop._get_PropertyAsUInt
struct _get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C  : public MulticastDelegate_t
{
};

// WinRT.Interop._method0
struct _method0_tED7C943BF18C50F2E18BDD75577047424BD63602  : public MulticastDelegate_t
{
};

// WinRT.Interop._put_PropertyAsObject
struct _put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A  : public MulticastDelegate_t
{
};

// WinRT.Interop._remove_EventHandler
struct _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0  : public MulticastDelegate_t
{
};

// WinRT.DllModule/DllGetActivationFactory
struct DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB  : public MulticastDelegate_t
{
};

// WinRT.EventSource/_Invoke
struct _Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276  : public MulticastDelegate_t
{
};

// WinRT.Interop.IActivationFactoryVftbl/_ActivateInstance
struct _ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8  : public MulticastDelegate_t
{
};

// WinRT.Interop.IAsyncOperation/CompletedHandler
struct CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3  : public MulticastDelegate_t
{
};

// WinRT.Interop.IInspectableVftbl/_GetIids
struct _GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033  : public MulticastDelegate_t
{
};

// WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName
struct _GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909  : public MulticastDelegate_t
{
};

// WinRT.Interop.IInspectableVftbl/_GetTrustLevel
struct _GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D  : public MulticastDelegate_t
{
};

// WinRT.Interop.IUnknownVftbl/_AddRef
struct _AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A  : public MulticastDelegate_t
{
};

// WinRT.Interop.IUnknownVftbl/_QueryInterface
struct _QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543  : public MulticastDelegate_t
{
};

// WinRT.Interop.IUnknownVftbl/_Release
struct _Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE  : public MulticastDelegate_t
{
};

// WinRT.Mono/mono_thread_cleanup_initialize
struct mono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47  : public MulticastDelegate_t
{
};

// WinRT.Mono/mono_thread_cleanup_register
struct mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C  : public MulticastDelegate_t
{
};

// WinRT.Mono/mono_thread_internal_attach
struct mono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50  : public MulticastDelegate_t
{
};

// Microsoft.MixedReality.QR.IQRCode/Vftbl/_GetRawData
struct _GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751  : public MulticastDelegate_t
{
};

// Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl/_RequestAccessAsync
struct _RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E  : public MulticastDelegate_t
{
};

// System.DllNotFoundException
struct DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534  : public TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>

// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>

// System.Collections.Generic.HashSet`1<System.IntPtr>

// System.Collections.Generic.HashSet`1<System.IntPtr>

// System.Lazy`1<System.Collections.Generic.HashSet`1<System.IntPtr>>

// System.Lazy`1<System.Collections.Generic.HashSet`1<System.IntPtr>>

// System.Lazy`1<System.Boolean>

// System.Lazy`1<System.Boolean>

// WinRT.WeakLazy`1<WinRT.WinrtModule>

// WinRT.WeakLazy`1<WinRT.WinrtModule>

// WinRT.WeakLazy`1<Microsoft.MixedReality.QR.QRCodeWatcher/Statics>

// WinRT.WeakLazy`1<Microsoft.MixedReality.QR.QRCodeWatcher/Statics>

// System.Attribute

// System.Attribute

// WinRT.EventSource
struct EventSource_t7A3A7FAFD4DF4419E8654DAB2D6E63087D9491D0_StaticFields
{
	// WinRT.Interop.IDelegate2_Obj_Obj WinRT.EventSource::_invokeDelegate
	IDelegate2_Obj_Obj_t66149A37DDD95F736A19120D62BD83A3E5FD39CA* ____invokeDelegate_0;
};

// WinRT.EventSource

// WinRT.Interop.IAsyncInfo

// WinRT.Interop.IAsyncInfo

// WinRT.Interop.IAsyncOperation
struct IAsyncOperation_tA0BCF6F0668C9A832BFD02DE1A0F08CE40A7FAED_StaticFields
{
	// WinRT.Interop.IDelegate2_Obj_Enum WinRT.Interop.IAsyncOperation::_OnCompletedDelegate
	IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30* ____OnCompletedDelegate_1;
};

// WinRT.Interop.IAsyncOperation

// Microsoft.MixedReality.QR.IQRCode

// Microsoft.MixedReality.QR.IQRCode

// Microsoft.MixedReality.QR.IQRCodeAddedEventArgs

// Microsoft.MixedReality.QR.IQRCodeAddedEventArgs

// Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs

// Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs

// Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs

// Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs

// Microsoft.MixedReality.QR.IQRCodeWatcher

// Microsoft.MixedReality.QR.IQRCodeWatcher

// Microsoft.MixedReality.QR.IQRCodeWatcherStatics

// Microsoft.MixedReality.QR.IQRCodeWatcherStatics

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// WinRT.Mono
struct Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_StaticFields
{
	// System.Lazy`1<System.Boolean> WinRT.Mono::_usingMono
	Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6* ____usingMono_0;
};

// WinRT.Mono

// WinRT.Platform
struct Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_StaticFields
{
	// WinRT.Platform/IPlatformLinkage WinRT.Platform::_platformLinkage
	RuntimeObject* ____platformLinkage_0;
};

// WinRT.Platform

// Microsoft.MixedReality.QR.QRCode

// Microsoft.MixedReality.QR.QRCode

// Microsoft.MixedReality.QR.QRCodeAddedEventArgs

// Microsoft.MixedReality.QR.QRCodeAddedEventArgs

// Microsoft.MixedReality.QR.QRCodeRemovedEventArgs

// Microsoft.MixedReality.QR.QRCodeRemovedEventArgs

// Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs

// Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs

// Microsoft.MixedReality.QR.QRCodeWatcher
struct QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7_StaticFields
{
	// WinRT.WeakLazy`1<Microsoft.MixedReality.QR.QRCodeWatcher/Statics> Microsoft.MixedReality.QR.QRCodeWatcher::_statics
	WeakLazy_1_tEB593B90A27476DA223599A6DC2674C5B37DB4C2* ____statics_0;
};

// Microsoft.MixedReality.QR.QRCodeWatcher

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// WinRT.Delegate/InitialReference

// WinRT.Delegate/InitialReference

// WinRT.Interop.IAsyncOperation/<>c__DisplayClass4_0

// WinRT.Interop.IAsyncOperation/<>c__DisplayClass4_0

// Microsoft.MixedReality.QR.IQRCodeWatcher/<>c
struct U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_StaticFields
{
	// Microsoft.MixedReality.QR.IQRCodeWatcher/<>c Microsoft.MixedReality.QR.IQRCodeWatcher/<>c::<>9
	U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B* ___U3CU3E9_0;
	// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeAddedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeAddedEventArgs> Microsoft.MixedReality.QR.IQRCodeWatcher/<>c::<>9__5_0
	UnmarshalArgs_t021850FDA961D6DB7F0FE73422AE6BD5BDD2C6CE* ___U3CU3E9__5_0_1;
	// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeUpdatedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs> Microsoft.MixedReality.QR.IQRCodeWatcher/<>c::<>9__5_1
	UnmarshalArgs_tBF999913624F2E64EB0395B280213EF2225EC792* ___U3CU3E9__5_1_2;
	// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeRemovedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeRemovedEventArgs> Microsoft.MixedReality.QR.IQRCodeWatcher/<>c::<>9__5_2
	UnmarshalArgs_tCF30549DA5BC69A6B300D2468FD29F4D22549114* ___U3CU3E9__5_2_3;
	// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeEnumerationCompletedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,System.Object> Microsoft.MixedReality.QR.IQRCodeWatcher/<>c::<>9__5_3
	UnmarshalArgs_tBAD263BBEE30B538B58292AF503D10274F68BEAE* ___U3CU3E9__5_3_4;
};

// Microsoft.MixedReality.QR.IQRCodeWatcher/<>c

// Microsoft.MixedReality.QR.IQRCodeWatcherStatics/<>c
struct U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4_StaticFields
{
	// Microsoft.MixedReality.QR.IQRCodeWatcherStatics/<>c Microsoft.MixedReality.QR.IQRCodeWatcherStatics/<>c::<>9
	U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4* ___U3CU3E9_0;
	// System.Func`2<System.Int32,Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus> Microsoft.MixedReality.QR.IQRCodeWatcherStatics/<>c::<>9__6_0
	Func_2_t94B038EBC18D2A3B1F9F1134927EC9DF0F3F2F6B* ___U3CU3E9__6_0_1;
};

// Microsoft.MixedReality.QR.IQRCodeWatcherStatics/<>c

// WinRT.Mono/<>c
struct U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47_StaticFields
{
	// WinRT.Mono/<>c WinRT.Mono/<>c::<>9
	U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47* ___U3CU3E9_0;
};

// WinRT.Mono/<>c

// WinRT.Mono/ThreadContext
struct ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields
{
	// System.Lazy`1<System.Collections.Generic.HashSet`1<System.IntPtr>> WinRT.Mono/ThreadContext::_foreignThreads
	Lazy_1_tF1F993EAE4F44D33B36FFF7D9310F2A84485A643* ____foreignThreads_0;
	// System.Lazy`1<System.Collections.Generic.HashSet`1<System.IntPtr>> WinRT.Mono/ThreadContext::_presumedNonForeignThreads
	Lazy_1_tF1F993EAE4F44D33B36FFF7D9310F2A84485A643* ____presumedNonForeignThreads_1;
	// System.Threading.EventWaitHandle WinRT.Mono/ThreadContext::_threadCleanupRequested
	EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ____threadCleanupRequested_2;
	// System.Threading.EventWaitHandle WinRT.Mono/ThreadContext::_threadCleanupCompleted
	EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ____threadCleanupCompleted_3;
	// System.IntPtr WinRT.Mono/ThreadContext::_monoSupportHandle
	intptr_t ____monoSupportHandle_4;
	// WinRT.Mono/mono_thread_cleanup_register WinRT.Mono/ThreadContext::_cleanupRegister
	mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C* ____cleanupRegister_5;
};

// WinRT.Mono/ThreadContext

// WinRT.Platform/DotNETLinkage

// WinRT.Platform/DotNETLinkage

// WinRT.Platform/IL2CPPLinkage

// WinRT.Platform/IL2CPPLinkage

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>
struct Task_1_t0CA270124835536D2EC0B9F820E916762C5F14DD_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t48E1FDC6BD0D1BC39B5C84C4BA057707718664D0* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>

// WinRT.Interop._IAsyncOperation`2<System.Threading.Tasks.Task`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>,Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>

// WinRT.Interop._IAsyncOperation`2<System.Threading.Tasks.Task`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>,Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// Microsoft.CodeAnalysis.EmbeddedAttribute

// Microsoft.CodeAnalysis.EmbeddedAttribute

// WinRT.Interop.EventRegistrationToken

// WinRT.Interop.EventRegistrationToken

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// Microsoft.MixedReality.QR.IAsyncOperationCompletedHandler_QRCodeWatcherAccessStatus

// Microsoft.MixedReality.QR.IAsyncOperationCompletedHandler_QRCodeWatcherAccessStatus

// Microsoft.MixedReality.QR.IQRCodeAddedHandler

// Microsoft.MixedReality.QR.IQRCodeAddedHandler

// Microsoft.MixedReality.QR.IQRCodeEnumerationCompletedHandler

// Microsoft.MixedReality.QR.IQRCodeEnumerationCompletedHandler

// Microsoft.MixedReality.QR.IQRCodeRemovedHandler

// Microsoft.MixedReality.QR.IQRCodeRemovedHandler

// Microsoft.MixedReality.QR.IQRCodeUpdatedHandler

// Microsoft.MixedReality.QR.IQRCodeUpdatedHandler

// WinRT.Interop.IUnknownVftbl

// WinRT.Interop.IUnknownVftbl

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Runtime.CompilerServices.IsUnmanagedAttribute

// System.Runtime.CompilerServices.IsUnmanagedAttribute

// WinRT.Interop.MonoPInvokeCallbackAttribute

// WinRT.Interop.MonoPInvokeCallbackAttribute

// System.Single

// System.Single

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// WinRT.Interop._Bool

// WinRT.Interop._Bool

// WinRT.Interop._DateTime

// WinRT.Interop._DateTime

// WinRT.Interop._TimeSpan

// WinRT.Interop._TimeSpan

// Microsoft.MixedReality.QR.QRCodeWatcher/Statics

// Microsoft.MixedReality.QR.QRCodeWatcher/Statics

// WinRT.Interop.DelegateProperty`1<WinRT.Interop.IAsyncOperation/CompletedHandler>

// WinRT.Interop.DelegateProperty`1<WinRT.Interop.IAsyncOperation/CompletedHandler>

// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeAddedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeAddedEventArgs>

// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeAddedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeAddedEventArgs>

// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeEnumerationCompletedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,System.Object>

// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeEnumerationCompletedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,System.Object>

// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeRemovedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeRemovedEventArgs>

// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeRemovedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeRemovedEventArgs>

// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeUpdatedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>

// WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeUpdatedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_6;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_7;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_8;
};

// System.DateTimeOffset

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Runtime.InteropServices.GCHandle

// System.Runtime.InteropServices.GCHandle

// WinRT.HString

// WinRT.HString

// WinRT.Interop.IAgileObjectVftbl

// WinRT.Interop.IAgileObjectVftbl

// WinRT.Interop.IDelegateVftbl

// WinRT.Interop.IDelegateVftbl

// WinRT.Interop.IInspectableVftbl

// WinRT.Interop.IInspectableVftbl

// WinRT.ModuleReference

// WinRT.ModuleReference

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// WinRT.VftblPtr

// WinRT.VftblPtr

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};

// System.Threading.WaitHandle

// WinRT.Delegate/UnmanagedObject

// WinRT.Delegate/UnmanagedObject

// WinRT.EventSource/<>c__DisplayClass1_0

// WinRT.EventSource/<>c__DisplayClass1_0

// WinRT.Interop.IAsyncOperation_Enum`2<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus,Microsoft.MixedReality.QR.IAsyncOperationCompletedHandler_QRCodeWatcherAccessStatus>

// WinRT.Interop.IAsyncOperation_Enum`2<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus,Microsoft.MixedReality.QR.IAsyncOperationCompletedHandler_QRCodeWatcherAccessStatus>

// System.WeakReference`1<WinRT.DllModule>

// System.WeakReference`1<WinRT.DllModule>

// WinRT.Delegate
struct Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_StaticFields
{
	// WinRT.Interop.IUnknownVftbl/_QueryInterface WinRT.Delegate::_QueryInterface
	_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543* ____QueryInterface_3;
	// WinRT.Interop.IUnknownVftbl/_AddRef WinRT.Delegate::_AddRef
	_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A* ____AddRef_4;
	// WinRT.Interop.IUnknownVftbl/_Release WinRT.Delegate::_Release
	_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE* ____Release_5;
	// WinRT.Interop.IDelegateVftbl WinRT.Delegate::_vftblTemplate
	IDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0 ____vftblTemplate_6;
};

// WinRT.Delegate

// WinRT.DllModule
struct DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>> WinRT.DllModule::_cache
	Dictionary_2_t3795BDA214C147B8B018698C2A6E69460C12086C* ____cache_3;
};

// WinRT.DllModule

// System.Threading.EventWaitHandle

// System.Threading.EventWaitHandle

// WinRT.Interop.IActivationFactoryVftbl

// WinRT.Interop.IActivationFactoryVftbl

// WinRT.IObjectReference

// WinRT.IObjectReference

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

// System.WeakReference

// System.WeakReference

// WinRT.WinrtModule
struct WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3_StaticFields
{
	// WinRT.WeakLazy`1<WinRT.WinrtModule> WinRT.WinrtModule::_instance
	WeakLazy_1_t6DB148C2C80364F816855A8A29911932E7C81356* ____instance_1;
};

// WinRT.WinrtModule

// WinRT.Interop.IAsyncInfo/Vftbl

// WinRT.Interop.IAsyncInfo/Vftbl

// WinRT.Interop.IAsyncOperation/Vftbl

// WinRT.Interop.IAsyncOperation/Vftbl

// Microsoft.MixedReality.QR.IQRCode/Vftbl

// Microsoft.MixedReality.QR.IQRCode/Vftbl

// Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl

// Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl

// Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl

// Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl

// Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl

// Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl

// Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl

// Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl

// Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl

// Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl

// System.Action`1<WinRT.EventSource/_Invoke>

// System.Action`1<WinRT.EventSource/_Invoke>

// System.Action`1<WinRT.Interop.IAsyncOperation/CompletedHandler>

// System.Action`1<WinRT.Interop.IAsyncOperation/CompletedHandler>

// System.EventHandler`1<Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>

// System.EventHandler`1<Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>

// System.Func`1<System.Boolean>

// System.Func`1<System.Boolean>

// System.Func`2<System.Int32,Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>

// System.Func`2<System.Int32,Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>

// WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl>

// WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl>

// WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl>

// WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl>

// WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>

// WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>

// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCode/Vftbl>

// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCode/Vftbl>

// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl>

// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl>

// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl>

// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl>

// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl>

// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl>

// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl>

// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl>

// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl>

// WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl>

// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeAddedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeAddedEventArgs>

// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeAddedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeAddedEventArgs>

// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeEnumerationCompletedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,System.Object>

// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeEnumerationCompletedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,System.Object>

// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeRemovedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeRemovedEventArgs>

// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeRemovedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeRemovedEventArgs>

// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeUpdatedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>

// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeUpdatedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>

// WinRT.Interop.IDelegate2_Obj_Enum

// WinRT.Interop.IDelegate2_Obj_Enum

// WinRT.Interop.IDelegate2_Obj_Obj

// WinRT.Interop.IDelegate2_Obj_Obj

// System.InvalidOperationException

// System.InvalidOperationException

// System.NotImplementedException

// System.NotImplementedException

// Microsoft.Win32.SafeHandles.SafeWaitHandle

// Microsoft.Win32.SafeHandles.SafeWaitHandle

// System.Reflection.TypeInfo

// System.Reflection.TypeInfo

// WinRT.Interop._add_EventHandler

// WinRT.Interop._add_EventHandler

// WinRT.Interop._get_PropertyAsBool

// WinRT.Interop._get_PropertyAsBool

// WinRT.Interop._get_PropertyAsDateTime

// WinRT.Interop._get_PropertyAsDateTime

// WinRT.Interop._get_PropertyAsEnum

// WinRT.Interop._get_PropertyAsEnum

// WinRT.Interop._get_PropertyAsFloat

// WinRT.Interop._get_PropertyAsFloat

// WinRT.Interop._get_PropertyAsGuid

// WinRT.Interop._get_PropertyAsGuid

// WinRT.Interop._get_PropertyAsInt

// WinRT.Interop._get_PropertyAsInt

// WinRT.Interop._get_PropertyAsObject

// WinRT.Interop._get_PropertyAsObject

// WinRT.Interop._get_PropertyAsTimeSpan

// WinRT.Interop._get_PropertyAsTimeSpan

// WinRT.Interop._get_PropertyAsUInt

// WinRT.Interop._get_PropertyAsUInt

// WinRT.Interop._method0

// WinRT.Interop._method0

// WinRT.Interop._put_PropertyAsObject

// WinRT.Interop._put_PropertyAsObject

// WinRT.Interop._remove_EventHandler

// WinRT.Interop._remove_EventHandler

// WinRT.DllModule/DllGetActivationFactory

// WinRT.DllModule/DllGetActivationFactory

// WinRT.EventSource/_Invoke

// WinRT.EventSource/_Invoke

// WinRT.Interop.IActivationFactoryVftbl/_ActivateInstance

// WinRT.Interop.IActivationFactoryVftbl/_ActivateInstance

// WinRT.Interop.IAsyncOperation/CompletedHandler

// WinRT.Interop.IAsyncOperation/CompletedHandler

// WinRT.Interop.IInspectableVftbl/_GetIids

// WinRT.Interop.IInspectableVftbl/_GetIids

// WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName

// WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName

// WinRT.Interop.IInspectableVftbl/_GetTrustLevel

// WinRT.Interop.IInspectableVftbl/_GetTrustLevel

// WinRT.Interop.IUnknownVftbl/_AddRef

// WinRT.Interop.IUnknownVftbl/_AddRef

// WinRT.Interop.IUnknownVftbl/_QueryInterface

// WinRT.Interop.IUnknownVftbl/_QueryInterface

// WinRT.Interop.IUnknownVftbl/_Release

// WinRT.Interop.IUnknownVftbl/_Release

// WinRT.Mono/mono_thread_cleanup_initialize

// WinRT.Mono/mono_thread_cleanup_initialize

// WinRT.Mono/mono_thread_cleanup_register

// WinRT.Mono/mono_thread_cleanup_register

// WinRT.Mono/mono_thread_internal_attach

// WinRT.Mono/mono_thread_internal_attach

// Microsoft.MixedReality.QR.IQRCode/Vftbl/_GetRawData

// Microsoft.MixedReality.QR.IQRCode/Vftbl/_GetRawData

// Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl/_RequestAccessAsync

// Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl/_RequestAccessAsync

// System.DllNotFoundException

// System.DllNotFoundException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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

IL2CPP_EXTERN_C void IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_pinvoke(const IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860& unmarshaled, IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_pinvoke_back(const IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_pinvoke& marshaled, IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860& unmarshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_pinvoke_cleanup(IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_com(const IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860& unmarshaled, IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_com& marshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_com_back(const IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_com& marshaled, IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860& unmarshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_com_cleanup(IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_com& marshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke(const IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485& unmarshaled, IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_back(const IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_pinvoke& marshaled, IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485& unmarshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_cleanup(IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com(const IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485& unmarshaled, IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_com& marshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_back(const IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_com& marshaled, IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485& unmarshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_cleanup(IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_com& marshaled);

// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Lazy`1<System.Boolean>::.ctor(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1__ctor_mDE4E036B099035F21688E3B1D7BE2EE6CBDBE772_gshared (Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_valueFactory, const RuntimeMethod* method) ;
// System.Void System.Lazy`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1__ctor_m0A69D62E0AB1EFF80F5B751D6A94033D0C7487F2_gshared (Lazy_1_tAD66CD7CC97BB996411F4FE0F49A1817031B906E* __this, const RuntimeMethod* method) ;
// T System.Lazy`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lazy_1_get_Value_m50BC2FE5ACA123147959F3A8B3C523A1242C2E45_gshared (Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6* __this, const RuntimeMethod* method) ;
// T WinRT.Platform::GetProcAddress<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_GetProcAddress_TisRuntimeObject_m33119E24B67F233E7C594520073F14034174715F_gshared (intptr_t ___0_moduleHandle, const RuntimeMethod* method) ;
// T System.Lazy`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lazy_1_get_Value_mC3D475ED3C0FAB4E8BCC96FBF5EF49ED671B86A4_gshared (Lazy_1_tAD66CD7CC97BB996411F4FE0F49A1817031B906E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.IntPtr>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m3715E69647F22B53E7555EBDC0DDD78612F49F77_gshared (HashSet_1_t3E357372EAB73A7B5E49D739B3175D9C5DE270FD* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.IntPtr>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m38EDB84AA15D55ADA0359297102CBB72444E651D_gshared (HashSet_1_t3E357372EAB73A7B5E49D739B3175D9C5DE270FD* __this, intptr_t ___0_item, const RuntimeMethod* method) ;
// T WinRT.Platform::TryGetProcAddress<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_TryGetProcAddress_TisRuntimeObject_m48259761B9A09AD41EC7D9871D3CA7E8E4D2DBEE_gshared (intptr_t ___0_moduleHandle, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.WeakReference`1<System.Object>::TryGetTarget(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_1_TryGetTarget_m4982797589731AB705E9C79FA4531331F40410AB_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject** ___0_target, const RuntimeMethod* method) ;
// System.Void System.WeakReference`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m932665C8861A22B177DC1ACF1EDAA87E1624B5AC_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t2BE9E2A525679BDB04174543B74311303327E8DD* ObjectReference_1_Attach_m943A0FB7F01D3EEA8427204198F7F7D422F06ADF_gshared (ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 ___0_module, intptr_t* ___1_thisPtr, const RuntimeMethod* method) ;
// T WinRT.WeakLazy`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakLazy_1_get_Value_m68F0E6AB09CBE63B5A0F13DF20574C82311EF129_gshared (WeakLazy_1_t06935F7271963CA74DA8B3D3CE447881398F3453* __this, const RuntimeMethod* method) ;
// System.Void WinRT.WeakLazy`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakLazy_1__ctor_m2E3571C39FDE6484AD43DBE1F9E6615E3A505DA0_gshared (WeakLazy_1_t06935F7271963CA74DA8B3D3CE447881398F3453* __this, const RuntimeMethod* method) ;
// T System.Runtime.InteropServices.Marshal::PtrToStructure<WinRT.Delegate/UnmanagedObject>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290 Marshal_PtrToStructure_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_m5C09A9E750405E5894ABC90041204F2107CA270F_gshared (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<System.Object>(TDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m389A3417EF0CFE64A042AA7E53E8604F24458074_gshared (RuntimeObject* ___0_d, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<WinRT.Interop.IDelegateVftbl>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisIDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0_mA5A70DE2935DE6D4A20B1377B1E09D82C707F3DB_gshared (IDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0 ___0_structure, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<WinRT.Interop.IDelegateVftbl>(T,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_TisIDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0_m5C946AC3EC0DF53C6DBB4F412642404137DA513D_gshared (IDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0 ___0_structure, intptr_t ___1_ptr, bool ___2_fDeleteOld, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<WinRT.Delegate/UnmanagedObject>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_mA268FF722247201B76B5143AD28FC7E0594C821C_gshared (UnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290 ___0_structure, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<WinRT.Delegate/UnmanagedObject>(T,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_m333CC2C23D557EDF665616B9E02A71276C949439_gshared (UnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290 ___0_structure, intptr_t ___1_ptr, bool ___2_fDeleteOld, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Int32 WinRT.Delegate::MarshalInvoke<System.Object>(System.IntPtr,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Delegate_MarshalInvoke_TisRuntimeObject_mB1CCF0BB42FEBB61A00F097720D9ADA16630BDB3_gshared (intptr_t ___0_thisPtr, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_invoke, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<WinRT.Interop.IAsyncInfo/Vftbl>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_tD121C03E6E8107C35A4B7717FA7FFEFA92485DC5* IObjectReference_As_TisVftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_m783D62D813E4D899F27B9660BAD0E2063D174710_gshared (IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* __this, const RuntimeMethod* method) ;
// System.Void WinRT.Interop.DelegateProperty`1<System.Object>::.ctor(System.Guid,WinRT.IObjectReference,WinRT.Interop._get_PropertyAsObject,WinRT.Interop._put_PropertyAsObject,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateProperty_1__ctor_mA3ADAA8FDA7661DB5BCF2ECE8F4FCAB7FD7A75A4_gshared (DelegateProperty_1_tB8134BD5DC38DCA6B4354ABAB973397A51E4377D* __this, Guid_t ___0_iid, IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* ___1_obj, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* ___2_get_Delegate, _put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A* ___3_put_Delegate, intptr_t ___4_invokerPtr, const RuntimeMethod* method) ;
// System.Void WinRT.Interop.DelegateProperty`1<System.Object>::set_Value(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateProperty_1_set_Value_m9997FDB284654AA465A066B894C1243F9A3C1764_gshared (DelegateProperty_1_tB8134BD5DC38DCA6B4354ABAB973397A51E4377D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCode/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* ObjectReference_1_Attach_mF60DC5A348914FAD3D2E54DC4B588DB3987BF8AE_gshared (ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 ___0_module, intptr_t* ___1_thisPtr, const RuntimeMethod* method) ;
// System.Void WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeAddedHandler,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmarshalArgs__ctor_m0636FD4A5F3C8898DB6A82C87CC020DC8CD95010_gshared (UnmarshalArgs_tC59A64ADE57338AB94043FD5054C80B5E4F31016* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeAddedHandler,System.Object,System.Object>::.ctor(WinRT.IObjectReference,WinRT.Interop._add_EventHandler,WinRT.Interop._remove_EventHandler,WinRT.EventSource`3/UnmarshalArgs<I,S,A>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_3__ctor_m13DB9F56C4B155EC9BD602EF0FC4D77B97AB11A9_gshared (EventSource_3_t77191C60CA172B42BC2A9B5D53495EC4D15ED0C8* __this, IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* ___0_obj, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* ___1_addHandler, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* ___2_removeHandler, UnmarshalArgs_tC59A64ADE57338AB94043FD5054C80B5E4F31016* ___3_unmarshalArgs, const RuntimeMethod* method) ;
// System.Void WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeUpdatedHandler,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmarshalArgs__ctor_m916E6F1E0DE13EA2513854B6517E5313B6711345_gshared (UnmarshalArgs_tE65A912AC7905726076D4F5D542B60CCC18F6D33* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeUpdatedHandler,System.Object,System.Object>::.ctor(WinRT.IObjectReference,WinRT.Interop._add_EventHandler,WinRT.Interop._remove_EventHandler,WinRT.EventSource`3/UnmarshalArgs<I,S,A>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_3__ctor_m703CD5BBB0E98A0E158C5539CDECC0B9F314AD0C_gshared (EventSource_3_tE87FAC24F05BF26B4B2B241106ED4625E39B0DE6* __this, IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* ___0_obj, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* ___1_addHandler, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* ___2_removeHandler, UnmarshalArgs_tE65A912AC7905726076D4F5D542B60CCC18F6D33* ___3_unmarshalArgs, const RuntimeMethod* method) ;
// System.Void WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeRemovedHandler,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmarshalArgs__ctor_m39C1BE086B359D05657F45518CC3F21B02324D37_gshared (UnmarshalArgs_tD241B9AF9B80C3BDA11B1E0DA5FA313ECDFE4B2F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeRemovedHandler,System.Object,System.Object>::.ctor(WinRT.IObjectReference,WinRT.Interop._add_EventHandler,WinRT.Interop._remove_EventHandler,WinRT.EventSource`3/UnmarshalArgs<I,S,A>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_3__ctor_mDAAE182C31D4550E2A59E48EDA228B040BC72240_gshared (EventSource_3_t346BF82E9B4E3D978DDA408A61E58FD80EB8B9A4* __this, IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* ___0_obj, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* ___1_addHandler, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* ___2_removeHandler, UnmarshalArgs_tD241B9AF9B80C3BDA11B1E0DA5FA313ECDFE4B2F* ___3_unmarshalArgs, const RuntimeMethod* method) ;
// System.Void WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeEnumerationCompletedHandler,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmarshalArgs__ctor_m7CEBA6F465ABB049E517DF27F07D1C7CBC6420B4_gshared (UnmarshalArgs_tBE51C0128AD0A11A81228B5789FBD38B236DCCE1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeEnumerationCompletedHandler,System.Object,System.Object>::.ctor(WinRT.IObjectReference,WinRT.Interop._add_EventHandler,WinRT.Interop._remove_EventHandler,WinRT.EventSource`3/UnmarshalArgs<I,S,A>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_3__ctor_m53094B26CD45BC5C9D3CBA09A6B83E51F43E06DB_gshared (EventSource_3_t5B55BDB8413A691B4F570F35BD846A40D90E0048* __this, IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* ___0_obj, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* ___1_addHandler, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* ___2_removeHandler, UnmarshalArgs_tBE51C0128AD0A11A81228B5789FBD38B236DCCE1* ___3_unmarshalArgs, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl>::FromNativePtrNoRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t7B7A6E71970334EC248BD99A424F0F5D929745C5* ObjectReference_1_FromNativePtrNoRef_m22BE26B2E4AF02CD8C4F6CE6E696DCFAFE9043F4_gshared (intptr_t ___0_thisPtr, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl>::FromNativePtrNoRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_tF3D0191716991966F93B81CBE75037784DA7D720* ObjectReference_1_FromNativePtrNoRef_m5D088DF342D130C456166C6546BF1DC244C88802_gshared (intptr_t ___0_thisPtr, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl>::FromNativePtrNoRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t3705DE5AB44717B102A29CE29AA411BFE06E41B4* ObjectReference_1_FromNativePtrNoRef_m1EED31C6220DC426A757B561A81B146A13956F94_gshared (intptr_t ___0_thisPtr, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t81B67CD294B31DA00DA91F177EFC7632539F4DBF* ObjectReference_1_Attach_mF03F8A0982F269228D9CD07BA1DA8765DDD7D0A1_gshared (ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 ___0_module, intptr_t* ___1_thisPtr, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Int32,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mF7EA0C0597102B34AE4C37131B8E3B99C68A91C6_gshared (Func_2_t27812FE58E785602A6A0494E3EBE39B1DE1597C2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WinRT.Interop.IAsyncOperation_Enum`2<System.Int32Enum,Microsoft.MixedReality.QR.IAsyncOperationCompletedHandler_QRCodeWatcherAccessStatus>::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>,System.Func`2<System.Int32,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncOperation_Enum_2__ctor_mAD6CA838F7EDB1524A5E2649B12B3687B78D0649_gshared (IAsyncOperation_Enum_2_t6D9F33F9639678FEC998E0087546723D1D02FC87* __this, ObjectReference_1_t81B67CD294B31DA00DA91F177EFC7632539F4DBF* ___0_obj, Func_2_t27812FE58E785602A6A0494E3EBE39B1DE1597C2* ___1_castResult, const RuntimeMethod* method) ;
// TTask WinRT.Interop._IAsyncOperation`2<System.Object,System.Int32Enum>::AsTask(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _IAsyncOperation_2_AsTask_m17CD95B9402D4319B99EFF97CF106EDECE88078D_gshared (_IAsyncOperation_2_t4E24877B06FAEC8AA1D3645615F2FD3AA097D274* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<I> WinRT.ActivationFactory`1<System.Object>::ActivateInstance<Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* ActivationFactory_1_ActivateInstance_TisVftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_mFC82B866598F1F00423E50E3855D5D753AAFB1F4_gshared (const RuntimeMethod* method) ;
// System.Void WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeUpdatedHandler,System.Object,System.Object>::add_Event(System.EventHandler`1<A>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_3_add_Event_m22EA051959CB737CAC79D500D45681CFA0B892FB_gshared (EventSource_3_tE87FAC24F05BF26B4B2B241106ED4625E39B0DE6* __this, EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* ___0_value, const RuntimeMethod* method) ;
// System.Void WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeUpdatedHandler,System.Object,System.Object>::remove_Event(System.EventHandler`1<A>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_3_remove_Event_m8BD575315E1CE40AB42E3C87363B7AE4C76BECDE_gshared (EventSource_3_tE87FAC24F05BF26B4B2B241106ED4625E39B0DE6* __this, EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* ___0_value, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<I> WinRT.ActivationFactory`1<System.Object>::As<Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t469AE3F6C4AC12D30FDA14DB6C055BA469085EED* ActivationFactory_1_As_TisVftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_m5E1CD4BE470FC24BBA012411333081129E10FC6E_gshared (const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void WinRT.Platform/DotNETLinkage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNETLinkage__ctor_m8DA4C13229A7A034D7D5DA6337831D3C84700D8F (DotNETLinkage_tFEB21AA499440559A5E46F95441093B3E159993F* __this, const RuntimeMethod* method) ;
// System.Void WinRT.Platform/IL2CPPLinkage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IL2CPPLinkage__ctor_m9C246C52F9FA8359B6912A3ADB64675C65BB3E8C (IL2CPPLinkage_t86525598B7C6F2BE24822BBB29E1FD220B1F8C63* __this, const RuntimeMethod* method) ;
// System.Int32 WinRT.Platform::GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_GetHRForLastWin32Error_mE9CADB65B732F5C766D910BC78ED4B9B5BE3A5F6 (const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::ThrowExceptionForHR(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B (int32_t ___0_errorCode, const RuntimeMethod* method) ;
// System.IntPtr WinRT.Platform/DotNETLinkage::LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DotNETLinkage_LoadLibraryExW_mD928DE4D1CEA11E16D3E7A0978F6550104637A86 (String_t* ___0_fileName, intptr_t ___1_fileHandle, uint32_t ___2_flags, const RuntimeMethod* method) ;
// System.Boolean WinRT.Platform/DotNETLinkage::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNETLinkage_FreeLibrary_m447F0863AE5A2277FD02CCCF3F90047D7945AA8F (intptr_t ___0_moduleHandle, const RuntimeMethod* method) ;
// System.IntPtr WinRT.Platform/DotNETLinkage::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DotNETLinkage_GetProcAddress_m83339A51D17C40A5C5A5B933BA8017416FC2E497 (intptr_t ___0_moduleHandle, String_t* ___1_functionName, const RuntimeMethod* method) ;
// System.Int32 WinRT.Platform/DotNETLinkage::CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoIncrementMTAUsage_m28468DAFFA036081A1D5E746660DDA36925BB3CF (intptr_t* ___0_cookie, const RuntimeMethod* method) ;
// System.Int32 WinRT.Platform/DotNETLinkage::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoDecrementMTAUsage_mF4BEC58A8E296B994F0C8B888918089BE424614F (intptr_t ___0_cookie, const RuntimeMethod* method) ;
// System.Int32 WinRT.Platform/DotNETLinkage::RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_RoGetActivationFactory_mE59EA3F53577B686F4FD751E4EC40D8998F49F5A (intptr_t ___0_runtimeClassId, Guid_t* ___1_iid, intptr_t* ___2_factory, const RuntimeMethod* method) ;
// System.Int32 WinRT.Platform/DotNETLinkage::WindowsCreateString(System.String,System.Int32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_WindowsCreateString_mF504B417C709EF5F6FF2E537F0848F2A4232A276 (String_t* ___0_sourceString, int32_t ___1_length, intptr_t* ___2_hstring, const RuntimeMethod* method) ;
// System.Char* WinRT.Platform/DotNETLinkage::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* DotNETLinkage_WindowsGetStringRawBuffer_mE8F10A8046246230B373355D4DDE3FA7B2AB62D3 (intptr_t ___0_hstring, uint32_t* ___1_length, const RuntimeMethod* method) ;
// System.Int32 WinRT.Platform/DotNETLinkage::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_WindowsDeleteString_mD3A86E579E5098EE449A0B0462E850711C4BD86A (intptr_t ___0_hstring, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_GetHRForLastWin32Error_mA1B832674D94EB69385BABFD23210C22AD539492 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.IntPtr WinRT.Platform/IL2CPPLinkage::LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IL2CPPLinkage_LoadLibraryExW_m18E4DC2C1548A82720D5F6EA6829298FD527A44B (String_t* ___0_fileName, intptr_t ___1_fileHandle, uint32_t ___2_flags, const RuntimeMethod* method) ;
// System.Boolean WinRT.Platform/IL2CPPLinkage::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IL2CPPLinkage_FreeLibrary_m600472A968EF85375AC95D986B5705234ECCA299 (intptr_t ___0_moduleHandle, const RuntimeMethod* method) ;
// System.IntPtr WinRT.Platform/IL2CPPLinkage::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IL2CPPLinkage_GetProcAddress_m288594877624E681B69BDED403A1FB9D51787224 (intptr_t ___0_moduleHandle, String_t* ___1_functionName, const RuntimeMethod* method) ;
// System.Int32 WinRT.Platform/IL2CPPLinkage::CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoIncrementMTAUsage_m9EC30212D172514DAB1B7F19D485E1872D51114E (intptr_t* ___0_cookie, const RuntimeMethod* method) ;
// System.Int32 WinRT.Platform/IL2CPPLinkage::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoDecrementMTAUsage_m34EE3DC83BF60F748B487DDD5D23030EA74CE7F6 (intptr_t ___0_cookie, const RuntimeMethod* method) ;
// System.Int32 WinRT.Platform/IL2CPPLinkage::RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_RoGetActivationFactory_m28A995C87663759610B3651CE3C0531D7D1E411A (intptr_t ___0_runtimeClassId, Guid_t* ___1_iid, intptr_t* ___2_factory, const RuntimeMethod* method) ;
// System.Int32 WinRT.Platform/IL2CPPLinkage::WindowsCreateString(System.String,System.Int32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_WindowsCreateString_m7A2ACFBAA6CF8ADB276044CD79B504D7FA70CBA4 (String_t* ___0_sourceString, int32_t ___1_length, intptr_t* ___2_hstring, const RuntimeMethod* method) ;
// System.Char* WinRT.Platform/IL2CPPLinkage::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* IL2CPPLinkage_WindowsGetStringRawBuffer_m43E89486907592139AB0D52752B2D8D483E4FEE6 (intptr_t ___0_hstring, uint32_t* ___1_length, const RuntimeMethod* method) ;
// System.Int32 WinRT.Platform/IL2CPPLinkage::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_WindowsDeleteString_m8175860EEA9E79F2F530A1EC165CE65FDD475933 (intptr_t ___0_hstring, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Lazy`1<System.Boolean>::.ctor(System.Func`1<T>)
inline void Lazy_1__ctor_mDE4E036B099035F21688E3B1D7BE2EE6CBDBE772 (Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_valueFactory, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6*, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))Lazy_1__ctor_mDE4E036B099035F21688E3B1D7BE2EE6CBDBE772_gshared)(__this, ___0_valueFactory, method);
}
// System.Void System.Lazy`1<System.Collections.Generic.HashSet`1<System.IntPtr>>::.ctor()
inline void Lazy_1__ctor_mF1487AB0FCFAFBB12664FCD33F33BA90049923B3 (Lazy_1_tF1F993EAE4F44D33B36FFF7D9310F2A84485A643* __this, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_tF1F993EAE4F44D33B36FFF7D9310F2A84485A643*, const RuntimeMethod*))Lazy_1__ctor_m0A69D62E0AB1EFF80F5B751D6A94033D0C7487F2_gshared)(__this, method);
}
// System.Void System.Threading.EventWaitHandle::.ctor(System.Boolean,System.Threading.EventResetMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventWaitHandle__ctor_m5B0D1FD902682B5D5E82A4B564363AB711F10F8E (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, bool ___0_initialState, int32_t ___1_mode, const RuntimeMethod* method) ;
// T System.Lazy`1<System.Boolean>::get_Value()
inline bool Lazy_1_get_Value_m50BC2FE5ACA123147959F3A8B3C523A1242C2E45 (Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6*, const RuntimeMethod*))Lazy_1_get_Value_m50BC2FE5ACA123147959F3A8B3C523A1242C2E45_gshared)(__this, method);
}
// System.IntPtr WinRT.Platform::TryLoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_TryLoadLibraryExW_m484FADA5A09AD780337627B9C9303F6BE84A5663 (String_t* ___0_fileName, intptr_t ___1_fileHandle, uint32_t ___2_flags, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// T WinRT.Platform::GetProcAddress<WinRT.Mono/mono_thread_cleanup_initialize>(System.IntPtr)
inline mono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47* Platform_GetProcAddress_Tismono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47_m1C6CF42015C0BD89BCFB5523659F4767368AFA71 (intptr_t ___0_moduleHandle, const RuntimeMethod* method)
{
	return ((  mono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47* (*) (intptr_t, const RuntimeMethod*))Platform_GetProcAddress_TisRuntimeObject_m33119E24B67F233E7C594520073F14034174715F_gshared)(___0_moduleHandle, method);
}
// System.Void WinRT.Mono/mono_thread_cleanup_initialize::Invoke(System.IntPtr*,System.IntPtr*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void mono_thread_cleanup_initialize_Invoke_m3D1DC548582AA90CE0F85642D228D25F85B8B50D_inline (mono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47* __this, intptr_t* ___0_threadCleanupRequested, intptr_t* ___1_threadCleanupCompleted, const RuntimeMethod* method) ;
// System.Void Microsoft.Win32.SafeHandles.SafeWaitHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeWaitHandle__ctor_m6CA082DF779C0BAAA7EEDE99BB2ECF1ECDB579DA (SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* __this, intptr_t ___0_existingHandle, bool ___1_ownsHandle, const RuntimeMethod* method) ;
// System.Void System.Threading.WaitHandleExtensions::SetSafeWaitHandle(System.Threading.WaitHandle,Microsoft.Win32.SafeHandles.SafeWaitHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitHandleExtensions_SetSafeWaitHandle_mFA96419C753C4911BF92048E1996CE34FB91A1D8 (WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* ___0_waitHandle, SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___1_value, const RuntimeMethod* method) ;
// T WinRT.Platform::GetProcAddress<WinRT.Mono/mono_thread_cleanup_register>(System.IntPtr)
inline mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C* Platform_GetProcAddress_Tismono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C_m379B936F46AB23965B311613218CB38C0E4E8ACC (intptr_t ___0_moduleHandle, const RuntimeMethod* method)
{
	return ((  mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C* (*) (intptr_t, const RuntimeMethod*))Platform_GetProcAddress_TisRuntimeObject_m33119E24B67F233E7C594520073F14034174715F_gshared)(___0_moduleHandle, method);
}
// System.IntPtr WinRT.Mono::mono_thread_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Mono_mono_thread_current_mD94FF145F9F946E2FFD94D0EF2B2CC8A1EB0CB99 (const RuntimeMethod* method) ;
// System.Boolean WinRT.Mono::mono_thread_is_foreign(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mono_mono_thread_is_foreign_mA58C8CA8BDECBC057B1FBC65309A45F3E13656DB (intptr_t ___0_threadPtr, const RuntimeMethod* method) ;
// T System.Lazy`1<System.Collections.Generic.HashSet`1<System.IntPtr>>::get_Value()
inline HashSet_1_t3E357372EAB73A7B5E49D739B3175D9C5DE270FD* Lazy_1_get_Value_m4176FB66D83003824F2693A2E79CA31D317D5B19 (Lazy_1_tF1F993EAE4F44D33B36FFF7D9310F2A84485A643* __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t3E357372EAB73A7B5E49D739B3175D9C5DE270FD* (*) (Lazy_1_tF1F993EAE4F44D33B36FFF7D9310F2A84485A643*, const RuntimeMethod*))Lazy_1_get_Value_mC3D475ED3C0FAB4E8BCC96FBF5EF49ED671B86A4_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.IntPtr>::Contains(T)
inline bool HashSet_1_Contains_m3715E69647F22B53E7555EBDC0DDD78612F49F77 (HashSet_1_t3E357372EAB73A7B5E49D739B3175D9C5DE270FD* __this, intptr_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t3E357372EAB73A7B5E49D739B3175D9C5DE270FD*, intptr_t, const RuntimeMethod*))HashSet_1_Contains_m3715E69647F22B53E7555EBDC0DDD78612F49F77_gshared)(__this, ___0_item, method);
}
// System.Void WinRT.Mono/mono_thread_cleanup_register::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void mono_thread_cleanup_register_Invoke_mF5CC08EF99E7E264CD9CAC0628065136A78A4D5B_inline (mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C* __this, intptr_t ___0_threadPtr, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.IntPtr>::Add(T)
inline bool HashSet_1_Add_m38EDB84AA15D55ADA0359297102CBB72444E651D (HashSet_1_t3E357372EAB73A7B5E49D739B3175D9C5DE270FD* __this, intptr_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t3E357372EAB73A7B5E49D739B3175D9C5DE270FD*, intptr_t, const RuntimeMethod*))HashSet_1_Add_m38EDB84AA15D55ADA0359297102CBB72444E651D_gshared)(__this, ___0_item, method);
}
// System.Void WinRT.Mono/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAC46A6B5C7D4E6B5A665319BEED23585B55BF26F (U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47* __this, const RuntimeMethod* method) ;
// T WinRT.Platform::TryGetProcAddress<WinRT.Mono/mono_thread_internal_attach>(System.IntPtr)
inline mono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50* Platform_TryGetProcAddress_Tismono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50_m0CB919D1A3B830EC36AEBC8985022A80C25FBA64 (intptr_t ___0_moduleHandle, const RuntimeMethod* method)
{
	return ((  mono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50* (*) (intptr_t, const RuntimeMethod*))Platform_TryGetProcAddress_TisRuntimeObject_m48259761B9A09AD41EC7D9871D3CA7E8E4D2DBEE_gshared)(___0_moduleHandle, method);
}
// System.Void WinRT.Platform::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_FreeLibrary_mCE7FC1B7DCA81180DFE7228D4E9FF37847D9B044 (intptr_t ___0_moduleHandle, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.IntPtr WinRT.Platform::WindowsCreateString(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_WindowsCreateString_m8CC14817F8C5F9BDB0934DFC1FBDBF5DDF1F2B1A (String_t* ___0_sourceString, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Char* WinRT.Platform::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Platform_WindowsGetStringRawBuffer_m36E4B08F32D04DC954858428F34EB23B8C43C7DF (intptr_t ___0_hstring, uint32_t* ___1_length, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void WinRT.Platform::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_WindowsDeleteString_m90456B1875B21C6434DD454A4A32BF48CFAB7D33 (intptr_t ___0_hstring, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocCoTaskMem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocCoTaskMem_m0D2FF69E8E0C6AE45A2BD94614973B42F9C9E814 (int32_t ___0_cb, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
// System.Int32* WinRT.ModuleReference::AllocateRefCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* ModuleReference_AllocateRefCount_m8B71D434147CE177F6129328F38BD7A692130E9B (const RuntimeMethod* method) ;
// System.Void WinRT.ModuleReference::.ctor(System.Object,System.Int32*,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleReference__ctor_m9B203DCF86025B8E160A3A93020630A196A813DD (ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8* __this, RuntimeObject* ___0_module, int32_t* ___1_refCountPtr, intptr_t ___2_nativeHandle, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___0_location, const RuntimeMethod* method) ;
// WinRT.ModuleReference WinRT.ModuleReference::AddRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 ModuleReference_AddRef_m4EAFFB42E1F3ED058F9AA7852C69E1A2C656813D (ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8* __this, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Decrement(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Decrement_m6AFAD2E874CBDA373B1EF7572F11D6E91813E75D (int32_t* ___0_location, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void WinRT.Platform::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_CoDecrementMTAUsage_m38F4B46C0851E6C4D215A65FCD4973EA44D0D499 (intptr_t ___0_cookie, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeCoTaskMem(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeCoTaskMem_mBCD7084667AE44C50938947CF5C22345A118C944 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void WinRT.ModuleReference::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleReference_Release_m6C96CC6FC8F67EC8365CEECC91BE1D110DD424D1 (ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>::.ctor()
inline void Dictionary_2__ctor_mB9794AEF42AE0E6B1CD21D9F7B8493A48D70C658 (Dictionary_2_t3795BDA214C147B8B018698C2A6E69460C12086C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3795BDA214C147B8B018698C2A6E69460C12086C*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mF02147E5DC050F20B8FF94EB37F5F3B513145D73 (Dictionary_2_t3795BDA214C147B8B018698C2A6E69460C12086C* __this, String_t* ___0_key, WeakReference_1_tF0FE779FF19F60CD0EDCF701B7267706C91AB14F** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3795BDA214C147B8B018698C2A6E69460C12086C*, String_t*, WeakReference_1_tF0FE779FF19F60CD0EDCF701B7267706C91AB14F**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.WeakReference`1<WinRT.DllModule>::TryGetTarget(T&)
inline bool WeakReference_1_TryGetTarget_mE44534789AB9D63110C51A95EECEC3D26F7E048C (WeakReference_1_tF0FE779FF19F60CD0EDCF701B7267706C91AB14F* __this, DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63** ___0_target, const RuntimeMethod* method)
{
	return ((  bool (*) (WeakReference_1_tF0FE779FF19F60CD0EDCF701B7267706C91AB14F*, DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63**, const RuntimeMethod*))WeakReference_1_TryGetTarget_m4982797589731AB705E9C79FA4531331F40410AB_gshared)(__this, ___0_target, method);
}
// T WinRT.Platform::TryGetProcAddress<WinRT.DllModule/DllGetActivationFactory>(System.IntPtr)
inline DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* Platform_TryGetProcAddress_TisDllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB_m5E1173FA34F1261EF030548060E71EBDAD1512A4 (intptr_t ___0_moduleHandle, const RuntimeMethod* method)
{
	return ((  DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* (*) (intptr_t, const RuntimeMethod*))Platform_TryGetProcAddress_TisRuntimeObject_m48259761B9A09AD41EC7D9871D3CA7E8E4D2DBEE_gshared)(___0_moduleHandle, method);
}
// System.Void WinRT.DllModule::.ctor(System.String,System.IntPtr&,WinRT.DllModule/DllGetActivationFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllModule__ctor_m98FBEB5A8041A4104700FF6A7084E500D28E4C31 (DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63* __this, String_t* ___0_fileName, intptr_t* ___1_moduleHandle, DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* ___2_getActivationFactory, const RuntimeMethod* method) ;
// System.Void System.WeakReference`1<WinRT.DllModule>::.ctor(T)
inline void WeakReference_1__ctor_mA0AFC3035B461906D586803F0062B4DD30521CF4 (WeakReference_1_tF0FE779FF19F60CD0EDCF701B7267706C91AB14F* __this, DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63* ___0_target, const RuntimeMethod* method)
{
	((  void (*) (WeakReference_1_tF0FE779FF19F60CD0EDCF701B7267706C91AB14F*, DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63*, const RuntimeMethod*))WeakReference_1__ctor_m932665C8861A22B177DC1ACF1EDAA87E1624B5AC_gshared)(__this, ___0_target, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BC59C330688857D597990E8C9DAE2E22663E35D (Dictionary_2_t3795BDA214C147B8B018698C2A6E69460C12086C* __this, String_t* ___0_key, WeakReference_1_tF0FE779FF19F60CD0EDCF701B7267706C91AB14F* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3795BDA214C147B8B018698C2A6E69460C12086C*, String_t*, WeakReference_1_tF0FE779FF19F60CD0EDCF701B7267706C91AB14F*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// WinRT.ModuleReference WinRT.ModuleReference::Allocate(System.Object,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 ModuleReference_Allocate_mAA86B6A796BEB88D7CF0BABD72D1F58DEFF2DB8A (RuntimeObject* ___0_module, intptr_t* ___1_nativeHandle, const RuntimeMethod* method) ;
// System.Int32 WinRT.DllModule/DllGetActivationFactory::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DllGetActivationFactory_Invoke_m12CE80A39C1A4D446633B4E17BE690ABA0435002_inline (DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* __this, intptr_t ___0_activatableClassId, intptr_t* ___1_activationFactory, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_t2BE9E2A525679BDB04174543B74311303327E8DD* ObjectReference_1_Attach_m943A0FB7F01D3EEA8427204198F7F7D422F06ADF (ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 ___0_module, intptr_t* ___1_thisPtr, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t2BE9E2A525679BDB04174543B74311303327E8DD* (*) (ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8, intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_m943A0FB7F01D3EEA8427204198F7F7D422F06ADF_gshared)(___0_module, ___1_thisPtr, method);
}
// T WinRT.WeakLazy`1<WinRT.WinrtModule>::get_Value()
inline WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3* WeakLazy_1_get_Value_mC89189DBE8E83BA11AF890A78CB40807751329C5 (WeakLazy_1_t6DB148C2C80364F816855A8A29911932E7C81356* __this, const RuntimeMethod* method)
{
	return ((  WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3* (*) (WeakLazy_1_t6DB148C2C80364F816855A8A29911932E7C81356*, const RuntimeMethod*))WeakLazy_1_get_Value_m68F0E6AB09CBE63B5A0F13DF20574C82311EF129_gshared)(__this, method);
}
// System.IntPtr WinRT.Platform::CoIncrementMTAUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_CoIncrementMTAUsage_m743A1D998C68B307847D5B28005AAC7ACB9A19A7 (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.IntPtr WinRT.Platform::RoGetActivationFactory(System.IntPtr,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_RoGetActivationFactory_m60EECE34F5859220B90E183590F24B99272A86CA (intptr_t ___0_runtimeClassId, Guid_t* ___1_iid, const RuntimeMethod* method) ;
// WinRT.ModuleReference WinRT.WinrtModule::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 WinrtModule_get_Instance_m0194FBF53D909205F558F1C4BE4991D31E97BD1C (const RuntimeMethod* method) ;
// System.Void WinRT.WeakLazy`1<WinRT.WinrtModule>::.ctor()
inline void WeakLazy_1__ctor_m9E935751234933DCEAD6DB0DE51380D85E48A129 (WeakLazy_1_t6DB148C2C80364F816855A8A29911932E7C81356* __this, const RuntimeMethod* method)
{
	((  void (*) (WeakLazy_1_t6DB148C2C80364F816855A8A29911932E7C81356*, const RuntimeMethod*))WeakLazy_1__ctor_m2E3571C39FDE6484AD43DBE1F9E6615E3A505DA0_gshared)(__this, method);
}
// System.Int32 WinRT.Delegate::QueryInterface(System.IntPtr,System.Guid*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Delegate_QueryInterface_mD5AB1EB8A8A38FCE479AFE27A77B443DF4415CF6 (intptr_t ___0_thisPtr, Guid_t* ___1_iid, intptr_t* ___2_obj, const RuntimeMethod* method) ;
// System.UInt32 WinRT.Delegate::AddRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_AddRef_mD98DF69C12609B6E08C419D0F8FC59EEFA5506E3 (intptr_t ___0_thisPtr, const RuntimeMethod* method) ;
// System.UInt32 WinRT.Delegate::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_Release_m220300670F20C22F3666B121E61E46B48567761C (intptr_t ___0_thisPtr, const RuntimeMethod* method) ;
// T System.Runtime.InteropServices.Marshal::PtrToStructure<WinRT.Delegate/UnmanagedObject>(System.IntPtr)
inline UnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290 Marshal_PtrToStructure_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_m5C09A9E750405E5894ABC90041204F2107CA270F (intptr_t ___0_ptr, const RuntimeMethod* method)
{
	return ((  UnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290 (*) (intptr_t, const RuntimeMethod*))Marshal_PtrToStructure_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_m5C09A9E750405E5894ABC90041204F2107CA270F_gshared)(___0_ptr, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC (intptr_t ___0_value, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// WinRT.Delegate WinRT.Delegate::FindObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* Delegate_FindObject_m2D9C5BAD38A604088E95CC4AB4018324A6B9BB11 (intptr_t ___0_thisPtr, const RuntimeMethod* method) ;
// System.Int32 WinRT.Delegate::QueryInterface(System.Guid*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Delegate_QueryInterface_mEE3CF6F4FECE951B83CA4FC16F12EA32AB08F67F (Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* __this, Guid_t* ___0_iid, intptr_t* ___1_obj, const RuntimeMethod* method) ;
// System.UInt32 WinRT.Delegate::AddRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_AddRef_m0778BA1F151A25031BFB1F3A303811FD066CBC80 (Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* __this, const RuntimeMethod* method) ;
// System.UInt32 WinRT.Delegate::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_Release_mD1AA995D7731AE8F4716A13CF8BC22ADFADE1C01 (Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* __this, const RuntimeMethod* method) ;
// System.Boolean System.Guid::op_Equality(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240 (Guid_t ___0_a, Guid_t ___1_b, const RuntimeMethod* method) ;
// System.Void WinRT.Delegate::_Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__Dispose_m7F7633C80FF3EEEF2A62CB2F88308537966AA4D8 (Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* __this, const RuntimeMethod* method) ;
// System.Void WinRT.Interop.IUnknownVftbl/_QueryInterface::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _QueryInterface__ctor_m1AF8BBD185DCCDAD5EF42E957FB12193886C8040 (_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WinRT.Interop.IUnknownVftbl/_AddRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AddRef__ctor_m8BF7AEF65C6F080897EA4AC1BE5018FC6EF481DA (_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WinRT.Interop.IUnknownVftbl/_Release::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Release__ctor_m5B3E6442FF25C2D6AEC4988CF3C3C55BAD6B56CC (_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<WinRT.Interop.IUnknownVftbl/_QueryInterface>(TDelegate)
inline intptr_t Marshal_GetFunctionPointerForDelegate_Tis_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543_m641E6F1035B24B3861E17E12C67483DF9C28BF2A (_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543* ___0_d, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543*, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m389A3417EF0CFE64A042AA7E53E8604F24458074_gshared)(___0_d, method);
}
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<WinRT.Interop.IUnknownVftbl/_AddRef>(TDelegate)
inline intptr_t Marshal_GetFunctionPointerForDelegate_Tis_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A_mA939725AC522AD4D78E67DA10C488A64EBF0912F (_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A* ___0_d, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A*, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m389A3417EF0CFE64A042AA7E53E8604F24458074_gshared)(___0_d, method);
}
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<WinRT.Interop.IUnknownVftbl/_Release>(TDelegate)
inline intptr_t Marshal_GetFunctionPointerForDelegate_Tis_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE_m189D710BC9784B465C2440E0471FE8E4FDA3AA89 (_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE* ___0_d, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE*, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m389A3417EF0CFE64A042AA7E53E8604F24458074_gshared)(___0_d, method);
}
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241 (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<WinRT.Interop.IDelegateVftbl>(T)
inline int32_t Marshal_SizeOf_TisIDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0_mA5A70DE2935DE6D4A20B1377B1E09D82C707F3DB (IDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0 ___0_structure, const RuntimeMethod* method)
{
	return ((  int32_t (*) (IDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0, const RuntimeMethod*))Marshal_SizeOf_TisIDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0_mA5A70DE2935DE6D4A20B1377B1E09D82C707F3DB_gshared)(___0_structure, method);
}
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<WinRT.Interop.IDelegateVftbl>(T,System.IntPtr,System.Boolean)
inline void Marshal_StructureToPtr_TisIDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0_m5C946AC3EC0DF53C6DBB4F412642404137DA513D (IDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0 ___0_structure, intptr_t ___1_ptr, bool ___2_fDeleteOld, const RuntimeMethod* method)
{
	((  void (*) (IDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0, intptr_t, bool, const RuntimeMethod*))Marshal_StructureToPtr_TisIDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0_m5C946AC3EC0DF53C6DBB4F412642404137DA513D_gshared)(___0_structure, ___1_ptr, ___2_fDeleteOld, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<WinRT.Delegate/UnmanagedObject>(T)
inline int32_t Marshal_SizeOf_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_mA268FF722247201B76B5143AD28FC7E0594C821C (UnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290 ___0_structure, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290, const RuntimeMethod*))Marshal_SizeOf_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_mA268FF722247201B76B5143AD28FC7E0594C821C_gshared)(___0_structure, method);
}
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<WinRT.Delegate/UnmanagedObject>(T,System.IntPtr,System.Boolean)
inline void Marshal_StructureToPtr_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_m333CC2C23D557EDF665616B9E02A71276C949439 (UnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290 ___0_structure, intptr_t ___1_ptr, bool ___2_fDeleteOld, const RuntimeMethod* method)
{
	((  void (*) (UnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290, intptr_t, bool, const RuntimeMethod*))Marshal_StructureToPtr_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_m333CC2C23D557EDF665616B9E02A71276C949439_gshared)(___0_structure, ___1_ptr, ___2_fDeleteOld, method);
}
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void WinRT.Mono/ThreadContext::RegisterPossiblyNonForeignThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContext_RegisterPossiblyNonForeignThread_m88CE97ED901E94E3F71E943E1E62875A5419CE35 (const RuntimeMethod* method) ;
// System.Void WinRT.Delegate::.ctor(System.Guid,System.IntPtr,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_mCFE8AEA6A267AB91165FB95C2123917C7EE41D67 (Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* __this, Guid_t ___0_iid, intptr_t ___1_invokePtr, RuntimeObject* ___2_invoker, const RuntimeMethod* method) ;
// System.Void WinRT.Delegate/InitialReference::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitialReference_Dispose_m441E946D78C38A6266663505B2008AABB54D105B (InitialReference_t299B9416400FAAD6E7D4078310CB3509EDCBBE3B* __this, const RuntimeMethod* method) ;
// System.Int32 WinRT.EventSource::_invoke(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventSource__invoke_m0C1EEA1EBB5008722C1E0A9A99ADC570938DF34E (intptr_t ___0_thisPtr, intptr_t ___1_senderPtr, intptr_t ___2_argsPtr, const RuntimeMethod* method) ;
// System.Void WinRT.EventSource/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mCC859336018B538817F7A78D7F7B568D254A82AD (U3CU3Ec__DisplayClass1_0_tCA38C61070B18F5F4B9C5F4A309A9455E2ECCBE7* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<WinRT.EventSource/_Invoke>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mF54D3CB4FD87166976E429B07DDEF2B34848D93E (Action_1_t73AC50EBBEBE2294086BCA7C6510850E9A338B32* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t73AC50EBBEBE2294086BCA7C6510850E9A338B32*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Int32 WinRT.Delegate::MarshalInvoke<WinRT.EventSource/_Invoke>(System.IntPtr,System.Action`1<T>)
inline int32_t Delegate_MarshalInvoke_Tis_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276_m508D189AF0EF98305FFF90A12B39BA8A25921573 (intptr_t ___0_thisPtr, Action_1_t73AC50EBBEBE2294086BCA7C6510850E9A338B32* ___1_invoke, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, Action_1_t73AC50EBBEBE2294086BCA7C6510850E9A338B32*, const RuntimeMethod*))Delegate_MarshalInvoke_TisRuntimeObject_mB1CCF0BB42FEBB61A00F097720D9ADA16630BDB3_gshared)(___0_thisPtr, ___1_invoke, method);
}
// System.Void WinRT.Interop.IDelegate2_Obj_Obj::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDelegate2_Obj_Obj__ctor_m251014F4A691E0ECA078746FEC6F722A79B0B960 (IDelegate2_Obj_Obj_t66149A37DDD95F736A19120D62BD83A3E5FD39CA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WinRT.EventSource/_Invoke::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void _Invoke_Invoke_mAA0B517B23949DE8BE86B430EADA7238AA69DC56_inline (_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276* __this, intptr_t ___0_senderPtr, intptr_t ___1_argsPtr, const RuntimeMethod* method) ;
// System.Void WinRT.Interop.MonoPInvokeCallbackAttribute::set_DelegateType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute_set_DelegateType_m413872D1B36237F56A4A88DD2E8674675C4C54D4_inline (MonoPInvokeCallbackAttribute_tFEE42FDDD0C003825984DDD5893532E298DF6D52* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<WinRT.Interop.IAsyncInfo/Vftbl>()
inline ObjectReference_1_tD121C03E6E8107C35A4B7717FA7FFEFA92485DC5* IObjectReference_As_TisVftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_m783D62D813E4D899F27B9660BAD0E2063D174710 (IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* __this, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tD121C03E6E8107C35A4B7717FA7FFEFA92485DC5* (*) (IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*, const RuntimeMethod*))IObjectReference_As_TisVftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_m783D62D813E4D899F27B9660BAD0E2063D174710_gshared)(__this, method);
}
// WinRT.Interop.IAsyncInfo WinRT.Interop.IAsyncInfo::op_Implicit(WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IAsyncInfo_t90E25D767953743ED58A5F7326524116BC5BB9D2* IAsyncInfo_op_Implicit_m70C63B7B65337634F32FFBC2C2E9C053023FE5E6 (ObjectReference_1_tD121C03E6E8107C35A4B7717FA7FFEFA92485DC5* ___0_obj, const RuntimeMethod* method) ;
// System.Void WinRT.Interop.IAsyncInfo::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncInfo__ctor_m1C56E6A444E93E2AA9FE173DB6D968FAE5AB60C9 (IAsyncInfo_t90E25D767953743ED58A5F7326524116BC5BB9D2* __this, ObjectReference_1_tD121C03E6E8107C35A4B7717FA7FFEFA92485DC5* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 WinRT.Interop._get_PropertyAsInt::Invoke(System.IntPtr,System.Int32*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _get_PropertyAsInt_Invoke_m679CBE2F073B7A4ABA3F9EDD44EA3D7F5F83F87A_inline (_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95* __this, intptr_t ___0_thisPtr, int32_t* ___1_value, const RuntimeMethod* method) ;
// System.Exception System.Runtime.InteropServices.Marshal::GetExceptionForHR(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Marshal_GetExceptionForHR_mD1E6D5EA515D4178BACCF0CF16331FA0FC6652D8 (int32_t ___0_errorCode, const RuntimeMethod* method) ;
// System.Int32 WinRT.Interop._method0::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _method0_Invoke_m3E45C34949E1CF01A32DFF9715BE0D1D3541408B_inline (_method0_tED7C943BF18C50F2E18BDD75577047424BD63602* __this, intptr_t ___0_thisPtr, const RuntimeMethod* method) ;
// System.Int32 WinRT.Interop.IAsyncOperation::_OnCompleted(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAsyncOperation__OnCompleted_m1BA76E56DCB467FB2FF3057B15964CD8948DFA77 (intptr_t ___0_thisPtr, intptr_t ___1_operationPtr, int32_t ___2_status, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<WinRT.Interop.IDelegate2_Obj_Enum>(TDelegate)
inline intptr_t Marshal_GetFunctionPointerForDelegate_TisIDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30_m8FC9BCAAEA572E4003051DDF22D29FA820991E5F (IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30* ___0_d, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30*, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m389A3417EF0CFE64A042AA7E53E8604F24458074_gshared)(___0_d, method);
}
// System.Void WinRT.Interop.DelegateProperty`1<WinRT.Interop.IAsyncOperation/CompletedHandler>::.ctor(System.Guid,WinRT.IObjectReference,WinRT.Interop._get_PropertyAsObject,WinRT.Interop._put_PropertyAsObject,System.IntPtr)
inline void DelegateProperty_1__ctor_m3913119D72ACBD0391B8B0D6E4F288C171DACFD9 (DelegateProperty_1_t1C6E81A9EDE98BE96F54144C8497B203A9DA4AD9* __this, Guid_t ___0_iid, IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* ___1_obj, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* ___2_get_Delegate, _put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A* ___3_put_Delegate, intptr_t ___4_invokerPtr, const RuntimeMethod* method)
{
	((  void (*) (DelegateProperty_1_t1C6E81A9EDE98BE96F54144C8497B203A9DA4AD9*, Guid_t, IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11*, _put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A*, intptr_t, const RuntimeMethod*))DelegateProperty_1__ctor_mA3ADAA8FDA7661DB5BCF2ECE8F4FCAB7FD7A75A4_gshared)(__this, ___0_iid, ___1_obj, ___2_get_Delegate, ___3_put_Delegate, ___4_invokerPtr, method);
}
// System.Void WinRT.Interop.IAsyncOperation/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mFE3357DC586EC96FFFFDC627C4ADE44CCE3F28E2 (U3CU3Ec__DisplayClass4_0_tC3E072A3170990CD124C7969CF7191A9FE02673D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<WinRT.Interop.IAsyncOperation/CompletedHandler>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4E6FCF15A5587CCE7C7B23DABDFB7398232439FC (Action_1_tE294E9648C5B0ECD47391E217DFB6319AF245983* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE294E9648C5B0ECD47391E217DFB6319AF245983*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Int32 WinRT.Delegate::MarshalInvoke<WinRT.Interop.IAsyncOperation/CompletedHandler>(System.IntPtr,System.Action`1<T>)
inline int32_t Delegate_MarshalInvoke_TisCompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3_m3589B54C241B795F43BC2B39F6642B1AF385FC36 (intptr_t ___0_thisPtr, Action_1_tE294E9648C5B0ECD47391E217DFB6319AF245983* ___1_invoke, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, Action_1_tE294E9648C5B0ECD47391E217DFB6319AF245983*, const RuntimeMethod*))Delegate_MarshalInvoke_TisRuntimeObject_mB1CCF0BB42FEBB61A00F097720D9ADA16630BDB3_gshared)(___0_thisPtr, ___1_invoke, method);
}
// System.Void WinRT.Interop.DelegateProperty`1<WinRT.Interop.IAsyncOperation/CompletedHandler>::set_Value(T)
inline void DelegateProperty_1_set_Value_m2E87DBBBA2DA631F1A570F422CA836C68E7F29E5 (DelegateProperty_1_t1C6E81A9EDE98BE96F54144C8497B203A9DA4AD9* __this, CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (DelegateProperty_1_t1C6E81A9EDE98BE96F54144C8497B203A9DA4AD9*, CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3*, const RuntimeMethod*))DelegateProperty_1_set_Value_m9997FDB284654AA465A066B894C1243F9A3C1764_gshared)(__this, ___0_value, method);
}
// System.Void WinRT.Interop.IDelegate2_Obj_Enum::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDelegate2_Obj_Enum__ctor_mE596078AE966EF82CA23F63BF0E6B956CEA2B716 (IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WinRT.Interop.IAsyncOperation/CompletedHandler::Invoke(WinRT.AsyncStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CompletedHandler_Invoke_m26544BD9DD9BAFBCBE56B9B02E75A7EF0951FEC2_inline (CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3* __this, int32_t ___0_status, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.QR.IQRCode::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCode/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IQRCode__ctor_m7F9C70A6003C5A7A6ED0C3EE7C20A717DECA0992 (IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* __this, ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* ___0_obj, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.QR.QRCode::.ctor(Microsoft.MixedReality.QR.IQRCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCode__ctor_mF61F8CE1E8FBE4B9B69BB67ACBD9EB0DCE9FF3A6 (QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* __this, IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* ___0_code, const RuntimeMethod* method) ;
// System.Int32 WinRT.Interop._get_PropertyAsGuid::Invoke(System.IntPtr,System.Guid*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _get_PropertyAsGuid_Invoke_m467847EAC22FBDB64ABB5E393DF95CBE572AB412_inline (_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC* __this, intptr_t ___0_thisPtr, Guid_t* ___1_value, const RuntimeMethod* method) ;
// System.Int32 WinRT.Interop._get_PropertyAsEnum::Invoke(System.IntPtr,System.Int32*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _get_PropertyAsEnum_Invoke_mE8CE6F279C8BC5A05626FD92DED2517E3C963E4A_inline (_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0* __this, intptr_t ___0_thisPtr, int32_t* ___1_value, const RuntimeMethod* method) ;
// System.Int32 WinRT.Interop._get_PropertyAsFloat::Invoke(System.IntPtr,System.Single*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _get_PropertyAsFloat_Invoke_mCF17DCE8E61890D2D64F28D17BC869AD9386FF2F_inline (_get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86* __this, intptr_t ___0_thisPtr, float* ___1_value, const RuntimeMethod* method) ;
// System.Int32 WinRT.Interop._get_PropertyAsObject::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _get_PropertyAsObject_Invoke_mCCCAA1AC9BBC47B4AD5C79D0CE4B289E443D227A_inline (_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* __this, intptr_t ___0_thisPtr, intptr_t* ___1_value, const RuntimeMethod* method) ;
// System.Void WinRT.HString::.ctor(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HString__ctor_m7CC40A4BCB0244E53D92015C1D94C97DDF918C8A (HString_t734316CC9188B0454711CDE6F9D311FD99F46E54* __this, intptr_t* ___0_handle, const RuntimeMethod* method) ;
// System.Int32 WinRT.Interop._get_PropertyAsTimeSpan::Invoke(System.IntPtr,WinRT.Interop._TimeSpan*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _get_PropertyAsTimeSpan_Invoke_m261D4196ED502A92C7F47DC64DB7E73ED8A8057C_inline (_get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21* __this, intptr_t ___0_thisPtr, _TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A* ___1_value, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromTicks_m9C683B1D142312F22E8CC6C803E32EF6D42F9003 (int64_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 WinRT.Interop._get_PropertyAsDateTime::Invoke(System.IntPtr,WinRT.Interop._DateTime*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _get_PropertyAsDateTime_Invoke_mA2C0617434B9B1ACFFE91BA252E501707887E797_inline (_get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0* __this, intptr_t ___0_thisPtr, _DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1* ___1_value, const RuntimeMethod* method) ;
// System.DateTimeOffset System.DateTimeOffset::FromFileTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 DateTimeOffset_FromFileTime_m91913654F9CA7F5367A35D1E25E321D7735CC32C (int64_t ___0_fileTime, const RuntimeMethod* method) ;
// System.Guid Microsoft.MixedReality.QR.IQRCode::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t IQRCode_get_Id_m4B54D0BFD68B696B80F5D43030F4EDECA0E07D15 (IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* __this, const RuntimeMethod* method) ;
// System.Guid Microsoft.MixedReality.QR.IQRCode::get_SpatialGraphNodeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t IQRCode_get_SpatialGraphNodeId_mB1801D3DE23CF020EFFC53D7E8B561C186D2D837 (IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.QR.QRVersion Microsoft.MixedReality.QR.IQRCode::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IQRCode_get_Version_mB77D51EDD56E773B5734E88FEDD7EDEB1BE8DDA2 (IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.QR.IQRCode::get_PhysicalSideLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IQRCode_get_PhysicalSideLength_mBF586290F3B1F85B976CD37DF2BF85A95DB4940D (IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* __this, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.QR.IQRCode::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IQRCode_get_Data_mAF42D8CD2BA38C42C07F18357E87BEBD7CD3FB0B (IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* __this, const RuntimeMethod* method) ;
// System.TimeSpan Microsoft.MixedReality.QR.IQRCode::get_SystemRelativeLastDetectedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A IQRCode_get_SystemRelativeLastDetectedTime_m550DA8A6BFD8BF1E7E4AE5AB59D09453B134C202 (IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* __this, const RuntimeMethod* method) ;
// System.DateTimeOffset Microsoft.MixedReality.QR.IQRCode::get_LastDetectedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 IQRCode_get_LastDetectedTime_m92B0DA9107BAFFF9FEA64A7BB3CD5ABAC5DDAC7E (IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.QR.IQRCodeAddedEventArgs::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IQRCodeAddedEventArgs__ctor_m6B9DBE60028837FE8C23EB79C968B89E820D9DA0 (IQRCodeAddedEventArgs_t8B6EE6766A132337A219F22E89DA2473BA74EED7* __this, ObjectReference_1_t7B7A6E71970334EC248BD99A424F0F5D929745C5* ___0_obj, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IQRCodeUpdatedEventArgs__ctor_mEAEFB9E33A36BAD57B5AD614B041AA74AE770D22 (IQRCodeUpdatedEventArgs_tCFF323A3B8B9642D8DA20079A74598BCE8A88AE6* __this, ObjectReference_1_tF3D0191716991966F93B81CBE75037784DA7D720* ___0_obj, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCode/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* ObjectReference_1_Attach_mF60DC5A348914FAD3D2E54DC4B588DB3987BF8AE (ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 ___0_module, intptr_t* ___1_thisPtr, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* (*) (ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8, intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_mF60DC5A348914FAD3D2E54DC4B588DB3987BF8AE_gshared)(___0_module, ___1_thisPtr, method);
}
// Microsoft.MixedReality.QR.IQRCode Microsoft.MixedReality.QR.IQRCode::op_Implicit(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCode/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* IQRCode_op_Implicit_mA8EF56D9DF24D0D87C397BF80A875364F8833C04 (ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* ___0_obj, const RuntimeMethod* method) ;
// Microsoft.MixedReality.QR.IQRCode Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* IQRCodeUpdatedEventArgs_get_Code_m31E7BEDC2B4F1DFF4FE32848C6EE544E014DC0DF (IQRCodeUpdatedEventArgs_tCFF323A3B8B9642D8DA20079A74598BCE8A88AE6* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.QR.QRCode Microsoft.MixedReality.QR.IQRCode::op_Implicit(Microsoft.MixedReality.QR.IQRCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* IQRCode_op_Implicit_m01FA2429F011ADB7C474A481B439585A69D4E15C (IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* ___0_code, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IQRCodeRemovedEventArgs__ctor_mD5C25D12194F1E70BEFBE050C312674D061F7A76 (IQRCodeRemovedEventArgs_t9384E060335713DFBA0B79664F4119C9B2792553* __this, ObjectReference_1_t3705DE5AB44717B102A29CE29AA411BFE06E41B4* ___0_obj, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.QR.IQRCodeWatcher::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IQRCodeWatcher__ctor_mED1F365760D01A95FE34C81AF5E45E115F1C1C75 (IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* __this, ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* ___0_obj, const RuntimeMethod* method) ;
// System.Void WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeAddedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeAddedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnmarshalArgs__ctor_m2DD646ECDA4C16926A6FCB8E7106F5B71822E765 (UnmarshalArgs_t021850FDA961D6DB7F0FE73422AE6BD5BDD2C6CE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnmarshalArgs_t021850FDA961D6DB7F0FE73422AE6BD5BDD2C6CE*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnmarshalArgs__ctor_m0636FD4A5F3C8898DB6A82C87CC020DC8CD95010_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeAddedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeAddedEventArgs>::.ctor(WinRT.IObjectReference,WinRT.Interop._add_EventHandler,WinRT.Interop._remove_EventHandler,WinRT.EventSource`3/UnmarshalArgs<I,S,A>)
inline void EventSource_3__ctor_mD20C895BDF9075DF3AA0BC5AE73AC5D81707AD25 (EventSource_3_t617C7084FCA4BB93A2E431B08052C02E7A5954B9* __this, IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* ___0_obj, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* ___1_addHandler, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* ___2_removeHandler, UnmarshalArgs_t021850FDA961D6DB7F0FE73422AE6BD5BDD2C6CE* ___3_unmarshalArgs, const RuntimeMethod* method)
{
	((  void (*) (EventSource_3_t617C7084FCA4BB93A2E431B08052C02E7A5954B9*, IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D*, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0*, UnmarshalArgs_t021850FDA961D6DB7F0FE73422AE6BD5BDD2C6CE*, const RuntimeMethod*))EventSource_3__ctor_m13DB9F56C4B155EC9BD602EF0FC4D77B97AB11A9_gshared)(__this, ___0_obj, ___1_addHandler, ___2_removeHandler, ___3_unmarshalArgs, method);
}
// System.Void WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeUpdatedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnmarshalArgs__ctor_m3080BF85B17E7AEED668F4F8721CE68005C8EC33 (UnmarshalArgs_tBF999913624F2E64EB0395B280213EF2225EC792* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnmarshalArgs_tBF999913624F2E64EB0395B280213EF2225EC792*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnmarshalArgs__ctor_m916E6F1E0DE13EA2513854B6517E5313B6711345_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeUpdatedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>::.ctor(WinRT.IObjectReference,WinRT.Interop._add_EventHandler,WinRT.Interop._remove_EventHandler,WinRT.EventSource`3/UnmarshalArgs<I,S,A>)
inline void EventSource_3__ctor_mAF32617027EA585A28B7D902D06524458D31AC6E (EventSource_3_t610553071539C339481F8394CD1CBE2967AD8861* __this, IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* ___0_obj, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* ___1_addHandler, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* ___2_removeHandler, UnmarshalArgs_tBF999913624F2E64EB0395B280213EF2225EC792* ___3_unmarshalArgs, const RuntimeMethod* method)
{
	((  void (*) (EventSource_3_t610553071539C339481F8394CD1CBE2967AD8861*, IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D*, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0*, UnmarshalArgs_tBF999913624F2E64EB0395B280213EF2225EC792*, const RuntimeMethod*))EventSource_3__ctor_m703CD5BBB0E98A0E158C5539CDECC0B9F314AD0C_gshared)(__this, ___0_obj, ___1_addHandler, ___2_removeHandler, ___3_unmarshalArgs, method);
}
// System.Void WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeRemovedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeRemovedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnmarshalArgs__ctor_mC1B52FF5A760074A0450AFF673C87888A344A152 (UnmarshalArgs_tCF30549DA5BC69A6B300D2468FD29F4D22549114* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnmarshalArgs_tCF30549DA5BC69A6B300D2468FD29F4D22549114*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnmarshalArgs__ctor_m39C1BE086B359D05657F45518CC3F21B02324D37_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeRemovedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeRemovedEventArgs>::.ctor(WinRT.IObjectReference,WinRT.Interop._add_EventHandler,WinRT.Interop._remove_EventHandler,WinRT.EventSource`3/UnmarshalArgs<I,S,A>)
inline void EventSource_3__ctor_m946B8A442CB9732FDFDF395D9097BA60FA02A43F (EventSource_3_tC0A5454196001589D94A605A94D82D117EC64CAD* __this, IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* ___0_obj, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* ___1_addHandler, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* ___2_removeHandler, UnmarshalArgs_tCF30549DA5BC69A6B300D2468FD29F4D22549114* ___3_unmarshalArgs, const RuntimeMethod* method)
{
	((  void (*) (EventSource_3_tC0A5454196001589D94A605A94D82D117EC64CAD*, IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D*, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0*, UnmarshalArgs_tCF30549DA5BC69A6B300D2468FD29F4D22549114*, const RuntimeMethod*))EventSource_3__ctor_mDAAE182C31D4550E2A59E48EDA228B040BC72240_gshared)(__this, ___0_obj, ___1_addHandler, ___2_removeHandler, ___3_unmarshalArgs, method);
}
// System.Void WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.QR.IQRCodeEnumerationCompletedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,System.Object>::.ctor(System.Object,System.IntPtr)
inline void UnmarshalArgs__ctor_mF1D06F9FFA9769FE488B5F7575B859A32B49A337 (UnmarshalArgs_tBAD263BBEE30B538B58292AF503D10274F68BEAE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnmarshalArgs_tBAD263BBEE30B538B58292AF503D10274F68BEAE*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnmarshalArgs__ctor_m7CEBA6F465ABB049E517DF27F07D1C7CBC6420B4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeEnumerationCompletedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,System.Object>::.ctor(WinRT.IObjectReference,WinRT.Interop._add_EventHandler,WinRT.Interop._remove_EventHandler,WinRT.EventSource`3/UnmarshalArgs<I,S,A>)
inline void EventSource_3__ctor_m8F6DEDE0FE85764F6C30E9EDDC4F9C47863758F7 (EventSource_3_tE1C3A8281ED3C9A3E3C8CBD6DB9B539C57002208* __this, IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* ___0_obj, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* ___1_addHandler, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* ___2_removeHandler, UnmarshalArgs_tBAD263BBEE30B538B58292AF503D10274F68BEAE* ___3_unmarshalArgs, const RuntimeMethod* method)
{
	((  void (*) (EventSource_3_tE1C3A8281ED3C9A3E3C8CBD6DB9B539C57002208*, IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D*, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0*, UnmarshalArgs_tBAD263BBEE30B538B58292AF503D10274F68BEAE*, const RuntimeMethod*))EventSource_3__ctor_m53094B26CD45BC5C9D3CBA09A6B83E51F43E06DB_gshared)(__this, ___0_obj, ___1_addHandler, ___2_removeHandler, ___3_unmarshalArgs, method);
}
// System.Void Microsoft.MixedReality.QR.IQRCodeWatcher/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE9DC0698E78349717B5784004988E1CBB53D1693 (U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B* __this, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl>::FromNativePtrNoRef(System.IntPtr)
inline ObjectReference_1_t7B7A6E71970334EC248BD99A424F0F5D929745C5* ObjectReference_1_FromNativePtrNoRef_m22BE26B2E4AF02CD8C4F6CE6E696DCFAFE9043F4 (intptr_t ___0_thisPtr, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t7B7A6E71970334EC248BD99A424F0F5D929745C5* (*) (intptr_t, const RuntimeMethod*))ObjectReference_1_FromNativePtrNoRef_m22BE26B2E4AF02CD8C4F6CE6E696DCFAFE9043F4_gshared)(___0_thisPtr, method);
}
// Microsoft.MixedReality.QR.IQRCodeAddedEventArgs Microsoft.MixedReality.QR.IQRCodeAddedEventArgs::op_Implicit(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IQRCodeAddedEventArgs_t8B6EE6766A132337A219F22E89DA2473BA74EED7* IQRCodeAddedEventArgs_op_Implicit_mA75EE0EA49875DD65A94D88F07ABB738F3BCAA85 (ObjectReference_1_t7B7A6E71970334EC248BD99A424F0F5D929745C5* ___0_obj, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.QR.QRCodeAddedEventArgs::.ctor(Microsoft.MixedReality.QR.IQRCodeAddedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeAddedEventArgs__ctor_m57061C49B33F984287DCE10476E9838866F7A316 (QRCodeAddedEventArgs_tE7D4C2D6732F6E25B93A46E5F91318D9709A09C9* __this, IQRCodeAddedEventArgs_t8B6EE6766A132337A219F22E89DA2473BA74EED7* ___0_args, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl>::FromNativePtrNoRef(System.IntPtr)
inline ObjectReference_1_tF3D0191716991966F93B81CBE75037784DA7D720* ObjectReference_1_FromNativePtrNoRef_m5D088DF342D130C456166C6546BF1DC244C88802 (intptr_t ___0_thisPtr, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tF3D0191716991966F93B81CBE75037784DA7D720* (*) (intptr_t, const RuntimeMethod*))ObjectReference_1_FromNativePtrNoRef_m5D088DF342D130C456166C6546BF1DC244C88802_gshared)(___0_thisPtr, method);
}
// Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs::op_Implicit(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IQRCodeUpdatedEventArgs_tCFF323A3B8B9642D8DA20079A74598BCE8A88AE6* IQRCodeUpdatedEventArgs_op_Implicit_mDA177F5D3C9B9AC331B0495F6A84243A9320A862 (ObjectReference_1_tF3D0191716991966F93B81CBE75037784DA7D720* ___0_obj, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs::.ctor(Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeUpdatedEventArgs__ctor_m2C20BDB34E05C930AF7F8DC6B1E63CF76E71593B (QRCodeUpdatedEventArgs_t45762E7847BD1B62D097405830082E521BCF29B9* __this, IQRCodeUpdatedEventArgs_tCFF323A3B8B9642D8DA20079A74598BCE8A88AE6* ___0_args, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl>::FromNativePtrNoRef(System.IntPtr)
inline ObjectReference_1_t3705DE5AB44717B102A29CE29AA411BFE06E41B4* ObjectReference_1_FromNativePtrNoRef_m1EED31C6220DC426A757B561A81B146A13956F94 (intptr_t ___0_thisPtr, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t3705DE5AB44717B102A29CE29AA411BFE06E41B4* (*) (intptr_t, const RuntimeMethod*))ObjectReference_1_FromNativePtrNoRef_m1EED31C6220DC426A757B561A81B146A13956F94_gshared)(___0_thisPtr, method);
}
// Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs::op_Implicit(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IQRCodeRemovedEventArgs_t9384E060335713DFBA0B79664F4119C9B2792553* IQRCodeRemovedEventArgs_op_Implicit_m535D484A7FEC78F201C77CD0B3773947927DCF61 (ObjectReference_1_t3705DE5AB44717B102A29CE29AA411BFE06E41B4* ___0_obj, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.QR.QRCodeRemovedEventArgs::.ctor(Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeRemovedEventArgs__ctor_mF9E4D6B0427D3E1F5772CFD79AD3697BE11D9FEE (QRCodeRemovedEventArgs_tBE44C5681EC50973BB9E0D32B8A4155F60AFEA72* __this, IQRCodeRemovedEventArgs_t9384E060335713DFBA0B79664F4119C9B2792553* ___0_args, const RuntimeMethod* method) ;
// System.Int32 WinRT.Interop._get_PropertyAsBool::Invoke(System.IntPtr,WinRT.Interop._Bool*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _get_PropertyAsBool_Invoke_mA329DF09AC0BE7719EDFF57073F266CC0AAA1D82_inline (_get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E* __this, intptr_t ___0_thisPtr, _Bool_tA3BBB9726FE45A1680F93253B328394D390A545F* ___1_value, const RuntimeMethod* method) ;
// System.Boolean WinRT.Interop._Bool::op_Implicit(WinRT.Interop._Bool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _Bool_op_Implicit_mD7F8203AE99B40DBA86A012CF98F625378418DAC (_Bool_tA3BBB9726FE45A1680F93253B328394D390A545F ___0_value, const RuntimeMethod* method) ;
// System.Int32 Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl/_RequestAccessAsync::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _RequestAccessAsync_Invoke_m23639F62F72C487DE293F9850621E8E965F38D35_inline (_RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E* __this, intptr_t ___0_thisPtr, intptr_t* ___1_operationPtr, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_t81B67CD294B31DA00DA91F177EFC7632539F4DBF* ObjectReference_1_Attach_mF03F8A0982F269228D9CD07BA1DA8765DDD7D0A1 (ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 ___0_module, intptr_t* ___1_thisPtr, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t81B67CD294B31DA00DA91F177EFC7632539F4DBF* (*) (ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8, intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_mF03F8A0982F269228D9CD07BA1DA8765DDD7D0A1_gshared)(___0_module, ___1_thisPtr, method);
}
// System.Void System.Func`2<System.Int32,Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA611501A2B63C906BEB4FE709ED02F5B241EA9DA (Func_2_t94B038EBC18D2A3B1F9F1134927EC9DF0F3F2F6B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t94B038EBC18D2A3B1F9F1134927EC9DF0F3F2F6B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mF7EA0C0597102B34AE4C37131B8E3B99C68A91C6_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void WinRT.Interop.IAsyncOperation_Enum`2<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus,Microsoft.MixedReality.QR.IAsyncOperationCompletedHandler_QRCodeWatcherAccessStatus>::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>,System.Func`2<System.Int32,T>)
inline void IAsyncOperation_Enum_2__ctor_mF1A030578CCED26C8B70B50D428D483D4C51FA6E (IAsyncOperation_Enum_2_tBAE87559F80C7E57168AC240D5A2F4E7B609BD4A* __this, ObjectReference_1_t81B67CD294B31DA00DA91F177EFC7632539F4DBF* ___0_obj, Func_2_t94B038EBC18D2A3B1F9F1134927EC9DF0F3F2F6B* ___1_castResult, const RuntimeMethod* method)
{
	((  void (*) (IAsyncOperation_Enum_2_tBAE87559F80C7E57168AC240D5A2F4E7B609BD4A*, ObjectReference_1_t81B67CD294B31DA00DA91F177EFC7632539F4DBF*, Func_2_t94B038EBC18D2A3B1F9F1134927EC9DF0F3F2F6B*, const RuntimeMethod*))IAsyncOperation_Enum_2__ctor_mAD6CA838F7EDB1524A5E2649B12B3687B78D0649_gshared)(__this, ___0_obj, ___1_castResult, method);
}
// TTask WinRT.Interop._IAsyncOperation`2<System.Threading.Tasks.Task`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>,Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus>::AsTask(System.Threading.CancellationToken)
inline Task_1_t0CA270124835536D2EC0B9F820E916762C5F14DD* _IAsyncOperation_2_AsTask_mFF2DC445613BE2EFCF98790B57B0CBB840B4207E (_IAsyncOperation_2_t773B5059C8F097672594D03D8810346042775464* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method)
{
	return ((  Task_1_t0CA270124835536D2EC0B9F820E916762C5F14DD* (*) (_IAsyncOperation_2_t773B5059C8F097672594D03D8810346042775464*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))_IAsyncOperation_2_AsTask_m17CD95B9402D4319B99EFF97CF106EDECE88078D_gshared)(__this, ___0_cancellationToken, method);
}
// System.Void Microsoft.MixedReality.QR.IQRCodeWatcherStatics/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1D55A412BFF0860DBFF3F9453E3BE32EE98E5250 (U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4* __this, const RuntimeMethod* method) ;
// T WinRT.WeakLazy`1<Microsoft.MixedReality.QR.QRCodeWatcher/Statics>::get_Value()
inline Statics_tE2846030F55D8A85D7243DA142CCFFEF8AEB65F6* WeakLazy_1_get_Value_m3432E00C5EE3034731EDF75FE2B22F3361E271C8 (WeakLazy_1_tEB593B90A27476DA223599A6DC2674C5B37DB4C2* __this, const RuntimeMethod* method)
{
	return ((  Statics_tE2846030F55D8A85D7243DA142CCFFEF8AEB65F6* (*) (WeakLazy_1_tEB593B90A27476DA223599A6DC2674C5B37DB4C2*, const RuntimeMethod*))WeakLazy_1_get_Value_m68F0E6AB09CBE63B5A0F13DF20574C82311EF129_gshared)(__this, method);
}
// System.Boolean Microsoft.MixedReality.QR.IQRCodeWatcherStatics::IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IQRCodeWatcherStatics_IsSupported_mE664575F96DF704EF3598FEAE946928B4F2C2293 (IQRCodeWatcherStatics_t491160E09A4D8EAC7A3F66E780433B8E7A901DBC* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus> Microsoft.MixedReality.QR.IQRCodeWatcherStatics::RequestAccessAsync(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0CA270124835536D2EC0B9F820E916762C5F14DD* IQRCodeWatcherStatics_RequestAccessAsync_m1FAF22641703787B79BB8DBE940AAD344D8170A0 (IQRCodeWatcherStatics_t491160E09A4D8EAC7A3F66E780433B8E7A901DBC* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<I> WinRT.ActivationFactory`1<Microsoft.MixedReality.QR.QRCodeWatcher>::ActivateInstance<Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl>()
inline ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* ActivationFactory_1_ActivateInstance_TisVftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_mEED6670CCDCA14DDB7D2DB19B98601776E0F39FE (const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* (*) (const RuntimeMethod*))ActivationFactory_1_ActivateInstance_TisVftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_mFC82B866598F1F00423E50E3855D5D753AAFB1F4_gshared)(method);
}
// Microsoft.MixedReality.QR.IQRCodeWatcher Microsoft.MixedReality.QR.IQRCodeWatcher::op_Implicit(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* IQRCodeWatcher_op_Implicit_m65C2F1C7B3DD17278799B2477F40AA339F19983B (ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* ___0_obj, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.QR.QRCodeWatcher::.ctor(Microsoft.MixedReality.QR.IQRCodeWatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeWatcher__ctor_mAAF42D9C5F921361390A8AB8C71D88D324B79FF3 (QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7* __this, IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* ___0_interface, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.QR.IQRCodeWatcher::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IQRCodeWatcher_Start_m35E1204634E9371930E20B143F72E971380624D1 (IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.QR.IQRCodeWatcher::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IQRCodeWatcher_Stop_m9C71CB6834C16B657F71A05EFB758BB918891619 (IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* __this, const RuntimeMethod* method) ;
// System.Void WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeUpdatedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>::add_Event(System.EventHandler`1<A>)
inline void EventSource_3_add_Event_m3314D19D61D88F8A157802F920A9BAC68C26ACF3 (EventSource_3_t610553071539C339481F8394CD1CBE2967AD8861* __this, EventHandler_1_t8E85A75707F8C26E7861055C6D1E6C531430CF46* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (EventSource_3_t610553071539C339481F8394CD1CBE2967AD8861*, EventHandler_1_t8E85A75707F8C26E7861055C6D1E6C531430CF46*, const RuntimeMethod*))EventSource_3_add_Event_m22EA051959CB737CAC79D500D45681CFA0B892FB_gshared)(__this, ___0_value, method);
}
// System.Void WinRT.EventSource`3<Microsoft.MixedReality.QR.IQRCodeUpdatedHandler,Microsoft.MixedReality.QR.QRCodeWatcher,Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>::remove_Event(System.EventHandler`1<A>)
inline void EventSource_3_remove_Event_mD32B02AF23B6CA7E54CF59D2A5AC152322E8D7B0 (EventSource_3_t610553071539C339481F8394CD1CBE2967AD8861* __this, EventHandler_1_t8E85A75707F8C26E7861055C6D1E6C531430CF46* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (EventSource_3_t610553071539C339481F8394CD1CBE2967AD8861*, EventHandler_1_t8E85A75707F8C26E7861055C6D1E6C531430CF46*, const RuntimeMethod*))EventSource_3_remove_Event_m8BD575315E1CE40AB42E3C87363B7AE4C76BECDE_gshared)(__this, ___0_value, method);
}
// System.Void WinRT.WeakLazy`1<Microsoft.MixedReality.QR.QRCodeWatcher/Statics>::.ctor()
inline void WeakLazy_1__ctor_m4518A4E0A51C3595F331457714DDFE2DA846C7CA (WeakLazy_1_tEB593B90A27476DA223599A6DC2674C5B37DB4C2* __this, const RuntimeMethod* method)
{
	((  void (*) (WeakLazy_1_tEB593B90A27476DA223599A6DC2674C5B37DB4C2*, const RuntimeMethod*))WeakLazy_1__ctor_m2E3571C39FDE6484AD43DBE1F9E6615E3A505DA0_gshared)(__this, method);
}
// WinRT.ObjectReference`1<I> WinRT.ActivationFactory`1<Microsoft.MixedReality.QR.QRCodeWatcher>::As<Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl>()
inline ObjectReference_1_t469AE3F6C4AC12D30FDA14DB6C055BA469085EED* ActivationFactory_1_As_TisVftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_m6FA2F30C82ADF2A84D48851E641884565C8D1F62 (const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t469AE3F6C4AC12D30FDA14DB6C055BA469085EED* (*) (const RuntimeMethod*))ActivationFactory_1_As_TisVftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_m5E1CD4BE470FC24BBA012411333081129E10FC6E_gshared)(method);
}
// System.Void Microsoft.MixedReality.QR.IQRCodeWatcherStatics::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IQRCodeWatcherStatics__ctor_m027BC89617985BF3B48A1A16B27517586AEB8632 (IQRCodeWatcherStatics_t491160E09A4D8EAC7A3F66E780433B8E7A901DBC* __this, ObjectReference_1_t469AE3F6C4AC12D30FDA14DB6C055BA469085EED* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL LoadLibraryExW(Il2CppChar*, intptr_t, uint32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FreeLibrary(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetProcAddress(intptr_t, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CoIncrementMTAUsage(intptr_t*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CoDecrementMTAUsage(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL RoGetActivationFactory(intptr_t, Guid_t*, intptr_t*);
IL2CPP_EXTERN_C int32_t STDCALL WindowsCreateString(Il2CppChar*, int32_t, intptr_t*);
IL2CPP_EXTERN_C Il2CppChar* STDCALL WindowsGetStringRawBuffer(intptr_t, uint32_t*);
IL2CPP_EXTERN_C int32_t STDCALL WindowsDeleteString(intptr_t);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL LoadLibraryExW(Il2CppChar*, intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FreeLibrary(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetProcAddress(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CoIncrementMTAUsage(intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CoDecrementMTAUsage(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_winrt_l1_1_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL RoGetActivationFactory(intptr_t, Guid_t*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
IL2CPP_EXTERN_C int32_t STDCALL WindowsCreateString(Il2CppChar*, int32_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
IL2CPP_EXTERN_C Il2CppChar* STDCALL WindowsGetStringRawBuffer(intptr_t, uint32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
IL2CPP_EXTERN_C int32_t STDCALL WindowsDeleteString(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mono_2_0_bdwgc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL mono_thread_current();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mono_2_0_bdwgc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL mono_thread_is_foreign(intptr_t);
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m783DB1FFEF4967CBBF3BF5E73F06F119EB4DCBA5 (EmbeddedAttribute_tF49071DA4AF6B506C6C15167DAF92D03C1EA66E1* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsUnmanagedAttribute__ctor_mBAAE9CC91061D41AB5AFF42B19000DE951FCA07F (IsUnmanagedAttribute_tD038F91408AD5A05C12AE7834A3D70977536BDAA* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void WinRT.Platform::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__cctor_m78A9EE42CF0B364D7B1A20B9B1D00B609186E793 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DotNETLinkage_tFEB21AA499440559A5E46F95441093B3E159993F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		DotNETLinkage_tFEB21AA499440559A5E46F95441093B3E159993F* L_0 = (DotNETLinkage_tFEB21AA499440559A5E46F95441093B3E159993F*)il2cpp_codegen_object_new(DotNETLinkage_tFEB21AA499440559A5E46F95441093B3E159993F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DotNETLinkage__ctor_m8DA4C13229A7A034D7D5DA6337831D3C84700D8F(L_0, NULL);
		((Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_StaticFields*)il2cpp_codegen_static_fields_for(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var))->____platformLinkage_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_StaticFields*)il2cpp_codegen_static_fields_for(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var))->____platformLinkage_0), (void*)L_0);
	}
	try
	{// begin try (depth: 1)
		RuntimeObject* L_1 = ((Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_StaticFields*)il2cpp_codegen_static_fields_for(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var))->____platformLinkage_0;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(8 /* System.Int32 WinRT.Platform/IPlatformLinkage::_WindowsDeleteString(System.IntPtr) */, IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var, L_1, L_2);
		goto IL_0029;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001c;
		}
		throw e;
	}

CATCH_001c:
	{// begin catch(System.DllNotFoundException)
		IL2CPPLinkage_t86525598B7C6F2BE24822BBB29E1FD220B1F8C63* L_4 = (IL2CPPLinkage_t86525598B7C6F2BE24822BBB29E1FD220B1F8C63*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IL2CPPLinkage_t86525598B7C6F2BE24822BBB29E1FD220B1F8C63_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		IL2CPPLinkage__ctor_m9C246C52F9FA8359B6912A3ADB64675C65BB3E8C(L_4, NULL);
		((Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var))))->____platformLinkage_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var))))->____platformLinkage_0), (void*)L_4);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}// end catch (depth: 1)

IL_0029:
	{
		return;
	}
}
// System.IntPtr WinRT.Platform::TryLoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_TryLoadLibraryExW_m484FADA5A09AD780337627B9C9303F6BE84A5663 (String_t* ___0_fileName, intptr_t ___1_fileHandle, uint32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_StaticFields*)il2cpp_codegen_static_fields_for(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var))->____platformLinkage_0;
		String_t* L_1 = ___0_fileName;
		intptr_t L_2 = ___1_fileHandle;
		uint32_t L_3 = ___2_flags;
		NullCheck(L_0);
		intptr_t L_4;
		L_4 = InterfaceFuncInvoker3< intptr_t, String_t*, intptr_t, uint32_t >::Invoke(0 /* System.IntPtr WinRT.Platform/IPlatformLinkage::_LoadLibraryExW(System.String,System.IntPtr,System.UInt32) */, IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Void WinRT.Platform::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_FreeLibrary_mCE7FC1B7DCA81180DFE7228D4E9FF37847D9B044 (intptr_t ___0_moduleHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_StaticFields*)il2cpp_codegen_static_fields_for(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var))->____platformLinkage_0;
		intptr_t L_1 = ___0_moduleHandle;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, intptr_t >::Invoke(1 /* System.Boolean WinRT.Platform/IPlatformLinkage::_FreeLibrary(System.IntPtr) */, IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Platform_GetHRForLastWin32Error_mE9CADB65B732F5C766D910BC78ED4B9B5BE3A5F6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_3, NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.IntPtr WinRT.Platform::CoIncrementMTAUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_CoIncrementMTAUsage_m743A1D998C68B307847D5B28005AAC7ACB9A19A7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_StaticFields*)il2cpp_codegen_static_fields_for(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var))->____platformLinkage_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, intptr_t* >::Invoke(3 /* System.Int32 WinRT.Platform/IPlatformLinkage::_CoIncrementMTAUsage(System.IntPtr*) */, IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var, L_0, (intptr_t*)((uintptr_t)(&V_0)));
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_1, NULL);
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.Void WinRT.Platform::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_CoDecrementMTAUsage_m38F4B46C0851E6C4D215A65FCD4973EA44D0D499 (intptr_t ___0_cookie, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_StaticFields*)il2cpp_codegen_static_fields_for(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var))->____platformLinkage_0;
		intptr_t L_1 = ___0_cookie;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(4 /* System.Int32 WinRT.Platform/IPlatformLinkage::_CoDecrementMTAUsage(System.IntPtr) */, IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var, L_0, L_1);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_2, NULL);
		return;
	}
}
// System.IntPtr WinRT.Platform::RoGetActivationFactory(System.IntPtr,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_RoGetActivationFactory_m60EECE34F5859220B90E183590F24B99272A86CA (intptr_t ___0_runtimeClassId, Guid_t* ___1_iid, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_StaticFields*)il2cpp_codegen_static_fields_for(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var))->____platformLinkage_0;
		intptr_t L_1 = ___0_runtimeClassId;
		Guid_t* L_2 = ___1_iid;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker3< int32_t, intptr_t, Guid_t*, intptr_t* >::Invoke(5 /* System.Int32 WinRT.Platform/IPlatformLinkage::_RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*) */, IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var, L_0, L_1, L_2, (intptr_t*)((uintptr_t)(&V_0)));
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_3, NULL);
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr WinRT.Platform::WindowsCreateString(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_WindowsCreateString_m8CC14817F8C5F9BDB0934DFC1FBDBF5DDF1F2B1A (String_t* ___0_sourceString, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_StaticFields*)il2cpp_codegen_static_fields_for(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var))->____platformLinkage_0;
		String_t* L_1 = ___0_sourceString;
		int32_t L_2 = ___1_length;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker3< int32_t, String_t*, int32_t, intptr_t* >::Invoke(6 /* System.Int32 WinRT.Platform/IPlatformLinkage::_WindowsCreateString(System.String,System.Int32,System.IntPtr*) */, IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var, L_0, L_1, L_2, (intptr_t*)((uintptr_t)(&V_0)));
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_3, NULL);
		intptr_t L_4 = V_0;
		return L_4;
	}
}
// System.Char* WinRT.Platform::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Platform_WindowsGetStringRawBuffer_m36E4B08F32D04DC954858428F34EB23B8C43C7DF (intptr_t ___0_hstring, uint32_t* ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_StaticFields*)il2cpp_codegen_static_fields_for(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var))->____platformLinkage_0;
		intptr_t L_1 = ___0_hstring;
		uint32_t* L_2 = ___1_length;
		NullCheck(L_0);
		Il2CppChar* L_3;
		L_3 = InterfaceFuncInvoker2< Il2CppChar*, intptr_t, uint32_t* >::Invoke(7 /* System.Char* WinRT.Platform/IPlatformLinkage::_WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*) */, IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Void WinRT.Platform::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_WindowsDeleteString_m90456B1875B21C6434DD454A4A32BF48CFAB7D33 (intptr_t ___0_hstring, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_StaticFields*)il2cpp_codegen_static_fields_for(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var))->____platformLinkage_0;
		intptr_t L_1 = ___0_hstring;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(8 /* System.Int32 WinRT.Platform/IPlatformLinkage::_WindowsDeleteString(System.IntPtr) */, IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var, L_0, L_1);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_2, NULL);
		return;
	}
}
// System.Int32 WinRT.Platform::GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_GetHRForLastWin32Error_mE9CADB65B732F5C766D910BC78ED4B9B5BE3A5F6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_StaticFields*)il2cpp_codegen_static_fields_for(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var))->____platformLinkage_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 WinRT.Platform/IPlatformLinkage::_GetHRForLastWin32Error() */, IPlatformLinkage_t219B2609733E3BD6FE0C5A55825055C0AB776018_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
// System.IntPtr WinRT.Platform/DotNETLinkage::_LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DotNETLinkage__LoadLibraryExW_m6B4614ED4BD6641B98CCEC3066C9BFEC146DA42C (DotNETLinkage_tFEB21AA499440559A5E46F95441093B3E159993F* __this, String_t* ___0_fileName, intptr_t ___1_fileHandle, uint32_t ___2_flags, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_fileName;
		intptr_t L_1 = ___1_fileHandle;
		uint32_t L_2 = ___2_flags;
		intptr_t L_3;
		L_3 = DotNETLinkage_LoadLibraryExW_mD928DE4D1CEA11E16D3E7A0978F6550104637A86(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean WinRT.Platform/DotNETLinkage::_FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNETLinkage__FreeLibrary_m65AE8C65987E1977DF4F4708926E774CF3DDF4BC (DotNETLinkage_tFEB21AA499440559A5E46F95441093B3E159993F* __this, intptr_t ___0_moduleHandle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_moduleHandle;
		bool L_1;
		L_1 = DotNETLinkage_FreeLibrary_m447F0863AE5A2277FD02CCCF3F90047D7945AA8F(L_0, NULL);
		return L_1;
	}
}
// System.IntPtr WinRT.Platform/DotNETLinkage::_GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DotNETLinkage__GetProcAddress_mEF9E83EF7703069416E17493CA1B7248697B84CA (DotNETLinkage_tFEB21AA499440559A5E46F95441093B3E159993F* __this, intptr_t ___0_moduleHandle, String_t* ___1_functionName, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_moduleHandle;
		String_t* L_1 = ___1_functionName;
		intptr_t L_2;
		L_2 = DotNETLinkage_GetProcAddress_m83339A51D17C40A5C5A5B933BA8017416FC2E497(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::_CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__CoIncrementMTAUsage_m27FCC8A781745A0A17146B925BC3D83A9E819736 (DotNETLinkage_tFEB21AA499440559A5E46F95441093B3E159993F* __this, intptr_t* ___0_cookie, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_cookie;
		int32_t L_1;
		L_1 = DotNETLinkage_CoIncrementMTAUsage_m28468DAFFA036081A1D5E746660DDA36925BB3CF(L_0, NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::_CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__CoDecrementMTAUsage_m1D68DB8D4570F896B25A3727E3D717B8172E25C9 (DotNETLinkage_tFEB21AA499440559A5E46F95441093B3E159993F* __this, intptr_t ___0_cookie, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_cookie;
		int32_t L_1;
		L_1 = DotNETLinkage_CoDecrementMTAUsage_mF4BEC58A8E296B994F0C8B888918089BE424614F(L_0, NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::_RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__RoGetActivationFactory_mAB4004BC84C5BAC9125BB3A5BEF10B30AFD42C48 (DotNETLinkage_tFEB21AA499440559A5E46F95441093B3E159993F* __this, intptr_t ___0_runtimeClassId, Guid_t* ___1_iid, intptr_t* ___2_factory, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_runtimeClassId;
		Guid_t* L_1 = ___1_iid;
		intptr_t* L_2 = ___2_factory;
		int32_t L_3;
		L_3 = DotNETLinkage_RoGetActivationFactory_mE59EA3F53577B686F4FD751E4EC40D8998F49F5A(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::_WindowsCreateString(System.String,System.Int32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__WindowsCreateString_m1B888E217DA3A345639ABD753423B862C7C8B460 (DotNETLinkage_tFEB21AA499440559A5E46F95441093B3E159993F* __this, String_t* ___0_sourceString, int32_t ___1_length, intptr_t* ___2_hstring, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_sourceString;
		int32_t L_1 = ___1_length;
		intptr_t* L_2 = ___2_hstring;
		int32_t L_3;
		L_3 = DotNETLinkage_WindowsCreateString_mF504B417C709EF5F6FF2E537F0848F2A4232A276(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Char* WinRT.Platform/DotNETLinkage::_WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* DotNETLinkage__WindowsGetStringRawBuffer_m08B7944BCB15B433E24F1A2BD2AA368A59AD6726 (DotNETLinkage_tFEB21AA499440559A5E46F95441093B3E159993F* __this, intptr_t ___0_hstring, uint32_t* ___1_length, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_hstring;
		uint32_t* L_1 = ___1_length;
		Il2CppChar* L_2;
		L_2 = DotNETLinkage_WindowsGetStringRawBuffer_mE8F10A8046246230B373355D4DDE3FA7B2AB62D3(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::_WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__WindowsDeleteString_m581FFEAADAFBF3E32FAC6B5AE720CF55C20D8014 (DotNETLinkage_tFEB21AA499440559A5E46F95441093B3E159993F* __this, intptr_t ___0_hstring, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_hstring;
		int32_t L_1;
		L_1 = DotNETLinkage_WindowsDeleteString_mD3A86E579E5098EE449A0B0462E850711C4BD86A(L_0, NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::_GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__GetHRForLastWin32Error_m842C0C5D9226BED19186024CE1F6421F4EAE9D4F (DotNETLinkage_tFEB21AA499440559A5E46F95441093B3E159993F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Marshal_GetHRForLastWin32Error_mA1B832674D94EB69385BABFD23210C22AD539492(NULL);
		return L_0;
	}
}
// System.IntPtr WinRT.Platform/DotNETLinkage::LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DotNETLinkage_LoadLibraryExW_mD928DE4D1CEA11E16D3E7A0978F6550104637A86 (String_t* ___0_fileName, intptr_t ___1_fileHandle, uint32_t ___2_flags, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "LoadLibraryExW", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_fileName' to native representation
	Il2CppChar* ____0_fileName_marshaled = NULL;
	if (___0_fileName != NULL)
	{
		____0_fileName_marshaled = &___0_fileName->____firstChar_5;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(LoadLibraryExW)(____0_fileName_marshaled, ___1_fileHandle, ___2_flags);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_fileName_marshaled, ___1_fileHandle, ___2_flags);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// System.Boolean WinRT.Platform/DotNETLinkage::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNETLinkage_FreeLibrary_m447F0863AE5A2277FD02CCCF3F90047D7945AA8F (intptr_t ___0_moduleHandle, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "FreeLibrary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FreeLibrary)(___0_moduleHandle);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_moduleHandle);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
// System.IntPtr WinRT.Platform/DotNETLinkage::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DotNETLinkage_GetProcAddress_m83339A51D17C40A5C5A5B933BA8017416FC2E497 (intptr_t ___0_moduleHandle, String_t* ___1_functionName, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetProcAddress", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_functionName' to native representation
	char* ____1_functionName_marshaled = NULL;
	____1_functionName_marshaled = il2cpp_codegen_marshal_string(___1_functionName);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetProcAddress)(___0_moduleHandle, ____1_functionName_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_moduleHandle, ____1_functionName_marshaled);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling cleanup of parameter '___1_functionName' native representation
	il2cpp_codegen_marshal_free(____1_functionName_marshaled);
	____1_functionName_marshaled = NULL;

	return returnValue;
}
// System.Int32 WinRT.Platform/DotNETLinkage::CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoIncrementMTAUsage_m28468DAFFA036081A1D5E746660DDA36925BB3CF (intptr_t* ___0_cookie, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-com-l1-1-0.dll"), "CoIncrementMTAUsage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoIncrementMTAUsage)(___0_cookie);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_cookie);
	#endif

	return returnValue;
}
// System.Int32 WinRT.Platform/DotNETLinkage::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoDecrementMTAUsage_mF4BEC58A8E296B994F0C8B888918089BE424614F (intptr_t ___0_cookie, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-com-l1-1-0.dll"), "CoDecrementMTAUsage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoDecrementMTAUsage)(___0_cookie);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_cookie);
	#endif

	return returnValue;
}
// System.Int32 WinRT.Platform/DotNETLinkage::RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_RoGetActivationFactory_mE59EA3F53577B686F4FD751E4EC40D8998F49F5A (intptr_t ___0_runtimeClassId, Guid_t* ___1_iid, intptr_t* ___2_factory, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Guid_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_winrt_l1_1_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Guid_t*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-winrt-l1-1-0.dll"), "RoGetActivationFactory", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_winrt_l1_1_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RoGetActivationFactory)(___0_runtimeClassId, ___1_iid, ___2_factory);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_runtimeClassId, ___1_iid, ___2_factory);
	#endif

	return returnValue;
}
// System.Int32 WinRT.Platform/DotNETLinkage::WindowsCreateString(System.String,System.Int32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_WindowsCreateString_mF504B417C709EF5F6FF2E537F0848F2A4232A276 (String_t* ___0_sourceString, int32_t ___1_length, intptr_t* ___2_hstring, const RuntimeMethod* method) 
{
	typedef int32_t (STDCALL *PInvokeFunc) (Il2CppChar*, int32_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*) + sizeof(int32_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-winrt-string-l1-1-0.dll"), "WindowsCreateString", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_sourceString' to native representation
	Il2CppChar* ____0_sourceString_marshaled = NULL;
	if (___0_sourceString != NULL)
	{
		____0_sourceString_marshaled = &___0_sourceString->____firstChar_5;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WindowsCreateString)(____0_sourceString_marshaled, ___1_length, ___2_hstring);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_sourceString_marshaled, ___1_length, ___2_hstring);
	#endif

	return returnValue;
}
// System.Char* WinRT.Platform/DotNETLinkage::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* DotNETLinkage_WindowsGetStringRawBuffer_mE8F10A8046246230B373355D4DDE3FA7B2AB62D3 (intptr_t ___0_hstring, uint32_t* ___1_length, const RuntimeMethod* method) 
{
	typedef Il2CppChar* (STDCALL *PInvokeFunc) (intptr_t, uint32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-winrt-string-l1-1-0.dll"), "WindowsGetStringRawBuffer", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
	Il2CppChar* returnValue = reinterpret_cast<PInvokeFunc>(WindowsGetStringRawBuffer)(___0_hstring, ___1_length);
	#else
	Il2CppChar* returnValue = il2cppPInvokeFunc(___0_hstring, ___1_length);
	#endif

	return returnValue;
}
// System.Int32 WinRT.Platform/DotNETLinkage::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_WindowsDeleteString_mD3A86E579E5098EE449A0B0462E850711C4BD86A (intptr_t ___0_hstring, const RuntimeMethod* method) 
{
	typedef int32_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-winrt-string-l1-1-0.dll"), "WindowsDeleteString", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WindowsDeleteString)(___0_hstring);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_hstring);
	#endif

	return returnValue;
}
// System.Void WinRT.Platform/DotNETLinkage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNETLinkage__ctor_m8DA4C13229A7A034D7D5DA6337831D3C84700D8F (DotNETLinkage_tFEB21AA499440559A5E46F95441093B3E159993F* __this, const RuntimeMethod* method) 
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
// System.IntPtr WinRT.Platform/IL2CPPLinkage::_LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IL2CPPLinkage__LoadLibraryExW_m43CD2DDB420F9AFACF29EC6A8D70664C1BAA5E00 (IL2CPPLinkage_t86525598B7C6F2BE24822BBB29E1FD220B1F8C63* __this, String_t* ___0_fileName, intptr_t ___1_fileHandle, uint32_t ___2_flags, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_fileName;
		intptr_t L_1 = ___1_fileHandle;
		uint32_t L_2 = ___2_flags;
		intptr_t L_3;
		L_3 = IL2CPPLinkage_LoadLibraryExW_m18E4DC2C1548A82720D5F6EA6829298FD527A44B(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean WinRT.Platform/IL2CPPLinkage::_FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IL2CPPLinkage__FreeLibrary_mC310BEFFA0A9A608E0B5530FDEE6EC166D0BC488 (IL2CPPLinkage_t86525598B7C6F2BE24822BBB29E1FD220B1F8C63* __this, intptr_t ___0_moduleHandle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_moduleHandle;
		bool L_1;
		L_1 = IL2CPPLinkage_FreeLibrary_m600472A968EF85375AC95D986B5705234ECCA299(L_0, NULL);
		return L_1;
	}
}
// System.IntPtr WinRT.Platform/IL2CPPLinkage::_GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IL2CPPLinkage__GetProcAddress_m4DD2D228C0EEF2ED153CA5F162322875B0CF63DD (IL2CPPLinkage_t86525598B7C6F2BE24822BBB29E1FD220B1F8C63* __this, intptr_t ___0_moduleHandle, String_t* ___1_functionName, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_moduleHandle;
		String_t* L_1 = ___1_functionName;
		intptr_t L_2;
		L_2 = IL2CPPLinkage_GetProcAddress_m288594877624E681B69BDED403A1FB9D51787224(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::_CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__CoIncrementMTAUsage_m70F4398C9700074BCF300DB0874F6690BECFF6F5 (IL2CPPLinkage_t86525598B7C6F2BE24822BBB29E1FD220B1F8C63* __this, intptr_t* ___0_cookie, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_cookie;
		int32_t L_1;
		L_1 = IL2CPPLinkage_CoIncrementMTAUsage_m9EC30212D172514DAB1B7F19D485E1872D51114E(L_0, NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::_CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__CoDecrementMTAUsage_m68C227A35110B8100EA9E336A17C0CE6D54BB72C (IL2CPPLinkage_t86525598B7C6F2BE24822BBB29E1FD220B1F8C63* __this, intptr_t ___0_cookie, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_cookie;
		int32_t L_1;
		L_1 = IL2CPPLinkage_CoDecrementMTAUsage_m34EE3DC83BF60F748B487DDD5D23030EA74CE7F6(L_0, NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::_RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__RoGetActivationFactory_m5AB424A0B0C22033C5163726D8ED1DBFEB91396E (IL2CPPLinkage_t86525598B7C6F2BE24822BBB29E1FD220B1F8C63* __this, intptr_t ___0_runtimeClassId, Guid_t* ___1_iid, intptr_t* ___2_factory, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_runtimeClassId;
		Guid_t* L_1 = ___1_iid;
		intptr_t* L_2 = ___2_factory;
		int32_t L_3;
		L_3 = IL2CPPLinkage_RoGetActivationFactory_m28A995C87663759610B3651CE3C0531D7D1E411A(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::_WindowsCreateString(System.String,System.Int32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__WindowsCreateString_m280E51E246DCEB9E7172B8CAAF11D642D3C97DCF (IL2CPPLinkage_t86525598B7C6F2BE24822BBB29E1FD220B1F8C63* __this, String_t* ___0_sourceString, int32_t ___1_length, intptr_t* ___2_hstring, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_sourceString;
		int32_t L_1 = ___1_length;
		intptr_t* L_2 = ___2_hstring;
		int32_t L_3;
		L_3 = IL2CPPLinkage_WindowsCreateString_m7A2ACFBAA6CF8ADB276044CD79B504D7FA70CBA4(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Char* WinRT.Platform/IL2CPPLinkage::_WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* IL2CPPLinkage__WindowsGetStringRawBuffer_mF520293D01E84BFC095CC866380C4703EB971927 (IL2CPPLinkage_t86525598B7C6F2BE24822BBB29E1FD220B1F8C63* __this, intptr_t ___0_hstring, uint32_t* ___1_length, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_hstring;
		uint32_t* L_1 = ___1_length;
		Il2CppChar* L_2;
		L_2 = IL2CPPLinkage_WindowsGetStringRawBuffer_m43E89486907592139AB0D52752B2D8D483E4FEE6(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::_WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__WindowsDeleteString_mF0E48139E9A5F66118F1F49FF14EA7E499A2A659 (IL2CPPLinkage_t86525598B7C6F2BE24822BBB29E1FD220B1F8C63* __this, intptr_t ___0_hstring, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_hstring;
		int32_t L_1;
		L_1 = IL2CPPLinkage_WindowsDeleteString_m8175860EEA9E79F2F530A1EC165CE65FDD475933(L_0, NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::_GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__GetHRForLastWin32Error_mF1E8C71DFEE1618A1529A97A76E9F54ED1C0D345 (IL2CPPLinkage_t86525598B7C6F2BE24822BBB29E1FD220B1F8C63* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)-2147467259);
	}
}
// System.IntPtr WinRT.Platform/IL2CPPLinkage::LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IL2CPPLinkage_LoadLibraryExW_m18E4DC2C1548A82720D5F6EA6829298FD527A44B (String_t* ___0_fileName, intptr_t ___1_fileHandle, uint32_t ___2_flags, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*, intptr_t, uint32_t);

	// Marshaling of parameter '___0_fileName' to native representation
	Il2CppChar* ____0_fileName_marshaled = NULL;
	if (___0_fileName != NULL)
	{
		____0_fileName_marshaled = &___0_fileName->____firstChar_5;
	}

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(LoadLibraryExW)(____0_fileName_marshaled, ___1_fileHandle, ___2_flags);
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// System.Boolean WinRT.Platform/IL2CPPLinkage::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IL2CPPLinkage_FreeLibrary_m600472A968EF85375AC95D986B5705234ECCA299 (intptr_t ___0_moduleHandle, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FreeLibrary)(___0_moduleHandle);
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
// System.IntPtr WinRT.Platform/IL2CPPLinkage::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IL2CPPLinkage_GetProcAddress_m288594877624E681B69BDED403A1FB9D51787224 (intptr_t ___0_moduleHandle, String_t* ___1_functionName, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___1_functionName' to native representation
	char* ____1_functionName_marshaled = NULL;
	____1_functionName_marshaled = il2cpp_codegen_marshal_string(___1_functionName);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetProcAddress)(___0_moduleHandle, ____1_functionName_marshaled);
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling cleanup of parameter '___1_functionName' native representation
	il2cpp_codegen_marshal_free(____1_functionName_marshaled);
	____1_functionName_marshaled = NULL;

	return returnValue;
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoIncrementMTAUsage_m9EC30212D172514DAB1B7F19D485E1872D51114E (intptr_t* ___0_cookie, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoIncrementMTAUsage)(___0_cookie);

	return returnValue;
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoDecrementMTAUsage_m34EE3DC83BF60F748B487DDD5D23030EA74CE7F6 (intptr_t ___0_cookie, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoDecrementMTAUsage)(___0_cookie);

	return returnValue;
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_RoGetActivationFactory_m28A995C87663759610B3651CE3C0531D7D1E411A (intptr_t ___0_runtimeClassId, Guid_t* ___1_iid, intptr_t* ___2_factory, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Guid_t*, intptr_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RoGetActivationFactory)(___0_runtimeClassId, ___1_iid, ___2_factory);

	return returnValue;
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::WindowsCreateString(System.String,System.Int32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_WindowsCreateString_m7A2ACFBAA6CF8ADB276044CD79B504D7FA70CBA4 (String_t* ___0_sourceString, int32_t ___1_length, intptr_t* ___2_hstring, const RuntimeMethod* method) 
{
	typedef int32_t (STDCALL *PInvokeFunc) (Il2CppChar*, int32_t, intptr_t*);

	// Marshaling of parameter '___0_sourceString' to native representation
	Il2CppChar* ____0_sourceString_marshaled = NULL;
	if (___0_sourceString != NULL)
	{
		____0_sourceString_marshaled = &___0_sourceString->____firstChar_5;
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WindowsCreateString)(____0_sourceString_marshaled, ___1_length, ___2_hstring);

	return returnValue;
}
// System.Char* WinRT.Platform/IL2CPPLinkage::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* IL2CPPLinkage_WindowsGetStringRawBuffer_m43E89486907592139AB0D52752B2D8D483E4FEE6 (intptr_t ___0_hstring, uint32_t* ___1_length, const RuntimeMethod* method) 
{
	typedef Il2CppChar* (STDCALL *PInvokeFunc) (intptr_t, uint32_t*);

	// Native function invocation
	Il2CppChar* returnValue = reinterpret_cast<PInvokeFunc>(WindowsGetStringRawBuffer)(___0_hstring, ___1_length);

	return returnValue;
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_WindowsDeleteString_m8175860EEA9E79F2F530A1EC165CE65FDD475933 (intptr_t ___0_hstring, const RuntimeMethod* method) 
{
	typedef int32_t (STDCALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WindowsDeleteString)(___0_hstring);

	return returnValue;
}
// System.Void WinRT.Platform/IL2CPPLinkage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IL2CPPLinkage__ctor_m9C246C52F9FA8359B6912A3ADB64675C65BB3E8C (IL2CPPLinkage_t86525598B7C6F2BE24822BBB29E1FD220B1F8C63* __this, const RuntimeMethod* method) 
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
// System.IntPtr WinRT.Mono::mono_thread_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Mono_mono_thread_current_mD94FF145F9F946E2FFD94D0EF2B2CC8A1EB0CB99 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mono_2_0_bdwgc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mono-2.0-bdwgc.dll"), "mono_thread_current", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mono_2_0_bdwgc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(mono_thread_current)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Boolean WinRT.Mono::mono_thread_is_foreign(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mono_mono_thread_is_foreign_mA58C8CA8BDECBC057B1FBC65309A45F3E13656DB (intptr_t ___0_threadPtr, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mono_2_0_bdwgc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mono-2.0-bdwgc.dll"), "mono_thread_is_foreign", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mono_2_0_bdwgc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(mono_thread_is_foreign)(___0_threadPtr);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_threadPtr);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void WinRT.Mono::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mono__cctor_mFA2CF1CE65A1E1F2C9BE50F505BE22BBACDAF942 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1__ctor_mDE4E036B099035F21688E3B1D7BE2EE6CBDBE772_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__8_0_m8151C87366CA91F3974C198BC8938F47433FC46E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47_il2cpp_TypeInfo_var);
		U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47* L_0 = ((U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_1 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__8_0_m8151C87366CA91F3974C198BC8938F47433FC46E_RuntimeMethod_var), NULL);
		Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6* L_2 = (Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6*)il2cpp_codegen_object_new(Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Lazy_1__ctor_mDE4E036B099035F21688E3B1D7BE2EE6CBDBE772(L_2, L_1, Lazy_1__ctor_mDE4E036B099035F21688E3B1D7BE2EE6CBDBE772_RuntimeMethod_var);
		((Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_StaticFields*)il2cpp_codegen_static_fields_for(Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_il2cpp_TypeInfo_var))->____usingMono_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_StaticFields*)il2cpp_codegen_static_fields_for(Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_il2cpp_TypeInfo_var))->____usingMono_0), (void*)L_2);
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
intptr_t mono_thread_internal_attach_Invoke_mB3B31FEBE41DD2A6EF2FC7CA2BE511CF658FF994_Multicast(mono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50* __this, intptr_t ___0_domainPtr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		mono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50* currentDelegate = reinterpret_cast<mono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_domainPtr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t mono_thread_internal_attach_Invoke_mB3B31FEBE41DD2A6EF2FC7CA2BE511CF658FF994_OpenInst(mono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50* __this, intptr_t ___0_domainPtr, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_domainPtr, method);
}
intptr_t mono_thread_internal_attach_Invoke_mB3B31FEBE41DD2A6EF2FC7CA2BE511CF658FF994_OpenStatic(mono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50* __this, intptr_t ___0_domainPtr, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_domainPtr, method);
}
intptr_t mono_thread_internal_attach_Invoke_mB3B31FEBE41DD2A6EF2FC7CA2BE511CF658FF994_OpenStaticInvoker(mono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50* __this, intptr_t ___0_domainPtr, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_domainPtr);
}
intptr_t mono_thread_internal_attach_Invoke_mB3B31FEBE41DD2A6EF2FC7CA2BE511CF658FF994_ClosedStaticInvoker(mono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50* __this, intptr_t ___0_domainPtr, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< intptr_t, RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_domainPtr);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_mono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50 (mono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50* __this, intptr_t ___0_domainPtr, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___0_domainPtr);

	return returnValue;
}
// System.Void WinRT.Mono/mono_thread_internal_attach::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_internal_attach__ctor_m429C07C786AEA15953BCFB105084F71D3EE5D054 (mono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&mono_thread_internal_attach_Invoke_mB3B31FEBE41DD2A6EF2FC7CA2BE511CF658FF994_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&mono_thread_internal_attach_Invoke_mB3B31FEBE41DD2A6EF2FC7CA2BE511CF658FF994_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&mono_thread_internal_attach_Invoke_mB3B31FEBE41DD2A6EF2FC7CA2BE511CF658FF994_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&mono_thread_internal_attach_Invoke_mB3B31FEBE41DD2A6EF2FC7CA2BE511CF658FF994_Multicast;
}
// System.IntPtr WinRT.Mono/mono_thread_internal_attach::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t mono_thread_internal_attach_Invoke_mB3B31FEBE41DD2A6EF2FC7CA2BE511CF658FF994 (mono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50* __this, intptr_t ___0_domainPtr, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_domainPtr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void mono_thread_cleanup_initialize_Invoke_m3D1DC548582AA90CE0F85642D228D25F85B8B50D_Multicast(mono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47* __this, intptr_t* ___0_threadCleanupRequested, intptr_t* ___1_threadCleanupCompleted, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		mono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47* currentDelegate = reinterpret_cast<mono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t*, intptr_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_threadCleanupRequested, ___1_threadCleanupCompleted, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void mono_thread_cleanup_initialize_Invoke_m3D1DC548582AA90CE0F85642D228D25F85B8B50D_OpenInst(mono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47* __this, intptr_t* ___0_threadCleanupRequested, intptr_t* ___1_threadCleanupCompleted, const RuntimeMethod* method)
{
	NullCheck(___0_threadCleanupRequested);
	typedef void (*FunctionPointerType) (intptr_t*, intptr_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_threadCleanupRequested, ___1_threadCleanupCompleted, method);
}
void mono_thread_cleanup_initialize_Invoke_m3D1DC548582AA90CE0F85642D228D25F85B8B50D_OpenStatic(mono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47* __this, intptr_t* ___0_threadCleanupRequested, intptr_t* ___1_threadCleanupCompleted, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t*, intptr_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_threadCleanupRequested, ___1_threadCleanupCompleted, method);
}
void mono_thread_cleanup_initialize_Invoke_m3D1DC548582AA90CE0F85642D228D25F85B8B50D_OpenStaticInvoker(mono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47* __this, intptr_t* ___0_threadCleanupRequested, intptr_t* ___1_threadCleanupCompleted, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t*, intptr_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_threadCleanupRequested, ___1_threadCleanupCompleted);
}
void mono_thread_cleanup_initialize_Invoke_m3D1DC548582AA90CE0F85642D228D25F85B8B50D_ClosedStaticInvoker(mono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47* __this, intptr_t* ___0_threadCleanupRequested, intptr_t* ___1_threadCleanupCompleted, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t*, intptr_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_threadCleanupRequested, ___1_threadCleanupCompleted);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_mono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47 (mono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47* __this, intptr_t* ___0_threadCleanupRequested, intptr_t* ___1_threadCleanupCompleted, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(intptr_t*, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_threadCleanupRequested, ___1_threadCleanupCompleted);

}
// System.Void WinRT.Mono/mono_thread_cleanup_initialize::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_cleanup_initialize__ctor_mDE7A793350FB70C9F6AAAD940C38D8F5384EE595 (mono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&mono_thread_cleanup_initialize_Invoke_m3D1DC548582AA90CE0F85642D228D25F85B8B50D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&mono_thread_cleanup_initialize_Invoke_m3D1DC548582AA90CE0F85642D228D25F85B8B50D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&mono_thread_cleanup_initialize_Invoke_m3D1DC548582AA90CE0F85642D228D25F85B8B50D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&mono_thread_cleanup_initialize_Invoke_m3D1DC548582AA90CE0F85642D228D25F85B8B50D_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&mono_thread_cleanup_initialize_Invoke_m3D1DC548582AA90CE0F85642D228D25F85B8B50D_Multicast;
}
// System.Void WinRT.Mono/mono_thread_cleanup_initialize::Invoke(System.IntPtr*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_cleanup_initialize_Invoke_m3D1DC548582AA90CE0F85642D228D25F85B8B50D (mono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47* __this, intptr_t* ___0_threadCleanupRequested, intptr_t* ___1_threadCleanupCompleted, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t*, intptr_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_threadCleanupRequested, ___1_threadCleanupCompleted, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void mono_thread_cleanup_register_Invoke_mF5CC08EF99E7E264CD9CAC0628065136A78A4D5B_Multicast(mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C* __this, intptr_t ___0_threadPtr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C* currentDelegate = reinterpret_cast<mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_threadPtr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void mono_thread_cleanup_register_Invoke_mF5CC08EF99E7E264CD9CAC0628065136A78A4D5B_OpenInst(mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C* __this, intptr_t ___0_threadPtr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_threadPtr, method);
}
void mono_thread_cleanup_register_Invoke_mF5CC08EF99E7E264CD9CAC0628065136A78A4D5B_OpenStatic(mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C* __this, intptr_t ___0_threadPtr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_threadPtr, method);
}
void mono_thread_cleanup_register_Invoke_mF5CC08EF99E7E264CD9CAC0628065136A78A4D5B_OpenStaticInvoker(mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C* __this, intptr_t ___0_threadPtr, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_threadPtr);
}
void mono_thread_cleanup_register_Invoke_mF5CC08EF99E7E264CD9CAC0628065136A78A4D5B_ClosedStaticInvoker(mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C* __this, intptr_t ___0_threadPtr, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_threadPtr);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C (mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C* __this, intptr_t ___0_threadPtr, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_threadPtr);

}
// System.Void WinRT.Mono/mono_thread_cleanup_register::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_cleanup_register__ctor_m8EED06464DA391F1A0D80DE908AC7A765B5DD36C (mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&mono_thread_cleanup_register_Invoke_mF5CC08EF99E7E264CD9CAC0628065136A78A4D5B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&mono_thread_cleanup_register_Invoke_mF5CC08EF99E7E264CD9CAC0628065136A78A4D5B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&mono_thread_cleanup_register_Invoke_mF5CC08EF99E7E264CD9CAC0628065136A78A4D5B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&mono_thread_cleanup_register_Invoke_mF5CC08EF99E7E264CD9CAC0628065136A78A4D5B_Multicast;
}
// System.Void WinRT.Mono/mono_thread_cleanup_register::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_cleanup_register_Invoke_mF5CC08EF99E7E264CD9CAC0628065136A78A4D5B (mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C* __this, intptr_t ___0_threadPtr, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_threadPtr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WinRT.Mono/ThreadContext::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContext__cctor_mF308B69E82BCF1B34FF0C3FA95E1F9456AC6A705 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1__ctor_mF1487AB0FCFAFBB12664FCD33F33BA90049923B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_m50BC2FE5ACA123147959F3A8B3C523A1242C2E45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_tF1F993EAE4F44D33B36FFF7D9310F2A84485A643_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_GetProcAddress_Tismono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47_m1C6CF42015C0BD89BCFB5523659F4767368AFA71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_GetProcAddress_Tismono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C_m379B936F46AB23965B311613218CB38C0E4E8ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F7E940B2021E8BF65852F73C3E2CECACCD01456);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Lazy_1_tF1F993EAE4F44D33B36FFF7D9310F2A84485A643* L_0 = (Lazy_1_tF1F993EAE4F44D33B36FFF7D9310F2A84485A643*)il2cpp_codegen_object_new(Lazy_1_tF1F993EAE4F44D33B36FFF7D9310F2A84485A643_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Lazy_1__ctor_mF1487AB0FCFAFBB12664FCD33F33BA90049923B3(L_0, Lazy_1__ctor_mF1487AB0FCFAFBB12664FCD33F33BA90049923B3_RuntimeMethod_var);
		((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____foreignThreads_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____foreignThreads_0), (void*)L_0);
		Lazy_1_tF1F993EAE4F44D33B36FFF7D9310F2A84485A643* L_1 = (Lazy_1_tF1F993EAE4F44D33B36FFF7D9310F2A84485A643*)il2cpp_codegen_object_new(Lazy_1_tF1F993EAE4F44D33B36FFF7D9310F2A84485A643_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Lazy_1__ctor_mF1487AB0FCFAFBB12664FCD33F33BA90049923B3(L_1, Lazy_1__ctor_mF1487AB0FCFAFBB12664FCD33F33BA90049923B3_RuntimeMethod_var);
		((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____presumedNonForeignThreads_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____presumedNonForeignThreads_1), (void*)L_1);
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_2 = (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E*)il2cpp_codegen_object_new(EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventWaitHandle__ctor_m5B0D1FD902682B5D5E82A4B564363AB711F10F8E(L_2, (bool)0, 0, NULL);
		((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____threadCleanupRequested_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____threadCleanupRequested_2), (void*)L_2);
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_3 = (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E*)il2cpp_codegen_object_new(EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventWaitHandle__ctor_m5B0D1FD902682B5D5E82A4B564363AB711F10F8E(L_3, (bool)0, 0, NULL);
		((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____threadCleanupCompleted_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____threadCleanupCompleted_3), (void*)L_3);
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____monoSupportHandle_4 = L_4;
		((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____cleanupRegister_5 = (mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____cleanupRegister_5), (void*)(mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C*)NULL);
		il2cpp_codegen_runtime_class_init_inline(Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_il2cpp_TypeInfo_var);
		Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6* L_5 = ((Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_StaticFields*)il2cpp_codegen_static_fields_for(Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_il2cpp_TypeInfo_var))->____usingMono_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = Lazy_1_get_Value_m50BC2FE5ACA123147959F3A8B3C523A1242C2E45(L_5, Lazy_1_get_Value_m50BC2FE5ACA123147959F3A8B3C523A1242C2E45_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_00c2;
		}
	}
	{
		intptr_t L_7 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		intptr_t L_8;
		L_8 = Platform_TryLoadLibraryExW_m484FADA5A09AD780337627B9C9303F6BE84A5663(_stringLiteral1F7E940B2021E8BF65852F73C3E2CECACCD01456, L_7, ((int32_t)4096), NULL);
		((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____monoSupportHandle_4 = L_8;
		intptr_t L_9 = ((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____monoSupportHandle_4;
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_11;
		L_11 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = Marshal_GetHRForLastWin32Error_mA1B832674D94EB69385BABFD23210C22AD539492(NULL);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_12, NULL);
	}

IL_007c:
	{
		intptr_t L_13 = ((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____monoSupportHandle_4;
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		mono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47* L_14;
		L_14 = Platform_GetProcAddress_Tismono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47_m1C6CF42015C0BD89BCFB5523659F4767368AFA71(L_13, Platform_GetProcAddress_Tismono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47_m1C6CF42015C0BD89BCFB5523659F4767368AFA71_RuntimeMethod_var);
		NullCheck(L_14);
		mono_thread_cleanup_initialize_Invoke_m3D1DC548582AA90CE0F85642D228D25F85B8B50D_inline(L_14, (intptr_t*)((uintptr_t)(&V_0)), (intptr_t*)((uintptr_t)(&V_1)), NULL);
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_15 = ((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____threadCleanupRequested_2;
		intptr_t L_16 = V_0;
		SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* L_17 = (SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449*)il2cpp_codegen_object_new(SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		SafeWaitHandle__ctor_m6CA082DF779C0BAAA7EEDE99BB2ECF1ECDB579DA(L_17, L_16, (bool)1, NULL);
		WaitHandleExtensions_SetSafeWaitHandle_mFA96419C753C4911BF92048E1996CE34FB91A1D8(L_15, L_17, NULL);
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_18 = ((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____threadCleanupCompleted_3;
		intptr_t L_19 = V_1;
		SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* L_20 = (SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449*)il2cpp_codegen_object_new(SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		SafeWaitHandle__ctor_m6CA082DF779C0BAAA7EEDE99BB2ECF1ECDB579DA(L_20, L_19, (bool)1, NULL);
		WaitHandleExtensions_SetSafeWaitHandle_mFA96419C753C4911BF92048E1996CE34FB91A1D8(L_18, L_20, NULL);
		intptr_t L_21 = ((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____monoSupportHandle_4;
		mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C* L_22;
		L_22 = Platform_GetProcAddress_Tismono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C_m379B936F46AB23965B311613218CB38C0E4E8ACC(L_21, Platform_GetProcAddress_Tismono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C_m379B936F46AB23965B311613218CB38C0E4E8ACC_RuntimeMethod_var);
		((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____cleanupRegister_5 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____cleanupRegister_5), (void*)L_22);
	}

IL_00c2:
	{
		return;
	}
}
// System.Void WinRT.Mono/ThreadContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContext__ctor_m699D96A297F011871741D23E92603B22CDBEC58B (ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m3715E69647F22B53E7555EBDC0DDD78612F49F77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_m4176FB66D83003824F2693A2E79CA31D317D5B19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_m50BC2FE5ACA123147959F3A8B3C523A1242C2E45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_il2cpp_TypeInfo_var);
		Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6* L_0 = ((Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_StaticFields*)il2cpp_codegen_static_fields_for(Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_il2cpp_TypeInfo_var))->____usingMono_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Lazy_1_get_Value_m50BC2FE5ACA123147959F3A8B3C523A1242C2E45(L_0, Lazy_1_get_Value_m50BC2FE5ACA123147959F3A8B3C523A1242C2E45_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Mono_mono_thread_current_mD94FF145F9F946E2FFD94D0EF2B2CC8A1EB0CB99(NULL);
		V_0 = L_2;
		intptr_t L_3 = V_0;
		bool L_4;
		L_4 = Mono_mono_thread_is_foreign_mA58C8CA8BDECBC057B1FBC65309A45F3E13656DB(L_3, NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var);
		Lazy_1_tF1F993EAE4F44D33B36FFF7D9310F2A84485A643* L_5 = ((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____presumedNonForeignThreads_1;
		NullCheck(L_5);
		HashSet_1_t3E357372EAB73A7B5E49D739B3175D9C5DE270FD* L_6;
		L_6 = Lazy_1_get_Value_m4176FB66D83003824F2693A2E79CA31D317D5B19(L_5, Lazy_1_get_Value_m4176FB66D83003824F2693A2E79CA31D317D5B19_RuntimeMethod_var);
		intptr_t L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Contains_m3715E69647F22B53E7555EBDC0DDD78612F49F77(L_6, L_7, HashSet_1_Contains_m3715E69647F22B53E7555EBDC0DDD78612F49F77_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var);
		mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C* L_9 = ((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____cleanupRegister_5;
		intptr_t L_10 = V_0;
		NullCheck(L_9);
		mono_thread_cleanup_register_Invoke_mF5CC08EF99E7E264CD9CAC0628065136A78A4D5B_inline(L_9, L_10, NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void WinRT.Mono/ThreadContext::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContext_Dispose_m1D90A5A265EC22FAD94F2601FF5D64DBE01740E2 (ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void WinRT.Mono/ThreadContext::RegisterPossiblyNonForeignThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContext_RegisterPossiblyNonForeignThread_m88CE97ED901E94E3F71E943E1E62875A5419CE35 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m38EDB84AA15D55ADA0359297102CBB72444E651D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m3715E69647F22B53E7555EBDC0DDD78612F49F77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_m4176FB66D83003824F2693A2E79CA31D317D5B19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_m50BC2FE5ACA123147959F3A8B3C523A1242C2E45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_il2cpp_TypeInfo_var);
		Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6* L_0 = ((Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_StaticFields*)il2cpp_codegen_static_fields_for(Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_il2cpp_TypeInfo_var))->____usingMono_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Lazy_1_get_Value_m50BC2FE5ACA123147959F3A8B3C523A1242C2E45(L_0, Lazy_1_get_Value_m50BC2FE5ACA123147959F3A8B3C523A1242C2E45_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Mono_tE3A1EDAB8C5267DB097B6BC1B89F8C7C89F72F87_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Mono_mono_thread_current_mD94FF145F9F946E2FFD94D0EF2B2CC8A1EB0CB99(NULL);
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var);
		Lazy_1_tF1F993EAE4F44D33B36FFF7D9310F2A84485A643* L_3 = ((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____foreignThreads_0;
		NullCheck(L_3);
		HashSet_1_t3E357372EAB73A7B5E49D739B3175D9C5DE270FD* L_4;
		L_4 = Lazy_1_get_Value_m4176FB66D83003824F2693A2E79CA31D317D5B19(L_3, Lazy_1_get_Value_m4176FB66D83003824F2693A2E79CA31D317D5B19_RuntimeMethod_var);
		intptr_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = HashSet_1_Contains_m3715E69647F22B53E7555EBDC0DDD78612F49F77(L_4, L_5, HashSet_1_Contains_m3715E69647F22B53E7555EBDC0DDD78612F49F77_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var);
		Lazy_1_tF1F993EAE4F44D33B36FFF7D9310F2A84485A643* L_7 = ((ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var))->____presumedNonForeignThreads_1;
		NullCheck(L_7);
		HashSet_1_t3E357372EAB73A7B5E49D739B3175D9C5DE270FD* L_8;
		L_8 = Lazy_1_get_Value_m4176FB66D83003824F2693A2E79CA31D317D5B19(L_7, Lazy_1_get_Value_m4176FB66D83003824F2693A2E79CA31D317D5B19_RuntimeMethod_var);
		intptr_t L_9 = V_0;
		NullCheck(L_8);
		bool L_10;
		L_10 = HashSet_1_Add_m38EDB84AA15D55ADA0359297102CBB72444E651D(L_8, L_9, HashSet_1_Add_m38EDB84AA15D55ADA0359297102CBB72444E651D_RuntimeMethod_var);
	}

IL_0035:
	{
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
// System.Void WinRT.Mono/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m59D0909B3FFA34E01B3D15A776FBF29CB7868A2B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47* L_0 = (U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47*)il2cpp_codegen_object_new(U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mAC46A6B5C7D4E6B5A665319BEED23585B55BF26F(L_0, NULL);
		((U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void WinRT.Mono/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAC46A6B5C7D4E6B5A665319BEED23585B55BF26F (U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean WinRT.Mono/<>c::<.cctor>b__8_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_cctorU3Eb__8_0_m8151C87366CA91F3974C198BC8938F47433FC46E (U3CU3Ec_t0D3FA9EC55BB58DE104AA5521F5B37D3E490AC47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_TryGetProcAddress_Tismono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50_m0CB919D1A3B830EC36AEBC8985022A80C25FBA64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral885E8980C78A0F622B164E0FA16B56B9CF8B06B5);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = Platform_TryLoadLibraryExW_m484FADA5A09AD780337627B9C9303F6BE84A5663(_stringLiteral885E8980C78A0F622B164E0FA16B56B9CF8B06B5, L_0, 0, NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		return (bool)0;
	}

IL_0020:
	{
		intptr_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		mono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50* L_6;
		L_6 = Platform_TryGetProcAddress_Tismono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50_m0CB919D1A3B830EC36AEBC8985022A80C25FBA64(L_5, Platform_TryGetProcAddress_Tismono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50_m0CB919D1A3B830EC36AEBC8985022A80C25FBA64_RuntimeMethod_var);
		V_1 = (bool)((((RuntimeObject*)(mono_thread_internal_attach_tBE43648CCDD4F16FA60020C622EB7A0CBDC21F50*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		intptr_t L_7 = V_0;
		Platform_FreeLibrary_mCE7FC1B7DCA81180DFE7228D4E9FF37847D9B044(L_7, NULL);
		bool L_8 = V_1;
		return L_8;
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
// System.Void WinRT.HString::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HString__ctor_m4F54261271DAD93CA3F1F6ED4F1C097875D3EFD3 (HString_t734316CC9188B0454711CDE6F9D311FD99F46E54* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_value;
		String_t* L_1 = ___0_value;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = Platform_WindowsCreateString_m8CC14817F8C5F9BDB0934DFC1FBDBF5DDF1F2B1A(L_0, L_2, NULL);
		__this->___Handle_0 = L_3;
		return;
	}
}
// System.Void WinRT.HString::.ctor(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HString__ctor_m7CC40A4BCB0244E53D92015C1D94C97DDF918C8A (HString_t734316CC9188B0454711CDE6F9D311FD99F46E54* __this, intptr_t* ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t* L_0 = ___0_handle;
		__this->___Handle_0 = ((*(L_0)));
		intptr_t* L_1 = ___0_handle;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		*((intptr_t*)L_1) = (intptr_t)L_2;
		return;
	}
}
// System.String WinRT.HString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HString_ToString_mC25A1637F4E7C223A811AA09CB7493086B5F2EB7 (HString_t734316CC9188B0454711CDE6F9D311FD99F46E54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->___Handle_0;
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		Il2CppChar* L_1;
		L_1 = Platform_WindowsGetStringRawBuffer_m36E4B08F32D04DC954858428F34EB23B8C43C7DF(L_0, (uint32_t*)((uintptr_t)(&V_0)), NULL);
		uint32_t L_2 = V_0;
		String_t* L_3;
		L_3 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, L_1, 0, L_2, NULL);
		return L_3;
	}
}
// System.Void WinRT.HString::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HString_Dispose_m69477DB5FCBF31C9B42DE48FA416ACE5B9118356 (HString_t734316CC9188B0454711CDE6F9D311FD99F46E54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___Handle_0;
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		Platform_WindowsDeleteString_m90456B1875B21C6434DD454A4A32BF48CFAB7D33(L_0, NULL);
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
// Conversion methods for marshalling of: WinRT.ModuleReference
IL2CPP_EXTERN_C void ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8_marshal_pinvoke(const ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8& unmarshaled, ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.____module_0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____module_0))
		{
			marshaled.____module_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.____module_0));
			(marshaled.____module_0)->AddRef();
		}
		else
		{
			marshaled.____module_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.____module_0);
		}
	}
	else
	{
		marshaled.____module_0 = NULL;
	}
	marshaled.____refCountPtr_1 = unmarshaled.____refCountPtr_1;
	marshaled.____nativeHandle_2 = unmarshaled.____nativeHandle_2;
}
IL2CPP_EXTERN_C void ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8_marshal_pinvoke_back(const ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8_marshaled_pinvoke& marshaled, ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____module_0 != NULL)
	{
		unmarshaled.____module_0 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____module_0, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____module_0), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____module_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____module_0))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.____module_0), Il2CppIUnknown::IID, marshaled.____module_0);
		}
	}
	else
	{
		unmarshaled.____module_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____module_0), (void*)NULL);
	}
	unmarshaled.____refCountPtr_1 = marshaled.____refCountPtr_1;
	intptr_t unmarshaled_nativeHandle_temp_2;
	memset((&unmarshaled_nativeHandle_temp_2), 0, sizeof(unmarshaled_nativeHandle_temp_2));
	unmarshaled_nativeHandle_temp_2 = marshaled.____nativeHandle_2;
	unmarshaled.____nativeHandle_2 = unmarshaled_nativeHandle_temp_2;
}
// Conversion method for clean up from marshalling of: WinRT.ModuleReference
IL2CPP_EXTERN_C void ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8_marshal_pinvoke_cleanup(ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8_marshaled_pinvoke& marshaled)
{
	if (marshaled.____module_0 != NULL)
	{
		(marshaled.____module_0)->Release();
		marshaled.____module_0 = NULL;
	}
}
// Conversion methods for marshalling of: WinRT.ModuleReference
IL2CPP_EXTERN_C void ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8_marshal_com(const ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8& unmarshaled, ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8_marshaled_com& marshaled)
{
	if (unmarshaled.____module_0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____module_0))
		{
			marshaled.____module_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.____module_0));
			(marshaled.____module_0)->AddRef();
		}
		else
		{
			marshaled.____module_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.____module_0);
		}
	}
	else
	{
		marshaled.____module_0 = NULL;
	}
	marshaled.____refCountPtr_1 = unmarshaled.____refCountPtr_1;
	marshaled.____nativeHandle_2 = unmarshaled.____nativeHandle_2;
}
IL2CPP_EXTERN_C void ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8_marshal_com_back(const ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8_marshaled_com& marshaled, ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____module_0 != NULL)
	{
		unmarshaled.____module_0 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____module_0, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____module_0), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____module_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____module_0))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.____module_0), Il2CppIUnknown::IID, marshaled.____module_0);
		}
	}
	else
	{
		unmarshaled.____module_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____module_0), (void*)NULL);
	}
	unmarshaled.____refCountPtr_1 = marshaled.____refCountPtr_1;
	intptr_t unmarshaled_nativeHandle_temp_2;
	memset((&unmarshaled_nativeHandle_temp_2), 0, sizeof(unmarshaled_nativeHandle_temp_2));
	unmarshaled_nativeHandle_temp_2 = marshaled.____nativeHandle_2;
	unmarshaled.____nativeHandle_2 = unmarshaled_nativeHandle_temp_2;
}
// Conversion method for clean up from marshalling of: WinRT.ModuleReference
IL2CPP_EXTERN_C void ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8_marshal_com_cleanup(ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8_marshaled_com& marshaled)
{
	if (marshaled.____module_0 != NULL)
	{
		(marshaled.____module_0)->Release();
		marshaled.____module_0 = NULL;
	}
}
// System.Int32* WinRT.ModuleReference::AllocateRefCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* ModuleReference_AllocateRefCount_m8B71D434147CE177F6129328F38BD7A692130E9B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = Marshal_AllocCoTaskMem_m0D2FF69E8E0C6AE45A2BD94614973B42F9C9E814(4, NULL);
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (int32_t*)L_1;
		int32_t* L_2 = V_0;
		*((int32_t*)L_2) = (int32_t)0;
		int32_t* L_3 = V_0;
		return L_3;
	}
}
// WinRT.ModuleReference WinRT.ModuleReference::Allocate(System.Object,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 ModuleReference_Allocate_mAA86B6A796BEB88D7CF0BABD72D1F58DEFF2DB8A (RuntimeObject* ___0_module, intptr_t* ___1_nativeHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_module;
		int32_t* L_1;
		L_1 = ModuleReference_AllocateRefCount_m8B71D434147CE177F6129328F38BD7A692130E9B(NULL);
		intptr_t* L_2 = ___1_nativeHandle;
		ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ModuleReference__ctor_m9B203DCF86025B8E160A3A93020630A196A813DD((&L_3), L_0, L_1, ((*(L_2))), /*hidden argument*/NULL);
		intptr_t* L_4 = ___1_nativeHandle;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		*((intptr_t*)L_4) = (intptr_t)L_5;
		return L_3;
	}
}
// WinRT.ModuleReference WinRT.ModuleReference::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 ModuleReference_get_Null_m6D85341CA3638FC6C3EB63289A67C1A4CED96EE2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ModuleReference__ctor_m9B203DCF86025B8E160A3A93020630A196A813DD((&L_1), NULL, (int32_t*)((uintptr_t)0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void WinRT.ModuleReference::.ctor(System.Object,System.Int32*,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleReference__ctor_m9B203DCF86025B8E160A3A93020630A196A813DD (ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8* __this, RuntimeObject* ___0_module, int32_t* ___1_refCountPtr, intptr_t ___2_nativeHandle, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_module;
		__this->____module_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____module_0), (void*)L_0);
		int32_t* L_1 = ___1_refCountPtr;
		__this->____refCountPtr_1 = L_1;
		int32_t* L_2 = __this->____refCountPtr_1;
		if ((((intptr_t)L_2) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t* L_3 = __this->____refCountPtr_1;
		int32_t L_4;
		L_4 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((int32_t*)L_3, NULL);
	}

IL_0024:
	{
		intptr_t L_5 = ___2_nativeHandle;
		__this->____nativeHandle_2 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void ModuleReference__ctor_m9B203DCF86025B8E160A3A93020630A196A813DD_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_module, int32_t* ___1_refCountPtr, intptr_t ___2_nativeHandle, const RuntimeMethod* method)
{
	ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8*>(__this + _offset);
	ModuleReference__ctor_m9B203DCF86025B8E160A3A93020630A196A813DD(_thisAdjusted, ___0_module, ___1_refCountPtr, ___2_nativeHandle, method);
}
// WinRT.ModuleReference WinRT.ModuleReference::AddRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 ModuleReference_AddRef_m4EAFFB42E1F3ED058F9AA7852C69E1A2C656813D (ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____module_0;
		int32_t* L_1 = __this->____refCountPtr_1;
		intptr_t L_2 = __this->____nativeHandle_2;
		ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ModuleReference__ctor_m9B203DCF86025B8E160A3A93020630A196A813DD((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 ModuleReference_AddRef_m4EAFFB42E1F3ED058F9AA7852C69E1A2C656813D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8*>(__this + _offset);
	ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 _returnValue;
	_returnValue = ModuleReference_AddRef_m4EAFFB42E1F3ED058F9AA7852C69E1A2C656813D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void WinRT.ModuleReference::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleReference_Release_m6C96CC6FC8F67EC8365CEECC91BE1D110DD424D1 (ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = __this->____refCountPtr_1;
		if ((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t* L_1 = __this->____refCountPtr_1;
		int32_t L_2;
		L_2 = Interlocked_Decrement_m6AFAD2E874CBDA373B1EF7572F11D6E91813E75D((int32_t*)L_1, NULL);
		if (L_2)
		{
			goto IL_00d7;
		}
	}
	{
		RuntimeObject* L_3 = __this->____module_0;
		if (!L_3)
		{
			goto IL_00b4;
		}
	}
	{
		intptr_t L_4 = __this->____nativeHandle_2;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_00a0;
		}
	}
	{
		RuntimeObject* L_7 = __this->____module_0;
		if (!((DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63*)IsInstClass((RuntimeObject*)L_7, DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63_il2cpp_TypeInfo_var)))
		{
			goto IL_0054;
		}
	}
	{
		intptr_t L_8 = __this->____nativeHandle_2;
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		Platform_FreeLibrary_mCE7FC1B7DCA81180DFE7228D4E9FF37847D9B044(L_8, NULL);
		goto IL_0093;
	}

IL_0054:
	{
		RuntimeObject* L_9 = __this->____module_0;
		if (!((WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3*)IsInstClass((RuntimeObject*)L_9, WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3_il2cpp_TypeInfo_var)))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_10 = __this->____nativeHandle_2;
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		Platform_CoDecrementMTAUsage_m38F4B46C0851E6C4D215A65FCD4973EA44D0D499(L_10, NULL);
		goto IL_0093;
	}

IL_006e:
	{
		RuntimeObject* L_11 = __this->____module_0;
		NullCheck(L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_11, NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_12);
		String_t* L_14;
		L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral35588C4FF7022D2E8A6DFBE65CE509BB624FF21C)), L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C30C2A121B10CF66C074014633BC557626C1D72)), NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_15 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModuleReference_Release_m6C96CC6FC8F67EC8365CEECC91BE1D110DD424D1_RuntimeMethod_var)));
	}

IL_0093:
	{
		intptr_t L_16 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____nativeHandle_2 = L_16;
		goto IL_00ab;
	}

IL_00a0:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_17 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1DFB64A8BEB4B9535BAF32FC2D1D478C88752C96)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModuleReference_Release_m6C96CC6FC8F67EC8365CEECC91BE1D110DD424D1_RuntimeMethod_var)));
	}

IL_00ab:
	{
		__this->____module_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____module_0), (void*)NULL);
		goto IL_00bf;
	}

IL_00b4:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_18 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1DFB64A8BEB4B9535BAF32FC2D1D478C88752C96)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModuleReference_Release_m6C96CC6FC8F67EC8365CEECC91BE1D110DD424D1_RuntimeMethod_var)));
	}

IL_00bf:
	{
		int32_t* L_19 = __this->____refCountPtr_1;
		intptr_t L_20;
		L_20 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_FreeCoTaskMem_mBCD7084667AE44C50938947CF5C22345A118C944(L_20, NULL);
		__this->____refCountPtr_1 = (int32_t*)((uintptr_t)0);
	}

IL_00d7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ModuleReference_Release_m6C96CC6FC8F67EC8365CEECC91BE1D110DD424D1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8*>(__this + _offset);
	ModuleReference_Release_m6C96CC6FC8F67EC8365CEECC91BE1D110DD424D1(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// WinRT.Interop.IUnknownVftbl WinRT.IObjectReference::get_VftblIUnknown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860 IObjectReference_get_VftblIUnknown_m93387C6162EF60BCBDC3BC8375E787B4BC132E1F (IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* __this, const RuntimeMethod* method) 
{
	{
		IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860 L_0 = __this->___U3CVftblIUnknownU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void WinRT.IObjectReference::.ctor(WinRT.ModuleReference,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IObjectReference__ctor_m9F472A561010E36ED4701C3B5D2DABE3F5E2728E (IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* __this, ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 ___0_module, intptr_t ___1_thisPtr, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 L_0;
		L_0 = ModuleReference_AddRef_m4EAFFB42E1F3ED058F9AA7852C69E1A2C656813D((&___0_module), NULL);
		__this->___Module_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___Module_1))->____module_0), (void*)NULL);
		intptr_t L_1 = ___1_thisPtr;
		__this->___ThisPtr_0 = L_1;
		return;
	}
}
// System.Void WinRT.IObjectReference::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IObjectReference_Finalize_mE1835906CB43EAC1ED9261C5F13FC2D3E4853F9D (IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* __this, const RuntimeMethod* method) 
{
	ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 L_0 = __this->___Module_1;
			V_0 = L_0;
			ModuleReference_Release_m6C96CC6FC8F67EC8365CEECC91BE1D110DD424D1((&V_0), NULL);
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
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
// System.Void WinRT.DllModule::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllModule__cctor_mAC756B0CC0A4C5C3C0675328FDD42D64985DAE89 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB9794AEF42AE0E6B1CD21D9F7B8493A48D70C658_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3795BDA214C147B8B018698C2A6E69460C12086C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3795BDA214C147B8B018698C2A6E69460C12086C* L_0 = (Dictionary_2_t3795BDA214C147B8B018698C2A6E69460C12086C*)il2cpp_codegen_object_new(Dictionary_2_t3795BDA214C147B8B018698C2A6E69460C12086C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mB9794AEF42AE0E6B1CD21D9F7B8493A48D70C658(L_0, Dictionary_2__ctor_mB9794AEF42AE0E6B1CD21D9F7B8493A48D70C658_RuntimeMethod_var);
		((DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63_StaticFields*)il2cpp_codegen_static_fields_for(DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63_il2cpp_TypeInfo_var))->____cache_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63_StaticFields*)il2cpp_codegen_static_fields_for(DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63_il2cpp_TypeInfo_var))->____cache_3), (void*)L_0);
		return;
	}
}
// WinRT.DllModule WinRT.DllModule::TryLoad(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63* DllModule_TryLoad_mB20D50B4F1E9B93040C5B6F363BAEAFABA6210E4 (String_t* ___0_fileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mF02147E5DC050F20B8FF94EB37F5F3B513145D73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BC59C330688857D597990E8C9DAE2E22663E35D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_TryGetProcAddress_TisDllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB_m5E1173FA34F1261EF030548060E71EBDAD1512A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_TryGetTarget_mE44534789AB9D63110C51A95EECEC3D26F7E048C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1__ctor_mA0AFC3035B461906D586803F0062B4DD30521CF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_tF0FE779FF19F60CD0EDCF701B7267706C91AB14F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t3795BDA214C147B8B018698C2A6E69460C12086C* V_0 = NULL;
	bool V_1 = false;
	WeakReference_1_tF0FE779FF19F60CD0EDCF701B7267706C91AB14F* V_2 = NULL;
	DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63* V_3 = NULL;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* V_5 = NULL;
	DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63* V_6 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63_il2cpp_TypeInfo_var);
		Dictionary_2_t3795BDA214C147B8B018698C2A6E69460C12086C* L_0 = ((DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63_StaticFields*)il2cpp_codegen_static_fields_for(DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63_il2cpp_TypeInfo_var))->____cache_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b9:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00c2;
					}
				}
				{
					Dictionary_2_t3795BDA214C147B8B018698C2A6E69460C12086C* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_00c2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_t3795BDA214C147B8B018698C2A6E69460C12086C* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63_il2cpp_TypeInfo_var);
				Dictionary_2_t3795BDA214C147B8B018698C2A6E69460C12086C* L_4 = ((DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63_StaticFields*)il2cpp_codegen_static_fields_for(DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63_il2cpp_TypeInfo_var))->____cache_3;
				String_t* L_5 = ___0_fileName;
				NullCheck(L_4);
				bool L_6;
				L_6 = Dictionary_2_TryGetValue_mF02147E5DC050F20B8FF94EB37F5F3B513145D73(L_4, L_5, (&V_2), Dictionary_2_TryGetValue_mF02147E5DC050F20B8FF94EB37F5F3B513145D73_RuntimeMethod_var);
				if (!L_6)
				{
					goto IL_002c_1;
				}
			}
			{
				WeakReference_1_tF0FE779FF19F60CD0EDCF701B7267706C91AB14F* L_7 = V_2;
				NullCheck(L_7);
				bool L_8;
				L_8 = WeakReference_1_TryGetTarget_mE44534789AB9D63110C51A95EECEC3D26F7E048C(L_7, (&V_3), WeakReference_1_TryGetTarget_mE44534789AB9D63110C51A95EECEC3D26F7E048C_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_00b4_1;
				}
			}

IL_002c_1:
			{
				String_t* L_9 = ___0_fileName;
				intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
				intptr_t L_11;
				L_11 = Platform_TryLoadLibraryExW_m484FADA5A09AD780337627B9C9303F6BE84A5663(L_9, L_10, 0, NULL);
				V_4 = L_11;
				intptr_t L_12 = V_4;
				intptr_t L_13 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_14;
				L_14 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_12, L_13, NULL);
				if (!L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				String_t* L_15 = ___0_fileName;
				intptr_t L_16 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
				intptr_t L_17;
				L_17 = Platform_TryLoadLibraryExW_m484FADA5A09AD780337627B9C9303F6BE84A5663(L_15, L_16, ((int32_t)4096), NULL);
				V_4 = L_17;
			}

IL_005a_1:
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009e_1:
					{// begin finally (depth: 2)
						{
							intptr_t L_18 = V_4;
							intptr_t L_19 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
							bool L_20;
							L_20 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_18, L_19, NULL);
							if (!L_20)
							{
								goto IL_00b3_1;
							}
						}
						{
							intptr_t L_21 = V_4;
							il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
							Platform_FreeLibrary_mCE7FC1B7DCA81180DFE7228D4E9FF37847D9B044(L_21, NULL);
						}

IL_00b3_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						intptr_t L_22 = V_4;
						intptr_t L_23 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
						bool L_24;
						L_24 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_22, L_23, NULL);
						if (!L_24)
						{
							goto IL_006e_2;
						}
					}
					{
						V_6 = (DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63*)NULL;
						goto IL_00c3;
					}

IL_006e_2:
					{
						intptr_t L_25 = V_4;
						il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
						DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* L_26;
						L_26 = Platform_TryGetProcAddress_TisDllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB_m5E1173FA34F1261EF030548060E71EBDAD1512A4(L_25, Platform_TryGetProcAddress_TisDllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB_m5E1173FA34F1261EF030548060E71EBDAD1512A4_RuntimeMethod_var);
						V_5 = L_26;
						DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* L_27 = V_5;
						if (L_27)
						{
							goto IL_0080_2;
						}
					}
					{
						V_6 = (DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63*)NULL;
						goto IL_00c3;
					}

IL_0080_2:
					{
						String_t* L_28 = ___0_fileName;
						DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* L_29 = V_5;
						DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63* L_30 = (DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63*)il2cpp_codegen_object_new(DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63_il2cpp_TypeInfo_var);
						NullCheck(L_30);
						DllModule__ctor_m98FBEB5A8041A4104700FF6A7084E500D28E4C31(L_30, L_28, (&V_4), L_29, NULL);
						V_3 = L_30;
						il2cpp_codegen_runtime_class_init_inline(DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63_il2cpp_TypeInfo_var);
						Dictionary_2_t3795BDA214C147B8B018698C2A6E69460C12086C* L_31 = ((DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63_StaticFields*)il2cpp_codegen_static_fields_for(DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63_il2cpp_TypeInfo_var))->____cache_3;
						String_t* L_32 = ___0_fileName;
						DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63* L_33 = V_3;
						WeakReference_1_tF0FE779FF19F60CD0EDCF701B7267706C91AB14F* L_34 = (WeakReference_1_tF0FE779FF19F60CD0EDCF701B7267706C91AB14F*)il2cpp_codegen_object_new(WeakReference_1_tF0FE779FF19F60CD0EDCF701B7267706C91AB14F_il2cpp_TypeInfo_var);
						NullCheck(L_34);
						WeakReference_1__ctor_mA0AFC3035B461906D586803F0062B4DD30521CF4(L_34, L_33, WeakReference_1__ctor_mA0AFC3035B461906D586803F0062B4DD30521CF4_RuntimeMethod_var);
						NullCheck(L_31);
						Dictionary_2_set_Item_m9BC59C330688857D597990E8C9DAE2E22663E35D(L_31, L_32, L_34, Dictionary_2_set_Item_m9BC59C330688857D597990E8C9DAE2E22663E35D_RuntimeMethod_var);
						goto IL_00b4_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00b4_1:
			{
				DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63* L_35 = V_3;
				V_6 = L_35;
				goto IL_00c3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c3:
	{
		DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63* L_36 = V_6;
		return L_36;
	}
}
// System.Void WinRT.DllModule::.ctor(System.String,System.IntPtr&,WinRT.DllModule/DllGetActivationFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllModule__ctor_m98FBEB5A8041A4104700FF6A7084E500D28E4C31 (DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63* __this, String_t* ___0_fileName, intptr_t* ___1_moduleHandle, DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* ___2_getActivationFactory, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_fileName;
		__this->____fileName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fileName_0), (void*)L_0);
		intptr_t* L_1 = ___1_moduleHandle;
		ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 L_2;
		L_2 = ModuleReference_Allocate_mAA86B6A796BEB88D7CF0BABD72D1F58DEFF2DB8A(__this, L_1, NULL);
		__this->____moduleHandle_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____moduleHandle_1))->____module_0), (void*)NULL);
		DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* L_3 = ___2_getActivationFactory;
		__this->____GetActivationFactory_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____GetActivationFactory_2), (void*)L_3);
		return;
	}
}
// WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl> WinRT.DllModule::GetActivationFactory(WinRT.HString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t2BE9E2A525679BDB04174543B74311303327E8DD* DllModule_GetActivationFactory_m38F32E8FBEEA2E45B0517BC588B78AF17CC9526D (DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63* __this, HString_t734316CC9188B0454711CDE6F9D311FD99F46E54* ___0_runtimeClassId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_m943A0FB7F01D3EEA8427204198F7F7D422F06ADF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* L_0 = __this->____GetActivationFactory_2;
		HString_t734316CC9188B0454711CDE6F9D311FD99F46E54* L_1 = ___0_runtimeClassId;
		NullCheck(L_1);
		intptr_t L_2 = L_1->___Handle_0;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = DllGetActivationFactory_Invoke_m12CE80A39C1A4D446633B4E17BE690ABA0435002_inline(L_0, L_2, (intptr_t*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_3, NULL);
		ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 L_4 = __this->____moduleHandle_1;
		ObjectReference_1_t2BE9E2A525679BDB04174543B74311303327E8DD* L_5;
		L_5 = ObjectReference_1_Attach_m943A0FB7F01D3EEA8427204198F7F7D422F06ADF(L_4, (&V_0), ObjectReference_1_Attach_m943A0FB7F01D3EEA8427204198F7F7D422F06ADF_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void WinRT.DllModule::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllModule_Finalize_m0EA51238D2D3B54AC1480A65AFB554763FB16947 (DllModule_t31E7D34065E250CD15AA5448FE1122271A2F6A63* __this, const RuntimeMethod* method) 
{
	ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 L_0 = __this->____moduleHandle_1;
			V_0 = L_0;
			ModuleReference_Release_m6C96CC6FC8F67EC8365CEECC91BE1D110DD424D1((&V_0), NULL);
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
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
int32_t DllGetActivationFactory_Invoke_m12CE80A39C1A4D446633B4E17BE690ABA0435002_Multicast(DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* __this, intptr_t ___0_activatableClassId, intptr_t* ___1_activationFactory, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* currentDelegate = reinterpret_cast<DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_activatableClassId, ___1_activationFactory, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t DllGetActivationFactory_Invoke_m12CE80A39C1A4D446633B4E17BE690ABA0435002_OpenInst(DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* __this, intptr_t ___0_activatableClassId, intptr_t* ___1_activationFactory, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_activatableClassId, ___1_activationFactory, method);
}
int32_t DllGetActivationFactory_Invoke_m12CE80A39C1A4D446633B4E17BE690ABA0435002_OpenStatic(DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* __this, intptr_t ___0_activatableClassId, intptr_t* ___1_activationFactory, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_activatableClassId, ___1_activationFactory, method);
}
int32_t DllGetActivationFactory_Invoke_m12CE80A39C1A4D446633B4E17BE690ABA0435002_OpenStaticInvoker(DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* __this, intptr_t ___0_activatableClassId, intptr_t* ___1_activationFactory, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_activatableClassId, ___1_activationFactory);
}
int32_t DllGetActivationFactory_Invoke_m12CE80A39C1A4D446633B4E17BE690ABA0435002_ClosedStaticInvoker(DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* __this, intptr_t ___0_activatableClassId, intptr_t* ___1_activationFactory, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, intptr_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_activatableClassId, ___1_activationFactory);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB (DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* __this, intptr_t ___0_activatableClassId, intptr_t* ___1_activationFactory, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_activatableClassId, ___1_activationFactory);

	return returnValue;
}
// System.Void WinRT.DllModule/DllGetActivationFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllGetActivationFactory__ctor_mA689A9D589E2084556DE7280747330C31A531194 (DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DllGetActivationFactory_Invoke_m12CE80A39C1A4D446633B4E17BE690ABA0435002_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DllGetActivationFactory_Invoke_m12CE80A39C1A4D446633B4E17BE690ABA0435002_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DllGetActivationFactory_Invoke_m12CE80A39C1A4D446633B4E17BE690ABA0435002_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DllGetActivationFactory_Invoke_m12CE80A39C1A4D446633B4E17BE690ABA0435002_Multicast;
}
// System.Int32 WinRT.DllModule/DllGetActivationFactory::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllGetActivationFactory_Invoke_m12CE80A39C1A4D446633B4E17BE690ABA0435002 (DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* __this, intptr_t ___0_activatableClassId, intptr_t* ___1_activationFactory, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_activatableClassId, ___1_activationFactory, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// WinRT.ModuleReference WinRT.WinrtModule::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 WinrtModule_get_Instance_m0194FBF53D909205F558F1C4BE4991D31E97BD1C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakLazy_1_get_Value_mC89189DBE8E83BA11AF890A78CB40807751329C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3_il2cpp_TypeInfo_var);
		WeakLazy_1_t6DB148C2C80364F816855A8A29911932E7C81356* L_0 = ((WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3_StaticFields*)il2cpp_codegen_static_fields_for(WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3_il2cpp_TypeInfo_var))->____instance_1;
		NullCheck(L_0);
		WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3* L_1;
		L_1 = WeakLazy_1_get_Value_mC89189DBE8E83BA11AF890A78CB40807751329C5(L_0, WeakLazy_1_get_Value_mC89189DBE8E83BA11AF890A78CB40807751329C5_RuntimeMethod_var);
		NullCheck(L_1);
		ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 L_2 = L_1->____module_0;
		return L_2;
	}
}
// System.Void WinRT.WinrtModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinrtModule__ctor_mFB1C6EF7888DD9BE9A9381DD210116E830CC6176 (WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = Platform_CoIncrementMTAUsage_m743A1D998C68B307847D5B28005AAC7ACB9A19A7(NULL);
		V_0 = L_0;
		ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 L_1;
		L_1 = ModuleReference_Allocate_mAA86B6A796BEB88D7CF0BABD72D1F58DEFF2DB8A(__this, (&V_0), NULL);
		__this->____module_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____module_0))->____module_0), (void*)NULL);
		return;
	}
}
// WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl> WinRT.WinrtModule::GetActivationFactory(WinRT.HString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t2BE9E2A525679BDB04174543B74311303327E8DD* WinrtModule_GetActivationFactory_m936DFE6E26B8DC2E3C6A18886ABDA1F90FACACA2 (HString_t734316CC9188B0454711CDE6F9D311FD99F46E54* ___0_runtimeClassId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_m943A0FB7F01D3EEA8427204198F7F7D422F06ADF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_2;
		L_2 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_1, NULL);
		NullCheck(L_2);
		Guid_t L_3;
		L_3 = VirtualFuncInvoker0< Guid_t >::Invoke(125 /* System.Guid System.Type::get_GUID() */, L_2);
		V_0 = L_3;
		HString_t734316CC9188B0454711CDE6F9D311FD99F46E54* L_4 = ___0_runtimeClassId;
		NullCheck(L_4);
		intptr_t L_5 = L_4->___Handle_0;
		il2cpp_codegen_runtime_class_init_inline(Platform_tB5579D7C7140408EAE19E46AC089936B8B9C9E06_il2cpp_TypeInfo_var);
		intptr_t L_6;
		L_6 = Platform_RoGetActivationFactory_m60EECE34F5859220B90E183590F24B99272A86CA(L_5, (&V_0), NULL);
		V_1 = L_6;
		il2cpp_codegen_runtime_class_init_inline(WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3_il2cpp_TypeInfo_var);
		ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 L_7;
		L_7 = WinrtModule_get_Instance_m0194FBF53D909205F558F1C4BE4991D31E97BD1C(NULL);
		ObjectReference_1_t2BE9E2A525679BDB04174543B74311303327E8DD* L_8;
		L_8 = ObjectReference_1_Attach_m943A0FB7F01D3EEA8427204198F7F7D422F06ADF(L_7, (&V_1), ObjectReference_1_Attach_m943A0FB7F01D3EEA8427204198F7F7D422F06ADF_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void WinRT.WinrtModule::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinrtModule_Finalize_m4BE9A05932007CBF48C2BF5093833C36443A0F72 (WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3* __this, const RuntimeMethod* method) 
{
	ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 L_0 = __this->____module_0;
			V_0 = L_0;
			ModuleReference_Release_m6C96CC6FC8F67EC8365CEECC91BE1D110DD424D1((&V_0), NULL);
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
// System.Void WinRT.WinrtModule::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinrtModule__cctor_m47B5B1B6D6192A529BE1BBA09801292C94536B43 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakLazy_1__ctor_m9E935751234933DCEAD6DB0DE51380D85E48A129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakLazy_1_t6DB148C2C80364F816855A8A29911932E7C81356_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WeakLazy_1_t6DB148C2C80364F816855A8A29911932E7C81356* L_0 = (WeakLazy_1_t6DB148C2C80364F816855A8A29911932E7C81356*)il2cpp_codegen_object_new(WeakLazy_1_t6DB148C2C80364F816855A8A29911932E7C81356_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WeakLazy_1__ctor_m9E935751234933DCEAD6DB0DE51380D85E48A129(L_0, WeakLazy_1__ctor_m9E935751234933DCEAD6DB0DE51380D85E48A129_RuntimeMethod_var);
		((WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3_StaticFields*)il2cpp_codegen_static_fields_for(WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3_il2cpp_TypeInfo_var))->____instance_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3_StaticFields*)il2cpp_codegen_static_fields_for(WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3_il2cpp_TypeInfo_var))->____instance_1), (void*)L_0);
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
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_Delegate_QueryInterface_mD5AB1EB8A8A38FCE479AFE27A77B443DF4415CF6(intptr_t ___0_thisPtr, Guid_t* ___1_iid, intptr_t* ___2_obj)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = Delegate_QueryInterface_mD5AB1EB8A8A38FCE479AFE27A77B443DF4415CF6(___0_thisPtr, ___1_iid, ___2_obj, NULL);

	return returnValue;
}
extern "C" uint32_t DEFAULT_CALL ReversePInvokeWrapper_Delegate_AddRef_mD98DF69C12609B6E08C419D0F8FC59EEFA5506E3(intptr_t ___0_thisPtr)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	returnValue = Delegate_AddRef_mD98DF69C12609B6E08C419D0F8FC59EEFA5506E3(___0_thisPtr, NULL);

	return returnValue;
}
extern "C" uint32_t DEFAULT_CALL ReversePInvokeWrapper_Delegate_Release_m220300670F20C22F3666B121E61E46B48567761C(intptr_t ___0_thisPtr)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	returnValue = Delegate_Release_m220300670F20C22F3666B121E61E46B48567761C(___0_thisPtr, NULL);

	return returnValue;
}
// WinRT.Delegate WinRT.Delegate::FindObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* Delegate_FindObject_m2D9C5BAD38A604088E95CC4AB4018324A6B9BB11 (intptr_t ___0_thisPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_PtrToStructure_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_m5C09A9E750405E5894ABC90041204F2107CA270F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_thisPtr;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		UnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290 L_1;
		L_1 = Marshal_PtrToStructure_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_m5C09A9E750405E5894ABC90041204F2107CA270F(L_0, Marshal_PtrToStructure_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_m5C09A9E750405E5894ABC90041204F2107CA270F_RuntimeMethod_var);
		intptr_t L_2 = L_1.____gchandlePtr_1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3;
		L_3 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_2, NULL);
		V_0 = L_3;
		RuntimeObject* L_4;
		L_4 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		return ((Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13*)CastclassClass((RuntimeObject*)L_4, Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var));
	}
}
// System.Int32 WinRT.Delegate::QueryInterface(System.IntPtr,System.Guid*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Delegate_QueryInterface_mD5AB1EB8A8A38FCE479AFE27A77B443DF4415CF6 (intptr_t ___0_thisPtr, Guid_t* ___1_iid, intptr_t* ___2_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_thisPtr;
		il2cpp_codegen_runtime_class_init_inline(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var);
		Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* L_1;
		L_1 = Delegate_FindObject_m2D9C5BAD38A604088E95CC4AB4018324A6B9BB11(L_0, NULL);
		Guid_t* L_2 = ___1_iid;
		intptr_t* L_3 = ___2_obj;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = Delegate_QueryInterface_mEE3CF6F4FECE951B83CA4FC16F12EA32AB08F67F(L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.UInt32 WinRT.Delegate::AddRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_AddRef_mD98DF69C12609B6E08C419D0F8FC59EEFA5506E3 (intptr_t ___0_thisPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_thisPtr;
		il2cpp_codegen_runtime_class_init_inline(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var);
		Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* L_1;
		L_1 = Delegate_FindObject_m2D9C5BAD38A604088E95CC4AB4018324A6B9BB11(L_0, NULL);
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = Delegate_AddRef_m0778BA1F151A25031BFB1F3A303811FD066CBC80(L_1, NULL);
		return L_2;
	}
}
// System.UInt32 WinRT.Delegate::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_Release_m220300670F20C22F3666B121E61E46B48567761C (intptr_t ___0_thisPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_thisPtr;
		il2cpp_codegen_runtime_class_init_inline(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var);
		Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* L_1;
		L_1 = Delegate_FindObject_m2D9C5BAD38A604088E95CC4AB4018324A6B9BB11(L_0, NULL);
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = Delegate_Release_mD1AA995D7731AE8F4716A13CF8BC22ADFADE1C01(L_1, NULL);
		return L_2;
	}
}
// System.Int32 WinRT.Delegate::QueryInterface(System.Guid*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Delegate_QueryInterface_mEE3CF6F4FECE951B83CA4FC16F12EA32AB08F67F (Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* __this, Guid_t* ___0_iid, intptr_t* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Guid_t* L_0 = ___0_iid;
		Guid_t L_1 = (*(Guid_t*)L_0);
		Guid_t L_2 = __this->____iid_2;
		bool L_3;
		L_3 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		Guid_t* L_4 = ___0_iid;
		Guid_t L_5 = (*(Guid_t*)L_4);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_8;
		L_8 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_7, NULL);
		NullCheck(L_8);
		Guid_t L_9;
		L_9 = VirtualFuncInvoker0< Guid_t >::Invoke(125 /* System.Guid System.Type::get_GUID() */, L_8);
		bool L_10;
		L_10 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_5, L_9, NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}

IL_0034:
	{
		uint32_t L_11;
		L_11 = Delegate_AddRef_m0778BA1F151A25031BFB1F3A303811FD066CBC80(__this, NULL);
		intptr_t* L_12 = ___1_obj;
		intptr_t L_13 = __this->___ThisPtr_1;
		*((intptr_t*)L_12) = (intptr_t)L_13;
		return 0;
	}

IL_0045:
	{
		return ((int32_t)-2147467262);
	}
}
// System.UInt32 WinRT.Delegate::AddRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_AddRef_m0778BA1F151A25031BFB1F3A303811FD066CBC80 (Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* __this, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = (int32_t*)(&__this->____refs_0);
		int32_t L_1;
		L_1 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_0, NULL);
		int32_t L_2 = __this->____refs_0;
		return L_2;
	}
}
// System.UInt32 WinRT.Delegate::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_Release_mD1AA995D7731AE8F4716A13CF8BC22ADFADE1C01 (Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____refs_0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA32285E57C5E37519691CDF44133FC9D59D7069B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Delegate_Release_mD1AA995D7731AE8F4716A13CF8BC22ADFADE1C01_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t* L_2 = (int32_t*)(&__this->____refs_0);
		int32_t L_3;
		L_3 = Interlocked_Decrement_m6AFAD2E874CBDA373B1EF7572F11D6E91813E75D(L_2, NULL);
		int32_t L_4 = __this->____refs_0;
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		Delegate__Dispose_m7F7633C80FF3EEEF2A62CB2F88308537966AA4D8(__this, NULL);
	}

IL_002d:
	{
		int32_t L_5 = __this->____refs_0;
		return L_5;
	}
}
// System.Void WinRT.Delegate::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__cctor_m6580766ED39885480A96AB556358BD913E021A56 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_AddRef_mD98DF69C12609B6E08C419D0F8FC59EEFA5506E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_QueryInterface_mD5AB1EB8A8A38FCE479AFE27A77B443DF4415CF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_Release_m220300670F20C22F3666B121E61E46B48567761C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_Tis_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A_mA939725AC522AD4D78E67DA10C488A64EBF0912F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_Tis_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543_m641E6F1035B24B3861E17E12C67483DF9C28BF2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_Tis_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE_m189D710BC9784B465C2440E0471FE8E4FDA3AA89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543* L_0 = (_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543*)il2cpp_codegen_object_new(_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		_QueryInterface__ctor_m1AF8BBD185DCCDAD5EF42E957FB12193886C8040(L_0, NULL, (intptr_t)((void*)Delegate_QueryInterface_mD5AB1EB8A8A38FCE479AFE27A77B443DF4415CF6_RuntimeMethod_var), NULL);
		((Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var))->____QueryInterface_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var))->____QueryInterface_3), (void*)L_0);
		_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A* L_1 = (_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A*)il2cpp_codegen_object_new(_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		_AddRef__ctor_m8BF7AEF65C6F080897EA4AC1BE5018FC6EF481DA(L_1, NULL, (intptr_t)((void*)Delegate_AddRef_mD98DF69C12609B6E08C419D0F8FC59EEFA5506E3_RuntimeMethod_var), NULL);
		((Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var))->____AddRef_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var))->____AddRef_4), (void*)L_1);
		_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE* L_2 = (_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE*)il2cpp_codegen_object_new(_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		_Release__ctor_m5B3E6442FF25C2D6AEC4988CF3C3C55BAD6B56CC(L_2, NULL, (intptr_t)((void*)Delegate_Release_m220300670F20C22F3666B121E61E46B48567761C_RuntimeMethod_var), NULL);
		((Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var))->____Release_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var))->____Release_5), (void*)L_2);
		_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543* L_3 = ((Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var))->____QueryInterface_3;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = Marshal_GetFunctionPointerForDelegate_Tis_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543_m641E6F1035B24B3861E17E12C67483DF9C28BF2A(L_3, Marshal_GetFunctionPointerForDelegate_Tis_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543_m641E6F1035B24B3861E17E12C67483DF9C28BF2A_RuntimeMethod_var);
		(&((Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var))->____vftblTemplate_6)->___QueryInterface_0 = L_4;
		_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A* L_5 = ((Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var))->____AddRef_4;
		intptr_t L_6;
		L_6 = Marshal_GetFunctionPointerForDelegate_Tis_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A_mA939725AC522AD4D78E67DA10C488A64EBF0912F(L_5, Marshal_GetFunctionPointerForDelegate_Tis_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A_mA939725AC522AD4D78E67DA10C488A64EBF0912F_RuntimeMethod_var);
		(&((Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var))->____vftblTemplate_6)->___AddRef_1 = L_6;
		_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE* L_7 = ((Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var))->____Release_5;
		intptr_t L_8;
		L_8 = Marshal_GetFunctionPointerForDelegate_Tis_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE_m189D710BC9784B465C2440E0471FE8E4FDA3AA89(L_7, Marshal_GetFunctionPointerForDelegate_Tis_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE_m189D710BC9784B465C2440E0471FE8E4FDA3AA89_RuntimeMethod_var);
		(&((Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var))->____vftblTemplate_6)->___Release_2 = L_8;
		intptr_t L_9 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		(&((Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var))->____vftblTemplate_6)->___Invoke_3 = L_9;
		return;
	}
}
// System.Void WinRT.Delegate::.ctor(System.Guid,System.IntPtr,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_mCFE8AEA6A267AB91165FB95C2123917C7EE41D67 (Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* __this, Guid_t ___0_iid, intptr_t ___1_invokePtr, RuntimeObject* ___2_invoker, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_SizeOf_TisIDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0_mA5A70DE2935DE6D4A20B1377B1E09D82C707F3DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_SizeOf_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_mA268FF722247201B76B5143AD28FC7E0594C821C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_StructureToPtr_TisIDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0_m5C946AC3EC0DF53C6DBB4F412642404137DA513D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_StructureToPtr_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_m333CC2C23D557EDF665616B9E02A71276C949439_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	IDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_runtime_class_init_inline(WinrtModule_t61572BD265F33FDB80DB881A83031A62D45CF1B3_il2cpp_TypeInfo_var);
		ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 L_0;
		L_0 = WinrtModule_get_Instance_m0194FBF53D909205F558F1C4BE4991D31E97BD1C(NULL);
		V_0 = L_0;
		ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 L_1;
		L_1 = ModuleReference_AddRef_m4EAFFB42E1F3ED058F9AA7852C69E1A2C656813D((&V_0), NULL);
		__this->____module_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____module_7))->____module_0), (void*)NULL);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_2 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241(L_2, NULL, NULL);
		__this->____weakInvoker_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____weakInvoker_9), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Guid_t L_3 = ___0_iid;
		__this->____iid_2 = L_3;
		il2cpp_codegen_runtime_class_init_inline(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var);
		IDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0 L_4 = ((Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var))->____vftblTemplate_6;
		V_1 = L_4;
		intptr_t L_5 = ___1_invokePtr;
		(&V_1)->___Invoke_3 = L_5;
		UnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290* L_6 = (UnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290*)(&__this->____unmanagedObj_10);
		IDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0 L_7 = ((Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var))->____vftblTemplate_6;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Marshal_SizeOf_TisIDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0_mA5A70DE2935DE6D4A20B1377B1E09D82C707F3DB(L_7, Marshal_SizeOf_TisIDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0_mA5A70DE2935DE6D4A20B1377B1E09D82C707F3DB_RuntimeMethod_var);
		intptr_t L_9;
		L_9 = Marshal_AllocCoTaskMem_m0D2FF69E8E0C6AE45A2BD94614973B42F9C9E814(L_8, NULL);
		L_6->____vftblPtr_0 = L_9;
		IDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0 L_10 = V_1;
		UnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290* L_11 = (UnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290*)(&__this->____unmanagedObj_10);
		intptr_t L_12 = L_11->____vftblPtr_0;
		Marshal_StructureToPtr_TisIDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0_m5C946AC3EC0DF53C6DBB4F412642404137DA513D(L_10, L_12, (bool)0, Marshal_StructureToPtr_TisIDelegateVftbl_t8B095CAE847DBF31CF2563738E87F709C69C5DB0_m5C946AC3EC0DF53C6DBB4F412642404137DA513D_RuntimeMethod_var);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = __this->____weakInvoker_9;
		RuntimeObject* L_14 = ___2_invoker;
		NullCheck(L_13);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_13, L_14);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_15;
		L_15 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(__this, NULL);
		__this->____thisHandle_8 = L_15;
		UnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290* L_16 = (UnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290*)(&__this->____unmanagedObj_10);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_17 = __this->____thisHandle_8;
		intptr_t L_18;
		L_18 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_17, NULL);
		L_16->____gchandlePtr_1 = L_18;
		UnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290 L_19 = __this->____unmanagedObj_10;
		int32_t L_20;
		L_20 = Marshal_SizeOf_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_mA268FF722247201B76B5143AD28FC7E0594C821C(L_19, Marshal_SizeOf_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_mA268FF722247201B76B5143AD28FC7E0594C821C_RuntimeMethod_var);
		intptr_t L_21;
		L_21 = Marshal_AllocCoTaskMem_m0D2FF69E8E0C6AE45A2BD94614973B42F9C9E814(L_20, NULL);
		__this->___ThisPtr_1 = L_21;
		UnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290 L_22 = __this->____unmanagedObj_10;
		intptr_t L_23 = __this->___ThisPtr_1;
		Marshal_StructureToPtr_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_m333CC2C23D557EDF665616B9E02A71276C949439(L_22, L_23, (bool)0, Marshal_StructureToPtr_TisUnmanagedObject_t026F7F3ADDC45128119098031335F9799A142290_m333CC2C23D557EDF665616B9E02A71276C949439_RuntimeMethod_var);
		return;
	}
}
// System.Void WinRT.Delegate::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate_Finalize_m65AEBC8E788EB4BD38F7AC2FABFFE2CFEE6687FB (Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Delegate__Dispose_m7F7633C80FF3EEEF2A62CB2F88308537966AA4D8(__this, NULL);
			goto IL_000f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		return;
	}
}
// System.Void WinRT.Delegate::_Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__Dispose_m7F7633C80FF3EEEF2A62CB2F88308537966AA4D8 (Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->____refs_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4535E88AFD16EB73A1C33E88E92D77F5476E9CAA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Delegate__Dispose_m7F7633C80FF3EEEF2A62CB2F88308537966AA4D8_RuntimeMethod_var)));
	}

IL_0013:
	{
		intptr_t L_2 = __this->___ThisPtr_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_FreeCoTaskMem_mBCD7084667AE44C50938947CF5C22345A118C944(L_2, NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3 = __this->____thisHandle_8;
		V_0 = L_3;
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 L_4 = __this->____module_7;
		V_1 = L_4;
		ModuleReference_Release_m6C96CC6FC8F67EC8365CEECC91BE1D110DD424D1((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
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
// System.IntPtr WinRT.Delegate/InitialReference::get_DelegatePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InitialReference_get_DelegatePtr_m9042ECCC84631DF473D6D565EB3FB727947F9567 (InitialReference_t299B9416400FAAD6E7D4078310CB3509EDCBBE3B* __this, const RuntimeMethod* method) 
{
	{
		Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* L_0 = __this->____delegate_0;
		NullCheck(L_0);
		intptr_t L_1 = L_0->___ThisPtr_1;
		return L_1;
	}
}
// System.Void WinRT.Delegate/InitialReference::.ctor(System.Guid,System.IntPtr,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitialReference__ctor_m79754E5EB5FB9653C0D8935EAB47FAF8E6926CA6 (InitialReference_t299B9416400FAAD6E7D4078310CB3509EDCBBE3B* __this, Guid_t ___0_iid, intptr_t ___1_invoke, RuntimeObject* ___2_invoker, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ThreadContext_tA5ABC48BFC2E3D91F3B08933D2AFC548723ED5B8_il2cpp_TypeInfo_var);
		ThreadContext_RegisterPossiblyNonForeignThread_m88CE97ED901E94E3F71E943E1E62875A5419CE35(NULL);
		Guid_t L_0 = ___0_iid;
		intptr_t L_1 = ___1_invoke;
		RuntimeObject* L_2 = ___2_invoker;
		Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* L_3 = (Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13*)il2cpp_codegen_object_new(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Delegate__ctor_mCFE8AEA6A267AB91165FB95C2123917C7EE41D67(L_3, L_0, L_1, L_2, NULL);
		__this->____delegate_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____delegate_0), (void*)L_3);
		Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* L_4 = __this->____delegate_0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = Delegate_AddRef_m0778BA1F151A25031BFB1F3A303811FD066CBC80(L_4, NULL);
		return;
	}
}
// System.Void WinRT.Delegate/InitialReference::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitialReference_Finalize_mF5AA62DD3A299E5438D43884BD7A8FD3A39DF072 (InitialReference_t299B9416400FAAD6E7D4078310CB3509EDCBBE3B* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			InitialReference_Dispose_m441E946D78C38A6266663505B2008AABB54D105B(__this, NULL);
			goto IL_000f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		return;
	}
}
// System.Void WinRT.Delegate/InitialReference::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitialReference_Dispose_m441E946D78C38A6266663505B2008AABB54D105B (InitialReference_t299B9416400FAAD6E7D4078310CB3509EDCBBE3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* L_0 = __this->____delegate_0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13* L_1 = __this->____delegate_0;
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = Delegate_Release_mD1AA995D7731AE8F4716A13CF8BC22ADFADE1C01(L_1, NULL);
		__this->____delegate_0 = (Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____delegate_0), (void*)(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13*)NULL);
	}

IL_001b:
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
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
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_EventSource__invoke_m0C1EEA1EBB5008722C1E0A9A99ADC570938DF34E(intptr_t ___0_thisPtr, intptr_t ___1_senderPtr, intptr_t ___2_argsPtr)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = EventSource__invoke_m0C1EEA1EBB5008722C1E0A9A99ADC570938DF34E(___0_thisPtr, ___1_senderPtr, ___2_argsPtr, NULL);

	return returnValue;
}
// System.Int32 WinRT.EventSource::_invoke(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventSource__invoke_m0C1EEA1EBB5008722C1E0A9A99ADC570938DF34E (intptr_t ___0_thisPtr, intptr_t ___1_senderPtr, intptr_t ___2_argsPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t73AC50EBBEBE2294086BCA7C6510850E9A338B32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_MarshalInvoke_Tis_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276_m508D189AF0EF98305FFF90A12B39BA8A25921573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3C_invokeU3Eb__0_m5C692B574985EBE63FCCE2523123AF95276247B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_tCA38C61070B18F5F4B9C5F4A309A9455E2ECCBE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_tCA38C61070B18F5F4B9C5F4A309A9455E2ECCBE7* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_tCA38C61070B18F5F4B9C5F4A309A9455E2ECCBE7* L_0 = (U3CU3Ec__DisplayClass1_0_tCA38C61070B18F5F4B9C5F4A309A9455E2ECCBE7*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_tCA38C61070B18F5F4B9C5F4A309A9455E2ECCBE7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_mCC859336018B538817F7A78D7F7B568D254A82AD(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_tCA38C61070B18F5F4B9C5F4A309A9455E2ECCBE7* L_1 = V_0;
		intptr_t L_2 = ___1_senderPtr;
		NullCheck(L_1);
		L_1->___senderPtr_0 = L_2;
		U3CU3Ec__DisplayClass1_0_tCA38C61070B18F5F4B9C5F4A309A9455E2ECCBE7* L_3 = V_0;
		intptr_t L_4 = ___2_argsPtr;
		NullCheck(L_3);
		L_3->___argsPtr_1 = L_4;
		intptr_t L_5 = ___0_thisPtr;
		U3CU3Ec__DisplayClass1_0_tCA38C61070B18F5F4B9C5F4A309A9455E2ECCBE7* L_6 = V_0;
		Action_1_t73AC50EBBEBE2294086BCA7C6510850E9A338B32* L_7 = (Action_1_t73AC50EBBEBE2294086BCA7C6510850E9A338B32*)il2cpp_codegen_object_new(Action_1_t73AC50EBBEBE2294086BCA7C6510850E9A338B32_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mF54D3CB4FD87166976E429B07DDEF2B34848D93E(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3C_invokeU3Eb__0_m5C692B574985EBE63FCCE2523123AF95276247B2_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Delegate_MarshalInvoke_Tis_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276_m508D189AF0EF98305FFF90A12B39BA8A25921573(L_5, L_7, Delegate_MarshalInvoke_Tis_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276_m508D189AF0EF98305FFF90A12B39BA8A25921573_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void WinRT.EventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__ctor_m973E6DAE8C1FE849DED4642FB027F15E02416052 (EventSource_t7A3A7FAFD4DF4419E8654DAB2D6E63087D9491D0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void WinRT.EventSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__cctor_mDA6C9DD6D60519131612545D1C1E6D359A692CB1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource__invoke_m0C1EEA1EBB5008722C1E0A9A99ADC570938DF34E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_t7A3A7FAFD4DF4419E8654DAB2D6E63087D9491D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDelegate2_Obj_Obj_t66149A37DDD95F736A19120D62BD83A3E5FD39CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IDelegate2_Obj_Obj_t66149A37DDD95F736A19120D62BD83A3E5FD39CA* L_0 = (IDelegate2_Obj_Obj_t66149A37DDD95F736A19120D62BD83A3E5FD39CA*)il2cpp_codegen_object_new(IDelegate2_Obj_Obj_t66149A37DDD95F736A19120D62BD83A3E5FD39CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		IDelegate2_Obj_Obj__ctor_m251014F4A691E0ECA078746FEC6F722A79B0B960(L_0, NULL, (intptr_t)((void*)EventSource__invoke_m0C1EEA1EBB5008722C1E0A9A99ADC570938DF34E_RuntimeMethod_var), NULL);
		((EventSource_t7A3A7FAFD4DF4419E8654DAB2D6E63087D9491D0_StaticFields*)il2cpp_codegen_static_fields_for(EventSource_t7A3A7FAFD4DF4419E8654DAB2D6E63087D9491D0_il2cpp_TypeInfo_var))->____invokeDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((EventSource_t7A3A7FAFD4DF4419E8654DAB2D6E63087D9491D0_StaticFields*)il2cpp_codegen_static_fields_for(EventSource_t7A3A7FAFD4DF4419E8654DAB2D6E63087D9491D0_il2cpp_TypeInfo_var))->____invokeDelegate_0), (void*)L_0);
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
void _Invoke_Invoke_mAA0B517B23949DE8BE86B430EADA7238AA69DC56_Multicast(_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276* __this, intptr_t ___0_senderPtr, intptr_t ___1_argsPtr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276* currentDelegate = reinterpret_cast<_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_senderPtr, ___1_argsPtr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void _Invoke_Invoke_mAA0B517B23949DE8BE86B430EADA7238AA69DC56_OpenInst(_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276* __this, intptr_t ___0_senderPtr, intptr_t ___1_argsPtr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_senderPtr, ___1_argsPtr, method);
}
void _Invoke_Invoke_mAA0B517B23949DE8BE86B430EADA7238AA69DC56_OpenStatic(_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276* __this, intptr_t ___0_senderPtr, intptr_t ___1_argsPtr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_senderPtr, ___1_argsPtr, method);
}
void _Invoke_Invoke_mAA0B517B23949DE8BE86B430EADA7238AA69DC56_OpenStaticInvoker(_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276* __this, intptr_t ___0_senderPtr, intptr_t ___1_argsPtr, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_senderPtr, ___1_argsPtr);
}
void _Invoke_Invoke_mAA0B517B23949DE8BE86B430EADA7238AA69DC56_ClosedStaticInvoker(_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276* __this, intptr_t ___0_senderPtr, intptr_t ___1_argsPtr, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_senderPtr, ___1_argsPtr);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276 (_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276* __this, intptr_t ___0_senderPtr, intptr_t ___1_argsPtr, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_senderPtr, ___1_argsPtr);

}
// System.Void WinRT.EventSource/_Invoke::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Invoke__ctor_m982F82DB0DA23FC4158B747A45C9978F6EDD671B (_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_Invoke_Invoke_mAA0B517B23949DE8BE86B430EADA7238AA69DC56_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_Invoke_Invoke_mAA0B517B23949DE8BE86B430EADA7238AA69DC56_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_Invoke_Invoke_mAA0B517B23949DE8BE86B430EADA7238AA69DC56_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_Invoke_Invoke_mAA0B517B23949DE8BE86B430EADA7238AA69DC56_Multicast;
}
// System.Void WinRT.EventSource/_Invoke::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Invoke_Invoke_mAA0B517B23949DE8BE86B430EADA7238AA69DC56 (_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276* __this, intptr_t ___0_senderPtr, intptr_t ___1_argsPtr, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_senderPtr, ___1_argsPtr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WinRT.EventSource/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mCC859336018B538817F7A78D7F7B568D254A82AD (U3CU3Ec__DisplayClass1_0_tCA38C61070B18F5F4B9C5F4A309A9455E2ECCBE7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void WinRT.EventSource/<>c__DisplayClass1_0::<_invoke>b__0(WinRT.EventSource/_Invoke)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3C_invokeU3Eb__0_m5C692B574985EBE63FCCE2523123AF95276247B2 (U3CU3Ec__DisplayClass1_0_tCA38C61070B18F5F4B9C5F4A309A9455E2ECCBE7* __this, _Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276* ___0_invoker, const RuntimeMethod* method) 
{
	{
		_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276* L_0 = ___0_invoker;
		intptr_t L_1 = __this->___senderPtr_0;
		intptr_t L_2 = __this->___argsPtr_1;
		NullCheck(L_0);
		_Invoke_Invoke_mAA0B517B23949DE8BE86B430EADA7238AA69DC56_inline(L_0, L_1, L_2, NULL);
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
// System.Void WinRT.Interop.MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_mA03A902EB2A3F5087D08BB53708038BC15863DE1 (MonoPInvokeCallbackAttribute_tFEE42FDDD0C003825984DDD5893532E298DF6D52* __this, Type_t* ___0_t, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		Type_t* L_0 = ___0_t;
		MonoPInvokeCallbackAttribute_set_DelegateType_m413872D1B36237F56A4A88DD2E8674675C4C54D4_inline(__this, L_0, NULL);
		return;
	}
}
// System.Void WinRT.Interop.MonoPInvokeCallbackAttribute::set_DelegateType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute_set_DelegateType_m413872D1B36237F56A4A88DD2E8674675C4C54D4 (MonoPInvokeCallbackAttribute_tFEE42FDDD0C003825984DDD5893532E298DF6D52* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CDelegateTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDelegateTypeU3Ek__BackingField_0), (void*)L_0);
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
// Conversion methods for marshalling of: WinRT.Interop.IUnknownVftbl
IL2CPP_EXTERN_C void IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_pinvoke(const IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860& unmarshaled, IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_pinvoke& marshaled)
{
	marshaled.___QueryInterface_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___QueryInterface_0));
	marshaled.___AddRef_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___AddRef_1));
	marshaled.___Release_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Release_2));
}
IL2CPP_EXTERN_C void IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_pinvoke_back(const IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_pinvoke& marshaled, IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___QueryInterface_0 = il2cpp_codegen_marshal_function_ptr_to_delegate<_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543>(marshaled.___QueryInterface_0, _QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___QueryInterface_0), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543>(marshaled.___QueryInterface_0, _QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543_il2cpp_TypeInfo_var));
	unmarshaled.___AddRef_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A>(marshaled.___AddRef_1, _AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___AddRef_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A>(marshaled.___AddRef_1, _AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A_il2cpp_TypeInfo_var));
	unmarshaled.___Release_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE>(marshaled.___Release_2, _Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Release_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE>(marshaled.___Release_2, _Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IUnknownVftbl
IL2CPP_EXTERN_C void IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_pinvoke_cleanup(IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: WinRT.Interop.IUnknownVftbl
IL2CPP_EXTERN_C void IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_com(const IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860& unmarshaled, IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_com& marshaled)
{
	marshaled.___QueryInterface_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___QueryInterface_0));
	marshaled.___AddRef_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___AddRef_1));
	marshaled.___Release_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Release_2));
}
IL2CPP_EXTERN_C void IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_com_back(const IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_com& marshaled, IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___QueryInterface_0 = il2cpp_codegen_marshal_function_ptr_to_delegate<_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543>(marshaled.___QueryInterface_0, _QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___QueryInterface_0), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543>(marshaled.___QueryInterface_0, _QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543_il2cpp_TypeInfo_var));
	unmarshaled.___AddRef_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A>(marshaled.___AddRef_1, _AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___AddRef_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A>(marshaled.___AddRef_1, _AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A_il2cpp_TypeInfo_var));
	unmarshaled.___Release_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE>(marshaled.___Release_2, _Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Release_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE>(marshaled.___Release_2, _Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IUnknownVftbl
IL2CPP_EXTERN_C void IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_com_cleanup(IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshaled_com& marshaled)
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
int32_t _QueryInterface_Invoke_m63A4083DB600043EA45B17395F3EC7DCBA25D887_Multicast(_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543* __this, intptr_t ___0_pThis, Guid_t* ___1_iid, intptr_t* ___2_vftbl, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543* currentDelegate = reinterpret_cast<_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, Guid_t*, intptr_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_pThis, ___1_iid, ___2_vftbl, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _QueryInterface_Invoke_m63A4083DB600043EA45B17395F3EC7DCBA25D887_OpenInst(_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543* __this, intptr_t ___0_pThis, Guid_t* ___1_iid, intptr_t* ___2_vftbl, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, Guid_t*, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_pThis, ___1_iid, ___2_vftbl, method);
}
int32_t _QueryInterface_Invoke_m63A4083DB600043EA45B17395F3EC7DCBA25D887_OpenStatic(_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543* __this, intptr_t ___0_pThis, Guid_t* ___1_iid, intptr_t* ___2_vftbl, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, Guid_t*, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_pThis, ___1_iid, ___2_vftbl, method);
}
int32_t _QueryInterface_Invoke_m63A4083DB600043EA45B17395F3EC7DCBA25D887_OpenStaticInvoker(_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543* __this, intptr_t ___0_pThis, Guid_t* ___1_iid, intptr_t* ___2_vftbl, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, Guid_t*, intptr_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_pThis, ___1_iid, ___2_vftbl);
}
int32_t _QueryInterface_Invoke_m63A4083DB600043EA45B17395F3EC7DCBA25D887_ClosedStaticInvoker(_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543* __this, intptr_t ___0_pThis, Guid_t* ___1_iid, intptr_t* ___2_vftbl, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, Guid_t*, intptr_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_pThis, ___1_iid, ___2_vftbl);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543 (_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543* __this, intptr_t ___0_pThis, Guid_t* ___1_iid, intptr_t* ___2_vftbl, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, Guid_t*, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_pThis, ___1_iid, ___2_vftbl);

	return returnValue;
}
// System.Void WinRT.Interop.IUnknownVftbl/_QueryInterface::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _QueryInterface__ctor_m1AF8BBD185DCCDAD5EF42E957FB12193886C8040 (_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_QueryInterface_Invoke_m63A4083DB600043EA45B17395F3EC7DCBA25D887_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_QueryInterface_Invoke_m63A4083DB600043EA45B17395F3EC7DCBA25D887_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_QueryInterface_Invoke_m63A4083DB600043EA45B17395F3EC7DCBA25D887_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_QueryInterface_Invoke_m63A4083DB600043EA45B17395F3EC7DCBA25D887_Multicast;
}
// System.Int32 WinRT.Interop.IUnknownVftbl/_QueryInterface::Invoke(System.IntPtr,System.Guid*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _QueryInterface_Invoke_m63A4083DB600043EA45B17395F3EC7DCBA25D887 (_QueryInterface_t5632F2CA688054B0CA880ECB3E1418F1A2168543* __this, intptr_t ___0_pThis, Guid_t* ___1_iid, intptr_t* ___2_vftbl, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, Guid_t*, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_pThis, ___1_iid, ___2_vftbl, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
uint32_t _AddRef_Invoke_m49381DD041000F106829EDE364B068DE1E37B131_Multicast(_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A* __this, intptr_t ___0_pThis, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uint32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A* currentDelegate = reinterpret_cast<_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A*>(delegatesToInvoke[i]);
		typedef uint32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_pThis, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uint32_t _AddRef_Invoke_m49381DD041000F106829EDE364B068DE1E37B131_OpenInst(_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A* __this, intptr_t ___0_pThis, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_pThis, method);
}
uint32_t _AddRef_Invoke_m49381DD041000F106829EDE364B068DE1E37B131_OpenStatic(_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A* __this, intptr_t ___0_pThis, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_pThis, method);
}
uint32_t _AddRef_Invoke_m49381DD041000F106829EDE364B068DE1E37B131_OpenStaticInvoker(_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A* __this, intptr_t ___0_pThis, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< uint32_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_pThis);
}
uint32_t _AddRef_Invoke_m49381DD041000F106829EDE364B068DE1E37B131_ClosedStaticInvoker(_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A* __this, intptr_t ___0_pThis, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< uint32_t, RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_pThis);
}
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper__AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A (_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A* __this, intptr_t ___0_pThis, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___0_pThis);

	return returnValue;
}
// System.Void WinRT.Interop.IUnknownVftbl/_AddRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AddRef__ctor_m8BF7AEF65C6F080897EA4AC1BE5018FC6EF481DA (_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&_AddRef_Invoke_m49381DD041000F106829EDE364B068DE1E37B131_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_AddRef_Invoke_m49381DD041000F106829EDE364B068DE1E37B131_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_AddRef_Invoke_m49381DD041000F106829EDE364B068DE1E37B131_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_AddRef_Invoke_m49381DD041000F106829EDE364B068DE1E37B131_Multicast;
}
// System.UInt32 WinRT.Interop.IUnknownVftbl/_AddRef::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _AddRef_Invoke_m49381DD041000F106829EDE364B068DE1E37B131 (_AddRef_tE2AEA03FD8DD8DD2D75DC23D72B74232464FF85A* __this, intptr_t ___0_pThis, const RuntimeMethod* method) 
{
	typedef uint32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_pThis, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
uint32_t _Release_Invoke_mC17A031E664A3147A7A4BA637F471D028C48FAE5_Multicast(_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE* __this, intptr_t ___0_pThis, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uint32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE* currentDelegate = reinterpret_cast<_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE*>(delegatesToInvoke[i]);
		typedef uint32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_pThis, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uint32_t _Release_Invoke_mC17A031E664A3147A7A4BA637F471D028C48FAE5_OpenInst(_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE* __this, intptr_t ___0_pThis, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_pThis, method);
}
uint32_t _Release_Invoke_mC17A031E664A3147A7A4BA637F471D028C48FAE5_OpenStatic(_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE* __this, intptr_t ___0_pThis, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_pThis, method);
}
uint32_t _Release_Invoke_mC17A031E664A3147A7A4BA637F471D028C48FAE5_OpenStaticInvoker(_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE* __this, intptr_t ___0_pThis, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< uint32_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_pThis);
}
uint32_t _Release_Invoke_mC17A031E664A3147A7A4BA637F471D028C48FAE5_ClosedStaticInvoker(_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE* __this, intptr_t ___0_pThis, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< uint32_t, RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_pThis);
}
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper__Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE (_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE* __this, intptr_t ___0_pThis, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___0_pThis);

	return returnValue;
}
// System.Void WinRT.Interop.IUnknownVftbl/_Release::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Release__ctor_m5B3E6442FF25C2D6AEC4988CF3C3C55BAD6B56CC (_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&_Release_Invoke_mC17A031E664A3147A7A4BA637F471D028C48FAE5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_Release_Invoke_mC17A031E664A3147A7A4BA637F471D028C48FAE5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_Release_Invoke_mC17A031E664A3147A7A4BA637F471D028C48FAE5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_Release_Invoke_mC17A031E664A3147A7A4BA637F471D028C48FAE5_Multicast;
}
// System.UInt32 WinRT.Interop.IUnknownVftbl/_Release::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _Release_Invoke_mC17A031E664A3147A7A4BA637F471D028C48FAE5 (_Release_t163CD7DD82DE5AC7A74A09741315C634EBA5C8DE* __this, intptr_t ___0_pThis, const RuntimeMethod* method) 
{
	typedef uint32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_pThis, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IInspectableVftbl
IL2CPP_EXTERN_C void IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke(const IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485& unmarshaled, IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_pinvoke& marshaled)
{
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_pinvoke(unmarshaled.___IUnknownVftbl_0, marshaled.___IUnknownVftbl_0);
	marshaled.___GetIids_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetIids_1));
	marshaled.___GetRuntimeClassName_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetRuntimeClassName_2));
	marshaled.___GetTrustLevel_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetTrustLevel_3));
}
IL2CPP_EXTERN_C void IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_back(const IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_pinvoke& marshaled, IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860 unmarshaledIUnknownVftbl_temp_0;
	memset((&unmarshaledIUnknownVftbl_temp_0), 0, sizeof(unmarshaledIUnknownVftbl_temp_0));
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_pinvoke_back(marshaled.___IUnknownVftbl_0, unmarshaledIUnknownVftbl_temp_0);
	unmarshaled.___IUnknownVftbl_0 = unmarshaledIUnknownVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	unmarshaled.___GetIids_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033>(marshaled.___GetIids_1, _GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetIids_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033>(marshaled.___GetIids_1, _GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033_il2cpp_TypeInfo_var));
	unmarshaled.___GetRuntimeClassName_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909>(marshaled.___GetRuntimeClassName_2, _GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetRuntimeClassName_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909>(marshaled.___GetRuntimeClassName_2, _GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909_il2cpp_TypeInfo_var));
	unmarshaled.___GetTrustLevel_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D>(marshaled.___GetTrustLevel_3, _GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetTrustLevel_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D>(marshaled.___GetTrustLevel_3, _GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IInspectableVftbl
IL2CPP_EXTERN_C void IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_cleanup(IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_pinvoke& marshaled)
{
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_pinvoke_cleanup(marshaled.___IUnknownVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IInspectableVftbl
IL2CPP_EXTERN_C void IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com(const IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485& unmarshaled, IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_com& marshaled)
{
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_com(unmarshaled.___IUnknownVftbl_0, marshaled.___IUnknownVftbl_0);
	marshaled.___GetIids_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetIids_1));
	marshaled.___GetRuntimeClassName_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetRuntimeClassName_2));
	marshaled.___GetTrustLevel_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetTrustLevel_3));
}
IL2CPP_EXTERN_C void IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_back(const IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_com& marshaled, IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860 unmarshaledIUnknownVftbl_temp_0;
	memset((&unmarshaledIUnknownVftbl_temp_0), 0, sizeof(unmarshaledIUnknownVftbl_temp_0));
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_com_back(marshaled.___IUnknownVftbl_0, unmarshaledIUnknownVftbl_temp_0);
	unmarshaled.___IUnknownVftbl_0 = unmarshaledIUnknownVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	unmarshaled.___GetIids_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033>(marshaled.___GetIids_1, _GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetIids_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033>(marshaled.___GetIids_1, _GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033_il2cpp_TypeInfo_var));
	unmarshaled.___GetRuntimeClassName_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909>(marshaled.___GetRuntimeClassName_2, _GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetRuntimeClassName_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909>(marshaled.___GetRuntimeClassName_2, _GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909_il2cpp_TypeInfo_var));
	unmarshaled.___GetTrustLevel_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D>(marshaled.___GetTrustLevel_3, _GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetTrustLevel_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D>(marshaled.___GetTrustLevel_3, _GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IInspectableVftbl
IL2CPP_EXTERN_C void IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_cleanup(IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshaled_com& marshaled)
{
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_com_cleanup(marshaled.___IUnknownVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetIids_Invoke_mCDD3E0FFEB1BAF2B097276879619856EBD22158F_Multicast(_GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033* __this, intptr_t ___0_pThis, uint32_t* ___1_iidCount, intptr_t* ___2_iids, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033* currentDelegate = reinterpret_cast<_GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_pThis, ___1_iidCount, ___2_iids, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetIids_Invoke_mCDD3E0FFEB1BAF2B097276879619856EBD22158F_OpenInst(_GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033* __this, intptr_t ___0_pThis, uint32_t* ___1_iidCount, intptr_t* ___2_iids, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_pThis, ___1_iidCount, ___2_iids, method);
}
int32_t _GetIids_Invoke_mCDD3E0FFEB1BAF2B097276879619856EBD22158F_OpenStatic(_GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033* __this, intptr_t ___0_pThis, uint32_t* ___1_iidCount, intptr_t* ___2_iids, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_pThis, ___1_iidCount, ___2_iids, method);
}
int32_t _GetIids_Invoke_mCDD3E0FFEB1BAF2B097276879619856EBD22158F_OpenStaticInvoker(_GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033* __this, intptr_t ___0_pThis, uint32_t* ___1_iidCount, intptr_t* ___2_iids, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_pThis, ___1_iidCount, ___2_iids);
}
int32_t _GetIids_Invoke_mCDD3E0FFEB1BAF2B097276879619856EBD22158F_ClosedStaticInvoker(_GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033* __this, intptr_t ___0_pThis, uint32_t* ___1_iidCount, intptr_t* ___2_iids, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, uint32_t*, intptr_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_pThis, ___1_iidCount, ___2_iids);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033 (_GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033* __this, intptr_t ___0_pThis, uint32_t* ___1_iidCount, intptr_t* ___2_iids, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t*, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_pThis, ___1_iidCount, ___2_iids);

	return returnValue;
}
// System.Void WinRT.Interop.IInspectableVftbl/_GetIids::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetIids__ctor_mC9FFEAA9FF13B319B9FE6B2114CE48E7028D2A55 (_GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetIids_Invoke_mCDD3E0FFEB1BAF2B097276879619856EBD22158F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetIids_Invoke_mCDD3E0FFEB1BAF2B097276879619856EBD22158F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetIids_Invoke_mCDD3E0FFEB1BAF2B097276879619856EBD22158F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetIids_Invoke_mCDD3E0FFEB1BAF2B097276879619856EBD22158F_Multicast;
}
// System.Int32 WinRT.Interop.IInspectableVftbl/_GetIids::Invoke(System.IntPtr,System.UInt32*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetIids_Invoke_mCDD3E0FFEB1BAF2B097276879619856EBD22158F (_GetIids_t6E557830EC3081837DA520B95BAAAEACA9FA7033* __this, intptr_t ___0_pThis, uint32_t* ___1_iidCount, intptr_t* ___2_iids, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_pThis, ___1_iidCount, ___2_iids, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetRuntimeClassName_Invoke_mB3120D55BC417345C85531DF08EB6FD8FC4F976F_Multicast(_GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909* __this, intptr_t ___0_pThis, intptr_t* ___1_className, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909* currentDelegate = reinterpret_cast<_GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_pThis, ___1_className, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetRuntimeClassName_Invoke_mB3120D55BC417345C85531DF08EB6FD8FC4F976F_OpenInst(_GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909* __this, intptr_t ___0_pThis, intptr_t* ___1_className, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_pThis, ___1_className, method);
}
int32_t _GetRuntimeClassName_Invoke_mB3120D55BC417345C85531DF08EB6FD8FC4F976F_OpenStatic(_GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909* __this, intptr_t ___0_pThis, intptr_t* ___1_className, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_pThis, ___1_className, method);
}
int32_t _GetRuntimeClassName_Invoke_mB3120D55BC417345C85531DF08EB6FD8FC4F976F_OpenStaticInvoker(_GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909* __this, intptr_t ___0_pThis, intptr_t* ___1_className, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_pThis, ___1_className);
}
int32_t _GetRuntimeClassName_Invoke_mB3120D55BC417345C85531DF08EB6FD8FC4F976F_ClosedStaticInvoker(_GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909* __this, intptr_t ___0_pThis, intptr_t* ___1_className, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, intptr_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_pThis, ___1_className);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909 (_GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909* __this, intptr_t ___0_pThis, intptr_t* ___1_className, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_pThis, ___1_className);

	return returnValue;
}
// System.Void WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetRuntimeClassName__ctor_m344C9BDCF858CB81EC4D2AA411E0344D755A82EB (_GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetRuntimeClassName_Invoke_mB3120D55BC417345C85531DF08EB6FD8FC4F976F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetRuntimeClassName_Invoke_mB3120D55BC417345C85531DF08EB6FD8FC4F976F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetRuntimeClassName_Invoke_mB3120D55BC417345C85531DF08EB6FD8FC4F976F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetRuntimeClassName_Invoke_mB3120D55BC417345C85531DF08EB6FD8FC4F976F_Multicast;
}
// System.Int32 WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetRuntimeClassName_Invoke_mB3120D55BC417345C85531DF08EB6FD8FC4F976F (_GetRuntimeClassName_t632D45FA6711DA1CDC40173624216877CE1C3909* __this, intptr_t ___0_pThis, intptr_t* ___1_className, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_pThis, ___1_className, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetTrustLevel_Invoke_m50638CE7D9A3039C653C0F8B444074C12ABE9ECF_Multicast(_GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D* __this, intptr_t ___0_pThis, int32_t* ___1_trustLevel, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D* currentDelegate = reinterpret_cast<_GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_pThis, ___1_trustLevel, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetTrustLevel_Invoke_m50638CE7D9A3039C653C0F8B444074C12ABE9ECF_OpenInst(_GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D* __this, intptr_t ___0_pThis, int32_t* ___1_trustLevel, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_pThis, ___1_trustLevel, method);
}
int32_t _GetTrustLevel_Invoke_m50638CE7D9A3039C653C0F8B444074C12ABE9ECF_OpenStatic(_GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D* __this, intptr_t ___0_pThis, int32_t* ___1_trustLevel, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_pThis, ___1_trustLevel, method);
}
int32_t _GetTrustLevel_Invoke_m50638CE7D9A3039C653C0F8B444074C12ABE9ECF_OpenStaticInvoker(_GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D* __this, intptr_t ___0_pThis, int32_t* ___1_trustLevel, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_pThis, ___1_trustLevel);
}
int32_t _GetTrustLevel_Invoke_m50638CE7D9A3039C653C0F8B444074C12ABE9ECF_ClosedStaticInvoker(_GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D* __this, intptr_t ___0_pThis, int32_t* ___1_trustLevel, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, int32_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_pThis, ___1_trustLevel);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D (_GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D* __this, intptr_t ___0_pThis, int32_t* ___1_trustLevel, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_pThis, ___1_trustLevel);

	return returnValue;
}
// System.Void WinRT.Interop.IInspectableVftbl/_GetTrustLevel::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetTrustLevel__ctor_mF6891D38F0F64EAFE74129ABA0BBB87D11A39CB5 (_GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetTrustLevel_Invoke_m50638CE7D9A3039C653C0F8B444074C12ABE9ECF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetTrustLevel_Invoke_m50638CE7D9A3039C653C0F8B444074C12ABE9ECF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetTrustLevel_Invoke_m50638CE7D9A3039C653C0F8B444074C12ABE9ECF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetTrustLevel_Invoke_m50638CE7D9A3039C653C0F8B444074C12ABE9ECF_Multicast;
}
// System.Int32 WinRT.Interop.IInspectableVftbl/_GetTrustLevel::Invoke(System.IntPtr,WinRT.TrustLevel*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetTrustLevel_Invoke_m50638CE7D9A3039C653C0F8B444074C12ABE9ECF (_GetTrustLevel_t17851C8A874AE2DECBC6332CBC75352777D6BE2D* __this, intptr_t ___0_pThis, int32_t* ___1_trustLevel, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_pThis, ___1_trustLevel, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IActivationFactoryVftbl
IL2CPP_EXTERN_C void IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209_marshal_pinvoke(const IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209& unmarshaled, IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___ActivateInstance_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___ActivateInstance_1));
}
IL2CPP_EXTERN_C void IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209_marshal_pinvoke_back(const IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209_marshaled_pinvoke& marshaled, IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___ActivateInstance_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8>(marshaled.___ActivateInstance_1, _ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ActivateInstance_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8>(marshaled.___ActivateInstance_1, _ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IActivationFactoryVftbl
IL2CPP_EXTERN_C void IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209_marshal_pinvoke_cleanup(IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IActivationFactoryVftbl
IL2CPP_EXTERN_C void IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209_marshal_com(const IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209& unmarshaled, IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209_marshaled_com& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___ActivateInstance_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___ActivateInstance_1));
}
IL2CPP_EXTERN_C void IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209_marshal_com_back(const IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209_marshaled_com& marshaled, IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___ActivateInstance_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8>(marshaled.___ActivateInstance_1, _ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ActivateInstance_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8>(marshaled.___ActivateInstance_1, _ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IActivationFactoryVftbl
IL2CPP_EXTERN_C void IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209_marshal_com_cleanup(IActivationFactoryVftbl_t7D7EA43463061ACF5C7C2C342019D74C8AAAE209_marshaled_com& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _ActivateInstance_Invoke_m7A1E26909FC12D8B27DF8438073DD2E715EDDEDC_Multicast(_ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8* __this, intptr_t ___0_pThis, intptr_t* ___1_instance, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8* currentDelegate = reinterpret_cast<_ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_pThis, ___1_instance, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _ActivateInstance_Invoke_m7A1E26909FC12D8B27DF8438073DD2E715EDDEDC_OpenInst(_ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8* __this, intptr_t ___0_pThis, intptr_t* ___1_instance, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_pThis, ___1_instance, method);
}
int32_t _ActivateInstance_Invoke_m7A1E26909FC12D8B27DF8438073DD2E715EDDEDC_OpenStatic(_ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8* __this, intptr_t ___0_pThis, intptr_t* ___1_instance, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_pThis, ___1_instance, method);
}
int32_t _ActivateInstance_Invoke_m7A1E26909FC12D8B27DF8438073DD2E715EDDEDC_OpenStaticInvoker(_ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8* __this, intptr_t ___0_pThis, intptr_t* ___1_instance, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_pThis, ___1_instance);
}
int32_t _ActivateInstance_Invoke_m7A1E26909FC12D8B27DF8438073DD2E715EDDEDC_ClosedStaticInvoker(_ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8* __this, intptr_t ___0_pThis, intptr_t* ___1_instance, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, intptr_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_pThis, ___1_instance);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8 (_ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8* __this, intptr_t ___0_pThis, intptr_t* ___1_instance, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_pThis, ___1_instance);

	return returnValue;
}
// System.Void WinRT.Interop.IActivationFactoryVftbl/_ActivateInstance::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ActivateInstance__ctor_mC2E144B2B2276464B7768AF73D4EDC39AB44ACD8 (_ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_ActivateInstance_Invoke_m7A1E26909FC12D8B27DF8438073DD2E715EDDEDC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_ActivateInstance_Invoke_m7A1E26909FC12D8B27DF8438073DD2E715EDDEDC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_ActivateInstance_Invoke_m7A1E26909FC12D8B27DF8438073DD2E715EDDEDC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_ActivateInstance_Invoke_m7A1E26909FC12D8B27DF8438073DD2E715EDDEDC_Multicast;
}
// System.Int32 WinRT.Interop.IActivationFactoryVftbl/_ActivateInstance::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ActivateInstance_Invoke_m7A1E26909FC12D8B27DF8438073DD2E715EDDEDC (_ActivateInstance_t0B518ABDC6074987E9C4E8B01D9BF0628BF307C8* __this, intptr_t ___0_pThis, intptr_t* ___1_instance, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_pThis, ___1_instance, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IAgileObjectVftbl
IL2CPP_EXTERN_C void IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969_marshal_pinvoke(const IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969& unmarshaled, IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969_marshaled_pinvoke& marshaled)
{
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_pinvoke(unmarshaled.___IUnknownVftbl_0, marshaled.___IUnknownVftbl_0);
}
IL2CPP_EXTERN_C void IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969_marshal_pinvoke_back(const IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969_marshaled_pinvoke& marshaled, IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969& unmarshaled)
{
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860 unmarshaledIUnknownVftbl_temp_0;
	memset((&unmarshaledIUnknownVftbl_temp_0), 0, sizeof(unmarshaledIUnknownVftbl_temp_0));
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_pinvoke_back(marshaled.___IUnknownVftbl_0, unmarshaledIUnknownVftbl_temp_0);
	unmarshaled.___IUnknownVftbl_0 = unmarshaledIUnknownVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IAgileObjectVftbl
IL2CPP_EXTERN_C void IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969_marshal_pinvoke_cleanup(IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969_marshaled_pinvoke& marshaled)
{
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_pinvoke_cleanup(marshaled.___IUnknownVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IAgileObjectVftbl
IL2CPP_EXTERN_C void IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969_marshal_com(const IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969& unmarshaled, IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969_marshaled_com& marshaled)
{
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_com(unmarshaled.___IUnknownVftbl_0, marshaled.___IUnknownVftbl_0);
}
IL2CPP_EXTERN_C void IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969_marshal_com_back(const IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969_marshaled_com& marshaled, IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969& unmarshaled)
{
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860 unmarshaledIUnknownVftbl_temp_0;
	memset((&unmarshaledIUnknownVftbl_temp_0), 0, sizeof(unmarshaledIUnknownVftbl_temp_0));
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_com_back(marshaled.___IUnknownVftbl_0, unmarshaledIUnknownVftbl_temp_0);
	unmarshaled.___IUnknownVftbl_0 = unmarshaledIUnknownVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IAgileObjectVftbl
IL2CPP_EXTERN_C void IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969_marshal_com_cleanup(IAgileObjectVftbl_tEDEFFEA82CC3BBA44155D22C048DB5AC633A2969_marshaled_com& marshaled)
{
	IUnknownVftbl_tBBC46E99F6620CDDEE78673E4EE59D961771F860_marshal_com_cleanup(marshaled.___IUnknownVftbl_0);
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
// System.Boolean WinRT.Interop._Bool::op_Implicit(WinRT.Interop._Bool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _Bool_op_Implicit_mD7F8203AE99B40DBA86A012CF98F625378418DAC (_Bool_tA3BBB9726FE45A1680F93253B328394D390A545F ___0_value, const RuntimeMethod* method) 
{
	{
		_Bool_tA3BBB9726FE45A1680F93253B328394D390A545F L_0 = ___0_value;
		int32_t L_1 = L_0.___RawValue_0;
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
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
int32_t _get_PropertyAsInt_Invoke_m679CBE2F073B7A4ABA3F9EDD44EA3D7F5F83F87A_Multicast(_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95* __this, intptr_t ___0_thisPtr, int32_t* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95* currentDelegate = reinterpret_cast<_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _get_PropertyAsInt_Invoke_m679CBE2F073B7A4ABA3F9EDD44EA3D7F5F83F87A_OpenInst(_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95* __this, intptr_t ___0_thisPtr, int32_t* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_value, method);
}
int32_t _get_PropertyAsInt_Invoke_m679CBE2F073B7A4ABA3F9EDD44EA3D7F5F83F87A_OpenStatic(_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95* __this, intptr_t ___0_thisPtr, int32_t* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_value, method);
}
int32_t _get_PropertyAsInt_Invoke_m679CBE2F073B7A4ABA3F9EDD44EA3D7F5F83F87A_OpenStaticInvoker(_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95* __this, intptr_t ___0_thisPtr, int32_t* ___1_value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_thisPtr, ___1_value);
}
int32_t _get_PropertyAsInt_Invoke_m679CBE2F073B7A4ABA3F9EDD44EA3D7F5F83F87A_ClosedStaticInvoker(_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95* __this, intptr_t ___0_thisPtr, int32_t* ___1_value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, int32_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_thisPtr, ___1_value);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95 (_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95* __this, intptr_t ___0_thisPtr, int32_t* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_thisPtr, ___1_value);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsInt::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsInt__ctor_mD8B1FEAF1364B908FE002A51D04941CA2D6DE6F5 (_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsInt_Invoke_m679CBE2F073B7A4ABA3F9EDD44EA3D7F5F83F87A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsInt_Invoke_m679CBE2F073B7A4ABA3F9EDD44EA3D7F5F83F87A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsInt_Invoke_m679CBE2F073B7A4ABA3F9EDD44EA3D7F5F83F87A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_get_PropertyAsInt_Invoke_m679CBE2F073B7A4ABA3F9EDD44EA3D7F5F83F87A_Multicast;
}
// System.Int32 WinRT.Interop._get_PropertyAsInt::Invoke(System.IntPtr,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsInt_Invoke_m679CBE2F073B7A4ABA3F9EDD44EA3D7F5F83F87A (_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95* __this, intptr_t ___0_thisPtr, int32_t* ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _get_PropertyAsUInt_Invoke_mF7DAE456AD92051B4438BA719CD2AE3AFC129E56_Multicast(_get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C* __this, intptr_t ___0_thisPtr, uint32_t* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C* currentDelegate = reinterpret_cast<_get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _get_PropertyAsUInt_Invoke_mF7DAE456AD92051B4438BA719CD2AE3AFC129E56_OpenInst(_get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C* __this, intptr_t ___0_thisPtr, uint32_t* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_value, method);
}
int32_t _get_PropertyAsUInt_Invoke_mF7DAE456AD92051B4438BA719CD2AE3AFC129E56_OpenStatic(_get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C* __this, intptr_t ___0_thisPtr, uint32_t* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_value, method);
}
int32_t _get_PropertyAsUInt_Invoke_mF7DAE456AD92051B4438BA719CD2AE3AFC129E56_OpenStaticInvoker(_get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C* __this, intptr_t ___0_thisPtr, uint32_t* ___1_value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, uint32_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_thisPtr, ___1_value);
}
int32_t _get_PropertyAsUInt_Invoke_mF7DAE456AD92051B4438BA719CD2AE3AFC129E56_ClosedStaticInvoker(_get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C* __this, intptr_t ___0_thisPtr, uint32_t* ___1_value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, uint32_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_thisPtr, ___1_value);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C (_get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C* __this, intptr_t ___0_thisPtr, uint32_t* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_thisPtr, ___1_value);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsUInt::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsUInt__ctor_m625C0E8E689CD1E5B9538D99D5805B62F6458AE5 (_get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsUInt_Invoke_mF7DAE456AD92051B4438BA719CD2AE3AFC129E56_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsUInt_Invoke_mF7DAE456AD92051B4438BA719CD2AE3AFC129E56_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsUInt_Invoke_mF7DAE456AD92051B4438BA719CD2AE3AFC129E56_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_get_PropertyAsUInt_Invoke_mF7DAE456AD92051B4438BA719CD2AE3AFC129E56_Multicast;
}
// System.Int32 WinRT.Interop._get_PropertyAsUInt::Invoke(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsUInt_Invoke_mF7DAE456AD92051B4438BA719CD2AE3AFC129E56 (_get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C* __this, intptr_t ___0_thisPtr, uint32_t* ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _get_PropertyAsBool_Invoke_mA329DF09AC0BE7719EDFF57073F266CC0AAA1D82_Multicast(_get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E* __this, intptr_t ___0_thisPtr, _Bool_tA3BBB9726FE45A1680F93253B328394D390A545F* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E* currentDelegate = reinterpret_cast<_get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, _Bool_tA3BBB9726FE45A1680F93253B328394D390A545F*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _get_PropertyAsBool_Invoke_mA329DF09AC0BE7719EDFF57073F266CC0AAA1D82_OpenInst(_get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E* __this, intptr_t ___0_thisPtr, _Bool_tA3BBB9726FE45A1680F93253B328394D390A545F* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_tA3BBB9726FE45A1680F93253B328394D390A545F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_value, method);
}
int32_t _get_PropertyAsBool_Invoke_mA329DF09AC0BE7719EDFF57073F266CC0AAA1D82_OpenStatic(_get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E* __this, intptr_t ___0_thisPtr, _Bool_tA3BBB9726FE45A1680F93253B328394D390A545F* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_tA3BBB9726FE45A1680F93253B328394D390A545F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_value, method);
}
int32_t _get_PropertyAsBool_Invoke_mA329DF09AC0BE7719EDFF57073F266CC0AAA1D82_OpenStaticInvoker(_get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E* __this, intptr_t ___0_thisPtr, _Bool_tA3BBB9726FE45A1680F93253B328394D390A545F* ___1_value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, _Bool_tA3BBB9726FE45A1680F93253B328394D390A545F* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_thisPtr, ___1_value);
}
int32_t _get_PropertyAsBool_Invoke_mA329DF09AC0BE7719EDFF57073F266CC0AAA1D82_ClosedStaticInvoker(_get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E* __this, intptr_t ___0_thisPtr, _Bool_tA3BBB9726FE45A1680F93253B328394D390A545F* ___1_value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, _Bool_tA3BBB9726FE45A1680F93253B328394D390A545F* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_thisPtr, ___1_value);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E (_get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E* __this, intptr_t ___0_thisPtr, _Bool_tA3BBB9726FE45A1680F93253B328394D390A545F* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, _Bool_tA3BBB9726FE45A1680F93253B328394D390A545F*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_thisPtr, ___1_value);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsBool::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsBool__ctor_m2A213AD1136B4876DE857D953FBF7943CEF51B11 (_get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsBool_Invoke_mA329DF09AC0BE7719EDFF57073F266CC0AAA1D82_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsBool_Invoke_mA329DF09AC0BE7719EDFF57073F266CC0AAA1D82_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsBool_Invoke_mA329DF09AC0BE7719EDFF57073F266CC0AAA1D82_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_get_PropertyAsBool_Invoke_mA329DF09AC0BE7719EDFF57073F266CC0AAA1D82_Multicast;
}
// System.Int32 WinRT.Interop._get_PropertyAsBool::Invoke(System.IntPtr,WinRT.Interop._Bool*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsBool_Invoke_mA329DF09AC0BE7719EDFF57073F266CC0AAA1D82 (_get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E* __this, intptr_t ___0_thisPtr, _Bool_tA3BBB9726FE45A1680F93253B328394D390A545F* ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, _Bool_tA3BBB9726FE45A1680F93253B328394D390A545F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _get_PropertyAsFloat_Invoke_mCF17DCE8E61890D2D64F28D17BC869AD9386FF2F_Multicast(_get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86* __this, intptr_t ___0_thisPtr, float* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86* currentDelegate = reinterpret_cast<_get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, float*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _get_PropertyAsFloat_Invoke_mCF17DCE8E61890D2D64F28D17BC869AD9386FF2F_OpenInst(_get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86* __this, intptr_t ___0_thisPtr, float* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, float*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_value, method);
}
int32_t _get_PropertyAsFloat_Invoke_mCF17DCE8E61890D2D64F28D17BC869AD9386FF2F_OpenStatic(_get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86* __this, intptr_t ___0_thisPtr, float* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, float*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_value, method);
}
int32_t _get_PropertyAsFloat_Invoke_mCF17DCE8E61890D2D64F28D17BC869AD9386FF2F_OpenStaticInvoker(_get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86* __this, intptr_t ___0_thisPtr, float* ___1_value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, float* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_thisPtr, ___1_value);
}
int32_t _get_PropertyAsFloat_Invoke_mCF17DCE8E61890D2D64F28D17BC869AD9386FF2F_ClosedStaticInvoker(_get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86* __this, intptr_t ___0_thisPtr, float* ___1_value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, float* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_thisPtr, ___1_value);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86 (_get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86* __this, intptr_t ___0_thisPtr, float* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_thisPtr, ___1_value);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsFloat::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsFloat__ctor_m07BE96A2C0C4B29773E8957645AA7E4BCFCDD359 (_get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsFloat_Invoke_mCF17DCE8E61890D2D64F28D17BC869AD9386FF2F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsFloat_Invoke_mCF17DCE8E61890D2D64F28D17BC869AD9386FF2F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsFloat_Invoke_mCF17DCE8E61890D2D64F28D17BC869AD9386FF2F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_get_PropertyAsFloat_Invoke_mCF17DCE8E61890D2D64F28D17BC869AD9386FF2F_Multicast;
}
// System.Int32 WinRT.Interop._get_PropertyAsFloat::Invoke(System.IntPtr,System.Single*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsFloat_Invoke_mCF17DCE8E61890D2D64F28D17BC869AD9386FF2F (_get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86* __this, intptr_t ___0_thisPtr, float* ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, float*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _get_PropertyAsObject_Invoke_mCCCAA1AC9BBC47B4AD5C79D0CE4B289E443D227A_Multicast(_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* __this, intptr_t ___0_thisPtr, intptr_t* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* currentDelegate = reinterpret_cast<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _get_PropertyAsObject_Invoke_mCCCAA1AC9BBC47B4AD5C79D0CE4B289E443D227A_OpenInst(_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* __this, intptr_t ___0_thisPtr, intptr_t* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_value, method);
}
int32_t _get_PropertyAsObject_Invoke_mCCCAA1AC9BBC47B4AD5C79D0CE4B289E443D227A_OpenStatic(_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* __this, intptr_t ___0_thisPtr, intptr_t* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_value, method);
}
int32_t _get_PropertyAsObject_Invoke_mCCCAA1AC9BBC47B4AD5C79D0CE4B289E443D227A_OpenStaticInvoker(_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* __this, intptr_t ___0_thisPtr, intptr_t* ___1_value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_thisPtr, ___1_value);
}
int32_t _get_PropertyAsObject_Invoke_mCCCAA1AC9BBC47B4AD5C79D0CE4B289E443D227A_ClosedStaticInvoker(_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* __this, intptr_t ___0_thisPtr, intptr_t* ___1_value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, intptr_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_thisPtr, ___1_value);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11 (_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* __this, intptr_t ___0_thisPtr, intptr_t* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_thisPtr, ___1_value);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsObject::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsObject__ctor_m8239B0472D5D08330563A400C71D15C596DD02F8 (_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsObject_Invoke_mCCCAA1AC9BBC47B4AD5C79D0CE4B289E443D227A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsObject_Invoke_mCCCAA1AC9BBC47B4AD5C79D0CE4B289E443D227A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsObject_Invoke_mCCCAA1AC9BBC47B4AD5C79D0CE4B289E443D227A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_get_PropertyAsObject_Invoke_mCCCAA1AC9BBC47B4AD5C79D0CE4B289E443D227A_Multicast;
}
// System.Int32 WinRT.Interop._get_PropertyAsObject::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsObject_Invoke_mCCCAA1AC9BBC47B4AD5C79D0CE4B289E443D227A (_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* __this, intptr_t ___0_thisPtr, intptr_t* ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _put_PropertyAsObject_Invoke_mA3E6B492FC5E141D37C4BC0BF231EB943D7B9CBD_Multicast(_put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A* __this, intptr_t ___0_thisPtr, intptr_t ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A* currentDelegate = reinterpret_cast<_put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _put_PropertyAsObject_Invoke_mA3E6B492FC5E141D37C4BC0BF231EB943D7B9CBD_OpenInst(_put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A* __this, intptr_t ___0_thisPtr, intptr_t ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_value, method);
}
int32_t _put_PropertyAsObject_Invoke_mA3E6B492FC5E141D37C4BC0BF231EB943D7B9CBD_OpenStatic(_put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A* __this, intptr_t ___0_thisPtr, intptr_t ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_value, method);
}
int32_t _put_PropertyAsObject_Invoke_mA3E6B492FC5E141D37C4BC0BF231EB943D7B9CBD_OpenStaticInvoker(_put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A* __this, intptr_t ___0_thisPtr, intptr_t ___1_value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_thisPtr, ___1_value);
}
int32_t _put_PropertyAsObject_Invoke_mA3E6B492FC5E141D37C4BC0BF231EB943D7B9CBD_ClosedStaticInvoker(_put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A* __this, intptr_t ___0_thisPtr, intptr_t ___1_value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_thisPtr, ___1_value);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A (_put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A* __this, intptr_t ___0_thisPtr, intptr_t ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_thisPtr, ___1_value);

	return returnValue;
}
// System.Void WinRT.Interop._put_PropertyAsObject::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _put_PropertyAsObject__ctor_m25DD26BA9B14382EF26F5CEDBE56C2A97F05A4AE (_put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_put_PropertyAsObject_Invoke_mA3E6B492FC5E141D37C4BC0BF231EB943D7B9CBD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_put_PropertyAsObject_Invoke_mA3E6B492FC5E141D37C4BC0BF231EB943D7B9CBD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_put_PropertyAsObject_Invoke_mA3E6B492FC5E141D37C4BC0BF231EB943D7B9CBD_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_put_PropertyAsObject_Invoke_mA3E6B492FC5E141D37C4BC0BF231EB943D7B9CBD_Multicast;
}
// System.Int32 WinRT.Interop._put_PropertyAsObject::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _put_PropertyAsObject_Invoke_mA3E6B492FC5E141D37C4BC0BF231EB943D7B9CBD (_put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A* __this, intptr_t ___0_thisPtr, intptr_t ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _get_PropertyAsEnum_Invoke_mE8CE6F279C8BC5A05626FD92DED2517E3C963E4A_Multicast(_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0* __this, intptr_t ___0_thisPtr, int32_t* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0* currentDelegate = reinterpret_cast<_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _get_PropertyAsEnum_Invoke_mE8CE6F279C8BC5A05626FD92DED2517E3C963E4A_OpenInst(_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0* __this, intptr_t ___0_thisPtr, int32_t* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_value, method);
}
int32_t _get_PropertyAsEnum_Invoke_mE8CE6F279C8BC5A05626FD92DED2517E3C963E4A_OpenStatic(_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0* __this, intptr_t ___0_thisPtr, int32_t* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_value, method);
}
int32_t _get_PropertyAsEnum_Invoke_mE8CE6F279C8BC5A05626FD92DED2517E3C963E4A_OpenStaticInvoker(_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0* __this, intptr_t ___0_thisPtr, int32_t* ___1_value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_thisPtr, ___1_value);
}
int32_t _get_PropertyAsEnum_Invoke_mE8CE6F279C8BC5A05626FD92DED2517E3C963E4A_ClosedStaticInvoker(_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0* __this, intptr_t ___0_thisPtr, int32_t* ___1_value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, int32_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_thisPtr, ___1_value);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0 (_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0* __this, intptr_t ___0_thisPtr, int32_t* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_thisPtr, ___1_value);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsEnum::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsEnum__ctor_m47A0F9A2E939181AB899415B4950E119CD121D07 (_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsEnum_Invoke_mE8CE6F279C8BC5A05626FD92DED2517E3C963E4A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsEnum_Invoke_mE8CE6F279C8BC5A05626FD92DED2517E3C963E4A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsEnum_Invoke_mE8CE6F279C8BC5A05626FD92DED2517E3C963E4A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_get_PropertyAsEnum_Invoke_mE8CE6F279C8BC5A05626FD92DED2517E3C963E4A_Multicast;
}
// System.Int32 WinRT.Interop._get_PropertyAsEnum::Invoke(System.IntPtr,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsEnum_Invoke_mE8CE6F279C8BC5A05626FD92DED2517E3C963E4A (_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0* __this, intptr_t ___0_thisPtr, int32_t* ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _get_PropertyAsGuid_Invoke_m467847EAC22FBDB64ABB5E393DF95CBE572AB412_Multicast(_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC* __this, intptr_t ___0_thisPtr, Guid_t* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC* currentDelegate = reinterpret_cast<_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, Guid_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _get_PropertyAsGuid_Invoke_m467847EAC22FBDB64ABB5E393DF95CBE572AB412_OpenInst(_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC* __this, intptr_t ___0_thisPtr, Guid_t* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, Guid_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_value, method);
}
int32_t _get_PropertyAsGuid_Invoke_m467847EAC22FBDB64ABB5E393DF95CBE572AB412_OpenStatic(_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC* __this, intptr_t ___0_thisPtr, Guid_t* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, Guid_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_value, method);
}
int32_t _get_PropertyAsGuid_Invoke_m467847EAC22FBDB64ABB5E393DF95CBE572AB412_OpenStaticInvoker(_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC* __this, intptr_t ___0_thisPtr, Guid_t* ___1_value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, Guid_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_thisPtr, ___1_value);
}
int32_t _get_PropertyAsGuid_Invoke_m467847EAC22FBDB64ABB5E393DF95CBE572AB412_ClosedStaticInvoker(_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC* __this, intptr_t ___0_thisPtr, Guid_t* ___1_value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, Guid_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_thisPtr, ___1_value);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC (_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC* __this, intptr_t ___0_thisPtr, Guid_t* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, Guid_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_thisPtr, ___1_value);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsGuid::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsGuid__ctor_mE769CA82178DE6EFC751CD4DA40813F33C9FAD94 (_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsGuid_Invoke_m467847EAC22FBDB64ABB5E393DF95CBE572AB412_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsGuid_Invoke_m467847EAC22FBDB64ABB5E393DF95CBE572AB412_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsGuid_Invoke_m467847EAC22FBDB64ABB5E393DF95CBE572AB412_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_get_PropertyAsGuid_Invoke_m467847EAC22FBDB64ABB5E393DF95CBE572AB412_Multicast;
}
// System.Int32 WinRT.Interop._get_PropertyAsGuid::Invoke(System.IntPtr,System.Guid*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsGuid_Invoke_m467847EAC22FBDB64ABB5E393DF95CBE572AB412 (_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC* __this, intptr_t ___0_thisPtr, Guid_t* ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, Guid_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _get_PropertyAsDateTime_Invoke_mA2C0617434B9B1ACFFE91BA252E501707887E797_Multicast(_get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0* __this, intptr_t ___0_thisPtr, _DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0* currentDelegate = reinterpret_cast<_get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, _DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _get_PropertyAsDateTime_Invoke_mA2C0617434B9B1ACFFE91BA252E501707887E797_OpenInst(_get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0* __this, intptr_t ___0_thisPtr, _DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, _DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_value, method);
}
int32_t _get_PropertyAsDateTime_Invoke_mA2C0617434B9B1ACFFE91BA252E501707887E797_OpenStatic(_get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0* __this, intptr_t ___0_thisPtr, _DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, _DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_value, method);
}
int32_t _get_PropertyAsDateTime_Invoke_mA2C0617434B9B1ACFFE91BA252E501707887E797_OpenStaticInvoker(_get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0* __this, intptr_t ___0_thisPtr, _DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1* ___1_value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, _DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_thisPtr, ___1_value);
}
int32_t _get_PropertyAsDateTime_Invoke_mA2C0617434B9B1ACFFE91BA252E501707887E797_ClosedStaticInvoker(_get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0* __this, intptr_t ___0_thisPtr, _DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1* ___1_value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, _DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_thisPtr, ___1_value);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0 (_get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0* __this, intptr_t ___0_thisPtr, _DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, _DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_thisPtr, ___1_value);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsDateTime::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsDateTime__ctor_mF38D67A0EAC98055465EC05E64295112579E6B0A (_get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsDateTime_Invoke_mA2C0617434B9B1ACFFE91BA252E501707887E797_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsDateTime_Invoke_mA2C0617434B9B1ACFFE91BA252E501707887E797_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsDateTime_Invoke_mA2C0617434B9B1ACFFE91BA252E501707887E797_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_get_PropertyAsDateTime_Invoke_mA2C0617434B9B1ACFFE91BA252E501707887E797_Multicast;
}
// System.Int32 WinRT.Interop._get_PropertyAsDateTime::Invoke(System.IntPtr,WinRT.Interop._DateTime*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsDateTime_Invoke_mA2C0617434B9B1ACFFE91BA252E501707887E797 (_get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0* __this, intptr_t ___0_thisPtr, _DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1* ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, _DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _get_PropertyAsTimeSpan_Invoke_m261D4196ED502A92C7F47DC64DB7E73ED8A8057C_Multicast(_get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21* __this, intptr_t ___0_thisPtr, _TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21* currentDelegate = reinterpret_cast<_get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, _TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _get_PropertyAsTimeSpan_Invoke_m261D4196ED502A92C7F47DC64DB7E73ED8A8057C_OpenInst(_get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21* __this, intptr_t ___0_thisPtr, _TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, _TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_value, method);
}
int32_t _get_PropertyAsTimeSpan_Invoke_m261D4196ED502A92C7F47DC64DB7E73ED8A8057C_OpenStatic(_get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21* __this, intptr_t ___0_thisPtr, _TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, _TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_value, method);
}
int32_t _get_PropertyAsTimeSpan_Invoke_m261D4196ED502A92C7F47DC64DB7E73ED8A8057C_OpenStaticInvoker(_get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21* __this, intptr_t ___0_thisPtr, _TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A* ___1_value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, _TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_thisPtr, ___1_value);
}
int32_t _get_PropertyAsTimeSpan_Invoke_m261D4196ED502A92C7F47DC64DB7E73ED8A8057C_ClosedStaticInvoker(_get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21* __this, intptr_t ___0_thisPtr, _TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A* ___1_value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, _TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_thisPtr, ___1_value);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21 (_get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21* __this, intptr_t ___0_thisPtr, _TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A* ___1_value, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, _TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_thisPtr, ___1_value);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsTimeSpan::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsTimeSpan__ctor_m88DF96C6D3669A7741E1E9E68C1392251F3916F9 (_get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsTimeSpan_Invoke_m261D4196ED502A92C7F47DC64DB7E73ED8A8057C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsTimeSpan_Invoke_m261D4196ED502A92C7F47DC64DB7E73ED8A8057C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsTimeSpan_Invoke_m261D4196ED502A92C7F47DC64DB7E73ED8A8057C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_get_PropertyAsTimeSpan_Invoke_m261D4196ED502A92C7F47DC64DB7E73ED8A8057C_Multicast;
}
// System.Int32 WinRT.Interop._get_PropertyAsTimeSpan::Invoke(System.IntPtr,WinRT.Interop._TimeSpan*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsTimeSpan_Invoke_m261D4196ED502A92C7F47DC64DB7E73ED8A8057C (_get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21* __this, intptr_t ___0_thisPtr, _TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A* ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, _TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _add_EventHandler_Invoke_m2B4410A2BA8461E52E26C25FF449BBEDF9838A90_Multicast(_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* __this, intptr_t ___0_thisPtr, intptr_t ___1_handler, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30* ___2_token, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* currentDelegate = reinterpret_cast<_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_thisPtr, ___1_handler, ___2_token, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _add_EventHandler_Invoke_m2B4410A2BA8461E52E26C25FF449BBEDF9838A90_OpenInst(_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* __this, intptr_t ___0_thisPtr, intptr_t ___1_handler, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30* ___2_token, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_handler, ___2_token, method);
}
int32_t _add_EventHandler_Invoke_m2B4410A2BA8461E52E26C25FF449BBEDF9838A90_OpenStatic(_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* __this, intptr_t ___0_thisPtr, intptr_t ___1_handler, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30* ___2_token, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_handler, ___2_token, method);
}
int32_t _add_EventHandler_Invoke_m2B4410A2BA8461E52E26C25FF449BBEDF9838A90_OpenStaticInvoker(_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* __this, intptr_t ___0_thisPtr, intptr_t ___1_handler, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30* ___2_token, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, intptr_t, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_thisPtr, ___1_handler, ___2_token);
}
int32_t _add_EventHandler_Invoke_m2B4410A2BA8461E52E26C25FF449BBEDF9838A90_ClosedStaticInvoker(_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* __this, intptr_t ___0_thisPtr, intptr_t ___1_handler, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30* ___2_token, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, intptr_t, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_thisPtr, ___1_handler, ___2_token);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D (_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* __this, intptr_t ___0_thisPtr, intptr_t ___1_handler, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30* ___2_token, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_thisPtr, ___1_handler, ___2_token);

	return returnValue;
}
// System.Void WinRT.Interop._add_EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _add_EventHandler__ctor_m8D9FE546601D9D9F8D607C9E7247C3C4C78C8C63 (_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_add_EventHandler_Invoke_m2B4410A2BA8461E52E26C25FF449BBEDF9838A90_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_add_EventHandler_Invoke_m2B4410A2BA8461E52E26C25FF449BBEDF9838A90_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_add_EventHandler_Invoke_m2B4410A2BA8461E52E26C25FF449BBEDF9838A90_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_add_EventHandler_Invoke_m2B4410A2BA8461E52E26C25FF449BBEDF9838A90_Multicast;
}
// System.Int32 WinRT.Interop._add_EventHandler::Invoke(System.IntPtr,System.IntPtr,WinRT.Interop.EventRegistrationToken*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _add_EventHandler_Invoke_m2B4410A2BA8461E52E26C25FF449BBEDF9838A90 (_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* __this, intptr_t ___0_thisPtr, intptr_t ___1_handler, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30* ___2_token, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_handler, ___2_token, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _remove_EventHandler_Invoke_mCF2DDE9729B9B1D6E08E7F944CBA0535FD9362F5_Multicast(_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* __this, intptr_t ___0_thisPtr, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30 ___1_token, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* currentDelegate = reinterpret_cast<_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_thisPtr, ___1_token, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _remove_EventHandler_Invoke_mCF2DDE9729B9B1D6E08E7F944CBA0535FD9362F5_OpenInst(_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* __this, intptr_t ___0_thisPtr, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30 ___1_token, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_token, method);
}
int32_t _remove_EventHandler_Invoke_mCF2DDE9729B9B1D6E08E7F944CBA0535FD9362F5_OpenStatic(_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* __this, intptr_t ___0_thisPtr, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30 ___1_token, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_token, method);
}
int32_t _remove_EventHandler_Invoke_mCF2DDE9729B9B1D6E08E7F944CBA0535FD9362F5_OpenStaticInvoker(_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* __this, intptr_t ___0_thisPtr, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30 ___1_token, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_thisPtr, ___1_token);
}
int32_t _remove_EventHandler_Invoke_mCF2DDE9729B9B1D6E08E7F944CBA0535FD9362F5_ClosedStaticInvoker(_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* __this, intptr_t ___0_thisPtr, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30 ___1_token, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_thisPtr, ___1_token);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0 (_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* __this, intptr_t ___0_thisPtr, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30 ___1_token, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_thisPtr, ___1_token);

	return returnValue;
}
// System.Void WinRT.Interop._remove_EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _remove_EventHandler__ctor_m73CACB3F3E54260F2F673D50AB32E4298EEDBB25 (_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_remove_EventHandler_Invoke_mCF2DDE9729B9B1D6E08E7F944CBA0535FD9362F5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_remove_EventHandler_Invoke_mCF2DDE9729B9B1D6E08E7F944CBA0535FD9362F5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_remove_EventHandler_Invoke_mCF2DDE9729B9B1D6E08E7F944CBA0535FD9362F5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_remove_EventHandler_Invoke_mCF2DDE9729B9B1D6E08E7F944CBA0535FD9362F5_Multicast;
}
// System.Int32 WinRT.Interop._remove_EventHandler::Invoke(System.IntPtr,WinRT.Interop.EventRegistrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _remove_EventHandler_Invoke_mCF2DDE9729B9B1D6E08E7F944CBA0535FD9362F5 (_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* __this, intptr_t ___0_thisPtr, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30 ___1_token, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, EventRegistrationToken_t01036D4642C09A962924ABB288269D0314BB2D30, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_token, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _method0_Invoke_m3E45C34949E1CF01A32DFF9715BE0D1D3541408B_Multicast(_method0_tED7C943BF18C50F2E18BDD75577047424BD63602* __this, intptr_t ___0_thisPtr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_method0_tED7C943BF18C50F2E18BDD75577047424BD63602* currentDelegate = reinterpret_cast<_method0_tED7C943BF18C50F2E18BDD75577047424BD63602*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_thisPtr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _method0_Invoke_m3E45C34949E1CF01A32DFF9715BE0D1D3541408B_OpenInst(_method0_tED7C943BF18C50F2E18BDD75577047424BD63602* __this, intptr_t ___0_thisPtr, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, method);
}
int32_t _method0_Invoke_m3E45C34949E1CF01A32DFF9715BE0D1D3541408B_OpenStatic(_method0_tED7C943BF18C50F2E18BDD75577047424BD63602* __this, intptr_t ___0_thisPtr, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, method);
}
int32_t _method0_Invoke_m3E45C34949E1CF01A32DFF9715BE0D1D3541408B_OpenStaticInvoker(_method0_tED7C943BF18C50F2E18BDD75577047424BD63602* __this, intptr_t ___0_thisPtr, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_thisPtr);
}
int32_t _method0_Invoke_m3E45C34949E1CF01A32DFF9715BE0D1D3541408B_ClosedStaticInvoker(_method0_tED7C943BF18C50F2E18BDD75577047424BD63602* __this, intptr_t ___0_thisPtr, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_thisPtr);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__method0_tED7C943BF18C50F2E18BDD75577047424BD63602 (_method0_tED7C943BF18C50F2E18BDD75577047424BD63602* __this, intptr_t ___0_thisPtr, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_thisPtr);

	return returnValue;
}
// System.Void WinRT.Interop._method0::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _method0__ctor_m0EBB46824C5CEEBB4B783AEBF084AE2E7EC0FB18 (_method0_tED7C943BF18C50F2E18BDD75577047424BD63602* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&_method0_Invoke_m3E45C34949E1CF01A32DFF9715BE0D1D3541408B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_method0_Invoke_m3E45C34949E1CF01A32DFF9715BE0D1D3541408B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_method0_Invoke_m3E45C34949E1CF01A32DFF9715BE0D1D3541408B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_method0_Invoke_m3E45C34949E1CF01A32DFF9715BE0D1D3541408B_Multicast;
}
// System.Int32 WinRT.Interop._method0::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _method0_Invoke_m3E45C34949E1CF01A32DFF9715BE0D1D3541408B (_method0_tED7C943BF18C50F2E18BDD75577047424BD63602* __this, intptr_t ___0_thisPtr, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
int32_t IDelegate2_Obj_Obj_Invoke_m208D06CEA3897D3994E80CD939AF893C7E611C5B_Multicast(IDelegate2_Obj_Obj_t66149A37DDD95F736A19120D62BD83A3E5FD39CA* __this, intptr_t ___0_thisPtr, intptr_t ___1_arg1, intptr_t ___2_arg2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		IDelegate2_Obj_Obj_t66149A37DDD95F736A19120D62BD83A3E5FD39CA* currentDelegate = reinterpret_cast<IDelegate2_Obj_Obj_t66149A37DDD95F736A19120D62BD83A3E5FD39CA*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_thisPtr, ___1_arg1, ___2_arg2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t IDelegate2_Obj_Obj_Invoke_m208D06CEA3897D3994E80CD939AF893C7E611C5B_OpenInst(IDelegate2_Obj_Obj_t66149A37DDD95F736A19120D62BD83A3E5FD39CA* __this, intptr_t ___0_thisPtr, intptr_t ___1_arg1, intptr_t ___2_arg2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_arg1, ___2_arg2, method);
}
int32_t IDelegate2_Obj_Obj_Invoke_m208D06CEA3897D3994E80CD939AF893C7E611C5B_OpenStatic(IDelegate2_Obj_Obj_t66149A37DDD95F736A19120D62BD83A3E5FD39CA* __this, intptr_t ___0_thisPtr, intptr_t ___1_arg1, intptr_t ___2_arg2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_arg1, ___2_arg2, method);
}
int32_t IDelegate2_Obj_Obj_Invoke_m208D06CEA3897D3994E80CD939AF893C7E611C5B_OpenStaticInvoker(IDelegate2_Obj_Obj_t66149A37DDD95F736A19120D62BD83A3E5FD39CA* __this, intptr_t ___0_thisPtr, intptr_t ___1_arg1, intptr_t ___2_arg2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_thisPtr, ___1_arg1, ___2_arg2);
}
int32_t IDelegate2_Obj_Obj_Invoke_m208D06CEA3897D3994E80CD939AF893C7E611C5B_ClosedStaticInvoker(IDelegate2_Obj_Obj_t66149A37DDD95F736A19120D62BD83A3E5FD39CA* __this, intptr_t ___0_thisPtr, intptr_t ___1_arg1, intptr_t ___2_arg2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_thisPtr, ___1_arg1, ___2_arg2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_IDelegate2_Obj_Obj_t66149A37DDD95F736A19120D62BD83A3E5FD39CA (IDelegate2_Obj_Obj_t66149A37DDD95F736A19120D62BD83A3E5FD39CA* __this, intptr_t ___0_thisPtr, intptr_t ___1_arg1, intptr_t ___2_arg2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_thisPtr, ___1_arg1, ___2_arg2);

	return returnValue;
}
// System.Void WinRT.Interop.IDelegate2_Obj_Obj::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDelegate2_Obj_Obj__ctor_m251014F4A691E0ECA078746FEC6F722A79B0B960 (IDelegate2_Obj_Obj_t66149A37DDD95F736A19120D62BD83A3E5FD39CA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IDelegate2_Obj_Obj_Invoke_m208D06CEA3897D3994E80CD939AF893C7E611C5B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&IDelegate2_Obj_Obj_Invoke_m208D06CEA3897D3994E80CD939AF893C7E611C5B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IDelegate2_Obj_Obj_Invoke_m208D06CEA3897D3994E80CD939AF893C7E611C5B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&IDelegate2_Obj_Obj_Invoke_m208D06CEA3897D3994E80CD939AF893C7E611C5B_Multicast;
}
// System.Int32 WinRT.Interop.IDelegate2_Obj_Obj::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IDelegate2_Obj_Obj_Invoke_m208D06CEA3897D3994E80CD939AF893C7E611C5B (IDelegate2_Obj_Obj_t66149A37DDD95F736A19120D62BD83A3E5FD39CA* __this, intptr_t ___0_thisPtr, intptr_t ___1_arg1, intptr_t ___2_arg2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_arg1, ___2_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t IDelegate2_Obj_Enum_Invoke_mB1A3E064015756E29D4F3ED9A9D2E1667C79C420_Multicast(IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30* __this, intptr_t ___0_thisPtr, intptr_t ___1_arg1, int32_t ___2_arg2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30* currentDelegate = reinterpret_cast<IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_thisPtr, ___1_arg1, ___2_arg2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t IDelegate2_Obj_Enum_Invoke_mB1A3E064015756E29D4F3ED9A9D2E1667C79C420_OpenInst(IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30* __this, intptr_t ___0_thisPtr, intptr_t ___1_arg1, int32_t ___2_arg2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_arg1, ___2_arg2, method);
}
int32_t IDelegate2_Obj_Enum_Invoke_mB1A3E064015756E29D4F3ED9A9D2E1667C79C420_OpenStatic(IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30* __this, intptr_t ___0_thisPtr, intptr_t ___1_arg1, int32_t ___2_arg2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_arg1, ___2_arg2, method);
}
int32_t IDelegate2_Obj_Enum_Invoke_mB1A3E064015756E29D4F3ED9A9D2E1667C79C420_OpenStaticInvoker(IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30* __this, intptr_t ___0_thisPtr, intptr_t ___1_arg1, int32_t ___2_arg2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, intptr_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_thisPtr, ___1_arg1, ___2_arg2);
}
int32_t IDelegate2_Obj_Enum_Invoke_mB1A3E064015756E29D4F3ED9A9D2E1667C79C420_ClosedStaticInvoker(IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30* __this, intptr_t ___0_thisPtr, intptr_t ___1_arg1, int32_t ___2_arg2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, intptr_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_thisPtr, ___1_arg1, ___2_arg2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30 (IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30* __this, intptr_t ___0_thisPtr, intptr_t ___1_arg1, int32_t ___2_arg2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_thisPtr, ___1_arg1, ___2_arg2);

	return returnValue;
}
// System.Void WinRT.Interop.IDelegate2_Obj_Enum::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDelegate2_Obj_Enum__ctor_mE596078AE966EF82CA23F63BF0E6B956CEA2B716 (IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IDelegate2_Obj_Enum_Invoke_mB1A3E064015756E29D4F3ED9A9D2E1667C79C420_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&IDelegate2_Obj_Enum_Invoke_mB1A3E064015756E29D4F3ED9A9D2E1667C79C420_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IDelegate2_Obj_Enum_Invoke_mB1A3E064015756E29D4F3ED9A9D2E1667C79C420_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&IDelegate2_Obj_Enum_Invoke_mB1A3E064015756E29D4F3ED9A9D2E1667C79C420_Multicast;
}
// System.Int32 WinRT.Interop.IDelegate2_Obj_Enum::Invoke(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IDelegate2_Obj_Enum_Invoke_mB1A3E064015756E29D4F3ED9A9D2E1667C79C420 (IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30* __this, intptr_t ___0_thisPtr, intptr_t ___1_arg1, int32_t ___2_arg2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_arg1, ___2_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
// WinRT.Interop.IAsyncInfo WinRT.Interop.IAsyncInfo::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IAsyncInfo_t90E25D767953743ED58A5F7326524116BC5BB9D2* IAsyncInfo_op_Implicit_mACFC6E333D297A28D39A76947E01B2F062705209 (IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjectReference_As_TisVftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_m783D62D813E4D899F27B9660BAD0E2063D174710_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38* L_0 = ___0_obj;
		NullCheck(L_0);
		ObjectReference_1_tD121C03E6E8107C35A4B7717FA7FFEFA92485DC5* L_1;
		L_1 = IObjectReference_As_TisVftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_m783D62D813E4D899F27B9660BAD0E2063D174710(L_0, IObjectReference_As_TisVftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_m783D62D813E4D899F27B9660BAD0E2063D174710_RuntimeMethod_var);
		IAsyncInfo_t90E25D767953743ED58A5F7326524116BC5BB9D2* L_2;
		L_2 = IAsyncInfo_op_Implicit_m70C63B7B65337634F32FFBC2C2E9C053023FE5E6(L_1, NULL);
		return L_2;
	}
}
// WinRT.Interop.IAsyncInfo WinRT.Interop.IAsyncInfo::op_Implicit(WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IAsyncInfo_t90E25D767953743ED58A5F7326524116BC5BB9D2* IAsyncInfo_op_Implicit_m70C63B7B65337634F32FFBC2C2E9C053023FE5E6 (ObjectReference_1_tD121C03E6E8107C35A4B7717FA7FFEFA92485DC5* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncInfo_t90E25D767953743ED58A5F7326524116BC5BB9D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tD121C03E6E8107C35A4B7717FA7FFEFA92485DC5* L_0 = ___0_obj;
		IAsyncInfo_t90E25D767953743ED58A5F7326524116BC5BB9D2* L_1 = (IAsyncInfo_t90E25D767953743ED58A5F7326524116BC5BB9D2*)il2cpp_codegen_object_new(IAsyncInfo_t90E25D767953743ED58A5F7326524116BC5BB9D2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IAsyncInfo__ctor_m1C56E6A444E93E2AA9FE173DB6D968FAE5AB60C9(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void WinRT.Interop.IAsyncInfo::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncInfo__ctor_m1C56E6A444E93E2AA9FE173DB6D968FAE5AB60C9 (IAsyncInfo_t90E25D767953743ED58A5F7326524116BC5BB9D2* __this, ObjectReference_1_tD121C03E6E8107C35A4B7717FA7FFEFA92485DC5* ___0_obj, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectReference_1_tD121C03E6E8107C35A4B7717FA7FFEFA92485DC5* L_0 = ___0_obj;
		__this->____obj_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_0), (void*)L_0);
		return;
	}
}
// System.Exception WinRT.Interop.IAsyncInfo::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* IAsyncInfo_get_ErrorCode_m2E61E899DEB288052672FC0162A7DE115AF9FDE5 (IAsyncInfo_t90E25D767953743ED58A5F7326524116BC5BB9D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ObjectReference_1_tD121C03E6E8107C35A4B7717FA7FFEFA92485DC5* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8* L_1 = (Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8*)(&L_0->___Vftbl_4);
		_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95* L_2 = L_1->___get_ErrorCode_3;
		ObjectReference_1_tD121C03E6E8107C35A4B7717FA7FFEFA92485DC5* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*)L_3)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsInt_Invoke_m679CBE2F073B7A4ABA3F9EDD44EA3D7F5F83F87A_inline(L_2, L_4, (int32_t*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_5, NULL);
		int32_t L_6 = V_0;
		Exception_t* L_7;
		L_7 = Marshal_GetExceptionForHR_mD1E6D5EA515D4178BACCF0CF16331FA0FC6652D8(L_6, NULL);
		return L_7;
	}
}
// System.Void WinRT.Interop.IAsyncInfo::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncInfo_Cancel_m79FF5FCC9CDCDEF3C8172B796C38BE6741ED045A (IAsyncInfo_t90E25D767953743ED58A5F7326524116BC5BB9D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tD121C03E6E8107C35A4B7717FA7FFEFA92485DC5* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8* L_1 = (Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8*)(&L_0->___Vftbl_4);
		_method0_tED7C943BF18C50F2E18BDD75577047424BD63602* L_2 = L_1->___Cancel_4;
		ObjectReference_1_tD121C03E6E8107C35A4B7717FA7FFEFA92485DC5* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*)L_3)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _method0_Invoke_m3E45C34949E1CF01A32DFF9715BE0D1D3541408B_inline(L_2, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_5, NULL);
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


// Conversion methods for marshalling of: WinRT.Interop.IAsyncInfo/Vftbl
IL2CPP_EXTERN_C void Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_marshal_pinvoke(const Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8& unmarshaled, Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_Id_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Id_1));
	marshaled.___get_Status_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Status_2));
	marshaled.___get_ErrorCode_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_ErrorCode_3));
	marshaled.___Cancel_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Cancel_4));
	marshaled.___Close_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Close_5));
}
IL2CPP_EXTERN_C void Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_marshal_pinvoke_back(const Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_marshaled_pinvoke& marshaled, Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_Id_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95>(marshaled.___get_Id_1, _get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Id_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95>(marshaled.___get_Id_1, _get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95_il2cpp_TypeInfo_var));
	unmarshaled.___get_Status_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0>(marshaled.___get_Status_2, _get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Status_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0>(marshaled.___get_Status_2, _get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0_il2cpp_TypeInfo_var));
	unmarshaled.___get_ErrorCode_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95>(marshaled.___get_ErrorCode_3, _get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_ErrorCode_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95>(marshaled.___get_ErrorCode_3, _get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95_il2cpp_TypeInfo_var));
	unmarshaled.___Cancel_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_tED7C943BF18C50F2E18BDD75577047424BD63602>(marshaled.___Cancel_4, _method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Cancel_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_tED7C943BF18C50F2E18BDD75577047424BD63602>(marshaled.___Cancel_4, _method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var));
	unmarshaled.___Close_5 = il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_tED7C943BF18C50F2E18BDD75577047424BD63602>(marshaled.___Close_5, _method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Close_5), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_tED7C943BF18C50F2E18BDD75577047424BD63602>(marshaled.___Close_5, _method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IAsyncInfo/Vftbl
IL2CPP_EXTERN_C void Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_marshal_pinvoke_cleanup(Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IAsyncInfo/Vftbl
IL2CPP_EXTERN_C void Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_marshal_com(const Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8& unmarshaled, Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_marshaled_com& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_Id_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Id_1));
	marshaled.___get_Status_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Status_2));
	marshaled.___get_ErrorCode_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_ErrorCode_3));
	marshaled.___Cancel_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Cancel_4));
	marshaled.___Close_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Close_5));
}
IL2CPP_EXTERN_C void Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_marshal_com_back(const Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_marshaled_com& marshaled, Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_Id_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95>(marshaled.___get_Id_1, _get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Id_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95>(marshaled.___get_Id_1, _get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95_il2cpp_TypeInfo_var));
	unmarshaled.___get_Status_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0>(marshaled.___get_Status_2, _get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Status_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0>(marshaled.___get_Status_2, _get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0_il2cpp_TypeInfo_var));
	unmarshaled.___get_ErrorCode_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95>(marshaled.___get_ErrorCode_3, _get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_ErrorCode_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95>(marshaled.___get_ErrorCode_3, _get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95_il2cpp_TypeInfo_var));
	unmarshaled.___Cancel_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_tED7C943BF18C50F2E18BDD75577047424BD63602>(marshaled.___Cancel_4, _method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Cancel_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_tED7C943BF18C50F2E18BDD75577047424BD63602>(marshaled.___Cancel_4, _method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var));
	unmarshaled.___Close_5 = il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_tED7C943BF18C50F2E18BDD75577047424BD63602>(marshaled.___Close_5, _method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Close_5), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_tED7C943BF18C50F2E18BDD75577047424BD63602>(marshaled.___Close_5, _method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IAsyncInfo/Vftbl
IL2CPP_EXTERN_C void Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_marshal_com_cleanup(Vftbl_tC2F8C3B3D5E3B7DE903D2D1CD4B9BD23946EA6C8_marshaled_com& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_IAsyncOperation__OnCompleted_m1BA76E56DCB467FB2FF3057B15964CD8948DFA77(intptr_t ___0_thisPtr, intptr_t ___1_operationPtr, int32_t ___2_status)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = IAsyncOperation__OnCompleted_m1BA76E56DCB467FB2FF3057B15964CD8948DFA77(___0_thisPtr, ___1_operationPtr, ___2_status, NULL);

	return returnValue;
}
// System.Void WinRT.Interop.IAsyncOperation::.ctor(System.Guid,WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncOperation__ctor_mF73048668ACF47D019CD00AA54E2C9A7C0736D6A (IAsyncOperation_tA0BCF6F0668C9A832BFD02DE1A0F08CE40A7FAED* __this, Guid_t ___0_iid, ObjectReference_1_t81B67CD294B31DA00DA91F177EFC7632539F4DBF* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateProperty_1__ctor_m3913119D72ACBD0391B8B0D6E4F288C171DACFD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateProperty_1_t1C6E81A9EDE98BE96F54144C8497B203A9DA4AD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tA0BCF6F0668C9A832BFD02DE1A0F08CE40A7FAED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_TisIDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30_m8FC9BCAAEA572E4003051DDF22D29FA820991E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectReference_1_t81B67CD294B31DA00DA91F177EFC7632539F4DBF* L_0 = ___1_obj;
		__this->____obj_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_0), (void*)L_0);
		Guid_t L_1 = ___0_iid;
		ObjectReference_1_t81B67CD294B31DA00DA91F177EFC7632539F4DBF* L_2 = __this->____obj_0;
		ObjectReference_1_t81B67CD294B31DA00DA91F177EFC7632539F4DBF* L_3 = __this->____obj_0;
		NullCheck(L_3);
		Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756* L_4 = (Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756*)(&L_3->___Vftbl_4);
		_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* L_5 = L_4->___get_Completed_2;
		ObjectReference_1_t81B67CD294B31DA00DA91F177EFC7632539F4DBF* L_6 = __this->____obj_0;
		NullCheck(L_6);
		Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756* L_7 = (Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756*)(&L_6->___Vftbl_4);
		_put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A* L_8 = L_7->___put_Completed_1;
		il2cpp_codegen_runtime_class_init_inline(IAsyncOperation_tA0BCF6F0668C9A832BFD02DE1A0F08CE40A7FAED_il2cpp_TypeInfo_var);
		IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30* L_9 = ((IAsyncOperation_tA0BCF6F0668C9A832BFD02DE1A0F08CE40A7FAED_StaticFields*)il2cpp_codegen_static_fields_for(IAsyncOperation_tA0BCF6F0668C9A832BFD02DE1A0F08CE40A7FAED_il2cpp_TypeInfo_var))->____OnCompletedDelegate_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_10;
		L_10 = Marshal_GetFunctionPointerForDelegate_TisIDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30_m8FC9BCAAEA572E4003051DDF22D29FA820991E5F(L_9, Marshal_GetFunctionPointerForDelegate_TisIDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30_m8FC9BCAAEA572E4003051DDF22D29FA820991E5F_RuntimeMethod_var);
		DelegateProperty_1_t1C6E81A9EDE98BE96F54144C8497B203A9DA4AD9* L_11 = (DelegateProperty_1_t1C6E81A9EDE98BE96F54144C8497B203A9DA4AD9*)il2cpp_codegen_object_new(DelegateProperty_1_t1C6E81A9EDE98BE96F54144C8497B203A9DA4AD9_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		DelegateProperty_1__ctor_m3913119D72ACBD0391B8B0D6E4F288C171DACFD9(L_11, L_1, L_2, L_5, L_8, L_10, DelegateProperty_1__ctor_m3913119D72ACBD0391B8B0D6E4F288C171DACFD9_RuntimeMethod_var);
		__this->____Completed_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Completed_2), (void*)L_11);
		return;
	}
}
// System.Int32 WinRT.Interop.IAsyncOperation::_OnCompleted(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAsyncOperation__OnCompleted_m1BA76E56DCB467FB2FF3057B15964CD8948DFA77 (intptr_t ___0_thisPtr, intptr_t ___1_operationPtr, int32_t ___2_status, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE294E9648C5B0ECD47391E217DFB6319AF245983_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_MarshalInvoke_TisCompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3_m3589B54C241B795F43BC2B39F6642B1AF385FC36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3C_OnCompletedU3Eb__0_mF486F64E32462372F1DA88BD235E69170C1B9FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tC3E072A3170990CD124C7969CF7191A9FE02673D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tC3E072A3170990CD124C7969CF7191A9FE02673D* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tC3E072A3170990CD124C7969CF7191A9FE02673D* L_0 = (U3CU3Ec__DisplayClass4_0_tC3E072A3170990CD124C7969CF7191A9FE02673D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tC3E072A3170990CD124C7969CF7191A9FE02673D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_mFE3357DC586EC96FFFFDC627C4ADE44CCE3F28E2(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tC3E072A3170990CD124C7969CF7191A9FE02673D* L_1 = V_0;
		int32_t L_2 = ___2_status;
		NullCheck(L_1);
		L_1->___status_0 = L_2;
		intptr_t L_3 = ___0_thisPtr;
		U3CU3Ec__DisplayClass4_0_tC3E072A3170990CD124C7969CF7191A9FE02673D* L_4 = V_0;
		Action_1_tE294E9648C5B0ECD47391E217DFB6319AF245983* L_5 = (Action_1_tE294E9648C5B0ECD47391E217DFB6319AF245983*)il2cpp_codegen_object_new(Action_1_tE294E9648C5B0ECD47391E217DFB6319AF245983_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m4E6FCF15A5587CCE7C7B23DABDFB7398232439FC(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3C_OnCompletedU3Eb__0_mF486F64E32462372F1DA88BD235E69170C1B9FDA_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Delegate_t5B12157F199B8BAAE65F1E3A1C41DAA23E5A9F13_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Delegate_MarshalInvoke_TisCompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3_m3589B54C241B795F43BC2B39F6642B1AF385FC36(L_3, L_5, Delegate_MarshalInvoke_TisCompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3_m3589B54C241B795F43BC2B39F6642B1AF385FC36_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void WinRT.Interop.IAsyncOperation::set_Completed(WinRT.Interop.IAsyncOperation/CompletedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncOperation_set_Completed_m245B9D382EB7050C916F3648388432197203CCB1 (IAsyncOperation_tA0BCF6F0668C9A832BFD02DE1A0F08CE40A7FAED* __this, CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateProperty_1_set_Value_m2E87DBBBA2DA631F1A570F422CA836C68E7F29E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DelegateProperty_1_t1C6E81A9EDE98BE96F54144C8497B203A9DA4AD9* L_0 = __this->____Completed_2;
		CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3* L_1 = ___0_value;
		NullCheck(L_0);
		DelegateProperty_1_set_Value_m2E87DBBBA2DA631F1A570F422CA836C68E7F29E5(L_0, L_1, DelegateProperty_1_set_Value_m2E87DBBBA2DA631F1A570F422CA836C68E7F29E5_RuntimeMethod_var);
		return;
	}
}
// System.Void WinRT.Interop.IAsyncOperation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncOperation__cctor_m498A8BCCD2712F2E8BB21E1E3112BCDAE185BDAF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation__OnCompleted_m1BA76E56DCB467FB2FF3057B15964CD8948DFA77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tA0BCF6F0668C9A832BFD02DE1A0F08CE40A7FAED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30* L_0 = (IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30*)il2cpp_codegen_object_new(IDelegate2_Obj_Enum_t3C3E5914CEDEC8C40A9DB75D83C7CAEF22032D30_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		IDelegate2_Obj_Enum__ctor_mE596078AE966EF82CA23F63BF0E6B956CEA2B716(L_0, NULL, (intptr_t)((void*)IAsyncOperation__OnCompleted_m1BA76E56DCB467FB2FF3057B15964CD8948DFA77_RuntimeMethod_var), NULL);
		((IAsyncOperation_tA0BCF6F0668C9A832BFD02DE1A0F08CE40A7FAED_StaticFields*)il2cpp_codegen_static_fields_for(IAsyncOperation_tA0BCF6F0668C9A832BFD02DE1A0F08CE40A7FAED_il2cpp_TypeInfo_var))->____OnCompletedDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((IAsyncOperation_tA0BCF6F0668C9A832BFD02DE1A0F08CE40A7FAED_StaticFields*)il2cpp_codegen_static_fields_for(IAsyncOperation_tA0BCF6F0668C9A832BFD02DE1A0F08CE40A7FAED_il2cpp_TypeInfo_var))->____OnCompletedDelegate_1), (void*)L_0);
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


// Conversion methods for marshalling of: WinRT.Interop.IAsyncOperation/Vftbl
IL2CPP_EXTERN_C void Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756_marshal_pinvoke(const Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756& unmarshaled, Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___put_Completed_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___put_Completed_1));
	marshaled.___get_Completed_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Completed_2));
	marshaled.___GetResults_3 = unmarshaled.___GetResults_3;
}
IL2CPP_EXTERN_C void Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756_marshal_pinvoke_back(const Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756_marshaled_pinvoke& marshaled, Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___put_Completed_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A>(marshaled.___put_Completed_1, _put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___put_Completed_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A>(marshaled.___put_Completed_1, _put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A_il2cpp_TypeInfo_var));
	unmarshaled.___get_Completed_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___get_Completed_2, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Completed_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___get_Completed_2, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var));
	intptr_t unmarshaledGetResults_temp_3;
	memset((&unmarshaledGetResults_temp_3), 0, sizeof(unmarshaledGetResults_temp_3));
	unmarshaledGetResults_temp_3 = marshaled.___GetResults_3;
	unmarshaled.___GetResults_3 = unmarshaledGetResults_temp_3;
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IAsyncOperation/Vftbl
IL2CPP_EXTERN_C void Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756_marshal_pinvoke_cleanup(Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IAsyncOperation/Vftbl
IL2CPP_EXTERN_C void Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756_marshal_com(const Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756& unmarshaled, Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756_marshaled_com& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___put_Completed_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___put_Completed_1));
	marshaled.___get_Completed_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Completed_2));
	marshaled.___GetResults_3 = unmarshaled.___GetResults_3;
}
IL2CPP_EXTERN_C void Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756_marshal_com_back(const Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756_marshaled_com& marshaled, Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___put_Completed_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A>(marshaled.___put_Completed_1, _put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___put_Completed_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A>(marshaled.___put_Completed_1, _put_PropertyAsObject_t52D0580A174F15357A046ED00DC4EA6DF2886C6A_il2cpp_TypeInfo_var));
	unmarshaled.___get_Completed_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___get_Completed_2, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Completed_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___get_Completed_2, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var));
	intptr_t unmarshaledGetResults_temp_3;
	memset((&unmarshaledGetResults_temp_3), 0, sizeof(unmarshaledGetResults_temp_3));
	unmarshaledGetResults_temp_3 = marshaled.___GetResults_3;
	unmarshaled.___GetResults_3 = unmarshaledGetResults_temp_3;
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IAsyncOperation/Vftbl
IL2CPP_EXTERN_C void Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756_marshal_com_cleanup(Vftbl_tD9A073B01A9BC85ACA5A63DD75C3404193456756_marshaled_com& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void CompletedHandler_Invoke_m26544BD9DD9BAFBCBE56B9B02E75A7EF0951FEC2_Multicast(CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3* __this, int32_t ___0_status, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3* currentDelegate = reinterpret_cast<CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_status, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CompletedHandler_Invoke_m26544BD9DD9BAFBCBE56B9B02E75A7EF0951FEC2_OpenInst(CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3* __this, int32_t ___0_status, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_status, method);
}
void CompletedHandler_Invoke_m26544BD9DD9BAFBCBE56B9B02E75A7EF0951FEC2_OpenStatic(CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3* __this, int32_t ___0_status, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_status, method);
}
void CompletedHandler_Invoke_m26544BD9DD9BAFBCBE56B9B02E75A7EF0951FEC2_OpenStaticInvoker(CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3* __this, int32_t ___0_status, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_status);
}
void CompletedHandler_Invoke_m26544BD9DD9BAFBCBE56B9B02E75A7EF0951FEC2_ClosedStaticInvoker(CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3* __this, int32_t ___0_status, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_status);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3 (CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3* __this, int32_t ___0_status, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_status);

}
// System.Void WinRT.Interop.IAsyncOperation/CompletedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletedHandler__ctor_mE998DFAB1DA661221656ED046606AE63CFD08ECC (CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&CompletedHandler_Invoke_m26544BD9DD9BAFBCBE56B9B02E75A7EF0951FEC2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CompletedHandler_Invoke_m26544BD9DD9BAFBCBE56B9B02E75A7EF0951FEC2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CompletedHandler_Invoke_m26544BD9DD9BAFBCBE56B9B02E75A7EF0951FEC2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CompletedHandler_Invoke_m26544BD9DD9BAFBCBE56B9B02E75A7EF0951FEC2_Multicast;
}
// System.Void WinRT.Interop.IAsyncOperation/CompletedHandler::Invoke(WinRT.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletedHandler_Invoke_m26544BD9DD9BAFBCBE56B9B02E75A7EF0951FEC2 (CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3* __this, int32_t ___0_status, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_status, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WinRT.Interop.IAsyncOperation/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mFE3357DC586EC96FFFFDC627C4ADE44CCE3F28E2 (U3CU3Ec__DisplayClass4_0_tC3E072A3170990CD124C7969CF7191A9FE02673D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void WinRT.Interop.IAsyncOperation/<>c__DisplayClass4_0::<_OnCompleted>b__0(WinRT.Interop.IAsyncOperation/CompletedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3C_OnCompletedU3Eb__0_mF486F64E32462372F1DA88BD235E69170C1B9FDA (U3CU3Ec__DisplayClass4_0_tC3E072A3170990CD124C7969CF7191A9FE02673D* __this, CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3* ___0_handler, const RuntimeMethod* method) 
{
	{
		CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3* L_0 = ___0_handler;
		int32_t L_1 = __this->___status_0;
		NullCheck(L_0);
		CompletedHandler_Invoke_m26544BD9DD9BAFBCBE56B9B02E75A7EF0951FEC2_inline(L_0, L_1, NULL);
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
// Microsoft.MixedReality.QR.IQRCode Microsoft.MixedReality.QR.IQRCode::op_Implicit(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCode/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* IQRCode_op_Implicit_mA8EF56D9DF24D0D87C397BF80A875364F8833C04 (ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* L_0 = ___0_obj;
		IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* L_1 = (IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109*)il2cpp_codegen_object_new(IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IQRCode__ctor_m7F9C70A6003C5A7A6ED0C3EE7C20A717DECA0992(L_1, L_0, NULL);
		return L_1;
	}
}
// Microsoft.MixedReality.QR.QRCode Microsoft.MixedReality.QR.IQRCode::op_Implicit(Microsoft.MixedReality.QR.IQRCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* IQRCode_op_Implicit_m01FA2429F011ADB7C474A481B439585A69D4E15C (IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* ___0_code, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* L_0 = ___0_code;
		QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* L_1 = (QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32*)il2cpp_codegen_object_new(QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		QRCode__ctor_mF61F8CE1E8FBE4B9B69BB67ACBD9EB0DCE9FF3A6(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.QR.IQRCode::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCode/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IQRCode__ctor_m7F9C70A6003C5A7A6ED0C3EE7C20A717DECA0992 (IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* __this, ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* ___0_obj, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* L_0 = ___0_obj;
		__this->____obj_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_0), (void*)L_0);
		return;
	}
}
// System.Guid Microsoft.MixedReality.QR.IQRCode::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t IQRCode_get_Id_m4B54D0BFD68B696B80F5D43030F4EDECA0E07D15 (IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68* L_1 = (Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68*)(&L_0->___Vftbl_4);
		_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC* L_2 = L_1->___get_Id_1;
		ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*)L_3)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsGuid_Invoke_m467847EAC22FBDB64ABB5E393DF95CBE572AB412_inline(L_2, L_4, (Guid_t*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_5, NULL);
		Guid_t L_6 = V_0;
		return L_6;
	}
}
// System.Guid Microsoft.MixedReality.QR.IQRCode::get_SpatialGraphNodeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t IQRCode_get_SpatialGraphNodeId_mB1801D3DE23CF020EFFC53D7E8B561C186D2D837 (IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68* L_1 = (Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68*)(&L_0->___Vftbl_4);
		_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC* L_2 = L_1->___get_SpatialGraphNodeId_2;
		ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*)L_3)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsGuid_Invoke_m467847EAC22FBDB64ABB5E393DF95CBE572AB412_inline(L_2, L_4, (Guid_t*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_5, NULL);
		Guid_t L_6 = V_0;
		return L_6;
	}
}
// Microsoft.MixedReality.QR.QRVersion Microsoft.MixedReality.QR.IQRCode::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IQRCode_get_Version_mB77D51EDD56E773B5734E88FEDD7EDEB1BE8DDA2 (IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68* L_1 = (Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68*)(&L_0->___Vftbl_4);
		_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0* L_2 = L_1->___get_Version_3;
		ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*)L_3)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsEnum_Invoke_mE8CE6F279C8BC5A05626FD92DED2517E3C963E4A_inline(L_2, L_4, (int32_t*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_5, NULL);
		int32_t L_6 = V_0;
		return (int32_t)(L_6);
	}
}
// System.Single Microsoft.MixedReality.QR.IQRCode::get_PhysicalSideLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IQRCode_get_PhysicalSideLength_mBF586290F3B1F85B976CD37DF2BF85A95DB4940D (IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68* L_1 = (Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68*)(&L_0->___Vftbl_4);
		_get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86* L_2 = L_1->___get_PhysicalSideLength_4;
		ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*)L_3)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsFloat_Invoke_mCF17DCE8E61890D2D64F28D17BC869AD9386FF2F_inline(L_2, L_4, (float*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_5, NULL);
		float L_6 = V_0;
		return L_6;
	}
}
// System.String Microsoft.MixedReality.QR.IQRCode::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IQRCode_get_Data_mAF42D8CD2BA38C42C07F18357E87BEBD7CD3FB0B (IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HString_t734316CC9188B0454711CDE6F9D311FD99F46E54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	HString_t734316CC9188B0454711CDE6F9D311FD99F46E54* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68* L_1 = (Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68*)(&L_0->___Vftbl_4);
		_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* L_2 = L_1->___get_Data_7;
		ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*)L_3)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsObject_Invoke_mCCCAA1AC9BBC47B4AD5C79D0CE4B289E443D227A_inline(L_2, L_4, (intptr_t*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_5, NULL);
		HString_t734316CC9188B0454711CDE6F9D311FD99F46E54* L_6 = (HString_t734316CC9188B0454711CDE6F9D311FD99F46E54*)il2cpp_codegen_object_new(HString_t734316CC9188B0454711CDE6F9D311FD99F46E54_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		HString__ctor_m7CC40A4BCB0244E53D92015C1D94C97DDF918C8A(L_6, (&V_0), NULL);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				{
					HString_t734316CC9188B0454711CDE6F9D311FD99F46E54* L_7 = V_1;
					if (!L_7)
					{
						goto IL_0042;
					}
				}
				{
					HString_t734316CC9188B0454711CDE6F9D311FD99F46E54* L_8 = V_1;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0042:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			HString_t734316CC9188B0454711CDE6F9D311FD99F46E54* L_9 = V_1;
			NullCheck(L_9);
			String_t* L_10;
			L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
			V_2 = L_10;
			goto IL_0043;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		String_t* L_11 = V_2;
		return L_11;
	}
}
// System.TimeSpan Microsoft.MixedReality.QR.IQRCode::get_SystemRelativeLastDetectedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A IQRCode_get_SystemRelativeLastDetectedTime_m550DA8A6BFD8BF1E7E4AE5AB59D09453B134C202 (IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	_TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68* L_1 = (Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68*)(&L_0->___Vftbl_4);
		_get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21* L_2 = L_1->___get_SystemRelativeLastDetectedTime_5;
		ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*)L_3)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsTimeSpan_Invoke_m261D4196ED502A92C7F47DC64DB7E73ED8A8057C_inline(L_2, L_4, (_TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_5, NULL);
		_TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A L_6 = V_0;
		int64_t L_7 = L_6.___Duration_0;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_8;
		L_8 = TimeSpan_FromTicks_m9C683B1D142312F22E8CC6C803E32EF6D42F9003(L_7, NULL);
		return L_8;
	}
}
// System.DateTimeOffset Microsoft.MixedReality.QR.IQRCode::get_LastDetectedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 IQRCode_get_LastDetectedTime_m92B0DA9107BAFFF9FEA64A7BB3CD5ABAC5DDAC7E (IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	_DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68* L_1 = (Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68*)(&L_0->___Vftbl_4);
		_get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0* L_2 = L_1->___get_LastDetectedTime_6;
		ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*)L_3)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsDateTime_Invoke_mA2C0617434B9B1ACFFE91BA252E501707887E797_inline(L_2, L_4, (_DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_5, NULL);
		_DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1 L_6 = V_0;
		int64_t L_7 = L_6.___UniversalTime_0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_8;
		L_8 = DateTimeOffset_FromFileTime_m91913654F9CA7F5367A35D1E25E321D7735CC32C(L_7, NULL);
		return L_8;
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


// Conversion methods for marshalling of: Microsoft.MixedReality.QR.IQRCode/Vftbl
IL2CPP_EXTERN_C void Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68_marshal_pinvoke(const Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68& unmarshaled, Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_Id_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Id_1));
	marshaled.___get_SpatialGraphNodeId_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_SpatialGraphNodeId_2));
	marshaled.___get_Version_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Version_3));
	marshaled.___get_PhysicalSideLength_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_PhysicalSideLength_4));
	marshaled.___get_SystemRelativeLastDetectedTime_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_SystemRelativeLastDetectedTime_5));
	marshaled.___get_LastDetectedTime_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_LastDetectedTime_6));
	marshaled.___get_Data_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Data_7));
	marshaled.___get_RawDataSize_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_RawDataSize_8));
	marshaled.___GetRawData_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetRawData_9));
}
IL2CPP_EXTERN_C void Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68_marshal_pinvoke_back(const Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68_marshaled_pinvoke& marshaled, Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_Id_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC>(marshaled.___get_Id_1, _get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Id_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC>(marshaled.___get_Id_1, _get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC_il2cpp_TypeInfo_var));
	unmarshaled.___get_SpatialGraphNodeId_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC>(marshaled.___get_SpatialGraphNodeId_2, _get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_SpatialGraphNodeId_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC>(marshaled.___get_SpatialGraphNodeId_2, _get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC_il2cpp_TypeInfo_var));
	unmarshaled.___get_Version_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0>(marshaled.___get_Version_3, _get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Version_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0>(marshaled.___get_Version_3, _get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0_il2cpp_TypeInfo_var));
	unmarshaled.___get_PhysicalSideLength_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86>(marshaled.___get_PhysicalSideLength_4, _get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_PhysicalSideLength_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86>(marshaled.___get_PhysicalSideLength_4, _get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86_il2cpp_TypeInfo_var));
	unmarshaled.___get_SystemRelativeLastDetectedTime_5 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21>(marshaled.___get_SystemRelativeLastDetectedTime_5, _get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_SystemRelativeLastDetectedTime_5), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21>(marshaled.___get_SystemRelativeLastDetectedTime_5, _get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21_il2cpp_TypeInfo_var));
	unmarshaled.___get_LastDetectedTime_6 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0>(marshaled.___get_LastDetectedTime_6, _get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_LastDetectedTime_6), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0>(marshaled.___get_LastDetectedTime_6, _get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0_il2cpp_TypeInfo_var));
	unmarshaled.___get_Data_7 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___get_Data_7, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Data_7), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___get_Data_7, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var));
	unmarshaled.___get_RawDataSize_8 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C>(marshaled.___get_RawDataSize_8, _get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_RawDataSize_8), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C>(marshaled.___get_RawDataSize_8, _get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C_il2cpp_TypeInfo_var));
	unmarshaled.___GetRawData_9 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751>(marshaled.___GetRawData_9, _GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetRawData_9), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751>(marshaled.___GetRawData_9, _GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.QR.IQRCode/Vftbl
IL2CPP_EXTERN_C void Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68_marshal_pinvoke_cleanup(Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.MixedReality.QR.IQRCode/Vftbl
IL2CPP_EXTERN_C void Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68_marshal_com(const Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68& unmarshaled, Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68_marshaled_com& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_Id_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Id_1));
	marshaled.___get_SpatialGraphNodeId_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_SpatialGraphNodeId_2));
	marshaled.___get_Version_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Version_3));
	marshaled.___get_PhysicalSideLength_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_PhysicalSideLength_4));
	marshaled.___get_SystemRelativeLastDetectedTime_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_SystemRelativeLastDetectedTime_5));
	marshaled.___get_LastDetectedTime_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_LastDetectedTime_6));
	marshaled.___get_Data_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Data_7));
	marshaled.___get_RawDataSize_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_RawDataSize_8));
	marshaled.___GetRawData_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetRawData_9));
}
IL2CPP_EXTERN_C void Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68_marshal_com_back(const Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68_marshaled_com& marshaled, Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_Id_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC>(marshaled.___get_Id_1, _get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Id_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC>(marshaled.___get_Id_1, _get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC_il2cpp_TypeInfo_var));
	unmarshaled.___get_SpatialGraphNodeId_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC>(marshaled.___get_SpatialGraphNodeId_2, _get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_SpatialGraphNodeId_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC>(marshaled.___get_SpatialGraphNodeId_2, _get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC_il2cpp_TypeInfo_var));
	unmarshaled.___get_Version_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0>(marshaled.___get_Version_3, _get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Version_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0>(marshaled.___get_Version_3, _get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0_il2cpp_TypeInfo_var));
	unmarshaled.___get_PhysicalSideLength_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86>(marshaled.___get_PhysicalSideLength_4, _get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_PhysicalSideLength_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86>(marshaled.___get_PhysicalSideLength_4, _get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86_il2cpp_TypeInfo_var));
	unmarshaled.___get_SystemRelativeLastDetectedTime_5 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21>(marshaled.___get_SystemRelativeLastDetectedTime_5, _get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_SystemRelativeLastDetectedTime_5), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21>(marshaled.___get_SystemRelativeLastDetectedTime_5, _get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21_il2cpp_TypeInfo_var));
	unmarshaled.___get_LastDetectedTime_6 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0>(marshaled.___get_LastDetectedTime_6, _get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_LastDetectedTime_6), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0>(marshaled.___get_LastDetectedTime_6, _get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0_il2cpp_TypeInfo_var));
	unmarshaled.___get_Data_7 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___get_Data_7, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Data_7), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___get_Data_7, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var));
	unmarshaled.___get_RawDataSize_8 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C>(marshaled.___get_RawDataSize_8, _get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_RawDataSize_8), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C>(marshaled.___get_RawDataSize_8, _get_PropertyAsUInt_t7D3D59C3D1FC4649828A879CC0982E9D6BBF322C_il2cpp_TypeInfo_var));
	unmarshaled.___GetRawData_9 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751>(marshaled.___GetRawData_9, _GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetRawData_9), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751>(marshaled.___GetRawData_9, _GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.QR.IQRCode/Vftbl
IL2CPP_EXTERN_C void Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68_marshal_com_cleanup(Vftbl_t246CF34A48540EEF036DC4A21D032D1EAA221C68_marshaled_com& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetRawData_Invoke_mF64BC83D1562A41229B184527E74A5698ABE2A35_Multicast(_GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751* __this, intptr_t ___0_thisPtr, uint32_t ___1_dataSize, uint8_t* ___2_data, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751* currentDelegate = reinterpret_cast<_GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, uint8_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_thisPtr, ___1_dataSize, ___2_data, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetRawData_Invoke_mF64BC83D1562A41229B184527E74A5698ABE2A35_OpenInst(_GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751* __this, intptr_t ___0_thisPtr, uint32_t ___1_dataSize, uint8_t* ___2_data, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, uint8_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_dataSize, ___2_data, method);
}
int32_t _GetRawData_Invoke_mF64BC83D1562A41229B184527E74A5698ABE2A35_OpenStatic(_GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751* __this, intptr_t ___0_thisPtr, uint32_t ___1_dataSize, uint8_t* ___2_data, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, uint8_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_dataSize, ___2_data, method);
}
int32_t _GetRawData_Invoke_mF64BC83D1562A41229B184527E74A5698ABE2A35_OpenStaticInvoker(_GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751* __this, intptr_t ___0_thisPtr, uint32_t ___1_dataSize, uint8_t* ___2_data, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, uint32_t, uint8_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_thisPtr, ___1_dataSize, ___2_data);
}
int32_t _GetRawData_Invoke_mF64BC83D1562A41229B184527E74A5698ABE2A35_ClosedStaticInvoker(_GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751* __this, intptr_t ___0_thisPtr, uint32_t ___1_dataSize, uint8_t* ___2_data, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, uint32_t, uint8_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_thisPtr, ___1_dataSize, ___2_data);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751 (_GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751* __this, intptr_t ___0_thisPtr, uint32_t ___1_dataSize, uint8_t* ___2_data, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_thisPtr, ___1_dataSize, ___2_data);

	return returnValue;
}
// System.Void Microsoft.MixedReality.QR.IQRCode/Vftbl/_GetRawData::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetRawData__ctor_mE1DD648623064A390762588ABDF514CFA9F081CC (_GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetRawData_Invoke_mF64BC83D1562A41229B184527E74A5698ABE2A35_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetRawData_Invoke_mF64BC83D1562A41229B184527E74A5698ABE2A35_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetRawData_Invoke_mF64BC83D1562A41229B184527E74A5698ABE2A35_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetRawData_Invoke_mF64BC83D1562A41229B184527E74A5698ABE2A35_Multicast;
}
// System.Int32 Microsoft.MixedReality.QR.IQRCode/Vftbl/_GetRawData::Invoke(System.IntPtr,System.UInt32,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetRawData_Invoke_mF64BC83D1562A41229B184527E74A5698ABE2A35 (_GetRawData_tCE1BAC323C140F68D60DD18FA081E40FE2DA0751* __this, intptr_t ___0_thisPtr, uint32_t ___1_dataSize, uint8_t* ___2_data, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, uint8_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_dataSize, ___2_data, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.QR.QRCode::.ctor(Microsoft.MixedReality.QR.IQRCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCode__ctor_mF61F8CE1E8FBE4B9B69BB67ACBD9EB0DCE9FF3A6 (QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* __this, IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* ___0_code, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* L_0 = ___0_code;
		__this->____interface_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interface_0), (void*)L_0);
		return;
	}
}
// System.Guid Microsoft.MixedReality.QR.QRCode::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t QRCode_get_Id_mF1967004B6C7881E952DDDD46757F7ED3B4C8534 (QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* __this, const RuntimeMethod* method) 
{
	{
		IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* L_0 = __this->____interface_0;
		NullCheck(L_0);
		Guid_t L_1;
		L_1 = IQRCode_get_Id_m4B54D0BFD68B696B80F5D43030F4EDECA0E07D15(L_0, NULL);
		return L_1;
	}
}
// System.Guid Microsoft.MixedReality.QR.QRCode::get_SpatialGraphNodeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t QRCode_get_SpatialGraphNodeId_m6C1C0A30B9D8413244091FA098052BE27C51DA74 (QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* __this, const RuntimeMethod* method) 
{
	{
		IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* L_0 = __this->____interface_0;
		NullCheck(L_0);
		Guid_t L_1;
		L_1 = IQRCode_get_SpatialGraphNodeId_mB1801D3DE23CF020EFFC53D7E8B561C186D2D837(L_0, NULL);
		return L_1;
	}
}
// Microsoft.MixedReality.QR.QRVersion Microsoft.MixedReality.QR.QRCode::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QRCode_get_Version_mE02944B519F15EDF45FDCBE82282B10D37D54002 (QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* __this, const RuntimeMethod* method) 
{
	{
		IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* L_0 = __this->____interface_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = IQRCode_get_Version_mB77D51EDD56E773B5734E88FEDD7EDEB1BE8DDA2(L_0, NULL);
		return L_1;
	}
}
// System.Single Microsoft.MixedReality.QR.QRCode::get_PhysicalSideLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float QRCode_get_PhysicalSideLength_m4965FCE620D954075E6A0C9DA81887827D2A1BD8 (QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* __this, const RuntimeMethod* method) 
{
	{
		IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* L_0 = __this->____interface_0;
		NullCheck(L_0);
		float L_1;
		L_1 = IQRCode_get_PhysicalSideLength_mBF586290F3B1F85B976CD37DF2BF85A95DB4940D(L_0, NULL);
		return L_1;
	}
}
// System.String Microsoft.MixedReality.QR.QRCode::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QRCode_get_Data_m1E9F8E43A89CAC755421CB70AA8F6D659CA40246 (QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* __this, const RuntimeMethod* method) 
{
	{
		IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* L_0 = __this->____interface_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = IQRCode_get_Data_mAF42D8CD2BA38C42C07F18357E87BEBD7CD3FB0B(L_0, NULL);
		return L_1;
	}
}
// System.TimeSpan Microsoft.MixedReality.QR.QRCode::get_SystemRelativeLastDetectedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A QRCode_get_SystemRelativeLastDetectedTime_mE5B505773EA9D8B095F684D5E784994FA8B15ECA (QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* __this, const RuntimeMethod* method) 
{
	{
		IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* L_0 = __this->____interface_0;
		NullCheck(L_0);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = IQRCode_get_SystemRelativeLastDetectedTime_m550DA8A6BFD8BF1E7E4AE5AB59D09453B134C202(L_0, NULL);
		return L_1;
	}
}
// System.DateTimeOffset Microsoft.MixedReality.QR.QRCode::get_LastDetectedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 QRCode_get_LastDetectedTime_m2A44EC0D23EE6F7E9B2D8F77FDA1FA9195FB4CF6 (QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* __this, const RuntimeMethod* method) 
{
	{
		IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* L_0 = __this->____interface_0;
		NullCheck(L_0);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_1;
		L_1 = IQRCode_get_LastDetectedTime_m92B0DA9107BAFFF9FEA64A7BB3CD5ABAC5DDAC7E(L_0, NULL);
		return L_1;
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
// Microsoft.MixedReality.QR.IQRCodeAddedEventArgs Microsoft.MixedReality.QR.IQRCodeAddedEventArgs::op_Implicit(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IQRCodeAddedEventArgs_t8B6EE6766A132337A219F22E89DA2473BA74EED7* IQRCodeAddedEventArgs_op_Implicit_mA75EE0EA49875DD65A94D88F07ABB738F3BCAA85 (ObjectReference_1_t7B7A6E71970334EC248BD99A424F0F5D929745C5* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IQRCodeAddedEventArgs_t8B6EE6766A132337A219F22E89DA2473BA74EED7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t7B7A6E71970334EC248BD99A424F0F5D929745C5* L_0 = ___0_obj;
		IQRCodeAddedEventArgs_t8B6EE6766A132337A219F22E89DA2473BA74EED7* L_1 = (IQRCodeAddedEventArgs_t8B6EE6766A132337A219F22E89DA2473BA74EED7*)il2cpp_codegen_object_new(IQRCodeAddedEventArgs_t8B6EE6766A132337A219F22E89DA2473BA74EED7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IQRCodeAddedEventArgs__ctor_m6B9DBE60028837FE8C23EB79C968B89E820D9DA0(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.QR.IQRCodeAddedEventArgs::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IQRCodeAddedEventArgs__ctor_m6B9DBE60028837FE8C23EB79C968B89E820D9DA0 (IQRCodeAddedEventArgs_t8B6EE6766A132337A219F22E89DA2473BA74EED7* __this, ObjectReference_1_t7B7A6E71970334EC248BD99A424F0F5D929745C5* ___0_obj, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectReference_1_t7B7A6E71970334EC248BD99A424F0F5D929745C5* L_0 = ___0_obj;
		__this->____obj_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_0), (void*)L_0);
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


// Conversion methods for marshalling of: Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl
IL2CPP_EXTERN_C void Vftbl_t8A646A4FF10C4E61B9567706D6341532F98049E4_marshal_pinvoke(const Vftbl_t8A646A4FF10C4E61B9567706D6341532F98049E4& unmarshaled, Vftbl_t8A646A4FF10C4E61B9567706D6341532F98049E4_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_Code_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Code_1));
}
IL2CPP_EXTERN_C void Vftbl_t8A646A4FF10C4E61B9567706D6341532F98049E4_marshal_pinvoke_back(const Vftbl_t8A646A4FF10C4E61B9567706D6341532F98049E4_marshaled_pinvoke& marshaled, Vftbl_t8A646A4FF10C4E61B9567706D6341532F98049E4& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_Code_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___get_Code_1, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Code_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___get_Code_1, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl
IL2CPP_EXTERN_C void Vftbl_t8A646A4FF10C4E61B9567706D6341532F98049E4_marshal_pinvoke_cleanup(Vftbl_t8A646A4FF10C4E61B9567706D6341532F98049E4_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl
IL2CPP_EXTERN_C void Vftbl_t8A646A4FF10C4E61B9567706D6341532F98049E4_marshal_com(const Vftbl_t8A646A4FF10C4E61B9567706D6341532F98049E4& unmarshaled, Vftbl_t8A646A4FF10C4E61B9567706D6341532F98049E4_marshaled_com& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_Code_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Code_1));
}
IL2CPP_EXTERN_C void Vftbl_t8A646A4FF10C4E61B9567706D6341532F98049E4_marshal_com_back(const Vftbl_t8A646A4FF10C4E61B9567706D6341532F98049E4_marshaled_com& marshaled, Vftbl_t8A646A4FF10C4E61B9567706D6341532F98049E4& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_Code_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___get_Code_1, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Code_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___get_Code_1, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.QR.IQRCodeAddedEventArgs/Vftbl
IL2CPP_EXTERN_C void Vftbl_t8A646A4FF10C4E61B9567706D6341532F98049E4_marshal_com_cleanup(Vftbl_t8A646A4FF10C4E61B9567706D6341532F98049E4_marshaled_com& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.QR.QRCodeAddedEventArgs::.ctor(Microsoft.MixedReality.QR.IQRCodeAddedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeAddedEventArgs__ctor_m57061C49B33F984287DCE10476E9838866F7A316 (QRCodeAddedEventArgs_tE7D4C2D6732F6E25B93A46E5F91318D9709A09C9* __this, IQRCodeAddedEventArgs_t8B6EE6766A132337A219F22E89DA2473BA74EED7* ___0_args, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		IQRCodeAddedEventArgs_t8B6EE6766A132337A219F22E89DA2473BA74EED7* L_0 = ___0_args;
		__this->____args_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____args_0), (void*)L_0);
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
// Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs::op_Implicit(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IQRCodeUpdatedEventArgs_tCFF323A3B8B9642D8DA20079A74598BCE8A88AE6* IQRCodeUpdatedEventArgs_op_Implicit_mDA177F5D3C9B9AC331B0495F6A84243A9320A862 (ObjectReference_1_tF3D0191716991966F93B81CBE75037784DA7D720* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IQRCodeUpdatedEventArgs_tCFF323A3B8B9642D8DA20079A74598BCE8A88AE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tF3D0191716991966F93B81CBE75037784DA7D720* L_0 = ___0_obj;
		IQRCodeUpdatedEventArgs_tCFF323A3B8B9642D8DA20079A74598BCE8A88AE6* L_1 = (IQRCodeUpdatedEventArgs_tCFF323A3B8B9642D8DA20079A74598BCE8A88AE6*)il2cpp_codegen_object_new(IQRCodeUpdatedEventArgs_tCFF323A3B8B9642D8DA20079A74598BCE8A88AE6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IQRCodeUpdatedEventArgs__ctor_mEAEFB9E33A36BAD57B5AD614B041AA74AE770D22(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IQRCodeUpdatedEventArgs__ctor_mEAEFB9E33A36BAD57B5AD614B041AA74AE770D22 (IQRCodeUpdatedEventArgs_tCFF323A3B8B9642D8DA20079A74598BCE8A88AE6* __this, ObjectReference_1_tF3D0191716991966F93B81CBE75037784DA7D720* ___0_obj, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectReference_1_tF3D0191716991966F93B81CBE75037784DA7D720* L_0 = ___0_obj;
		__this->____obj_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_0), (void*)L_0);
		return;
	}
}
// Microsoft.MixedReality.QR.IQRCode Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* IQRCodeUpdatedEventArgs_get_Code_m31E7BEDC2B4F1DFF4FE32848C6EE544E014DC0DF (IQRCodeUpdatedEventArgs_tCFF323A3B8B9642D8DA20079A74598BCE8A88AE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_mF60DC5A348914FAD3D2E54DC4B588DB3987BF8AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectReference_1_tF3D0191716991966F93B81CBE75037784DA7D720* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA* L_1 = (Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA*)(&L_0->___Vftbl_4);
		_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* L_2 = L_1->___get_Code_1;
		ObjectReference_1_tF3D0191716991966F93B81CBE75037784DA7D720* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*)L_3)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsObject_Invoke_mCCCAA1AC9BBC47B4AD5C79D0CE4B289E443D227A_inline(L_2, L_4, (intptr_t*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_5, NULL);
		ObjectReference_1_tF3D0191716991966F93B81CBE75037784DA7D720* L_6 = __this->____obj_0;
		NullCheck(L_6);
		ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 L_7 = ((IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*)L_6)->___Module_1;
		ObjectReference_1_t73C66B0EF8178F1D80685A7D532CDFFE8F2BDA05* L_8;
		L_8 = ObjectReference_1_Attach_mF60DC5A348914FAD3D2E54DC4B588DB3987BF8AE(L_7, (&V_0), ObjectReference_1_Attach_mF60DC5A348914FAD3D2E54DC4B588DB3987BF8AE_RuntimeMethod_var);
		IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* L_9;
		L_9 = IQRCode_op_Implicit_mA8EF56D9DF24D0D87C397BF80A875364F8833C04(L_8, NULL);
		return L_9;
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


// Conversion methods for marshalling of: Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl
IL2CPP_EXTERN_C void Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA_marshal_pinvoke(const Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA& unmarshaled, Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_Code_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Code_1));
}
IL2CPP_EXTERN_C void Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA_marshal_pinvoke_back(const Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA_marshaled_pinvoke& marshaled, Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_Code_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___get_Code_1, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Code_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___get_Code_1, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl
IL2CPP_EXTERN_C void Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA_marshal_pinvoke_cleanup(Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl
IL2CPP_EXTERN_C void Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA_marshal_com(const Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA& unmarshaled, Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA_marshaled_com& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_Code_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Code_1));
}
IL2CPP_EXTERN_C void Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA_marshal_com_back(const Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA_marshaled_com& marshaled, Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_Code_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___get_Code_1, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Code_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___get_Code_1, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs/Vftbl
IL2CPP_EXTERN_C void Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA_marshal_com_cleanup(Vftbl_t6AEE154BDCC788AC90499806423B5E7EA81157EA_marshaled_com& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs::.ctor(Microsoft.MixedReality.QR.IQRCodeUpdatedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeUpdatedEventArgs__ctor_m2C20BDB34E05C930AF7F8DC6B1E63CF76E71593B (QRCodeUpdatedEventArgs_t45762E7847BD1B62D097405830082E521BCF29B9* __this, IQRCodeUpdatedEventArgs_tCFF323A3B8B9642D8DA20079A74598BCE8A88AE6* ___0_args, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		IQRCodeUpdatedEventArgs_tCFF323A3B8B9642D8DA20079A74598BCE8A88AE6* L_0 = ___0_args;
		__this->____args_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____args_0), (void*)L_0);
		return;
	}
}
// Microsoft.MixedReality.QR.QRCode Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* QRCodeUpdatedEventArgs_get_Code_mDE1CC7EE033F955693F96AD3E5076463551745B3 (QRCodeUpdatedEventArgs_t45762E7847BD1B62D097405830082E521BCF29B9* __this, const RuntimeMethod* method) 
{
	{
		IQRCodeUpdatedEventArgs_tCFF323A3B8B9642D8DA20079A74598BCE8A88AE6* L_0 = __this->____args_0;
		NullCheck(L_0);
		IQRCode_t5C056CCD2858DE2958CC806765605E6CBB243109* L_1;
		L_1 = IQRCodeUpdatedEventArgs_get_Code_m31E7BEDC2B4F1DFF4FE32848C6EE544E014DC0DF(L_0, NULL);
		QRCode_tCFF46F069EB07095083E7DA4B0B9C7D2B9647C32* L_2;
		L_2 = IQRCode_op_Implicit_m01FA2429F011ADB7C474A481B439585A69D4E15C(L_1, NULL);
		return L_2;
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
// Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs::op_Implicit(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IQRCodeRemovedEventArgs_t9384E060335713DFBA0B79664F4119C9B2792553* IQRCodeRemovedEventArgs_op_Implicit_m535D484A7FEC78F201C77CD0B3773947927DCF61 (ObjectReference_1_t3705DE5AB44717B102A29CE29AA411BFE06E41B4* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IQRCodeRemovedEventArgs_t9384E060335713DFBA0B79664F4119C9B2792553_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t3705DE5AB44717B102A29CE29AA411BFE06E41B4* L_0 = ___0_obj;
		IQRCodeRemovedEventArgs_t9384E060335713DFBA0B79664F4119C9B2792553* L_1 = (IQRCodeRemovedEventArgs_t9384E060335713DFBA0B79664F4119C9B2792553*)il2cpp_codegen_object_new(IQRCodeRemovedEventArgs_t9384E060335713DFBA0B79664F4119C9B2792553_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IQRCodeRemovedEventArgs__ctor_mD5C25D12194F1E70BEFBE050C312674D061F7A76(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IQRCodeRemovedEventArgs__ctor_mD5C25D12194F1E70BEFBE050C312674D061F7A76 (IQRCodeRemovedEventArgs_t9384E060335713DFBA0B79664F4119C9B2792553* __this, ObjectReference_1_t3705DE5AB44717B102A29CE29AA411BFE06E41B4* ___0_obj, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectReference_1_t3705DE5AB44717B102A29CE29AA411BFE06E41B4* L_0 = ___0_obj;
		__this->____obj_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_0), (void*)L_0);
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


// Conversion methods for marshalling of: Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl
IL2CPP_EXTERN_C void Vftbl_t59B53990324AB3321755599430E19E4BD8BFB5C6_marshal_pinvoke(const Vftbl_t59B53990324AB3321755599430E19E4BD8BFB5C6& unmarshaled, Vftbl_t59B53990324AB3321755599430E19E4BD8BFB5C6_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_Code_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Code_1));
}
IL2CPP_EXTERN_C void Vftbl_t59B53990324AB3321755599430E19E4BD8BFB5C6_marshal_pinvoke_back(const Vftbl_t59B53990324AB3321755599430E19E4BD8BFB5C6_marshaled_pinvoke& marshaled, Vftbl_t59B53990324AB3321755599430E19E4BD8BFB5C6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_Code_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___get_Code_1, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Code_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___get_Code_1, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl
IL2CPP_EXTERN_C void Vftbl_t59B53990324AB3321755599430E19E4BD8BFB5C6_marshal_pinvoke_cleanup(Vftbl_t59B53990324AB3321755599430E19E4BD8BFB5C6_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl
IL2CPP_EXTERN_C void Vftbl_t59B53990324AB3321755599430E19E4BD8BFB5C6_marshal_com(const Vftbl_t59B53990324AB3321755599430E19E4BD8BFB5C6& unmarshaled, Vftbl_t59B53990324AB3321755599430E19E4BD8BFB5C6_marshaled_com& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_Code_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Code_1));
}
IL2CPP_EXTERN_C void Vftbl_t59B53990324AB3321755599430E19E4BD8BFB5C6_marshal_com_back(const Vftbl_t59B53990324AB3321755599430E19E4BD8BFB5C6_marshaled_com& marshaled, Vftbl_t59B53990324AB3321755599430E19E4BD8BFB5C6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_Code_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___get_Code_1, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Code_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___get_Code_1, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs/Vftbl
IL2CPP_EXTERN_C void Vftbl_t59B53990324AB3321755599430E19E4BD8BFB5C6_marshal_com_cleanup(Vftbl_t59B53990324AB3321755599430E19E4BD8BFB5C6_marshaled_com& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.QR.QRCodeRemovedEventArgs::.ctor(Microsoft.MixedReality.QR.IQRCodeRemovedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeRemovedEventArgs__ctor_mF9E4D6B0427D3E1F5772CFD79AD3697BE11D9FEE (QRCodeRemovedEventArgs_tBE44C5681EC50973BB9E0D32B8A4155F60AFEA72* __this, IQRCodeRemovedEventArgs_t9384E060335713DFBA0B79664F4119C9B2792553* ___0_args, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		IQRCodeRemovedEventArgs_t9384E060335713DFBA0B79664F4119C9B2792553* L_0 = ___0_args;
		__this->____args_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____args_0), (void*)L_0);
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
// Microsoft.MixedReality.QR.IQRCodeWatcher Microsoft.MixedReality.QR.IQRCodeWatcher::op_Implicit(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* IQRCodeWatcher_op_Implicit_m65C2F1C7B3DD17278799B2477F40AA339F19983B (ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* L_0 = ___0_obj;
		IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* L_1 = (IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD*)il2cpp_codegen_object_new(IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IQRCodeWatcher__ctor_mED1F365760D01A95FE34C81AF5E45E115F1C1C75(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.QR.IQRCodeWatcher::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IQRCodeWatcher__ctor_mED1F365760D01A95FE34C81AF5E45E115F1C1C75 (IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* __this, ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_3__ctor_m8F6DEDE0FE85764F6C30E9EDDC4F9C47863758F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_3__ctor_m946B8A442CB9732FDFDF395D9097BA60FA02A43F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_3__ctor_mAF32617027EA585A28B7D902D06524458D31AC6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_3__ctor_mD20C895BDF9075DF3AA0BC5AE73AC5D81707AD25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_3_t610553071539C339481F8394CD1CBE2967AD8861_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_3_t617C7084FCA4BB93A2E431B08052C02E7A5954B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_3_tC0A5454196001589D94A605A94D82D117EC64CAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_3_tE1C3A8281ED3C9A3E3C8CBD6DB9B539C57002208_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__5_0_mBA2929082FA3EA318E5F00A9D65F985DCAD2A5F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__5_1_m297D6F2185FEE6962BCDA6B17FF6E9118412605D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__5_2_m98E0FCD660875C989300A09FE4E59BEACEAE0098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__5_3_m45ED56C82B64490B877B586AC58CE78460881AA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmarshalArgs_t021850FDA961D6DB7F0FE73422AE6BD5BDD2C6CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmarshalArgs_tBAD263BBEE30B538B58292AF503D10274F68BEAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmarshalArgs_tBF999913624F2E64EB0395B280213EF2225EC792_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmarshalArgs_tCF30549DA5BC69A6B300D2468FD29F4D22549114_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnmarshalArgs_t021850FDA961D6DB7F0FE73422AE6BD5BDD2C6CE* G_B2_0 = NULL;
	_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* G_B2_1 = NULL;
	_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* G_B2_2 = NULL;
	ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* G_B2_3 = NULL;
	IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* G_B2_4 = NULL;
	UnmarshalArgs_t021850FDA961D6DB7F0FE73422AE6BD5BDD2C6CE* G_B1_0 = NULL;
	_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* G_B1_1 = NULL;
	_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* G_B1_2 = NULL;
	ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* G_B1_3 = NULL;
	IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* G_B1_4 = NULL;
	UnmarshalArgs_tBF999913624F2E64EB0395B280213EF2225EC792* G_B4_0 = NULL;
	_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* G_B4_1 = NULL;
	_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* G_B4_2 = NULL;
	ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* G_B4_3 = NULL;
	IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* G_B4_4 = NULL;
	UnmarshalArgs_tBF999913624F2E64EB0395B280213EF2225EC792* G_B3_0 = NULL;
	_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* G_B3_1 = NULL;
	_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* G_B3_2 = NULL;
	ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* G_B3_3 = NULL;
	IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* G_B3_4 = NULL;
	UnmarshalArgs_tCF30549DA5BC69A6B300D2468FD29F4D22549114* G_B6_0 = NULL;
	_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* G_B6_1 = NULL;
	_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* G_B6_2 = NULL;
	ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* G_B6_3 = NULL;
	IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* G_B6_4 = NULL;
	UnmarshalArgs_tCF30549DA5BC69A6B300D2468FD29F4D22549114* G_B5_0 = NULL;
	_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* G_B5_1 = NULL;
	_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* G_B5_2 = NULL;
	ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* G_B5_3 = NULL;
	IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* G_B5_4 = NULL;
	UnmarshalArgs_tBAD263BBEE30B538B58292AF503D10274F68BEAE* G_B8_0 = NULL;
	_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* G_B8_1 = NULL;
	_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* G_B8_2 = NULL;
	ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* G_B8_3 = NULL;
	IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* G_B8_4 = NULL;
	UnmarshalArgs_tBAD263BBEE30B538B58292AF503D10274F68BEAE* G_B7_0 = NULL;
	_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* G_B7_1 = NULL;
	_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* G_B7_2 = NULL;
	ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* G_B7_3 = NULL;
	IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* G_B7_4 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* L_0 = ___0_obj;
		__this->____obj_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_0), (void*)L_0);
		ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* L_1 = __this->____obj_0;
		ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* L_2 = __this->____obj_0;
		NullCheck(L_2);
		Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0* L_3 = (Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0*)(&L_2->___Vftbl_4);
		_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* L_4 = L_3->___add_Added_1;
		ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* L_5 = __this->____obj_0;
		NullCheck(L_5);
		Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0* L_6 = (Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0*)(&L_5->___Vftbl_4);
		_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* L_7 = L_6->___remove_Added_2;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var);
		UnmarshalArgs_t021850FDA961D6DB7F0FE73422AE6BD5BDD2C6CE* L_8 = ((U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1;
		UnmarshalArgs_t021850FDA961D6DB7F0FE73422AE6BD5BDD2C6CE* L_9 = L_8;
		G_B1_0 = L_9;
		G_B1_1 = L_7;
		G_B1_2 = L_4;
		G_B1_3 = L_1;
		G_B1_4 = __this;
		if (L_9)
		{
			G_B2_0 = L_9;
			G_B2_1 = L_7;
			G_B2_2 = L_4;
			G_B2_3 = L_1;
			G_B2_4 = __this;
			goto IL_0053;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var);
		U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B* L_10 = ((U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		UnmarshalArgs_t021850FDA961D6DB7F0FE73422AE6BD5BDD2C6CE* L_11 = (UnmarshalArgs_t021850FDA961D6DB7F0FE73422AE6BD5BDD2C6CE*)il2cpp_codegen_object_new(UnmarshalArgs_t021850FDA961D6DB7F0FE73422AE6BD5BDD2C6CE_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnmarshalArgs__ctor_m2DD646ECDA4C16926A6FCB8E7106F5B71822E765(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__5_0_mBA2929082FA3EA318E5F00A9D65F985DCAD2A5F5_RuntimeMethod_var), NULL);
		UnmarshalArgs_t021850FDA961D6DB7F0FE73422AE6BD5BDD2C6CE* L_12 = L_11;
		((U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1), (void*)L_12);
		G_B2_0 = L_12;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		G_B2_4 = G_B1_4;
	}

IL_0053:
	{
		EventSource_3_t617C7084FCA4BB93A2E431B08052C02E7A5954B9* L_13 = (EventSource_3_t617C7084FCA4BB93A2E431B08052C02E7A5954B9*)il2cpp_codegen_object_new(EventSource_3_t617C7084FCA4BB93A2E431B08052C02E7A5954B9_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventSource_3__ctor_mD20C895BDF9075DF3AA0BC5AE73AC5D81707AD25(L_13, G_B2_3, G_B2_2, G_B2_1, G_B2_0, EventSource_3__ctor_mD20C895BDF9075DF3AA0BC5AE73AC5D81707AD25_RuntimeMethod_var);
		NullCheck(G_B2_4);
		G_B2_4->___Added_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_4->___Added_1), (void*)L_13);
		ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* L_14 = __this->____obj_0;
		ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* L_15 = __this->____obj_0;
		NullCheck(L_15);
		Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0* L_16 = (Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0*)(&L_15->___Vftbl_4);
		_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* L_17 = L_16->___add_Updated_3;
		ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* L_18 = __this->____obj_0;
		NullCheck(L_18);
		Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0* L_19 = (Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0*)(&L_18->___Vftbl_4);
		_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* L_20 = L_19->___remove_Updated_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var);
		UnmarshalArgs_tBF999913624F2E64EB0395B280213EF2225EC792* L_21 = ((U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var))->___U3CU3E9__5_1_2;
		UnmarshalArgs_tBF999913624F2E64EB0395B280213EF2225EC792* L_22 = L_21;
		G_B3_0 = L_22;
		G_B3_1 = L_20;
		G_B3_2 = L_17;
		G_B3_3 = L_14;
		G_B3_4 = __this;
		if (L_22)
		{
			G_B4_0 = L_22;
			G_B4_1 = L_20;
			G_B4_2 = L_17;
			G_B4_3 = L_14;
			G_B4_4 = __this;
			goto IL_00a3;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var);
		U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B* L_23 = ((U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		UnmarshalArgs_tBF999913624F2E64EB0395B280213EF2225EC792* L_24 = (UnmarshalArgs_tBF999913624F2E64EB0395B280213EF2225EC792*)il2cpp_codegen_object_new(UnmarshalArgs_tBF999913624F2E64EB0395B280213EF2225EC792_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		UnmarshalArgs__ctor_m3080BF85B17E7AEED668F4F8721CE68005C8EC33(L_24, L_23, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__5_1_m297D6F2185FEE6962BCDA6B17FF6E9118412605D_RuntimeMethod_var), NULL);
		UnmarshalArgs_tBF999913624F2E64EB0395B280213EF2225EC792* L_25 = L_24;
		((U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var))->___U3CU3E9__5_1_2 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var))->___U3CU3E9__5_1_2), (void*)L_25);
		G_B4_0 = L_25;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
		G_B4_4 = G_B3_4;
	}

IL_00a3:
	{
		EventSource_3_t610553071539C339481F8394CD1CBE2967AD8861* L_26 = (EventSource_3_t610553071539C339481F8394CD1CBE2967AD8861*)il2cpp_codegen_object_new(EventSource_3_t610553071539C339481F8394CD1CBE2967AD8861_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		EventSource_3__ctor_mAF32617027EA585A28B7D902D06524458D31AC6E(L_26, G_B4_3, G_B4_2, G_B4_1, G_B4_0, EventSource_3__ctor_mAF32617027EA585A28B7D902D06524458D31AC6E_RuntimeMethod_var);
		NullCheck(G_B4_4);
		G_B4_4->___Updated_2 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_4->___Updated_2), (void*)L_26);
		ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* L_27 = __this->____obj_0;
		ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* L_28 = __this->____obj_0;
		NullCheck(L_28);
		Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0* L_29 = (Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0*)(&L_28->___Vftbl_4);
		_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* L_30 = L_29->___add_Removed_5;
		ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* L_31 = __this->____obj_0;
		NullCheck(L_31);
		Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0* L_32 = (Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0*)(&L_31->___Vftbl_4);
		_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* L_33 = L_32->___remove_Removed_6;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var);
		UnmarshalArgs_tCF30549DA5BC69A6B300D2468FD29F4D22549114* L_34 = ((U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var))->___U3CU3E9__5_2_3;
		UnmarshalArgs_tCF30549DA5BC69A6B300D2468FD29F4D22549114* L_35 = L_34;
		G_B5_0 = L_35;
		G_B5_1 = L_33;
		G_B5_2 = L_30;
		G_B5_3 = L_27;
		G_B5_4 = __this;
		if (L_35)
		{
			G_B6_0 = L_35;
			G_B6_1 = L_33;
			G_B6_2 = L_30;
			G_B6_3 = L_27;
			G_B6_4 = __this;
			goto IL_00f3;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var);
		U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B* L_36 = ((U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		UnmarshalArgs_tCF30549DA5BC69A6B300D2468FD29F4D22549114* L_37 = (UnmarshalArgs_tCF30549DA5BC69A6B300D2468FD29F4D22549114*)il2cpp_codegen_object_new(UnmarshalArgs_tCF30549DA5BC69A6B300D2468FD29F4D22549114_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		UnmarshalArgs__ctor_mC1B52FF5A760074A0450AFF673C87888A344A152(L_37, L_36, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__5_2_m98E0FCD660875C989300A09FE4E59BEACEAE0098_RuntimeMethod_var), NULL);
		UnmarshalArgs_tCF30549DA5BC69A6B300D2468FD29F4D22549114* L_38 = L_37;
		((U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var))->___U3CU3E9__5_2_3 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var))->___U3CU3E9__5_2_3), (void*)L_38);
		G_B6_0 = L_38;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		G_B6_4 = G_B5_4;
	}

IL_00f3:
	{
		EventSource_3_tC0A5454196001589D94A605A94D82D117EC64CAD* L_39 = (EventSource_3_tC0A5454196001589D94A605A94D82D117EC64CAD*)il2cpp_codegen_object_new(EventSource_3_tC0A5454196001589D94A605A94D82D117EC64CAD_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		EventSource_3__ctor_m946B8A442CB9732FDFDF395D9097BA60FA02A43F(L_39, G_B6_3, G_B6_2, G_B6_1, G_B6_0, EventSource_3__ctor_m946B8A442CB9732FDFDF395D9097BA60FA02A43F_RuntimeMethod_var);
		NullCheck(G_B6_4);
		G_B6_4->___Removed_3 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_4->___Removed_3), (void*)L_39);
		ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* L_40 = __this->____obj_0;
		ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* L_41 = __this->____obj_0;
		NullCheck(L_41);
		Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0* L_42 = (Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0*)(&L_41->___Vftbl_4);
		_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D* L_43 = L_42->___add_EnumerationCompleted_7;
		ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* L_44 = __this->____obj_0;
		NullCheck(L_44);
		Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0* L_45 = (Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0*)(&L_44->___Vftbl_4);
		_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0* L_46 = L_45->___remove_EnumerationCompleted_8;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var);
		UnmarshalArgs_tBAD263BBEE30B538B58292AF503D10274F68BEAE* L_47 = ((U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var))->___U3CU3E9__5_3_4;
		UnmarshalArgs_tBAD263BBEE30B538B58292AF503D10274F68BEAE* L_48 = L_47;
		G_B7_0 = L_48;
		G_B7_1 = L_46;
		G_B7_2 = L_43;
		G_B7_3 = L_40;
		G_B7_4 = __this;
		if (L_48)
		{
			G_B8_0 = L_48;
			G_B8_1 = L_46;
			G_B8_2 = L_43;
			G_B8_3 = L_40;
			G_B8_4 = __this;
			goto IL_0143;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var);
		U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B* L_49 = ((U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		UnmarshalArgs_tBAD263BBEE30B538B58292AF503D10274F68BEAE* L_50 = (UnmarshalArgs_tBAD263BBEE30B538B58292AF503D10274F68BEAE*)il2cpp_codegen_object_new(UnmarshalArgs_tBAD263BBEE30B538B58292AF503D10274F68BEAE_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		UnmarshalArgs__ctor_mF1D06F9FFA9769FE488B5F7575B859A32B49A337(L_50, L_49, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__5_3_m45ED56C82B64490B877B586AC58CE78460881AA8_RuntimeMethod_var), NULL);
		UnmarshalArgs_tBAD263BBEE30B538B58292AF503D10274F68BEAE* L_51 = L_50;
		((U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var))->___U3CU3E9__5_3_4 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var))->___U3CU3E9__5_3_4), (void*)L_51);
		G_B8_0 = L_51;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
		G_B8_4 = G_B7_4;
	}

IL_0143:
	{
		EventSource_3_tE1C3A8281ED3C9A3E3C8CBD6DB9B539C57002208* L_52 = (EventSource_3_tE1C3A8281ED3C9A3E3C8CBD6DB9B539C57002208*)il2cpp_codegen_object_new(EventSource_3_tE1C3A8281ED3C9A3E3C8CBD6DB9B539C57002208_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		EventSource_3__ctor_m8F6DEDE0FE85764F6C30E9EDDC4F9C47863758F7(L_52, G_B8_3, G_B8_2, G_B8_1, G_B8_0, EventSource_3__ctor_m8F6DEDE0FE85764F6C30E9EDDC4F9C47863758F7_RuntimeMethod_var);
		NullCheck(G_B8_4);
		G_B8_4->___EnumerationCompleted_4 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_4->___EnumerationCompleted_4), (void*)L_52);
		return;
	}
}
// System.Void Microsoft.MixedReality.QR.IQRCodeWatcher::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IQRCodeWatcher_Start_m35E1204634E9371930E20B143F72E971380624D1 (IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0* L_1 = (Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0*)(&L_0->___Vftbl_4);
		_method0_tED7C943BF18C50F2E18BDD75577047424BD63602* L_2 = L_1->___Start_9;
		ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*)L_3)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _method0_Invoke_m3E45C34949E1CF01A32DFF9715BE0D1D3541408B_inline(L_2, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_5, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.QR.IQRCodeWatcher::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IQRCodeWatcher_Stop_m9C71CB6834C16B657F71A05EFB758BB918891619 (IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0* L_1 = (Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0*)(&L_0->___Vftbl_4);
		_method0_tED7C943BF18C50F2E18BDD75577047424BD63602* L_2 = L_1->___Stop_10;
		ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*)L_3)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _method0_Invoke_m3E45C34949E1CF01A32DFF9715BE0D1D3541408B_inline(L_2, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_5, NULL);
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


// Conversion methods for marshalling of: Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl
IL2CPP_EXTERN_C void Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_marshal_pinvoke(const Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0& unmarshaled, Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___add_Added_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___add_Added_1));
	marshaled.___remove_Added_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___remove_Added_2));
	marshaled.___add_Updated_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___add_Updated_3));
	marshaled.___remove_Updated_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___remove_Updated_4));
	marshaled.___add_Removed_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___add_Removed_5));
	marshaled.___remove_Removed_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___remove_Removed_6));
	marshaled.___add_EnumerationCompleted_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___add_EnumerationCompleted_7));
	marshaled.___remove_EnumerationCompleted_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___remove_EnumerationCompleted_8));
	marshaled.___Start_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Start_9));
	marshaled.___Stop_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Stop_10));
	marshaled.___GetList_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetList_11));
}
IL2CPP_EXTERN_C void Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_marshal_pinvoke_back(const Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_marshaled_pinvoke& marshaled, Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___add_Added_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D>(marshaled.___add_Added_1, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___add_Added_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D>(marshaled.___add_Added_1, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D_il2cpp_TypeInfo_var));
	unmarshaled.___remove_Added_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0>(marshaled.___remove_Added_2, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___remove_Added_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0>(marshaled.___remove_Added_2, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0_il2cpp_TypeInfo_var));
	unmarshaled.___add_Updated_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D>(marshaled.___add_Updated_3, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___add_Updated_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D>(marshaled.___add_Updated_3, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D_il2cpp_TypeInfo_var));
	unmarshaled.___remove_Updated_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0>(marshaled.___remove_Updated_4, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___remove_Updated_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0>(marshaled.___remove_Updated_4, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0_il2cpp_TypeInfo_var));
	unmarshaled.___add_Removed_5 = il2cpp_codegen_marshal_function_ptr_to_delegate<_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D>(marshaled.___add_Removed_5, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___add_Removed_5), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D>(marshaled.___add_Removed_5, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D_il2cpp_TypeInfo_var));
	unmarshaled.___remove_Removed_6 = il2cpp_codegen_marshal_function_ptr_to_delegate<_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0>(marshaled.___remove_Removed_6, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___remove_Removed_6), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0>(marshaled.___remove_Removed_6, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0_il2cpp_TypeInfo_var));
	unmarshaled.___add_EnumerationCompleted_7 = il2cpp_codegen_marshal_function_ptr_to_delegate<_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D>(marshaled.___add_EnumerationCompleted_7, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___add_EnumerationCompleted_7), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D>(marshaled.___add_EnumerationCompleted_7, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D_il2cpp_TypeInfo_var));
	unmarshaled.___remove_EnumerationCompleted_8 = il2cpp_codegen_marshal_function_ptr_to_delegate<_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0>(marshaled.___remove_EnumerationCompleted_8, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___remove_EnumerationCompleted_8), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0>(marshaled.___remove_EnumerationCompleted_8, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0_il2cpp_TypeInfo_var));
	unmarshaled.___Start_9 = il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_tED7C943BF18C50F2E18BDD75577047424BD63602>(marshaled.___Start_9, _method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Start_9), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_tED7C943BF18C50F2E18BDD75577047424BD63602>(marshaled.___Start_9, _method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var));
	unmarshaled.___Stop_10 = il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_tED7C943BF18C50F2E18BDD75577047424BD63602>(marshaled.___Stop_10, _method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Stop_10), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_tED7C943BF18C50F2E18BDD75577047424BD63602>(marshaled.___Stop_10, _method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var));
	unmarshaled.___GetList_11 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___GetList_11, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetList_11), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___GetList_11, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl
IL2CPP_EXTERN_C void Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_marshal_pinvoke_cleanup(Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl
IL2CPP_EXTERN_C void Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_marshal_com(const Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0& unmarshaled, Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_marshaled_com& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___add_Added_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___add_Added_1));
	marshaled.___remove_Added_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___remove_Added_2));
	marshaled.___add_Updated_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___add_Updated_3));
	marshaled.___remove_Updated_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___remove_Updated_4));
	marshaled.___add_Removed_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___add_Removed_5));
	marshaled.___remove_Removed_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___remove_Removed_6));
	marshaled.___add_EnumerationCompleted_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___add_EnumerationCompleted_7));
	marshaled.___remove_EnumerationCompleted_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___remove_EnumerationCompleted_8));
	marshaled.___Start_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Start_9));
	marshaled.___Stop_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Stop_10));
	marshaled.___GetList_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetList_11));
}
IL2CPP_EXTERN_C void Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_marshal_com_back(const Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_marshaled_com& marshaled, Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___add_Added_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D>(marshaled.___add_Added_1, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___add_Added_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D>(marshaled.___add_Added_1, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D_il2cpp_TypeInfo_var));
	unmarshaled.___remove_Added_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0>(marshaled.___remove_Added_2, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___remove_Added_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0>(marshaled.___remove_Added_2, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0_il2cpp_TypeInfo_var));
	unmarshaled.___add_Updated_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D>(marshaled.___add_Updated_3, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___add_Updated_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D>(marshaled.___add_Updated_3, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D_il2cpp_TypeInfo_var));
	unmarshaled.___remove_Updated_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0>(marshaled.___remove_Updated_4, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___remove_Updated_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0>(marshaled.___remove_Updated_4, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0_il2cpp_TypeInfo_var));
	unmarshaled.___add_Removed_5 = il2cpp_codegen_marshal_function_ptr_to_delegate<_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D>(marshaled.___add_Removed_5, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___add_Removed_5), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D>(marshaled.___add_Removed_5, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D_il2cpp_TypeInfo_var));
	unmarshaled.___remove_Removed_6 = il2cpp_codegen_marshal_function_ptr_to_delegate<_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0>(marshaled.___remove_Removed_6, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___remove_Removed_6), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0>(marshaled.___remove_Removed_6, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0_il2cpp_TypeInfo_var));
	unmarshaled.___add_EnumerationCompleted_7 = il2cpp_codegen_marshal_function_ptr_to_delegate<_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D>(marshaled.___add_EnumerationCompleted_7, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___add_EnumerationCompleted_7), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D>(marshaled.___add_EnumerationCompleted_7, _add_EventHandler_tE488E08C938BA297EB63DF8767B13C02AD5CB57D_il2cpp_TypeInfo_var));
	unmarshaled.___remove_EnumerationCompleted_8 = il2cpp_codegen_marshal_function_ptr_to_delegate<_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0>(marshaled.___remove_EnumerationCompleted_8, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___remove_EnumerationCompleted_8), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0>(marshaled.___remove_EnumerationCompleted_8, _remove_EventHandler_t1E59E95D0AB0B0F70D0B4804172D2444FCCF13C0_il2cpp_TypeInfo_var));
	unmarshaled.___Start_9 = il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_tED7C943BF18C50F2E18BDD75577047424BD63602>(marshaled.___Start_9, _method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Start_9), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_tED7C943BF18C50F2E18BDD75577047424BD63602>(marshaled.___Start_9, _method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var));
	unmarshaled.___Stop_10 = il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_tED7C943BF18C50F2E18BDD75577047424BD63602>(marshaled.___Stop_10, _method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Stop_10), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_tED7C943BF18C50F2E18BDD75577047424BD63602>(marshaled.___Stop_10, _method0_tED7C943BF18C50F2E18BDD75577047424BD63602_il2cpp_TypeInfo_var));
	unmarshaled.___GetList_11 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___GetList_11, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetList_11), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11>(marshaled.___GetList_11, _get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.QR.IQRCodeWatcher/Vftbl
IL2CPP_EXTERN_C void Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_marshal_com_cleanup(Vftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_marshaled_com& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.QR.IQRCodeWatcher/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m70B2272F6518E552F91AE3AC3F5C93E778194D15 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B* L_0 = (U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B*)il2cpp_codegen_object_new(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mE9DC0698E78349717B5784004988E1CBB53D1693(L_0, NULL);
		((U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.QR.IQRCodeWatcher/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE9DC0698E78349717B5784004988E1CBB53D1693 (U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.MixedReality.QR.QRCodeAddedEventArgs Microsoft.MixedReality.QR.IQRCodeWatcher/<>c::<.ctor>b__5_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QRCodeAddedEventArgs_tE7D4C2D6732F6E25B93A46E5F91318D9709A09C9* U3CU3Ec_U3C_ctorU3Eb__5_0_mBA2929082FA3EA318E5F00A9D65F985DCAD2A5F5 (U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B* __this, intptr_t ___0_argsPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_FromNativePtrNoRef_m22BE26B2E4AF02CD8C4F6CE6E696DCFAFE9043F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeAddedEventArgs_tE7D4C2D6732F6E25B93A46E5F91318D9709A09C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_argsPtr;
		ObjectReference_1_t7B7A6E71970334EC248BD99A424F0F5D929745C5* L_1;
		L_1 = ObjectReference_1_FromNativePtrNoRef_m22BE26B2E4AF02CD8C4F6CE6E696DCFAFE9043F4(L_0, ObjectReference_1_FromNativePtrNoRef_m22BE26B2E4AF02CD8C4F6CE6E696DCFAFE9043F4_RuntimeMethod_var);
		IQRCodeAddedEventArgs_t8B6EE6766A132337A219F22E89DA2473BA74EED7* L_2;
		L_2 = IQRCodeAddedEventArgs_op_Implicit_mA75EE0EA49875DD65A94D88F07ABB738F3BCAA85(L_1, NULL);
		QRCodeAddedEventArgs_tE7D4C2D6732F6E25B93A46E5F91318D9709A09C9* L_3 = (QRCodeAddedEventArgs_tE7D4C2D6732F6E25B93A46E5F91318D9709A09C9*)il2cpp_codegen_object_new(QRCodeAddedEventArgs_tE7D4C2D6732F6E25B93A46E5F91318D9709A09C9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		QRCodeAddedEventArgs__ctor_m57061C49B33F984287DCE10476E9838866F7A316(L_3, L_2, NULL);
		return L_3;
	}
}
// Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs Microsoft.MixedReality.QR.IQRCodeWatcher/<>c::<.ctor>b__5_1(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QRCodeUpdatedEventArgs_t45762E7847BD1B62D097405830082E521BCF29B9* U3CU3Ec_U3C_ctorU3Eb__5_1_m297D6F2185FEE6962BCDA6B17FF6E9118412605D (U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B* __this, intptr_t ___0_argsPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_FromNativePtrNoRef_m5D088DF342D130C456166C6546BF1DC244C88802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeUpdatedEventArgs_t45762E7847BD1B62D097405830082E521BCF29B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_argsPtr;
		ObjectReference_1_tF3D0191716991966F93B81CBE75037784DA7D720* L_1;
		L_1 = ObjectReference_1_FromNativePtrNoRef_m5D088DF342D130C456166C6546BF1DC244C88802(L_0, ObjectReference_1_FromNativePtrNoRef_m5D088DF342D130C456166C6546BF1DC244C88802_RuntimeMethod_var);
		IQRCodeUpdatedEventArgs_tCFF323A3B8B9642D8DA20079A74598BCE8A88AE6* L_2;
		L_2 = IQRCodeUpdatedEventArgs_op_Implicit_mDA177F5D3C9B9AC331B0495F6A84243A9320A862(L_1, NULL);
		QRCodeUpdatedEventArgs_t45762E7847BD1B62D097405830082E521BCF29B9* L_3 = (QRCodeUpdatedEventArgs_t45762E7847BD1B62D097405830082E521BCF29B9*)il2cpp_codegen_object_new(QRCodeUpdatedEventArgs_t45762E7847BD1B62D097405830082E521BCF29B9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		QRCodeUpdatedEventArgs__ctor_m2C20BDB34E05C930AF7F8DC6B1E63CF76E71593B(L_3, L_2, NULL);
		return L_3;
	}
}
// Microsoft.MixedReality.QR.QRCodeRemovedEventArgs Microsoft.MixedReality.QR.IQRCodeWatcher/<>c::<.ctor>b__5_2(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QRCodeRemovedEventArgs_tBE44C5681EC50973BB9E0D32B8A4155F60AFEA72* U3CU3Ec_U3C_ctorU3Eb__5_2_m98E0FCD660875C989300A09FE4E59BEACEAE0098 (U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B* __this, intptr_t ___0_argsPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_FromNativePtrNoRef_m1EED31C6220DC426A757B561A81B146A13956F94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeRemovedEventArgs_tBE44C5681EC50973BB9E0D32B8A4155F60AFEA72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_argsPtr;
		ObjectReference_1_t3705DE5AB44717B102A29CE29AA411BFE06E41B4* L_1;
		L_1 = ObjectReference_1_FromNativePtrNoRef_m1EED31C6220DC426A757B561A81B146A13956F94(L_0, ObjectReference_1_FromNativePtrNoRef_m1EED31C6220DC426A757B561A81B146A13956F94_RuntimeMethod_var);
		IQRCodeRemovedEventArgs_t9384E060335713DFBA0B79664F4119C9B2792553* L_2;
		L_2 = IQRCodeRemovedEventArgs_op_Implicit_m535D484A7FEC78F201C77CD0B3773947927DCF61(L_1, NULL);
		QRCodeRemovedEventArgs_tBE44C5681EC50973BB9E0D32B8A4155F60AFEA72* L_3 = (QRCodeRemovedEventArgs_tBE44C5681EC50973BB9E0D32B8A4155F60AFEA72*)il2cpp_codegen_object_new(QRCodeRemovedEventArgs_tBE44C5681EC50973BB9E0D32B8A4155F60AFEA72_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		QRCodeRemovedEventArgs__ctor_mF9E4D6B0427D3E1F5772CFD79AD3697BE11D9FEE(L_3, L_2, NULL);
		return L_3;
	}
}
// System.Object Microsoft.MixedReality.QR.IQRCodeWatcher/<>c::<.ctor>b__5_3(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_ctorU3Eb__5_3_m45ED56C82B64490B877B586AC58CE78460881AA8 (U3CU3Ec_tA4F8F2268DAE2BA23BF59AEC5E07663E56420C1B* __this, intptr_t ___0_argsPtr, const RuntimeMethod* method) 
{
	{
		return NULL;
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
// System.Void Microsoft.MixedReality.QR.IQRCodeWatcherStatics::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IQRCodeWatcherStatics__ctor_m027BC89617985BF3B48A1A16B27517586AEB8632 (IQRCodeWatcherStatics_t491160E09A4D8EAC7A3F66E780433B8E7A901DBC* __this, ObjectReference_1_t469AE3F6C4AC12D30FDA14DB6C055BA469085EED* ___0_obj, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectReference_1_t469AE3F6C4AC12D30FDA14DB6C055BA469085EED* L_0 = ___0_obj;
		__this->____obj_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_0), (void*)L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.QR.IQRCodeWatcherStatics::IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IQRCodeWatcherStatics_IsSupported_mE664575F96DF704EF3598FEAE946928B4F2C2293 (IQRCodeWatcherStatics_t491160E09A4D8EAC7A3F66E780433B8E7A901DBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	_Bool_tA3BBB9726FE45A1680F93253B328394D390A545F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectReference_1_t469AE3F6C4AC12D30FDA14DB6C055BA469085EED* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED* L_1 = (Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED*)(&L_0->___Vftbl_4);
		_get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E* L_2 = L_1->___IsSupported_1;
		ObjectReference_1_t469AE3F6C4AC12D30FDA14DB6C055BA469085EED* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*)L_3)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsBool_Invoke_mA329DF09AC0BE7719EDFF57073F266CC0AAA1D82_inline(L_2, L_4, (_Bool_tA3BBB9726FE45A1680F93253B328394D390A545F*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_5, NULL);
		_Bool_tA3BBB9726FE45A1680F93253B328394D390A545F L_6 = V_0;
		bool L_7;
		L_7 = _Bool_op_Implicit_mD7F8203AE99B40DBA86A012CF98F625378418DAC(L_6, NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus> Microsoft.MixedReality.QR.IQRCodeWatcherStatics::RequestAccessAsync(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0CA270124835536D2EC0B9F820E916762C5F14DD* IQRCodeWatcherStatics_RequestAccessAsync_m1FAF22641703787B79BB8DBE940AAD344D8170A0 (IQRCodeWatcherStatics_t491160E09A4D8EAC7A3F66E780433B8E7A901DBC* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t94B038EBC18D2A3B1F9F1134927EC9DF0F3F2F6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_Enum_2__ctor_mF1A030578CCED26C8B70B50D428D483D4C51FA6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_Enum_2_tBAE87559F80C7E57168AC240D5A2F4E7B609BD4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_mF03F8A0982F269228D9CD07BA1DA8765DDD7D0A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRequestAccessAsyncU3Eb__6_0_mC0BE77B479F679ADDD52F88108D45DA39EA45B7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_IAsyncOperation_2_AsTask_mFF2DC445613BE2EFCF98790B57B0CBB840B4207E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_2_t94B038EBC18D2A3B1F9F1134927EC9DF0F3F2F6B* G_B2_0 = NULL;
	ObjectReference_1_t81B67CD294B31DA00DA91F177EFC7632539F4DBF* G_B2_1 = NULL;
	Func_2_t94B038EBC18D2A3B1F9F1134927EC9DF0F3F2F6B* G_B1_0 = NULL;
	ObjectReference_1_t81B67CD294B31DA00DA91F177EFC7632539F4DBF* G_B1_1 = NULL;
	{
		ObjectReference_1_t469AE3F6C4AC12D30FDA14DB6C055BA469085EED* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED* L_1 = (Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED*)(&L_0->___Vftbl_4);
		_RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E* L_2 = L_1->___RequestAccessAsync_2;
		ObjectReference_1_t469AE3F6C4AC12D30FDA14DB6C055BA469085EED* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*)L_3)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _RequestAccessAsync_Invoke_m23639F62F72C487DE293F9850621E8E965F38D35_inline(L_2, L_4, (intptr_t*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m9D32E47B8A1FB2D680A40138CD68E7846A27234B(L_5, NULL);
		ObjectReference_1_t469AE3F6C4AC12D30FDA14DB6C055BA469085EED* L_6 = __this->____obj_0;
		NullCheck(L_6);
		ModuleReference_t889B448EAA05E8C9D9E8CDC3314FF7C5687FB1F8 L_7 = ((IObjectReference_tA7285262A225D5A1425F0DF9B0F6C4F0C201AE38*)L_6)->___Module_1;
		ObjectReference_1_t81B67CD294B31DA00DA91F177EFC7632539F4DBF* L_8;
		L_8 = ObjectReference_1_Attach_mF03F8A0982F269228D9CD07BA1DA8765DDD7D0A1(L_7, (&V_0), ObjectReference_1_Attach_mF03F8A0982F269228D9CD07BA1DA8765DDD7D0A1_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4_il2cpp_TypeInfo_var);
		Func_2_t94B038EBC18D2A3B1F9F1134927EC9DF0F3F2F6B* L_9 = ((U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1;
		Func_2_t94B038EBC18D2A3B1F9F1134927EC9DF0F3F2F6B* L_10 = L_9;
		G_B1_0 = L_10;
		G_B1_1 = L_8;
		if (L_10)
		{
			G_B2_0 = L_10;
			G_B2_1 = L_8;
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4_il2cpp_TypeInfo_var);
		U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4* L_11 = ((U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t94B038EBC18D2A3B1F9F1134927EC9DF0F3F2F6B* L_12 = (Func_2_t94B038EBC18D2A3B1F9F1134927EC9DF0F3F2F6B*)il2cpp_codegen_object_new(Func_2_t94B038EBC18D2A3B1F9F1134927EC9DF0F3F2F6B_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Func_2__ctor_mA611501A2B63C906BEB4FE709ED02F5B241EA9DA(L_12, L_11, (intptr_t)((void*)U3CU3Ec_U3CRequestAccessAsyncU3Eb__6_0_mC0BE77B479F679ADDD52F88108D45DA39EA45B7D_RuntimeMethod_var), NULL);
		Func_2_t94B038EBC18D2A3B1F9F1134927EC9DF0F3F2F6B* L_13 = L_12;
		((U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1), (void*)L_13);
		G_B2_0 = L_13;
		G_B2_1 = G_B1_1;
	}

IL_0059:
	{
		IAsyncOperation_Enum_2_tBAE87559F80C7E57168AC240D5A2F4E7B609BD4A* L_14 = (IAsyncOperation_Enum_2_tBAE87559F80C7E57168AC240D5A2F4E7B609BD4A*)il2cpp_codegen_object_new(IAsyncOperation_Enum_2_tBAE87559F80C7E57168AC240D5A2F4E7B609BD4A_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		IAsyncOperation_Enum_2__ctor_mF1A030578CCED26C8B70B50D428D483D4C51FA6E(L_14, G_B2_1, G_B2_0, IAsyncOperation_Enum_2__ctor_mF1A030578CCED26C8B70B50D428D483D4C51FA6E_RuntimeMethod_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_15 = ___0_cancellationToken;
		NullCheck(L_14);
		Task_1_t0CA270124835536D2EC0B9F820E916762C5F14DD* L_16;
		L_16 = _IAsyncOperation_2_AsTask_mFF2DC445613BE2EFCF98790B57B0CBB840B4207E(L_14, L_15, _IAsyncOperation_2_AsTask_mFF2DC445613BE2EFCF98790B57B0CBB840B4207E_RuntimeMethod_var);
		return L_16;
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


// Conversion methods for marshalling of: Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl
IL2CPP_EXTERN_C void Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_marshal_pinvoke(const Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED& unmarshaled, Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___IsSupported_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___IsSupported_1));
	marshaled.___RequestAccessAsync_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___RequestAccessAsync_2));
}
IL2CPP_EXTERN_C void Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_marshal_pinvoke_back(const Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_marshaled_pinvoke& marshaled, Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___IsSupported_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E>(marshaled.___IsSupported_1, _get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___IsSupported_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E>(marshaled.___IsSupported_1, _get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E_il2cpp_TypeInfo_var));
	unmarshaled.___RequestAccessAsync_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E>(marshaled.___RequestAccessAsync_2, _RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___RequestAccessAsync_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E>(marshaled.___RequestAccessAsync_2, _RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl
IL2CPP_EXTERN_C void Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_marshal_pinvoke_cleanup(Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl
IL2CPP_EXTERN_C void Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_marshal_com(const Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED& unmarshaled, Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_marshaled_com& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___IsSupported_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___IsSupported_1));
	marshaled.___RequestAccessAsync_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___RequestAccessAsync_2));
}
IL2CPP_EXTERN_C void Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_marshal_com_back(const Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_marshaled_com& marshaled, Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___IsSupported_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E>(marshaled.___IsSupported_1, _get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___IsSupported_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E>(marshaled.___IsSupported_1, _get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E_il2cpp_TypeInfo_var));
	unmarshaled.___RequestAccessAsync_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E>(marshaled.___RequestAccessAsync_2, _RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___RequestAccessAsync_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E>(marshaled.___RequestAccessAsync_2, _RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl
IL2CPP_EXTERN_C void Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_marshal_com_cleanup(Vftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_marshaled_com& marshaled)
{
	IInspectableVftbl_tFC7E1F320E096A05DD31C258FBF18A4A8002F485_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _RequestAccessAsync_Invoke_m23639F62F72C487DE293F9850621E8E965F38D35_Multicast(_RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E* __this, intptr_t ___0_thisPtr, intptr_t* ___1_operationPtr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E* currentDelegate = reinterpret_cast<_RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_thisPtr, ___1_operationPtr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _RequestAccessAsync_Invoke_m23639F62F72C487DE293F9850621E8E965F38D35_OpenInst(_RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E* __this, intptr_t ___0_thisPtr, intptr_t* ___1_operationPtr, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_operationPtr, method);
}
int32_t _RequestAccessAsync_Invoke_m23639F62F72C487DE293F9850621E8E965F38D35_OpenStatic(_RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E* __this, intptr_t ___0_thisPtr, intptr_t* ___1_operationPtr, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_thisPtr, ___1_operationPtr, method);
}
int32_t _RequestAccessAsync_Invoke_m23639F62F72C487DE293F9850621E8E965F38D35_OpenStaticInvoker(_RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E* __this, intptr_t ___0_thisPtr, intptr_t* ___1_operationPtr, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_thisPtr, ___1_operationPtr);
}
int32_t _RequestAccessAsync_Invoke_m23639F62F72C487DE293F9850621E8E965F38D35_ClosedStaticInvoker(_RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E* __this, intptr_t ___0_thisPtr, intptr_t* ___1_operationPtr, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, intptr_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_thisPtr, ___1_operationPtr);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E (_RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E* __this, intptr_t ___0_thisPtr, intptr_t* ___1_operationPtr, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_thisPtr, ___1_operationPtr);

	return returnValue;
}
// System.Void Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl/_RequestAccessAsync::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _RequestAccessAsync__ctor_m0170D7036232A60ADD28B978F09B5EA426C5CD44 (_RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_RequestAccessAsync_Invoke_m23639F62F72C487DE293F9850621E8E965F38D35_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_RequestAccessAsync_Invoke_m23639F62F72C487DE293F9850621E8E965F38D35_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_RequestAccessAsync_Invoke_m23639F62F72C487DE293F9850621E8E965F38D35_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_RequestAccessAsync_Invoke_m23639F62F72C487DE293F9850621E8E965F38D35_Multicast;
}
// System.Int32 Microsoft.MixedReality.QR.IQRCodeWatcherStatics/Vftbl/_RequestAccessAsync::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _RequestAccessAsync_Invoke_m23639F62F72C487DE293F9850621E8E965F38D35 (_RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E* __this, intptr_t ___0_thisPtr, intptr_t* ___1_operationPtr, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_operationPtr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.QR.IQRCodeWatcherStatics/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m07020A20B9E312C2BB91AF16C69C189360D6E1C8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4* L_0 = (U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4*)il2cpp_codegen_object_new(U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m1D55A412BFF0860DBFF3F9453E3BE32EE98E5250(L_0, NULL);
		((U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.QR.IQRCodeWatcherStatics/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1D55A412BFF0860DBFF3F9453E3BE32EE98E5250 (U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus Microsoft.MixedReality.QR.IQRCodeWatcherStatics/<>c::<RequestAccessAsync>b__6_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CRequestAccessAsyncU3Eb__6_0_mC0BE77B479F679ADDD52F88108D45DA39EA45B7D (U3CU3Ec_t506E5559B9ECA2EDA9C4640E67AFB248F3E173E4* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		return (int32_t)(L_0);
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
// System.Boolean Microsoft.MixedReality.QR.QRCodeWatcher::IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QRCodeWatcher_IsSupported_m7723FB924702751B3BEBDAA3BBC1FFA6CBDF82F5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakLazy_1_get_Value_m3432E00C5EE3034731EDF75FE2B22F3361E271C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7_il2cpp_TypeInfo_var);
		WeakLazy_1_tEB593B90A27476DA223599A6DC2674C5B37DB4C2* L_0 = ((QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7_StaticFields*)il2cpp_codegen_static_fields_for(QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7_il2cpp_TypeInfo_var))->____statics_0;
		NullCheck(L_0);
		Statics_tE2846030F55D8A85D7243DA142CCFFEF8AEB65F6* L_1;
		L_1 = WeakLazy_1_get_Value_m3432E00C5EE3034731EDF75FE2B22F3361E271C8(L_0, WeakLazy_1_get_Value_m3432E00C5EE3034731EDF75FE2B22F3361E271C8_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_2;
		L_2 = IQRCodeWatcherStatics_IsSupported_mE664575F96DF704EF3598FEAE946928B4F2C2293(L_1, NULL);
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.QR.QRCodeWatcherAccessStatus> Microsoft.MixedReality.QR.QRCodeWatcher::RequestAccessAsync(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0CA270124835536D2EC0B9F820E916762C5F14DD* QRCodeWatcher_RequestAccessAsync_m65B9B30D9AD76428669185A75D546B2DB28369D6 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakLazy_1_get_Value_m3432E00C5EE3034731EDF75FE2B22F3361E271C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7_il2cpp_TypeInfo_var);
		WeakLazy_1_tEB593B90A27476DA223599A6DC2674C5B37DB4C2* L_0 = ((QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7_StaticFields*)il2cpp_codegen_static_fields_for(QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7_il2cpp_TypeInfo_var))->____statics_0;
		NullCheck(L_0);
		Statics_tE2846030F55D8A85D7243DA142CCFFEF8AEB65F6* L_1;
		L_1 = WeakLazy_1_get_Value_m3432E00C5EE3034731EDF75FE2B22F3361E271C8(L_0, WeakLazy_1_get_Value_m3432E00C5EE3034731EDF75FE2B22F3361E271C8_RuntimeMethod_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___0_cancellationToken;
		NullCheck(L_1);
		Task_1_t0CA270124835536D2EC0B9F820E916762C5F14DD* L_3;
		L_3 = IQRCodeWatcherStatics_RequestAccessAsync_m1FAF22641703787B79BB8DBE940AAD344D8170A0(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.QR.QRCodeWatcher::.ctor(Microsoft.MixedReality.QR.IQRCodeWatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeWatcher__ctor_mAAF42D9C5F921361390A8AB8C71D88D324B79FF3 (QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7* __this, IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* ___0_interface, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* L_0 = ___0_interface;
		__this->____interface_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interface_1), (void*)L_0);
		IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* L_1 = __this->____interface_1;
		NullCheck(L_1);
		EventSource_3_t617C7084FCA4BB93A2E431B08052C02E7A5954B9* L_2 = L_1->___Added_1;
		NullCheck(L_2);
		L_2->___Sender_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___Sender_1), (void*)__this);
		IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* L_3 = __this->____interface_1;
		NullCheck(L_3);
		EventSource_3_tC0A5454196001589D94A605A94D82D117EC64CAD* L_4 = L_3->___Removed_3;
		NullCheck(L_4);
		L_4->___Sender_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___Sender_1), (void*)__this);
		IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* L_5 = __this->____interface_1;
		NullCheck(L_5);
		EventSource_3_t610553071539C339481F8394CD1CBE2967AD8861* L_6 = L_5->___Updated_2;
		NullCheck(L_6);
		L_6->___Sender_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___Sender_1), (void*)__this);
		IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* L_7 = __this->____interface_1;
		NullCheck(L_7);
		EventSource_3_tE1C3A8281ED3C9A3E3C8CBD6DB9B539C57002208* L_8 = L_7->___EnumerationCompleted_4;
		NullCheck(L_8);
		L_8->___Sender_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___Sender_1), (void*)__this);
		return;
	}
}
// System.Void Microsoft.MixedReality.QR.QRCodeWatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeWatcher__ctor_m21AFC78F2A2040A268BCECB88F37A6CED87A2555 (QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivationFactory_1_ActivateInstance_TisVftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_mEED6670CCDCA14DDB7D2DB19B98601776E0F39FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivationFactory_1_tA8752488EBFCE8BF2803402941C13A47E6255250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ActivationFactory_1_tA8752488EBFCE8BF2803402941C13A47E6255250_il2cpp_TypeInfo_var);
		ObjectReference_1_t7169F9CA9F206E27F0AFACF1D904B886304AC26F* L_0;
		L_0 = ActivationFactory_1_ActivateInstance_TisVftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_mEED6670CCDCA14DDB7D2DB19B98601776E0F39FE(ActivationFactory_1_ActivateInstance_TisVftbl_t4D58C6B6F5EC1D86D8B014B2CB0A48A780A451D0_mEED6670CCDCA14DDB7D2DB19B98601776E0F39FE_RuntimeMethod_var);
		IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* L_1;
		L_1 = IQRCodeWatcher_op_Implicit_m65C2F1C7B3DD17278799B2477F40AA339F19983B(L_0, NULL);
		QRCodeWatcher__ctor_mAAF42D9C5F921361390A8AB8C71D88D324B79FF3(__this, L_1, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.QR.QRCodeWatcher::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeWatcher_Start_m8CC8DC40B8237EF44053309781629ACC09791F87 (QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7* __this, const RuntimeMethod* method) 
{
	{
		IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* L_0 = __this->____interface_1;
		NullCheck(L_0);
		IQRCodeWatcher_Start_m35E1204634E9371930E20B143F72E971380624D1(L_0, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.QR.QRCodeWatcher::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeWatcher_Stop_m2E7397C997635B092519034E1B5BE339F5D0DBA2 (QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7* __this, const RuntimeMethod* method) 
{
	{
		IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* L_0 = __this->____interface_1;
		NullCheck(L_0);
		IQRCodeWatcher_Stop_m9C71CB6834C16B657F71A05EFB758BB918891619(L_0, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.QR.QRCodeWatcher::add_Updated(System.EventHandler`1<Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeWatcher_add_Updated_mC9820EF020503FE3928E58748F6B9F3B93DCD470 (QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7* __this, EventHandler_1_t8E85A75707F8C26E7861055C6D1E6C531430CF46* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_3_add_Event_m3314D19D61D88F8A157802F920A9BAC68C26ACF3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* L_0 = __this->____interface_1;
		NullCheck(L_0);
		EventSource_3_t610553071539C339481F8394CD1CBE2967AD8861* L_1 = L_0->___Updated_2;
		EventHandler_1_t8E85A75707F8C26E7861055C6D1E6C531430CF46* L_2 = ___0_value;
		NullCheck(L_1);
		EventSource_3_add_Event_m3314D19D61D88F8A157802F920A9BAC68C26ACF3(L_1, L_2, EventSource_3_add_Event_m3314D19D61D88F8A157802F920A9BAC68C26ACF3_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.QR.QRCodeWatcher::remove_Updated(System.EventHandler`1<Microsoft.MixedReality.QR.QRCodeUpdatedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeWatcher_remove_Updated_m7B052D3051583019215A1511671000AECED57BF8 (QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7* __this, EventHandler_1_t8E85A75707F8C26E7861055C6D1E6C531430CF46* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_3_remove_Event_mD32B02AF23B6CA7E54CF59D2A5AC152322E8D7B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IQRCodeWatcher_t40FF2C1ABD05BA41F9A962CFA444CDB615EF63BD* L_0 = __this->____interface_1;
		NullCheck(L_0);
		EventSource_3_t610553071539C339481F8394CD1CBE2967AD8861* L_1 = L_0->___Updated_2;
		EventHandler_1_t8E85A75707F8C26E7861055C6D1E6C531430CF46* L_2 = ___0_value;
		NullCheck(L_1);
		EventSource_3_remove_Event_mD32B02AF23B6CA7E54CF59D2A5AC152322E8D7B0(L_1, L_2, EventSource_3_remove_Event_mD32B02AF23B6CA7E54CF59D2A5AC152322E8D7B0_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.QR.QRCodeWatcher::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeWatcher__cctor_mFBD871DFFDC463EB3E7548C0332F5A6DCEC96C52 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakLazy_1__ctor_m4518A4E0A51C3595F331457714DDFE2DA846C7CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakLazy_1_tEB593B90A27476DA223599A6DC2674C5B37DB4C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WeakLazy_1_tEB593B90A27476DA223599A6DC2674C5B37DB4C2* L_0 = (WeakLazy_1_tEB593B90A27476DA223599A6DC2674C5B37DB4C2*)il2cpp_codegen_object_new(WeakLazy_1_tEB593B90A27476DA223599A6DC2674C5B37DB4C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WeakLazy_1__ctor_m4518A4E0A51C3595F331457714DDFE2DA846C7CA(L_0, WeakLazy_1__ctor_m4518A4E0A51C3595F331457714DDFE2DA846C7CA_RuntimeMethod_var);
		((QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7_StaticFields*)il2cpp_codegen_static_fields_for(QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7_il2cpp_TypeInfo_var))->____statics_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7_StaticFields*)il2cpp_codegen_static_fields_for(QRCodeWatcher_t924D5231E060CF25CE0515BF92F65EA690B53BB7_il2cpp_TypeInfo_var))->____statics_0), (void*)L_0);
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
// System.Void Microsoft.MixedReality.QR.QRCodeWatcher/Statics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Statics__ctor_mE6B57CB70FE0A844815E4DC67A26D6A0D213559A (Statics_tE2846030F55D8A85D7243DA142CCFFEF8AEB65F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivationFactory_1_As_TisVftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_m6FA2F30C82ADF2A84D48851E641884565C8D1F62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivationFactory_1_tA8752488EBFCE8BF2803402941C13A47E6255250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ActivationFactory_1_tA8752488EBFCE8BF2803402941C13A47E6255250_il2cpp_TypeInfo_var);
		ObjectReference_1_t469AE3F6C4AC12D30FDA14DB6C055BA469085EED* L_0;
		L_0 = ActivationFactory_1_As_TisVftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_m6FA2F30C82ADF2A84D48851E641884565C8D1F62(ActivationFactory_1_As_TisVftbl_tADF6984E4EC720A5BB9767B32B865A8346CC7AED_m6FA2F30C82ADF2A84D48851E641884565C8D1F62_RuntimeMethod_var);
		IQRCodeWatcherStatics__ctor_m027BC89617985BF3B48A1A16B27517586AEB8632(__this, L_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void mono_thread_cleanup_initialize_Invoke_m3D1DC548582AA90CE0F85642D228D25F85B8B50D_inline (mono_thread_cleanup_initialize_t0B98F7D0989B103D6C198FBD766DA12AD7388A47* __this, intptr_t* ___0_threadCleanupRequested, intptr_t* ___1_threadCleanupCompleted, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t*, intptr_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_threadCleanupRequested, ___1_threadCleanupCompleted, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void mono_thread_cleanup_register_Invoke_mF5CC08EF99E7E264CD9CAC0628065136A78A4D5B_inline (mono_thread_cleanup_register_tF0CEF1DC5E34D510C29A73B61BCDE23EE56C119C* __this, intptr_t ___0_threadPtr, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_threadPtr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DllGetActivationFactory_Invoke_m12CE80A39C1A4D446633B4E17BE690ABA0435002_inline (DllGetActivationFactory_t512300CAA48C2C8115814C5B541A8F839997EBEB* __this, intptr_t ___0_activatableClassId, intptr_t* ___1_activationFactory, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_activatableClassId, ___1_activationFactory, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void _Invoke_Invoke_mAA0B517B23949DE8BE86B430EADA7238AA69DC56_inline (_Invoke_tADAFAA2959435274AFC24A9F3137B1EFAF8CF276* __this, intptr_t ___0_senderPtr, intptr_t ___1_argsPtr, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_senderPtr, ___1_argsPtr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute_set_DelegateType_m413872D1B36237F56A4A88DD2E8674675C4C54D4_inline (MonoPInvokeCallbackAttribute_tFEE42FDDD0C003825984DDD5893532E298DF6D52* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CDelegateTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDelegateTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _get_PropertyAsInt_Invoke_m679CBE2F073B7A4ABA3F9EDD44EA3D7F5F83F87A_inline (_get_PropertyAsInt_t3359EFB644BA54BEFF7195F1AF4FB7DFEA852C95* __this, intptr_t ___0_thisPtr, int32_t* ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _method0_Invoke_m3E45C34949E1CF01A32DFF9715BE0D1D3541408B_inline (_method0_tED7C943BF18C50F2E18BDD75577047424BD63602* __this, intptr_t ___0_thisPtr, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CompletedHandler_Invoke_m26544BD9DD9BAFBCBE56B9B02E75A7EF0951FEC2_inline (CompletedHandler_tB30E0E514886EFC938B62F3BCA8A5EC9681E6AD3* __this, int32_t ___0_status, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_status, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _get_PropertyAsGuid_Invoke_m467847EAC22FBDB64ABB5E393DF95CBE572AB412_inline (_get_PropertyAsGuid_tA66E09BEBB536EB254582D47D939D0BE33DE54DC* __this, intptr_t ___0_thisPtr, Guid_t* ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, Guid_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _get_PropertyAsEnum_Invoke_mE8CE6F279C8BC5A05626FD92DED2517E3C963E4A_inline (_get_PropertyAsEnum_tD6BB7E6442FF3055A0F8E4A042AB1072AD042AE0* __this, intptr_t ___0_thisPtr, int32_t* ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _get_PropertyAsFloat_Invoke_mCF17DCE8E61890D2D64F28D17BC869AD9386FF2F_inline (_get_PropertyAsFloat_tD90D338B5A06E45D2AFA55EEB9E68C06F9911F86* __this, intptr_t ___0_thisPtr, float* ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, float*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _get_PropertyAsObject_Invoke_mCCCAA1AC9BBC47B4AD5C79D0CE4B289E443D227A_inline (_get_PropertyAsObject_tE254EEAF7746955498BBEDE1D04E2C1C837F2E11* __this, intptr_t ___0_thisPtr, intptr_t* ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _get_PropertyAsTimeSpan_Invoke_m261D4196ED502A92C7F47DC64DB7E73ED8A8057C_inline (_get_PropertyAsTimeSpan_t23EB6F17EFCC91AA1833824AD5D6AE7F0A5EEC21* __this, intptr_t ___0_thisPtr, _TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A* ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, _TimeSpan_t39498B47779F6E94F69A542DBC9D7341DD68231A*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _get_PropertyAsDateTime_Invoke_mA2C0617434B9B1ACFFE91BA252E501707887E797_inline (_get_PropertyAsDateTime_t93D91E9C95C43FE4A9E5F9D834494899092B4CA0* __this, intptr_t ___0_thisPtr, _DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1* ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, _DateTime_t54972F0F7849B20A81E12F1BCDE5C617D23ED9E1*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _get_PropertyAsBool_Invoke_mA329DF09AC0BE7719EDFF57073F266CC0AAA1D82_inline (_get_PropertyAsBool_t84AD53CB53155715A8A330EB87DC2429C994D82E* __this, intptr_t ___0_thisPtr, _Bool_tA3BBB9726FE45A1680F93253B328394D390A545F* ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, _Bool_tA3BBB9726FE45A1680F93253B328394D390A545F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _RequestAccessAsync_Invoke_m23639F62F72C487DE293F9850621E8E965F38D35_inline (_RequestAccessAsync_t52005678C90F9A3E4A792DC7B5CF29A595475C4E* __this, intptr_t ___0_thisPtr, intptr_t* ___1_operationPtr, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_thisPtr, ___1_operationPtr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
