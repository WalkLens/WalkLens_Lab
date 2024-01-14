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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
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
struct InvokerFuncInvoker2;
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
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
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
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>
struct EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>
struct EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>
struct EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>
struct EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>
struct EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>
struct EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs>
struct EventHandler_1_tB299EE0561708ADFB5D5F63E18C58E89D72E7E6E;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>
struct IReadOnlyDictionary_2_t8FD5C7F0C22A371C71196C9A42D80E0E47EAC1C8;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
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
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// Microsoft.CognitiveServices.Speech.Audio.AudioConfig
struct AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate
struct CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA;
// Microsoft.CognitiveServices.Speech.CancellationDetails
struct CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// Microsoft.CognitiveServices.Speech.Internal.HandleRelease
struct HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle
struct InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_tCAE7DBDDEE93BF80011F064297B9B66A3719DCE8;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// Microsoft.CognitiveServices.Speech.PropertyCollection
struct PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53;
// Microsoft.CognitiveServices.Speech.RecognitionEventArgs
struct RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9;
// Microsoft.CognitiveServices.Speech.RecognitionResult
struct RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F;
// Microsoft.CognitiveServices.Speech.Recognizer
struct Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.CognitiveServices.Speech.SessionEventArgs
struct SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC;
// Microsoft.CognitiveServices.Speech.SpeechConfig
struct SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs
struct SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs
struct SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult
struct SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94;
// Microsoft.CognitiveServices.Speech.SpeechRecognizer
struct SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B;
// Microsoft.CognitiveServices.Speech.SpeechTranslationConfig
struct SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs
struct TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs
struct TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult
struct TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer
struct TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168;
// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs
struct TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F;
// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult
struct TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2;
// System.Type
struct Type_t;
// Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle
struct Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate
struct GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D;
// Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate
struct GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationDetails_tA3D676EDF1007208DD29A9E1C9FAE252FA7AC481_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationErrorCode_tA7E793829617AB6327A122CC40E657792C4D9402_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationReason_t51FBE96029389530BF9FEE71742677C3DFF019A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiagnosticsInterop_tA8D399C1F3B54CEE9AD0E92152924D0D77596050_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyCollection_tA36C6976925F4EAA7A7EC5B6753E9DFB8B45ADAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechConfig_t7654F04EE4DFBA3E6BC32B6FC37E7154828483B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechTranslationConfig_t6280A39FCA67A20B208CD312B25DE9A5F12589DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07657094245180507A188C63C49A070BC8752EA2;
IL2CPP_EXTERN_C String_t* _stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04;
IL2CPP_EXTERN_C String_t* _stringLiteral1532A53696EE625AE3777874840B492D52037C8E;
IL2CPP_EXTERN_C String_t* _stringLiteral1F16CCC8B5C539FDA6D18899BE786616CC0A66C9;
IL2CPP_EXTERN_C String_t* _stringLiteral263D04BA595C06ADC50CF667EA6F2290337CDAC0;
IL2CPP_EXTERN_C String_t* _stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643;
IL2CPP_EXTERN_C String_t* _stringLiteral31514D8FFE6EBD8A160985B5C25BE0F2A7BEF863;
IL2CPP_EXTERN_C String_t* _stringLiteral355878A388870DC1779B9524DFC7806DF3F6E3EF;
IL2CPP_EXTERN_C String_t* _stringLiteral39F33B0FE4D2999B413004105B540E9BDC49D767;
IL2CPP_EXTERN_C String_t* _stringLiteral3A8100DC94EF854DE676FBF7FAD86E84873F3000;
IL2CPP_EXTERN_C String_t* _stringLiteral4A7AB2F6B4BB9763BDAE9F4B653E5CA8E25A19F9;
IL2CPP_EXTERN_C String_t* _stringLiteral5CB81742644CCEA2B53FE5D7E08731904CD84E08;
IL2CPP_EXTERN_C String_t* _stringLiteral6260956A285A95B964811F944839C8CA994BAAD8;
IL2CPP_EXTERN_C String_t* _stringLiteral66B8240E15500AD983CC6249A0313DD49E22940E;
IL2CPP_EXTERN_C String_t* _stringLiteral67E3003FE5B0C609EB2073B105C585694FED0280;
IL2CPP_EXTERN_C String_t* _stringLiteral6CC1A826990E4F55C0AF3E80A72DC2D9003B1658;
IL2CPP_EXTERN_C String_t* _stringLiteral7267B048CEDBB7AD42A5473F09940F2723B4506D;
IL2CPP_EXTERN_C String_t* _stringLiteral74950E71ECDE7F282725B371C332DD6851AC6CDE;
IL2CPP_EXTERN_C String_t* _stringLiteral7BF1B4B734433B6AD600A9CCEB253AD568B4B6A7;
IL2CPP_EXTERN_C String_t* _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C;
IL2CPP_EXTERN_C String_t* _stringLiteral84F70ACE509061C886C9B2FE8A2BF7B7FFC81F7F;
IL2CPP_EXTERN_C String_t* _stringLiteral8E8084C52A356BA811825A26D2A68087D1EE1AE6;
IL2CPP_EXTERN_C String_t* _stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E;
IL2CPP_EXTERN_C String_t* _stringLiteral95DC79C73A34C98991065992C9FD3B3F8A4AB21B;
IL2CPP_EXTERN_C String_t* _stringLiteral990E9465081709697449AFB110415A8629DE2E13;
IL2CPP_EXTERN_C String_t* _stringLiteral9D994AF9D9226E9E4FB3842699E67F727590C94D;
IL2CPP_EXTERN_C String_t* _stringLiteralA23629C306AA023437DA41361139F76CFB792614;
IL2CPP_EXTERN_C String_t* _stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D;
IL2CPP_EXTERN_C String_t* _stringLiteralAD1646DD3BCB50D02405E092BF9F99967377E943;
IL2CPP_EXTERN_C String_t* _stringLiteralBEE1F32E38A053DAC1C8FBB1F39277CA0C67EB06;
IL2CPP_EXTERN_C String_t* _stringLiteralC6072FBFC31FE8C1C066271F63752A3B9B67AAD9;
IL2CPP_EXTERN_C String_t* _stringLiteralC7EBE4EAAB6D68E9347038ACD59F39A9DE2D2040;
IL2CPP_EXTERN_C String_t* _stringLiteralC9242117927E8C104F78807A56EFE624837EF5BB;
IL2CPP_EXTERN_C String_t* _stringLiteralD150B768BC4907FDDB1BE9F66C5E43806644D97C;
IL2CPP_EXTERN_C String_t* _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE;
IL2CPP_EXTERN_C String_t* _stringLiteralD6EFEA28911C05150F90CA0C3A902792E8F9D73C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32;
IL2CPP_EXTERN_C String_t* _stringLiteralF28770BAFF3BD72A14677B13D79FE1286316B04C;
IL2CPP_EXTERN_C String_t* _stringLiteralF5276AA6769ABD877AC10339C332B2ECF5459404;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventArgs_recognizer_event_handle_release_mDA02276B5C17D15AAC40D012354B19C2036BE6FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m76C967D2A15D20C4366D5AEE896D36E71F71FEFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyCollection_property_bag_release_mEE19009AAC5E2984AD636297392382E086A42E9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionResult_recognizer_result_handle_release_m9FC496DA00E94757F730641DFF06C371E45644D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionResult_result_get_result_id_m9502FF6B24BD822E33C9C8453CB7EE06F510035D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionResult_result_get_text_mA7F1307B026F922E2CD4B260F686F45FA661844D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_Dispose_m53C30ACE1A7745127F79CB19F92894F67407E7CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SetSessionStarted_m641F7510BE5E1426DD4EE2765007FCA37E86E0F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SetSessionStopped_mA727407C3AAB48CD19521F3FFF7E163A0E63455C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SpeechEndDetected_m21C1A7D4CCC4E33EC2EA05B48E44CC604E36C705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SpeechStartDetected_m94DA4231F52F17425D472988B350E23C2A574C88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FromConfig_m4175FC1D5C82C82271CA7D9D2DDC89DE92321C66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_StartContinuousRecognition_mB8E850543B3369010BFDC121ADC45B7F4D3EB0C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_StopContinuousRecognition_mAB43FB36FA7F893031EE6EF33D7E980474FAE6D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_recognizer_handle_release_mF92E200D447EA3683E5F7BB0C161C0234D6DBA18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_recognizer_session_event_get_session_id_m19AEE7F994037064C324319645D814B64D14E165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechConfig_speech_config_release_mA9578DF67E5F130B18A3B8B7FB8567B28D802BA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_FireEvent_Canceled_mF0152E00B21076D0AA20D551D4659ED141BA2A87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_FireEvent_Recognized_m1F3199AAADDAAAD62E3A93985B2668A9A23E8205_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_FireEvent_Recognizing_mC85B8A7E5FC2E2D4FC053DBD8AC419F17468EB4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__52_0_m07A75A12B255723087B6E3627346D512EEF5C42C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__53_0_m53D17EDA2DC76DFA26F6D482A43710EDE49BD4B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxFactory_recognizer_create_speech_recognizer_from_config_m4EE9A793506E319CF430427772F4F1494543A067_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxFactory_recognizer_create_translation_recognizer_from_config_m3729F9507E6B0659297532B1296142F59AC9E16B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_FireEvent_Canceled_mFD1B32ACF0B0EE83DE442139C160899879A51E46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_FireEvent_Recognized_m1A40021BFA25C2FB66E2E204DD020C3711F00B22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_FireEvent_Recognizing_m17C8B5DC53375C671FD8E9F158A49378C62BD3D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_FireEvent_SynthesisResult_m8821CF5132DBD863346A36837637C0723E46F6E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__49_0_mB7614A16ABF329DFEA2297D085D6D7BE15A54833_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__50_0_m43D1354FBDF91D1CD85A7F0A3AC13D804DADD4B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8StringHandle__ctor_mD34C2052B76C3D83A0F720690F1C70E50743232A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8StringMarshaler_MarshalNativeToManaged_m1880DC13C87D09223E562FF88DBFB188219203E1_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4B71144DD958900B2F50C53B47A66308A0261701 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Byte>
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C  : public RuntimeObject
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Audio.AudioConfig
struct AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3  : public RuntimeObject
{
	// System.Boolean Microsoft.CognitiveServices.Speech.Audio.AudioConfig::disposed
	bool ___disposed_0;
	// System.IDisposable Microsoft.CognitiveServices.Speech.Audio.AudioConfig::streamKeepAlive
	RuntimeObject* ___streamKeepAlive_1;
	// System.Boolean Microsoft.CognitiveServices.Speech.Audio.AudioConfig::disposeStream
	bool ___disposeStream_2;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Audio.AudioConfig::configHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___configHandle_3;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Audio.AudioConfig::propBag
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___propBag_4;
};

// Microsoft.CognitiveServices.Speech.CancellationDetails
struct CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A  : public RuntimeObject
{
	// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_0;
	// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_1;
	// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::<ErrorDetails>k__BackingField
	String_t* ___U3CErrorDetailsU3Ek__BackingField_2;
	// Microsoft.CognitiveServices.Speech.RecognitionResult Microsoft.CognitiveServices.Speech.CancellationDetails::recognitionResult
	RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* ___recognitionResult_3;
};

// Microsoft.CognitiveServices.Speech.Internal.CancellationDetails
struct CancellationDetails_tA3D676EDF1007208DD29A9E1C9FAE252FA7AC481  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Microsoft.CognitiveServices.Speech.Internal.Diagnostics
struct Diagnostics_t3FA9C63DF2124EF11754F978D11B2A7A784CED0F  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop
struct DiagnosticsInterop_tA8D399C1F3B54CEE9AD0E92152924D0D77596050  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Internal.DotNetFrameworkAnyCpuSupport
struct DotNetFrameworkAnyCpuSupport_tC631B80333E93506D3950CF4861E6440DA923A6C  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// Microsoft.CognitiveServices.Speech.Internal.EventArgs
struct EventArgs_t8D97A306218CF4538968C67C8EF6DB40C09F6A54  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.PropertyCollection
struct PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53  : public RuntimeObject
{
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.PropertyCollection::propbagHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___propbagHandle_0;
};

// Microsoft.CognitiveServices.Speech.Internal.PropertyCollection
struct PropertyCollection_tA36C6976925F4EAA7A7EC5B6753E9DFB8B45ADAE  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.RecognitionResult
struct RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F  : public RuntimeObject
{
	// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::<ResultId>k__BackingField
	String_t* ___U3CResultIdU3Ek__BackingField_0;
	// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_1;
	// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::<Properties>k__BackingField
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___U3CPropertiesU3Ek__BackingField_3;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.RecognitionResult::resultHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___resultHandle_4;
};

// Microsoft.CognitiveServices.Speech.Internal.RecognitionResult
struct RecognitionResult_t1921BD961EE6E7BC5A34A80B51BADA8479F9F4B7  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Internal.Recognizer
struct Recognizer_t5CF9ED1A4463BECEAA89CA3C159DC1F9505B6F45  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.SpeechConfig
struct SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE  : public RuntimeObject
{
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SpeechConfig::configHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___configHandle_0;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechConfig::progBag
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___progBag_1;
};

// Microsoft.CognitiveServices.Speech.Internal.SpeechConfig
struct SpeechConfig_t7654F04EE4DFBA3E6BC32B6FC37E7154828483B9  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig
struct SpeechTranslationConfig_t6280A39FCA67A20B208CD312B25DE9A5F12589DE  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Internal.SpxError
struct SpxError_t1CCB290F01587A895B752386C959C6E0346321AD  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower
struct SpxExceptionThrower_t7089A8D1D67637C6D033489493B093A2B8E94491  : public RuntimeObject
{
};

// Microsoft.CognitiveServices.Speech.Internal.SpxFactory
struct SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B  : public RuntimeObject
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

// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult
struct TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2  : public RuntimeObject
{
	// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_0;
	// System.Byte[] Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::audio
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___audio_1;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::resultHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___resultHandle_2;
};

// Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler
struct Utf8StringMarshaler_t05B5825C33FC825D08D4E781E0DF7CB3AFE2E3EF  : public RuntimeObject
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

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
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

// Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_tCAE7DBDDEE93BF80011F064297B9B66A3719DCE8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute::type
	Type_t* ___type_0;
};

// Microsoft.CognitiveServices.Speech.SessionEventArgs
struct SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SessionEventArgs::eventHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___eventHandle_1;
	// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::<SessionId>k__BackingField
	String_t* ___U3CSessionIdU3Ek__BackingField_4;
};

// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult
struct SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94  : public RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F
{
};

// Microsoft.CognitiveServices.Speech.SpeechTranslationConfig
struct SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B  : public SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE
{
	// System.String Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::targetLanguages
	String_t* ___targetLanguages_2;
};

// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult
struct TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19  : public RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::translationTextResultMap
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___translationTextResultMap_6;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
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

// Microsoft.CognitiveServices.Speech.RecognitionEventArgs
struct RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9  : public SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC
{
	// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::<Offset>k__BackingField
	uint64_t ___U3COffsetU3Ek__BackingField_5;
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

// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs
struct TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F  : public SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC
{
	// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::<Result>k__BackingField
	TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* ___U3CResultU3Ek__BackingField_5;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle
struct InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
	// Microsoft.CognitiveServices.Speech.Internal.HandleRelease Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::releaseHandleFunc
	HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* ___releaseHandleFunc_6;
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

// Microsoft.CognitiveServices.Speech.Recognizer
struct Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A  : public RuntimeObject
{
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SessionStarted
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ____SessionStarted_0;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SessionStopped
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ____SessionStopped_1;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SpeechStartDetected
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ____SpeechStartDetected_2;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SpeechEndDetected
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ____SpeechEndDetected_3;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::recoHandle
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___recoHandle_4;
	// System.String Microsoft.CognitiveServices.Speech.Recognizer::pointerHandle
	String_t* ___pointerHandle_5;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStartContinuousHandle
	intptr_t ___asyncStartContinuousHandle_6;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStopContinuousHandle
	intptr_t ___asyncStopContinuousHandle_7;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStartKeywordHandle
	intptr_t ___asyncStartKeywordHandle_8;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStopKeywordHandle
	intptr_t ___asyncStopKeywordHandle_9;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::speechStartDetectedCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___speechStartDetectedCallbackDelegate_10;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::speechEndDetectedCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___speechEndDetectedCallbackDelegate_11;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::sessionStartedCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___sessionStartedCallbackDelegate_12;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::sessionStoppedCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___sessionStoppedCallbackDelegate_13;
	// System.Runtime.InteropServices.GCHandle Microsoft.CognitiveServices.Speech.Recognizer::gch
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gch_14;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.CognitiveServices.Speech.Recognizer::disposed
	bool ___disposed_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.CognitiveServices.Speech.Recognizer::isDisposing
	bool ___isDisposing_16;
	// System.Object Microsoft.CognitiveServices.Speech.Recognizer::recognizerLock
	RuntimeObject* ___recognizerLock_17;
	// System.Int32 Microsoft.CognitiveServices.Speech.Recognizer::activeAsyncRecognitionCounter
	int32_t ___activeAsyncRecognitionCounter_18;
};

// Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs
struct SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD  : public RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9
{
	// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::<Result>k__BackingField
	SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* ___U3CResultU3Ek__BackingField_6;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs
struct TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0  : public RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9
{
	// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::<Result>k__BackingField
	TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* ___U3CResultU3Ek__BackingField_6;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle
struct Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
	// System.UInt32 Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::<Length>k__BackingField
	uint32_t ___U3CLengthU3Ek__BackingField_7;
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for System.EventHandler`1<System.Object>
struct IEventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___0_sender, Il2CppIInspectable* ___1_e) = 0;
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>
struct EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>
struct EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>
struct EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>
struct EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>
struct EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>
struct EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs>
struct EventHandler_1_tB299EE0561708ADFB5D5F63E18C58E89D72E7E6E  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate
struct CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA  : public MulticastDelegate_t
{
};

// Microsoft.CognitiveServices.Speech.Internal.HandleRelease
struct HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs
struct SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86  : public SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD
{
	// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_7;
	// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_8;
	// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<ErrorDetails>k__BackingField
	String_t* ___U3CErrorDetailsU3Ek__BackingField_9;
};

// Microsoft.CognitiveServices.Speech.SpeechRecognizer
struct SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B  : public Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A
{
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Recognizing
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ____Recognizing_19;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Recognized
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ____Recognized_20;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Canceled
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* ____Canceled_21;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::recognizingCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___recognizingCallbackDelegate_22;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::recognizedCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___recognizedCallbackDelegate_23;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::canceledCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___canceledCallbackDelegate_24;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::<Properties>k__BackingField
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___U3CPropertiesU3Ek__BackingField_25;
	// Microsoft.CognitiveServices.Speech.Audio.AudioConfig Microsoft.CognitiveServices.Speech.SpeechRecognizer::audioInputKeepAlive
	AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3* ___audioInputKeepAlive_26;
};

// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs
struct TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853  : public TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0
{
	// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_7;
	// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_8;
	// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::<ErrorDetails>k__BackingField
	String_t* ___U3CErrorDetailsU3Ek__BackingField_9;
};

// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer
struct TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168  : public Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A
{
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::_Recognizing
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ____Recognizing_19;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::_Recognized
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ____Recognized_20;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::_Canceled
	EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* ____Canceled_21;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::_Synthesizing
	EventHandler_1_tB299EE0561708ADFB5D5F63E18C58E89D72E7E6E* ____Synthesizing_22;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<Properties>k__BackingField
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___U3CPropertiesU3Ek__BackingField_23;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::recognizingCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___recognizingCallbackDelegate_24;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::recognizedCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___recognizedCallbackDelegate_25;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::canceledCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___canceledCallbackDelegate_26;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::translationSynthesisCallbackDelegate
	CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___translationSynthesisCallbackDelegate_27;
	// Microsoft.CognitiveServices.Speech.Audio.AudioConfig Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::audioInputKeepAlive
	AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3* ___audioInputKeepAlive_28;
};

// Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate
struct GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D  : public MulticastDelegate_t
{
};

// Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate
struct GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.EmptyArray`1<System.Byte>
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Value_0;
};

// System.EmptyArray`1<System.Byte>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Attribute

// System.Attribute

// Microsoft.CognitiveServices.Speech.Audio.AudioConfig

// Microsoft.CognitiveServices.Speech.Audio.AudioConfig

// Microsoft.CognitiveServices.Speech.CancellationDetails

// Microsoft.CognitiveServices.Speech.CancellationDetails

// Microsoft.CognitiveServices.Speech.Internal.CancellationDetails

// Microsoft.CognitiveServices.Speech.Internal.CancellationDetails

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// Microsoft.CognitiveServices.Speech.Internal.Diagnostics

// Microsoft.CognitiveServices.Speech.Internal.Diagnostics

// Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop

// Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop

// Microsoft.CognitiveServices.Speech.Internal.DotNetFrameworkAnyCpuSupport

// Microsoft.CognitiveServices.Speech.Internal.DotNetFrameworkAnyCpuSupport

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// Microsoft.CognitiveServices.Speech.Internal.EventArgs

// Microsoft.CognitiveServices.Speech.Internal.EventArgs

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.EventArgs

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// Microsoft.CognitiveServices.Speech.PropertyCollection

// Microsoft.CognitiveServices.Speech.PropertyCollection

// Microsoft.CognitiveServices.Speech.Internal.PropertyCollection

// Microsoft.CognitiveServices.Speech.Internal.PropertyCollection

// Microsoft.CognitiveServices.Speech.RecognitionResult

// Microsoft.CognitiveServices.Speech.RecognitionResult

// Microsoft.CognitiveServices.Speech.Internal.RecognitionResult

// Microsoft.CognitiveServices.Speech.Internal.RecognitionResult

// Microsoft.CognitiveServices.Speech.Internal.Recognizer

// Microsoft.CognitiveServices.Speech.Internal.Recognizer

// Microsoft.CognitiveServices.Speech.SpeechConfig

// Microsoft.CognitiveServices.Speech.SpeechConfig

// Microsoft.CognitiveServices.Speech.Internal.SpeechConfig

// Microsoft.CognitiveServices.Speech.Internal.SpeechConfig

// Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig

// Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig

// Microsoft.CognitiveServices.Speech.Internal.SpxError
struct SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields
{
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::BufferTooSmall
	intptr_t ___BufferTooSmall_0;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::RuntimeError
	intptr_t ___RuntimeError_1;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::InvalidHandle
	intptr_t ___InvalidHandle_2;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::InvalidArgument
	intptr_t ___InvalidArgument_3;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::NotFound
	intptr_t ___NotFound_4;
};

// Microsoft.CognitiveServices.Speech.Internal.SpxError

// Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower

// Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower

// Microsoft.CognitiveServices.Speech.Internal.SpxFactory

// Microsoft.CognitiveServices.Speech.Internal.SpxFactory

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult

// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult

// Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler

// Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

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

// Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute

// Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute

// Microsoft.CognitiveServices.Speech.SessionEventArgs

// Microsoft.CognitiveServices.Speech.SessionEventArgs

// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult

// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult

// Microsoft.CognitiveServices.Speech.SpeechTranslationConfig

// Microsoft.CognitiveServices.Speech.SpeechTranslationConfig

// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult

// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.UIntPtr
struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
};

// System.UIntPtr

// System.Void

// System.Void

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

// Microsoft.CognitiveServices.Speech.RecognitionEventArgs

// Microsoft.CognitiveServices.Speech.RecognitionEventArgs

// System.Runtime.InteropServices.SafeHandle

// System.Runtime.InteropServices.SafeHandle

// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs

// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs

// System.ApplicationException

// System.ApplicationException

// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle

// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle

// Microsoft.CognitiveServices.Speech.Recognizer

// Microsoft.CognitiveServices.Speech.Recognizer

// Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs

// Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs

// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs

// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs

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

// Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle
struct Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2_StaticFields
{
	// Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::Null
	Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* ___Null_6;
};

// Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle

// System.EventHandler`1<System.Object>

// System.EventHandler`1<System.Object>

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs>

// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs>

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate

// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate

// Microsoft.CognitiveServices.Speech.Internal.HandleRelease

// Microsoft.CognitiveServices.Speech.Internal.HandleRelease

// System.InvalidOperationException

// System.InvalidOperationException

// Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs

// Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs

// Microsoft.CognitiveServices.Speech.SpeechRecognizer

// Microsoft.CognitiveServices.Speech.SpeechRecognizer

// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs

// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs

// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer

// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer

// Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate

// Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate

// Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate

// Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// System.ObjectDisposedException

// System.ObjectDisposedException
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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m4AF96C914341CEE0886E4227856300992E605D41_gshared (intptr_t ___0_nativeHandle, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_sender, RuntimeObject* ___1_e, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Byte>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.HandleRelease::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7 (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.HandleRelease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, intptr_t ___0_handle, HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* ___1_releaseHandle, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66 (RuntimeObject* ___0_item, String_t* ___1_message, const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetPropertyString(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetPropertyString_mE4586EBDDDD6EAAC938A0717F3ED064BF55EB83A (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_propHandle, int32_t ___1_id, String_t* ___2_name, String_t* ___3_defaultValue, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_mA2A5D5D755F5CBDC9B03E312EF298838134D8B1A (String_t* ___0_str, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9 (intptr_t ___0_hglobal, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_set_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_set_string_m560E9C1D207F12D2F29289986814E739D7D5F5AC (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_propbag, int32_t ___1_id, intptr_t ___2_name, intptr_t ___3_value, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33 (intptr_t ___0_hr, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_get_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_get_string_m85C22CC8AADAD49A93EBEAC06E243F29F897BE1D (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_propbag, int32_t ___1_id, intptr_t ___2_name, intptr_t ___3_defaultValue, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_free_string(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_free_string_m800EB31CCD2E85E0DFCA2F1355B137D919CC83F9 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_m1880DC13C87D09223E562FF88DBFB188219203E1 (intptr_t ___0_native, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SessionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* __this, intptr_t ___0_eventHandlePtr, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_offset(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_offset_m3353D90846CA1D744E0F1EEB82A52320F767AD68 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_eventHandle, uint64_t* ___1_offset, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::get_SessionId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* __this, const RuntimeMethod* method) ;
// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t RecognitionEventArgs_get_Offset_m7518854BD1D37BB220A79F81301A0A07E7D791A9_inline (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56 (RuntimeObject* ___0_provider, String_t* ___1_format, RuntimeObject* ___2_arg0, RuntimeObject* ___3_arg1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314 (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxFactory::GetDataFromHandleUsingDelegate(Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxFactory_GetDataFromHandleUsingDelegate_mA284C8A162A111BE768AF9E347B6D74753AD238D (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* ___0_functionPtr, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___1_handle, int32_t ___2_maxCharCount, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_reason(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.ResultReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_reason_mB22E2CCDD110DEC44AD292325BAF8CBCBD77089C (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_result, int32_t* ___1_reason, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_property_bag_m821908DAA6239D92C4DDA591D92F3BA6770A0EBF (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_result, intptr_t* ___1_hpropbag, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7 (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, intptr_t ___0_propertyBagPtr, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecognitionResult_set_Properties_m4882E5F4FF2BD9889CA0D982BA14CB48E6936468_inline (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75 (RuntimeObject* ___0_provider, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::.ctor(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails__ctor_m5ECA54A2F0D76D1BF8E39C7AEF5DCC99D8672E26 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* ___0_result, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_reason_canceled(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_reason_canceled_m2409DAC9A1FF682EDB03314E16DCBA148314D6B3 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_result, int32_t* ___1_reason, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_Reason(Microsoft.CognitiveServices.Speech.CancellationReason)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_Reason_m12D27884D7BBCF9EC1908A1DFF49066DEF4EF2B5_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_canceled_error_code(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationErrorCode&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_canceled_error_code_mCDE21F5EDFB5BA60E964C0CE460F74BF4EC55A74 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_result, int32_t* ___1_errorCode, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorCode(Microsoft.CognitiveServices.Speech.CancellationErrorCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorCode_m78B75A1457D448E18D427A192E95A964218C8A74_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorDetails(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorDetails_m22095079546C7E7DC32D28BB7D2271B3E68ACE93_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::get_Reason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorDetails()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStarted(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStarted_m641F7510BE5E1426DD4EE2765007FCA37E86E0F7 (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStopped(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStopped_mA727407C3AAB48CD19521F3FFF7E163A0E63455C (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechStartDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechStartDetected_m94DA4231F52F17425D472988B350E23C2A574C88 (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechEndDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechEndDetected_m21C1A7D4CCC4E33EC2EA05B48E44CC604E36C705 (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___0_value, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_started_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_started_set_callback_mF7269B2257F45837CCEC187E3EF7E0688CC445D7 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___1_callback, intptr_t ___2_context, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SessionStarted_m631F4CB4BF55A534C3A8CB8EAEC57EE7139BE4CD (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStarted_m1FB4C79584D375A664EFB1916F4127D741FBA016 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogErrorIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F (intptr_t ___0_hr, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_stopped_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_stopped_set_callback_m949170C5C61445F50B9C5480550D2AD4F7CE97D0 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___1_callback, intptr_t ___2_context, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SessionStopped_mC531DA001A86C34512638EC7AD42682AD216D32E (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStopped_m75B4EAF7FE72A73C707DD5AD1CD02D2A82F48AAA (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___0_value, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_start_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_start_detected_set_callback_m0EC66A25005B9C859A5897F59611FB88272A8F4A (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___1_callback, intptr_t ___2_context, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SpeechStartDetected_mC7B7A06E0F81282B1A983A1B99887C9E558BB750 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechStartDetected_m3DB6ED1521289E1BCB5BF3032F68C2452A2F8830 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___0_value, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_end_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_end_detected_set_callback_mCD9730AB877903CBAC9CE3FE89EC42975EEE9883 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___1_callback, intptr_t ___2_context, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SpeechEndDetected_m22831739B45057F6783CF4C784E8829A1A7D27A3 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechEndDetected_m335107F7B597E13480CF0F21EB83795CFFC9B4D8 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_m461DD416BC0A2D9A142D0B9F4C664D18143B96FF (String_t* ___0_message, int32_t ___1_line, String_t* ___2_caller, String_t* ___3_file, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___0_value, int32_t ___1_type, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6 (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.Recognizer>(System.IntPtr)
inline Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0 (intptr_t ___0_nativeHandle, const RuntimeMethod* method)
{
	return ((  Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* (*) (intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m4AF96C914341CEE0886E4227856300992E605D41_gshared)(___0_nativeHandle, method);
}
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m50F62D5F079DA3B408B05AEAA4CA07254840B5F5_inline (EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* __this, RuntimeObject* ___0_sender, SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*, RuntimeObject*, SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.RecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34 (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* __this, intptr_t ___0_eventHandlePtr, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mE007A9C567558111C4423757C653BB921489BC4B_inline (EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* __this, RuntimeObject* ___0_sender, RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*, RuntimeObject*, RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_async_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_async_handle_release_mD1E72A888C8A7F733BBCA13265EE0FCCC57CBE7B (intptr_t ___0_asyncHandle, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_mFE3B06A762EE00FF838458427E2F952FB5407BCF (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, intptr_t* ___1_asyncHandle, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_wait_for_m268ED182DC8D366E209F9F1AB84BE422EC684FC9 (intptr_t ___0_asyncHandle, uint32_t ___1_milliseconds, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_m69D0B06E76D75CF53DE02D6A404B05D6FBA22755 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, intptr_t* ___1_asyncHandle, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_wait_for_m09E1A2510DDB56EB568761E56CCFF6338FEDF50E (intptr_t ___0_asyncHandle, uint32_t ___1_milliseconds, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::Invoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_inline (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___0_phreco, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___1_speechconfig, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___2_audioInput, const RuntimeMethod* method) ;
// System.Void System.GC::KeepAlive(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GC_KeepAlive_m53833ADCAF719294E5D1DA13B067E31472C762F9 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, bool* ___0_success, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_m8BD4674A12DCA98CDD6818FD8F3D4721ADD38308 (intptr_t ___0_item, String_t* ___1_message, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744 (RuntimeObject* ___0_provider, String_t* ___1_format, RuntimeObject* ___2_arg0, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_get_property_bag_mC63C86FC0B561E654C02E74E5FA2422401E4BCAA (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_config, intptr_t* ___1_propbag, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::SetProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_SetProperty_m9E79AA2A21F823E849F29921DA476988C2C4DF1C (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_from_subscription_m3DEB42078EDD7746FD487010903FEA00D90900D3 (intptr_t* ___0_config, String_t* ___1_subscriptionKey, String_t* ___2_region, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig__ctor_m586768B4614A1778822601DF07F0319758E1BBE9 (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* __this, intptr_t ___0_configPtr, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionResult__ctor_mF52685BDF0D0D81056CF4F2D7929B837D3E4504E (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, intptr_t ___0_resultHandlePtr, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_result(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_result_mF0E0E2260FB3AE5D58E7F828258F477B17C30E2B (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_eventHandle, intptr_t* ___1_result, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionResult__ctor_mCCFDE1F4008AF5CEDAF8D163E8475887565BD056 (SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* __this, intptr_t ___0_resultPtr, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionEventArgs__ctor_mA12E8F0CEF640C514871ED1481C46B54CE92EE64 (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* __this, intptr_t ___0_eventHandlePtr, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.CancellationDetails Microsoft.CognitiveServices.Speech.CancellationDetails::FromResult(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* CancellationDetails_FromResult_m601E12548DEFE4F1D895C4E927442D35FEE17541 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* ___0_result, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_ErrorCode_m01B8889CC68F1443F822B1E8082F6B8378C723AF_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_Reason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_Reason_m43CDCCC1311B234FB9F7C31BF966478DEB156815_inline (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_ErrorCode_m54BF697777056D1E09CEDB6E005095970A48B5D2_inline (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognizing_mC85B8A7E5FC2E2D4FC053DBD8AC419F17468EB4F (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognized_m1F3199AAADDAAAD62E3A93985B2668A9A23E8205 (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Canceled_mF0152E00B21076D0AA20D551D4659ED141BA2A87 (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognizing_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognizing_set_callback_m191FB76BFA8D594D949CCA2F0D8780C001ADFEEE (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___1_callback, intptr_t ___2_context, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognizing_m16447A0416973172AB4D0CBAF6A8FC554B1E9294 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognizing_m5C73B8CE847979E6475EAC3240E7357FCA1F3E5F (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___0_value, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognized_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognized_set_callback_mF0B30872D6EAAE2A0DC15E02D87FE13A15C5EABB (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___1_callback, intptr_t ___2_context, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognized_mD50B625785C24BEBFF41F06CEB5D10434F934B83 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognized_mD722671640B2B0B316AF08C40613843C781E17C0 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___0_value, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_canceled_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_canceled_set_callback_m67781166E6D72910FC2767718B4667615A9CAD95 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___1_callback, intptr_t ___2_context, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Canceled_mCCA4C9985A5482241673E5F9DFAF8669412BA14B (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Canceled_m7AA55C10EEAE710C0581D5B235852FB30D142CB9 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetRecognizerFromConfigDelegate__ctor_m8225A337DC771AF4368C036689A77F76D48D4567 (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::FromConfig(Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate,Microsoft.CognitiveServices.Speech.SpeechConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* Recognizer_FromConfig_m4175FC1D5C82C82271CA7D9D2DDC89DE92321C66 (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* ___0_fromConfig, SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* ___1_speechConfig, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_m8136931FE9EB168C0F793BDF081194CEED40BE0A (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer__ctor_mB448C82F7106784983B2332E0C35FAC613A10A05 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoPtr, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_get_property_bag_mBABDBA1B6D8FBA89AA8F7EE89A3696B2260107F9 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, intptr_t* ___1_propbag, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeechRecognizer_set_Properties_mCEEEDD714A579195CF49B0F9E4609DFD1EE2C7FC_inline (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Finalize_m65C041518559BC7332B58EC3BD23603D6FAEA7F5 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::get_Properties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* SpeechRecognizer_get_Properties_m1C0886BAAE462E98012C7EF3CED1E0314E341024_inline (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Dispose_m41B4467C6470F75AD4C81138860A38D98B55E31B (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.SpeechRecognizer>(System.IntPtr)
inline SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8 (intptr_t ___0_nativeHandle, const RuntimeMethod* method)
{
	return ((  SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* (*) (intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m4AF96C914341CEE0886E4227856300992E605D41_gshared)(___0_nativeHandle, method);
}
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m81C94EA828C27A6F431E8F4B7679EAF346BCAB56_inline (EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* __this, RuntimeObject* ___0_sender, SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*, RuntimeObject*, SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionCanceledEventArgs__ctor_mE27E61BE7835AF73A8C25DD3FA2205632C9DC107 (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, intptr_t ___0_eventHandlePtr, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mBEDD561ECE0E8BE4C5E4D2C38542F5EA87F2483A_inline (EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* __this, RuntimeObject* ___0_sender, SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*, RuntimeObject*, SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::DoAsyncRecognitionAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_recoImplAction, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechTranslationConfig_speech_translation_config_from_subscription_m4C0F48066FF2492F9E8F47507F3BACD51ACDE0EB (intptr_t* ___0_config, String_t* ___1_subscriptionKey, String_t* ___2_region, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechTranslationConfig__ctor_m49EEA16B549465C7EB65801FC0687EA30E6F7D5E (SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B* __this, intptr_t ___0_configPtr, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_add_target_language(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechTranslationConfig_speech_translation_config_add_target_language_m0AD094DCDB4706C83B0F3C8839B077191D925B8A (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_config, String_t* ___1_language, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::GetTranslationTexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionResult_GetTranslationTexts_m080C1A8E4A40D60797BC62D07B58E27AAB1A6687 (TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mF8E53122BE8F0F617357DFB75C3912D1242DE263 (RuntimeObject* ___0_provider, String_t* ___1_format, RuntimeObject* ___2_arg0, RuntimeObject* ___3_arg1, RuntimeObject* ___4_arg2, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::get_Translations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TranslationRecognitionResult_get_Translations_mF40040BB24857FB1E87A6ACAEE7901DA628709F3 (TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_is_valid(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecognitionResult_recognizer_result_handle_is_valid_m8353972B72D31F49BB55ACE8F797DD4F92DBC440 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_result, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_text_result_get_translation_count(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UIntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_text_result_get_translation_count_m0E9FF9C675F4E98324B160D60512B7440FA7B561 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_handle, uintptr_t* ___1_count, const RuntimeMethod* method) ;
// System.Void System.UIntPtr::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27 (uintptr_t* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_text_result_get_translation(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UIntPtr,Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle,Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle,System.UIntPtr&,System.UIntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_text_result_get_translation_mF003C3EB7A62C13EAF79EC3D4E1A73FB920AE809 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_handle, uintptr_t ___1_index, Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* ___2_language, Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* ___3_text, uintptr_t* ___4_languageSize, uintptr_t* ___5_textSize, const RuntimeMethod* method) ;
// System.UInt32 System.UIntPtr::ToUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965 (uintptr_t* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8StringHandle__ctor_mD34C2052B76C3D83A0F720690F1C70E50743232A (Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* __this, uint32_t ___0_maxLength, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.UInt64 System.UIntPtr::ToUInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UIntPtr_ToUInt64_m7789E1D758F7AA7B1AAADB296EBC04E026A3F9FA (uintptr_t* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Recognizing_m17C8B5DC53375C671FD8E9F158A49378C62BD3D3 (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Recognized_m1A40021BFA25C2FB66E2E204DD020C3711F00B22 (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Canceled_mFD1B32ACF0B0EE83DE442139C160899879A51E46 (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_SynthesisResult(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_SynthesisResult_m8821CF5132DBD863346A36837637C0723E46F6E8 (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Recognizing_m7F06A14055F7EA343EDB417019887749F95204BD (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Recognizing_mDFCC6818686A988C4401D429A450539CDEAA1653 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Recognized_mC948CE4C633F0B3989AB538E48CED770EAA2AB24 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Recognized_mFA887E35EAAE84E06620A043A51B69403DDF9288 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Canceled_mBC507ED133CE7C79ED21D94FCBDD56491F8DC04F (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Canceled_m9764030E5C9EFF7B4C48AE21DD87E5BBC5E0640F (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer__ctor_m9474B62F13778D537B18BB26C58D7CD4DD2B13D6 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TranslationRecognizer_set_Properties_m5576585D06ED00C702202DE79DA2E1DE600CA8C0_inline (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___0_value, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::translator_synthesizing_audio_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_translator_synthesizing_audio_set_callback_m0FD523ED521FB94BE327B95BE9876568D6FF8CF5 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___1_callback, intptr_t ___2_context, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::get_Properties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* TranslationRecognizer_get_Properties_m041ED0EC39816383C2789C9784B00B7F50589ABF_inline (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, const RuntimeMethod* method) ;
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer>(System.IntPtr)
inline TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m76C967D2A15D20C4366D5AEE896D36E71F71FEFE (intptr_t ___0_nativeHandle, const RuntimeMethod* method)
{
	return ((  TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* (*) (intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m4AF96C914341CEE0886E4227856300992E605D41_gshared)(___0_nativeHandle, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionEventArgs__ctor_m8AF9A74DEA81084992DC783C79D2DFC81A1230A7 (TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* __this, intptr_t ___0_eventHandlePtr, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m7605B37CD34250471B68BAA9242577D08297680A_inline (EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* __this, RuntimeObject* ___0_sender, TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*, RuntimeObject*, TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionCanceledEventArgs__ctor_mC0DAD5191F911E2119197BF1876B9DFD46B7E630 (TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* __this, intptr_t ___0_eventHandlePtr, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mA79A2261291A05C83B4486D0FE2D7D1865B3A0F8_inline (EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* __this, RuntimeObject* ___0_sender, TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8*, RuntimeObject*, TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisEventArgs__ctor_m0A5A5BCAA5952B55D937B2971ED4AB6F46AFA100 (TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F* __this, intptr_t ___0_eventHandlePtr, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m26037260B36BA3D3C83D40C0FE919586B24E9553_inline (EventHandler_1_tB299EE0561708ADFB5D5F63E18C58E89D72E7E6E* __this, RuntimeObject* ___0_sender, TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tB299EE0561708ADFB5D5F63E18C58E89D72E7E6E*, RuntimeObject*, TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// T[] System.Array::Empty<System.Byte>()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline (const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (const RuntimeMethod*))Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline)(method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::GetAudioData(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisResult_GetAudioData_mC7C4FABC68E4574F59A8D91513C4B4F560226DED (TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_resultHandle, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::get_Reason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationSynthesisResult_get_Reason_mA851E1881441C4F278FA28AF75BE94B21DFC327F_inline (TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_synthesis_result_get_audio_data(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_synthesis_result_get_audio_data_m8C4437638C590C15AB7071D1589E4B8BEE3CCD2A (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_handle, intptr_t ___1_audioBuffer, int32_t* ___2_lengthPointer, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F (int32_t ___0_cb, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___0_source, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_destination, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisResult__ctor_m5504E3A57CC4B725D64C1981A97FB918F653847F (TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* __this, intptr_t ___0_resultPtr, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* TranslationSynthesisEventArgs_get_Result_mCA8BD226299930517C948A066CB4B247A304C515_inline (TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionResult__ctor_mEC410E2929DA5612330E8C4521CD1363E7105CA1 (TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* __this, intptr_t ___0_resultPtr, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* TranslationRecognitionEventArgs_get_Result_m047C28B1FF5C9231EF5D9CE4957C05CD2E4B5CDD_inline (TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* __this, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_Reason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_Reason_m93D03951586AFFFF3DF9AD531E90A6A6AC5A2809_inline (TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* __this, const RuntimeMethod* method) ;
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_ErrorCode_mCD275DF83031DDBD93498938B45A578946631D24_inline (TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* __this, const RuntimeMethod* method) ;
// System.Object[] Microsoft.CognitiveServices.Speech.Internal.Diagnostics::Args(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Diagnostics_Args_mDCDEA6887D47370C68291C5097A9E602B0B572B5 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Object[],System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_mCE40F2444CF745BDF2E551F36C2065AC9FFFC5F9 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, int32_t ___2_line, String_t* ___3_caller, String_t* ___4_file, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::diagnostics_log_trace_string(System.Int32,System.String,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsInterop_diagnostics_log_trace_string_mC082C4D355C2E875686E6FA011052567BC208E5B (int32_t ___0_level, String_t* ___1_title, String_t* ___2_fileName, int32_t ___3_lineNumber, String_t* ___4_message, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.DotNetFrameworkAnyCpuSupport::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332 (const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_message(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_message_m2EB925EDBB9C1747CC78CFA9C3887DB63E1121FF (intptr_t ___0_errorHandle, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_error_code(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_error_code_m275D112661979DFB5BBF7AFA6EAB0DA45CE8C7D5 (intptr_t ___0_errorHandle, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F (intptr_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292 (intptr_t* __this, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_release_m8E082C5F6552726FA2BD8031657DC4942AE702AC (intptr_t ___0_errorHandle, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___0_invalidHandleValue, bool ___1_ownsHandle, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7 (intptr_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_inline (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___0_hresult, const RuntimeMethod* method) ;
// System.String System.IntPtr::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntPtr_ToString_m4B664F765633183265DE764BECD5D78FCCA20A13 (intptr_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Finalize_m37C72FD2FE3D87E32CB41FAA2FC1C6B03510337B (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::Invoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_inline (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_handle, intptr_t ___1_result, uint32_t ___2_maxCharCount, const RuntimeMethod* method) ;
// System.Int32 Microsoft.CognitiveServices.Speech.Internal.SpxError::GetErrorCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpxError_GetErrorCode_m4B6341D56629F25358D246B76DD650A8E1974BB6 (intptr_t ___0_errorHandle, const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxError::GetMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxError_GetMessage_mE9B98B4B6AB48FDC221BBB8A8ABF51CCD7B45864 (intptr_t ___0_errorHandle, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8 (int32_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.String System.String::ToLower(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E (String_t* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___0_culture, const RuntimeMethod* method) ;
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.SpxError::ReleaseNoThrow(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpxError_ReleaseNoThrow_m5FB663A7041D968F8339C0C5891DD79A01755754 (intptr_t ___0_errorHandle, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82 (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxError_Release_mB9B1180BC0AD85536AE68C00A6320204E3D8812A (intptr_t ___0_errorHandle, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A (intptr_t ___0_pointer, int32_t ___1_offset, const RuntimeMethod* method) ;
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Marshal_ReadByte_m7BB641553588142FA7C6E4653C6AE83A0CEFD25F (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_m70188DCC0BBF343875B0FC908360B3A2D62BA41C (intptr_t ___0_native, int32_t ___1_lengthInBytes, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_m3E540F085F553C8ED22C810E96FD1B920DE847C5 (String_t* ___0_str, int32_t* ___1_length, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_startIndex, intptr_t ___2_destination, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::WriteByte(System.IntPtr,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_WriteByte_m066886B8F93D94A1EC21B990179BF6C41AC9762B (intptr_t ___0_ptr, uint8_t ___1_val, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.UInt32 Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Utf8StringHandle_get_Length_mDD8F79BC55C56CE25DAFB5D7264D884E44FA5724_inline (Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* __this, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC (intptr_t* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_m9C4DA3126D84801FE8D2F88B97B2F14D59391504 (intptr_t ___0_cb, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeHandle_get_IsClosed_mD2CD4AA6E3B0A242E48080F18BC07199CAB80273 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8StringHandle__ctor_m88DFF0E652E83213BD6D93F3CE066760916F0AEA (Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* __this, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_reason_canceled(void*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_canceled_error_code(void*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL speech_config_from_subscription(intptr_t*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL speech_config_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL speech_config_get_property_bag(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL speech_translation_config_from_subscription(intptr_t*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL speech_translation_config_add_target_language(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C void STDCALL diagnostics_log_trace_string(int32_t, char*, char*, int32_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL error_get_message(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL error_get_error_code(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL error_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_event_handle_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_create_speech_recognizer_from_config(intptr_t*, void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_create_translation_recognizer_from_config(intptr_t*, void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL property_bag_set_string(void*, int32_t, intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL property_bag_get_string(void*, int32_t, intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL property_bag_free_string(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL property_bag_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_reason(void*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_result_id(void*, intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_text(void*, intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_property_bag(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C uint8_t STDCALL recognizer_result_handle_is_valid(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_result_handle_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL translation_text_result_get_translation_count(void*, uintptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL translation_text_result_get_translation(void*, uintptr_t, void*, void*, uintptr_t*, uintptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL translation_synthesis_result_get_audio_data(void*, intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_get_property_bag(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_handle_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_start_continuous_recognition_async(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_start_continuous_recognition_async_wait_for(intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_stop_continuous_recognition_async(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_stop_continuous_recognition_async_wait_for(intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_async_handle_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_recognition_event_get_offset(void*, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_session_event_get_session_id(void*, intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_recognition_event_get_result(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_session_started_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_session_stopped_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_speech_start_detected_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_speech_end_detected_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_recognizing_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_recognized_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_canceled_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL translator_synthesizing_audio_set_callback(void*, Il2CppMethodPointer, intptr_t);
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
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7 (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, intptr_t ___0_propertyBagPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_property_bag_release_mEE19009AAC5E2984AD636297392382E086A42E9A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0 = ___0_propertyBagPtr;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		intptr_t L_4 = ___0_propertyBagPtr;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_5 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_5, NULL, (intptr_t)((void*)PropertyCollection_property_bag_release_mEE19009AAC5E2984AD636297392382E086A42E9A_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_6, L_4, L_5, NULL);
		__this->___propbagHandle_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___propbagHandle_0), (void*)L_6);
	}

IL_0031:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_Close_mD3C12EE3FDB07C2A9D8C5E7C35C968E5A299BD9F (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, const RuntimeMethod* method) 
{
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = __this->___propbagHandle_0;
		NullCheck(L_0);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_0, NULL);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetProperty_mC3CEE491F6DF720BDAE92D54A47E6420DCF146B5 (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = __this->___propbagHandle_0;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_0, (String_t*)NULL, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = __this->___propbagHandle_0;
		int32_t L_2 = ___0_id;
		String_t* L_3;
		L_3 = PropertyCollection_GetPropertyString_mE4586EBDDDD6EAAC938A0717F3ED064BF55EB83A(__this, L_1, L_2, (String_t*)NULL, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(Microsoft.CognitiveServices.Speech.PropertyId,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_SetProperty_mA4F3EDF9EE715D7F2C052E11948FCF36A4400024 (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, int32_t ___0_id, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tA36C6976925F4EAA7A7EC5B6753E9DFB8B45ADAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = __this->___propbagHandle_0;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_0, (String_t*)NULL, NULL);
		String_t* L_1 = ___1_value;
		intptr_t L_2;
		L_2 = Utf8StringMarshaler_MarshalManagedToNative_mA2A5D5D755F5CBDC9B03E312EF298838134D8B1A(L_1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				intptr_t L_3 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = __this->___propbagHandle_0;
			int32_t L_5 = ___0_id;
			intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
			intptr_t L_7 = V_0;
			il2cpp_codegen_runtime_class_init_inline(PropertyCollection_tA36C6976925F4EAA7A7EC5B6753E9DFB8B45ADAE_il2cpp_TypeInfo_var);
			intptr_t L_8;
			L_8 = PropertyCollection_property_bag_set_string_m560E9C1D207F12D2F29289986814E739D7D5F5AC(L_4, L_5, L_6, L_7, NULL);
			SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_8, NULL);
			goto IL_003b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_SetProperty_m32FCC0FEE788D8E7BC18427D47C37535F389EC94 (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, String_t* ___0_propertyName, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tA36C6976925F4EAA7A7EC5B6753E9DFB8B45ADAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = __this->___propbagHandle_0;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_0, (String_t*)NULL, NULL);
		String_t* L_1 = ___1_value;
		intptr_t L_2;
		L_2 = Utf8StringMarshaler_MarshalManagedToNative_mA2A5D5D755F5CBDC9B03E312EF298838134D8B1A(L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = ___0_propertyName;
		intptr_t L_4;
		L_4 = Utf8StringMarshaler_MarshalManagedToNative_mA2A5D5D755F5CBDC9B03E312EF298838134D8B1A(L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				intptr_t L_5 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_5, NULL);
				intptr_t L_6 = V_1;
				Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = __this->___propbagHandle_0;
			intptr_t L_8 = V_1;
			intptr_t L_9 = V_0;
			il2cpp_codegen_runtime_class_init_inline(PropertyCollection_tA36C6976925F4EAA7A7EC5B6753E9DFB8B45ADAE_il2cpp_TypeInfo_var);
			intptr_t L_10;
			L_10 = PropertyCollection_property_bag_set_string_m560E9C1D207F12D2F29289986814E739D7D5F5AC(L_7, (-1), L_8, L_9, NULL);
			SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_10, NULL);
			goto IL_0045;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetPropertyString(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetPropertyString_mE4586EBDDDD6EAAC938A0717F3ED064BF55EB83A (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_propHandle, int32_t ___1_id, String_t* ___2_name, String_t* ___3_defaultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tA36C6976925F4EAA7A7EC5B6753E9DFB8B45ADAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		String_t* L_1 = ___2_name;
		intptr_t L_2;
		L_2 = Utf8StringMarshaler_MarshalManagedToNative_mA2A5D5D755F5CBDC9B03E312EF298838134D8B1A(L_1, NULL);
		V_1 = L_2;
		String_t* L_3 = ___3_defaultValue;
		intptr_t L_4;
		L_4 = Utf8StringMarshaler_MarshalManagedToNative_mA2A5D5D755F5CBDC9B03E312EF298838134D8B1A(L_3, NULL);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				intptr_t L_5 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_5, NULL);
				intptr_t L_6 = V_2;
				Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = ___0_propHandle;
				int32_t L_8 = ___1_id;
				intptr_t L_9 = V_1;
				intptr_t L_10 = V_2;
				il2cpp_codegen_runtime_class_init_inline(PropertyCollection_tA36C6976925F4EAA7A7EC5B6753E9DFB8B45ADAE_il2cpp_TypeInfo_var);
				intptr_t L_11;
				L_11 = PropertyCollection_property_bag_get_string_m85C22CC8AADAD49A93EBEAC06E243F29F897BE1D(L_7, L_8, L_9, L_10, NULL);
				V_3 = L_11;
				intptr_t L_12 = V_3;
				intptr_t L_13 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_14;
				L_14 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_12, L_13, NULL);
				V_4 = L_14;
				bool L_15 = V_4;
				if (!L_15)
				{
					goto IL_004e_1;
				}
			}
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_003e_1:
					{// begin finally (depth: 2)
						intptr_t L_16 = V_3;
						il2cpp_codegen_runtime_class_init_inline(PropertyCollection_tA36C6976925F4EAA7A7EC5B6753E9DFB8B45ADAE_il2cpp_TypeInfo_var);
						intptr_t L_17;
						L_17 = PropertyCollection_property_bag_free_string_m800EB31CCD2E85E0DFCA2F1355B137D919CC83F9(L_16, NULL);
						SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_17, NULL);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					intptr_t L_18 = V_3;
					String_t* L_19;
					L_19 = Utf8StringMarshaler_MarshalNativeToManaged_m1880DC13C87D09223E562FF88DBFB188219203E1(L_18, NULL);
					V_0 = L_19;
					goto IL_004d_1;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_004d_1:
			{
			}

IL_004e_1:
			{
				goto IL_0062;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0062:
	{
		String_t* L_20 = V_0;
		V_5 = L_20;
		goto IL_0067;
	}

IL_0067:
	{
		String_t* L_21 = V_5;
		return L_21;
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
// System.Void Microsoft.CognitiveServices.Speech.RecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34 (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* __this, intptr_t ___0_eventHandlePtr, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		intptr_t L_0 = ___0_eventHandlePtr;
		SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA(__this, L_0, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ((SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*)__this)->___eventHandle_1;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_1, (String_t*)NULL, NULL);
		V_0 = ((int64_t)0);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*)__this)->___eventHandle_1;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognition_event_get_offset_m3353D90846CA1D744E0F1EEB82A52320F767AD68(L_2, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_3, NULL);
		uint64_t L_4 = V_0;
		__this->___U3COffsetU3Ek__BackingField_5 = L_4;
		return;
	}
}
// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t RecognitionEventArgs_get_Offset_m7518854BD1D37BB220A79F81301A0A07E7D791A9 (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3COffsetU3Ek__BackingField_5;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionEventArgs_ToString_mF2E5686250B94CC3327CD6EB9EC1F89F365E8788 (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74950E71ECDE7F282725B371C332DD6851AC6CDE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_1;
		L_1 = SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline(__this, NULL);
		uint64_t L_2;
		L_2 = RecognitionEventArgs_get_Offset_m7518854BD1D37BB220A79F81301A0A07E7D791A9_inline(__this, NULL);
		uint64_t L_3 = L_2;
		RuntimeObject* L_4 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_0, _stringLiteral74950E71ECDE7F282725B371C332DD6851AC6CDE, L_1, L_4, NULL);
		V_0 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		String_t* L_6 = V_0;
		return L_6;
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
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionResult__ctor_mF52685BDF0D0D81056CF4F2D7929B837D3E4504E (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, intptr_t ___0_resultHandlePtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionResult_recognizer_result_handle_release_m9FC496DA00E94757F730641DFF06C371E45644D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionResult_result_get_result_id_m9502FF6B24BD822E33C9C8453CB7EE06F510035D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionResult_result_get_text_mA7F1307B026F922E2CD4B260F686F45FA661844D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0 = ___0_resultHandlePtr;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_00ba;
		}
	}
	{
		intptr_t L_4 = ___0_resultHandlePtr;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_5 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_5, NULL, (intptr_t)((void*)RecognitionResult_recognizer_result_handle_release_m9FC496DA00E94757F730641DFF06C371E45644D7_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_6, L_4, L_5, NULL);
		__this->___resultHandle_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultHandle_4), (void*)L_6);
		GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* L_7 = (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B*)il2cpp_codegen_object_new(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314(L_7, NULL, (intptr_t)((void*)RecognitionResult_result_get_result_id_m9502FF6B24BD822E33C9C8453CB7EE06F510035D_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_8 = __this->___resultHandle_4;
		il2cpp_codegen_runtime_class_init_inline(SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = SpxFactory_GetDataFromHandleUsingDelegate_mA284C8A162A111BE768AF9E347B6D74753AD238D(L_7, L_8, ((int32_t)2048), NULL);
		__this->___U3CResultIdU3Ek__BackingField_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultIdU3Ek__BackingField_0), (void*)L_9);
		GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* L_10 = (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B*)il2cpp_codegen_object_new(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314(L_10, NULL, (intptr_t)((void*)RecognitionResult_result_get_text_mA7F1307B026F922E2CD4B260F686F45FA661844D_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_11 = __this->___resultHandle_4;
		String_t* L_12;
		L_12 = SpxFactory_GetDataFromHandleUsingDelegate_mA284C8A162A111BE768AF9E347B6D74753AD238D(L_10, L_11, ((int32_t)2048), NULL);
		__this->___U3CTextU3Ek__BackingField_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_2), (void*)L_12);
		V_1 = 0;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_13 = __this->___resultHandle_4;
		intptr_t L_14;
		L_14 = RecognitionResult_result_get_reason_mB22E2CCDD110DEC44AD292325BAF8CBCBD77089C(L_13, (&V_1), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_14, NULL);
		int32_t L_15 = V_1;
		__this->___U3CReasonU3Ek__BackingField_1 = L_15;
		intptr_t L_16 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_2 = L_16;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_17 = __this->___resultHandle_4;
		intptr_t L_18;
		L_18 = RecognitionResult_result_get_property_bag_m821908DAA6239D92C4DDA591D92F3BA6770A0EBF(L_17, (&V_2), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_18, NULL);
		intptr_t L_19 = V_2;
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_20 = (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53*)il2cpp_codegen_object_new(PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7(L_20, L_19, NULL);
		RecognitionResult_set_Properties_m4882E5F4FF2BD9889CA0D982BA14CB48E6936468_inline(__this, L_20, NULL);
	}

IL_00ba:
	{
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionResult_get_ResultId_m9CF0F0A305756122CEFD17C636900B33C167A973 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CResultIdU3Ek__BackingField_0;
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecognitionResult_get_Reason_m066811BCC260ED5344D289BE7930228203781E67 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_1;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionResult_get_Text_mDC9F2CE6BE9519B218C81FECCC1BC35CA7274836 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_2;
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* RecognitionResult_get_Properties_mBC89268B2B6560AC90F7EE6837AB6E3657B212D3 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___U3CPropertiesU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionResult_set_Properties_m4882E5F4FF2BD9889CA0D982BA14CB48E6936468 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___0_value, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = ___0_value;
		__this->___U3CPropertiesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionResult_ToString_m7C6EE65B05B5F984DB102F9041EFDA7403547F95 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6260956A285A95B964811F944839C8CA994BAAD8);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, __this);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason() */, __this);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text() */, __this);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_11;
		L_11 = VirtualFuncInvoker0< PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* >::Invoke(7 /* Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties() */, __this);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker1< String_t*, int32_t >::Invoke(5 /* System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId) */, L_11, ((int32_t)5000));
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_0, _stringLiteral6260956A285A95B964811F944839C8CA994BAAD8, L_10, NULL);
		V_0 = L_13;
		goto IL_004c;
	}

IL_004c:
	{
		String_t* L_14 = V_0;
		return L_14;
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
// Microsoft.CognitiveServices.Speech.CancellationDetails Microsoft.CognitiveServices.Speech.CancellationDetails::FromResult(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* CancellationDetails_FromResult_m601E12548DEFE4F1D895C4E927442D35FEE17541 (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* V_0 = NULL;
	{
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_0 = ___0_result;
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_1 = (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A*)il2cpp_codegen_object_new(CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CancellationDetails__ctor_m5ECA54A2F0D76D1BF8E39C7AEF5DCC99D8672E26(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::.ctor(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails__ctor_m5ECA54A2F0D76D1BF8E39C7AEF5DCC99D8672E26 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationDetails_tA3D676EDF1007208DD29A9E1C9FAE252FA7AC481_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF28770BAFF3BD72A14677B13D79FE1286316B04C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__this->___recognitionResult_3 = (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognitionResult_3), (void*)(RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_0 = ___0_result;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_0, (String_t*)NULL, NULL);
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_1 = ___0_result;
		__this->___recognitionResult_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognitionResult_3), (void*)L_1);
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_2 = __this->___recognitionResult_3;
		NullCheck(L_2);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = L_2->___resultHandle_4;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_3, _stringLiteralF28770BAFF3BD72A14677B13D79FE1286316B04C, NULL);
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_4 = __this->___recognitionResult_3;
		NullCheck(L_4);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = L_4->___resultHandle_4;
		il2cpp_codegen_runtime_class_init_inline(CancellationDetails_tA3D676EDF1007208DD29A9E1C9FAE252FA7AC481_il2cpp_TypeInfo_var);
		intptr_t L_6;
		L_6 = CancellationDetails_result_get_reason_canceled_m2409DAC9A1FF682EDB03314E16DCBA148314D6B3(L_5, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_6, NULL);
		int32_t L_7 = V_0;
		CancellationDetails_set_Reason_m12D27884D7BBCF9EC1908A1DFF49066DEF4EF2B5_inline(__this, L_7, NULL);
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_8 = __this->___recognitionResult_3;
		NullCheck(L_8);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_9 = L_8->___resultHandle_4;
		intptr_t L_10;
		L_10 = CancellationDetails_result_get_canceled_error_code_mCDE21F5EDFB5BA60E964C0CE460F74BF4EC55A74(L_9, (&V_1), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_10, NULL);
		int32_t L_11 = V_1;
		CancellationDetails_set_ErrorCode_m78B75A1457D448E18D427A192E95A964218C8A74_inline(__this, L_11, NULL);
		RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* L_12 = __this->___recognitionResult_3;
		NullCheck(L_12);
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_13;
		L_13 = VirtualFuncInvoker0< PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* >::Invoke(7 /* Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties() */, L_12);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker1< String_t*, int32_t >::Invoke(5 /* System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId) */, L_13, ((int32_t)5001));
		CancellationDetails_set_ErrorDetails_m22095079546C7E7DC32D28BB7D2271B3E68ACE93_inline(__this, L_14, NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_Reason(Microsoft.CognitiveServices.Speech.CancellationReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails_set_Reason_m12D27884D7BBCF9EC1908A1DFF49066DEF4EF2B5 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CReasonU3Ek__BackingField_0 = L_0;
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_ErrorCode_m01B8889CC68F1443F822B1E8082F6B8378C723AF (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorCode(Microsoft.CognitiveServices.Speech.CancellationErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorCode_m78B75A1457D448E18D427A192E95A964218C8A74 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CErrorCodeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorDetails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CErrorDetailsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorDetails(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorDetails_m22095079546C7E7DC32D28BB7D2271B3E68ACE93 (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CErrorDetailsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorDetailsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CancellationDetails_ToString_m5E209DF29443488B64A6A0635234FD138DA3853B (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationReason_t51FBE96029389530BF9FEE71742677C3DFF019A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E8084C52A356BA811825A26D2A68087D1EE1AE6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		int32_t L_1;
		L_1 = CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180_inline(__this, NULL);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(CancellationReason_t51FBE96029389530BF9FEE71742677C3DFF019A5_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636_inline(__this, NULL);
		String_t* L_5;
		L_5 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_0, _stringLiteral8E8084C52A356BA811825A26D2A68087D1EE1AE6, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		String_t* L_6 = V_0;
		return L_6;
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
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SetSessionStarted_m641F7510BE5E1426DD4EE2765007FCA37E86E0F7(intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SetSessionStarted_m641F7510BE5E1426DD4EE2765007FCA37E86E0F7(___0_hreco, ___1_hevent, ___2_pvContext, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SetSessionStopped_mA727407C3AAB48CD19521F3FFF7E163A0E63455C(intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SetSessionStopped_mA727407C3AAB48CD19521F3FFF7E163A0E63455C(___0_hreco, ___1_hevent, ___2_pvContext, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SpeechStartDetected_m94DA4231F52F17425D472988B350E23C2A574C88(intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SpeechStartDetected_m94DA4231F52F17425D472988B350E23C2A574C88(___0_hreco, ___1_hevent, ___2_pvContext, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SpeechEndDetected_m21C1A7D4CCC4E33EC2EA05B48E44CC604E36C705(intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SpeechEndDetected_m21C1A7D4CCC4E33EC2EA05B48E44CC604E36C705(___0_hreco, ___1_hevent, ___2_pvContext, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SessionStarted_m631F4CB4BF55A534C3A8CB8EAEC57EE7139BE4CD (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_0 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_1 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_2 = NULL;
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_0 = __this->____SessionStarted_0;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_2 = V_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)Castclass((RuntimeObject*)L_4, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07_il2cpp_TypeInfo_var));
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07** L_5 = (EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07**)(&__this->____SessionStarted_0);
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_6 = V_2;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_7 = V_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_9 = V_0;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)L_9) == ((RuntimeObject*)(EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStarted_m1FB4C79584D375A664EFB1916F4127D741FBA016 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_0 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_1 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_2 = NULL;
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_0 = __this->____SessionStarted_0;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_2 = V_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)Castclass((RuntimeObject*)L_4, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07_il2cpp_TypeInfo_var));
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07** L_5 = (EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07**)(&__this->____SessionStarted_0);
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_6 = V_2;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_7 = V_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_9 = V_0;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)L_9) == ((RuntimeObject*)(EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SessionStopped_mC531DA001A86C34512638EC7AD42682AD216D32E (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_0 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_1 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_2 = NULL;
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_0 = __this->____SessionStopped_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_2 = V_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)Castclass((RuntimeObject*)L_4, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07_il2cpp_TypeInfo_var));
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07** L_5 = (EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07**)(&__this->____SessionStopped_1);
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_6 = V_2;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_7 = V_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_9 = V_0;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)L_9) == ((RuntimeObject*)(EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStopped_m75B4EAF7FE72A73C707DD5AD1CD02D2A82F48AAA (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_0 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_1 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* V_2 = NULL;
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_0 = __this->____SessionStopped_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_2 = V_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)Castclass((RuntimeObject*)L_4, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07_il2cpp_TypeInfo_var));
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07** L_5 = (EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07**)(&__this->____SessionStopped_1);
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_6 = V_2;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_7 = V_1;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_9 = V_0;
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)L_9) == ((RuntimeObject*)(EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SpeechStartDetected_mC7B7A06E0F81282B1A983A1B99887C9E558BB750 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_0 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_1 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_2 = NULL;
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_0 = __this->____SpeechStartDetected_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_2 = V_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)Castclass((RuntimeObject*)L_4, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0_il2cpp_TypeInfo_var));
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0** L_5 = (EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0**)(&__this->____SpeechStartDetected_2);
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_6 = V_2;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_7 = V_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_9 = V_0;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)L_9) == ((RuntimeObject*)(EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechStartDetected_m3DB6ED1521289E1BCB5BF3032F68C2452A2F8830 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_0 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_1 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_2 = NULL;
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_0 = __this->____SpeechStartDetected_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_2 = V_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)Castclass((RuntimeObject*)L_4, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0_il2cpp_TypeInfo_var));
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0** L_5 = (EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0**)(&__this->____SpeechStartDetected_2);
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_6 = V_2;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_7 = V_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_9 = V_0;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)L_9) == ((RuntimeObject*)(EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SpeechEndDetected_m22831739B45057F6783CF4C784E8829A1A7D27A3 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_0 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_1 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_2 = NULL;
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_0 = __this->____SpeechEndDetected_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_2 = V_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)Castclass((RuntimeObject*)L_4, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0_il2cpp_TypeInfo_var));
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0** L_5 = (EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0**)(&__this->____SpeechEndDetected_3);
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_6 = V_2;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_7 = V_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_9 = V_0;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)L_9) == ((RuntimeObject*)(EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechEndDetected_m335107F7B597E13480CF0F21EB83795CFFC9B4D8 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_0 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_1 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* V_2 = NULL;
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_0 = __this->____SpeechEndDetected_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_2 = V_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)Castclass((RuntimeObject*)L_4, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0_il2cpp_TypeInfo_var));
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0** L_5 = (EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0**)(&__this->____SpeechEndDetected_3);
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_6 = V_2;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_7 = V_1;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_9 = V_0;
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)L_9) == ((RuntimeObject*)(EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add_SessionStarted_mB7176B7EFAA7EF6CC237B3D46C760A7C309968BD (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_0 = __this->____SessionStarted_0;
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = __this->___recoHandle_4;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_3 = __this->___sessionStartedCallbackDelegate_12;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4 = __this->___gch_14;
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_4, NULL);
		intptr_t L_6;
		L_6 = Recognizer_recognizer_session_started_set_callback_mF7269B2257F45837CCEC187E3EF7E0688CC445D7(L_2, L_3, L_5, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_6, NULL);
	}

IL_0032:
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_7 = ___0_value;
		Recognizer_add__SessionStarted_m631F4CB4BF55A534C3A8CB8EAEC57EE7139BE4CD(__this, L_7, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove_SessionStarted_m80E3AA294063F4AC3B94DFC9268FB59E4ACEE3AC (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_0 = ___0_value;
		Recognizer_remove__SessionStarted_m1FB4C79584D375A664EFB1916F4127D741FBA016(__this, L_0, NULL);
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_1 = __this->____SessionStarted_0;
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = __this->___recoHandle_4;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_5;
		L_5 = Recognizer_recognizer_session_started_set_callback_mF7269B2257F45837CCEC187E3EF7E0688CC445D7(L_3, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_4, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_5, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add_SessionStopped_mE532CD715B13EE7A206285576688D2F091B716AA (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_0 = __this->____SessionStopped_1;
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = __this->___recoHandle_4;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_3 = __this->___sessionStoppedCallbackDelegate_13;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4 = __this->___gch_14;
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_4, NULL);
		intptr_t L_6;
		L_6 = Recognizer_recognizer_session_stopped_set_callback_m949170C5C61445F50B9C5480550D2AD4F7CE97D0(L_2, L_3, L_5, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_6, NULL);
	}

IL_0032:
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_7 = ___0_value;
		Recognizer_add__SessionStopped_mC531DA001A86C34512638EC7AD42682AD216D32E(__this, L_7, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove_SessionStopped_m07F4261BD9721CA3EBEB2322AF5887A3089D04B7 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_0 = ___0_value;
		Recognizer_remove__SessionStopped_m75B4EAF7FE72A73C707DD5AD1CD02D2A82F48AAA(__this, L_0, NULL);
		EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_1 = __this->____SessionStopped_1;
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = __this->___recoHandle_4;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_5;
		L_5 = Recognizer_recognizer_session_stopped_set_callback_m949170C5C61445F50B9C5480550D2AD4F7CE97D0(L_3, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_4, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_5, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add_SpeechStartDetected_mA70F8631EF165EC1924C86E7DE622BAEC1A84EC6 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_0 = __this->____SpeechStartDetected_2;
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = __this->___recoHandle_4;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_3 = __this->___speechStartDetectedCallbackDelegate_10;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4 = __this->___gch_14;
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_4, NULL);
		intptr_t L_6;
		L_6 = Recognizer_recognizer_speech_start_detected_set_callback_m0EC66A25005B9C859A5897F59611FB88272A8F4A(L_2, L_3, L_5, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_6, NULL);
	}

IL_0032:
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_7 = ___0_value;
		Recognizer_add__SpeechStartDetected_mC7B7A06E0F81282B1A983A1B99887C9E558BB750(__this, L_7, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove_SpeechStartDetected_m36A954D8D9CEA2A39057AE2D3E23FB0BA262B8C1 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_0 = ___0_value;
		Recognizer_remove__SpeechStartDetected_m3DB6ED1521289E1BCB5BF3032F68C2452A2F8830(__this, L_0, NULL);
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_1 = __this->____SpeechStartDetected_2;
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = __this->___recoHandle_4;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_5;
		L_5 = Recognizer_recognizer_speech_start_detected_set_callback_m0EC66A25005B9C859A5897F59611FB88272A8F4A(L_3, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_4, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_5, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add_SpeechEndDetected_mD340F4717F391593D8DB5A538E983F114F9079F7 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_0 = __this->____SpeechEndDetected_3;
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = __this->___recoHandle_4;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_3 = __this->___speechEndDetectedCallbackDelegate_11;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4 = __this->___gch_14;
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_4, NULL);
		intptr_t L_6;
		L_6 = Recognizer_recognizer_speech_end_detected_set_callback_mCD9730AB877903CBAC9CE3FE89EC42975EEE9883(L_2, L_3, L_5, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_6, NULL);
	}

IL_0032:
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_7 = ___0_value;
		Recognizer_add__SpeechEndDetected_m22831739B45057F6783CF4C784E8829A1A7D27A3(__this, L_7, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove_SpeechEndDetected_mAC602E23E1C084A837A4068BB933C82A6329EBA4 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_0 = ___0_value;
		Recognizer_remove__SpeechEndDetected_m335107F7B597E13480CF0F21EB83795CFFC9B4D8(__this, L_0, NULL);
		EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_1 = __this->____SpeechEndDetected_3;
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = __this->___recoHandle_4;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_5;
		L_5 = Recognizer_recognizer_speech_end_detected_set_callback_mCD9730AB877903CBAC9CE3FE89EC42975EEE9883(L_3, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_4, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_5, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer__ctor_mB448C82F7106784983B2332E0C35FAC613A10A05 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_FireEvent_SetSessionStarted_m641F7510BE5E1426DD4EE2765007FCA37E86E0F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_FireEvent_SetSessionStopped_mA727407C3AAB48CD19521F3FFF7E163A0E63455C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_FireEvent_SpeechEndDetected_m21C1A7D4CCC4E33EC2EA05B48E44CC604E36C705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_FireEvent_SpeechStartDetected_m94DA4231F52F17425D472988B350E23C2A574C88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1532A53696EE625AE3777874840B492D52037C8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31514D8FFE6EBD8A160985B5C25BE0F2A7BEF863);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE1F32E38A053DAC1C8FBB1F39277CA0C67EB06);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___asyncStartContinuousHandle_6 = L_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___asyncStopContinuousHandle_7 = L_1;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___asyncStartKeywordHandle_8 = L_2;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___asyncStopKeywordHandle_9 = L_3;
		il2cpp_codegen_memory_barrier();
		__this->___disposed_15 = (bool)0;
		il2cpp_codegen_memory_barrier();
		__this->___isDisposing_16 = (bool)0;
		RuntimeObject* L_4 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_4, NULL);
		__this->___recognizerLock_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizerLock_17), (void*)L_4);
		__this->___activeAsyncRecognitionCounter_18 = 0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = ___0_recoPtr;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_5, (String_t*)NULL, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = ___0_recoPtr;
		__this->___recoHandle_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recoHandle_4), (void*)L_6);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = ___0_recoPtr;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		__this->___pointerHandle_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointerHandle_5), (void*)L_8);
		String_t* L_9 = __this->___pointerHandle_5;
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBEE1F32E38A053DAC1C8FBB1F39277CA0C67EB06, L_9, NULL);
		Diagnostics_SPX_TRACE_VERBOSE_m461DD416BC0A2D9A142D0B9F4C664D18143B96FF(L_10, ((int32_t)120), _stringLiteral31514D8FFE6EBD8A160985B5C25BE0F2A7BEF863, _stringLiteral1532A53696EE625AE3777874840B492D52037C8E, NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_11;
		L_11 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(__this, 0, NULL);
		__this->___gch_14 = L_11;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_12 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_12, NULL, (intptr_t)((void*)Recognizer_FireEvent_SpeechStartDetected_m94DA4231F52F17425D472988B350E23C2A574C88_RuntimeMethod_var), NULL);
		__this->___speechStartDetectedCallbackDelegate_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speechStartDetectedCallbackDelegate_10), (void*)L_12);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_13 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_13, NULL, (intptr_t)((void*)Recognizer_FireEvent_SpeechEndDetected_m21C1A7D4CCC4E33EC2EA05B48E44CC604E36C705_RuntimeMethod_var), NULL);
		__this->___speechEndDetectedCallbackDelegate_11 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speechEndDetectedCallbackDelegate_11), (void*)L_13);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_14 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_14, NULL, (intptr_t)((void*)Recognizer_FireEvent_SetSessionStarted_m641F7510BE5E1426DD4EE2765007FCA37E86E0F7_RuntimeMethod_var), NULL);
		__this->___sessionStartedCallbackDelegate_12 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sessionStartedCallbackDelegate_12), (void*)L_14);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_15 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_15, NULL, (intptr_t)((void*)Recognizer_FireEvent_SetSessionStopped_mA727407C3AAB48CD19521F3FFF7E163A0E63455C_RuntimeMethod_var), NULL);
		__this->___sessionStoppedCallbackDelegate_13 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sessionStoppedCallbackDelegate_13), (void*)L_15);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Finalize_m65C041518559BC7332B58EC3BD23603D6FAEA7F5 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1532A53696EE625AE3777874840B492D52037C8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral990E9465081709697449AFB110415A8629DE2E13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32);
		s_Il2CppMethodInitialized = true;
	}
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			String_t* L_0 = __this->___pointerHandle_5;
			String_t* L_1;
			L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral990E9465081709697449AFB110415A8629DE2E13, L_0, NULL);
			Diagnostics_SPX_TRACE_VERBOSE_m461DD416BC0A2D9A142D0B9F4C664D18143B96FF(L_1, ((int32_t)131), _stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32, _stringLiteral1532A53696EE625AE3777874840B492D52037C8E, NULL);
			il2cpp_codegen_memory_barrier();
			__this->___isDisposing_16 = (bool)1;
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0042;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Dispose_m53C30ACE1A7745127F79CB19F92894F67407E7CF (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0048:
			{// begin finally (depth: 1)
				VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)1);
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_memory_barrier();
				__this->___isDisposing_16 = (bool)1;
				RuntimeObject* L_0 = __this->___recognizerLock_17;
				V_0 = L_0;
				V_1 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_003a_1:
					{// begin finally (depth: 2)
						{
							bool L_1 = V_1;
							if (!L_1)
							{
								goto IL_0044_1;
							}
						}
						{
							RuntimeObject* L_2 = V_0;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
						}

IL_0044_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						RuntimeObject* L_3 = V_0;
						Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
						int32_t L_4 = __this->___activeAsyncRecognitionCounter_18;
						V_2 = (bool)((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0);
						bool L_5 = V_2;
						if (!L_5)
						{
							goto IL_0037_2;
						}
					}
					{
						InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
						NullCheck(L_6);
						InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral263D04BA595C06ADC50CF667EA6F2290337CDAC0)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Recognizer_Dispose_m53C30ACE1A7745127F79CB19F92894F67407E7CF_RuntimeMethod_var)));
					}

IL_0037_2:
					{
						goto IL_0045_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0045_1:
			{
				goto IL_005a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005a:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Dispose_m41B4467C6470F75AD4C81138860A38D98B55E31B (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1532A53696EE625AE3777874840B492D52037C8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = ___0_disposing;
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = __this->___pointerHandle_5;
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643, L_2, L_3, NULL);
		Diagnostics_SPX_TRACE_VERBOSE_m461DD416BC0A2D9A142D0B9F4C664D18143B96FF(L_4, ((int32_t)169), _stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04, _stringLiteral1532A53696EE625AE3777874840B492D52037C8E, NULL);
		bool L_5 = __this->___disposed_15;
		il2cpp_codegen_memory_barrier();
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		goto IL_007d;
	}

IL_003b:
	{
		__this->___speechStartDetectedCallbackDelegate_10 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speechStartDetectedCallbackDelegate_10), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___speechEndDetectedCallbackDelegate_11 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speechEndDetectedCallbackDelegate_11), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___sessionStartedCallbackDelegate_12 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sessionStartedCallbackDelegate_12), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___sessionStoppedCallbackDelegate_13 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sessionStoppedCallbackDelegate_13), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_7 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___gch_14);
		bool L_8;
		L_8 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0074;
		}
	}
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_10 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___gch_14);
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_10, NULL);
	}

IL_0074:
	{
		il2cpp_codegen_memory_barrier();
		__this->___disposed_15 = (bool)1;
	}

IL_007d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStarted(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStarted_m641F7510BE5E1426DD4EE2765007FCA37E86E0F7 (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* V_0 = NULL;
	SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* G_B8_0 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* G_B7_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___2_pvContext;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_004d;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___1_hevent;
			SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* L_7 = (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*)il2cpp_codegen_object_new(SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA(L_7, L_6, NULL);
			V_1 = L_7;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_9 = L_8->____SessionStarted_0;
			EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031_1;
			}
		}
		{
			goto IL_0039_1;
		}

IL_0031_1:
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_11 = V_0;
			SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_m50F62D5F079DA3B408B05AEAA4CA07254840B5F5_inline(G_B8_0, L_11, L_12, NULL);
		}

IL_0039_1:
		{
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStopped(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStopped_mA727407C3AAB48CD19521F3FFF7E163A0E63455C (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* V_0 = NULL;
	SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* G_B8_0 = NULL;
	EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* G_B7_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___2_pvContext;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_004d;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___1_hevent;
			SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* L_7 = (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*)il2cpp_codegen_object_new(SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA(L_7, L_6, NULL);
			V_1 = L_7;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_9 = L_8->____SessionStopped_1;
			EventHandler_1_tB44EB3A3EAA7B1B7ED121BF2DF6360B62B13EA07* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031_1;
			}
		}
		{
			goto IL_0039_1;
		}

IL_0031_1:
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_11 = V_0;
			SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_m50F62D5F079DA3B408B05AEAA4CA07254840B5F5_inline(G_B8_0, L_11, L_12, NULL);
		}

IL_0039_1:
		{
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechStartDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechStartDetected_m94DA4231F52F17425D472988B350E23C2A574C88 (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* V_0 = NULL;
	RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* G_B8_0 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* G_B7_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___2_pvContext;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_004d;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___1_hevent;
			RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* L_7 = (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9*)il2cpp_codegen_object_new(RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34(L_7, L_6, NULL);
			V_1 = L_7;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_9 = L_8->____SpeechStartDetected_2;
			EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031_1;
			}
		}
		{
			goto IL_0039_1;
		}

IL_0031_1:
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_11 = V_0;
			RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_mE007A9C567558111C4423757C653BB921489BC4B_inline(G_B8_0, L_11, L_12, NULL);
		}

IL_0039_1:
		{
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechEndDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechEndDetected_m21C1A7D4CCC4E33EC2EA05B48E44CC604E36C705 (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* V_0 = NULL;
	RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* G_B8_0 = NULL;
	EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* G_B7_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___2_pvContext;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A_mF8CD27BD559A4C540DEAD8DE59A5AC6772229EF0_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_004d;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___1_hevent;
			RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* L_7 = (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9*)il2cpp_codegen_object_new(RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34(L_7, L_6, NULL);
			V_1 = L_7;
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_9 = L_8->____SpeechEndDetected_3;
			EventHandler_1_t4457009845FA4C1ABCF83D7E00C38F13807F18F0* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031_1;
			}
		}
		{
			goto IL_0039_1;
		}

IL_0031_1:
		{
			Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* L_11 = V_0;
			RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_mE007A9C567558111C4423757C653BB921489BC4B_inline(G_B8_0, L_11, L_12, NULL);
		}

IL_0039_1:
		{
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::DoAsyncRecognitionAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_recoImplAction, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = __this->___recognizerLock_17;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002f;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			int32_t L_4 = __this->___activeAsyncRecognitionCounter_18;
			__this->___activeAsyncRecognitionCounter_18 = ((int32_t)il2cpp_codegen_add(L_4, 1));
			goto IL_0030;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0030:
	{
		bool L_5 = __this->___disposed_15;
		il2cpp_codegen_memory_barrier();
		if (L_5)
		{
			goto IL_0044;
		}
	}
	{
		bool L_6 = __this->___isDisposing_16;
		il2cpp_codegen_memory_barrier();
		G_B8_0 = ((int32_t)(L_6));
		goto IL_0045;
	}

IL_0044:
	{
		G_B8_0 = 1;
	}

IL_0045:
	{
		V_2 = (bool)G_B8_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		Type_t* L_8;
		L_8 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_8);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_10 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84_RuntimeMethod_var)));
	}

IL_005b:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = __this->___recognizerLock_17;
					V_3 = L_11;
					V_4 = (bool)0;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_0095:
						{// begin finally (depth: 2)
							{
								bool L_12 = V_4;
								if (!L_12)
								{
									goto IL_00a0;
								}
							}
							{
								RuntimeObject* L_13 = V_3;
								Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_13, NULL);
							}

IL_00a0:
							{
								return;
							}
						}// end finally (depth: 2)
					});
					try
					{// begin try (depth: 2)
						RuntimeObject* L_14 = V_3;
						Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_14, (&V_4), NULL);
						int32_t L_15 = __this->___activeAsyncRecognitionCounter_18;
						__this->___activeAsyncRecognitionCounter_18 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
						goto IL_00a1;
					}// end try (depth: 2)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_00a1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = ___0_recoImplAction;
			SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_16, (String_t*)NULL, NULL);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = ___0_recoImplAction;
			NullCheck(L_17);
			Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_17, NULL);
			goto IL_00a3;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a3:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::StartContinuousRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_StartContinuousRecognition_mB8E850543B3369010BFDC121ADC45B7F4D3EB0C2 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->___asyncStartContinuousHandle_6;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		intptr_t L_4 = __this->___asyncStartContinuousHandle_6;
		intptr_t L_5;
		L_5 = Recognizer_recognizer_async_handle_release_mD1E72A888C8A7F733BBCA13265EE0FCCC57CBE7B(L_4, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_5, NULL);
	}

IL_0028:
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = __this->___recoHandle_4;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_6, _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = __this->___recoHandle_4;
		intptr_t* L_8 = (intptr_t*)(&__this->___asyncStartContinuousHandle_6);
		intptr_t L_9;
		L_9 = Recognizer_recognizer_start_continuous_recognition_async_mFE3B06A762EE00FF838458427E2F952FB5407BCF(L_7, L_8, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_9, NULL);
		intptr_t L_10 = __this->___asyncStartContinuousHandle_6;
		intptr_t L_11;
		L_11 = Recognizer_recognizer_start_continuous_recognition_async_wait_for_m268ED182DC8D366E209F9F1AB84BE422EC684FC9(L_10, (-1), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_11, NULL);
		intptr_t L_12 = __this->___asyncStartContinuousHandle_6;
		intptr_t L_13;
		L_13 = Recognizer_recognizer_async_handle_release_mD1E72A888C8A7F733BBCA13265EE0FCCC57CBE7B(L_12, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_13, NULL);
		intptr_t L_14 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___asyncStartContinuousHandle_6 = L_14;
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::StopContinuousRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_StopContinuousRecognition_mAB43FB36FA7F893031EE6EF33D7E980474FAE6D8 (Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->___asyncStopContinuousHandle_7;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		intptr_t L_4 = __this->___asyncStopContinuousHandle_7;
		intptr_t L_5;
		L_5 = Recognizer_recognizer_async_handle_release_mD1E72A888C8A7F733BBCA13265EE0FCCC57CBE7B(L_4, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_5, NULL);
	}

IL_0028:
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = __this->___recoHandle_4;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_6, _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = __this->___recoHandle_4;
		intptr_t* L_8 = (intptr_t*)(&__this->___asyncStopContinuousHandle_7);
		intptr_t L_9;
		L_9 = Recognizer_recognizer_stop_continuous_recognition_async_m69D0B06E76D75CF53DE02D6A404B05D6FBA22755(L_7, L_8, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_9, NULL);
		intptr_t L_10 = __this->___asyncStopContinuousHandle_7;
		intptr_t L_11;
		L_11 = Recognizer_recognizer_stop_continuous_recognition_async_wait_for_m09E1A2510DDB56EB568761E56CCFF6338FEDF50E(L_10, (-1), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_11, NULL);
		intptr_t L_12 = __this->___asyncStopContinuousHandle_7;
		intptr_t L_13;
		L_13 = Recognizer_recognizer_async_handle_release_mD1E72A888C8A7F733BBCA13265EE0FCCC57CBE7B(L_12, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_13, NULL);
		intptr_t L_14 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___asyncStopContinuousHandle_7 = L_14;
		return;
	}
}
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::FromConfig(Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate,Microsoft.CognitiveServices.Speech.SpeechConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* Recognizer_FromConfig_m4175FC1D5C82C82271CA7D9D2DDC89DE92321C66 (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* ___0_fromConfig, SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* ___1_speechConfig, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_recognizer_handle_release_mF92E200D447EA3683E5F7BB0C161C0234D6DBA18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* V_4 = NULL;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* V_5 = NULL;
	{
		SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_0 = ___1_speechConfig;
		V_1 = (bool)((((RuntimeObject*)(SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral355878A388870DC1779B9524DFC7806DF3F6E3EF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Recognizer_FromConfig_m4175FC1D5C82C82271CA7D9D2DDC89DE92321C66_RuntimeMethod_var)));
	}

IL_0014:
	{
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_3;
		intptr_t L_4 = V_0;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_5, L_4, (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)NULL, NULL);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				{
					InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = V_2;
					if (!L_6)
					{
						goto IL_0069;
					}
				}
				{
					InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = V_2;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0069:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
			V_3 = L_8;
			GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* L_9 = ___0_fromConfig;
			SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_10 = ___1_speechConfig;
			NullCheck(L_10);
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_11 = L_10->___configHandle_0;
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_12 = V_2;
			NullCheck(L_9);
			intptr_t L_13;
			L_13 = GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_inline(L_9, (&V_3), L_11, L_12, NULL);
			SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_13, NULL);
			intptr_t L_14 = V_3;
			HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_15 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
			NullCheck(L_15);
			HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_15, NULL, (intptr_t)((void*)Recognizer_recognizer_handle_release_mF92E200D447EA3683E5F7BB0C161C0234D6DBA18_RuntimeMethod_var), NULL);
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_16 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
			NullCheck(L_16);
			InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_16, L_14, L_15, NULL);
			V_4 = L_16;
			SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_17 = ___1_speechConfig;
			il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
			GC_KeepAlive_m53833ADCAF719294E5D1DA13B067E31472C762F9(L_17, NULL);
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_18 = V_4;
			V_5 = L_18;
			goto IL_006a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_19 = V_5;
		return L_19;
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
intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_Multicast(GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___0_phreco, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___1_speechconfig, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___2_audioInput, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* currentDelegate = reinterpret_cast<GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_phreco, ___1_speechconfig, ___2_audioInput, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_OpenInst(GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___0_phreco, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___1_speechconfig, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___2_audioInput, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_phreco, ___1_speechconfig, ___2_audioInput, method);
}
intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_OpenStatic(GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___0_phreco, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___1_speechconfig, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___2_audioInput, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_phreco, ___1_speechconfig, ___2_audioInput, method);
}
intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_OpenStaticInvoker(GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___0_phreco, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___1_speechconfig, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___2_audioInput, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_phreco, ___1_speechconfig, ___2_audioInput);
}
intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_ClosedStaticInvoker(GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___0_phreco, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___1_speechconfig, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___2_audioInput, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< intptr_t, RuntimeObject*, intptr_t*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_phreco, ___1_speechconfig, ___2_audioInput);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___0_phreco, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___1_speechconfig, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___2_audioInput, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t*, void*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_speechconfig' to native representation
	void* ____1_speechconfig_marshaled = NULL;
	if (___1_speechconfig == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("speechconfig"), NULL);
	bool ___safeHandle_reference_incremented_for____1_speechconfig = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___1_speechconfig, (&___safeHandle_reference_incremented_for____1_speechconfig), NULL);
	____1_speechconfig_marshaled = reinterpret_cast<void*>((___1_speechconfig)->___handle_0);

	// Marshaling of parameter '___2_audioInput' to native representation
	void* ____2_audioInput_marshaled = NULL;
	if (___2_audioInput == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioInput"), NULL);
	bool ___safeHandle_reference_incremented_for____2_audioInput = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___2_audioInput, (&___safeHandle_reference_incremented_for____2_audioInput), NULL);
	____2_audioInput_marshaled = reinterpret_cast<void*>((___2_audioInput)->___handle_0);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___0_phreco, ____1_speechconfig_marshaled, ____2_audioInput_marshaled);

	// Marshaling cleanup of parameter '___1_speechconfig' native representation
	if (___safeHandle_reference_incremented_for____1_speechconfig)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___1_speechconfig, NULL);
	}

	// Marshaling cleanup of parameter '___2_audioInput' native representation
	if (___safeHandle_reference_incremented_for____2_audioInput)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___2_audioInput, NULL);
	}

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetRecognizerFromConfigDelegate__ctor_m8225A337DC771AF4368C036689A77F76D48D4567 (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_Multicast;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::Invoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___0_phreco, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___1_speechconfig, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___2_audioInput, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_phreco, ___1_speechconfig, ___2_audioInput, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.SessionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* __this, intptr_t ___0_eventHandlePtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_recognizer_event_handle_release_mDA02276B5C17D15AAC40D012354B19C2036BE6FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_recognizer_session_event_get_session_id_m19AEE7F994037064C324319645D814B64D14E165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		intptr_t L_0 = ___0_eventHandlePtr;
		SpxExceptionThrower_ThrowIfNull_m8BD4674A12DCA98CDD6818FD8F3D4721ADD38308(L_0, (String_t*)NULL, NULL);
		intptr_t L_1 = ___0_eventHandlePtr;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_2 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_2, NULL, (intptr_t)((void*)EventArgs_recognizer_event_handle_release_mDA02276B5C17D15AAC40D012354B19C2036BE6FE_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_3, L_1, L_2, NULL);
		__this->___eventHandle_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventHandle_1), (void*)L_3);
		GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* L_4 = (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B*)il2cpp_codegen_object_new(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314(L_4, NULL, (intptr_t)((void*)Recognizer_recognizer_session_event_get_session_id_m19AEE7F994037064C324319645D814B64D14E165_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = __this->___eventHandle_1;
		il2cpp_codegen_runtime_class_init_inline(SpxFactory_tDF81CF05B58700E3E2E2A3A983E93B35C40C355B_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = SpxFactory_GetDataFromHandleUsingDelegate_mA284C8A162A111BE768AF9E347B6D74753AD238D(L_4, L_5, ((int32_t)37), NULL);
		__this->___U3CSessionIdU3Ek__BackingField_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionIdU3Ek__BackingField_4), (void*)L_6);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::get_SessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33 (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSessionIdU3Ek__BackingField_4;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionEventArgs_ToString_m7F7FB7E1EC6F286538A7AC9B79D9354A0C57938C (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD1646DD3BCB50D02405E092BF9F99967377E943);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_1;
		L_1 = SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline(__this, NULL);
		String_t* L_2;
		L_2 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744(L_0, _stringLiteralAD1646DD3BCB50D02405E092BF9F99967377E943, L_1, NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		String_t* L_3 = V_0;
		return L_3;
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig__ctor_m586768B4614A1778822601DF07F0319758E1BBE9 (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* __this, intptr_t ___0_configPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechConfig_speech_config_release_mA9578DF67E5F130B18A3B8B7FB8567B28D802BA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechConfig_t7654F04EE4DFBA3E6BC32B6FC37E7154828483B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A7AB2F6B4BB9763BDAE9F4B653E5CA8E25A19F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6EFEA28911C05150F90CA0C3A902792E8F9D73C);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		__this->___progBag_1 = (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___progBag_1), (void*)(PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0 = ___0_configPtr;
		SpxExceptionThrower_ThrowIfNull_m8BD4674A12DCA98CDD6818FD8F3D4721ADD38308(L_0, (String_t*)NULL, NULL);
		intptr_t L_1 = ___0_configPtr;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_2 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_2, NULL, (intptr_t)((void*)SpeechConfig_speech_config_release_mA9578DF67E5F130B18A3B8B7FB8567B28D802BA4_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_3, L_1, L_2, NULL);
		__this->___configHandle_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___configHandle_0), (void*)L_3);
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_4;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = __this->___configHandle_0;
		il2cpp_codegen_runtime_class_init_inline(SpeechConfig_t7654F04EE4DFBA3E6BC32B6FC37E7154828483B9_il2cpp_TypeInfo_var);
		intptr_t L_6;
		L_6 = SpeechConfig_speech_config_get_property_bag_mC63C86FC0B561E654C02E74E5FA2422401E4BCAA(L_5, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_6, NULL);
		intptr_t L_7 = V_0;
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_8 = (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53*)il2cpp_codegen_object_new(PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7(L_8, L_7, NULL);
		__this->___progBag_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___progBag_1), (void*)L_8);
		SpeechConfig_SetProperty_m9E79AA2A21F823E849F29921DA476988C2C4DF1C(__this, _stringLiteral4A7AB2F6B4BB9763BDAE9F4B653E5CA8E25A19F9, _stringLiteralD6EFEA28911C05150F90CA0C3A902792E8F9D73C, NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechConfig Microsoft.CognitiveServices.Speech.SpeechConfig::FromSubscription(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* SpeechConfig_FromSubscription_m5CBC02A0591FF4C81402782CEE8E0770F5A359D2 (String_t* ___0_subscriptionKey, String_t* ___1_region, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechConfig_t7654F04EE4DFBA3E6BC32B6FC37E7154828483B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* V_1 = NULL;
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_0;
		String_t* L_1 = ___0_subscriptionKey;
		String_t* L_2 = ___1_region;
		il2cpp_codegen_runtime_class_init_inline(SpeechConfig_t7654F04EE4DFBA3E6BC32B6FC37E7154828483B9_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = SpeechConfig_speech_config_from_subscription_m3DEB42078EDD7746FD487010903FEA00D90900D3((&V_0), L_1, L_2, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_3, NULL);
		intptr_t L_4 = V_0;
		SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_5 = (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE*)il2cpp_codegen_object_new(SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SpeechConfig__ctor_m586768B4614A1778822601DF07F0319758E1BBE9(L_5, L_4, NULL);
		V_1 = L_5;
		goto IL_001f;
	}

IL_001f:
	{
		SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_6 = V_1;
		return L_6;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::set_SpeechRecognitionLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_set_SpeechRecognitionLanguage_mD940965AA416B034AFFF01838B52C9E4A751AF41 (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___progBag_1;
		String_t* L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker2< int32_t, String_t* >::Invoke(6 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(Microsoft.CognitiveServices.Speech.PropertyId,System.String) */, L_0, ((int32_t)3001), L_1);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::SetProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_SetProperty_m9E79AA2A21F823E849F29921DA476988C2C4DF1C (SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___progBag_1;
		String_t* L_1 = ___0_name;
		String_t* L_2 = ___1_value;
		NullCheck(L_0);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(System.String,System.String) */, L_0, L_1, L_2);
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionResult__ctor_mCCFDE1F4008AF5CEDAF8D163E8475887565BD056 (SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* __this, intptr_t ___0_resultPtr, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_resultPtr;
		RecognitionResult__ctor_mF52685BDF0D0D81056CF4F2D7929B837D3E4504E(__this, L_0, NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionEventArgs__ctor_mA12E8F0CEF640C514871ED1481C46B54CE92EE64 (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* __this, intptr_t ___0_eventHandlePtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_eventHandlePtr;
		RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34(__this, L_0, NULL);
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_1;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*)__this)->___eventHandle_1;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognition_event_get_result_mF0E0E2260FB3AE5D58E7F828258F477B17C30E2B(L_2, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_3, NULL);
		intptr_t L_4 = V_0;
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_5 = (SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94*)il2cpp_codegen_object_new(SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SpeechRecognitionResult__ctor_mCCFDE1F4008AF5CEDAF8D163E8475887565BD056(L_5, L_4, NULL);
		__this->___U3CResultU3Ek__BackingField_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField_6), (void*)L_5);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9 (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* __this, const RuntimeMethod* method) 
{
	{
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_0 = __this->___U3CResultU3Ek__BackingField_6;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechRecognitionEventArgs_ToString_m16F0AE8AF18D2C923DA643953109C5012CB3306D (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F16CCC8B5C539FDA6D18899BE786616CC0A66C9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3;
		L_3 = SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline(__this, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_5;
		L_5 = SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_4;
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_8;
		L_8 = SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason() */, L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_11);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_7;
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_13;
		L_13 = SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline(__this, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text() */, L_13);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_0, _stringLiteral1F16CCC8B5C539FDA6D18899BE786616CC0A66C9, L_12, NULL);
		V_0 = L_15;
		goto IL_0051;
	}

IL_0051:
	{
		String_t* L_16 = V_0;
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionCanceledEventArgs__ctor_mE27E61BE7835AF73A8C25DD3FA2205632C9DC107 (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, intptr_t ___0_eventHandlePtr, const RuntimeMethod* method) 
{
	CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* V_0 = NULL;
	{
		intptr_t L_0 = ___0_eventHandlePtr;
		SpeechRecognitionEventArgs__ctor_mA12E8F0CEF640C514871ED1481C46B54CE92EE64(__this, L_0, NULL);
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_1;
		L_1 = SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline(__this, NULL);
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_2;
		L_2 = CancellationDetails_FromResult_m601E12548DEFE4F1D895C4E927442D35FEE17541(L_1, NULL);
		V_0 = L_2;
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180_inline(L_3, NULL);
		__this->___U3CReasonU3Ek__BackingField_7 = L_4;
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = CancellationDetails_get_ErrorCode_m01B8889CC68F1443F822B1E8082F6B8378C723AF_inline(L_5, NULL);
		__this->___U3CErrorCodeU3Ek__BackingField_8 = L_6;
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636_inline(L_7, NULL);
		__this->___U3CErrorDetailsU3Ek__BackingField_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorDetailsU3Ek__BackingField_9), (void*)L_8);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_Reason_m43CDCCC1311B234FB9F7C31BF966478DEB156815 (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_7;
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_ErrorCode_m54BF697777056D1E09CEDB6E005095970A48B5D2 (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_8;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechRecognitionCanceledEventArgs_ToString_m4254A5E0769BEA2D983E83418E6F2645DC371EFF (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationErrorCode_tA7E793829617AB6327A122CC40E657792C4D9402_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationReason_t51FBE96029389530BF9FEE71742677C3DFF019A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3;
		L_3 = SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline(__this, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_5;
		L_5 = SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_4;
		int32_t L_8;
		L_8 = SpeechRecognitionCanceledEventArgs_get_Reason_m43CDCCC1311B234FB9F7C31BF966478DEB156815_inline(__this, NULL);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(CancellationReason_t51FBE96029389530BF9FEE71742677C3DFF019A5_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		int32_t L_12;
		L_12 = SpeechRecognitionCanceledEventArgs_get_ErrorCode_m54BF697777056D1E09CEDB6E005095970A48B5D2_inline(__this, NULL);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(CancellationErrorCode_tA7E793829617AB6327A122CC40E657792C4D9402_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_0, _stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E, L_11, NULL);
		V_0 = L_15;
		goto IL_004c;
	}

IL_004c:
	{
		String_t* L_16 = V_0;
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
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Recognizing_mC85B8A7E5FC2E2D4FC053DBD8AC419F17468EB4F(intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Recognizing_mC85B8A7E5FC2E2D4FC053DBD8AC419F17468EB4F(___0_hreco, ___1_hevent, ___2_pvContext, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Recognized_m1F3199AAADDAAAD62E3A93985B2668A9A23E8205(intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Recognized_m1F3199AAADDAAAD62E3A93985B2668A9A23E8205(___0_hreco, ___1_hevent, ___2_pvContext, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Canceled_mF0152E00B21076D0AA20D551D4659ED141BA2A87(intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Canceled_mF0152E00B21076D0AA20D551D4659ED141BA2A87(___0_hreco, ___1_hevent, ___2_pvContext, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognizing_m16447A0416973172AB4D0CBAF6A8FC554B1E9294 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_0 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_1 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_2 = NULL;
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_0 = __this->____Recognizing_19;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_2 = V_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)Castclass((RuntimeObject*)L_4, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979_il2cpp_TypeInfo_var));
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979** L_5 = (EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979**)(&__this->____Recognizing_19);
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_6 = V_2;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_7 = V_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_9 = V_0;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)L_9) == ((RuntimeObject*)(EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognizing_m5C73B8CE847979E6475EAC3240E7357FCA1F3E5F (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_0 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_1 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_2 = NULL;
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_0 = __this->____Recognizing_19;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_2 = V_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)Castclass((RuntimeObject*)L_4, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979_il2cpp_TypeInfo_var));
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979** L_5 = (EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979**)(&__this->____Recognizing_19);
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_6 = V_2;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_7 = V_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_9 = V_0;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)L_9) == ((RuntimeObject*)(EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognized_mD50B625785C24BEBFF41F06CEB5D10434F934B83 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_0 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_1 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_2 = NULL;
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_0 = __this->____Recognized_20;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_2 = V_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)Castclass((RuntimeObject*)L_4, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979_il2cpp_TypeInfo_var));
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979** L_5 = (EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979**)(&__this->____Recognized_20);
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_6 = V_2;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_7 = V_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_9 = V_0;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)L_9) == ((RuntimeObject*)(EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognized_mD722671640B2B0B316AF08C40613843C781E17C0 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_0 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_1 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* V_2 = NULL;
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_0 = __this->____Recognized_20;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_2 = V_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)Castclass((RuntimeObject*)L_4, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979_il2cpp_TypeInfo_var));
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979** L_5 = (EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979**)(&__this->____Recognized_20);
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_6 = V_2;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_7 = V_1;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_9 = V_0;
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)L_9) == ((RuntimeObject*)(EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Canceled_mCCA4C9985A5482241673E5F9DFAF8669412BA14B (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* V_0 = NULL;
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* V_1 = NULL;
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* V_2 = NULL;
	{
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_0 = __this->____Canceled_21;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_2 = V_1;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*)Castclass((RuntimeObject*)L_4, EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46_il2cpp_TypeInfo_var));
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46** L_5 = (EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46**)(&__this->____Canceled_21);
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_6 = V_2;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_7 = V_1;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_9 = V_0;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*)L_9) == ((RuntimeObject*)(EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Canceled_m7AA55C10EEAE710C0581D5B235852FB30D142CB9 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* V_0 = NULL;
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* V_1 = NULL;
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* V_2 = NULL;
	{
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_0 = __this->____Canceled_21;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_2 = V_1;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*)Castclass((RuntimeObject*)L_4, EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46_il2cpp_TypeInfo_var));
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46** L_5 = (EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46**)(&__this->____Canceled_21);
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_6 = V_2;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_7 = V_1;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_9 = V_0;
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*)L_9) == ((RuntimeObject*)(EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add_Recognizing_m889A7D105299CCC15B4C3D692703D12319E8AE2E (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_0 = __this->____Recognizing_19;
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_3 = __this->___recognizingCallbackDelegate_22;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___gch_14;
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_4, NULL);
		intptr_t L_6;
		L_6 = Recognizer_recognizer_recognizing_set_callback_m191FB76BFA8D594D949CCA2F0D8780C001ADFEEE(L_2, L_3, L_5, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_6, NULL);
	}

IL_0032:
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_7 = ___0_value;
		SpeechRecognizer_add__Recognizing_m16447A0416973172AB4D0CBAF6A8FC554B1E9294(__this, L_7, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove_Recognizing_mF69D0A164312B4697C2E10348F5AD94E4900032F (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_0 = ___0_value;
		SpeechRecognizer_remove__Recognizing_m5C73B8CE847979E6475EAC3240E7357FCA1F3E5F(__this, L_0, NULL);
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_1 = __this->____Recognizing_19;
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_5;
		L_5 = Recognizer_recognizer_recognizing_set_callback_m191FB76BFA8D594D949CCA2F0D8780C001ADFEEE(L_3, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_4, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_5, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add_Recognized_mB6FFEF74D120F94577CEC4D793A63E77E571D3BE (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_0 = __this->____Recognized_20;
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_3 = __this->___recognizedCallbackDelegate_23;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___gch_14;
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_4, NULL);
		intptr_t L_6;
		L_6 = Recognizer_recognizer_recognized_set_callback_mF0B30872D6EAAE2A0DC15E02D87FE13A15C5EABB(L_2, L_3, L_5, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_6, NULL);
	}

IL_0032:
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_7 = ___0_value;
		SpeechRecognizer_add__Recognized_mD50B625785C24BEBFF41F06CEB5D10434F934B83(__this, L_7, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove_Recognized_m1AC5A080571B5A7CD4032CFCC5334FF9129C6FFD (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_0 = ___0_value;
		SpeechRecognizer_remove__Recognized_mD722671640B2B0B316AF08C40613843C781E17C0(__this, L_0, NULL);
		EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_1 = __this->____Recognized_20;
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_5;
		L_5 = Recognizer_recognizer_recognized_set_callback_mF0B30872D6EAAE2A0DC15E02D87FE13A15C5EABB(L_3, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_4, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_5, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add_Canceled_m714F909F5101C0292E0FA4814214E31F8AA6A216 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_0 = __this->____Canceled_21;
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_3 = __this->___canceledCallbackDelegate_24;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___gch_14;
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_4, NULL);
		intptr_t L_6;
		L_6 = Recognizer_recognizer_canceled_set_callback_m67781166E6D72910FC2767718B4667615A9CAD95(L_2, L_3, L_5, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_6, NULL);
	}

IL_0032:
	{
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_7 = ___0_value;
		SpeechRecognizer_add__Canceled_mCCA4C9985A5482241673E5F9DFAF8669412BA14B(__this, L_7, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove_Canceled_m434BFE60418B882CEDA616FA1CADCD2F8C6DD962 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_0 = ___0_value;
		SpeechRecognizer_remove__Canceled_m7AA55C10EEAE710C0581D5B235852FB30D142CB9(__this, L_0, NULL);
		EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_1 = __this->____Canceled_21;
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_5;
		L_5 = Recognizer_recognizer_canceled_set_callback_m67781166E6D72910FC2767718B4667615A9CAD95(L_3, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_4, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_5, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_m305BDA5F9788FBA4F444E31437F6C67589A11488 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* ___0_speechConfig, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxFactory_recognizer_create_speech_recognizer_from_config_m4EE9A793506E319CF430427772F4F1494543A067_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* L_0 = (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D*)il2cpp_codegen_object_new(GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GetRecognizerFromConfigDelegate__ctor_m8225A337DC771AF4368C036689A77F76D48D4567(L_0, NULL, (intptr_t)((void*)SpxFactory_recognizer_create_speech_recognizer_from_config_m4EE9A793506E319CF430427772F4F1494543A067_RuntimeMethod_var), NULL);
		SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE* L_1 = ___0_speechConfig;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2;
		L_2 = Recognizer_FromConfig_m4175FC1D5C82C82271CA7D9D2DDC89DE92321C66(L_0, L_1, NULL);
		SpeechRecognizer__ctor_m8136931FE9EB168C0F793BDF081194CEED40BE0A(__this, L_2, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_m8136931FE9EB168C0F793BDF081194CEED40BE0A (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_FireEvent_Canceled_mF0152E00B21076D0AA20D551D4659ED141BA2A87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_FireEvent_Recognized_m1F3199AAADDAAAD62E3A93985B2668A9A23E8205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_FireEvent_Recognizing_mC85B8A7E5FC2E2D4FC053DBD8AC419F17468EB4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = ___0_recoHandle;
		Recognizer__ctor_mB448C82F7106784983B2332E0C35FAC613A10A05(__this, L_0, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ___0_recoHandle;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_1, _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C, NULL);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_2 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_2, NULL, (intptr_t)((void*)SpeechRecognizer_FireEvent_Recognizing_mC85B8A7E5FC2E2D4FC053DBD8AC419F17468EB4F_RuntimeMethod_var), NULL);
		__this->___recognizingCallbackDelegate_22 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizingCallbackDelegate_22), (void*)L_2);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_3 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_3, NULL, (intptr_t)((void*)SpeechRecognizer_FireEvent_Recognized_m1F3199AAADDAAAD62E3A93985B2668A9A23E8205_RuntimeMethod_var), NULL);
		__this->___recognizedCallbackDelegate_23 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizedCallbackDelegate_23), (void*)L_3);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_4 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_4, NULL, (intptr_t)((void*)SpeechRecognizer_FireEvent_Canceled_mF0152E00B21076D0AA20D551D4659ED141BA2A87_RuntimeMethod_var), NULL);
		__this->___canceledCallbackDelegate_24 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canceledCallbackDelegate_24), (void*)L_4);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_5;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = ___0_recoHandle;
		intptr_t L_7;
		L_7 = Recognizer_recognizer_get_property_bag_mBABDBA1B6D8FBA89AA8F7EE89A3696B2260107F9(L_6, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_7, NULL);
		intptr_t L_8 = V_0;
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_9 = (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53*)il2cpp_codegen_object_new(PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7(L_9, L_8, NULL);
		SpeechRecognizer_set_Properties_mCEEEDD714A579195CF49B0F9E4609DFD1EE2C7FC_inline(__this, L_9, NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* SpeechRecognizer_get_Properties_m1C0886BAAE462E98012C7EF3CED1E0314E341024 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___U3CPropertiesU3Ek__BackingField_25;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_set_Properties_mCEEEDD714A579195CF49B0F9E4609DFD1EE2C7FC (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___0_value, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = ___0_value;
		__this->___U3CPropertiesU3Ek__BackingField_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_25), (void*)L_0);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.SpeechRecognizer::StartContinuousRecognitionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* SpeechRecognizer_StartContinuousRecognitionAsync_m1A15C93FACB936A88F8CF23F44FDEE3DE801AE09 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__52_0_m07A75A12B255723087B6E3627346D512EEF5C42C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__52_0_m07A75A12B255723087B6E3627346D512EEF5C42C_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853(L_0, NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = V_0;
		return L_2;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.SpeechRecognizer::StopContinuousRecognitionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* SpeechRecognizer_StopContinuousRecognitionAsync_m470900781885522C896DF9884EDBCFB8990B5864 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__53_0_m53D17EDA2DC76DFA26F6D482A43710EDE49BD4B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__53_0_m53D17EDA2DC76DFA26F6D482A43710EDE49BD4B3_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853(L_0, NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_Finalize_m0DFC88D31A9612EB8E79AEFC3CAEACEDDF014C50 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0015:
			{// begin finally (depth: 1)
				Recognizer_Finalize_m65C041518559BC7332B58EC3BD23603D6FAEA7F5(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_memory_barrier();
			((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___isDisposing_16 = (bool)1;
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_001d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_Dispose_mC62D82CBFB64A864B774FD0D2E3067C1428B7999 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* G_B7_0 = NULL;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* G_B6_0 = NULL;
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* G_B10_0 = NULL;
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* G_B9_0 = NULL;
	{
		bool L_0 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___disposed_15;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0115;
	}

IL_0013:
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		V_1 = (bool)((!(((RuntimeObject*)(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00c6;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_6;
		L_6 = Recognizer_recognizer_recognizing_set_callback_m191FB76BFA8D594D949CCA2F0D8780C001ADFEEE(L_4, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_5, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_6, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_9;
		L_9 = Recognizer_recognizer_recognized_set_callback_mF0B30872D6EAAE2A0DC15E02D87FE13A15C5EABB(L_7, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_8, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_9, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_10 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_11 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_12;
		L_12 = Recognizer_recognizer_canceled_set_callback_m67781166E6D72910FC2767718B4667615A9CAD95(L_10, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_11, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_12, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_13 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_14 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_15;
		L_15 = Recognizer_recognizer_session_started_set_callback_mF7269B2257F45837CCEC187E3EF7E0688CC445D7(L_13, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_14, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_15, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_16 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_17 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_18;
		L_18 = Recognizer_recognizer_session_stopped_set_callback_m949170C5C61445F50B9C5480550D2AD4F7CE97D0(L_16, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_17, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_18, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_19 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_20 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_21;
		L_21 = Recognizer_recognizer_speech_start_detected_set_callback_m0EC66A25005B9C859A5897F59611FB88272A8F4A(L_19, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_20, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_21, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_22 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_23 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_24;
		L_24 = Recognizer_recognizer_speech_end_detected_set_callback_mCD9730AB877903CBAC9CE3FE89EC42975EEE9883(L_22, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_23, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_24, NULL);
	}

IL_00c6:
	{
		bool L_25 = ___0_disposing;
		V_2 = L_25;
		bool L_26 = V_2;
		if (!L_26)
		{
			goto IL_00f1;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_27 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_28 = L_27;
		G_B6_0 = L_28;
		if (L_28)
		{
			G_B7_0 = L_28;
			goto IL_00d8;
		}
	}
	{
		goto IL_00de;
	}

IL_00d8:
	{
		NullCheck(G_B7_0);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(G_B7_0, NULL);
	}

IL_00de:
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_29;
		L_29 = SpeechRecognizer_get_Properties_m1C0886BAAE462E98012C7EF3CED1E0314E341024_inline(__this, NULL);
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_30 = L_29;
		G_B9_0 = L_30;
		if (L_30)
		{
			G_B10_0 = L_30;
			goto IL_00ea;
		}
	}
	{
		goto IL_00f0;
	}

IL_00ea:
	{
		NullCheck(G_B10_0);
		VirtualActionInvoker0::Invoke(4 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close() */, G_B10_0);
	}

IL_00f0:
	{
	}

IL_00f1:
	{
		__this->___recognizingCallbackDelegate_22 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizingCallbackDelegate_22), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___recognizedCallbackDelegate_23 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizedCallbackDelegate_23), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___canceledCallbackDelegate_24 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canceledCallbackDelegate_24), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___audioInputKeepAlive_26 = (AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioInputKeepAlive_26), (void*)(AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3*)NULL);
		bool L_31 = ___0_disposing;
		Recognizer_Dispose_m41B4467C6470F75AD4C81138860A38D98B55E31B(__this, L_31, NULL);
	}

IL_0115:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognizing_mC85B8A7E5FC2E2D4FC053DBD8AC419F17468EB4F (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* V_0 = NULL;
	SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* G_B8_0 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* G_B7_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___2_pvContext;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)L_3)->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_004d;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___1_hevent;
			SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* L_7 = (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD*)il2cpp_codegen_object_new(SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			SpeechRecognitionEventArgs__ctor_mA12E8F0CEF640C514871ED1481C46B54CE92EE64(L_7, L_6, NULL);
			V_1 = L_7;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_9 = L_8->____Recognizing_19;
			EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031_1;
			}
		}
		{
			goto IL_0039_1;
		}

IL_0031_1:
		{
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_11 = V_0;
			SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_m81C94EA828C27A6F431E8F4B7679EAF346BCAB56_inline(G_B8_0, L_11, L_12, NULL);
		}

IL_0039_1:
		{
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognized_m1F3199AAADDAAAD62E3A93985B2668A9A23E8205 (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* V_0 = NULL;
	SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* G_B8_0 = NULL;
	EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* G_B7_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___2_pvContext;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)L_3)->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_004d;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___1_hevent;
			SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* L_7 = (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD*)il2cpp_codegen_object_new(SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			SpeechRecognitionEventArgs__ctor_mA12E8F0CEF640C514871ED1481C46B54CE92EE64(L_7, L_6, NULL);
			V_1 = L_7;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_9 = L_8->____Recognized_20;
			EventHandler_1_tFE5F3A49257B61DC2A2C46D8D8C0CE7A76F99979* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031_1;
			}
		}
		{
			goto IL_0039_1;
		}

IL_0031_1:
		{
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_11 = V_0;
			SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_m81C94EA828C27A6F431E8F4B7679EAF346BCAB56_inline(G_B8_0, L_11, L_12, NULL);
		}

IL_0039_1:
		{
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Canceled_mF0152E00B21076D0AA20D551D4659ED141BA2A87 (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* V_0 = NULL;
	SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* G_B8_0 = NULL;
	EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* G_B7_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___2_pvContext;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B_m5F882F524AF6239C78F2D4684D5E17F6994CACE8_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)L_3)->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_004d;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___1_hevent;
			SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* L_7 = (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86*)il2cpp_codegen_object_new(SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			SpeechRecognitionCanceledEventArgs__ctor_mE27E61BE7835AF73A8C25DD3FA2205632C9DC107(L_7, L_6, NULL);
			V_1 = L_7;
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_9 = L_8->____Canceled_21;
			EventHandler_1_t8FB3884B878D3DEA670EAAD761B40C42B82E3F46* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031_1;
			}
		}
		{
			goto IL_0039_1;
		}

IL_0031_1:
		{
			SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* L_11 = V_0;
			SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_mBEDD561ECE0E8BE4C5E4D2C38542F5EA87F2483A_inline(G_B8_0, L_11, L_12, NULL);
		}

IL_0039_1:
		{
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::<StartContinuousRecognitionAsync>b__52_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__52_0_m07A75A12B255723087B6E3627346D512EEF5C42C (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_StartContinuousRecognition_mB8E850543B3369010BFDC121ADC45B7F4D3EB0C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)Recognizer_StartContinuousRecognition_mB8E850543B3369010BFDC121ADC45B7F4D3EB0C2_RuntimeMethod_var), NULL);
		Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84(__this, L_0, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::<StopContinuousRecognitionAsync>b__53_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__53_0_m53D17EDA2DC76DFA26F6D482A43710EDE49BD4B3 (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_StopContinuousRecognition_mAB43FB36FA7F893031EE6EF33D7E980474FAE6D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)Recognizer_StopContinuousRecognition_mAB43FB36FA7F893031EE6EF33D7E980474FAE6D8_RuntimeMethod_var), NULL);
		Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84(__this, L_0, NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechTranslationConfig__ctor_m49EEA16B549465C7EB65801FC0687EA30E6F7D5E (SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B* __this, intptr_t ___0_configPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___targetLanguages_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetLanguages_2), (void*)L_0);
		intptr_t L_1 = ___0_configPtr;
		SpeechConfig__ctor_m586768B4614A1778822601DF07F0319758E1BBE9(__this, L_1, NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechTranslationConfig Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::FromSubscription(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B* SpeechTranslationConfig_FromSubscription_mC29FB55004DF58DF535FA6337AA19861D03EA07C (String_t* ___0_subscriptionKey, String_t* ___1_region, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechTranslationConfig_t6280A39FCA67A20B208CD312B25DE9A5F12589DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B* V_1 = NULL;
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_0;
		String_t* L_1 = ___0_subscriptionKey;
		String_t* L_2 = ___1_region;
		il2cpp_codegen_runtime_class_init_inline(SpeechTranslationConfig_t6280A39FCA67A20B208CD312B25DE9A5F12589DE_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = SpeechTranslationConfig_speech_translation_config_from_subscription_m4C0F48066FF2492F9E8F47507F3BACD51ACDE0EB((&V_0), L_1, L_2, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_3, NULL);
		intptr_t L_4 = V_0;
		SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B* L_5 = (SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B*)il2cpp_codegen_object_new(SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SpeechTranslationConfig__ctor_m49EEA16B549465C7EB65801FC0687EA30E6F7D5E(L_5, L_4, NULL);
		V_1 = L_5;
		goto IL_001f;
	}

IL_001f:
	{
		SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B* L_6 = V_1;
		return L_6;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::AddTargetLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechTranslationConfig_AddTargetLanguage_m3A3E70E5FC18C24A5BA78D4AA646AD9294550713 (SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B* __this, String_t* ___0_language, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechTranslationConfig_t6280A39FCA67A20B208CD312B25DE9A5F12589DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = ((SpeechConfig_tAE8FEC093B21AA957B784250CF237DE1C3760DEE*)__this)->___configHandle_0;
		String_t* L_1 = ___0_language;
		il2cpp_codegen_runtime_class_init_inline(SpeechTranslationConfig_t6280A39FCA67A20B208CD312B25DE9A5F12589DE_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = SpeechTranslationConfig_speech_translation_config_add_target_language_m0AD094DCDB4706C83B0F3C8839B077191D925B8A(L_0, L_1, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_2, NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionResult__ctor_mEC410E2929DA5612330E8C4521CD1363E7105CA1 (TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* __this, intptr_t ___0_resultPtr, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_resultPtr;
		RecognitionResult__ctor_mF52685BDF0D0D81056CF4F2D7929B837D3E4504E(__this, L_0, NULL);
		TranslationRecognitionResult_GetTranslationTexts_m080C1A8E4A40D60797BC62D07B58E27AAB1A6687(__this, NULL);
		return;
	}
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::get_Translations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TranslationRecognitionResult_get_Translations_mF40040BB24857FB1E87A6ACAEE7901DA628709F3 (TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___translationTextResultMap_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationRecognitionResult_ToString_m8B3AEE6468E0C7285288A622C0F0CA53307F45C8 (TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39F33B0FE4D2999B413004105B540E9BDC49D767);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66B8240E15500AD983CC6249A0313DD49E22940E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67E3003FE5B0C609EB2073B105C585694FED0280);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9242117927E8C104F78807A56EFE624837EF5BB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, __this);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason() */, __this);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text() */, __this);
		String_t* L_6;
		L_6 = String_Format_mF8E53122BE8F0F617357DFB75C3912D1242DE263(L_0, _stringLiteral66B8240E15500AD983CC6249A0313DD49E22940E, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		RuntimeObject* L_7;
		L_7 = TranslationRecognitionResult_get_Translations_mF40040BB24857FB1E87A6ACAEE7901DA628709F3(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_7);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0086:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_1;
					if (!L_9)
					{
						goto IL_0090;
					}
				}
				{
					RuntimeObject* L_10 = V_1;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_0090:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007c_1;
			}

IL_0037_1:
			{
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_12;
				L_12 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_11);
				V_2 = L_12;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
				String_t* L_15 = V_0;
				NullCheck(L_14);
				ArrayElementTypeCheck (L_14, L_15);
				(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_15);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_14;
				NullCheck(L_16);
				ArrayElementTypeCheck (L_16, _stringLiteral67E3003FE5B0C609EB2073B105C585694FED0280);
				(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral67E3003FE5B0C609EB2073B105C585694FED0280);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
				String_t* L_18;
				L_18 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				NullCheck(L_17);
				ArrayElementTypeCheck (L_17, L_18);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_18);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_17;
				NullCheck(L_19);
				ArrayElementTypeCheck (L_19, _stringLiteral39F33B0FE4D2999B413004105B540E9BDC49D767);
				(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral39F33B0FE4D2999B413004105B540E9BDC49D767);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
				String_t* L_21;
				L_21 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_20);
				ArrayElementTypeCheck (L_20, L_21);
				(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_21);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_20;
				NullCheck(L_22);
				ArrayElementTypeCheck (L_22, _stringLiteralC9242117927E8C104F78807A56EFE624837EF5BB);
				(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC9242117927E8C104F78807A56EFE624837EF5BB);
				String_t* L_23;
				L_23 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_22, NULL);
				V_0 = L_23;
			}

IL_007c_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0037_1;
				}
			}
			{
				goto IL_0091;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0091:
	{
		String_t* L_26 = V_0;
		V_3 = L_26;
		goto IL_0095;
	}

IL_0095:
	{
		String_t* L_27 = V_3;
		return L_27;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::GetTranslationTexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionResult_GetTranslationTexts_m080C1A8E4A40D60797BC62D07B58E27AAB1A6687 (TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CB81742644CCEA2B53FE5D7E08731904CD84E08);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uintptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint32_t V_3 = 0;
	uintptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	uintptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	uintptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* V_7 = NULL;
	Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* V_8 = NULL;
	bool V_9 = false;
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = ((RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F*)__this)->___resultHandle_4;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_0, _stringLiteral5CB81742644CCEA2B53FE5D7E08731904CD84E08, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ((RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F*)__this)->___resultHandle_4;
		bool L_2;
		L_2 = RecognitionResult_recognizer_result_handle_is_valid_m8353972B72D31F49BB55ACE8F797DD4F92DBC440(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0115;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_4, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___translationTextResultMap_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___translationTextResultMap_6), (void*)L_4);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_5 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
		V_1 = L_5;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_6 = ((RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F*)__this)->___resultHandle_4;
		intptr_t L_7;
		L_7 = RecognitionResult_translation_text_result_get_translation_count_m0E9FF9C675F4E98324B160D60512B7440FA7B561(L_6, (&V_1), NULL);
		V_2 = L_7;
		intptr_t L_8 = V_2;
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_8, NULL);
		V_3 = 0;
		goto IL_0100;
	}

IL_0052:
	{
		uint32_t L_9 = V_3;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		UIntPtr__ctor_m5915109E3F198CA16FDFA9CF438FAAEBFB90DE27((&V_4), L_9, NULL);
		uintptr_t L_10 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
		V_5 = L_10;
		uintptr_t L_11 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
		V_6 = L_11;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_12 = ((RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F*)__this)->___resultHandle_4;
		uintptr_t L_13 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2_il2cpp_TypeInfo_var);
		Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* L_14 = ((Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2_StaticFields*)il2cpp_codegen_static_fields_for(Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2_il2cpp_TypeInfo_var))->___Null_6;
		Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* L_15 = ((Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2_StaticFields*)il2cpp_codegen_static_fields_for(Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2_il2cpp_TypeInfo_var))->___Null_6;
		intptr_t L_16;
		L_16 = RecognitionResult_translation_text_result_get_translation_mF003C3EB7A62C13EAF79EC3D4E1A73FB920AE809(L_12, L_13, L_14, L_15, (&V_5), (&V_6), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_16, NULL);
		uint32_t L_17;
		L_17 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&V_5), NULL);
		Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* L_18 = (Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2*)il2cpp_codegen_object_new(Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Utf8StringHandle__ctor_mD34C2052B76C3D83A0F720690F1C70E50743232A(L_18, L_17, NULL);
		V_7 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ee:
			{// begin finally (depth: 1)
				{
					Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* L_19 = V_7;
					if (!L_19)
					{
						goto IL_00fa;
					}
				}
				{
					Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* L_20 = V_7;
					NullCheck(L_20);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_20);
				}

IL_00fa:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
				uint32_t L_21;
				L_21 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&V_6), NULL);
				Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* L_22 = (Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2*)il2cpp_codegen_object_new(Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2_il2cpp_TypeInfo_var);
				NullCheck(L_22);
				Utf8StringHandle__ctor_mD34C2052B76C3D83A0F720690F1C70E50743232A(L_22, L_21, NULL);
				V_8 = L_22;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00df_1:
					{// begin finally (depth: 2)
						{
							Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* L_23 = V_8;
							if (!L_23)
							{
								goto IL_00eb_1;
							}
						}
						{
							Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* L_24 = V_8;
							NullCheck(L_24);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_24);
						}

IL_00eb_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_25 = ((RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F*)__this)->___resultHandle_4;
					uintptr_t L_26 = V_4;
					Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* L_27 = V_7;
					Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* L_28 = V_8;
					intptr_t L_29;
					L_29 = RecognitionResult_translation_text_result_get_translation_mF003C3EB7A62C13EAF79EC3D4E1A73FB920AE809(L_25, L_26, L_27, L_28, (&V_5), (&V_6), NULL);
					SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_29, NULL);
					Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_30 = __this->___translationTextResultMap_6;
					Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* L_31 = V_7;
					NullCheck(L_31);
					String_t* L_32;
					L_32 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
					Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* L_33 = V_8;
					NullCheck(L_33);
					String_t* L_34;
					L_34 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_33);
					NullCheck(L_30);
					Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_30, L_32, L_34, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
					goto IL_00ec_1;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00ec_1:
			{
				goto IL_00fb;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fb:
	{
		uint32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, 1));
	}

IL_0100:
	{
		uint32_t L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uint64_t L_37;
		L_37 = UIntPtr_ToUInt64_m7789E1D758F7AA7B1AAADB296EBC04E026A3F9FA((&V_1), NULL);
		V_9 = (bool)((!(((uint64_t)((int64_t)(uint64_t)L_36)) >= ((uint64_t)L_37)))? 1 : 0);
		bool L_38 = V_9;
		if (L_38)
		{
			goto IL_0052;
		}
	}
	{
	}

IL_0115:
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
extern "C" void CDECL ReversePInvokeWrapper_TranslationRecognizer_FireEvent_Recognizing_m17C8B5DC53375C671FD8E9F158A49378C62BD3D3(intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TranslationRecognizer_FireEvent_Recognizing_m17C8B5DC53375C671FD8E9F158A49378C62BD3D3(___0_hreco, ___1_hevent, ___2_pvContext, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_TranslationRecognizer_FireEvent_Recognized_m1A40021BFA25C2FB66E2E204DD020C3711F00B22(intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TranslationRecognizer_FireEvent_Recognized_m1A40021BFA25C2FB66E2E204DD020C3711F00B22(___0_hreco, ___1_hevent, ___2_pvContext, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_TranslationRecognizer_FireEvent_Canceled_mFD1B32ACF0B0EE83DE442139C160899879A51E46(intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TranslationRecognizer_FireEvent_Canceled_mFD1B32ACF0B0EE83DE442139C160899879A51E46(___0_hreco, ___1_hevent, ___2_pvContext, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_TranslationRecognizer_FireEvent_SynthesisResult_m8821CF5132DBD863346A36837637C0723E46F6E8(intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TranslationRecognizer_FireEvent_SynthesisResult_m8821CF5132DBD863346A36837637C0723E46F6E8(___0_hreco, ___1_hevent, ___2_pvContext, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Recognizing_m7F06A14055F7EA343EDB417019887749F95204BD (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_0 = NULL;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_1 = NULL;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_2 = NULL;
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_0 = __this->____Recognizing_19;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_2 = V_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)Castclass((RuntimeObject*)L_4, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698_il2cpp_TypeInfo_var));
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698** L_5 = (EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698**)(&__this->____Recognizing_19);
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_6 = V_2;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_7 = V_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_9 = V_0;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)L_9) == ((RuntimeObject*)(EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Recognizing_mDFCC6818686A988C4401D429A450539CDEAA1653 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_0 = NULL;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_1 = NULL;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_2 = NULL;
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_0 = __this->____Recognizing_19;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_2 = V_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)Castclass((RuntimeObject*)L_4, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698_il2cpp_TypeInfo_var));
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698** L_5 = (EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698**)(&__this->____Recognizing_19);
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_6 = V_2;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_7 = V_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_9 = V_0;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)L_9) == ((RuntimeObject*)(EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Recognized_mC948CE4C633F0B3989AB538E48CED770EAA2AB24 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_0 = NULL;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_1 = NULL;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_2 = NULL;
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_0 = __this->____Recognized_20;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_2 = V_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)Castclass((RuntimeObject*)L_4, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698_il2cpp_TypeInfo_var));
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698** L_5 = (EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698**)(&__this->____Recognized_20);
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_6 = V_2;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_7 = V_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_9 = V_0;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)L_9) == ((RuntimeObject*)(EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Recognized_mFA887E35EAAE84E06620A043A51B69403DDF9288 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_0 = NULL;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_1 = NULL;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* V_2 = NULL;
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_0 = __this->____Recognized_20;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_2 = V_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)Castclass((RuntimeObject*)L_4, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698_il2cpp_TypeInfo_var));
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698** L_5 = (EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698**)(&__this->____Recognized_20);
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_6 = V_2;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_7 = V_1;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_9 = V_0;
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)L_9) == ((RuntimeObject*)(EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Canceled_mBC507ED133CE7C79ED21D94FCBDD56491F8DC04F (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* V_0 = NULL;
	EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* V_1 = NULL;
	EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* V_2 = NULL;
	{
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_0 = __this->____Canceled_21;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_2 = V_1;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8*)Castclass((RuntimeObject*)L_4, EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8_il2cpp_TypeInfo_var));
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8** L_5 = (EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8**)(&__this->____Canceled_21);
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_6 = V_2;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_7 = V_1;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_9 = V_0;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8*)L_9) == ((RuntimeObject*)(EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Canceled_m9764030E5C9EFF7B4C48AE21DD87E5BBC5E0640F (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* V_0 = NULL;
	EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* V_1 = NULL;
	EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* V_2 = NULL;
	{
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_0 = __this->____Canceled_21;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_2 = V_1;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8*)Castclass((RuntimeObject*)L_4, EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8_il2cpp_TypeInfo_var));
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8** L_5 = (EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8**)(&__this->____Canceled_21);
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_6 = V_2;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_7 = V_1;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_9 = V_0;
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8*)L_9) == ((RuntimeObject*)(EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add_Recognizing_m5BAB5839D879D81073F27CA53AE6CB8337885B76 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_0 = __this->____Recognizing_19;
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_3 = __this->___recognizingCallbackDelegate_24;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___gch_14;
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_4, NULL);
		intptr_t L_6;
		L_6 = Recognizer_recognizer_recognizing_set_callback_m191FB76BFA8D594D949CCA2F0D8780C001ADFEEE(L_2, L_3, L_5, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_6, NULL);
	}

IL_0032:
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_7 = ___0_value;
		TranslationRecognizer_add__Recognizing_m7F06A14055F7EA343EDB417019887749F95204BD(__this, L_7, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove_Recognizing_m932338A39761F4AC1E5F2928F029A33922DE2183 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_0 = ___0_value;
		TranslationRecognizer_remove__Recognizing_mDFCC6818686A988C4401D429A450539CDEAA1653(__this, L_0, NULL);
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_1 = __this->____Recognizing_19;
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_5;
		L_5 = Recognizer_recognizer_recognizing_set_callback_m191FB76BFA8D594D949CCA2F0D8780C001ADFEEE(L_3, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_4, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_5, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add_Recognized_m1437E58C0813C018974685E579477BE1D1333BC9 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_0 = __this->____Recognized_20;
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_3 = __this->___recognizedCallbackDelegate_25;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___gch_14;
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_4, NULL);
		intptr_t L_6;
		L_6 = Recognizer_recognizer_recognized_set_callback_mF0B30872D6EAAE2A0DC15E02D87FE13A15C5EABB(L_2, L_3, L_5, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_6, NULL);
	}

IL_0032:
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_7 = ___0_value;
		TranslationRecognizer_add__Recognized_mC948CE4C633F0B3989AB538E48CED770EAA2AB24(__this, L_7, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove_Recognized_mB68B184148E7F584F9B332A3576FC8C43678D082 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_0 = ___0_value;
		TranslationRecognizer_remove__Recognized_mFA887E35EAAE84E06620A043A51B69403DDF9288(__this, L_0, NULL);
		EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_1 = __this->____Recognized_20;
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_5;
		L_5 = Recognizer_recognizer_recognized_set_callback_mF0B30872D6EAAE2A0DC15E02D87FE13A15C5EABB(L_3, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_4, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_5, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add_Canceled_mEE6EEF70DDDFD5CE94781584D40C4B5644068EC0 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_0 = __this->____Canceled_21;
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_3 = __this->___canceledCallbackDelegate_26;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___gch_14;
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_4, NULL);
		intptr_t L_6;
		L_6 = Recognizer_recognizer_canceled_set_callback_m67781166E6D72910FC2767718B4667615A9CAD95(L_2, L_3, L_5, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_6, NULL);
	}

IL_0032:
	{
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_7 = ___0_value;
		TranslationRecognizer_add__Canceled_mBC507ED133CE7C79ED21D94FCBDD56491F8DC04F(__this, L_7, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove_Canceled_mDE5EE8C9CA497FA63C4FED58130FCE8D4F840BA6 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_0 = ___0_value;
		TranslationRecognizer_remove__Canceled_m9764030E5C9EFF7B4C48AE21DD87E5BBC5E0640F(__this, L_0, NULL);
		EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_1 = __this->____Canceled_21;
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_3 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_5;
		L_5 = Recognizer_recognizer_canceled_set_callback_m67781166E6D72910FC2767718B4667615A9CAD95(L_3, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_4, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_5, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechTranslationConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer__ctor_mE8AE805843C9D9A8663E4BA1AD18BE52928173DF (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B* ___0_config, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxFactory_recognizer_create_translation_recognizer_from_config_m3729F9507E6B0659297532B1296142F59AC9E16B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* L_0 = (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D*)il2cpp_codegen_object_new(GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GetRecognizerFromConfigDelegate__ctor_m8225A337DC771AF4368C036689A77F76D48D4567(L_0, NULL, (intptr_t)((void*)SpxFactory_recognizer_create_translation_recognizer_from_config_m3729F9507E6B0659297532B1296142F59AC9E16B_RuntimeMethod_var), NULL);
		SpeechTranslationConfig_t1EEE80E7A3DA15D83DEBF70B9B811498B739CE8B* L_1 = ___0_config;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2;
		L_2 = Recognizer_FromConfig_m4175FC1D5C82C82271CA7D9D2DDC89DE92321C66(L_0, L_1, NULL);
		TranslationRecognizer__ctor_m9474B62F13778D537B18BB26C58D7CD4DD2B13D6(__this, L_2, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer__ctor_m9474B62F13778D537B18BB26C58D7CD4DD2B13D6 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_FireEvent_Canceled_mFD1B32ACF0B0EE83DE442139C160899879A51E46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_FireEvent_Recognized_m1A40021BFA25C2FB66E2E204DD020C3711F00B22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_FireEvent_Recognizing_m17C8B5DC53375C671FD8E9F158A49378C62BD3D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_FireEvent_SynthesisResult_m8821CF5132DBD863346A36837637C0723E46F6E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = ___0_recoHandle;
		Recognizer__ctor_mB448C82F7106784983B2332E0C35FAC613A10A05(__this, L_0, NULL);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_1 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_1, NULL, (intptr_t)((void*)TranslationRecognizer_FireEvent_Recognizing_m17C8B5DC53375C671FD8E9F158A49378C62BD3D3_RuntimeMethod_var), NULL);
		__this->___recognizingCallbackDelegate_24 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizingCallbackDelegate_24), (void*)L_1);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_2 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_2, NULL, (intptr_t)((void*)TranslationRecognizer_FireEvent_Recognized_m1A40021BFA25C2FB66E2E204DD020C3711F00B22_RuntimeMethod_var), NULL);
		__this->___recognizedCallbackDelegate_25 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizedCallbackDelegate_25), (void*)L_2);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_3 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_3, NULL, (intptr_t)((void*)TranslationRecognizer_FireEvent_Canceled_mFD1B32ACF0B0EE83DE442139C160899879A51E46_RuntimeMethod_var), NULL);
		__this->___canceledCallbackDelegate_26 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canceledCallbackDelegate_26), (void*)L_3);
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* L_4 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)il2cpp_codegen_object_new(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6(L_4, NULL, (intptr_t)((void*)TranslationRecognizer_FireEvent_SynthesisResult_m8821CF5132DBD863346A36837637C0723E46F6E8_RuntimeMethod_var), NULL);
		__this->___translationSynthesisCallbackDelegate_27 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___translationSynthesisCallbackDelegate_27), (void*)L_4);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = ___0_recoHandle;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_5, _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C, NULL);
		intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_6;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = ___0_recoHandle;
		intptr_t L_8;
		L_8 = Recognizer_recognizer_get_property_bag_mBABDBA1B6D8FBA89AA8F7EE89A3696B2260107F9(L_7, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_8, NULL);
		intptr_t L_9 = V_0;
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_10 = (PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53*)il2cpp_codegen_object_new(PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7(L_10, L_9, NULL);
		TranslationRecognizer_set_Properties_m5576585D06ED00C702202DE79DA2E1DE600CA8C0_inline(__this, L_10, NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* TranslationRecognizer_get_Properties_m041ED0EC39816383C2789C9784B00B7F50589ABF (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___U3CPropertiesU3Ek__BackingField_23;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_set_Properties_m5576585D06ED00C702202DE79DA2E1DE600CA8C0 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___0_value, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = ___0_value;
		__this->___U3CPropertiesU3Ek__BackingField_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_23), (void*)L_0);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::StartContinuousRecognitionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TranslationRecognizer_StartContinuousRecognitionAsync_m55412EFDF34D83FA6C1137AEACBF4971C98B3281 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__49_0_mB7614A16ABF329DFEA2297D085D6D7BE15A54833_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__49_0_mB7614A16ABF329DFEA2297D085D6D7BE15A54833_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853(L_0, NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = V_0;
		return L_2;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::StopContinuousRecognitionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TranslationRecognizer_StopContinuousRecognitionAsync_m49E04468A3D122A341D532A8CEA61B770251AB13 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__50_0_m43D1354FBDF91D1CD85A7F0A3AC13D804DADD4B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__50_0_m43D1354FBDF91D1CD85A7F0A3AC13D804DADD4B3_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853(L_0, NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_Finalize_mBD2AC4D93AB98B81003D56FC50214FF0531461D4 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0015:
			{// begin finally (depth: 1)
				Recognizer_Finalize_m65C041518559BC7332B58EC3BD23603D6FAEA7F5(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_memory_barrier();
			((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___isDisposing_16 = (bool)1;
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_001d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_Dispose_m319D91F26DCDA18C518359CA919A4B7D453F43F1 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* G_B7_0 = NULL;
	InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* G_B6_0 = NULL;
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* G_B10_0 = NULL;
	PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* G_B9_0 = NULL;
	{
		bool L_0 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___disposed_15;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0133;
	}

IL_0013:
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		V_1 = (bool)((!(((RuntimeObject*)(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00dd;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_6;
		L_6 = Recognizer_recognizer_recognizing_set_callback_m191FB76BFA8D594D949CCA2F0D8780C001ADFEEE(L_4, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_5, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_6, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_7 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_9;
		L_9 = Recognizer_recognizer_recognized_set_callback_mF0B30872D6EAAE2A0DC15E02D87FE13A15C5EABB(L_7, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_8, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_9, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_10 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_11 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_12;
		L_12 = Recognizer_recognizer_canceled_set_callback_m67781166E6D72910FC2767718B4667615A9CAD95(L_10, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_11, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_12, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_13 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_14 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_15;
		L_15 = Recognizer_translator_synthesizing_audio_set_callback_m0FD523ED521FB94BE327B95BE9876568D6FF8CF5(L_13, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_14, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_15, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_16 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_17 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_18;
		L_18 = Recognizer_recognizer_session_started_set_callback_mF7269B2257F45837CCEC187E3EF7E0688CC445D7(L_16, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_17, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_18, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_19 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_20 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_21;
		L_21 = Recognizer_recognizer_session_stopped_set_callback_m949170C5C61445F50B9C5480550D2AD4F7CE97D0(L_19, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_20, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_21, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_22 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_23 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_24;
		L_24 = Recognizer_recognizer_speech_start_detected_set_callback_m0EC66A25005B9C859A5897F59611FB88272A8F4A(L_22, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_23, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_24, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_25 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		intptr_t L_26 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_27;
		L_27 = Recognizer_recognizer_speech_end_detected_set_callback_mCD9730AB877903CBAC9CE3FE89EC42975EEE9883(L_25, (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL, L_26, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_27, NULL);
	}

IL_00dd:
	{
		bool L_28 = ___0_disposing;
		V_2 = L_28;
		bool L_29 = V_2;
		if (!L_29)
		{
			goto IL_0108;
		}
	}
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_30 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)__this)->___recoHandle_4;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_31 = L_30;
		G_B6_0 = L_31;
		if (L_31)
		{
			G_B7_0 = L_31;
			goto IL_00ef;
		}
	}
	{
		goto IL_00f5;
	}

IL_00ef:
	{
		NullCheck(G_B7_0);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(G_B7_0, NULL);
	}

IL_00f5:
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_32;
		L_32 = TranslationRecognizer_get_Properties_m041ED0EC39816383C2789C9784B00B7F50589ABF_inline(__this, NULL);
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_33 = L_32;
		G_B9_0 = L_33;
		if (L_33)
		{
			G_B10_0 = L_33;
			goto IL_0101;
		}
	}
	{
		goto IL_0107;
	}

IL_0101:
	{
		NullCheck(G_B10_0);
		VirtualActionInvoker0::Invoke(4 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close() */, G_B10_0);
	}

IL_0107:
	{
	}

IL_0108:
	{
		__this->___recognizingCallbackDelegate_24 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizingCallbackDelegate_24), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___recognizedCallbackDelegate_25 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recognizedCallbackDelegate_25), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___canceledCallbackDelegate_26 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canceledCallbackDelegate_26), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___translationSynthesisCallbackDelegate_27 = (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___translationSynthesisCallbackDelegate_27), (void*)(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*)NULL);
		__this->___audioInputKeepAlive_28 = (AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioInputKeepAlive_28), (void*)(AudioConfig_t97C98F0F764C263046543A14EE6C8CD02B57F4F3*)NULL);
		bool L_34 = ___0_disposing;
		Recognizer_Dispose_m41B4467C6470F75AD4C81138860A38D98B55E31B(__this, L_34, NULL);
	}

IL_0133:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Recognizing_m17C8B5DC53375C671FD8E9F158A49378C62BD3D3 (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m76C967D2A15D20C4366D5AEE896D36E71F71FEFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* V_0 = NULL;
	TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* G_B8_0 = NULL;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* G_B7_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___2_pvContext;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m76C967D2A15D20C4366D5AEE896D36E71F71FEFE(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m76C967D2A15D20C4366D5AEE896D36E71F71FEFE_RuntimeMethod_var);
			V_0 = L_1;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)L_3)->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_004d;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___1_hevent;
			TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* L_7 = (TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0*)il2cpp_codegen_object_new(TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			TranslationRecognitionEventArgs__ctor_m8AF9A74DEA81084992DC783C79D2DFC81A1230A7(L_7, L_6, NULL);
			V_1 = L_7;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_9 = L_8->____Recognizing_19;
			EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031_1;
			}
		}
		{
			goto IL_0039_1;
		}

IL_0031_1:
		{
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_11 = V_0;
			TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_m7605B37CD34250471B68BAA9242577D08297680A_inline(G_B8_0, L_11, L_12, NULL);
		}

IL_0039_1:
		{
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Recognized_m1A40021BFA25C2FB66E2E204DD020C3711F00B22 (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m76C967D2A15D20C4366D5AEE896D36E71F71FEFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* V_0 = NULL;
	TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* G_B8_0 = NULL;
	EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* G_B7_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___2_pvContext;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m76C967D2A15D20C4366D5AEE896D36E71F71FEFE(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m76C967D2A15D20C4366D5AEE896D36E71F71FEFE_RuntimeMethod_var);
			V_0 = L_1;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)L_3)->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_004d;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___1_hevent;
			TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* L_7 = (TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0*)il2cpp_codegen_object_new(TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			TranslationRecognitionEventArgs__ctor_m8AF9A74DEA81084992DC783C79D2DFC81A1230A7(L_7, L_6, NULL);
			V_1 = L_7;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_9 = L_8->____Recognized_20;
			EventHandler_1_t008E3F55CF18E8D623598A49DFBC452B2DD6E698* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031_1;
			}
		}
		{
			goto IL_0039_1;
		}

IL_0031_1:
		{
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_11 = V_0;
			TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_m7605B37CD34250471B68BAA9242577D08297680A_inline(G_B8_0, L_11, L_12, NULL);
		}

IL_0039_1:
		{
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Canceled_mFD1B32ACF0B0EE83DE442139C160899879A51E46 (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m76C967D2A15D20C4366D5AEE896D36E71F71FEFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* V_0 = NULL;
	TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* G_B8_0 = NULL;
	EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* G_B7_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___2_pvContext;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m76C967D2A15D20C4366D5AEE896D36E71F71FEFE(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m76C967D2A15D20C4366D5AEE896D36E71F71FEFE_RuntimeMethod_var);
			V_0 = L_1;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)L_3)->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_004d;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___1_hevent;
			TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* L_7 = (TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853*)il2cpp_codegen_object_new(TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			TranslationRecognitionCanceledEventArgs__ctor_mC0DAD5191F911E2119197BF1876B9DFD46B7E630(L_7, L_6, NULL);
			V_1 = L_7;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_9 = L_8->____Canceled_21;
			EventHandler_1_t529E119B11382401540BF02D1C8026AC460279A8* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031_1;
			}
		}
		{
			goto IL_0039_1;
		}

IL_0031_1:
		{
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_11 = V_0;
			TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_mA79A2261291A05C83B4486D0FE2D7D1865B3A0F8_inline(G_B8_0, L_11, L_12, NULL);
		}

IL_0039_1:
		{
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_SynthesisResult(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_SynthesisResult_m8821CF5132DBD863346A36837637C0723E46F6E8 (intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_pvContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m76C967D2A15D20C4366D5AEE896D36E71F71FEFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* V_0 = NULL;
	TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	EventHandler_1_tB299EE0561708ADFB5D5F63E18C58E89D72E7E6E* G_B8_0 = NULL;
	EventHandler_1_tB299EE0561708ADFB5D5F63E18C58E89D72E7E6E* G_B7_0 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___2_pvContext;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m76C967D2A15D20C4366D5AEE896D36E71F71FEFE(L_0, InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168_m76C967D2A15D20C4366D5AEE896D36E71F71FEFE_RuntimeMethod_var);
			V_0 = L_1;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016_1;
			}
		}
		{
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_tCA087D63D8BDE21D877CECAAF536BDCCFE54729A*)L_3)->___isDisposing_16;
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017_1;
		}

IL_0016_1:
		{
			G_B4_0 = 1;
		}

IL_0017_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e_1;
			}
		}
		{
			goto IL_004d;
		}

IL_001e_1:
		{
			intptr_t L_6 = ___1_hevent;
			TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F* L_7 = (TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F*)il2cpp_codegen_object_new(TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			TranslationSynthesisEventArgs__ctor_m0A5A5BCAA5952B55D937B2971ED4AB6F46AFA100(L_7, L_6, NULL);
			V_1 = L_7;
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_tB299EE0561708ADFB5D5F63E18C58E89D72E7E6E* L_9 = L_8->____Synthesizing_22;
			EventHandler_1_tB299EE0561708ADFB5D5F63E18C58E89D72E7E6E* L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031_1;
			}
		}
		{
			goto IL_0039_1;
		}

IL_0031_1:
		{
			TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* L_11 = V_0;
			TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F* L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_m26037260B36BA3D3C83D40C0FE919586B24E9553_inline(G_B8_0, L_11, L_12, NULL);
		}

IL_0039_1:
		{
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562(L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<StartContinuousRecognitionAsync>b__49_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__49_0_mB7614A16ABF329DFEA2297D085D6D7BE15A54833 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_StartContinuousRecognition_mB8E850543B3369010BFDC121ADC45B7F4D3EB0C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)Recognizer_StartContinuousRecognition_mB8E850543B3369010BFDC121ADC45B7F4D3EB0C2_RuntimeMethod_var), NULL);
		Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84(__this, L_0, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<StopContinuousRecognitionAsync>b__50_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__50_0_m43D1354FBDF91D1CD85A7F0A3AC13D804DADD4B3 (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_StopContinuousRecognition_mAB43FB36FA7F893031EE6EF33D7E980474FAE6D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)Recognizer_StopContinuousRecognition_mAB43FB36FA7F893031EE6EF33D7E980474FAE6D8_RuntimeMethod_var), NULL);
		Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84(__this, L_0, NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisResult__ctor_m5504E3A57CC4B725D64C1981A97FB918F653847F (TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* __this, intptr_t ___0_resultPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionResult_recognizer_result_handle_release_m9FC496DA00E94757F730641DFF06C371E45644D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline(Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_RuntimeMethod_var);
		__this->___audio_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audio_1), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_1 = ___0_resultPtr;
		SpxExceptionThrower_ThrowIfNull_m8BD4674A12DCA98CDD6818FD8F3D4721ADD38308(L_1, (String_t*)NULL, NULL);
		intptr_t L_2 = ___0_resultPtr;
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_3 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)il2cpp_codegen_object_new(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7(L_3, NULL, (intptr_t)((void*)RecognitionResult_recognizer_result_handle_release_m9FC496DA00E94757F730641DFF06C371E45644D7_RuntimeMethod_var), NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*)il2cpp_codegen_object_new(InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62(L_4, L_2, L_3, NULL);
		__this->___resultHandle_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultHandle_2), (void*)L_4);
		V_0 = 0;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = __this->___resultHandle_2;
		intptr_t L_6;
		L_6 = RecognitionResult_result_get_reason_mB22E2CCDD110DEC44AD292325BAF8CBCBD77089C(L_5, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_6, NULL);
		int32_t L_7 = V_0;
		__this->___U3CReasonU3Ek__BackingField_0 = L_7;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_8 = __this->___resultHandle_2;
		TranslationSynthesisResult_GetAudioData_mC7C4FABC68E4574F59A8D91513C4B4F560226DED(__this, L_8, NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslationSynthesisResult_get_Reason_mA851E1881441C4F278FA28AF75BE94B21DFC327F (TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationSynthesisResult_ToString_mC7A69F16165D4A7BB5622414AEA7CA34418E2CF4 (TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6072FBFC31FE8C1C066271F63752A3B9B67AAD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7EBE4EAAB6D68E9347038ACD59F39A9DE2D2040);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		int32_t L_1;
		L_1 = TranslationSynthesisResult_get_Reason_mA851E1881441C4F278FA28AF75BE94B21DFC327F_inline(__this, NULL);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(ResultReason_tC944C305A2A069DB2A7F5C6112F43FA8A4405A54_il2cpp_TypeInfo_var, &L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___audio_1;
		NullCheck(L_4);
		int32_t L_5 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_0, _stringLiteralC7EBE4EAAB6D68E9347038ACD59F39A9DE2D2040, L_3, L_6, NULL);
		V_0 = L_7;
		int32_t L_8;
		L_8 = TranslationSynthesisResult_get_Reason_mA851E1881441C4F278FA28AF75BE94B21DFC327F_inline(__this, NULL);
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)((int32_t)9)))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_11;
		L_11 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12;
		L_12 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_13;
		L_13 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_11, _stringLiteralC6072FBFC31FE8C1C066271F63752A3B9B67AAD9, L_12, NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, L_13, NULL);
		V_0 = L_14;
	}

IL_0054:
	{
		String_t* L_15 = V_0;
		V_2 = L_15;
		goto IL_0058;
	}

IL_0058:
	{
		String_t* L_16 = V_2;
		return L_16;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::GetAudioData(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisResult_GetAudioData_mC7C4FABC68E4574F59A8D91513C4B4F560226DED (TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_resultHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84F70ACE509061C886C9B2FE8A2BF7B7FFC81F7F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_0 = ___0_resultHandle;
		SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66(L_0, _stringLiteral84F70ACE509061C886C9B2FE8A2BF7B7FFC81F7F, NULL);
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_1 = ___0_resultHandle;
		bool L_2;
		L_2 = RecognitionResult_recognizer_result_handle_is_valid_m8353972B72D31F49BB55ACE8F797DD4F92DBC440(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0085;
		}
	}
	{
		V_1 = 0;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_4 = ___0_resultHandle;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_6;
		L_6 = RecognitionResult_translation_synthesis_result_get_audio_data_m8C4437638C590C15AB7071D1589E4B8BEE3CCD2A(L_4, L_5, (&V_1), NULL);
		V_2 = L_6;
		intptr_t L_7 = V_2;
		il2cpp_codegen_runtime_class_init_inline(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		intptr_t L_8 = ((SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var))->___BufferTooSmall_0;
		bool L_9;
		L_9 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_7, L_8, NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_12;
		L_12 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_11, NULL);
		V_4 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0070:
			{// begin finally (depth: 1)
				intptr_t L_13 = V_4;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_13, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_14 = ___0_resultHandle;
			intptr_t L_15 = V_4;
			intptr_t L_16;
			L_16 = RecognitionResult_translation_synthesis_result_get_audio_data_m8C4437638C590C15AB7071D1589E4B8BEE3CCD2A(L_14, L_15, (&V_1), NULL);
			SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_16, NULL);
			int32_t L_17 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_17);
			__this->___audio_1 = L_18;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___audio_1), (void*)L_18);
			intptr_t L_19 = V_4;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___audio_1;
			int32_t L_21 = V_1;
			il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
			Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_19, L_20, 0, L_21, NULL);
			goto IL_007b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007b:
	{
		goto IL_0085;
	}

IL_007d:
	{
		intptr_t L_22 = V_2;
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_22, NULL);
	}

IL_0085:
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisEventArgs__ctor_m0A5A5BCAA5952B55D937B2971ED4AB6F46AFA100 (TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F* __this, intptr_t ___0_eventHandlePtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_eventHandlePtr;
		SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA(__this, L_0, NULL);
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_1;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*)__this)->___eventHandle_1;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognition_event_get_result_mF0E0E2260FB3AE5D58E7F828258F477B17C30E2B(L_2, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_3, NULL);
		intptr_t L_4 = V_0;
		TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* L_5 = (TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2*)il2cpp_codegen_object_new(TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		TranslationSynthesisResult__ctor_m5504E3A57CC4B725D64C1981A97FB918F653847F(L_5, L_4, NULL);
		__this->___U3CResultU3Ek__BackingField_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField_5), (void*)L_5);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* TranslationSynthesisEventArgs_get_Result_mCA8BD226299930517C948A066CB4B247A304C515 (TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F* __this, const RuntimeMethod* method) 
{
	{
		TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* L_0 = __this->___U3CResultU3Ek__BackingField_5;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationSynthesisEventArgs_ToString_mE16282A6E080C3529B776C47B3DDF7C4501CD096 (TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07657094245180507A188C63C49A070BC8752EA2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_1;
		L_1 = SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline(__this, NULL);
		TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* L_2;
		L_2 = TranslationSynthesisEventArgs_get_Result_mCA8BD226299930517C948A066CB4B247A304C515_inline(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_0, _stringLiteral07657094245180507A188C63C49A070BC8752EA2, L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0024;
	}

IL_0024:
	{
		String_t* L_5 = V_0;
		return L_5;
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionEventArgs__ctor_m8AF9A74DEA81084992DC783C79D2DFC81A1230A7 (TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* __this, intptr_t ___0_eventHandlePtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_eventHandlePtr;
		RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34(__this, L_0, NULL);
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_1;
		InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_2 = ((SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC*)__this)->___eventHandle_1;
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognition_event_get_result_mF0E0E2260FB3AE5D58E7F828258F477B17C30E2B(L_2, (&V_0), NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_3, NULL);
		intptr_t L_4 = V_0;
		TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* L_5 = (TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19*)il2cpp_codegen_object_new(TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		TranslationRecognitionResult__ctor_mEC410E2929DA5612330E8C4521CD1363E7105CA1(L_5, L_4, NULL);
		__this->___U3CResultU3Ek__BackingField_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField_6), (void*)L_5);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* TranslationRecognitionEventArgs_get_Result_m047C28B1FF5C9231EF5D9CE4957C05CD2E4B5CDD (TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* __this, const RuntimeMethod* method) 
{
	{
		TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* L_0 = __this->___U3CResultU3Ek__BackingField_6;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationRecognitionEventArgs_ToString_mA6B067D8D6C5D0DAB3C26670987B1BE548B6827A (TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07657094245180507A188C63C49A070BC8752EA2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_1;
		L_1 = SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline(__this, NULL);
		TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* L_2;
		L_2 = TranslationRecognitionEventArgs_get_Result_m047C28B1FF5C9231EF5D9CE4957C05CD2E4B5CDD_inline(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_0, _stringLiteral07657094245180507A188C63C49A070BC8752EA2, L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0024;
	}

IL_0024:
	{
		String_t* L_5 = V_0;
		return L_5;
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionCanceledEventArgs__ctor_mC0DAD5191F911E2119197BF1876B9DFD46B7E630 (TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* __this, intptr_t ___0_eventHandlePtr, const RuntimeMethod* method) 
{
	CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* V_0 = NULL;
	{
		intptr_t L_0 = ___0_eventHandlePtr;
		TranslationRecognitionEventArgs__ctor_m8AF9A74DEA81084992DC783C79D2DFC81A1230A7(__this, L_0, NULL);
		TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* L_1;
		L_1 = TranslationRecognitionEventArgs_get_Result_m047C28B1FF5C9231EF5D9CE4957C05CD2E4B5CDD_inline(__this, NULL);
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_2;
		L_2 = CancellationDetails_FromResult_m601E12548DEFE4F1D895C4E927442D35FEE17541(L_1, NULL);
		V_0 = L_2;
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180_inline(L_3, NULL);
		__this->___U3CReasonU3Ek__BackingField_7 = L_4;
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = CancellationDetails_get_ErrorCode_m01B8889CC68F1443F822B1E8082F6B8378C723AF_inline(L_5, NULL);
		__this->___U3CErrorCodeU3Ek__BackingField_8 = L_6;
		CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636_inline(L_7, NULL);
		__this->___U3CErrorDetailsU3Ek__BackingField_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorDetailsU3Ek__BackingField_9), (void*)L_8);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_Reason_m93D03951586AFFFF3DF9AD531E90A6A6AC5A2809 (TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_7;
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_ErrorCode_mCD275DF83031DDBD93498938B45A578946631D24 (TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_8;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationRecognitionCanceledEventArgs_ToString_m9DCCAC9E91B16CE2A22B213F823A0A32EDE8DFA9 (TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationErrorCode_tA7E793829617AB6327A122CC40E657792C4D9402_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationReason_t51FBE96029389530BF9FEE71742677C3DFF019A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3;
		L_3 = SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline(__this, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* L_5;
		L_5 = TranslationRecognitionEventArgs_get_Result_m047C28B1FF5C9231EF5D9CE4957C05CD2E4B5CDD_inline(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_4;
		int32_t L_8;
		L_8 = TranslationRecognitionCanceledEventArgs_get_Reason_m93D03951586AFFFF3DF9AD531E90A6A6AC5A2809_inline(__this, NULL);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(CancellationReason_t51FBE96029389530BF9FEE71742677C3DFF019A5_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		int32_t L_12;
		L_12 = TranslationRecognitionCanceledEventArgs_get_ErrorCode_mCD275DF83031DDBD93498938B45A578946631D24_inline(__this, NULL);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(CancellationErrorCode_tA7E793829617AB6327A122CC40E657792C4D9402_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_0, _stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E, L_11, NULL);
		V_0 = L_15;
		goto IL_004c;
	}

IL_004c:
	{
		String_t* L_16 = V_0;
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
// System.Object[] Microsoft.CognitiveServices.Speech.Internal.Diagnostics::Args(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Diagnostics_Args_mDCDEA6887D47370C68291C5097A9E602B0B572B5 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_m461DD416BC0A2D9A142D0B9F4C664D18143B96FF (String_t* ___0_message, int32_t ___1_line, String_t* ___2_caller, String_t* ___3_file, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Diagnostics_Args_mDCDEA6887D47370C68291C5097A9E602B0B572B5(L_1, NULL);
		int32_t L_3 = ___1_line;
		String_t* L_4 = ___2_caller;
		String_t* L_5 = ___3_file;
		Diagnostics_SPX_TRACE_VERBOSE_mCE40F2444CF745BDF2E551F36C2065AC9FFFC5F9(L_0, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Object[],System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_mCE40F2444CF745BDF2E551F36C2065AC9FFFC5F9 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, int32_t ___2_line, String_t* ___3_caller, String_t* ___4_file, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsInterop_tA8D399C1F3B54CEE9AD0E92152924D0D77596050_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5276AA6769ABD877AC10339C332B2ECF5459404);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		String_t* L_2;
		L_2 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_0, L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = ___4_file;
		int32_t L_4 = ___2_line;
		String_t* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DiagnosticsInterop_tA8D399C1F3B54CEE9AD0E92152924D0D77596050_il2cpp_TypeInfo_var);
		DiagnosticsInterop_diagnostics_log_trace_string_mC082C4D355C2E875686E6FA011052567BC208E5B(((int32_t)16), _stringLiteralF5276AA6769ABD877AC10339C332B2ECF5459404, L_3, L_4, L_5, NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.DotNetFrameworkAnyCpuSupport::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332 (const RuntimeMethod* method) 
{
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails__cctor_mBEB7D958D2D09294C4BBD616934A9A42D6292E3E (const RuntimeMethod* method) 
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332(NULL);
		return;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_reason_canceled(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_reason_canceled_m2409DAC9A1FF682EDB03314E16DCBA148314D6B3 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_result, int32_t* ___1_reason, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_reason_canceled", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_result' to native representation
	void* ____0_result_marshaled = NULL;
	if (___0_result == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____0_result = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_result, (&___safeHandle_reference_incremented_for____0_result), NULL);
	____0_result_marshaled = reinterpret_cast<void*>((___0_result)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_reason_canceled)(____0_result_marshaled, ___1_reason);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_result_marshaled, ___1_reason);
	#endif

	// Marshaling cleanup of parameter '___0_result' native representation
	if (___safeHandle_reference_incremented_for____0_result)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_result, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_canceled_error_code(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationErrorCode&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_canceled_error_code_mCDE21F5EDFB5BA60E964C0CE460F74BF4EC55A74 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_result, int32_t* ___1_errorCode, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_canceled_error_code", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_result' to native representation
	void* ____0_result_marshaled = NULL;
	if (___0_result == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____0_result = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_result, (&___safeHandle_reference_incremented_for____0_result), NULL);
	____0_result_marshaled = reinterpret_cast<void*>((___0_result)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_canceled_error_code)(____0_result_marshaled, ___1_errorCode);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_result_marshaled, ___1_errorCode);
	#endif

	// Marshaling cleanup of parameter '___0_result' native representation
	if (___safeHandle_reference_incremented_for____0_result)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_result, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig__cctor_m7122FDABA765CCAE9E9844545B7AA07E65A9243F (const RuntimeMethod* method) 
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332(NULL);
		return;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_from_subscription_m3DEB42078EDD7746FD487010903FEA00D90900D3 (intptr_t* ___0_config, String_t* ___1_subscriptionKey, String_t* ___2_region, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_config_from_subscription", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_subscriptionKey' to native representation
	char* ____1_subscriptionKey_marshaled = NULL;
	____1_subscriptionKey_marshaled = il2cpp_codegen_marshal_string(___1_subscriptionKey);

	// Marshaling of parameter '___2_region' to native representation
	char* ____2_region_marshaled = NULL;
	____2_region_marshaled = il2cpp_codegen_marshal_string(___2_region);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_config_from_subscription)(___0_config, ____1_subscriptionKey_marshaled, ____2_region_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_config, ____1_subscriptionKey_marshaled, ____2_region_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_subscriptionKey' native representation
	il2cpp_codegen_marshal_free(____1_subscriptionKey_marshaled);
	____1_subscriptionKey_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_region' native representation
	il2cpp_codegen_marshal_free(____2_region_marshaled);
	____2_region_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_release_mA9578DF67E5F130B18A3B8B7FB8567B28D802BA4 (intptr_t ___0_config, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_config_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_config_release)(___0_config);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_config);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_get_property_bag_mC63C86FC0B561E654C02E74E5FA2422401E4BCAA (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_config, intptr_t* ___1_propbag, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_config_get_property_bag", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_config' to native representation
	void* ____0_config_marshaled = NULL;
	if (___0_config == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("config"), NULL);
	bool ___safeHandle_reference_incremented_for____0_config = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_config, (&___safeHandle_reference_incremented_for____0_config), NULL);
	____0_config_marshaled = reinterpret_cast<void*>((___0_config)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_config_get_property_bag)(____0_config_marshaled, ___1_propbag);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_config_marshaled, ___1_propbag);
	#endif

	// Marshaling cleanup of parameter '___0_config' native representation
	if (___safeHandle_reference_incremented_for____0_config)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_config, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechTranslationConfig__cctor_mC704B77892C75D9DEF9A15D823AC351DC910872D (const RuntimeMethod* method) 
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332(NULL);
		return;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechTranslationConfig_speech_translation_config_from_subscription_m4C0F48066FF2492F9E8F47507F3BACD51ACDE0EB (intptr_t* ___0_config, String_t* ___1_subscriptionKey, String_t* ___2_region, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_translation_config_from_subscription", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_subscriptionKey' to native representation
	char* ____1_subscriptionKey_marshaled = NULL;
	____1_subscriptionKey_marshaled = il2cpp_codegen_marshal_string(___1_subscriptionKey);

	// Marshaling of parameter '___2_region' to native representation
	char* ____2_region_marshaled = NULL;
	____2_region_marshaled = il2cpp_codegen_marshal_string(___2_region);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_translation_config_from_subscription)(___0_config, ____1_subscriptionKey_marshaled, ____2_region_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_config, ____1_subscriptionKey_marshaled, ____2_region_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_subscriptionKey' native representation
	il2cpp_codegen_marshal_free(____1_subscriptionKey_marshaled);
	____1_subscriptionKey_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_region' native representation
	il2cpp_codegen_marshal_free(____2_region_marshaled);
	____2_region_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_add_target_language(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechTranslationConfig_speech_translation_config_add_target_language_m0AD094DCDB4706C83B0F3C8839B077191D925B8A (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_config, String_t* ___1_language, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_translation_config_add_target_language", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_config' to native representation
	void* ____0_config_marshaled = NULL;
	if (___0_config == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("config"), NULL);
	bool ___safeHandle_reference_incremented_for____0_config = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_config, (&___safeHandle_reference_incremented_for____0_config), NULL);
	____0_config_marshaled = reinterpret_cast<void*>((___0_config)->___handle_0);

	// Marshaling of parameter '___1_language' to native representation
	char* ____1_language_marshaled = NULL;
	____1_language_marshaled = il2cpp_codegen_marshal_string(___1_language);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_translation_config_add_target_language)(____0_config_marshaled, ____1_language_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_config_marshaled, ____1_language_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_config' native representation
	if (___safeHandle_reference_incremented_for____0_config)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_config, NULL);
	}

	// Marshaling cleanup of parameter '___1_language' native representation
	il2cpp_codegen_marshal_free(____1_language_marshaled);
	____1_language_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsInterop__cctor_m8B3A8BAC343F54DA27CED74A94A75ED4D27A7537 (const RuntimeMethod* method) 
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332(NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::diagnostics_log_trace_string(System.Int32,System.String,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsInterop_diagnostics_log_trace_string_mC082C4D355C2E875686E6FA011052567BC208E5B (int32_t ___0_level, String_t* ___1_title, String_t* ___2_fileName, int32_t ___3_lineNumber, String_t* ___4_message, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (int32_t, char*, char*, int32_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(char*) + sizeof(char*) + sizeof(int32_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "diagnostics_log_trace_string", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_title' to native representation
	char* ____1_title_marshaled = NULL;
	____1_title_marshaled = il2cpp_codegen_marshal_string(___1_title);

	// Marshaling of parameter '___2_fileName' to native representation
	char* ____2_fileName_marshaled = NULL;
	____2_fileName_marshaled = il2cpp_codegen_marshal_string(___2_fileName);

	// Marshaling of parameter '___4_message' to native representation
	char* ____4_message_marshaled = NULL;
	____4_message_marshaled = il2cpp_codegen_marshal_string(___4_message);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	reinterpret_cast<PInvokeFunc>(diagnostics_log_trace_string)(___0_level, ____1_title_marshaled, ____2_fileName_marshaled, ___3_lineNumber, ____4_message_marshaled);
	#else
	il2cppPInvokeFunc(___0_level, ____1_title_marshaled, ____2_fileName_marshaled, ___3_lineNumber, ____4_message_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_title' native representation
	il2cpp_codegen_marshal_free(____1_title_marshaled);
	____1_title_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_fileName' native representation
	il2cpp_codegen_marshal_free(____2_fileName_marshaled);
	____2_fileName_marshaled = NULL;

	// Marshaling cleanup of parameter '___4_message' native representation
	il2cpp_codegen_marshal_free(____4_message_marshaled);
	____4_message_marshaled = NULL;

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxError__cctor_m26F27A784D2DFA07811AB4A6376066A85B12CC44 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(((int32_t)25), NULL);
		((SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var))->___BufferTooSmall_0 = L_0;
		intptr_t L_1;
		L_1 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(((int32_t)27), NULL);
		((SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var))->___RuntimeError_1 = L_1;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(((int32_t)33), NULL);
		((SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var))->___InvalidHandle_2 = L_2;
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(5, NULL);
		((SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var))->___InvalidArgument_3 = L_3;
		intptr_t L_4;
		L_4 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(4, NULL);
		((SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var))->___NotFound_4 = L_4;
		DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332(NULL);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxError::GetMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxError_GetMessage_mE9B98B4B6AB48FDC221BBB8A8ABF51CCD7B45864 (intptr_t ___0_errorHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		intptr_t L_1 = ___0_errorHandle;
		il2cpp_codegen_runtime_class_init_inline(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = SpxError_error_get_message_m2EB925EDBB9C1747CC78CFA9C3887DB63E1121FF(L_1, NULL);
		V_1 = L_2;
		intptr_t L_3 = V_1;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_7 = V_1;
		String_t* L_8;
		L_8 = Utf8StringMarshaler_MarshalNativeToManaged_m1880DC13C87D09223E562FF88DBFB188219203E1(L_7, NULL);
		V_0 = L_8;
	}

IL_0026:
	{
		String_t* L_9 = V_0;
		V_3 = L_9;
		goto IL_002a;
	}

IL_002a:
	{
		String_t* L_10 = V_3;
		return L_10;
	}
}
// System.Int32 Microsoft.CognitiveServices.Speech.Internal.SpxError::GetErrorCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpxError_GetErrorCode_m4B6341D56629F25358D246B76DD650A8E1974BB6 (intptr_t ___0_errorHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		intptr_t L_0 = ___0_errorHandle;
		il2cpp_codegen_runtime_class_init_inline(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = SpxError_error_get_error_code_m275D112661979DFB5BBF7AFA6EAB0DA45CE8C7D5(L_0, NULL);
		int32_t L_2;
		L_2 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_5;
		L_5 = IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292((&___0_errorHandle), NULL);
		V_2 = L_5;
		goto IL_0024;
	}

IL_0020:
	{
		int32_t L_6 = V_0;
		V_2 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		int32_t L_7 = V_2;
		return L_7;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxError_Release_mB9B1180BC0AD85536AE68C00A6320204E3D8812A (intptr_t ___0_errorHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_errorHandle;
		il2cpp_codegen_runtime_class_init_inline(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = SpxError_error_release_m8E082C5F6552726FA2BD8031657DC4942AE702AC(L_0, NULL);
		SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_1, NULL);
		return;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.SpxError::ReleaseNoThrow(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpxError_ReleaseNoThrow_m5FB663A7041D968F8339C0C5891DD79A01755754 (intptr_t ___0_errorHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		intptr_t L_0 = ___0_errorHandle;
		il2cpp_codegen_runtime_class_init_inline(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = SpxError_error_release_m8E082C5F6552726FA2BD8031657DC4942AE702AC(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		V_1 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_message(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_message_m2EB925EDBB9C1747CC78CFA9C3887DB63E1121FF (intptr_t ___0_errorHandle, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "error_get_message", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(error_get_message)(___0_errorHandle);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_errorHandle);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_error_code(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_error_code_m275D112661979DFB5BBF7AFA6EAB0DA45CE8C7D5 (intptr_t ___0_errorHandle, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "error_get_error_code", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(error_get_error_code)(___0_errorHandle);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_errorHandle);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_release_m8E082C5F6552726FA2BD8031657DC4942AE702AC (intptr_t ___0_errorHandle, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "error_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(error_release)(___0_errorHandle);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_errorHandle);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.EventArgs::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__cctor_m302E0D6CEEDB9BDC8D1D38604F8D285B1DD954F8 (const RuntimeMethod* method) 
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332(NULL);
		return;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.EventArgs::recognizer_event_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EventArgs_recognizer_event_handle_release_mDA02276B5C17D15AAC40D012354B19C2036BE6FE (intptr_t ___0_eventHandle, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_event_handle_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_event_handle_release)(___0_eventHandle);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_eventHandle);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_mCD6247FB473E269B565E8D2DFF089C409A664062 (MonoPInvokeCallbackAttribute_tCAE7DBDDEE93BF80011F064297B9B66A3719DCE8* __this, Type_t* ___0_t, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		Type_t* L_0 = ___0_t;
		__this->___type_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_0), (void*)L_0);
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
intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_Multicast(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___0_hresult, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* currentDelegate = reinterpret_cast<HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_hresult, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_OpenInst(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___0_hresult, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_hresult, method);
}
intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_OpenStatic(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___0_hresult, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_hresult, method);
}
intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_OpenStaticInvoker(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___0_hresult, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_hresult);
}
intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_ClosedStaticInvoker(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___0_hresult, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< intptr_t, RuntimeObject*, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_hresult);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9 (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___0_hresult, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___0_hresult);

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.HandleRelease::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7 (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_Multicast;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___0_hresult, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_hresult, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.HandleRelease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, intptr_t ___0_handle, HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* ___1_releaseHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___releaseHandleFunc_6 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___releaseHandleFunc_6), (void*)(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)NULL);
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, L_0, (bool)1, NULL);
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_1 = ___1_releaseHandle;
		__this->___releaseHandleFunc_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___releaseHandleFunc_6), (void*)L_1);
		intptr_t L_2 = ___0_handle;
		SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline(__this, L_2, NULL);
		return;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteropSafeHandle_get_IsInvalid_m0C613C6DFCD587AC5C04CE6F23DCECFB223233EA (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_3 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		intptr_t L_4;
		memset((&L_4), 0, sizeof(L_4));
		IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7((&L_4), (-1), /*hidden argument*/NULL);
		bool L_5;
		L_5 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 1;
	}

IL_0027:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteropSafeHandle_ReleaseHandle_m2F321C7B0B2E77403444A781A5279CC74038AE3E (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_0 = __this->___releaseHandleFunc_6;
		V_0 = (bool)((!(((RuntimeObject*)(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* L_2 = __this->___releaseHandleFunc_6;
		intptr_t L_3 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		NullCheck(L_2);
		intptr_t L_4;
		L_4 = HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_inline(L_2, L_3, NULL);
		SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F(L_4, NULL);
		__this->___releaseHandleFunc_6 = (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___releaseHandleFunc_6), (void*)(HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9*)NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0 = L_5;
	}

IL_0039:
	{
		V_1 = (bool)1;
		goto IL_003d;
	}

IL_003d:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle_Dispose_mC58913907DC7D23E82426AC45B50333CD885BDFC (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_disposing;
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643, L_2, L_3, NULL);
		Diagnostics_SPX_TRACE_VERBOSE_m461DD416BC0A2D9A142D0B9F4C664D18143B96FF(L_4, ((int32_t)84), _stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04, _stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D, NULL);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InteropSafeHandle_ToString_m1A7805107A6C1BB682B234E53FDCBC8C06604CC9 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7267B048CEDBB7AD42A5473F09940F2723B4506D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		intptr_t* L_0 = (intptr_t*)(&((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0);
		String_t* L_1;
		L_1 = IntPtr_ToString_m4B664F765633183265DE764BECD5D78FCCA20A13(L_0, _stringLiteral7267B048CEDBB7AD42A5473F09940F2723B4506D, NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle_Finalize_m83ABB6C2604BB75B5BB1A007DEF8ED9D78620503 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A8100DC94EF854DE676FBF7FAD86E84873F3000);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32);
		s_Il2CppMethodInitialized = true;
	}
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				SafeHandle_Finalize_m37C72FD2FE3D87E32CB41FAA2FC1C6B03510337B(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			String_t* L_0;
			L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
			String_t* L_1;
			L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3A8100DC94EF854DE676FBF7FAD86E84873F3000, L_0, NULL);
			Diagnostics_SPX_TRACE_VERBOSE_m461DD416BC0A2D9A142D0B9F4C664D18143B96FF(L_1, ((int32_t)105), _stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32, _stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D, NULL);
			VirtualActionInvoker1< bool >::Invoke(6 /* System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0036;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0036:
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxFactory__cctor_m4BB68A04E62A96852C374DEE4D7D751167B02E57 (const RuntimeMethod* method) 
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332(NULL);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxFactory::GetDataFromHandleUsingDelegate(Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxFactory_GetDataFromHandleUsingDelegate_mA284C8A162A111BE768AF9E347B6D74753AD238D (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* ___0_functionPtr, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___1_handle, int32_t ___2_maxCharCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		int32_t L_1 = ___2_maxCharCount;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				intptr_t L_3 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* L_4 = ___0_functionPtr;
			InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* L_5 = ___1_handle;
			intptr_t L_6 = V_1;
			int32_t L_7 = ___2_maxCharCount;
			NullCheck(L_4);
			intptr_t L_8;
			L_8 = GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_inline(L_4, L_5, L_6, L_7, NULL);
			SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33(L_8, NULL);
			intptr_t L_9 = V_1;
			String_t* L_10;
			L_10 = Utf8StringMarshaler_MarshalNativeToManaged_m1880DC13C87D09223E562FF88DBFB188219203E1(L_9, NULL);
			V_0 = L_10;
			goto IL_0034;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		String_t* L_11 = V_0;
		V_2 = L_11;
		goto IL_0038;
	}

IL_0038:
	{
		String_t* L_12 = V_2;
		return L_12;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::recognizer_create_speech_recognizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxFactory_recognizer_create_speech_recognizer_from_config_m4EE9A793506E319CF430427772F4F1494543A067 (intptr_t* ___0_recoHandle, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___1_speechconfig, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___2_audioInput, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_create_speech_recognizer_from_config", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_speechconfig' to native representation
	void* ____1_speechconfig_marshaled = NULL;
	if (___1_speechconfig == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("speechconfig"), NULL);
	bool ___safeHandle_reference_incremented_for____1_speechconfig = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___1_speechconfig, (&___safeHandle_reference_incremented_for____1_speechconfig), NULL);
	____1_speechconfig_marshaled = reinterpret_cast<void*>((___1_speechconfig)->___handle_0);

	// Marshaling of parameter '___2_audioInput' to native representation
	void* ____2_audioInput_marshaled = NULL;
	if (___2_audioInput == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioInput"), NULL);
	bool ___safeHandle_reference_incremented_for____2_audioInput = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___2_audioInput, (&___safeHandle_reference_incremented_for____2_audioInput), NULL);
	____2_audioInput_marshaled = reinterpret_cast<void*>((___2_audioInput)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_create_speech_recognizer_from_config)(___0_recoHandle, ____1_speechconfig_marshaled, ____2_audioInput_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_recoHandle, ____1_speechconfig_marshaled, ____2_audioInput_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_speechconfig' native representation
	if (___safeHandle_reference_incremented_for____1_speechconfig)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___1_speechconfig, NULL);
	}

	// Marshaling cleanup of parameter '___2_audioInput' native representation
	if (___safeHandle_reference_incremented_for____2_audioInput)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___2_audioInput, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::recognizer_create_translation_recognizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxFactory_recognizer_create_translation_recognizer_from_config_m3729F9507E6B0659297532B1296142F59AC9E16B (intptr_t* ___0_recoHandle, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___1_speechconfig, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___2_audioInput, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_create_translation_recognizer_from_config", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_speechconfig' to native representation
	void* ____1_speechconfig_marshaled = NULL;
	if (___1_speechconfig == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("speechconfig"), NULL);
	bool ___safeHandle_reference_incremented_for____1_speechconfig = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___1_speechconfig, (&___safeHandle_reference_incremented_for____1_speechconfig), NULL);
	____1_speechconfig_marshaled = reinterpret_cast<void*>((___1_speechconfig)->___handle_0);

	// Marshaling of parameter '___2_audioInput' to native representation
	void* ____2_audioInput_marshaled = NULL;
	if (___2_audioInput == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioInput"), NULL);
	bool ___safeHandle_reference_incremented_for____2_audioInput = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___2_audioInput, (&___safeHandle_reference_incremented_for____2_audioInput), NULL);
	____2_audioInput_marshaled = reinterpret_cast<void*>((___2_audioInput)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_create_translation_recognizer_from_config)(___0_recoHandle, ____1_speechconfig_marshaled, ____2_audioInput_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_recoHandle, ____1_speechconfig_marshaled, ____2_audioInput_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_speechconfig' native representation
	if (___safeHandle_reference_incremented_for____1_speechconfig)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___1_speechconfig, NULL);
	}

	// Marshaling cleanup of parameter '___2_audioInput' native representation
	if (___safeHandle_reference_incremented_for____2_audioInput)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___2_audioInput, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_Multicast(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_handle, intptr_t ___1_result, uint32_t ___2_maxCharCount, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	intptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* currentDelegate = reinterpret_cast<GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B*>(delegatesToInvoke[i]);
		typedef intptr_t (*FunctionPointerType) (RuntimeObject*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, intptr_t, uint32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_handle, ___1_result, ___2_maxCharCount, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_OpenInst(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_handle, intptr_t ___1_result, uint32_t ___2_maxCharCount, const RuntimeMethod* method)
{
	NullCheck(___0_handle);
	typedef intptr_t (*FunctionPointerType) (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, intptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_handle, ___1_result, ___2_maxCharCount, method);
}
intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_OpenStatic(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_handle, intptr_t ___1_result, uint32_t ___2_maxCharCount, const RuntimeMethod* method)
{
	typedef intptr_t (*FunctionPointerType) (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, intptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_handle, ___1_result, ___2_maxCharCount, method);
}
intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_OpenStaticInvoker(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_handle, intptr_t ___1_result, uint32_t ___2_maxCharCount, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< intptr_t, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, intptr_t, uint32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_handle, ___1_result, ___2_maxCharCount);
}
intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_ClosedStaticInvoker(GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_handle, intptr_t ___1_result, uint32_t ___2_maxCharCount, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< intptr_t, RuntimeObject*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, intptr_t, uint32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_handle, ___1_result, ___2_maxCharCount);
}
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_handle, intptr_t ___1_result, uint32_t ___2_maxCharCount, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(void*, intptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_handle' to native representation
	void* ____0_handle_marshaled = NULL;
	if (___0_handle == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("handle"), NULL);
	bool ___safeHandle_reference_incremented_for____0_handle = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_handle, (&___safeHandle_reference_incremented_for____0_handle), NULL);
	____0_handle_marshaled = reinterpret_cast<void*>((___0_handle)->___handle_0);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____0_handle_marshaled, ___1_result, ___2_maxCharCount);

	// Marshaling cleanup of parameter '___0_handle' native representation
	if (___safeHandle_reference_incremented_for____0_handle)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_handle, NULL);
	}

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314 (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_Multicast;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::Invoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280 (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_handle, intptr_t ___1_result, uint32_t ___2_maxCharCount, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, intptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_handle, ___1_result, ___2_maxCharCount, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection__cctor_mD5B1A5034EA0352927781A90400CE9F536E5623A (const RuntimeMethod* method) 
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332(NULL);
		return;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_set_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_set_string_m560E9C1D207F12D2F29289986814E739D7D5F5AC (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_propbag, int32_t ___1_id, intptr_t ___2_name, intptr_t ___3_value, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t, intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "property_bag_set_string", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_propbag' to native representation
	void* ____0_propbag_marshaled = NULL;
	if (___0_propbag == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("propbag"), NULL);
	bool ___safeHandle_reference_incremented_for____0_propbag = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_propbag, (&___safeHandle_reference_incremented_for____0_propbag), NULL);
	____0_propbag_marshaled = reinterpret_cast<void*>((___0_propbag)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_set_string)(____0_propbag_marshaled, ___1_id, ___2_name, ___3_value);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_propbag_marshaled, ___1_id, ___2_name, ___3_value);
	#endif

	// Marshaling cleanup of parameter '___0_propbag' native representation
	if (___safeHandle_reference_incremented_for____0_propbag)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_propbag, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_get_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_get_string_m85C22CC8AADAD49A93EBEAC06E243F29F897BE1D (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_propbag, int32_t ___1_id, intptr_t ___2_name, intptr_t ___3_defaultValue, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t, intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "property_bag_get_string", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_propbag' to native representation
	void* ____0_propbag_marshaled = NULL;
	if (___0_propbag == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("propbag"), NULL);
	bool ___safeHandle_reference_incremented_for____0_propbag = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_propbag, (&___safeHandle_reference_incremented_for____0_propbag), NULL);
	____0_propbag_marshaled = reinterpret_cast<void*>((___0_propbag)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_get_string)(____0_propbag_marshaled, ___1_id, ___2_name, ___3_defaultValue);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_propbag_marshaled, ___1_id, ___2_name, ___3_defaultValue);
	#endif

	// Marshaling cleanup of parameter '___0_propbag' native representation
	if (___safeHandle_reference_incremented_for____0_propbag)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_propbag, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_free_string(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_free_string_m800EB31CCD2E85E0DFCA2F1355B137D919CC83F9 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "property_bag_free_string", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_free_string)(___0_ptr);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_ptr);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_release_mEE19009AAC5E2984AD636297392382E086A42E9A (intptr_t ___0_propbag, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "property_bag_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_release)(___0_propbag);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_propbag);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_reason(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.ResultReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_reason_mB22E2CCDD110DEC44AD292325BAF8CBCBD77089C (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_result, int32_t* ___1_reason, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_reason", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_result' to native representation
	void* ____0_result_marshaled = NULL;
	if (___0_result == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____0_result = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_result, (&___safeHandle_reference_incremented_for____0_result), NULL);
	____0_result_marshaled = reinterpret_cast<void*>((___0_result)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_reason)(____0_result_marshaled, ___1_reason);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_result_marshaled, ___1_reason);
	#endif

	// Marshaling cleanup of parameter '___0_result' native representation
	if (___safeHandle_reference_incremented_for____0_result)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_result, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_result_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_result_id_m9502FF6B24BD822E33C9C8453CB7EE06F510035D (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_result, intptr_t ___1_resultId, uint32_t ___2_resultIdLength, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_result_id", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_result' to native representation
	void* ____0_result_marshaled = NULL;
	if (___0_result == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____0_result = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_result, (&___safeHandle_reference_incremented_for____0_result), NULL);
	____0_result_marshaled = reinterpret_cast<void*>((___0_result)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_result_id)(____0_result_marshaled, ___1_resultId, ___2_resultIdLength);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_result_marshaled, ___1_resultId, ___2_resultIdLength);
	#endif

	// Marshaling cleanup of parameter '___0_result' native representation
	if (___safeHandle_reference_incremented_for____0_result)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_result, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_text(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_text_mA7F1307B026F922E2CD4B260F686F45FA661844D (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_result, intptr_t ___1_text, uint32_t ___2_textLength, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_text", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_result' to native representation
	void* ____0_result_marshaled = NULL;
	if (___0_result == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____0_result = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_result, (&___safeHandle_reference_incremented_for____0_result), NULL);
	____0_result_marshaled = reinterpret_cast<void*>((___0_result)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_text)(____0_result_marshaled, ___1_text, ___2_textLength);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_result_marshaled, ___1_text, ___2_textLength);
	#endif

	// Marshaling cleanup of parameter '___0_result' native representation
	if (___safeHandle_reference_incremented_for____0_result)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_result, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_property_bag_m821908DAA6239D92C4DDA591D92F3BA6770A0EBF (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_result, intptr_t* ___1_hpropbag, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_property_bag", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_result' to native representation
	void* ____0_result_marshaled = NULL;
	if (___0_result == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____0_result = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_result, (&___safeHandle_reference_incremented_for____0_result), NULL);
	____0_result_marshaled = reinterpret_cast<void*>((___0_result)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_property_bag)(____0_result_marshaled, ___1_hpropbag);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_result_marshaled, ___1_hpropbag);
	#endif

	// Marshaling cleanup of parameter '___0_result' native representation
	if (___safeHandle_reference_incremented_for____0_result)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_result, NULL);
	}

	return returnValue;
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_is_valid(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecognitionResult_recognizer_result_handle_is_valid_m8353972B72D31F49BB55ACE8F797DD4F92DBC440 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_result, const RuntimeMethod* method) 
{
	typedef uint8_t (STDCALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_result_handle_is_valid", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_result' to native representation
	void* ____0_result_marshaled = NULL;
	if (___0_result == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____0_result = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_result, (&___safeHandle_reference_incremented_for____0_result), NULL);
	____0_result_marshaled = reinterpret_cast<void*>((___0_result)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_result_handle_is_valid)(____0_result_marshaled);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(____0_result_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_result' native representation
	if (___safeHandle_reference_incremented_for____0_result)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_result, NULL);
	}

	return static_cast<bool>(returnValue);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_recognizer_result_handle_release_m9FC496DA00E94757F730641DFF06C371E45644D7 (intptr_t ___0_result, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_result_handle_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_result_handle_release)(___0_result);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_result);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_text_result_get_translation_count(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UIntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_text_result_get_translation_count_m0E9FF9C675F4E98324B160D60512B7440FA7B561 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_handle, uintptr_t* ___1_count, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, uintptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uintptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "translation_text_result_get_translation_count", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_handle' to native representation
	void* ____0_handle_marshaled = NULL;
	if (___0_handle == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("handle"), NULL);
	bool ___safeHandle_reference_incremented_for____0_handle = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_handle, (&___safeHandle_reference_incremented_for____0_handle), NULL);
	____0_handle_marshaled = reinterpret_cast<void*>((___0_handle)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(translation_text_result_get_translation_count)(____0_handle_marshaled, ___1_count);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_handle_marshaled, ___1_count);
	#endif

	// Marshaling cleanup of parameter '___0_handle' native representation
	if (___safeHandle_reference_incremented_for____0_handle)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_handle, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_text_result_get_translation(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UIntPtr,Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle,Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle,System.UIntPtr&,System.UIntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_text_result_get_translation_mF003C3EB7A62C13EAF79EC3D4E1A73FB920AE809 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_handle, uintptr_t ___1_index, Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* ___2_language, Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* ___3_text, uintptr_t* ___4_languageSize, uintptr_t* ___5_textSize, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, uintptr_t, void*, void*, uintptr_t*, uintptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uintptr_t) + sizeof(void*) + sizeof(void*) + sizeof(uintptr_t*) + sizeof(uintptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "translation_text_result_get_translation", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_handle' to native representation
	void* ____0_handle_marshaled = NULL;
	if (___0_handle == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("handle"), NULL);
	bool ___safeHandle_reference_incremented_for____0_handle = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_handle, (&___safeHandle_reference_incremented_for____0_handle), NULL);
	____0_handle_marshaled = reinterpret_cast<void*>((___0_handle)->___handle_0);

	// Marshaling of parameter '___2_language' to native representation
	void* ____2_language_marshaled = NULL;
	if (___2_language == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("language"), NULL);
	bool ___safeHandle_reference_incremented_for____2_language = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___2_language, (&___safeHandle_reference_incremented_for____2_language), NULL);
	____2_language_marshaled = reinterpret_cast<void*>((___2_language)->___handle_0);

	// Marshaling of parameter '___3_text' to native representation
	void* ____3_text_marshaled = NULL;
	if (___3_text == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("text"), NULL);
	bool ___safeHandle_reference_incremented_for____3_text = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___3_text, (&___safeHandle_reference_incremented_for____3_text), NULL);
	____3_text_marshaled = reinterpret_cast<void*>((___3_text)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(translation_text_result_get_translation)(____0_handle_marshaled, ___1_index, ____2_language_marshaled, ____3_text_marshaled, ___4_languageSize, ___5_textSize);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_handle_marshaled, ___1_index, ____2_language_marshaled, ____3_text_marshaled, ___4_languageSize, ___5_textSize);
	#endif

	// Marshaling cleanup of parameter '___0_handle' native representation
	if (___safeHandle_reference_incremented_for____0_handle)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_handle, NULL);
	}

	// Marshaling cleanup of parameter '___2_language' native representation
	if (___safeHandle_reference_incremented_for____2_language)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___2_language, NULL);
	}

	// Marshaling cleanup of parameter '___3_text' native representation
	if (___safeHandle_reference_incremented_for____3_text)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___3_text, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_synthesis_result_get_audio_data(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_synthesis_result_get_audio_data_m8C4437638C590C15AB7071D1589E4B8BEE3CCD2A (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_handle, intptr_t ___1_audioBuffer, int32_t* ___2_lengthPointer, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "translation_synthesis_result_get_audio_data", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_handle' to native representation
	void* ____0_handle_marshaled = NULL;
	if (___0_handle == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("handle"), NULL);
	bool ___safeHandle_reference_incremented_for____0_handle = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_handle, (&___safeHandle_reference_incremented_for____0_handle), NULL);
	____0_handle_marshaled = reinterpret_cast<void*>((___0_handle)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(translation_synthesis_result_get_audio_data)(____0_handle_marshaled, ___1_audioBuffer, ___2_lengthPointer);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_handle_marshaled, ___1_audioBuffer, ___2_lengthPointer);
	#endif

	// Marshaling cleanup of parameter '___0_handle' native representation
	if (___safeHandle_reference_incremented_for____0_handle)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_handle, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_Multicast(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_context, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* currentDelegate = reinterpret_cast<CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_hreco, ___1_hevent, ___2_context, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_OpenInst(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_context, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_hreco, ___1_hevent, ___2_context, method);
}
void CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_OpenStatic(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_context, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_hreco, ___1_hevent, ___2_context, method);
}
void CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_OpenStaticInvoker(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_context, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_hreco, ___1_hevent, ___2_context);
}
void CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_ClosedStaticInvoker(CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_context, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_hreco, ___1_hevent, ___2_context);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_context, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_hreco, ___1_hevent, ___2_context);

}
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6 (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7_Multicast;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7 (CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* __this, intptr_t ___0_hreco, intptr_t ___1_hevent, intptr_t ___2_context, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_hreco, ___1_hevent, ___2_context, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_get_property_bag_mBABDBA1B6D8FBA89AA8F7EE89A3696B2260107F9 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, intptr_t* ___1_propbag, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_get_property_bag", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_recoHandle' to native representation
	void* ____0_recoHandle_marshaled = NULL;
	if (___0_recoHandle == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____0_recoHandle = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_recoHandle, (&___safeHandle_reference_incremented_for____0_recoHandle), NULL);
	____0_recoHandle_marshaled = reinterpret_cast<void*>((___0_recoHandle)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_get_property_bag)(____0_recoHandle_marshaled, ___1_propbag);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_recoHandle_marshaled, ___1_propbag);
	#endif

	// Marshaling cleanup of parameter '___0_recoHandle' native representation
	if (___safeHandle_reference_incremented_for____0_recoHandle)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_recoHandle, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_handle_release_mF92E200D447EA3683E5F7BB0C161C0234D6DBA18 (intptr_t ___0_recoHandle, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_handle_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_handle_release)(___0_recoHandle);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_recoHandle);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_mFE3B06A762EE00FF838458427E2F952FB5407BCF (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, intptr_t* ___1_asyncHandle, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_start_continuous_recognition_async", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_recoHandle' to native representation
	void* ____0_recoHandle_marshaled = NULL;
	if (___0_recoHandle == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____0_recoHandle = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_recoHandle, (&___safeHandle_reference_incremented_for____0_recoHandle), NULL);
	____0_recoHandle_marshaled = reinterpret_cast<void*>((___0_recoHandle)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_start_continuous_recognition_async)(____0_recoHandle_marshaled, ___1_asyncHandle);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_recoHandle_marshaled, ___1_asyncHandle);
	#endif

	// Marshaling cleanup of parameter '___0_recoHandle' native representation
	if (___safeHandle_reference_incremented_for____0_recoHandle)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_recoHandle, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_wait_for_m268ED182DC8D366E209F9F1AB84BE422EC684FC9 (intptr_t ___0_asyncHandle, uint32_t ___1_milliseconds, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_start_continuous_recognition_async_wait_for", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_start_continuous_recognition_async_wait_for)(___0_asyncHandle, ___1_milliseconds);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_asyncHandle, ___1_milliseconds);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_m69D0B06E76D75CF53DE02D6A404B05D6FBA22755 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, intptr_t* ___1_asyncHandle, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_stop_continuous_recognition_async", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_recoHandle' to native representation
	void* ____0_recoHandle_marshaled = NULL;
	if (___0_recoHandle == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____0_recoHandle = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_recoHandle, (&___safeHandle_reference_incremented_for____0_recoHandle), NULL);
	____0_recoHandle_marshaled = reinterpret_cast<void*>((___0_recoHandle)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_stop_continuous_recognition_async)(____0_recoHandle_marshaled, ___1_asyncHandle);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_recoHandle_marshaled, ___1_asyncHandle);
	#endif

	// Marshaling cleanup of parameter '___0_recoHandle' native representation
	if (___safeHandle_reference_incremented_for____0_recoHandle)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_recoHandle, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_wait_for_m09E1A2510DDB56EB568761E56CCFF6338FEDF50E (intptr_t ___0_asyncHandle, uint32_t ___1_milliseconds, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_stop_continuous_recognition_async_wait_for", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_stop_continuous_recognition_async_wait_for)(___0_asyncHandle, ___1_milliseconds);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_asyncHandle, ___1_milliseconds);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_async_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_async_handle_release_mD1E72A888C8A7F733BBCA13265EE0FCCC57CBE7B (intptr_t ___0_asyncHandle, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_async_handle_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_async_handle_release)(___0_asyncHandle);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_asyncHandle);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_offset(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_offset_m3353D90846CA1D744E0F1EEB82A52320F767AD68 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_eventHandle, uint64_t* ___1_offset, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_recognition_event_get_offset", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_eventHandle' to native representation
	void* ____0_eventHandle_marshaled = NULL;
	if (___0_eventHandle == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____0_eventHandle = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_eventHandle, (&___safeHandle_reference_incremented_for____0_eventHandle), NULL);
	____0_eventHandle_marshaled = reinterpret_cast<void*>((___0_eventHandle)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognition_event_get_offset)(____0_eventHandle_marshaled, ___1_offset);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_eventHandle_marshaled, ___1_offset);
	#endif

	// Marshaling cleanup of parameter '___0_eventHandle' native representation
	if (___safeHandle_reference_incremented_for____0_eventHandle)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_eventHandle, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_event_get_session_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_event_get_session_id_m19AEE7F994037064C324319645D814B64D14E165 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_eventHandle, intptr_t ___1_sessionIdStr, uint32_t ___2_sessionId, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_session_event_get_session_id", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_eventHandle' to native representation
	void* ____0_eventHandle_marshaled = NULL;
	if (___0_eventHandle == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____0_eventHandle = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_eventHandle, (&___safeHandle_reference_incremented_for____0_eventHandle), NULL);
	____0_eventHandle_marshaled = reinterpret_cast<void*>((___0_eventHandle)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_session_event_get_session_id)(____0_eventHandle_marshaled, ___1_sessionIdStr, ___2_sessionId);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_eventHandle_marshaled, ___1_sessionIdStr, ___2_sessionId);
	#endif

	// Marshaling cleanup of parameter '___0_eventHandle' native representation
	if (___safeHandle_reference_incremented_for____0_eventHandle)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_eventHandle, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_result(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_result_mF0E0E2260FB3AE5D58E7F828258F477B17C30E2B (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_eventHandle, intptr_t* ___1_result, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_recognition_event_get_result", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_eventHandle' to native representation
	void* ____0_eventHandle_marshaled = NULL;
	if (___0_eventHandle == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____0_eventHandle = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_eventHandle, (&___safeHandle_reference_incremented_for____0_eventHandle), NULL);
	____0_eventHandle_marshaled = reinterpret_cast<void*>((___0_eventHandle)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognition_event_get_result)(____0_eventHandle_marshaled, ___1_result);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_eventHandle_marshaled, ___1_result);
	#endif

	// Marshaling cleanup of parameter '___0_eventHandle' native representation
	if (___safeHandle_reference_incremented_for____0_eventHandle)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_eventHandle, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_started_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_started_set_callback_mF7269B2257F45837CCEC187E3EF7E0688CC445D7 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___1_callback, intptr_t ___2_context, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_session_started_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_recoHandle' to native representation
	void* ____0_recoHandle_marshaled = NULL;
	if (___0_recoHandle == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____0_recoHandle = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_recoHandle, (&___safeHandle_reference_incremented_for____0_recoHandle), NULL);
	____0_recoHandle_marshaled = reinterpret_cast<void*>((___0_recoHandle)->___handle_0);

	// Marshaling of parameter '___1_callback' to native representation
	Il2CppMethodPointer ____1_callback_marshaled = NULL;
	____1_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_session_started_set_callback)(____0_recoHandle_marshaled, ____1_callback_marshaled, ___2_context);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_recoHandle_marshaled, ____1_callback_marshaled, ___2_context);
	#endif

	// Marshaling cleanup of parameter '___0_recoHandle' native representation
	if (___safeHandle_reference_incremented_for____0_recoHandle)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_recoHandle, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_stopped_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_stopped_set_callback_m949170C5C61445F50B9C5480550D2AD4F7CE97D0 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___1_callback, intptr_t ___2_context, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_session_stopped_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_recoHandle' to native representation
	void* ____0_recoHandle_marshaled = NULL;
	if (___0_recoHandle == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____0_recoHandle = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_recoHandle, (&___safeHandle_reference_incremented_for____0_recoHandle), NULL);
	____0_recoHandle_marshaled = reinterpret_cast<void*>((___0_recoHandle)->___handle_0);

	// Marshaling of parameter '___1_callback' to native representation
	Il2CppMethodPointer ____1_callback_marshaled = NULL;
	____1_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_session_stopped_set_callback)(____0_recoHandle_marshaled, ____1_callback_marshaled, ___2_context);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_recoHandle_marshaled, ____1_callback_marshaled, ___2_context);
	#endif

	// Marshaling cleanup of parameter '___0_recoHandle' native representation
	if (___safeHandle_reference_incremented_for____0_recoHandle)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_recoHandle, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_start_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_start_detected_set_callback_m0EC66A25005B9C859A5897F59611FB88272A8F4A (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___1_callback, intptr_t ___2_context, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_speech_start_detected_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_recoHandle' to native representation
	void* ____0_recoHandle_marshaled = NULL;
	if (___0_recoHandle == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____0_recoHandle = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_recoHandle, (&___safeHandle_reference_incremented_for____0_recoHandle), NULL);
	____0_recoHandle_marshaled = reinterpret_cast<void*>((___0_recoHandle)->___handle_0);

	// Marshaling of parameter '___1_callback' to native representation
	Il2CppMethodPointer ____1_callback_marshaled = NULL;
	____1_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_speech_start_detected_set_callback)(____0_recoHandle_marshaled, ____1_callback_marshaled, ___2_context);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_recoHandle_marshaled, ____1_callback_marshaled, ___2_context);
	#endif

	// Marshaling cleanup of parameter '___0_recoHandle' native representation
	if (___safeHandle_reference_incremented_for____0_recoHandle)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_recoHandle, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_end_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_end_detected_set_callback_mCD9730AB877903CBAC9CE3FE89EC42975EEE9883 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___1_callback, intptr_t ___2_context, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_speech_end_detected_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_recoHandle' to native representation
	void* ____0_recoHandle_marshaled = NULL;
	if (___0_recoHandle == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____0_recoHandle = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_recoHandle, (&___safeHandle_reference_incremented_for____0_recoHandle), NULL);
	____0_recoHandle_marshaled = reinterpret_cast<void*>((___0_recoHandle)->___handle_0);

	// Marshaling of parameter '___1_callback' to native representation
	Il2CppMethodPointer ____1_callback_marshaled = NULL;
	____1_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_speech_end_detected_set_callback)(____0_recoHandle_marshaled, ____1_callback_marshaled, ___2_context);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_recoHandle_marshaled, ____1_callback_marshaled, ___2_context);
	#endif

	// Marshaling cleanup of parameter '___0_recoHandle' native representation
	if (___safeHandle_reference_incremented_for____0_recoHandle)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_recoHandle, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognizing_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognizing_set_callback_m191FB76BFA8D594D949CCA2F0D8780C001ADFEEE (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___1_callback, intptr_t ___2_context, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_recognizing_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_recoHandle' to native representation
	void* ____0_recoHandle_marshaled = NULL;
	if (___0_recoHandle == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____0_recoHandle = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_recoHandle, (&___safeHandle_reference_incremented_for____0_recoHandle), NULL);
	____0_recoHandle_marshaled = reinterpret_cast<void*>((___0_recoHandle)->___handle_0);

	// Marshaling of parameter '___1_callback' to native representation
	Il2CppMethodPointer ____1_callback_marshaled = NULL;
	____1_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognizing_set_callback)(____0_recoHandle_marshaled, ____1_callback_marshaled, ___2_context);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_recoHandle_marshaled, ____1_callback_marshaled, ___2_context);
	#endif

	// Marshaling cleanup of parameter '___0_recoHandle' native representation
	if (___safeHandle_reference_incremented_for____0_recoHandle)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_recoHandle, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognized_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognized_set_callback_mF0B30872D6EAAE2A0DC15E02D87FE13A15C5EABB (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___1_callback, intptr_t ___2_context, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_recognized_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_recoHandle' to native representation
	void* ____0_recoHandle_marshaled = NULL;
	if (___0_recoHandle == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____0_recoHandle = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_recoHandle, (&___safeHandle_reference_incremented_for____0_recoHandle), NULL);
	____0_recoHandle_marshaled = reinterpret_cast<void*>((___0_recoHandle)->___handle_0);

	// Marshaling of parameter '___1_callback' to native representation
	Il2CppMethodPointer ____1_callback_marshaled = NULL;
	____1_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognized_set_callback)(____0_recoHandle_marshaled, ____1_callback_marshaled, ___2_context);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_recoHandle_marshaled, ____1_callback_marshaled, ___2_context);
	#endif

	// Marshaling cleanup of parameter '___0_recoHandle' native representation
	if (___safeHandle_reference_incremented_for____0_recoHandle)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_recoHandle, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_canceled_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_canceled_set_callback_m67781166E6D72910FC2767718B4667615A9CAD95 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___1_callback, intptr_t ___2_context, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_canceled_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_recoHandle' to native representation
	void* ____0_recoHandle_marshaled = NULL;
	if (___0_recoHandle == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____0_recoHandle = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_recoHandle, (&___safeHandle_reference_incremented_for____0_recoHandle), NULL);
	____0_recoHandle_marshaled = reinterpret_cast<void*>((___0_recoHandle)->___handle_0);

	// Marshaling of parameter '___1_callback' to native representation
	Il2CppMethodPointer ____1_callback_marshaled = NULL;
	____1_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_canceled_set_callback)(____0_recoHandle_marshaled, ____1_callback_marshaled, ___2_context);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_recoHandle_marshaled, ____1_callback_marshaled, ___2_context);
	#endif

	// Marshaling cleanup of parameter '___0_recoHandle' native representation
	if (___safeHandle_reference_incremented_for____0_recoHandle)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_recoHandle, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::translator_synthesizing_audio_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_translator_synthesizing_audio_set_callback_m0FD523ED521FB94BE327B95BE9876568D6FF8CF5 (InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_recoHandle, CallbackFunctionDelegate_tC745A2B557EE8241DF1F7ABD3BFC1C8F3A2E81AA* ___1_callback, intptr_t ___2_context, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "translator_synthesizing_audio_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_recoHandle' to native representation
	void* ____0_recoHandle_marshaled = NULL;
	if (___0_recoHandle == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____0_recoHandle = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_recoHandle, (&___safeHandle_reference_incremented_for____0_recoHandle), NULL);
	____0_recoHandle_marshaled = reinterpret_cast<void*>((___0_recoHandle)->___handle_0);

	// Marshaling of parameter '___1_callback' to native representation
	Il2CppMethodPointer ____1_callback_marshaled = NULL;
	____1_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(translator_synthesizing_audio_set_callback)(____0_recoHandle_marshaled, ____1_callback_marshaled, ___2_context);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_recoHandle_marshaled, ____1_callback_marshaled, ___2_context);
	#endif

	// Marshaling cleanup of parameter '___0_recoHandle' native representation
	if (___safeHandle_reference_incremented_for____0_recoHandle)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_recoHandle, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33 (intptr_t ___0_hr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		intptr_t L_0 = ___0_hr;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_4 = ___0_hr;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var)));
		int32_t L_5;
		L_5 = SpxError_GetErrorCode_m4B6341D56629F25358D246B76DD650A8E1974BB6(L_4, NULL);
		V_1 = L_5;
		intptr_t L_6 = ___0_hr;
		String_t* L_7;
		L_7 = SpxError_GetMessage_mE9B98B4B6AB48FDC221BBB8A8ABF51CCD7B45864(L_6, NULL);
		V_2 = L_7;
		String_t* L_8 = V_2;
		bool L_9;
		L_9 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_8, NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_11;
		L_11 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_12;
		L_12 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_13;
		L_13 = Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8((&V_1), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE)), L_12, NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		NullCheck(L_13);
		String_t* L_15;
		L_15 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_13, L_14, NULL);
		String_t* L_16;
		L_16 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D994AF9D9226E9E4FB3842699E67F727590C94D)), L_15, NULL);
		V_2 = L_16;
	}

IL_0056:
	{
		intptr_t L_17 = ___0_hr;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var)));
		bool L_18;
		L_18 = SpxError_ReleaseNoThrow_m5FB663A7041D968F8339C0C5891DD79A01755754(L_17, NULL);
		String_t* L_19 = V_2;
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_20 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33_RuntimeMethod_var)));
	}

IL_0064:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66 (RuntimeObject* ___0_item, String_t* ___1_message, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_item;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_2 = ___1_message;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		___1_message = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA23629C306AA023437DA41361139F76CFB792614));
	}

IL_001d:
	{
		String_t* L_5 = ___1_message;
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_6 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66_RuntimeMethod_var)));
	}

IL_0024:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_m8BD4674A12DCA98CDD6818FD8F3D4721ADD38308 (intptr_t ___0_item, String_t* ___1_message, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogErrorIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F (intptr_t ___0_hr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BF1B4B734433B6AD600A9CCEB253AD568B4B6A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		intptr_t L_0 = ___0_hr;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		intptr_t L_4 = ___0_hr;
		il2cpp_codegen_runtime_class_init_inline(SpxError_t1CCB290F01587A895B752386C959C6E0346321AD_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = SpxError_GetErrorCode_m4B6341D56629F25358D246B76DD650A8E1974BB6(L_4, NULL);
		V_1 = L_5;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6;
		L_6 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_7;
		L_7 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_8;
		L_8 = Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8((&V_1), _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, L_7, NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9;
		L_9 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		NullCheck(L_8);
		String_t* L_10;
		L_10 = String_ToLower_mD22E5D18F36015484078F5BA0F1687DA95904D1E(L_8, L_9, NULL);
		String_t* L_11;
		L_11 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744(L_6, _stringLiteral7BF1B4B734433B6AD600A9CCEB253AD568B4B6A7, L_10, NULL);
		V_2 = L_11;
		intptr_t L_12 = ___0_hr;
		SpxError_Release_mB9B1180BC0AD85536AE68C00A6320204E3D8812A(L_12, NULL);
	}

IL_004b:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562 (String_t* ___0_message, const RuntimeMethod* method) 
{
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
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_m1880DC13C87D09223E562FF88DBFB188219203E1 (intptr_t ___0_native, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		intptr_t L_0 = ___0_native;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_2 = L_4;
		goto IL_007b;
	}

IL_0019:
	{
		V_0 = 0;
		goto IL_0023;
	}

IL_001d:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0023:
	{
		intptr_t L_6 = ___0_native;
		int32_t L_7 = V_0;
		intptr_t L_8;
		L_8 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_6, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		uint8_t L_9;
		L_9 = Marshal_ReadByte_m7BB641553588142FA7C6E4653C6AE83A0CEFD25F(L_8, NULL);
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_10 = V_0;
		G_B7_0 = ((((int32_t)L_10) < ((int32_t)((int32_t)4194304)))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B7_0 = 0;
	}

IL_003c:
	{
		V_3 = (bool)G_B7_0;
		bool L_11 = V_3;
		if (L_11)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_12 = V_0;
		V_4 = (bool)((((int32_t)((((int32_t)L_12) < ((int32_t)((int32_t)4194304)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0071;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		int32_t L_15 = ((int32_t)4194304);
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_15);
		String_t* L_17;
		L_17 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6CC1A826990E4F55C0AF3E80A72DC2D9003B1658)), L_16, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8StringMarshaler_MarshalNativeToManaged_m1880DC13C87D09223E562FF88DBFB188219203E1_RuntimeMethod_var)));
	}

IL_0071:
	{
		intptr_t L_19 = ___0_native;
		int32_t L_20 = V_0;
		String_t* L_21;
		L_21 = Utf8StringMarshaler_MarshalNativeToManaged_m70188DCC0BBF343875B0FC908360B3A2D62BA41C(L_19, L_20, NULL);
		V_2 = L_21;
		goto IL_007b;
	}

IL_007b:
	{
		String_t* L_22 = V_2;
		return L_22;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_m70188DCC0BBF343875B0FC908360B3A2D62BA41C (intptr_t ___0_native, int32_t ___1_lengthInBytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		intptr_t L_0 = ___0_native;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		V_2 = (String_t*)NULL;
		goto IL_0045;
	}

IL_0015:
	{
		int32_t L_4 = ___1_lengthInBytes;
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_2 = L_6;
		goto IL_0045;
	}

IL_0026:
	{
		int32_t L_7 = ___1_lengthInBytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_0 = L_8;
		intptr_t L_9 = ___0_native;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		int32_t L_11 = ___1_lengthInBytes;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_9, L_10, 0, L_11, NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_12;
		L_12 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_12, L_13);
		V_2 = L_14;
		goto IL_0045;
	}

IL_0045:
	{
		String_t* L_15 = V_2;
		return L_15;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_mA2A5D5D755F5CBDC9B03E312EF298838134D8B1A (String_t* ___0_str, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ___0_str;
		intptr_t L_1;
		L_1 = Utf8StringMarshaler_MarshalManagedToNative_m3E540F085F553C8ED22C810E96FD1B920DE847C5(L_0, (&V_0), NULL);
		V_1 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		intptr_t L_2 = V_1;
		return L_2;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_m3E540F085F553C8ED22C810E96FD1B920DE847C5 (String_t* ___0_str, int32_t* ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		String_t* L_0 = ___0_str;
		V_2 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		int32_t* L_2 = ___1_length;
		*((int32_t*)L_2) = (int32_t)0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_3 = L_3;
		goto IL_0050;
	}

IL_0015:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_5 = ___0_str;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(26 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		V_0 = L_6;
		int32_t* L_7 = ___1_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_8)->max_length)), 1));
		int32_t* L_9 = ___1_length;
		int32_t L_10 = *((int32_t*)L_9);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_11;
		L_11 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_10, NULL);
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		intptr_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_12, 0, L_13, ((int32_t)(((RuntimeArray*)L_14)->max_length)), NULL);
		intptr_t L_15 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		NullCheck(L_16);
		intptr_t L_17;
		L_17 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_15, ((int32_t)(((RuntimeArray*)L_16)->max_length)), NULL);
		Marshal_WriteByte_m066886B8F93D94A1EC21B990179BF6C41AC9762B(L_17, (uint8_t)0, NULL);
		intptr_t L_18 = V_1;
		V_3 = L_18;
		goto IL_0050;
	}

IL_0050:
	{
		intptr_t L_19 = V_3;
		return L_19;
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8StringHandle__ctor_mD34C2052B76C3D83A0F720690F1C70E50743232A (Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* __this, uint32_t ___0_maxLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, L_0, (bool)1, NULL);
		uint32_t L_1 = ___0_maxLength;
		V_0 = (bool)(false? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD150B768BC4907FDDB1BE9F66C5E43806644D97C)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95DC79C73A34C98991065992C9FD3B3F8A4AB21B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8StringHandle__ctor_mD34C2052B76C3D83A0F720690F1C70E50743232A_RuntimeMethod_var)));
	}

IL_0027:
	{
		uint32_t L_4 = ___0_maxLength;
		__this->___U3CLengthU3Ek__BackingField_7 = L_4;
		uint32_t L_5;
		L_5 = Utf8StringHandle_get_Length_mDD8F79BC55C56CE25DAFB5D7264D884E44FA5724_inline(__this, NULL);
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_6), ((int64_t)(uint64_t)L_5), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_7;
		L_7 = Marshal_AllocHGlobal_m9C4DA3126D84801FE8D2F88B97B2F14D59391504(L_6, NULL);
		SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline(__this, L_7, NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8StringHandle__ctor_m88DFF0E652E83213BD6D93F3CE066760916F0AEA (Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.UInt32 Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Utf8StringHandle_get_Length_mDD8F79BC55C56CE25DAFB5D7264D884E44FA5724 (Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CLengthU3Ek__BackingField_7;
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringHandle_ToString_mFA4E763D1DB7E2BA29BC48ADDF7834F12A0C023F (Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = SafeHandle_get_IsClosed_mD2CD4AA6E3B0A242E48080F18BC07199CAB80273(__this, NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		V_1 = (String_t*)NULL;
		goto IL_0028;
	}

IL_001a:
	{
		intptr_t L_3 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		String_t* L_4;
		L_4 = Utf8StringMarshaler_MarshalNativeToManaged_m1880DC13C87D09223E562FF88DBFB188219203E1(L_3, NULL);
		V_1 = L_4;
		goto IL_0028;
	}

IL_0028:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8StringHandle_get_IsInvalid_m3C21504F73E486815724CAED602554563AD78A2F (Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8StringHandle_ReleaseHandle_mAABAE993E9459FF588988AEEFE2C27F48D2A48F6 (Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		intptr_t L_2 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_2, NULL);
	}

IL_001c:
	{
		V_1 = (bool)1;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8StringHandle__cctor_mF21B1F89E7660DC9F2E862450A9505B27D673B8D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* L_0 = (Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2*)il2cpp_codegen_object_new(Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Utf8StringHandle__ctor_m88DFF0E652E83213BD6D93F3CE066760916F0AEA(L_0, NULL);
		((Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2_StaticFields*)il2cpp_codegen_static_fields_for(Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2_il2cpp_TypeInfo_var))->___Null_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2_StaticFields*)il2cpp_codegen_static_fields_for(Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2_il2cpp_TypeInfo_var))->___Null_6), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33_inline (SessionEventArgs_t06C8DB22E01F18F0B45A4E719BECB043B4D961BC* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSessionIdU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t RecognitionEventArgs_get_Offset_m7518854BD1D37BB220A79F81301A0A07E7D791A9_inline (RecognitionEventArgs_tF3045EA40FBF0ACD26A0B6F7D4144036AA7D05F9* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3COffsetU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecognitionResult_set_Properties_m4882E5F4FF2BD9889CA0D982BA14CB48E6936468_inline (RecognitionResult_t900FA7A9A16DB8B9FDE5395B1B773BDC63BE474F* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___0_value, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = ___0_value;
		__this->___U3CPropertiesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_Reason_m12D27884D7BBCF9EC1908A1DFF49066DEF4EF2B5_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CReasonU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorCode_m78B75A1457D448E18D427A192E95A964218C8A74_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CErrorCodeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorDetails_m22095079546C7E7DC32D28BB7D2271B3E68ACE93_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CErrorDetailsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorDetailsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CErrorDetailsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD_inline (GetRecognizerFromConfigDelegate_t17EEE1C5E4305DB57FCBE2C975DB62B9BA4B584D* __this, intptr_t* ___0_phreco, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___1_speechconfig, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___2_audioInput, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_phreco, ___1_speechconfig, ___2_audioInput, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9_inline (SpeechRecognitionEventArgs_tA7F1649E47FF3239DACE11D5537ECC0AC23E94BD* __this, const RuntimeMethod* method) 
{
	{
		SpeechRecognitionResult_tBA76D21E6D62BB6B2CDC9F83766BB1E791649D94* L_0 = __this->___U3CResultU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_ErrorCode_m01B8889CC68F1443F822B1E8082F6B8378C723AF_inline (CancellationDetails_t3A257E993FAECAD1A9866267C438E47CFA1D308A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_Reason_m43CDCCC1311B234FB9F7C31BF966478DEB156815_inline (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_ErrorCode_m54BF697777056D1E09CEDB6E005095970A48B5D2_inline (SpeechRecognitionCanceledEventArgs_t5FB6DBEE3C3E77AE97C05A03CE7CBC0BD387CA86* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeechRecognizer_set_Properties_mCEEEDD714A579195CF49B0F9E4609DFD1EE2C7FC_inline (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___0_value, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = ___0_value;
		__this->___U3CPropertiesU3Ek__BackingField_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_25), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* SpeechRecognizer_get_Properties_m1C0886BAAE462E98012C7EF3CED1E0314E341024_inline (SpeechRecognizer_t949CB7F9294C8FD93325B16A1791A28325C2203B* __this, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___U3CPropertiesU3Ek__BackingField_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TranslationRecognizer_set_Properties_m5576585D06ED00C702202DE79DA2E1DE600CA8C0_inline (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* ___0_value, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = ___0_value;
		__this->___U3CPropertiesU3Ek__BackingField_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_23), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* TranslationRecognizer_get_Properties_m041ED0EC39816383C2789C9784B00B7F50589ABF_inline (TranslationRecognizer_tAEE1F79841E087D238E7450755C96DD589BE0168* __this, const RuntimeMethod* method) 
{
	{
		PropertyCollection_tD2FEDF489ECC1689767DEE33A0152F1FA719AA53* L_0 = __this->___U3CPropertiesU3Ek__BackingField_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationSynthesisResult_get_Reason_mA851E1881441C4F278FA28AF75BE94B21DFC327F_inline (TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* TranslationSynthesisEventArgs_get_Result_mCA8BD226299930517C948A066CB4B247A304C515_inline (TranslationSynthesisEventArgs_t8FB96FD526982A583F5A91C6EF7CB17C1210A59F* __this, const RuntimeMethod* method) 
{
	{
		TranslationSynthesisResult_tCCE322C2C7FDC0F193CFD38F27E107E88FAF48D2* L_0 = __this->___U3CResultU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* TranslationRecognitionEventArgs_get_Result_m047C28B1FF5C9231EF5D9CE4957C05CD2E4B5CDD_inline (TranslationRecognitionEventArgs_t0F1D46343AA090830357DA90FD500DC7FC75BEF0* __this, const RuntimeMethod* method) 
{
	{
		TranslationRecognitionResult_tE95FF320EDD627570B9D1B3C710EB7925CC54D19* L_0 = __this->___U3CResultU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_Reason_m93D03951586AFFFF3DF9AD531E90A6A6AC5A2809_inline (TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_ErrorCode_mCD275DF83031DDBD93498938B45A578946631D24_inline (TranslationRecognitionCanceledEventArgs_tD5827BE8533B28001EA604E99F9C8E73FFD0B853* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		__this->___handle_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB_inline (HandleRelease_tDA5C5C8C145FFFB7E9AE3ADB1506118017AC70F9* __this, intptr_t ___0_hresult, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_hresult, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280_inline (GetResultDelegate_t678B8552898C76C54DA3B9B56C14C65BDE7D434B* __this, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D* ___0_handle, intptr_t ___1_result, uint32_t ___2_maxCharCount, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, InteropSafeHandle_tF89D29ECBF32E354348244E7F6DA611CE448629D*, intptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_handle, ___1_result, ___2_maxCharCount, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Utf8StringHandle_get_Length_mDD8F79BC55C56CE25DAFB5D7264D884E44FA5724_inline (Utf8StringHandle_t63AB643F337677D0F1175385FC23DF1C918878A2* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CLengthU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_sender, RuntimeObject* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
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
