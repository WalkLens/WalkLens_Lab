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
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Func`2<System.Attribute,System.Boolean>
struct Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Collections.Generic.IEnumerable`1<System.Attribute>
struct IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
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
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Unity.Burst.BurstCompileAttribute
struct BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D;
// Unity.Burst.BurstCompilerOptions
struct BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9;
// Unity.Burst.BurstDiscardAttribute
struct BurstDiscardAttribute_t860FCEA3A7BADFD735A65A36C99B894EB2AAB388;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Diagnostics.ConditionalAttribute
struct ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tB15AE7271F787DA6A515EA05BEC5B218E147E15A;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t21EB37F7C74C04A9F8DE2EB74773A0D5524A1A0F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Burst.BurstCompiler/<>c
struct U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4;
// Unity.Burst.BurstCompiler/FakeDelegate
struct FakeDelegate_t659588AB379C77AF08088ED8B2E2A5ECFF38CE16;
// Unity.Burst.BurstCompiler/StaticTypeReinitAttribute
struct StaticTypeReinitAttribute_tEB18A64CD3B786EA0443D6EC81EC1E70F7AAA3F1;
// Unity.Burst.BurstRuntime/PreserveAttribute
struct PreserveAttribute_tA1799B67558808CC16DE11D04CC1D42AAA569133;
// Unity.Burst.BurstString/PreserveAttribute
struct PreserveAttribute_t54BBA699FC0C1DD99BED77D21CADC33A352E1999;
// Unity.Burst.SharedStatic/PreserveAttribute
struct PreserveAttribute_tDEA15EF9DCAB8AC4428ED72A2A1377384FE7C27B;
// Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate
struct IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstDiscardAttribute_t860FCEA3A7BADFD735A65A36C99B894EB2AAB388_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FakeDelegate_t659588AB379C77AF08088ED8B2E2A5ECFF38CE16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NumberFormatKind_t0CCF7872121CBA35A7D6296565B4A7554FB275E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t2CADAF0D55AC9D0785A6F7B80D4772CF1220C48F____07DB995E8ED2CFB0AB71EBA69F3A3EC07D5C6AC10C0C64F33E94ED2949B348AA_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t2CADAF0D55AC9D0785A6F7B80D4772CF1220C48F____C69994AC61B52FBCEA582D6CCCD595C12E00BDB18F0C6F593FB6B393CAEDB08C_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t2CADAF0D55AC9D0785A6F7B80D4772CF1220C48F____D0067CAD9A63E0813759A2BB841051CA73570C0DA2E08E840A8EB45DB6A7A010_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t2CADAF0D55AC9D0785A6F7B80D4772CF1220C48F____D5B592C05DC25B5032553F1B27F4139BE95E881F73DB33B02B05AB20C3F9981E_3_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral013FC6682F27B79F88F9FD6E6D77A97E36BC828C;
IL2CPP_EXTERN_C String_t* _stringLiteral052A90A585030A2D7669CC7D2884B0D78760C742;
IL2CPP_EXTERN_C String_t* _stringLiteral095255162964C376C50DCE630D972167CA5AE0D8;
IL2CPP_EXTERN_C String_t* _stringLiteral16764301FDE0B2444923BB6CE0B9B7F315E4DB64;
IL2CPP_EXTERN_C String_t* _stringLiteral17490A99BE5820911E7C397A415006E24720C376;
IL2CPP_EXTERN_C String_t* _stringLiteral419870EEDCB789FA7F30F9A090D5126C86B866CD;
IL2CPP_EXTERN_C String_t* _stringLiteral4784CA4E159D86F8767CCC55143536AF34801074;
IL2CPP_EXTERN_C String_t* _stringLiteral4BCE0A6A775CEDDE2F72825B7D364029086B76D3;
IL2CPP_EXTERN_C String_t* _stringLiteral592EA6352B1DC6F257CCDA7C5C1A064EFE696C16;
IL2CPP_EXTERN_C String_t* _stringLiteral6CE6C7F7F72B90957BFCD4BAD12273C41A1C3421;
IL2CPP_EXTERN_C String_t* _stringLiteral71E0656B4D7E6F065BE6785258C0E7EAAC0EA6FF;
IL2CPP_EXTERN_C String_t* _stringLiteral733F2C0F892979C2C29E7E7599E36E7BC6DA158B;
IL2CPP_EXTERN_C String_t* _stringLiteral79DA35A084D67D3A4C946D97765E49E456B15354;
IL2CPP_EXTERN_C String_t* _stringLiteral7AD6BA121E4A8420E000A0297BE2958650057EEB;
IL2CPP_EXTERN_C String_t* _stringLiteral7EAAC6CF31A5C9BD93736FBA006E9BA2CA274A12;
IL2CPP_EXTERN_C String_t* _stringLiteral85F734AB4B70F85FBE3AD2752128D17420A8753B;
IL2CPP_EXTERN_C String_t* _stringLiteral8AC6E2C9E3B0B89CE7829E6FE9748CF10C25C407;
IL2CPP_EXTERN_C String_t* _stringLiteralBEE03BDA1448C10795E764222E36CC6226EECA1A;
IL2CPP_EXTERN_C String_t* _stringLiteralC00E97A4D6DA0A1E727CA6FCAC517CF439F3A016;
IL2CPP_EXTERN_C String_t* _stringLiteralCB10577699DFF2E53EAEE7AF1A6306F8D8F38230;
IL2CPP_EXTERN_C String_t* _stringLiteralEEA647B69ECF2FB3DD083E36418FF930832E0BEF;
IL2CPP_EXTERN_C String_t* _stringLiteralF64621FA894BC5FE3BE4B3D3E62813C72B063F9F;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEAABBBE67A35DBB7CF309C3EC21780633775FD;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompilerHelper_IsBurstEnabled_m8F3C6D0129D14359B51860FBA51933C4FE92F131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompilerOptions_HasBurstCompileAttribute_mC68CA53F4A77780A30D34E895B120188F31F7826_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompiler_CompileILPPMethod2_m545A8FC57B460871C1715F32DD601F2C1CA9C7FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompiler_Compile_m0038D8F2B6CB3915CB12F71E15B14C7355BFC8EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompiler_GetILPPMethodFunctionPointer2_m8C671F61D031A10FC46911AC94B57C1E58D1F567_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D_mAD047DA5EEB378D0343B0C8D2460F32490F9FCBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_All_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m222FE295E7B1277D5D6F5271C96D454E62E52F44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCompileU3Eb__22_0_m2326454433F78E8E68A7EB9191933F393BDB0401_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7A78175E99B61C7B4022EA3D1E12E92F7F669089 
{
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t2CADAF0D55AC9D0785A6F7B80D4772CF1220C48F  : public RuntimeObject
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Unity.Burst.BurstCompiler
struct BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8  : public RuntimeObject
{
};

// Unity.Burst.BurstCompilerOptions
struct BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9  : public RuntimeObject
{
	// System.Boolean Unity.Burst.BurstCompilerOptions::_enableBurstCompilation
	bool ____enableBurstCompilation_3;
	// System.Boolean Unity.Burst.BurstCompilerOptions::_enableBurstSafetyChecks
	bool ____enableBurstSafetyChecks_4;
	// System.Boolean Unity.Burst.BurstCompilerOptions::<IsGlobal>k__BackingField
	bool ___U3CIsGlobalU3Ek__BackingField_5;
	// System.Action Unity.Burst.BurstCompilerOptions::<OptionsChanged>k__BackingField
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3COptionsChangedU3Ek__BackingField_6;
};

// Unity.Burst.BurstRuntime
struct BurstRuntime_tA87CEB6EE77F6DA708C87C3DAEC7862E3A1B0EA1  : public RuntimeObject
{
};

// Unity.Burst.BurstString
struct BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Unity.Burst.SharedStatic
struct SharedStatic_t83F4045688B6DB97142DC2BCAE88140D165FFE35  : public RuntimeObject
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

// Unity.Burst.BurstCompiler/<>c
struct U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4  : public RuntimeObject
{
};

// Unity.Burst.BurstCompiler/BurstCompilerHelper
struct BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD  : public RuntimeObject
{
};

// Unity.Burst.BurstCompiler/FakeDelegate
struct FakeDelegate_t659588AB379C77AF08088ED8B2E2A5ECFF38CE16  : public RuntimeObject
{
	// System.Reflection.MethodInfo Unity.Burst.BurstCompiler/FakeDelegate::<Method>k__BackingField
	MethodInfo_t* ___U3CMethodU3Ek__BackingField_0;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// Unity.Burst.BurstDiscardAttribute
struct BurstDiscardAttribute_t860FCEA3A7BADFD735A65A36C99B894EB2AAB388  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Diagnostics.ConditionalAttribute
struct ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Diagnostics.ConditionalAttribute::<ConditionString>k__BackingField
	String_t* ___U3CConditionStringU3Ek__BackingField_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tB15AE7271F787DA6A515EA05BEC5B218E147E15A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.Hash128
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	// System.UInt64 UnityEngine.Hash128::u64_0
	uint64_t ___u64_0_0;
	// System.UInt64 UnityEngine.Hash128::u64_1
	uint64_t ___u64_1_1;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t21EB37F7C74C04A9F8DE2EB74773A0D5524A1A0F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_tFFE4CE163BD2DCEAA09662C2BCC33B3C37AB0D22 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_tFFE4CE163BD2DCEAA09662C2BCC33B3C37AB0D22__padding[256];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct __StaticArrayInitTypeSizeU3D3_t2857C07F0A23FB025DA0D81FCD2BE07B4ADCC026 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_t2857C07F0A23FB025DA0D81FCD2BE07B4ADCC026__padding[3];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tF5E240ACF4B30B5A5F8C77E9E49CC2F8559D76D9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tF5E240ACF4B30B5A5F8C77E9E49CC2F8559D76D9__padding[32];
	};
};

// Unity.Burst.BurstCompiler/StaticTypeReinitAttribute
struct StaticTypeReinitAttribute_tEB18A64CD3B786EA0443D6EC81EC1E70F7AAA3F1  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type Unity.Burst.BurstCompiler/StaticTypeReinitAttribute::reinitType
	Type_t* ___reinitType_0;
};

// Unity.Burst.BurstRuntime/PreserveAttribute
struct PreserveAttribute_tA1799B67558808CC16DE11D04CC1D42AAA569133  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Unity.Burst.BurstString/FormatOptions
struct FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 
{
	// Unity.Burst.BurstString/NumberFormatKind Unity.Burst.BurstString/FormatOptions::Kind
	uint8_t ___Kind_0;
	// System.SByte Unity.Burst.BurstString/FormatOptions::AlignAndSize
	int8_t ___AlignAndSize_1;
	// System.Byte Unity.Burst.BurstString/FormatOptions::Specifier
	uint8_t ___Specifier_2;
	// System.Boolean Unity.Burst.BurstString/FormatOptions::Lowercase
	bool ___Lowercase_3;
};
// Native definition for P/Invoke marshalling of Unity.Burst.BurstString/FormatOptions
struct FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshaled_pinvoke
{
	uint8_t ___Kind_0;
	int8_t ___AlignAndSize_1;
	uint8_t ___Specifier_2;
	int32_t ___Lowercase_3;
};
// Native definition for COM marshalling of Unity.Burst.BurstString/FormatOptions
struct FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshaled_com
{
	uint8_t ___Kind_0;
	int8_t ___AlignAndSize_1;
	uint8_t ___Specifier_2;
	int32_t ___Lowercase_3;
};

// Unity.Burst.BurstString/NumberBuffer
struct NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4 
{
	// System.Byte* Unity.Burst.BurstString/NumberBuffer::_buffer
	uint8_t* ____buffer_0;
	// Unity.Burst.BurstString/NumberBufferKind Unity.Burst.BurstString/NumberBuffer::Kind
	int32_t ___Kind_1;
	// System.Int32 Unity.Burst.BurstString/NumberBuffer::DigitsCount
	int32_t ___DigitsCount_2;
	// System.Int32 Unity.Burst.BurstString/NumberBuffer::Scale
	int32_t ___Scale_3;
	// System.Boolean Unity.Burst.BurstString/NumberBuffer::IsNegative
	bool ___IsNegative_4;
};
// Native definition for P/Invoke marshalling of Unity.Burst.BurstString/NumberBuffer
struct NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshaled_pinvoke
{
	uint8_t* ____buffer_0;
	int32_t ___Kind_1;
	int32_t ___DigitsCount_2;
	int32_t ___Scale_3;
	int32_t ___IsNegative_4;
};
// Native definition for COM marshalling of Unity.Burst.BurstString/NumberBuffer
struct NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshaled_com
{
	uint8_t* ____buffer_0;
	int32_t ___Kind_1;
	int32_t ___DigitsCount_2;
	int32_t ___Scale_3;
	int32_t ___IsNegative_4;
};

// Unity.Burst.BurstString/PreserveAttribute
struct PreserveAttribute_t54BBA699FC0C1DD99BED77D21CADC33A352E1999  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Unity.Burst.BurstString/tFloatUnion32
struct tFloatUnion32_t1140001CA96F869F598FBC16C082BC2BA85AB2CA 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.BurstString/tFloatUnion32::m_floatingPoint
			float ___m_floatingPoint_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___m_floatingPoint_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.BurstString/tFloatUnion32::m_integer
			uint32_t ___m_integer_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___m_integer_1_forAlignmentOnly;
		};
	};
};

// Unity.Burst.BurstString/tFloatUnion64
struct tFloatUnion64_t737111FBE1FD2D4509E72C45FE6389106B60B2FC 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.BurstString/tFloatUnion64::m_floatingPoint
			double ___m_floatingPoint_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___m_floatingPoint_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.BurstString/tFloatUnion64::m_integer
			uint64_t ___m_integer_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___m_integer_1_forAlignmentOnly;
		};
	};
};

// Unity.Burst.SharedStatic/PreserveAttribute
struct PreserveAttribute_tDEA15EF9DCAB8AC4428ED72A2A1377384FE7C27B  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Unity.Burst.BurstString/tBigInt/<m_blocks>e__FixedBuffer
struct U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C 
{
	union
	{
		struct
		{
			// System.UInt32 Unity.Burst.BurstString/tBigInt/<m_blocks>e__FixedBuffer::FixedElementField
			uint32_t ___FixedElementField_0;
		};
		uint8_t U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C__padding[140];
	};
};

// Unity.Burst.BurstCompileAttribute
struct BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// Unity.Burst.FloatMode Unity.Burst.BurstCompileAttribute::<FloatMode>k__BackingField
	int32_t ___U3CFloatModeU3Ek__BackingField_0;
	// Unity.Burst.FloatPrecision Unity.Burst.BurstCompileAttribute::<FloatPrecision>k__BackingField
	int32_t ___U3CFloatPrecisionU3Ek__BackingField_1;
	// System.Nullable`1<System.Boolean> Unity.Burst.BurstCompileAttribute::_compileSynchronously
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____compileSynchronously_2;
	// System.String[] Unity.Burst.BurstCompileAttribute::<Options>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3COptionsU3Ek__BackingField_3;
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeMethodHandle
struct RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 
{
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.Burst.BurstString/tBigInt
struct tBigInt_t6A436AD3913A2950571338A5018B48B299987358 
{
	// System.Int32 Unity.Burst.BurstString/tBigInt::m_length
	int32_t ___m_length_0;
	// Unity.Burst.BurstString/tBigInt/<m_blocks>e__FixedBuffer Unity.Burst.BurstString/tBigInt::m_blocks
	U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C ___m_blocks_1;
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

// System.Func`2<System.Attribute,System.Boolean>
struct Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA  : public MulticastDelegate_t
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

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate
struct IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t2CADAF0D55AC9D0785A6F7B80D4772CF1220C48F_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::07DB995E8ED2CFB0AB71EBA69F3A3EC07D5C6AC10C0C64F33E94ED2949B348AA
	__StaticArrayInitTypeSizeU3D256_tFFE4CE163BD2DCEAA09662C2BCC33B3C37AB0D22 ___07DB995E8ED2CFB0AB71EBA69F3A3EC07D5C6AC10C0C64F33E94ED2949B348AA_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::C69994AC61B52FBCEA582D6CCCD595C12E00BDB18F0C6F593FB6B393CAEDB08C
	__StaticArrayInitTypeSizeU3D32_tF5E240ACF4B30B5A5F8C77E9E49CC2F8559D76D9 ___C69994AC61B52FBCEA582D6CCCD595C12E00BDB18F0C6F593FB6B393CAEDB08C_1;
	// System.Int64 <PrivateImplementationDetails>::D0067CAD9A63E0813759A2BB841051CA73570C0DA2E08E840A8EB45DB6A7A010
	int64_t ___D0067CAD9A63E0813759A2BB841051CA73570C0DA2E08E840A8EB45DB6A7A010_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::D5B592C05DC25B5032553F1B27F4139BE95E881F73DB33B02B05AB20C3F9981E
	__StaticArrayInitTypeSizeU3D3_t2857C07F0A23FB025DA0D81FCD2BE07B4ADCC026 ___D5B592C05DC25B5032553F1B27F4139BE95E881F73DB33B02B05AB20C3F9981E_3;
};

// <PrivateImplementationDetails>

// System.Attribute

// System.Attribute

// Unity.Burst.BurstCompiler
struct BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_StaticFields
{
	// System.Boolean Unity.Burst.BurstCompiler::_IsEnabled
	bool ____IsEnabled_0;
	// Unity.Burst.BurstCompilerOptions Unity.Burst.BurstCompiler::Options
	BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* ___Options_1;
	// System.Action Unity.Burst.BurstCompiler::OnCompileILPPMethod2
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnCompileILPPMethod2_2;
	// System.Reflection.MethodInfo Unity.Burst.BurstCompiler::DummyMethodInfo
	MethodInfo_t* ___DummyMethodInfo_3;
};

// Unity.Burst.BurstCompiler

// Unity.Burst.BurstCompilerOptions
struct BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_StaticFields
{
	// System.Boolean Unity.Burst.BurstCompilerOptions::ForceDisableBurstCompilation
	bool ___ForceDisableBurstCompilation_0;
	// System.Boolean Unity.Burst.BurstCompilerOptions::ForceBurstCompilationSynchronously
	bool ___ForceBurstCompilationSynchronously_1;
	// System.Boolean Unity.Burst.BurstCompilerOptions::IsSecondaryUnityProcess
	bool ___IsSecondaryUnityProcess_2;
};

// Unity.Burst.BurstCompilerOptions

// Unity.Burst.BurstRuntime

// Unity.Burst.BurstRuntime

// Unity.Burst.BurstString
struct BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_StaticFields
{
	// System.Char[] Unity.Burst.BurstString::SplitByColon
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___SplitByColon_0;
	// System.Byte[] Unity.Burst.BurstString::logTable
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___logTable_1;
	// System.UInt32[] Unity.Burst.BurstString::g_PowerOf10_U32
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___g_PowerOf10_U32_2;
	// System.Byte[] Unity.Burst.BurstString::InfinityString
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___InfinityString_3;
	// System.Byte[] Unity.Burst.BurstString::NanString
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NanString_4;
};

// Unity.Burst.BurstString

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// Unity.Burst.SharedStatic

// Unity.Burst.SharedStatic

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Unity.Burst.BurstCompiler/<>c
struct U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_StaticFields
{
	// Unity.Burst.BurstCompiler/<>c Unity.Burst.BurstCompiler/<>c::<>9
	U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4* ___U3CU3E9_0;
	// System.Func`2<System.Attribute,System.Boolean> Unity.Burst.BurstCompiler/<>c::<>9__22_0
	Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA* ___U3CU3E9__22_0_1;
};

// Unity.Burst.BurstCompiler/<>c

// Unity.Burst.BurstCompiler/BurstCompilerHelper
struct BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_StaticFields
{
	// Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate Unity.Burst.BurstCompiler/BurstCompilerHelper::IsBurstEnabledImpl
	IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* ___IsBurstEnabledImpl_0;
	// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsBurstGenerated
	bool ___IsBurstGenerated_1;
};

// Unity.Burst.BurstCompiler/BurstCompilerHelper

// Unity.Burst.BurstCompiler/FakeDelegate

// Unity.Burst.BurstCompiler/FakeDelegate

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Boolean>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// Unity.Burst.BurstDiscardAttribute

// Unity.Burst.BurstDiscardAttribute

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Diagnostics.ConditionalAttribute

// System.Diagnostics.ConditionalAttribute

// System.Double

// System.Double

// Microsoft.CodeAnalysis.EmbeddedAttribute

// Microsoft.CodeAnalysis.EmbeddedAttribute

// UnityEngine.Hash128

// UnityEngine.Hash128

// System.Int16

// System.Int16

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

// System.Runtime.CompilerServices.IsReadOnlyAttribute

// System.Runtime.CompilerServices.IsReadOnlyAttribute

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.SByte

// System.SByte

// System.Single

// System.Single

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// Unity.Burst.BurstCompiler/StaticTypeReinitAttribute

// Unity.Burst.BurstCompiler/StaticTypeReinitAttribute

// Unity.Burst.BurstRuntime/PreserveAttribute

// Unity.Burst.BurstRuntime/PreserveAttribute

// Unity.Burst.BurstString/FormatOptions

// Unity.Burst.BurstString/FormatOptions

// Unity.Burst.BurstString/NumberBuffer

// Unity.Burst.BurstString/NumberBuffer

// Unity.Burst.BurstString/PreserveAttribute

// Unity.Burst.BurstString/PreserveAttribute

// Unity.Burst.BurstString/tFloatUnion32

// Unity.Burst.BurstString/tFloatUnion32

// Unity.Burst.BurstString/tFloatUnion64

// Unity.Burst.BurstString/tFloatUnion64

// Unity.Burst.SharedStatic/PreserveAttribute

// Unity.Burst.SharedStatic/PreserveAttribute

// Unity.Burst.BurstString/tBigInt/<m_blocks>e__FixedBuffer

// Unity.Burst.BurstString/tBigInt/<m_blocks>e__FixedBuffer

// Unity.Burst.BurstCompileAttribute

// Unity.Burst.BurstCompileAttribute

// System.Delegate

// System.Delegate

// System.Runtime.InteropServices.GCHandle

// System.Runtime.InteropServices.GCHandle

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// System.RuntimeMethodHandle

// System.RuntimeMethodHandle

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Unity.Burst.BurstString/tBigInt

// Unity.Burst.BurstString/tBigInt

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

// System.Func`2<System.Attribute,System.Boolean>

// System.Func`2<System.Attribute,System.Boolean>

// System.Action

// System.Action

// System.InvalidOperationException

// System.InvalidOperationException

// Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate

// Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate

// System.ArgumentNullException

// System.ArgumentNullException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
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


// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::All<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_All_TisRuntimeObject_m57CDB9DB99F9E77214B47367D213B06AC3ED97FF_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared (MemberInfo_t* ___0_element, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, bool, const RuntimeMethod*))Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared)(__this, ___0_value, method);
}
// System.Void Unity.Burst.BurstCompileAttribute::set_FloatMode(Unity.Burst.FloatMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatMode_mFC4C13A636FAF57510757D42EA1017C1A3FA6580_inline (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompileAttribute::set_FloatPrecision(Unity.Burst.FloatPrecision)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatPrecision_m62685CD0A4F258FB8779A37BC01DAABB83DFD465_inline (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.IntPtr System.RuntimeMethodHandle::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeMethodHandle_get_Value_m0EC577635F04EAB0185051CF6DF2EF0F76127B1F_inline (RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodBase_t* MethodBase_GetMethodFromHandle_m55E706B5156C0FDC1EA1DEF95B4FE36FE6A96EA9 (RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 ___0_handle, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompiler/FakeDelegate::.ctor(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FakeDelegate__ctor_mC2654CB88A21F64F4C25E02A0C89854E2F74484B (FakeDelegate_t659588AB379C77AF08088ED8B2E2A5ECFF38CE16* __this, MethodInfo_t* ___0_method, const RuntimeMethod* method) ;
// System.Void* Unity.Burst.BurstCompiler::Compile(System.Object,System.Reflection.MethodInfo,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompiler_Compile_m0038D8F2B6CB3915CB12F71E15B14C7355BFC8EF (RuntimeObject* ___0_delegateObj, MethodInfo_t* ___1_methodInfo, bool ___2_isFunctionPointer, bool ___3_isILPostProcessing, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
// System.IntPtr System.RuntimeTypeHandle::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Attribute> System.Reflection.CustomAttributeExtensions::GetCustomAttributes(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttributes_m2851556A37AAF9A808EFB2C603D11E48635FA785 (MemberInfo_t* ___0_element, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Attribute,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m9F3766EBEDA390AF720F7E3FC0B134B818B373C6 (Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean System.Linq.Enumerable::All<System.Attribute>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_All_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m222FE295E7B1277D5D6F5271C96D454E62E52F44 (RuntimeObject* ___0_source, Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA* ___1_predicate, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA*, const RuntimeMethod*))Enumerable_All_TisRuntimeObject_m57CDB9DB99F9E77214B47367D213B06AC3ED97FF_gshared)(___0_source, ___1_predicate, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstCompilerOptions::HasBurstCompileAttribute(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_HasBurstCompileAttribute_mC68CA53F4A77780A30D34E895B120188F31F7826 (MemberInfo_t* ___0_member, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstCompilerOptions::get_EnableBurstCompilation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_EnableBurstCompilation_mE10DF1EAAF0A56906D9784498FD48EAC1B012CD0_inline (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.LowLevel.BurstCompilerService::CompileAsyncDelegateMethod(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstCompilerService_CompileAsyncDelegateMethod_mDEA0EF934BF3674C1B47014A7518886D1DC2FE80 (RuntimeObject* ___0_delegateMethod, String_t* ___1_compilerOptions, const RuntimeMethod* method) ;
// System.Void* Unity.Burst.LowLevel.BurstCompilerService::GetAsyncCompiledAsyncDelegateMethod(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompilerService_GetAsyncCompiledAsyncDelegateMethod_mE6AD1EA0DD647A367102A1330BF4D695E1A796F9 (int32_t ___0_userID, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegate_mEFF0CF3BFDD35C4EFDE471D48182C149EE7B99E2 (Delegate_t* ___0_d, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompilerOptions::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions__ctor_m644EA41CAFD4F89CE36074DBD77BAC761C122285 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, bool ___0_isGlobal, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D (Type_t* __this, String_t* ___0_name, int32_t ___1_bindingAttr, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsBurstEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsBurstEnabled_m8F3C6D0129D14359B51860FBA51933C4FE92F131 (const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper::DiscardedMethod(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerHelper_DiscardedMethod_mE9B27FDCAB7B17C7B7496ADACFDBB72E3F155F6B (bool* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsBurstEnabledDelegate__ctor_m675CBAB9E803A7723AB3601DEB086E706E98A86E (IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsCompiledByBurst(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsCompiledByBurst_m0239AE7BCAF7076EE75C46D528F04AC34F3761DD (Delegate_t* ___0_del, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompiler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEC9179CC84E1FA4BB4AB4B39A87C134F481976C9 (U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstCompilation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstCompilation_mEDD4E93926B3E03A8E38CA9D483D4E4FD649D849 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstSafetyChecks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstSafetyChecks_m2AB857BC80AE1546031305C47F88ADB147A8BB83 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstCompilerOptions::get_IsGlobal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_IsGlobal_m8500610C2E650CFE58411EAD12DEE4F5F49C30B4_inline (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) ;
// System.Void Unity.Jobs.LowLevel.Unsafe.JobsUtility::set_JobCompilerEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobsUtility_set_JobCompilerEnabled_m14CB399441AB02D65BE11D74E9CC3E313420D72B (bool ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompilerOptions::OnOptionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_OnOptionsChanged_m20C25705A1D7B2A9C6265D3D5FE2A10A42AAABB7 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompilerOptions::MaybeTriggerRecompilation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_MaybeTriggerRecompilation_mBE68BE4083665B2DE194184223A6BF14CA7F3821 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MemberInfo::op_Equality(System.Reflection.MemberInfo,System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberInfo_op_Equality_m4B4F1AF29C9361D125F6D7FAB3D227ED3FECE685 (MemberInfo_t* ___0_left, MemberInfo_t* ___1_right, const RuntimeMethod* method) ;
// Unity.Burst.BurstCompileAttribute Unity.Burst.BurstCompilerOptions::GetBurstCompileAttribute(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* BurstCompilerOptions_GetBurstCompileAttribute_m9383E7E419C41B6BD078452FC1E2EF94A9AD2972 (MemberInfo_t* ___0_memberInfo, const RuntimeMethod* method) ;
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<Unity.Burst.BurstCompileAttribute>(System.Reflection.MemberInfo)
inline BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D_mAD047DA5EEB378D0343B0C8D2460F32490F9FCBB (MemberInfo_t* ___0_element, const RuntimeMethod* method)
{
	return ((  BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* (*) (MemberInfo_t*, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared)(___0_element, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Unity.Burst.BurstCompileAttribute::.ctor(Unity.Burst.FloatPrecision,Unity.Burst.FloatMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute__ctor_mBA3EAC7C435927F67F10F2D185F5CBE8F88DC3C6 (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, int32_t ___0_floatPrecision, int32_t ___1_floatMode, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompileAttribute::set_CompileSynchronously(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_CompileSynchronously_mED8B25B60ABC1EA5327DE691DCE129C9BD34BD58 (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, bool ___0_value, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void Unity.Burst.BurstCompileAttribute::set_Options(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_Options_mEC956014E83B4671F431159FE7D1DDD6BE5BC91E_inline (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_value, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstCompilerOptions::TryGetAttribute(System.Reflection.MemberInfo,Unity.Burst.BurstCompileAttribute&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_TryGetAttribute_m4EE3F62FAF2A482C444060E1CCB480711CC377F8 (MemberInfo_t* ___0_member, BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D** ___1_attribute, const RuntimeMethod* method) ;
// System.Action Unity.Burst.BurstCompilerOptions::get_OptionsChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* BurstCompilerOptions_get_OptionsChanged_m073BEAA6F0BA3EA5F42853CE2BB33681D6274C69_inline (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) ;
// System.String[] System.Environment::GetCommandLineArgs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Environment_GetCommandLineArgs_mD29CFA1CD3C84F9BD91152E70302E908114A831D (const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstCompilerOptions::CheckIsSecondaryUnityProcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_CheckIsSecondaryUnityProcess_mAA7A85682C937E5FF55B6B9ADCF0F1789F889E67 (const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstDiscardAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstDiscardAttribute__ctor_m0AC3131F7C5B377DCA604CD7BB8AC4AA4E161033 (BurstDiscardAttribute_t860FCEA3A7BADFD735A65A36C99B894EB2AAB388* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.ConditionalAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalAttribute__ctor_m948BC90599397308C76C433D98236C3BD81BF27F (ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0* __this, String_t* ___0_conditionString, const RuntimeMethod* method) ;
// System.Void Unity.Burst.LowLevel.BurstCompilerService::Log(System.Void*,Unity.Burst.LowLevel.BurstCompilerService/BurstLogType,System.Byte*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerService_Log_m4224BFA55310174B3BD9E0A2F15F3CF85757C253 (void* ___0_userData, int32_t ___1_logType, uint8_t* ___2_message, uint8_t* ___3_filename, int32_t ___4_lineNumber, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstString::AlignLeft(System.Byte*,System.Int32&,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstString_AlignLeft_mE09478055A126F1675FF9C15B6572186785585D0 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, int32_t ___3_align, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstString::AlignRight(System.Byte*,System.Int32&,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstString_AlignRight_m42725CF76779C09A0664D895DA590CEB4E1A8A37 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, int32_t ___3_align, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::ConvertFloatToString(System.Byte*,System.Int32&,System.Int32,System.Single,Unity.Burst.BurstString/FormatOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_ConvertFloatToString_m31A31291376EE1C7AA2DFA26573312B25E0DDCDA (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, float ___3_value, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 ___4_formatOptions, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::ConvertDoubleToString(System.Byte*,System.Int32&,System.Int32,System.Double,Unity.Burst.BurstString/FormatOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_ConvertDoubleToString_m5B4644F134166CA236077075A11108590892EDD0 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, double ___3_value, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 ___4_formatOptions, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::Format(System.Byte*,System.Int32&,System.Int32,System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_m206A288B53D79DF5ACDD39B3F3A9A79AC1CF3844 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, uint64_t ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::ConvertUnsignedIntegerToString(System.Byte*,System.Int32&,System.Int32,System.UInt64,Unity.Burst.BurstString/FormatOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_ConvertUnsignedIntegerToString_mE3D0034223E80A9185BE378CE7E0833972B1CA33 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, uint64_t ___3_value, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 ___4_options, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::ConvertIntegerToString(System.Byte*,System.Int32&,System.Int32,System.Int64,Unity.Burst.BurstString/FormatOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_ConvertIntegerToString_mA7D50BDF32DDABA6FC2C6CB1E5FF995C80A1C7F8 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, int64_t ___3_value, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 ___4_options, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.BurstString/FormatOptions::GetBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormatOptions_GetBase_m0466B18B4E020F258E2402BE194FB8D670B2C789 (FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstString/FormatOptions::get_Uppercase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FormatOptions_get_Uppercase_mE85E979D733EB67187AC1BCEB045508A0EF005C3 (FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84* __this, const RuntimeMethod* method) ;
// System.Byte Unity.Burst.BurstString::ValueToIntegerChar(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BurstString_ValueToIntegerChar_mC277F5B4A56CD3A028AB49004C97B878D2AE1313 (int32_t ___0_value, bool ___1_uppercase, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString/NumberBuffer::.ctor(Unity.Burst.BurstString/NumberBufferKind,System.Byte*,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberBuffer__ctor_m1A0D288DFB6432947BB55759502F97BA25348141 (NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* __this, int32_t ___0_kind, uint8_t* ___1_buffer, int32_t ___2_digitsCount, int32_t ___3_scale, bool ___4_isNegative, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::FormatNumber(System.Byte*,System.Int32&,System.Int32,Unity.Burst.BurstString/NumberBuffer&,System.Int32,Unity.Burst.BurstString/FormatOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_FormatNumber_m84AA91726082A3F72562B6B579F3D030D6D3C673 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* ___3_number, int32_t ___4_nMaxDigits, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 ___5_options, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::FormatDecimalOrHexadecimal(System.Byte*,System.Int32&,System.Int32,Unity.Burst.BurstString/NumberBuffer&,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_FormatDecimalOrHexadecimal_mA06BC7EC5DFAC150C462EBDD98CC067917E468AF (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* ___3_number, int32_t ___4_zeroPadding, bool ___5_outputPositiveSign, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::RoundNumber(Unity.Burst.BurstString/NumberBuffer&,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_RoundNumber_m524D9772E74FA38A0C43453F17AB2C7BAAB004E4 (NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* ___0_number, int32_t ___1_pos, bool ___2_isCorrectlyRounded, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.BurstString::GetLengthForFormatGeneral(Unity.Burst.BurstString/NumberBuffer&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstString_GetLengthForFormatGeneral_m8C803B634ACAA22001B49BEFBB5AB9CE7BD69766 (NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* ___0_number, int32_t ___1_nMaxDigits, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::FormatGeneral(System.Byte*,System.Int32&,System.Int32,Unity.Burst.BurstString/NumberBuffer&,System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_FormatGeneral_m6BD2A28E369BBBF4444ED8D8A71EA6641A7DBCD1 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* ___3_number, int32_t ___4_nMaxDigits, uint8_t ___5_expChar, const RuntimeMethod* method) ;
// System.Byte* Unity.Burst.BurstString/NumberBuffer::GetDigitsPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* NumberBuffer_GetDigitsPointer_m877C617CEE264BE12DE38D7289D741ED39B99846_inline (NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.BurstString::GetLengthIntegerToString(System.Int64,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstString_GetLengthIntegerToString_m7C848D6F1F8062C53DDBCF15BC3C48492B1D6772 (int64_t ___0_value, int32_t ___1_basis, int32_t ___2_zeroPadding, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString/FormatOptions::.ctor(Unity.Burst.BurstString/NumberFormatKind,System.SByte,System.Byte,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatOptions__ctor_mCF1FCAD2F6EE383DC6A602CA1F82BD16852CC055 (FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84* __this, uint8_t ___0_kind, int8_t ___1_alignAndSize, uint8_t ___2_specifier, bool ___3_lowercase, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstString::ShouldRoundUp(System.Byte*,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstString_ShouldRoundUp_m409E5BBC77EF196F3CCAC9B2AFF01225E2119464 (uint8_t* ___0_dig, int32_t ___1_i, bool ___2_isCorrectlyRounded, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::BigInt_Add_internal(Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Add_internal_m6CF758D9927E3261E88334B90E80ECF6C20E6DEF (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___1_pLarge, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___2_pSmall, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::BigInt_Multiply_internal(Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply_internal_mEA2BBAA8C72283721474B5EF6F7BEBB426294CB3 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___1_pLarge, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___2_pSmall, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString/tBigInt::SetU32(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tBigInt_SetU32_m9EF2E1018CDA89AED4F0FA625E91878BF1772233 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* __this, uint32_t ___0_val, const RuntimeMethod* method) ;
// Unity.Burst.BurstString/tBigInt Unity.Burst.BurstString::g_PowerOf10_Big(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tBigInt_t6A436AD3913A2950571338A5018B48B299987358 BurstString_g_PowerOf10_Big_mD308778BE6E3F6102AA2FEB7F8092DD82B7F6D43 (int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::BigInt_Multiply(Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply_m90F6D119D0DD397B1B0FB3C76EEE1126C6DFE8A9 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___1_lhs, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___2_rhs, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::BigInt_Multiply(Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply_m80C42811355207D0CD9E4E14BB916F0242D44FDF (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___1_lhs, uint32_t ___2_rhs, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.BurstString::BigInt_Compare(Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstString_BigInt_Compare_m6815CCBF0899BF17AC14F259C329C715EFB6EBA1 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_lhs, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___1_rhs, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString/tBigInt::SetU64(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tBigInt_SetU64_m72EE55FD3169036C517DAF7392CE0A133DD50C14 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* __this, uint64_t ___0_val, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::BigInt_ShiftLeft(Unity.Burst.BurstString/tBigInt&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_ShiftLeft_m0B99AC393DDF011FAC8F453039F4240C8F2BB583 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, uint32_t ___1_shift, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::BigInt_Pow2(Unity.Burst.BurstString/tBigInt&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Pow2_m7D6C74FD7591BA82DFAD8CFAEB2DC0727427587A (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, uint32_t ___1_exponent, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::BigInt_MultiplyPow10(Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_MultiplyPow10_mA62F7C4D0BC220B200E0AF031CEA586C59E1EEBD (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___1_input, uint32_t ___2_exponent, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::BigInt_Pow10(Unity.Burst.BurstString/tBigInt&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Pow10_mE53CE39D44AABA6924D6544F12E564EC2DCFE642 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, uint32_t ___1_exponent, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::BigInt_Multiply2(Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply2_m2C3E74572DBF8B4600AC3AB75B2CF00A6498105C (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___1_input, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::BigInt_Multiply10(Unity.Burst.BurstString/tBigInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply10_m82AC5B11EB311D603B1A70235E95CC83D39E701E (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.BurstString/tBigInt::GetLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tBigInt_GetLength_m223AD69D6DB118C879FC58EF544D50C4A2E978E7_inline (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* __this, const RuntimeMethod* method) ;
// System.UInt32 Unity.Burst.BurstString/tBigInt::GetBlock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t tBigInt_GetBlock_m6E4E377A7A4591B136D20D711B06CB1D145FC9D2 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* __this, int32_t ___0_idx, const RuntimeMethod* method) ;
// System.UInt32 Unity.Burst.BurstString::LogBase2(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BurstString_LogBase2_m034E17C8FE477EA2D6D3DDBCDAE5155EE0188F54 (uint32_t ___0_val, const RuntimeMethod* method) ;
// System.UInt32 Unity.Burst.BurstString::BigInt_DivideWithRemainder_MaxQuotient9(Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BurstString_BigInt_DivideWithRemainder_MaxQuotient9_m88E9DEA846064D23C9C090B9626B66DB52A844E9 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pDividend, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___1_divisor, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::BigInt_Add(Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Add_m4E1C5A27B4D6168D2967BF79174DA2A04A07669E (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___1_lhs, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___2_rhs, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstString/tBigInt::IsZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tBigInt_IsZero_mE0C94B9A59A09BFCE51C418F4C8C05EC253D68C8 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* __this, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::BigInt_Multiply2(Unity.Burst.BurstString/tBigInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply2_m45D9B179615B4A6BAD47C2EAE92AEDE7A2406252 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, const RuntimeMethod* method) ;
// System.UInt32 Unity.Burst.BurstString/tFloatUnion32::GetExponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t tFloatUnion32_GetExponent_m83ED8E199331F83BC7AE3E48DCCCA8E6212CA6A6 (tFloatUnion32_t1140001CA96F869F598FBC16C082BC2BA85AB2CA* __this, const RuntimeMethod* method) ;
// System.UInt32 Unity.Burst.BurstString/tFloatUnion32::GetMantissa()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t tFloatUnion32_GetMantissa_mAB906EE8DD2E27CFB6D98FF99CC2D764FF44F0EF (tFloatUnion32_t1140001CA96F869F598FBC16C082BC2BA85AB2CA* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstString/tFloatUnion32::IsNegative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tFloatUnion32_IsNegative_m75BC8B54D468278FCBA4535D6118346B3C8F9388 (tFloatUnion32_t1140001CA96F869F598FBC16C082BC2BA85AB2CA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstString::FormatInfinityNaN(System.Byte*,System.Int32&,System.Int32,System.UInt64,System.Boolean,Unity.Burst.BurstString/FormatOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_FormatInfinityNaN_mD90B190A044F0940A2F7681A79124103BD177979 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, uint64_t ___3_mantissa, bool ___4_isNegative, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 ___5_formatOptions, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.UInt32 Unity.Burst.BurstString::Dragon4(System.UInt64,System.Int32,System.UInt32,System.Boolean,Unity.Burst.BurstString/CutoffMode,System.UInt32,System.Byte*,System.UInt32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BurstString_Dragon4_mCA09B197DEF9912F76B915FDC179A5EF9A1560EE (uint64_t ___0_mantissa, int32_t ___1_exponent, uint32_t ___2_mantissaHighBitIdx, bool ___3_hasUnequalMargins, int32_t ___4_cutoffMode, uint32_t ___5_cutoffNumber, uint8_t* ___6_pOutBuffer, uint32_t ___7_bufferSize, int32_t* ___8_pOutExponent, const RuntimeMethod* method) ;
// System.UInt32 Unity.Burst.BurstString/tFloatUnion64::GetExponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t tFloatUnion64_GetExponent_m85B0BB29969C376B7FF866A1793C1997645D1D60 (tFloatUnion64_t737111FBE1FD2D4509E72C45FE6389106B60B2FC* __this, const RuntimeMethod* method) ;
// System.UInt64 Unity.Burst.BurstString/tFloatUnion64::GetMantissa()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t tFloatUnion64_GetMantissa_m6EAD50CE3D1BFDABD12A308F2FF83F586F61328C (tFloatUnion64_t737111FBE1FD2D4509E72C45FE6389106B60B2FC* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstString/tFloatUnion64::IsNegative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tFloatUnion64_IsNegative_m5427680D1918AB7410EDC266B0524E42313F171B (tFloatUnion64_t737111FBE1FD2D4509E72C45FE6389106B60B2FC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.String Unity.Burst.BurstString/FormatOptions::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormatOptions_ToString_m96B89E42F1553D5D3B78D7238443ACC628EFB488 (FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Hash128::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash128__ctor_m0B61E717B3FF7D7BBD8FF12C8C8327C18A2AAAF3 (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* __this, uint64_t ___0_u64_0, uint64_t ___1_u64_1, const RuntimeMethod* method) ;
// System.Void* Unity.Burst.LowLevel.BurstCompilerService::GetOrCreateSharedMemory(UnityEngine.Hash128&,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompilerService_GetOrCreateSharedMemory_m1293EB3119CBEE41DBCC0E3B2235601BD927BFE6 (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* ___0_key, uint32_t ___1_size_of, uint32_t ___2_alignment, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m1987D9EDD695EB253C5DAAE3909C9FCD69E7681C (EmbeddedAttribute_tB15AE7271F787DA6A515EA05BEC5B218E147E15A* __this, const RuntimeMethod* method) 
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mD2F5692D77429D270289E727F57B341383B57A27 (IsReadOnlyAttribute_t21EB37F7C74C04A9F8DE2EB74773A0D5524A1A0F* __this, const RuntimeMethod* method) 
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
// System.Void Unity.Burst.BurstCompileAttribute::set_FloatMode(Unity.Burst.FloatMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatMode_mFC4C13A636FAF57510757D42EA1017C1A3FA6580 (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public FloatMode FloatMode { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CFloatModeU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::set_FloatPrecision(Unity.Burst.FloatPrecision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatPrecision_m62685CD0A4F258FB8779A37BC01DAABB83DFD465 (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public FloatPrecision FloatPrecision { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CFloatPrecisionU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::set_CompileSynchronously(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_CompileSynchronously_mED8B25B60ABC1EA5327DE691DCE129C9BD34BD58 (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => _compileSynchronously = value;
		bool L_0 = ___0_value;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->____compileSynchronously_2 = L_1;
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::set_Options(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_Options_mEC956014E83B4671F431159FE7D1DDD6BE5BC91E (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string[] Options { get; set; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_value;
		__this->___U3COptionsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute__ctor_mFCB7FEAFCE1A2CE6A5268A4EA062E33E5472ABBE (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, const RuntimeMethod* method) 
{
	{
		// public BurstCompileAttribute()
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::.ctor(Unity.Burst.FloatPrecision,Unity.Burst.FloatMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute__ctor_mBA3EAC7C435927F67F10F2D185F5CBE8F88DC3C6 (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, int32_t ___0_floatPrecision, int32_t ___1_floatMode, const RuntimeMethod* method) 
{
	{
		// public BurstCompileAttribute(FloatPrecision floatPrecision, FloatMode floatMode)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// FloatMode = floatMode;
		int32_t L_0 = ___1_floatMode;
		BurstCompileAttribute_set_FloatMode_mFC4C13A636FAF57510757D42EA1017C1A3FA6580_inline(__this, L_0, NULL);
		// FloatPrecision = floatPrecision;
		int32_t L_1 = ___0_floatPrecision;
		BurstCompileAttribute_set_FloatPrecision_m62685CD0A4F258FB8779A37BC01DAABB83DFD465_inline(__this, L_1, NULL);
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
// System.Boolean Unity.Burst.BurstCompiler::get_IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsEnabled => _IsEnabled && BurstCompilerHelper.IsBurstGenerated;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0 = ((BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var))->____IsEnabled_0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var);
		bool L_1 = ((BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var))->___IsBurstGenerated_1;
		return L_1;
	}

IL_000d:
	{
		return (bool)0;
	}
}
// System.IntPtr Unity.Burst.BurstCompiler::CompileILPPMethod2(System.RuntimeMethodHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t BurstCompiler_CompileILPPMethod2_m545A8FC57B460871C1715F32DD601F2C1CA9C7FA (RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 ___0_burstMethodHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FakeDelegate_t659588AB379C77AF08088ED8B2E2A5ECFF38CE16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		// if (burstMethodHandle.Value == IntPtr.Zero)
		intptr_t L_0;
		L_0 = RuntimeMethodHandle_get_Value_m0EC577635F04EAB0185051CF6DF2EF0F76127B1F_inline((&___0_burstMethodHandle), NULL);
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(burstMethodHandle));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral013FC6682F27B79F88F9FD6E6D77A97E36BC828C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_CompileILPPMethod2_m545A8FC57B460871C1715F32DD601F2C1CA9C7FA_RuntimeMethod_var)));
	}

IL_001e:
	{
		// OnCompileILPPMethod2?.Invoke();
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ((BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var))->___OnCompileILPPMethod2_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = L_4;
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_0029;
		}
	}
	{
		goto IL_002e;
	}

IL_0029:
	{
		NullCheck(G_B4_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B4_0, NULL);
	}

IL_002e:
	{
		// var burstMethod = (MethodInfo)MethodBase.GetMethodFromHandle(burstMethodHandle);
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_6 = ___0_burstMethodHandle;
		MethodBase_t* L_7;
		L_7 = MethodBase_GetMethodFromHandle_m55E706B5156C0FDC1EA1DEF95B4FE36FE6A96EA9(L_6, NULL);
		V_0 = ((MethodInfo_t*)CastclassClass((RuntimeObject*)L_7, MethodInfo_t_il2cpp_TypeInfo_var));
		// return (IntPtr)Compile(new FakeDelegate(burstMethod), burstMethod, isFunctionPointer: true, isILPostProcessing: true);
		MethodInfo_t* L_8 = V_0;
		FakeDelegate_t659588AB379C77AF08088ED8B2E2A5ECFF38CE16* L_9 = (FakeDelegate_t659588AB379C77AF08088ED8B2E2A5ECFF38CE16*)il2cpp_codegen_object_new(FakeDelegate_t659588AB379C77AF08088ED8B2E2A5ECFF38CE16_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		FakeDelegate__ctor_mC2654CB88A21F64F4C25E02A0C89854E2F74484B(L_9, L_8, NULL);
		MethodInfo_t* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_11;
		L_11 = BurstCompiler_Compile_m0038D8F2B6CB3915CB12F71E15B14C7355BFC8EF(L_9, L_10, (bool)1, (bool)1, NULL);
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_11, NULL);
		return L_12;
	}
}
// System.Void* Unity.Burst.BurstCompiler::GetILPPMethodFunctionPointer2(System.IntPtr,System.RuntimeMethodHandle,System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompiler_GetILPPMethodFunctionPointer2_m8C671F61D031A10FC46911AC94B57C1E58D1F567 (intptr_t ___0_ilppMethod, RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 ___1_managedMethodHandle, RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___2_delegateTypeHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ilppMethod == IntPtr.Zero)
		intptr_t L_0 = ___0_ilppMethod;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// throw new ArgumentNullException(nameof(ilppMethod));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral419870EEDCB789FA7F30F9A090D5126C86B866CD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_GetILPPMethodFunctionPointer2_m8C671F61D031A10FC46911AC94B57C1E58D1F567_RuntimeMethod_var)));
	}

IL_0018:
	{
		// if (managedMethodHandle.Value == IntPtr.Zero)
		intptr_t L_4;
		L_4 = RuntimeMethodHandle_get_Value_m0EC577635F04EAB0185051CF6DF2EF0F76127B1F_inline((&___1_managedMethodHandle), NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// throw new ArgumentNullException(nameof(managedMethodHandle));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral71E0656B4D7E6F065BE6785258C0E7EAAC0EA6FF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_GetILPPMethodFunctionPointer2_m8C671F61D031A10FC46911AC94B57C1E58D1F567_RuntimeMethod_var)));
	}

IL_0036:
	{
		// if (delegateTypeHandle.Value == IntPtr.Zero)
		intptr_t L_8;
		L_8 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&___2_delegateTypeHandle), NULL);
		intptr_t L_9 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_10;
		L_10 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		// throw new ArgumentNullException(nameof(delegateTypeHandle));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_11 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF64621FA894BC5FE3BE4B3D3E62813C72B063F9F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_GetILPPMethodFunctionPointer2_m8C671F61D031A10FC46911AC94B57C1E58D1F567_RuntimeMethod_var)));
	}

IL_0054:
	{
		// return ilppMethod.ToPointer();
		void* L_12;
		L_12 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___0_ilppMethod), NULL);
		return L_12;
	}
}
// System.Void* Unity.Burst.BurstCompiler::Compile(System.Object,System.Reflection.MethodInfo,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompiler_Compile_m0038D8F2B6CB3915CB12F71E15B14C7355BFC8EF (RuntimeObject* ___0_delegateObj, MethodInfo_t* ___1_methodInfo, bool ___2_isFunctionPointer, bool ___3_isILPostProcessing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_All_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m222FE295E7B1277D5D6F5271C96D454E62E52F44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCompileU3Eb__22_0_m2326454433F78E8E68A7EB9191933F393BDB0401_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BCE0A6A775CEDDE2F72825B7D364029086B76D3);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	Delegate_t* V_1 = NULL;
	Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA* G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA* G_B11_0 = NULL;
	RuntimeObject* G_B11_1 = NULL;
	{
		// if (delegateObj == null) throw new ArgumentNullException(nameof(delegateObj));
		RuntimeObject* L_0 = ___0_delegateObj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (delegateObj == null) throw new ArgumentNullException(nameof(delegateObj));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AC6E2C9E3B0B89CE7829E6FE9748CF10C25C407)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_m0038D8F2B6CB3915CB12F71E15B14C7355BFC8EF_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (delegateObj.GetType().IsGenericType)
		RuntimeObject* L_2 = ___0_delegateObj;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(48 /* System.Boolean System.Type::get_IsGenericType() */, L_3);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// throw new InvalidOperationException($"The delegate type `{delegateObj.GetType()}` must be a non-generic type");
		RuntimeObject* L_5 = ___0_delegateObj;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_5, NULL);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB10577699DFF2E53EAEE7AF1A6306F8D8F38230)), L_6, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_m0038D8F2B6CB3915CB12F71E15B14C7355BFC8EF_RuntimeMethod_var)));
	}

IL_0031:
	{
		// if (!methodInfo.IsStatic)
		MethodInfo_t* L_9 = ___1_methodInfo;
		NullCheck(L_9);
		bool L_10;
		L_10 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_9, NULL);
		if (L_10)
		{
			goto IL_004a;
		}
	}
	{
		// throw new InvalidOperationException($"The method `{methodInfo}` must be static. Instance methods are not supported");
		MethodInfo_t* L_11 = ___1_methodInfo;
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral85F734AB4B70F85FBE3AD2752128D17420A8753B)), L_11, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_13 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_m0038D8F2B6CB3915CB12F71E15B14C7355BFC8EF_RuntimeMethod_var)));
	}

IL_004a:
	{
		// if (methodInfo.IsGenericMethod)
		MethodInfo_t* L_14 = ___1_methodInfo;
		NullCheck(L_14);
		bool L_15;
		L_15 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_14);
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// throw new InvalidOperationException($"The method `{methodInfo}` must be a non-generic method");
		MethodInfo_t* L_16 = ___1_methodInfo;
		String_t* L_17;
		L_17 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7AD6BA121E4A8420E000A0297BE2958650057EEB)), L_16, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_18 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_m0038D8F2B6CB3915CB12F71E15B14C7355BFC8EF_RuntimeMethod_var)));
	}

IL_0063:
	{
		// if (isFunctionPointer && !isILPostProcessing &&
		//     methodInfo.GetCustomAttributes().All(s => s.GetType().Name != "MonoPInvokeCallbackAttribute"))
		bool L_19 = ___2_isFunctionPointer;
		if (!L_19)
		{
			goto IL_00a5;
		}
	}
	{
		bool L_20 = ___3_isILPostProcessing;
		if (L_20)
		{
			goto IL_00a5;
		}
	}
	{
		MethodInfo_t* L_21 = ___1_methodInfo;
		RuntimeObject* L_22;
		L_22 = CustomAttributeExtensions_GetCustomAttributes_m2851556A37AAF9A808EFB2C603D11E48635FA785(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var);
		Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA* L_23 = ((U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var))->___U3CU3E9__22_0_1;
		Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA* L_24 = L_23;
		G_B11_0 = L_24;
		G_B11_1 = L_22;
		if (L_24)
		{
			G_B12_0 = L_24;
			G_B12_1 = L_22;
			goto IL_008e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var);
		U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4* L_25 = ((U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA* L_26 = (Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA*)il2cpp_codegen_object_new(Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Func_2__ctor_m9F3766EBEDA390AF720F7E3FC0B134B818B373C6(L_26, L_25, (intptr_t)((void*)U3CU3Ec_U3CCompileU3Eb__22_0_m2326454433F78E8E68A7EB9191933F393BDB0401_RuntimeMethod_var), NULL);
		Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA* L_27 = L_26;
		((U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var))->___U3CU3E9__22_0_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var))->___U3CU3E9__22_0_1), (void*)L_27);
		G_B12_0 = L_27;
		G_B12_1 = G_B11_1;
	}

IL_008e:
	{
		bool L_28;
		L_28 = Enumerable_All_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m222FE295E7B1277D5D6F5271C96D454E62E52F44(G_B12_1, G_B12_0, Enumerable_All_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m222FE295E7B1277D5D6F5271C96D454E62E52F44_RuntimeMethod_var);
		if (!L_28)
		{
			goto IL_00a5;
		}
	}
	{
		// UnityEngine.Debug.Log($"The method `{methodInfo}` must have `MonoPInvokeCallback` attribute to be compatible with IL2CPP!");
		MethodInfo_t* L_29 = ___1_methodInfo;
		String_t* L_30;
		L_30 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral4BCE0A6A775CEDDE2F72825B7D364029086B76D3, L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_30, NULL);
	}

IL_00a5:
	{
		// Delegate managedFallbackDelegateMethod = null;
		V_1 = (Delegate_t*)NULL;
		// if (!isILPostProcessing)
		bool L_31 = ___3_isILPostProcessing;
		if (L_31)
		{
			goto IL_00b1;
		}
	}
	{
		// managedFallbackDelegateMethod = delegateObj as Delegate;
		RuntimeObject* L_32 = ___0_delegateObj;
		V_1 = ((Delegate_t*)IsInstClass((RuntimeObject*)L_32, Delegate_t_il2cpp_TypeInfo_var));
	}

IL_00b1:
	{
		// if (BurstCompilerOptions.HasBurstCompileAttribute(methodInfo))
		MethodInfo_t* L_33 = ___1_methodInfo;
		il2cpp_codegen_runtime_class_init_inline(BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = BurstCompilerOptions_HasBurstCompileAttribute_mC68CA53F4A77780A30D34E895B120188F31F7826(L_33, NULL);
		if (!L_34)
		{
			goto IL_00fa;
		}
	}
	{
		// if (Options.EnableBurstCompilation && BurstCompilerHelper.IsBurstGenerated)
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* L_35 = ((BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var))->___Options_1;
		NullCheck(L_35);
		bool L_36;
		L_36 = BurstCompilerOptions_get_EnableBurstCompilation_mE10DF1EAAF0A56906D9784498FD48EAC1B012CD0_inline(L_35, NULL);
		if (!L_36)
		{
			goto IL_00df;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var);
		bool L_37 = ((BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var))->___IsBurstGenerated_1;
		if (!L_37)
		{
			goto IL_00df;
		}
	}
	{
		// var delegateMethodId = Unity.Burst.LowLevel.BurstCompilerService.CompileAsyncDelegateMethod(delegateObj, string.Empty);
		RuntimeObject* L_38 = ___0_delegateObj;
		String_t* L_39 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		int32_t L_40;
		L_40 = BurstCompilerService_CompileAsyncDelegateMethod_mDEA0EF934BF3674C1B47014A7518886D1DC2FE80(L_38, L_39, NULL);
		// function = Unity.Burst.LowLevel.BurstCompilerService.GetAsyncCompiledAsyncDelegateMethod(delegateMethodId);
		void* L_41;
		L_41 = BurstCompilerService_GetAsyncCompiledAsyncDelegateMethod_mE6AD1EA0DD647A367102A1330BF4D695E1A796F9(L_40, NULL);
		V_0 = L_41;
		goto IL_010b;
	}

IL_00df:
	{
		// if (isILPostProcessing)
		bool L_42 = ___3_isILPostProcessing;
		if (!L_42)
		{
			goto IL_00e5;
		}
	}
	{
		// return null;
		return (void*)(((uintptr_t)0));
	}

IL_00e5:
	{
		// GCHandle.Alloc(managedFallbackDelegateMethod);
		Delegate_t* L_43 = V_1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_44;
		L_44 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(L_43, NULL);
		// function = (void*)Marshal.GetFunctionPointerForDelegate(managedFallbackDelegateMethod);
		Delegate_t* L_45 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_46;
		L_46 = Marshal_GetFunctionPointerForDelegate_mEFF0CF3BFDD35C4EFDE471D48182C149EE7B99E2(L_45, NULL);
		void* L_47;
		L_47 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_46, NULL);
		V_0 = L_47;
		goto IL_010b;
	}

IL_00fa:
	{
		// throw new InvalidOperationException($"Burst cannot compile the function pointer `{methodInfo}` because the `[BurstCompile]` attribute is missing");
		MethodInfo_t* L_48 = ___1_methodInfo;
		String_t* L_49;
		L_49 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16764301FDE0B2444923BB6CE0B9B7F315E4DB64)), L_48, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_50 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_50);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_50, L_49, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_50, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_m0038D8F2B6CB3915CB12F71E15B14C7355BFC8EF_RuntimeMethod_var)));
	}

IL_010b:
	{
		// if (function == null)
		void* L_51 = V_0;
		if ((!(((uintptr_t)L_51) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0121;
		}
	}
	{
		// throw new InvalidOperationException($"Burst failed to compile the function pointer `{methodInfo}`");
		MethodInfo_t* L_52 = ___1_methodInfo;
		String_t* L_53;
		L_53 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17490A99BE5820911E7C397A415006E24720C376)), L_52, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_54 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_54);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_54, L_53, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_m0038D8F2B6CB3915CB12F71E15B14C7355BFC8EF_RuntimeMethod_var)));
	}

IL_0121:
	{
		// return function;
		void* L_55 = V_0;
		return L_55;
	}
}
// System.Void Unity.Burst.BurstCompiler::DummyMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompiler_DummyMethod_m44E6D413356022A0F6BA962A31026BA4EE5FE95F (const RuntimeMethod* method) 
{
	{
		// private static void DummyMethod() { }
		return;
	}
}
// System.Void Unity.Burst.BurstCompiler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompiler__cctor_mA29CF2918E31D89BB314B5CC1AF842BE93E9EE6B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral095255162964C376C50DCE630D972167CA5AE0D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly BurstCompilerOptions Options = new BurstCompilerOptions(true);
		BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* L_0 = (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9*)il2cpp_codegen_object_new(BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BurstCompilerOptions__ctor_m644EA41CAFD4F89CE36074DBD77BAC761C122285(L_0, (bool)1, NULL);
		((BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var))->___Options_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var))->___Options_1), (void*)L_0);
		// private static readonly MethodInfo DummyMethodInfo = typeof(BurstCompiler).GetMethod(nameof(DummyMethod), BindingFlags.Static | BindingFlags.NonPublic);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_2);
		MethodInfo_t* L_3;
		L_3 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D(L_2, _stringLiteral095255162964C376C50DCE630D972167CA5AE0D8, ((int32_t)40), NULL);
		((BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var))->___DummyMethodInfo_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var))->___DummyMethodInfo_3), (void*)L_3);
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
// System.Void Unity.Burst.BurstCompiler/StaticTypeReinitAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticTypeReinitAttribute__ctor_m8642643889129E11741654F66EE77046A2A7D1CB (StaticTypeReinitAttribute_tEB18A64CD3B786EA0443D6EC81EC1E70F7AAA3F1* __this, Type_t* ___0_toReinit, const RuntimeMethod* method) 
{
	{
		// public StaticTypeReinitAttribute(Type toReinit)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// reinitType = toReinit;
		Type_t* L_0 = ___0_toReinit;
		__this->___reinitType_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reinitType_0), (void*)L_0);
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
extern "C" int32_t CDECL ReversePInvokeWrapper_BurstCompilerHelper_IsBurstEnabled_m8F3C6D0129D14359B51860FBA51933C4FE92F131()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	returnValue = BurstCompilerHelper_IsBurstEnabled_m8F3C6D0129D14359B51860FBA51933C4FE92F131(NULL);

	return static_cast<int32_t>(returnValue);
}
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsBurstEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsBurstEnabled_m8F3C6D0129D14359B51860FBA51933C4FE92F131 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// bool result = true;
		V_0 = (bool)1;
		// DiscardedMethod(ref result);
		il2cpp_codegen_runtime_class_init_inline(BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var);
		BurstCompilerHelper_DiscardedMethod_mE9B27FDCAB7B17C7B7496ADACFDBB72E3F155F6B((&V_0), NULL);
		// return result;
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper::DiscardedMethod(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerHelper_DiscardedMethod_mE9B27FDCAB7B17C7B7496ADACFDBB72E3F155F6B (bool* ___0_value, const RuntimeMethod* method) 
{
	{
		// value = false;
		bool* L_0 = ___0_value;
		*((int8_t*)L_0) = (int8_t)0;
		// }
		return;
	}
}
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsCompiledByBurst(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsCompiledByBurst_m0239AE7BCAF7076EE75C46D528F04AC34F3761DD (Delegate_t* ___0_del, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var delegateMethodId = Unity.Burst.LowLevel.BurstCompilerService.CompileAsyncDelegateMethod(del, string.Empty);
		Delegate_t* L_0 = ___0_del;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		int32_t L_2;
		L_2 = BurstCompilerService_CompileAsyncDelegateMethod_mDEA0EF934BF3674C1B47014A7518886D1DC2FE80(L_0, L_1, NULL);
		// return Unity.Burst.LowLevel.BurstCompilerService.GetAsyncCompiledAsyncDelegateMethod(delegateMethodId) != (void*)0;
		void* L_3;
		L_3 = BurstCompilerService_GetAsyncCompiledAsyncDelegateMethod_mE6AD1EA0DD647A367102A1330BF4D695E1A796F9(L_2, NULL);
		return (bool)((((int32_t)((((intptr_t)L_3) == ((intptr_t)((intptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerHelper__cctor_m2B57C7C8A7B5F4CEE1E1DE05C5FC63C10AE37FD3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_IsBurstEnabled_m8F3C6D0129D14359B51860FBA51933C4FE92F131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly IsBurstEnabledDelegate IsBurstEnabledImpl = new IsBurstEnabledDelegate(IsBurstEnabled);
		IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* L_0 = (IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C*)il2cpp_codegen_object_new(IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		IsBurstEnabledDelegate__ctor_m675CBAB9E803A7723AB3601DEB086E706E98A86E(L_0, NULL, (intptr_t)((void*)BurstCompilerHelper_IsBurstEnabled_m8F3C6D0129D14359B51860FBA51933C4FE92F131_RuntimeMethod_var), NULL);
		((BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var))->___IsBurstEnabledImpl_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var))->___IsBurstEnabledImpl_0), (void*)L_0);
		// public static readonly bool IsBurstGenerated = IsCompiledByBurst(IsBurstEnabledImpl);
		IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* L_1 = ((BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var))->___IsBurstEnabledImpl_0;
		bool L_2;
		L_2 = BurstCompilerHelper_IsCompiledByBurst_m0239AE7BCAF7076EE75C46D528F04AC34F3761DD(L_1, NULL);
		((BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var))->___IsBurstGenerated_1 = L_2;
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
bool IsBurstEnabledDelegate_Invoke_m9FA44E7FDC323DE7DF1232200DED8C89A67D7F65_Multicast(IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* currentDelegate = reinterpret_cast<IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool IsBurstEnabledDelegate_Invoke_m9FA44E7FDC323DE7DF1232200DED8C89A67D7F65_OpenInst(IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* __this, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
bool IsBurstEnabledDelegate_Invoke_m9FA44E7FDC323DE7DF1232200DED8C89A67D7F65_OpenStatic(IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* __this, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
bool IsBurstEnabledDelegate_Invoke_m9FA44E7FDC323DE7DF1232200DED8C89A67D7F65_OpenStaticInvoker(IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< bool >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
bool IsBurstEnabledDelegate_Invoke_m9FA44E7FDC323DE7DF1232200DED8C89A67D7F65_ClosedStaticInvoker(IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C (IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* __this, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return static_cast<bool>(returnValue);
}
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsBurstEnabledDelegate__ctor_m675CBAB9E803A7723AB3601DEB086E706E98A86E (IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IsBurstEnabledDelegate_Invoke_m9FA44E7FDC323DE7DF1232200DED8C89A67D7F65_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&IsBurstEnabledDelegate_Invoke_m9FA44E7FDC323DE7DF1232200DED8C89A67D7F65_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IsBurstEnabledDelegate_Invoke_m9FA44E7FDC323DE7DF1232200DED8C89A67D7F65_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&IsBurstEnabledDelegate_Invoke_m9FA44E7FDC323DE7DF1232200DED8C89A67D7F65_Multicast;
}
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IsBurstEnabledDelegate_Invoke_m9FA44E7FDC323DE7DF1232200DED8C89A67D7F65 (IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Burst.BurstCompiler/FakeDelegate::.ctor(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FakeDelegate__ctor_mC2654CB88A21F64F4C25E02A0C89854E2F74484B (FakeDelegate_t659588AB379C77AF08088ED8B2E2A5ECFF38CE16* __this, MethodInfo_t* ___0_method, const RuntimeMethod* method) 
{
	{
		// public FakeDelegate(MethodInfo method)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Method = method;
		MethodInfo_t* L_0 = ___0_method;
		__this->___U3CMethodU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodU3Ek__BackingField_0), (void*)L_0);
		// }
		return;
	}
}
// System.Reflection.MethodInfo Unity.Burst.BurstCompiler/FakeDelegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* FakeDelegate_get_Method_m36F3C3DAC1377B07AF18BAC6EDF28F3FAE5BA828 (FakeDelegate_t659588AB379C77AF08088ED8B2E2A5ECFF38CE16* __this, const RuntimeMethod* method) 
{
	{
		// public MethodInfo Method { get; }
		MethodInfo_t* L_0 = __this->___U3CMethodU3Ek__BackingField_0;
		return L_0;
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
// System.Void Unity.Burst.BurstCompiler/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8FF612FA8632F867C2CA577D7FF7A080320568BF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4* L_0 = (U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4*)il2cpp_codegen_object_new(U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mEC9179CC84E1FA4BB4AB4B39A87C134F481976C9(L_0, NULL);
		((U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Burst.BurstCompiler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEC9179CC84E1FA4BB4AB4B39A87C134F481976C9 (U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Unity.Burst.BurstCompiler/<>c::<Compile>b__22_0(System.Attribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCompileU3Eb__22_0_m2326454433F78E8E68A7EB9191933F393BDB0401 (U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral592EA6352B1DC6F257CCDA7C5C1A064EFE696C16);
		s_Il2CppMethodInitialized = true;
	}
	{
		// methodInfo.GetCustomAttributes().All(s => s.GetType().Name != "MonoPInvokeCallbackAttribute"))
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_s;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		bool L_3;
		L_3 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_2, _stringLiteral592EA6352B1DC6F257CCDA7C5C1A064EFE696C16, NULL);
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
// System.Void Unity.Burst.BurstCompilerOptions::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions__ctor_m644EA41CAFD4F89CE36074DBD77BAC761C122285 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, bool ___0_isGlobal, const RuntimeMethod* method) 
{
	{
		// internal BurstCompilerOptions(bool isGlobal)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// IsGlobal = isGlobal;
		bool L_0 = ___0_isGlobal;
		__this->___U3CIsGlobalU3Ek__BackingField_5 = L_0;
		// EnableBurstCompilation = true;
		BurstCompilerOptions_set_EnableBurstCompilation_mEDD4E93926B3E03A8E38CA9D483D4E4FD649D849(__this, (bool)1, NULL);
		// EnableBurstSafetyChecks = true;
		BurstCompilerOptions_set_EnableBurstSafetyChecks_m2AB857BC80AE1546031305C47F88ADB147A8BB83(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::get_IsGlobal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_IsGlobal_m8500610C2E650CFE58411EAD12DEE4F5F49C30B4 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) 
{
	{
		// private bool IsGlobal { get; }
		bool L_0 = __this->___U3CIsGlobalU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::get_EnableBurstCompilation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_EnableBurstCompilation_mE10DF1EAAF0A56906D9784498FD48EAC1B012CD0 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) 
{
	{
		// get => _enableBurstCompilation;
		bool L_0 = __this->____enableBurstCompilation_3;
		return L_0;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstCompilation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstCompilation_mEDD4E93926B3E03A8E38CA9D483D4E4FD649D849 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	{
		// if (IsGlobal && ForceDisableBurstCompilation) value = false;
		bool L_0;
		L_0 = BurstCompilerOptions_get_IsGlobal_m8500610C2E650CFE58411EAD12DEE4F5F49C30B4_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		bool L_1 = ((BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var))->___ForceDisableBurstCompilation_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (IsGlobal && ForceDisableBurstCompilation) value = false;
		___0_value = (bool)0;
	}

IL_0012:
	{
		// bool changed = _enableBurstCompilation != value;
		bool L_2 = __this->____enableBurstCompilation_3;
		bool L_3 = ___0_value;
		// _enableBurstCompilation = value;
		bool L_4 = ___0_value;
		__this->____enableBurstCompilation_3 = L_4;
		// if (IsGlobal)
		bool L_5;
		L_5 = BurstCompilerOptions_get_IsGlobal_m8500610C2E650CFE58411EAD12DEE4F5F49C30B4_inline(__this, NULL);
		G_B4_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		if (!L_5)
		{
			G_B5_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_0039;
		}
	}
	{
		// JobsUtility.JobCompilerEnabled = value;
		bool L_6 = ___0_value;
		JobsUtility_set_JobCompilerEnabled_m14CB399441AB02D65BE11D74E9CC3E313420D72B(L_6, NULL);
		// BurstCompiler._IsEnabled = value;
		bool L_7 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		((BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var))->____IsEnabled_0 = L_7;
		G_B5_0 = G_B4_0;
	}

IL_0039:
	{
		// if (changed)
		if (!G_B5_0)
		{
			goto IL_0041;
		}
	}
	{
		// OnOptionsChanged();
		BurstCompilerOptions_OnOptionsChanged_m20C25705A1D7B2A9C6265D3D5FE2A10A42AAABB7(__this, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstSafetyChecks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstSafetyChecks_m2AB857BC80AE1546031305C47F88ADB147A8BB83 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// bool changed = _enableBurstSafetyChecks != value;
		bool L_0 = __this->____enableBurstSafetyChecks_4;
		bool L_1 = ___0_value;
		// _enableBurstSafetyChecks = value;
		bool L_2 = ___0_value;
		__this->____enableBurstSafetyChecks_4 = L_2;
		// if (changed)
		if (!((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0))
		{
			goto IL_0021;
		}
	}
	{
		// OnOptionsChanged();
		BurstCompilerOptions_OnOptionsChanged_m20C25705A1D7B2A9C6265D3D5FE2A10A42AAABB7(__this, NULL);
		// MaybeTriggerRecompilation();
		BurstCompilerOptions_MaybeTriggerRecompilation_mBE68BE4083665B2DE194184223A6BF14CA7F3821(__this, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Action Unity.Burst.BurstCompilerOptions::get_OptionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* BurstCompilerOptions_get_OptionsChanged_m073BEAA6F0BA3EA5F42853CE2BB33681D6274C69 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) 
{
	{
		// internal Action OptionsChanged { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___U3COptionsChangedU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::TryGetAttribute(System.Reflection.MemberInfo,Unity.Burst.BurstCompileAttribute&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_TryGetAttribute_m4EE3F62FAF2A482C444060E1CCB480711CC377F8 (MemberInfo_t* ___0_member, BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D** ___1_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// attribute = null;
		BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D** L_0 = ___1_attribute;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// if (member == null)
		MemberInfo_t* L_1 = ___0_member;
		bool L_2;
		L_2 = MemberInfo_op_Equality_m4B4F1AF29C9361D125F6D7FAB3D227ED3FECE685(L_1, (MemberInfo_t*)NULL, NULL);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000e:
	{
		// attribute = GetBurstCompileAttribute(member);
		BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D** L_3 = ___1_attribute;
		MemberInfo_t* L_4 = ___0_member;
		il2cpp_codegen_runtime_class_init_inline(BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* L_5;
		L_5 = BurstCompilerOptions_GetBurstCompileAttribute_m9383E7E419C41B6BD078452FC1E2EF94A9AD2972(L_4, NULL);
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_5);
		// if (attribute == null)
		BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D** L_6 = ___1_attribute;
		BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* L_7 = *((BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D**)L_6);
		if (L_7)
		{
			goto IL_001c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001c:
	{
		// return true;
		return (bool)1;
	}
}
// Unity.Burst.BurstCompileAttribute Unity.Burst.BurstCompilerOptions::GetBurstCompileAttribute(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* BurstCompilerOptions_GetBurstCompileAttribute_m9383E7E419C41B6BD078452FC1E2EF94A9AD2972 (MemberInfo_t* ___0_memberInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D_mAD047DA5EEB378D0343B0C8D2460F32490F9FCBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE03BDA1448C10795E764222E36CC6226EECA1A);
		s_Il2CppMethodInitialized = true;
	}
	BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_2 = NULL;
	BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* V_3 = NULL;
	{
		// var result = memberInfo.GetCustomAttribute<BurstCompileAttribute>();
		MemberInfo_t* L_0 = ___0_memberInfo;
		BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* L_1;
		L_1 = CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D_mAD047DA5EEB378D0343B0C8D2460F32490F9FCBB(L_0, CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D_mAD047DA5EEB378D0343B0C8D2460F32490F9FCBB_RuntimeMethod_var);
		V_0 = L_1;
		// if (result != null)
		BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* L_2 = V_0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		// return result;
		BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* L_3 = V_0;
		return L_3;
	}

IL_000c:
	{
		// foreach (var a in memberInfo.GetCustomAttributes())
		MemberInfo_t* L_4 = ___0_memberInfo;
		RuntimeObject* L_5;
		L_5 = CustomAttributeExtensions_GetCustomAttributes_m2851556A37AAF9A808EFB2C603D11E48635FA785(L_4, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Attribute>::GetEnumerator() */, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_1;
					if (!L_7)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_8 = V_1;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_006c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0059_1;
			}

IL_001a_1:
			{
				// foreach (var a in memberInfo.GetCustomAttributes())
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10;
				L_10 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Attribute>::get_Current() */, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_9);
				// var attributeType = a.GetType();
				NullCheck(L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_10, NULL);
				// if (attributeType.FullName == "Burst.Compiler.IL.Tests.TestCompilerAttribute")
				NullCheck(L_11);
				String_t* L_12;
				L_12 = VirtualFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_FullName() */, L_11);
				bool L_13;
				L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteralBEE03BDA1448C10795E764222E36CC6226EECA1A, NULL);
				if (!L_13)
				{
					goto IL_0059_1;
				}
			}
			{
				// var options = new List<string>();
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
				NullCheck(L_14);
				List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_14, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
				V_2 = L_14;
				// return new BurstCompileAttribute(FloatPrecision.Standard, FloatMode.Default)
				// {
				//     CompileSynchronously = true,
				//     Options = options.ToArray(),
				// };
				BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* L_15 = (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D*)il2cpp_codegen_object_new(BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D_il2cpp_TypeInfo_var);
				NullCheck(L_15);
				BurstCompileAttribute__ctor_mBA3EAC7C435927F67F10F2D185F5CBE8F88DC3C6(L_15, 0, 0, NULL);
				BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* L_16 = L_15;
				NullCheck(L_16);
				BurstCompileAttribute_set_CompileSynchronously_mED8B25B60ABC1EA5327DE691DCE129C9BD34BD58(L_16, (bool)1, NULL);
				BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* L_17 = L_16;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = V_2;
				NullCheck(L_18);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19;
				L_19 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_18, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
				NullCheck(L_17);
				BurstCompileAttribute_set_Options_mEC956014E83B4671F431159FE7D1DDD6BE5BC91E_inline(L_17, L_19, NULL);
				V_3 = L_17;
				goto IL_006f;
			}

IL_0059_1:
			{
				// foreach (var a in memberInfo.GetCustomAttributes())
				RuntimeObject* L_20 = V_1;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_006d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		// return null;
		return (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D*)NULL;
	}

IL_006f:
	{
		// }
		BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* L_22 = V_3;
		return L_22;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::HasBurstCompileAttribute(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_HasBurstCompileAttribute_mC68CA53F4A77780A30D34E895B120188F31F7826 (MemberInfo_t* ___0_member, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* V_0 = NULL;
	{
		// if (member == null) throw new ArgumentNullException(nameof(member));
		MemberInfo_t* L_0 = ___0_member;
		bool L_1;
		L_1 = MemberInfo_op_Equality_m4B4F1AF29C9361D125F6D7FAB3D227ED3FECE685(L_0, (MemberInfo_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (member == null) throw new ArgumentNullException(nameof(member));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4784CA4E159D86F8767CCC55143536AF34801074)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompilerOptions_HasBurstCompileAttribute_mC68CA53F4A77780A30D34E895B120188F31F7826_RuntimeMethod_var)));
	}

IL_0014:
	{
		// return TryGetAttribute(member, out attr);
		MemberInfo_t* L_3 = ___0_member;
		il2cpp_codegen_runtime_class_init_inline(BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = BurstCompilerOptions_TryGetAttribute_m4EE3F62FAF2A482C444060E1CCB480711CC377F8(L_3, (&V_0), NULL);
		return L_4;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::OnOptionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_OnOptionsChanged_m20C25705A1D7B2A9C6265D3D5FE2A10A42AAABB7 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// OptionsChanged?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0;
		L_0 = BurstCompilerOptions_get_OptionsChanged_m073BEAA6F0BA3EA5F42853CE2BB33681D6274C69_inline(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
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
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::MaybeTriggerRecompilation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_MaybeTriggerRecompilation_mBE68BE4083665B2DE194184223A6BF14CA7F3821 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions__cctor_m00F05309A6D0721099EBAF2FB553AD1A409815F6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052A90A585030A2D7669CC7D2884B0D78760C742);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79DA35A084D67D3A4C946D97765E49E456B15354);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// foreach (var arg in Environment.GetCommandLineArgs())
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Environment_GetCommandLineArgs_mD29CFA1CD3C84F9BD91152E70302E908114A831D(NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003c;
	}

IL_000a:
	{
		// foreach (var arg in Environment.GetCommandLineArgs())
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral052A90A585030A2D7669CC7D2884B0D78760C742, NULL);
		if (L_6)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral79DA35A084D67D3A4C946D97765E49E456B15354, NULL);
		if (L_8)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_0038;
	}

IL_002a:
	{
		// ForceDisableBurstCompilation = true;
		((BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var))->___ForceDisableBurstCompilation_0 = (bool)1;
		// break;
		goto IL_0038;
	}

IL_0032:
	{
		// ForceBurstCompilationSynchronously = true;
		((BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var))->___ForceBurstCompilationSynchronously_1 = (bool)1;
	}

IL_0038:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003c:
	{
		// foreach (var arg in Environment.GetCommandLineArgs())
		int32_t L_10 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// if (CheckIsSecondaryUnityProcess())
		bool L_12;
		L_12 = BurstCompilerOptions_CheckIsSecondaryUnityProcess_mAA7A85682C937E5FF55B6B9ADCF0F1789F889E67(NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		// ForceDisableBurstCompilation = true;
		((BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var))->___ForceDisableBurstCompilation_0 = (bool)1;
		// IsSecondaryUnityProcess = true;
		((BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var))->___IsSecondaryUnityProcess_2 = (bool)1;
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::CheckIsSecondaryUnityProcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_CheckIsSecondaryUnityProcess_mAA7A85682C937E5FF55B6B9ADCF0F1789F889E67 (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
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
// System.Void Unity.Burst.BurstRuntime::PreventRequiredAttributeStrip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstRuntime_PreventRequiredAttributeStrip_mEB29E8C73D86AC18C902D6CA4B85C9D1DC0DB540 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstDiscardAttribute_t860FCEA3A7BADFD735A65A36C99B894EB2AAB388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAAC6CF31A5C9BD93736FBA006E9BA2CA274A12);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new BurstDiscardAttribute();
		BurstDiscardAttribute_t860FCEA3A7BADFD735A65A36C99B894EB2AAB388* L_0 = (BurstDiscardAttribute_t860FCEA3A7BADFD735A65A36C99B894EB2AAB388*)il2cpp_codegen_object_new(BurstDiscardAttribute_t860FCEA3A7BADFD735A65A36C99B894EB2AAB388_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BurstDiscardAttribute__ctor_m0AC3131F7C5B377DCA604CD7BB8AC4AA4E161033(L_0, NULL);
		// new ConditionalAttribute("HEJSA");
		ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0* L_1 = (ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0*)il2cpp_codegen_object_new(ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ConditionalAttribute__ctor_m948BC90599397308C76C433D98236C3BD81BF27F(L_1, _stringLiteral7EAAC6CF31A5C9BD93736FBA006E9BA2CA274A12, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstRuntime::Log(System.Byte*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstRuntime_Log_mACD9C0A258B393532ED8AE9DB127D494C14D0E88 (uint8_t* ___0_message, int32_t ___1_logType, uint8_t* ___2_fileName, int32_t ___3_lineNumber, const RuntimeMethod* method) 
{
	{
		// Unity.Burst.LowLevel.BurstCompilerService.Log((byte*) 0, (Unity.Burst.LowLevel.BurstCompilerService.BurstLogType)logType, message, (byte*) 0, lineNumber);
		int32_t L_0 = ___1_logType;
		uint8_t* L_1 = ___0_message;
		int32_t L_2 = ___3_lineNumber;
		BurstCompilerService_Log_m4224BFA55310174B3BD9E0A2F15F3CF85757C253((void*)((intptr_t)0), L_0, L_1, (uint8_t*)((intptr_t)0), L_2, NULL);
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
// System.Void Unity.Burst.BurstRuntime/PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_m73E16FAB2119900D63EE60E6A868357D44E175F5 (PreserveAttribute_tA1799B67558808CC16DE11D04CC1D42AAA569133* __this, const RuntimeMethod* method) 
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
// System.Void Unity.Burst.BurstString::CopyFixedString(System.Byte*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_CopyFixedString_m5C7937A0D221B27A3D5FE9C1021B2210A7E72A16 (uint8_t* ___0_dest, int32_t ___1_destLength, uint8_t* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// var finalLength = srcLength > destLength ? destLength : srcLength;
		int32_t L_0 = ___3_srcLength;
		int32_t L_1 = ___1_destLength;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_2 = ___3_srcLength;
		G_B3_0 = L_2;
		goto IL_0008;
	}

IL_0007:
	{
		int32_t L_3 = ___1_destLength;
		G_B3_0 = L_3;
	}

IL_0008:
	{
		V_0 = G_B3_0;
		// *((ushort*)dest - 1) = (ushort)finalLength;
		uint8_t* L_4 = ___0_dest;
		int32_t L_5 = V_0;
		*((int16_t*)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_4, 2))) = (int16_t)((int32_t)(uint16_t)L_5);
		// dest[finalLength] = 0;
		uint8_t* L_6 = ___0_dest;
		int32_t L_7 = V_0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, L_7))) = (int8_t)0;
		// UnsafeUtility.MemCpy(dest, src, finalLength);
		uint8_t* L_8 = ___0_dest;
		uint8_t* L_9 = ___2_src;
		int32_t L_10 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_8, (void*)L_9, ((int64_t)L_10), NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::Format(System.Byte*,System.Int32&,System.Int32,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_m5B430D57A65E74E0921325EC12E2920FACE2B684 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, uint8_t* ___3_src, int32_t ___4_srcLength, int32_t ___5_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B5_0 = 0;
	{
		// var options = *(FormatOptions*)&formatOptionsRaw;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_0 = (*(FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84*)((uintptr_t)(&___5_formatOptionsRaw)));
		V_0 = L_0;
		// if (AlignLeft(dest, ref destIndex, destLength, options.AlignAndSize, srcLength)) return;
		uint8_t* L_1 = ___0_dest;
		int32_t* L_2 = ___1_destIndex;
		int32_t L_3 = ___2_destLength;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_4 = V_0;
		int8_t L_5 = L_4.___AlignAndSize_1;
		int32_t L_6 = ___4_srcLength;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = BurstString_AlignLeft_mE09478055A126F1675FF9C15B6572186785585D0(L_1, L_2, L_3, L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_001c;
		}
	}
	{
		// if (AlignLeft(dest, ref destIndex, destLength, options.AlignAndSize, srcLength)) return;
		return;
	}

IL_001c:
	{
		// int maxToCopy = destLength - destIndex;
		int32_t L_8 = ___2_destLength;
		int32_t* L_9 = ___1_destIndex;
		int32_t L_10 = *((int32_t*)L_9);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, L_10));
		// int toCopyLength = srcLength > maxToCopy ? maxToCopy : srcLength;
		int32_t L_11 = ___4_srcLength;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) > ((int32_t)L_12)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_13 = ___4_srcLength;
		G_B5_0 = L_13;
		goto IL_002b;
	}

IL_002a:
	{
		int32_t L_14 = V_1;
		G_B5_0 = L_14;
	}

IL_002b:
	{
		V_2 = G_B5_0;
		// if (toCopyLength > 0)
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		// UnsafeUtility.MemCpy(dest + destIndex, src, toCopyLength);
		uint8_t* L_16 = ___0_dest;
		int32_t* L_17 = ___1_destIndex;
		int32_t L_18 = *((int32_t*)L_17);
		uint8_t* L_19 = ___3_src;
		int32_t L_20 = V_2;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, L_18)), (void*)L_19, ((int64_t)L_20), NULL);
		// destIndex += toCopyLength;
		int32_t* L_21 = ___1_destIndex;
		int32_t* L_22 = ___1_destIndex;
		int32_t L_23 = *((int32_t*)L_22);
		int32_t L_24 = V_2;
		*((int32_t*)L_21) = (int32_t)((int32_t)il2cpp_codegen_add(L_23, L_24));
		// AlignRight(dest, ref destIndex, destLength, options.AlignAndSize, srcLength);
		uint8_t* L_25 = ___0_dest;
		int32_t* L_26 = ___1_destIndex;
		int32_t L_27 = ___2_destLength;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_28 = V_0;
		int8_t L_29 = L_28.___AlignAndSize_1;
		int32_t L_30 = ___4_srcLength;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = BurstString_AlignRight_m42725CF76779C09A0664D895DA590CEB4E1A8A37(L_25, L_26, L_27, L_29, L_30, NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::Format(System.Byte*,System.Int32&,System.Int32,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_mEC129A0C1267C5438D13D9B8DA5BE80C9C6D3B8B (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, float ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var options = *(FormatOptions*)&formatOptionsRaw;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_0 = (*(FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84*)((uintptr_t)(&___4_formatOptionsRaw)));
		V_0 = L_0;
		// ConvertFloatToString(dest, ref destIndex, destLength, value, options);
		uint8_t* L_1 = ___0_dest;
		int32_t* L_2 = ___1_destIndex;
		int32_t L_3 = ___2_destLength;
		float L_4 = ___3_value;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_ConvertFloatToString_m31A31291376EE1C7AA2DFA26573312B25E0DDCDA(L_1, L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::Format(System.Byte*,System.Int32&,System.Int32,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_m77916B0A75CB28DF9F0BD6F32290D31BB24C7D4C (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, double ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var options = *(FormatOptions*)&formatOptionsRaw;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_0 = (*(FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84*)((uintptr_t)(&___4_formatOptionsRaw)));
		V_0 = L_0;
		// ConvertDoubleToString(dest, ref destIndex, destLength, value, options);
		uint8_t* L_1 = ___0_dest;
		int32_t* L_2 = ___1_destIndex;
		int32_t L_3 = ___2_destLength;
		double L_4 = ___3_value;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_ConvertDoubleToString_m5B4644F134166CA236077075A11108590892EDD0(L_1, L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::Format(System.Byte*,System.Int32&,System.Int32,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_Format_m8BCCCB4132CE427768D9A118E49B3F1F6C222102 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, bool ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		// var length = value ? 4 : 5; // True = 4 chars, False = 5 chars
		bool L_0 = ___3_value;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 5;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 4;
	}

IL_0007:
	{
		V_0 = G_B3_0;
		// var options = *(FormatOptions*)&formatOptionsRaw;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_1 = (*(FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84*)((uintptr_t)(&___4_formatOptionsRaw)));
		V_1 = L_1;
		// if (AlignLeft(dest, ref destIndex, destLength, options.AlignAndSize, length)) return;
		uint8_t* L_2 = ___0_dest;
		int32_t* L_3 = ___1_destIndex;
		int32_t L_4 = ___2_destLength;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_5 = V_1;
		int8_t L_6 = L_5.___AlignAndSize_1;
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = BurstString_AlignLeft_mE09478055A126F1675FF9C15B6572186785585D0(L_2, L_3, L_4, L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0023;
		}
	}
	{
		// if (AlignLeft(dest, ref destIndex, destLength, options.AlignAndSize, length)) return;
		return;
	}

IL_0023:
	{
		// if (value)
		bool L_9 = ___3_value;
		if (!L_9)
		{
			goto IL_0078;
		}
	}
	{
		// if (destIndex >= destLength) return;
		int32_t* L_10 = ___1_destIndex;
		int32_t L_11 = *((int32_t*)L_10);
		int32_t L_12 = ___2_destLength;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_002c;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_002c:
	{
		// dest[destIndex++] = (byte)'T';
		uint8_t* L_13 = ___0_dest;
		int32_t* L_14 = ___1_destIndex;
		int32_t* L_15 = ___1_destIndex;
		int32_t L_16 = *((int32_t*)L_15);
		V_2 = L_16;
		int32_t L_17 = V_2;
		*((int32_t*)L_14) = (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_2;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_18))) = (int8_t)((int32_t)84);
		// if (destIndex >= destLength) return;
		int32_t* L_19 = ___1_destIndex;
		int32_t L_20 = *((int32_t*)L_19);
		int32_t L_21 = ___2_destLength;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0040;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_0040:
	{
		// dest[destIndex++] = (byte)'r';
		uint8_t* L_22 = ___0_dest;
		int32_t* L_23 = ___1_destIndex;
		int32_t* L_24 = ___1_destIndex;
		int32_t L_25 = *((int32_t*)L_24);
		V_2 = L_25;
		int32_t L_26 = V_2;
		*((int32_t*)L_23) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1));
		int32_t L_27 = V_2;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_22, L_27))) = (int8_t)((int32_t)114);
		// if (destIndex >= destLength) return;
		int32_t* L_28 = ___1_destIndex;
		int32_t L_29 = *((int32_t*)L_28);
		int32_t L_30 = ___2_destLength;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0054;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_0054:
	{
		// dest[destIndex++] = (byte)'u';
		uint8_t* L_31 = ___0_dest;
		int32_t* L_32 = ___1_destIndex;
		int32_t* L_33 = ___1_destIndex;
		int32_t L_34 = *((int32_t*)L_33);
		V_2 = L_34;
		int32_t L_35 = V_2;
		*((int32_t*)L_32) = (int32_t)((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_36 = V_2;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_31, L_36))) = (int8_t)((int32_t)117);
		// if (destIndex >= destLength) return;
		int32_t* L_37 = ___1_destIndex;
		int32_t L_38 = *((int32_t*)L_37);
		int32_t L_39 = ___2_destLength;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0068;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_0068:
	{
		// dest[destIndex++] = (byte)'e';
		uint8_t* L_40 = ___0_dest;
		int32_t* L_41 = ___1_destIndex;
		int32_t* L_42 = ___1_destIndex;
		int32_t L_43 = *((int32_t*)L_42);
		V_2 = L_43;
		int32_t L_44 = V_2;
		*((int32_t*)L_41) = (int32_t)((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = V_2;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_40, L_45))) = (int8_t)((int32_t)101);
		goto IL_00dc;
	}

IL_0078:
	{
		// if (destIndex >= destLength) return;
		int32_t* L_46 = ___1_destIndex;
		int32_t L_47 = *((int32_t*)L_46);
		int32_t L_48 = ___2_destLength;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_007e;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_007e:
	{
		// dest[destIndex++] = (byte)'F';
		uint8_t* L_49 = ___0_dest;
		int32_t* L_50 = ___1_destIndex;
		int32_t* L_51 = ___1_destIndex;
		int32_t L_52 = *((int32_t*)L_51);
		V_2 = L_52;
		int32_t L_53 = V_2;
		*((int32_t*)L_50) = (int32_t)((int32_t)il2cpp_codegen_add(L_53, 1));
		int32_t L_54 = V_2;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_49, L_54))) = (int8_t)((int32_t)70);
		// if (destIndex >= destLength) return;
		int32_t* L_55 = ___1_destIndex;
		int32_t L_56 = *((int32_t*)L_55);
		int32_t L_57 = ___2_destLength;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_0092;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_0092:
	{
		// dest[destIndex++] = (byte)'a';
		uint8_t* L_58 = ___0_dest;
		int32_t* L_59 = ___1_destIndex;
		int32_t* L_60 = ___1_destIndex;
		int32_t L_61 = *((int32_t*)L_60);
		V_2 = L_61;
		int32_t L_62 = V_2;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_62, 1));
		int32_t L_63 = V_2;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_58, L_63))) = (int8_t)((int32_t)97);
		// if (destIndex >= destLength) return;
		int32_t* L_64 = ___1_destIndex;
		int32_t L_65 = *((int32_t*)L_64);
		int32_t L_66 = ___2_destLength;
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_00a6;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_00a6:
	{
		// dest[destIndex++] = (byte)'l';
		uint8_t* L_67 = ___0_dest;
		int32_t* L_68 = ___1_destIndex;
		int32_t* L_69 = ___1_destIndex;
		int32_t L_70 = *((int32_t*)L_69);
		V_2 = L_70;
		int32_t L_71 = V_2;
		*((int32_t*)L_68) = (int32_t)((int32_t)il2cpp_codegen_add(L_71, 1));
		int32_t L_72 = V_2;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_67, L_72))) = (int8_t)((int32_t)108);
		// if (destIndex >= destLength) return;
		int32_t* L_73 = ___1_destIndex;
		int32_t L_74 = *((int32_t*)L_73);
		int32_t L_75 = ___2_destLength;
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_00ba;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_00ba:
	{
		// dest[destIndex++] = (byte)'s';
		uint8_t* L_76 = ___0_dest;
		int32_t* L_77 = ___1_destIndex;
		int32_t* L_78 = ___1_destIndex;
		int32_t L_79 = *((int32_t*)L_78);
		V_2 = L_79;
		int32_t L_80 = V_2;
		*((int32_t*)L_77) = (int32_t)((int32_t)il2cpp_codegen_add(L_80, 1));
		int32_t L_81 = V_2;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_76, L_81))) = (int8_t)((int32_t)115);
		// if (destIndex >= destLength) return;
		int32_t* L_82 = ___1_destIndex;
		int32_t L_83 = *((int32_t*)L_82);
		int32_t L_84 = ___2_destLength;
		if ((((int32_t)L_83) < ((int32_t)L_84)))
		{
			goto IL_00ce;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_00ce:
	{
		// dest[destIndex++] = (byte)'e';
		uint8_t* L_85 = ___0_dest;
		int32_t* L_86 = ___1_destIndex;
		int32_t* L_87 = ___1_destIndex;
		int32_t L_88 = *((int32_t*)L_87);
		V_2 = L_88;
		int32_t L_89 = V_2;
		*((int32_t*)L_86) = (int32_t)((int32_t)il2cpp_codegen_add(L_89, 1));
		int32_t L_90 = V_2;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_85, L_90))) = (int8_t)((int32_t)101);
	}

IL_00dc:
	{
		// AlignRight(dest, ref destIndex, destLength, options.AlignAndSize, length);
		uint8_t* L_91 = ___0_dest;
		int32_t* L_92 = ___1_destIndex;
		int32_t L_93 = ___2_destLength;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_94 = V_1;
		int8_t L_95 = L_94.___AlignAndSize_1;
		int32_t L_96 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		bool L_97;
		L_97 = BurstString_AlignRight_m42725CF76779C09A0664D895DA590CEB4E1A8A37(L_91, L_92, L_93, L_95, L_96, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::Format(System.Byte*,System.Int32&,System.Int32,System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_Format_m19E81CEC5B4BA84C250AE5BAADC37D414E736730 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, Il2CppChar ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B21_0 = 0;
	{
		// var length = value <= 0x7f ? 1 : value <= 0x7FF ? 2 : 3;
		Il2CppChar L_0 = ___3_value;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0013;
		}
	}
	{
		Il2CppChar L_1 = ___3_value;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)2047))))
		{
			goto IL_0010;
		}
	}
	{
		G_B5_0 = 3;
		goto IL_0014;
	}

IL_0010:
	{
		G_B5_0 = 2;
		goto IL_0014;
	}

IL_0013:
	{
		G_B5_0 = 1;
	}

IL_0014:
	{
		V_0 = G_B5_0;
		// var options = *(FormatOptions*)&formatOptionsRaw;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_2 = (*(FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84*)((uintptr_t)(&___4_formatOptionsRaw)));
		V_1 = L_2;
		// if (AlignLeft(dest, ref destIndex, destLength, options.AlignAndSize, 1)) return;
		uint8_t* L_3 = ___0_dest;
		int32_t* L_4 = ___1_destIndex;
		int32_t L_5 = ___2_destLength;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_6 = V_1;
		int8_t L_7 = L_6.___AlignAndSize_1;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = BurstString_AlignLeft_mE09478055A126F1675FF9C15B6572186785585D0(L_3, L_4, L_5, L_7, 1, NULL);
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		// if (AlignLeft(dest, ref destIndex, destLength, options.AlignAndSize, 1)) return;
		return;
	}

IL_0030:
	{
		// if (length == 1)
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_004d;
		}
	}
	{
		// if (destIndex >= destLength) return;
		int32_t* L_10 = ___1_destIndex;
		int32_t L_11 = *((int32_t*)L_10);
		int32_t L_12 = ___2_destLength;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_003a;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_003a:
	{
		// dest[destIndex++] = (byte)value;
		uint8_t* L_13 = ___0_dest;
		int32_t* L_14 = ___1_destIndex;
		int32_t* L_15 = ___1_destIndex;
		int32_t L_16 = *((int32_t*)L_15);
		V_2 = L_16;
		int32_t L_17 = V_2;
		*((int32_t*)L_14) = (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_2;
		Il2CppChar L_19 = ___3_value;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_18))) = (int8_t)((int32_t)(uint8_t)L_19);
		goto IL_014e;
	}

IL_004d:
	{
		// else if (length == 2)
		int32_t L_20 = V_0;
		if ((!(((uint32_t)L_20) == ((uint32_t)2))))
		{
			goto IL_008f;
		}
	}
	{
		// if (destIndex >= destLength) return;
		int32_t* L_21 = ___1_destIndex;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = ___2_destLength;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0057;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_0057:
	{
		// dest[destIndex++] = (byte)((value >> 6) | 0xC0);
		uint8_t* L_24 = ___0_dest;
		int32_t* L_25 = ___1_destIndex;
		int32_t* L_26 = ___1_destIndex;
		int32_t L_27 = *((int32_t*)L_26);
		V_2 = L_27;
		int32_t L_28 = V_2;
		*((int32_t*)L_25) = (int32_t)((int32_t)il2cpp_codegen_add(L_28, 1));
		int32_t L_29 = V_2;
		Il2CppChar L_30 = ___3_value;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_24, L_29))) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_30>>6))|((int32_t)192))));
		// if (destIndex >= destLength) return;
		int32_t* L_31 = ___1_destIndex;
		int32_t L_32 = *((int32_t*)L_31);
		int32_t L_33 = ___2_destLength;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0073;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_0073:
	{
		// dest[destIndex++] = (byte)((value & 0x3F) | 0x80);
		uint8_t* L_34 = ___0_dest;
		int32_t* L_35 = ___1_destIndex;
		int32_t* L_36 = ___1_destIndex;
		int32_t L_37 = *((int32_t*)L_36);
		V_2 = L_37;
		int32_t L_38 = V_2;
		*((int32_t*)L_35) = (int32_t)((int32_t)il2cpp_codegen_add(L_38, 1));
		int32_t L_39 = V_2;
		Il2CppChar L_40 = ___3_value;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_34, L_39))) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_40&((int32_t)63)))|((int32_t)128))));
		goto IL_014e;
	}

IL_008f:
	{
		// else if (length == 3)
		int32_t L_41 = V_0;
		if ((!(((uint32_t)L_41) == ((uint32_t)3))))
		{
			goto IL_014e;
		}
	}
	{
		// bool isHighOrLowSurrogate = value >= '\xD800' && value <= '\xDFFF';
		Il2CppChar L_42 = ___3_value;
		if ((((int32_t)L_42) < ((int32_t)((int32_t)55296))))
		{
			goto IL_00ab;
		}
	}
	{
		Il2CppChar L_43 = ___3_value;
		G_B21_0 = ((((int32_t)((((int32_t)L_43) > ((int32_t)((int32_t)57343)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B21_0 = 0;
	}

IL_00ac:
	{
		// if (isHighOrLowSurrogate)
		if (!G_B21_0)
		{
			goto IL_00f5;
		}
	}
	{
		// if (destIndex >= destLength) return;
		int32_t* L_44 = ___1_destIndex;
		int32_t L_45 = *((int32_t*)L_44);
		int32_t L_46 = ___2_destLength;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_00b4;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_00b4:
	{
		// dest[destIndex++] = 0xEF;
		uint8_t* L_47 = ___0_dest;
		int32_t* L_48 = ___1_destIndex;
		int32_t* L_49 = ___1_destIndex;
		int32_t L_50 = *((int32_t*)L_49);
		V_2 = L_50;
		int32_t L_51 = V_2;
		*((int32_t*)L_48) = (int32_t)((int32_t)il2cpp_codegen_add(L_51, 1));
		int32_t L_52 = V_2;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_47, L_52))) = (int8_t)((int32_t)239);
		// if (destIndex >= destLength) return;
		int32_t* L_53 = ___1_destIndex;
		int32_t L_54 = *((int32_t*)L_53);
		int32_t L_55 = ___2_destLength;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_00cb;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_00cb:
	{
		// dest[destIndex++] = 0xBF;
		uint8_t* L_56 = ___0_dest;
		int32_t* L_57 = ___1_destIndex;
		int32_t* L_58 = ___1_destIndex;
		int32_t L_59 = *((int32_t*)L_58);
		V_2 = L_59;
		int32_t L_60 = V_2;
		*((int32_t*)L_57) = (int32_t)((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = V_2;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_56, L_61))) = (int8_t)((int32_t)191);
		// if (destIndex >= destLength) return;
		int32_t* L_62 = ___1_destIndex;
		int32_t L_63 = *((int32_t*)L_62);
		int32_t L_64 = ___2_destLength;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_00e2;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_00e2:
	{
		// dest[destIndex++] = 0xBD;
		uint8_t* L_65 = ___0_dest;
		int32_t* L_66 = ___1_destIndex;
		int32_t* L_67 = ___1_destIndex;
		int32_t L_68 = *((int32_t*)L_67);
		V_2 = L_68;
		int32_t L_69 = V_2;
		*((int32_t*)L_66) = (int32_t)((int32_t)il2cpp_codegen_add(L_69, 1));
		int32_t L_70 = V_2;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_65, L_70))) = (int8_t)((int32_t)189);
		goto IL_014e;
	}

IL_00f5:
	{
		// if (destIndex >= destLength) return;
		int32_t* L_71 = ___1_destIndex;
		int32_t L_72 = *((int32_t*)L_71);
		int32_t L_73 = ___2_destLength;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_00fb;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_00fb:
	{
		// dest[destIndex++] = (byte)((value >> 12) | 0xE0);
		uint8_t* L_74 = ___0_dest;
		int32_t* L_75 = ___1_destIndex;
		int32_t* L_76 = ___1_destIndex;
		int32_t L_77 = *((int32_t*)L_76);
		V_2 = L_77;
		int32_t L_78 = V_2;
		*((int32_t*)L_75) = (int32_t)((int32_t)il2cpp_codegen_add(L_78, 1));
		int32_t L_79 = V_2;
		Il2CppChar L_80 = ___3_value;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_74, L_79))) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_80>>((int32_t)12)))|((int32_t)224))));
		// if (destIndex >= destLength) return;
		int32_t* L_81 = ___1_destIndex;
		int32_t L_82 = *((int32_t*)L_81);
		int32_t L_83 = ___2_destLength;
		if ((((int32_t)L_82) < ((int32_t)L_83)))
		{
			goto IL_0118;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_0118:
	{
		// dest[destIndex++] = (byte)(((value >> 6) & 0x3F) | 0x80);
		uint8_t* L_84 = ___0_dest;
		int32_t* L_85 = ___1_destIndex;
		int32_t* L_86 = ___1_destIndex;
		int32_t L_87 = *((int32_t*)L_86);
		V_2 = L_87;
		int32_t L_88 = V_2;
		*((int32_t*)L_85) = (int32_t)((int32_t)il2cpp_codegen_add(L_88, 1));
		int32_t L_89 = V_2;
		Il2CppChar L_90 = ___3_value;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_84, L_89))) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_90>>6))&((int32_t)63)))|((int32_t)128))));
		// if (destIndex >= destLength) return;
		int32_t* L_91 = ___1_destIndex;
		int32_t L_92 = *((int32_t*)L_91);
		int32_t L_93 = ___2_destLength;
		if ((((int32_t)L_92) < ((int32_t)L_93)))
		{
			goto IL_0137;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_0137:
	{
		// dest[destIndex++] = (byte)((value & 0x3F) | 0x80);
		uint8_t* L_94 = ___0_dest;
		int32_t* L_95 = ___1_destIndex;
		int32_t* L_96 = ___1_destIndex;
		int32_t L_97 = *((int32_t*)L_96);
		V_2 = L_97;
		int32_t L_98 = V_2;
		*((int32_t*)L_95) = (int32_t)((int32_t)il2cpp_codegen_add(L_98, 1));
		int32_t L_99 = V_2;
		Il2CppChar L_100 = ___3_value;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_94, L_99))) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_100&((int32_t)63)))|((int32_t)128))));
	}

IL_014e:
	{
		// AlignRight(dest, ref destIndex, destLength, options.AlignAndSize, 1);
		uint8_t* L_101 = ___0_dest;
		int32_t* L_102 = ___1_destIndex;
		int32_t L_103 = ___2_destLength;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_104 = V_1;
		int8_t L_105 = L_104.___AlignAndSize_1;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		bool L_106;
		L_106 = BurstString_AlignRight_m42725CF76779C09A0664D895DA590CEB4E1A8A37(L_101, L_102, L_103, L_105, 1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::Format(System.Byte*,System.Int32&,System.Int32,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_mF3FC2B176298B24C25FBF6DA92E700174C318000 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, uint8_t ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Format(dest, ref destIndex, destLength, (ulong)value, formatOptionsRaw);
		uint8_t* L_0 = ___0_dest;
		int32_t* L_1 = ___1_destIndex;
		int32_t L_2 = ___2_destLength;
		uint8_t L_3 = ___3_value;
		int32_t L_4 = ___4_formatOptionsRaw;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_Format_m206A288B53D79DF5ACDD39B3F3A9A79AC1CF3844(L_0, L_1, L_2, ((int64_t)(uint64_t)L_3), L_4, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::Format(System.Byte*,System.Int32&,System.Int32,System.UInt16,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_m234EB67007839F6D88BD31306502FB35A9F06FE1 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, uint16_t ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Format(dest, ref destIndex, destLength, (ulong)value, formatOptionsRaw);
		uint8_t* L_0 = ___0_dest;
		int32_t* L_1 = ___1_destIndex;
		int32_t L_2 = ___2_destLength;
		uint16_t L_3 = ___3_value;
		int32_t L_4 = ___4_formatOptionsRaw;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_Format_m206A288B53D79DF5ACDD39B3F3A9A79AC1CF3844(L_0, L_1, L_2, ((int64_t)(uint64_t)L_3), L_4, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::Format(System.Byte*,System.Int32&,System.Int32,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_m69268960549C3B448843D0EB215B43DE6BFB75CE (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, uint32_t ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var options = *(FormatOptions*)&formatOptionsRaw;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_0 = (*(FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84*)((uintptr_t)(&___4_formatOptionsRaw)));
		V_0 = L_0;
		// ConvertUnsignedIntegerToString(dest, ref destIndex, destLength, value, options);
		uint8_t* L_1 = ___0_dest;
		int32_t* L_2 = ___1_destIndex;
		int32_t L_3 = ___2_destLength;
		uint32_t L_4 = ___3_value;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_ConvertUnsignedIntegerToString_mE3D0034223E80A9185BE378CE7E0833972B1CA33(L_1, L_2, L_3, ((int64_t)(uint64_t)L_4), L_5, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::Format(System.Byte*,System.Int32&,System.Int32,System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_m206A288B53D79DF5ACDD39B3F3A9A79AC1CF3844 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, uint64_t ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var options = *(FormatOptions*)&formatOptionsRaw;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_0 = (*(FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84*)((uintptr_t)(&___4_formatOptionsRaw)));
		V_0 = L_0;
		// ConvertUnsignedIntegerToString(dest, ref destIndex, destLength, value, options);
		uint8_t* L_1 = ___0_dest;
		int32_t* L_2 = ___1_destIndex;
		int32_t L_3 = ___2_destLength;
		uint64_t L_4 = ___3_value;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_ConvertUnsignedIntegerToString_mE3D0034223E80A9185BE378CE7E0833972B1CA33(L_1, L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::Format(System.Byte*,System.Int32&,System.Int32,System.SByte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_m23EDDB41EF95146DB17FED537050D7AC3A6901B6 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, int8_t ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var options = *(FormatOptions*)&formatOptionsRaw;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_0 = (*(FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84*)((uintptr_t)(&___4_formatOptionsRaw)));
		V_0 = L_0;
		// if (options.Kind == NumberFormatKind.Hexadecimal)
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_1 = V_0;
		uint8_t L_2 = L_1.___Kind_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_001f;
		}
	}
	{
		// ConvertUnsignedIntegerToString(dest, ref destIndex, destLength, (byte)value, options);
		uint8_t* L_3 = ___0_dest;
		int32_t* L_4 = ___1_destIndex;
		int32_t L_5 = ___2_destLength;
		int8_t L_6 = ___3_value;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_ConvertUnsignedIntegerToString_mE3D0034223E80A9185BE378CE7E0833972B1CA33(L_3, L_4, L_5, ((int64_t)(uint64_t)((uint32_t)((int32_t)(uint8_t)L_6))), L_7, NULL);
		return;
	}

IL_001f:
	{
		// ConvertIntegerToString(dest, ref destIndex, destLength, value, options);
		uint8_t* L_8 = ___0_dest;
		int32_t* L_9 = ___1_destIndex;
		int32_t L_10 = ___2_destLength;
		int8_t L_11 = ___3_value;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_ConvertIntegerToString_mA7D50BDF32DDABA6FC2C6CB1E5FF995C80A1C7F8(L_8, L_9, L_10, ((int64_t)L_11), L_12, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::Format(System.Byte*,System.Int32&,System.Int32,System.Int16,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_m4F5213B5469A6BDEEAB4B678F771A6F32CB952E7 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, int16_t ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var options = *(FormatOptions*)&formatOptionsRaw;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_0 = (*(FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84*)((uintptr_t)(&___4_formatOptionsRaw)));
		V_0 = L_0;
		// if (options.Kind == NumberFormatKind.Hexadecimal)
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_1 = V_0;
		uint8_t L_2 = L_1.___Kind_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_001f;
		}
	}
	{
		// ConvertUnsignedIntegerToString(dest, ref destIndex, destLength, (ushort)value, options);
		uint8_t* L_3 = ___0_dest;
		int32_t* L_4 = ___1_destIndex;
		int32_t L_5 = ___2_destLength;
		int16_t L_6 = ___3_value;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_ConvertUnsignedIntegerToString_mE3D0034223E80A9185BE378CE7E0833972B1CA33(L_3, L_4, L_5, ((int64_t)(uint64_t)((uint32_t)((int32_t)(uint16_t)L_6))), L_7, NULL);
		return;
	}

IL_001f:
	{
		// ConvertIntegerToString(dest, ref destIndex, destLength, value, options);
		uint8_t* L_8 = ___0_dest;
		int32_t* L_9 = ___1_destIndex;
		int32_t L_10 = ___2_destLength;
		int16_t L_11 = ___3_value;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_ConvertIntegerToString_mA7D50BDF32DDABA6FC2C6CB1E5FF995C80A1C7F8(L_8, L_9, L_10, ((int64_t)L_11), L_12, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::Format(System.Byte*,System.Int32&,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_Format_m2B7D17E527F80FA75BBE1D5B8C58C3B929B6664D (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, int32_t ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var options = *(FormatOptions*)&formatOptionsRaw;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_0 = (*(FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84*)((uintptr_t)(&___4_formatOptionsRaw)));
		V_0 = L_0;
		// if (options.Kind == NumberFormatKind.Hexadecimal)
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_1 = V_0;
		uint8_t L_2 = L_1.___Kind_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_001e;
		}
	}
	{
		// ConvertUnsignedIntegerToString(dest, ref destIndex, destLength, (uint)value, options);
		uint8_t* L_3 = ___0_dest;
		int32_t* L_4 = ___1_destIndex;
		int32_t L_5 = ___2_destLength;
		int32_t L_6 = ___3_value;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_ConvertUnsignedIntegerToString_mE3D0034223E80A9185BE378CE7E0833972B1CA33(L_3, L_4, L_5, ((int64_t)(uint64_t)((uint32_t)L_6)), L_7, NULL);
		return;
	}

IL_001e:
	{
		// ConvertIntegerToString(dest, ref destIndex, destLength, value, options);
		uint8_t* L_8 = ___0_dest;
		int32_t* L_9 = ___1_destIndex;
		int32_t L_10 = ___2_destLength;
		int32_t L_11 = ___3_value;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_ConvertIntegerToString_mA7D50BDF32DDABA6FC2C6CB1E5FF995C80A1C7F8(L_8, L_9, L_10, ((int64_t)L_11), L_12, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::Format(System.Byte*,System.Int32&,System.Int32,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_mEB0F69187C05D4543A5FF23A4E8E7A8DC27745A5 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, int64_t ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var options = *(FormatOptions*)&formatOptionsRaw;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_0 = (*(FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84*)((uintptr_t)(&___4_formatOptionsRaw)));
		V_0 = L_0;
		// if (options.Kind == NumberFormatKind.Hexadecimal)
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_1 = V_0;
		uint8_t L_2 = L_1.___Kind_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_001d;
		}
	}
	{
		// ConvertUnsignedIntegerToString(dest, ref destIndex, destLength, (ulong)value, options);
		uint8_t* L_3 = ___0_dest;
		int32_t* L_4 = ___1_destIndex;
		int32_t L_5 = ___2_destLength;
		int64_t L_6 = ___3_value;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_ConvertUnsignedIntegerToString_mE3D0034223E80A9185BE378CE7E0833972B1CA33(L_3, L_4, L_5, L_6, L_7, NULL);
		return;
	}

IL_001d:
	{
		// ConvertIntegerToString(dest, ref destIndex, destLength, value, options);
		uint8_t* L_8 = ___0_dest;
		int32_t* L_9 = ___1_destIndex;
		int32_t L_10 = ___2_destLength;
		int64_t L_11 = ___3_value;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_ConvertIntegerToString_mA7D50BDF32DDABA6FC2C6CB1E5FF995C80A1C7F8(L_8, L_9, L_10, L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::ConvertUnsignedIntegerToString(System.Byte*,System.Int32&,System.Int32,System.UInt64,Unity.Burst.BurstString/FormatOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_ConvertUnsignedIntegerToString_mE3D0034223E80A9185BE378CE7E0833972B1CA33 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, uint64_t ___3_value, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 ___4_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t* V_4 = NULL;
	NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var basis = (uint)options.GetBase();
		int32_t L_0;
		L_0 = FormatOptions_GetBase_m0466B18B4E020F258E2402BE194FB8D670B2C789((&___4_options), NULL);
		V_0 = L_0;
		// if (basis < 2 || basis > 36) return;
		uint32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) >= ((uint32_t)2))))
		{
			goto IL_0011;
		}
	}
	{
		uint32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)36)))))
		{
			goto IL_0012;
		}
	}

IL_0011:
	{
		// if (basis < 2 || basis > 36) return;
		return;
	}

IL_0012:
	{
		// int length = 0;
		V_1 = 0;
		// var tmp = value;
		uint64_t L_3 = ___3_value;
		V_2 = L_3;
	}

IL_0016:
	{
		// tmp /= basis;
		uint64_t L_4 = V_2;
		uint32_t L_5 = V_0;
		V_2 = ((int64_t)((uint64_t)(int64_t)L_4/(uint64_t)(int64_t)((int64_t)(uint64_t)L_5)));
		// length++;
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// } while (tmp != 0);
		uint64_t L_7 = V_2;
		if (L_7)
		{
			goto IL_0016;
		}
	}
	{
		// int tmpIndex = length - 1;
		int32_t L_8 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		// byte* tmpBuffer = stackalloc byte[length + 1];
		int32_t L_9 = V_1;
		uintptr_t L_10 = ((uintptr_t)((int32_t)il2cpp_codegen_add(L_9, 1)));
		int8_t* L_11 = (int8_t*) (L_10 ? alloca(L_10) : NULL);
		memset(L_11, 0, L_10);
		V_4 = (uint8_t*)(L_11);
		// tmp = value;
		uint64_t L_12 = ___3_value;
		V_2 = L_12;
	}

IL_0030:
	{
		// tmpBuffer[tmpIndex--] = ValueToIntegerChar((int)(tmp % basis), options.Uppercase);
		uint8_t* L_13 = V_4;
		int32_t L_14 = V_3;
		int32_t L_15 = L_14;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		uint64_t L_16 = V_2;
		uint32_t L_17 = V_0;
		bool L_18;
		L_18 = FormatOptions_get_Uppercase_mE85E979D733EB67187AC1BCEB045508A0EF005C3((&___4_options), NULL);
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		uint8_t L_19;
		L_19 = BurstString_ValueToIntegerChar_mC277F5B4A56CD3A028AB49004C97B878D2AE1313(((int32_t)((int64_t)((uint64_t)(int64_t)L_16%(uint64_t)(int64_t)((int64_t)(uint64_t)L_17)))), L_18, NULL);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_15))) = (int8_t)L_19;
		// tmp /= basis;
		uint64_t L_20 = V_2;
		uint32_t L_21 = V_0;
		V_2 = ((int64_t)((uint64_t)(int64_t)L_20/(uint64_t)(int64_t)((int64_t)(uint64_t)L_21)));
		// } while (tmp != 0);
		uint64_t L_22 = V_2;
		if (L_22)
		{
			goto IL_0030;
		}
	}
	{
		// tmpBuffer[length] = 0;
		uint8_t* L_23 = V_4;
		int32_t L_24 = V_1;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_23, L_24))) = (int8_t)0;
		// var numberBuffer = new NumberBuffer(NumberBufferKind.Integer, tmpBuffer, length, length, false);
		uint8_t* L_25 = V_4;
		int32_t L_26 = V_1;
		int32_t L_27 = V_1;
		NumberBuffer__ctor_m1A0D288DFB6432947BB55759502F97BA25348141((&V_5), 0, L_25, L_26, L_27, (bool)0, NULL);
		// FormatNumber(dest, ref destIndex, destLength, ref numberBuffer, options.Specifier, options);
		uint8_t* L_28 = ___0_dest;
		int32_t* L_29 = ___1_destIndex;
		int32_t L_30 = ___2_destLength;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_31 = ___4_options;
		uint8_t L_32 = L_31.___Specifier_2;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_33 = ___4_options;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_FormatNumber_m84AA91726082A3F72562B6B579F3D030D6D3C673(L_28, L_29, L_30, (&V_5), L_32, L_33, NULL);
		// }
		return;
	}
}
// System.Int32 Unity.Burst.BurstString::GetLengthIntegerToString(System.Int64,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstString_GetLengthIntegerToString_m7C848D6F1F8062C53DDBCF15BC3C48492B1D6772 (int64_t ___0_value, int32_t ___1_basis, int32_t ___2_zeroPadding, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		// int length = 0;
		V_0 = 0;
		// var tmp = value;
		int64_t L_0 = ___0_value;
		V_1 = L_0;
	}

IL_0004:
	{
		// tmp /= basis;
		int64_t L_1 = V_1;
		int32_t L_2 = ___1_basis;
		V_1 = ((int64_t)(L_1/((int64_t)L_2)));
		// length++;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// } while (tmp != 0);
		int64_t L_4 = V_1;
		if (L_4)
		{
			goto IL_0004;
		}
	}
	{
		// if (length < zeroPadding)
		int32_t L_5 = V_0;
		int32_t L_6 = ___2_zeroPadding;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0016;
		}
	}
	{
		// length = zeroPadding;
		int32_t L_7 = ___2_zeroPadding;
		V_0 = L_7;
	}

IL_0016:
	{
		// if (value < 0) length++;
		int64_t L_8 = ___0_value;
		if ((((int64_t)L_8) >= ((int64_t)((int64_t)0))))
		{
			goto IL_001f;
		}
	}
	{
		// if (value < 0) length++;
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001f:
	{
		// return length;
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Void Unity.Burst.BurstString::ConvertIntegerToString(System.Byte*,System.Int32&,System.Int32,System.Int64,Unity.Burst.BurstString/FormatOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_ConvertIntegerToString_mA7D50BDF32DDABA6FC2C6CB1E5FF995C80A1C7F8 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, int64_t ___3_value, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 ___4_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	int32_t V_4 = 0;
	NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var basis = options.GetBase();
		int32_t L_0;
		L_0 = FormatOptions_GetBase_m0466B18B4E020F258E2402BE194FB8D670B2C789((&___4_options), NULL);
		V_0 = L_0;
		// if (basis < 2 || basis > 36) return;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)2)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)36))))
		{
			goto IL_0012;
		}
	}

IL_0011:
	{
		// if (basis < 2 || basis > 36) return;
		return;
	}

IL_0012:
	{
		// int length = 0;
		V_1 = 0;
		// var tmp = value;
		int64_t L_3 = ___3_value;
		V_2 = L_3;
	}

IL_0016:
	{
		// tmp /= basis;
		int64_t L_4 = V_2;
		int32_t L_5 = V_0;
		V_2 = ((int64_t)(L_4/((int64_t)L_5)));
		// length++;
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// } while (tmp != 0);
		int64_t L_7 = V_2;
		if (L_7)
		{
			goto IL_0016;
		}
	}
	{
		// byte* tmpBuffer = stackalloc byte[length + 1];
		int32_t L_8 = V_1;
		uintptr_t L_9 = ((uintptr_t)((int32_t)il2cpp_codegen_add(L_8, 1)));
		int8_t* L_10 = (int8_t*) (L_9 ? alloca(L_9) : NULL);
		memset(L_10, 0, L_9);
		V_3 = (uint8_t*)(L_10);
		// tmp = value;
		int64_t L_11 = ___3_value;
		V_2 = L_11;
		// int tmpIndex = length - 1;
		int32_t L_12 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0030:
	{
		// tmpBuffer[tmpIndex--] = ValueToIntegerChar((int)(tmp % basis), options.Uppercase);
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_4;
		int32_t L_15 = L_14;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		int64_t L_16 = V_2;
		int32_t L_17 = V_0;
		bool L_18;
		L_18 = FormatOptions_get_Uppercase_mE85E979D733EB67187AC1BCEB045508A0EF005C3((&___4_options), NULL);
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		uint8_t L_19;
		L_19 = BurstString_ValueToIntegerChar_mC277F5B4A56CD3A028AB49004C97B878D2AE1313(((int32_t)((int64_t)(L_16%((int64_t)L_17)))), L_18, NULL);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_15))) = (int8_t)L_19;
		// tmp /= basis;
		int64_t L_20 = V_2;
		int32_t L_21 = V_0;
		V_2 = ((int64_t)(L_20/((int64_t)L_21)));
		// } while (tmp != 0);
		int64_t L_22 = V_2;
		if (L_22)
		{
			goto IL_0030;
		}
	}
	{
		// tmpBuffer[length] = 0;
		uint8_t* L_23 = V_3;
		int32_t L_24 = V_1;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_23, L_24))) = (int8_t)0;
		// var numberBuffer = new NumberBuffer(NumberBufferKind.Integer, tmpBuffer, length, length, value < 0);
		uint8_t* L_25 = V_3;
		int32_t L_26 = V_1;
		int32_t L_27 = V_1;
		int64_t L_28 = ___3_value;
		NumberBuffer__ctor_m1A0D288DFB6432947BB55759502F97BA25348141((&V_5), 0, L_25, L_26, L_27, (bool)((((int64_t)L_28) < ((int64_t)((int64_t)0)))? 1 : 0), NULL);
		// FormatNumber(dest, ref destIndex, destLength, ref numberBuffer, options.Specifier, options);
		uint8_t* L_29 = ___0_dest;
		int32_t* L_30 = ___1_destIndex;
		int32_t L_31 = ___2_destLength;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_32 = ___4_options;
		uint8_t L_33 = L_32.___Specifier_2;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_34 = ___4_options;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_FormatNumber_m84AA91726082A3F72562B6B579F3D030D6D3C673(L_29, L_30, L_31, (&V_5), L_33, L_34, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::FormatNumber(System.Byte*,System.Int32&,System.Int32,Unity.Burst.BurstString/NumberBuffer&,System.Int32,Unity.Burst.BurstString/FormatOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_FormatNumber_m84AA91726082A3F72562B6B579F3D030D6D3C673 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* ___3_number, int32_t ___4_nMaxDigits, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 ___5_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	uint8_t V_5 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B20_0 = 0;
	NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* G_B20_1 = NULL;
	int32_t G_B20_2 = 0;
	int32_t* G_B20_3 = NULL;
	uint8_t* G_B20_4 = NULL;
	int32_t G_B19_0 = 0;
	NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* G_B19_1 = NULL;
	int32_t G_B19_2 = 0;
	int32_t* G_B19_3 = NULL;
	uint8_t* G_B19_4 = NULL;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* G_B21_2 = NULL;
	int32_t G_B21_3 = 0;
	int32_t* G_B21_4 = NULL;
	uint8_t* G_B21_5 = NULL;
	{
		// bool isCorrectlyRounded = (number.Kind == NumberBufferKind.Float);
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_0 = ___3_number;
		int32_t L_1 = L_0->___Kind_1;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		// if (number.Kind == NumberBufferKind.Integer && options.Kind == NumberFormatKind.General && options.Specifier == 0)
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_2 = ___3_number;
		int32_t L_3 = L_2->___Kind_1;
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_4 = ___5_options;
		uint8_t L_5 = L_4.___Kind_0;
		if (L_5)
		{
			goto IL_002c;
		}
	}
	{
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_6 = ___5_options;
		uint8_t L_7 = L_6.___Specifier_2;
		if (L_7)
		{
			goto IL_002c;
		}
	}
	{
		// options.Kind = NumberFormatKind.Decimal;
		(&___5_options)->___Kind_0 = 1;
	}

IL_002c:
	{
		// switch (options.Kind)
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_8 = ___5_options;
		uint8_t L_9 = L_8.___Kind_0;
		V_5 = L_9;
		uint8_t L_10 = V_5;
		if (!L_10)
		{
			goto IL_00aa;
		}
	}
	{
		uint8_t L_11 = V_5;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, 1))) <= ((uint32_t)2))))
		{
			goto IL_00aa;
		}
	}
	{
		// length = number.DigitsCount;
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_12 = ___3_number;
		int32_t L_13 = L_12->___DigitsCount_2;
		V_1 = L_13;
		// var zeroPadding = (int)options.Specifier;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_14 = ___5_options;
		uint8_t L_15 = L_14.___Specifier_2;
		V_2 = L_15;
		// int actualZeroPadding = 0;
		V_3 = 0;
		// if (length < zeroPadding)
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_005b;
		}
	}
	{
		// actualZeroPadding = zeroPadding - length;
		int32_t L_18 = V_2;
		int32_t L_19 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_18, L_19));
		// length = zeroPadding;
		int32_t L_20 = V_2;
		V_1 = L_20;
	}

IL_005b:
	{
		// bool outputPositiveSign = options.Kind == NumberFormatKind.DecimalForceSigned;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_21 = ___5_options;
		uint8_t L_22 = L_21.___Kind_0;
		V_4 = (bool)((((int32_t)L_22) == ((int32_t)2))? 1 : 0);
		// length += number.IsNegative || outputPositiveSign ? 1 : 0;
		int32_t L_23 = V_1;
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_24 = ___3_number;
		bool L_25 = L_24->___IsNegative_4;
		bool L_26 = V_4;
		G_B9_0 = L_23;
		if (((int32_t)((int32_t)L_25|(int32_t)L_26)))
		{
			G_B10_0 = L_23;
			goto IL_0076;
		}
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		goto IL_0077;
	}

IL_0076:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
	}

IL_0077:
	{
		V_1 = ((int32_t)il2cpp_codegen_add(G_B11_1, G_B11_0));
		// if (AlignLeft(dest, ref destIndex, destLength, options.AlignAndSize, length)) return;
		uint8_t* L_27 = ___0_dest;
		int32_t* L_28 = ___1_destIndex;
		int32_t L_29 = ___2_destLength;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_30 = ___5_options;
		int8_t L_31 = L_30.___AlignAndSize_1;
		int32_t L_32 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = BurstString_AlignLeft_mE09478055A126F1675FF9C15B6572186785585D0(L_27, L_28, L_29, L_31, L_32, NULL);
		if (!L_33)
		{
			goto IL_008c;
		}
	}
	{
		// if (AlignLeft(dest, ref destIndex, destLength, options.AlignAndSize, length)) return;
		return;
	}

IL_008c:
	{
		// FormatDecimalOrHexadecimal(dest, ref destIndex, destLength, ref number, actualZeroPadding, outputPositiveSign);
		uint8_t* L_34 = ___0_dest;
		int32_t* L_35 = ___1_destIndex;
		int32_t L_36 = ___2_destLength;
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_37 = ___3_number;
		int32_t L_38 = V_3;
		bool L_39 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_FormatDecimalOrHexadecimal_mA06BC7EC5DFAC150C462EBDD98CC067917E468AF(L_34, L_35, L_36, L_37, L_38, L_39, NULL);
		// AlignRight(dest, ref destIndex, destLength, options.AlignAndSize, length);
		uint8_t* L_40 = ___0_dest;
		int32_t* L_41 = ___1_destIndex;
		int32_t L_42 = ___2_destLength;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_43 = ___5_options;
		int8_t L_44 = L_43.___AlignAndSize_1;
		int32_t L_45 = V_1;
		bool L_46;
		L_46 = BurstString_AlignRight_m42725CF76779C09A0664D895DA590CEB4E1A8A37(L_40, L_41, L_42, L_44, L_45, NULL);
		// break;
		return;
	}

IL_00aa:
	{
		// if (nMaxDigits < 1)
		int32_t L_47 = ___4_nMaxDigits;
		if ((((int32_t)L_47) >= ((int32_t)1)))
		{
			goto IL_00b7;
		}
	}
	{
		// nMaxDigits = number.DigitsCount;
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_48 = ___3_number;
		int32_t L_49 = L_48->___DigitsCount_2;
		___4_nMaxDigits = L_49;
	}

IL_00b7:
	{
		// RoundNumber(ref number, nMaxDigits, isCorrectlyRounded);
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_50 = ___3_number;
		int32_t L_51 = ___4_nMaxDigits;
		bool L_52 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_RoundNumber_m524D9772E74FA38A0C43453F17AB2C7BAAB004E4(L_50, L_51, L_52, NULL);
		// length = GetLengthForFormatGeneral(ref number, nMaxDigits);
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_53 = ___3_number;
		int32_t L_54 = ___4_nMaxDigits;
		int32_t L_55;
		L_55 = BurstString_GetLengthForFormatGeneral_m8C803B634ACAA22001B49BEFBB5AB9CE7BD69766(L_53, L_54, NULL);
		V_1 = L_55;
		// if (AlignLeft(dest, ref destIndex, destLength, options.AlignAndSize, length)) return;
		uint8_t* L_56 = ___0_dest;
		int32_t* L_57 = ___1_destIndex;
		int32_t L_58 = ___2_destLength;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_59 = ___5_options;
		int8_t L_60 = L_59.___AlignAndSize_1;
		int32_t L_61 = V_1;
		bool L_62;
		L_62 = BurstString_AlignLeft_mE09478055A126F1675FF9C15B6572186785585D0(L_56, L_57, L_58, L_60, L_61, NULL);
		if (!L_62)
		{
			goto IL_00dc;
		}
	}
	{
		// if (AlignLeft(dest, ref destIndex, destLength, options.AlignAndSize, length)) return;
		return;
	}

IL_00dc:
	{
		// FormatGeneral(dest, ref destIndex, destLength, ref number, nMaxDigits, options.Uppercase ? (byte)'E' : (byte)'e');
		uint8_t* L_63 = ___0_dest;
		int32_t* L_64 = ___1_destIndex;
		int32_t L_65 = ___2_destLength;
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_66 = ___3_number;
		int32_t L_67 = ___4_nMaxDigits;
		bool L_68;
		L_68 = FormatOptions_get_Uppercase_mE85E979D733EB67187AC1BCEB045508A0EF005C3((&___5_options), NULL);
		G_B19_0 = L_67;
		G_B19_1 = L_66;
		G_B19_2 = L_65;
		G_B19_3 = L_64;
		G_B19_4 = L_63;
		if (L_68)
		{
			G_B20_0 = L_67;
			G_B20_1 = L_66;
			G_B20_2 = L_65;
			G_B20_3 = L_64;
			G_B20_4 = L_63;
			goto IL_00ef;
		}
	}
	{
		G_B21_0 = ((int32_t)101);
		G_B21_1 = G_B19_0;
		G_B21_2 = G_B19_1;
		G_B21_3 = G_B19_2;
		G_B21_4 = G_B19_3;
		G_B21_5 = G_B19_4;
		goto IL_00f1;
	}

IL_00ef:
	{
		G_B21_0 = ((int32_t)69);
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
		G_B21_3 = G_B20_2;
		G_B21_4 = G_B20_3;
		G_B21_5 = G_B20_4;
	}

IL_00f1:
	{
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_FormatGeneral_m6BD2A28E369BBBF4444ED8D8A71EA6641A7DBCD1(G_B21_5, G_B21_4, G_B21_3, G_B21_2, G_B21_1, (uint8_t)G_B21_0, NULL);
		// AlignRight(dest, ref destIndex, destLength, options.AlignAndSize, length);
		uint8_t* L_69 = ___0_dest;
		int32_t* L_70 = ___1_destIndex;
		int32_t L_71 = ___2_destLength;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_72 = ___5_options;
		int8_t L_73 = L_72.___AlignAndSize_1;
		int32_t L_74 = V_1;
		bool L_75;
		L_75 = BurstString_AlignRight_m42725CF76779C09A0664D895DA590CEB4E1A8A37(L_69, L_70, L_71, L_73, L_74, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::FormatDecimalOrHexadecimal(System.Byte*,System.Int32&,System.Int32,Unity.Burst.BurstString/NumberBuffer&,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_FormatDecimalOrHexadecimal_mA06BC7EC5DFAC150C462EBDD98CC067917E468AF (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* ___3_number, int32_t ___4_zeroPadding, bool ___5_outputPositiveSign, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// if (number.IsNegative)
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_0 = ___3_number;
		bool L_1 = L_0->___IsNegative_4;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// if (destIndex >= destLength) return;
		int32_t* L_2 = ___1_destIndex;
		int32_t L_3 = *((int32_t*)L_2);
		int32_t L_4 = ___2_destLength;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_000e;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_000e:
	{
		// dest[destIndex++] = (byte)'-';
		uint8_t* L_5 = ___0_dest;
		int32_t* L_6 = ___1_destIndex;
		int32_t* L_7 = ___1_destIndex;
		int32_t L_8 = *((int32_t*)L_7);
		V_2 = L_8;
		int32_t L_9 = V_2;
		*((int32_t*)L_6) = (int32_t)((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_2;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_10))) = (int8_t)((int32_t)45);
		goto IL_0036;
	}

IL_001e:
	{
		// else if (outputPositiveSign)
		bool L_11 = ___5_outputPositiveSign;
		if (!L_11)
		{
			goto IL_0036;
		}
	}
	{
		// if (destIndex >= destLength) return;
		int32_t* L_12 = ___1_destIndex;
		int32_t L_13 = *((int32_t*)L_12);
		int32_t L_14 = ___2_destLength;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0028;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_0028:
	{
		// dest[destIndex++] = (byte)'+';
		uint8_t* L_15 = ___0_dest;
		int32_t* L_16 = ___1_destIndex;
		int32_t* L_17 = ___1_destIndex;
		int32_t L_18 = *((int32_t*)L_17);
		V_2 = L_18;
		int32_t L_19 = V_2;
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_2;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_20))) = (int8_t)((int32_t)43);
	}

IL_0036:
	{
		// for (int i = 0; i < zeroPadding; i++)
		V_3 = 0;
		goto IL_0052;
	}

IL_003a:
	{
		// if (destIndex >= destLength) return;
		int32_t* L_21 = ___1_destIndex;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = ___2_destLength;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0040;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_0040:
	{
		// dest[destIndex++] = (byte)'0';
		uint8_t* L_24 = ___0_dest;
		int32_t* L_25 = ___1_destIndex;
		int32_t* L_26 = ___1_destIndex;
		int32_t L_27 = *((int32_t*)L_26);
		V_2 = L_27;
		int32_t L_28 = V_2;
		*((int32_t*)L_25) = (int32_t)((int32_t)il2cpp_codegen_add(L_28, 1));
		int32_t L_29 = V_2;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_24, L_29))) = (int8_t)((int32_t)48);
		// for (int i = 0; i < zeroPadding; i++)
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0052:
	{
		// for (int i = 0; i < zeroPadding; i++)
		int32_t L_31 = V_3;
		int32_t L_32 = ___4_zeroPadding;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_003a;
		}
	}
	{
		// var digitCount = number.DigitsCount;
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_33 = ___3_number;
		int32_t L_34 = L_33->___DigitsCount_2;
		V_0 = L_34;
		// byte* digits = number.GetDigitsPointer();
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_35 = ___3_number;
		uint8_t* L_36;
		L_36 = NumberBuffer_GetDigitsPointer_m877C617CEE264BE12DE38D7289D741ED39B99846_inline(L_35, NULL);
		V_1 = L_36;
		// for (int i = 0; i < digitCount; i++)
		V_4 = 0;
		goto IL_0087;
	}

IL_006a:
	{
		// if (destIndex >= destLength) return;
		int32_t* L_37 = ___1_destIndex;
		int32_t L_38 = *((int32_t*)L_37);
		int32_t L_39 = ___2_destLength;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0070;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_0070:
	{
		// dest[destIndex++] = digits[i];
		uint8_t* L_40 = ___0_dest;
		int32_t* L_41 = ___1_destIndex;
		int32_t* L_42 = ___1_destIndex;
		int32_t L_43 = *((int32_t*)L_42);
		V_2 = L_43;
		int32_t L_44 = V_2;
		*((int32_t*)L_41) = (int32_t)((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = V_2;
		uint8_t* L_46 = V_1;
		int32_t L_47 = V_4;
		int32_t L_48 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_46, L_47)));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_40, L_45))) = (int8_t)L_48;
		// for (int i = 0; i < digitCount; i++)
		int32_t L_49 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0087:
	{
		// for (int i = 0; i < digitCount; i++)
		int32_t L_50 = V_4;
		int32_t L_51 = V_0;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_006a;
		}
	}
	{
		// }
		return;
	}
}
// System.Byte Unity.Burst.BurstString::ValueToIntegerChar(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BurstString_ValueToIntegerChar_mC277F5B4A56CD3A028AB49004C97B878D2AE1313 (int32_t ___0_value, bool ___1_uppercase, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	{
		// value = value < 0 ? -value : value;
		int32_t L_0 = ___0_value;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_1 = ___0_value;
		G_B3_0 = L_1;
		goto IL_0009;
	}

IL_0007:
	{
		int32_t L_2 = ___0_value;
		G_B3_0 = ((-L_2));
	}

IL_0009:
	{
		___0_value = G_B3_0;
		// if (value <= 9)
		int32_t L_3 = ___0_value;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)9))))
		{
			goto IL_0016;
		}
	}
	{
		// return (byte)('0' + value);
		int32_t L_4 = ___0_value;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)48), L_4)));
	}

IL_0016:
	{
		// if (value < 36)
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)36))))
		{
			goto IL_002b;
		}
	}
	{
		// return (byte)((uppercase ? 'A' : 'a') + (value - 10));
		bool L_6 = ___1_uppercase;
		if (L_6)
		{
			goto IL_0022;
		}
	}
	{
		G_B9_0 = ((int32_t)97);
		goto IL_0024;
	}

IL_0022:
	{
		G_B9_0 = ((int32_t)65);
	}

IL_0024:
	{
		int32_t L_7 = ___0_value;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(G_B9_0, ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)10))))));
	}

IL_002b:
	{
		// return (byte)'?';
		return (uint8_t)((int32_t)63);
	}
}
// System.Boolean Unity.Burst.BurstString::AlignRight(System.Byte*,System.Int32&,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstString_AlignRight_m42725CF76779C09A0664D895DA590CEB4E1A8A37 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, int32_t ___3_align, int32_t ___4_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (align < 0)
		int32_t L_0 = ___3_align;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		// align = -align;
		int32_t L_1 = ___3_align;
		___3_align = ((-L_1));
		// return AlignLeft(dest, ref destIndex, destLength, align, length);
		uint8_t* L_2 = ___0_dest;
		int32_t* L_3 = ___1_destIndex;
		int32_t L_4 = ___2_destLength;
		int32_t L_5 = ___3_align;
		int32_t L_6 = ___4_length;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = BurstString_AlignLeft_mE09478055A126F1675FF9C15B6572186785585D0(L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}

IL_0014:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Burst.BurstString::AlignLeft(System.Byte*,System.Int32&,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstString_AlignLeft_mE09478055A126F1675FF9C15B6572186785585D0 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, int32_t ___3_align, int32_t ___4_length, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (align > 0)
		int32_t L_0 = ___3_align;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0021;
	}

IL_0006:
	{
		// if (destIndex >= destLength) return true;
		int32_t* L_1 = ___1_destIndex;
		int32_t L_2 = *((int32_t*)L_1);
		int32_t L_3 = ___2_destLength;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_000d;
		}
	}
	{
		// if (destIndex >= destLength) return true;
		return (bool)1;
	}

IL_000d:
	{
		// dest[destIndex++] = (byte)' ';
		uint8_t* L_4 = ___0_dest;
		int32_t* L_5 = ___1_destIndex;
		int32_t* L_6 = ___1_destIndex;
		int32_t L_7 = *((int32_t*)L_6);
		V_0 = L_7;
		int32_t L_8 = V_0;
		*((int32_t*)L_5) = (int32_t)((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_9))) = (int8_t)((int32_t)32);
		// length++;
		int32_t L_10 = ___4_length;
		___4_length = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0021:
	{
		// while (length < align)
		int32_t L_11 = ___4_length;
		int32_t L_12 = ___3_align;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0006;
		}
	}

IL_0026:
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 Unity.Burst.BurstString::GetLengthForFormatGeneral(Unity.Burst.BurstString/NumberBuffer&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstString_GetLengthForFormatGeneral_m8C803B634ACAA22001B49BEFBB5AB9CE7BD69766 (NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* ___0_number, int32_t ___1_nMaxDigits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	uint8_t* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// int length = 0;
		V_0 = 0;
		// int scale = number.Scale;
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_0 = ___0_number;
		int32_t L_1 = L_0->___Scale_3;
		// int digPos = scale;
		V_1 = L_1;
		// bool scientific = false;
		V_2 = (bool)0;
		// if (digPos > nMaxDigits || digPos < -3)
		int32_t L_2 = V_1;
		int32_t L_3 = ___1_nMaxDigits;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)-3))))
		{
			goto IL_0018;
		}
	}

IL_0014:
	{
		// digPos = 1;
		V_1 = 1;
		// scientific = true;
		V_2 = (bool)1;
	}

IL_0018:
	{
		// byte* dig = number.GetDigitsPointer();
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_5 = ___0_number;
		uint8_t* L_6;
		L_6 = NumberBuffer_GetDigitsPointer_m877C617CEE264BE12DE38D7289D741ED39B99846_inline(L_5, NULL);
		V_3 = L_6;
		// if (number.IsNegative)
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_7 = ___0_number;
		bool L_8 = L_7->___IsNegative_4;
		if (!L_8)
		{
			goto IL_002b;
		}
	}
	{
		// length++; // (byte)'-';
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002b:
	{
		// if (digPos > 0)
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}

IL_002f:
	{
		// if (*dig != 0)
		uint8_t* L_11 = V_3;
		int32_t L_12 = *((uint8_t*)L_11);
		if (!L_12)
		{
			goto IL_0037;
		}
	}
	{
		// dig++;
		uint8_t* L_13 = V_3;
		V_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, 1));
	}

IL_0037:
	{
		// length++;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		// } while (--digPos > 0);
		int32_t L_15 = V_1;
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		V_1 = L_16;
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		goto IL_0049;
	}

IL_0045:
	{
		// length++;
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0049:
	{
		// if (*dig != 0 || digPos < 0)
		uint8_t* L_18 = V_3;
		int32_t L_19 = *((uint8_t*)L_18);
		if (L_19)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0071;
		}
	}

IL_0051:
	{
		// length++; // (byte)'.';
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		goto IL_005f;
	}

IL_0057:
	{
		// length++; // (byte)'0';
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		// digPos++;
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_005f:
	{
		// while (digPos < 0)
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		goto IL_006d;
	}

IL_0065:
	{
		// length++; // *dig++;
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		// dig++;
		uint8_t* L_26 = V_3;
		V_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_26, 1));
	}

IL_006d:
	{
		// while (*dig != 0)
		uint8_t* L_27 = V_3;
		int32_t L_28 = *((uint8_t*)L_27);
		if (L_28)
		{
			goto IL_0065;
		}
	}

IL_0071:
	{
		// if (scientific)
		bool L_29 = V_2;
		if (!L_29)
		{
			goto IL_0099;
		}
	}
	{
		// length++; // e or E
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		// int exponent = number.Scale - 1;
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_31 = ___0_number;
		int32_t L_32 = L_31->___Scale_3;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		// if (exponent >= 0) length++;
		int32_t L_33 = V_4;
		if ((((int32_t)L_33) < ((int32_t)0)))
		{
			goto IL_008b;
		}
	}
	{
		// if (exponent >= 0) length++;
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_008b:
	{
		// length += GetLengthIntegerToString(exponent, 10, 2);
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		int32_t L_37;
		L_37 = BurstString_GetLengthIntegerToString_m7C848D6F1F8062C53DDBCF15BC3C48492B1D6772(((int64_t)L_36), ((int32_t)10), 2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_35, L_37));
	}

IL_0099:
	{
		// return length;
		int32_t L_38 = V_0;
		return L_38;
	}
}
// System.Void Unity.Burst.BurstString::FormatGeneral(System.Byte*,System.Int32&,System.Int32,Unity.Burst.BurstString/NumberBuffer&,System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_FormatGeneral_m6BD2A28E369BBBF4444ED8D8A71EA6641A7DBCD1 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* ___3_number, int32_t ___4_nMaxDigits, uint8_t ___5_expChar, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 V_5;
	memset((&V_5), 0, sizeof(V_5));
	uint8_t* G_B12_0 = NULL;
	uint8_t* G_B11_0 = NULL;
	int32_t G_B13_0 = 0;
	uint8_t* G_B13_1 = NULL;
	{
		// int scale = number.Scale;
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_0 = ___3_number;
		int32_t L_1 = L_0->___Scale_3;
		// int digPos = scale;
		V_0 = L_1;
		// bool scientific = false;
		V_1 = (bool)0;
		// if (digPos > nMaxDigits || digPos < -3)
		int32_t L_2 = V_0;
		int32_t L_3 = ___4_nMaxDigits;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)-3))))
		{
			goto IL_0017;
		}
	}

IL_0013:
	{
		// digPos = 1;
		V_0 = 1;
		// scientific = true;
		V_1 = (bool)1;
	}

IL_0017:
	{
		// byte* dig = number.GetDigitsPointer();
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_5 = ___3_number;
		uint8_t* L_6;
		L_6 = NumberBuffer_GetDigitsPointer_m877C617CEE264BE12DE38D7289D741ED39B99846_inline(L_5, NULL);
		V_2 = L_6;
		// if (number.IsNegative)
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_7 = ___3_number;
		bool L_8 = L_7->___IsNegative_4;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		// if (destIndex >= destLength) return;
		int32_t* L_9 = ___1_destIndex;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = ___2_destLength;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_002c;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_002c:
	{
		// dest[destIndex++] = (byte)'-';
		uint8_t* L_12 = ___0_dest;
		int32_t* L_13 = ___1_destIndex;
		int32_t* L_14 = ___1_destIndex;
		int32_t L_15 = *((int32_t*)L_14);
		V_3 = L_15;
		int32_t L_16 = V_3;
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = V_3;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, L_17))) = (int8_t)((int32_t)45);
	}

IL_003a:
	{
		// if (digPos > 0)
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}

IL_003e:
	{
		// if (destIndex >= destLength) return;
		int32_t* L_19 = ___1_destIndex;
		int32_t L_20 = *((int32_t*)L_19);
		int32_t L_21 = ___2_destLength;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0044;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_0044:
	{
		// dest[destIndex++] = (*dig != 0) ? (byte)(*dig++) : (byte)'0';
		uint8_t* L_22 = ___0_dest;
		int32_t* L_23 = ___1_destIndex;
		int32_t* L_24 = ___1_destIndex;
		int32_t L_25 = *((int32_t*)L_24);
		V_3 = L_25;
		int32_t L_26 = V_3;
		*((int32_t*)L_23) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1));
		int32_t L_27 = V_3;
		uint8_t* L_28 = V_2;
		int32_t L_29 = *((uint8_t*)L_28);
		G_B11_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_22, L_27));
		if (L_29)
		{
			G_B12_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_22, L_27));
			goto IL_0057;
		}
	}
	{
		G_B13_0 = ((int32_t)48);
		G_B13_1 = G_B11_0;
		goto IL_005d;
	}

IL_0057:
	{
		uint8_t* L_30 = V_2;
		uint8_t* L_31 = L_30;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_31, 1));
		int32_t L_32 = *((uint8_t*)L_31);
		G_B13_0 = L_32;
		G_B13_1 = G_B12_0;
	}

IL_005d:
	{
		*((int8_t*)G_B13_1) = (int8_t)G_B13_0;
		// } while (--digPos > 0);
		int32_t L_33 = V_0;
		int32_t L_34 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
		V_0 = L_34;
		if ((((int32_t)L_34) > ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		goto IL_007c;
	}

IL_0068:
	{
		// if (destIndex >= destLength) return;
		int32_t* L_35 = ___1_destIndex;
		int32_t L_36 = *((int32_t*)L_35);
		int32_t L_37 = ___2_destLength;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_006e;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_006e:
	{
		// dest[destIndex++] = (byte)'0';
		uint8_t* L_38 = ___0_dest;
		int32_t* L_39 = ___1_destIndex;
		int32_t* L_40 = ___1_destIndex;
		int32_t L_41 = *((int32_t*)L_40);
		V_3 = L_41;
		int32_t L_42 = V_3;
		*((int32_t*)L_39) = (int32_t)((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = V_3;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, L_43))) = (int8_t)((int32_t)48);
	}

IL_007c:
	{
		// if (*dig != 0 || digPos < 0)
		uint8_t* L_44 = V_2;
		int32_t L_45 = *((uint8_t*)L_44);
		if (L_45)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_46 = V_0;
		if ((((int32_t)L_46) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}

IL_0084:
	{
		// if (destIndex >= destLength) return;
		int32_t* L_47 = ___1_destIndex;
		int32_t L_48 = *((int32_t*)L_47);
		int32_t L_49 = ___2_destLength;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_008a;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_008a:
	{
		// dest[destIndex++] = (byte)'.';
		uint8_t* L_50 = ___0_dest;
		int32_t* L_51 = ___1_destIndex;
		int32_t* L_52 = ___1_destIndex;
		int32_t L_53 = *((int32_t*)L_52);
		V_3 = L_53;
		int32_t L_54 = V_3;
		*((int32_t*)L_51) = (int32_t)((int32_t)il2cpp_codegen_add(L_54, 1));
		int32_t L_55 = V_3;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_50, L_55))) = (int8_t)((int32_t)46);
		goto IL_00b2;
	}

IL_009a:
	{
		// if (destIndex >= destLength) return;
		int32_t* L_56 = ___1_destIndex;
		int32_t L_57 = *((int32_t*)L_56);
		int32_t L_58 = ___2_destLength;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_00a0;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_00a0:
	{
		// dest[destIndex++] = (byte)'0';
		uint8_t* L_59 = ___0_dest;
		int32_t* L_60 = ___1_destIndex;
		int32_t* L_61 = ___1_destIndex;
		int32_t L_62 = *((int32_t*)L_61);
		V_3 = L_62;
		int32_t L_63 = V_3;
		*((int32_t*)L_60) = (int32_t)((int32_t)il2cpp_codegen_add(L_63, 1));
		int32_t L_64 = V_3;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_59, L_64))) = (int8_t)((int32_t)48);
		// digPos++;
		int32_t L_65 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_00b2:
	{
		// while (digPos < 0)
		int32_t L_66 = V_0;
		if ((((int32_t)L_66) < ((int32_t)0)))
		{
			goto IL_009a;
		}
	}
	{
		goto IL_00d0;
	}

IL_00b8:
	{
		// if (destIndex >= destLength) return;
		int32_t* L_67 = ___1_destIndex;
		int32_t L_68 = *((int32_t*)L_67);
		int32_t L_69 = ___2_destLength;
		if ((((int32_t)L_68) < ((int32_t)L_69)))
		{
			goto IL_00be;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_00be:
	{
		// dest[destIndex++] = *dig++;
		uint8_t* L_70 = ___0_dest;
		int32_t* L_71 = ___1_destIndex;
		int32_t* L_72 = ___1_destIndex;
		int32_t L_73 = *((int32_t*)L_72);
		V_3 = L_73;
		int32_t L_74 = V_3;
		*((int32_t*)L_71) = (int32_t)((int32_t)il2cpp_codegen_add(L_74, 1));
		int32_t L_75 = V_3;
		uint8_t* L_76 = V_2;
		uint8_t* L_77 = L_76;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_77, 1));
		int32_t L_78 = *((uint8_t*)L_77);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_70, L_75))) = (int8_t)L_78;
	}

IL_00d0:
	{
		// while (*dig != 0)
		uint8_t* L_79 = V_2;
		int32_t L_80 = *((uint8_t*)L_79);
		if (L_80)
		{
			goto IL_00b8;
		}
	}

IL_00d4:
	{
		// if (scientific)
		bool L_81 = V_1;
		if (!L_81)
		{
			goto IL_010d;
		}
	}
	{
		// if (destIndex >= destLength) return;
		int32_t* L_82 = ___1_destIndex;
		int32_t L_83 = *((int32_t*)L_82);
		int32_t L_84 = ___2_destLength;
		if ((((int32_t)L_83) < ((int32_t)L_84)))
		{
			goto IL_00dd;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_00dd:
	{
		// dest[destIndex++] = expChar;
		uint8_t* L_85 = ___0_dest;
		int32_t* L_86 = ___1_destIndex;
		int32_t* L_87 = ___1_destIndex;
		int32_t L_88 = *((int32_t*)L_87);
		V_3 = L_88;
		int32_t L_89 = V_3;
		*((int32_t*)L_86) = (int32_t)((int32_t)il2cpp_codegen_add(L_89, 1));
		int32_t L_90 = V_3;
		uint8_t L_91 = ___5_expChar;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_85, L_90))) = (int8_t)L_91;
		// int exponent = number.Scale - 1;
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_92 = ___3_number;
		int32_t L_93 = L_92->___Scale_3;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		// var exponentFormatOptions = new FormatOptions(NumberFormatKind.DecimalForceSigned, 0, 2, false);
		FormatOptions__ctor_mCF1FCAD2F6EE383DC6A602CA1F82BD16852CC055((&V_5), 2, (int8_t)0, (uint8_t)2, (bool)0, NULL);
		// ConvertIntegerToString(dest, ref destIndex, destLength, exponent, exponentFormatOptions);
		uint8_t* L_94 = ___0_dest;
		int32_t* L_95 = ___1_destIndex;
		int32_t L_96 = ___2_destLength;
		int32_t L_97 = V_4;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_98 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_ConvertIntegerToString_mA7D50BDF32DDABA6FC2C6CB1E5FF995C80A1C7F8(L_94, L_95, L_96, ((int64_t)L_97), L_98, NULL);
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::RoundNumber(Unity.Burst.BurstString/NumberBuffer&,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_RoundNumber_m524D9772E74FA38A0C43453F17AB2C7BAAB004E4 (NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* ___0_number, int32_t ___1_pos, bool ___2_isCorrectlyRounded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// byte* dig = number.GetDigitsPointer();
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_0 = ___0_number;
		uint8_t* L_1;
		L_1 = NumberBuffer_GetDigitsPointer_m877C617CEE264BE12DE38D7289D741ED39B99846_inline(L_0, NULL);
		V_0 = L_1;
		// int i = 0;
		V_1 = 0;
		goto IL_000f;
	}

IL_000b:
	{
		// i++;
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_000f:
	{
		// while (i < pos && dig[i] != (byte)'\0')
		int32_t L_3 = V_1;
		int32_t L_4 = ___1_pos;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0019;
		}
	}
	{
		uint8_t* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)));
		if (L_7)
		{
			goto IL_000b;
		}
	}

IL_0019:
	{
		// if ((i == pos) && ShouldRoundUp(dig, i, isCorrectlyRounded))
		int32_t L_8 = V_1;
		int32_t L_9 = ___1_pos;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0063;
		}
	}
	{
		uint8_t* L_10 = V_0;
		int32_t L_11 = V_1;
		bool L_12 = ___2_isCorrectlyRounded;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = BurstString_ShouldRoundUp_m409E5BBC77EF196F3CCAC9B2AFF01225E2119464(L_10, L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0063;
		}
	}
	{
		goto IL_002d;
	}

IL_0029:
	{
		// i--;
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_002d:
	{
		// while (i > 0 && dig[i - 1] == (byte)'9')
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		uint8_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, ((int32_t)il2cpp_codegen_subtract(L_17, 1)))));
		if ((((int32_t)L_18) == ((int32_t)((int32_t)57))))
		{
			goto IL_0029;
		}
	}

IL_003b:
	{
		// if (i > 0)
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		// dig[i - 1]++;
		uint8_t* L_20 = V_0;
		int32_t L_21 = V_1;
		uint8_t* L_22 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, ((int32_t)il2cpp_codegen_subtract(L_21, 1))));
		int32_t L_23 = *((uint8_t*)L_22);
		*((int8_t*)L_22) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_23, 1)));
		goto IL_0071;
	}

IL_004c:
	{
		// number.Scale++;
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_24 = ___0_number;
		int32_t* L_25 = (int32_t*)(&L_24->___Scale_3);
		int32_t* L_26 = L_25;
		int32_t L_27 = *((int32_t*)L_26);
		*((int32_t*)L_26) = (int32_t)((int32_t)il2cpp_codegen_add(L_27, 1));
		// dig[0] = (byte)('1');
		uint8_t* L_28 = V_0;
		*((int8_t*)L_28) = (int8_t)((int32_t)49);
		// i = 1;
		V_1 = 1;
		goto IL_0071;
	}

IL_005f:
	{
		// i--;
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
	}

IL_0063:
	{
		// while (i > 0 && dig[i - 1] == (byte)'0')
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		uint8_t* L_31 = V_0;
		int32_t L_32 = V_1;
		int32_t L_33 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_31, ((int32_t)il2cpp_codegen_subtract(L_32, 1)))));
		if ((((int32_t)L_33) == ((int32_t)((int32_t)48))))
		{
			goto IL_005f;
		}
	}

IL_0071:
	{
		// if (i == 0)
		int32_t L_34 = V_1;
		if (L_34)
		{
			goto IL_007b;
		}
	}
	{
		// number.Scale = 0;      // Decimals with scale ('0.00') should be rounded.
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_35 = ___0_number;
		L_35->___Scale_3 = 0;
	}

IL_007b:
	{
		// dig[i] = (byte)('\0');
		uint8_t* L_36 = V_0;
		int32_t L_37 = V_1;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_36, L_37))) = (int8_t)0;
		// number.DigitsCount = i;
		NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* L_38 = ___0_number;
		int32_t L_39 = V_1;
		L_38->___DigitsCount_2 = L_39;
		// }
		return;
	}
}
// System.Boolean Unity.Burst.BurstString::ShouldRoundUp(System.Byte*,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstString_ShouldRoundUp_m409E5BBC77EF196F3CCAC9B2AFF01225E2119464 (uint8_t* ___0_dig, int32_t ___1_i, bool ___2_isCorrectlyRounded, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		// byte digit = dig[i];
		uint8_t* L_0 = ___0_dig;
		int32_t L_1 = ___1_i;
		int32_t L_2 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1)));
		V_0 = (uint8_t)L_2;
		// if ((digit == '\0') || isCorrectlyRounded)
		uint8_t L_3 = V_0;
		bool L_4 = ___2_isCorrectlyRounded;
		if (!((int32_t)(((((int32_t)L_3) == ((int32_t)0))? 1 : 0)|(int32_t)L_4)))
		{
			goto IL_000f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000f:
	{
		// return digit >= '5';
		uint8_t L_5 = V_0;
		return (bool)((((int32_t)((((int32_t)L_5) < ((int32_t)((int32_t)53)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.UInt32 Unity.Burst.BurstString::LogBase2(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BurstString_LogBase2_m034E17C8FE477EA2D6D3DDBCDAE5155EE0188F54 (uint32_t ___0_val, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		// temp = val >> 24;
		uint32_t L_0 = ___0_val;
		V_0 = ((int32_t)((uint32_t)L_0>>((int32_t)24)));
		// if (temp != 0)
		uint32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return (uint)(24 + logTable[(int)temp]);
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var))->___logTable_1;
		uint32_t L_3 = V_0;
		NullCheck(L_2);
		uint32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return ((int32_t)il2cpp_codegen_add(((int32_t)24), (int32_t)L_5));
	}

IL_0013:
	{
		// temp = val >> 16;
		uint32_t L_6 = ___0_val;
		V_0 = ((int32_t)((uint32_t)L_6>>((int32_t)16)));
		// if (temp != 0)
		uint32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_0026;
		}
	}
	{
		// return (uint)(16 + logTable[temp]);
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ((BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var))->___logTable_1;
		uint32_t L_9 = V_0;
		NullCheck(L_8);
		uint32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		return ((int32_t)il2cpp_codegen_add(((int32_t)16), (int32_t)L_11));
	}

IL_0026:
	{
		// temp = val >> 8;
		uint32_t L_12 = ___0_val;
		V_0 = ((int32_t)((uint32_t)L_12>>8));
		// if (temp != 0)
		uint32_t L_13 = V_0;
		if (!L_13)
		{
			goto IL_0037;
		}
	}
	{
		// return (uint)(8 + logTable[temp]);
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ((BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var))->___logTable_1;
		uint32_t L_15 = V_0;
		NullCheck(L_14);
		uint32_t L_16 = L_15;
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		return ((int32_t)il2cpp_codegen_add(8, (int32_t)L_17));
	}

IL_0037:
	{
		// return logTable[val];
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ((BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var))->___logTable_1;
		uint32_t L_19 = ___0_val;
		NullCheck(L_18);
		uint32_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		return L_21;
	}
}
// System.Int32 Unity.Burst.BurstString::BigInt_Compare(Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstString_BigInt_Compare_m6815CCBF0899BF17AC14F259C329C715EFB6EBA1 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_lhs, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___1_rhs, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int lengthDiff = lhs.m_length - rhs.m_length;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_0 = ___0_lhs;
		int32_t L_1 = L_0->___m_length_0;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_2 = ___1_rhs;
		int32_t L_3 = L_2->___m_length_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, L_3));
		// if (lengthDiff != 0)
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0013;
		}
	}
	{
		// return lengthDiff;
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0013:
	{
		// for (int i = (int)lhs.m_length - 1; i >= 0; --i)
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_6 = ___0_lhs;
		int32_t L_7 = L_6->___m_length_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_006e;
	}

IL_001e:
	{
		// if (lhs.m_blocks[i] == rhs.m_blocks[i])
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_8 = ___0_lhs;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_9 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_8->___m_blocks_1);
		uint32_t* L_10 = (uint32_t*)(&L_9->___FixedElementField_0);
		int32_t L_11 = V_1;
		int32_t L_12 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 4)))));
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_13 = ___1_rhs;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_14 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_13->___m_blocks_1);
		uint32_t* L_15 = (uint32_t*)(&L_14->___FixedElementField_0);
		int32_t L_16 = V_1;
		int32_t L_17 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), 4)))));
		if ((((int32_t)L_12) == ((int32_t)L_17)))
		{
			goto IL_006a;
		}
	}
	{
		// else if (lhs.m_blocks[i] > rhs.m_blocks[i])
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_18 = ___0_lhs;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_19 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_18->___m_blocks_1);
		uint32_t* L_20 = (uint32_t*)(&L_19->___FixedElementField_0);
		int32_t L_21 = V_1;
		int32_t L_22 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4)))));
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_23 = ___1_rhs;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_24 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_23->___m_blocks_1);
		uint32_t* L_25 = (uint32_t*)(&L_24->___FixedElementField_0);
		int32_t L_26 = V_1;
		int32_t L_27 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4)))));
		if ((!(((uint32_t)L_22) > ((uint32_t)L_27))))
		{
			goto IL_0068;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_0068:
	{
		// return -1;
		return (-1);
	}

IL_006a:
	{
		// for (int i = (int)lhs.m_length - 1; i >= 0; --i)
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_28, 1));
	}

IL_006e:
	{
		// for (int i = (int)lhs.m_length - 1; i >= 0; --i)
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		// return 0;
		return 0;
	}
}
// System.Void Unity.Burst.BurstString::BigInt_Add(Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Add_m4E1C5A27B4D6168D2967BF79174DA2A04A07669E (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___1_lhs, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___2_rhs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lhs.m_length < rhs.m_length)
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_0 = ___1_lhs;
		int32_t L_1 = L_0->___m_length_0;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_2 = ___2_rhs;
		int32_t L_3 = L_2->___m_length_0;
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0017;
		}
	}
	{
		// BigInt_Add_internal(out pResult, rhs, lhs);
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_4 = ___0_pResult;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_5 = ___2_rhs;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_6 = ___1_lhs;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_BigInt_Add_internal_m6CF758D9927E3261E88334B90E80ECF6C20E6DEF(L_4, L_5, L_6, NULL);
		return;
	}

IL_0017:
	{
		// BigInt_Add_internal(out pResult, lhs, rhs);
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_7 = ___0_pResult;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_8 = ___1_lhs;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_9 = ___2_rhs;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_BigInt_Add_internal_m6CF758D9927E3261E88334B90E80ECF6C20E6DEF(L_7, L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::BigInt_Add_internal(Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Add_internal_m6CF758D9927E3261E88334B90E80ECF6C20E6DEF (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___1_pLarge, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___2_pSmall, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	uint32_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	uint32_t* V_5 = NULL;
	uint32_t* V_6 = NULL;
	uint32_t* V_7 = NULL;
	uint32_t* V_8 = NULL;
	uint32_t* V_9 = NULL;
	uint32_t* V_10 = NULL;
	uint32_t* V_11 = NULL;
	uint32_t* V_12 = NULL;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	{
		// int largeLen = pLarge.m_length;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_0 = ___1_pLarge;
		int32_t L_1 = L_0->___m_length_0;
		V_0 = L_1;
		// int smallLen = pSmall.m_length;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_2 = ___2_pSmall;
		int32_t L_3 = L_2->___m_length_0;
		V_1 = L_3;
		// pResult.m_length = largeLen;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_4 = ___0_pResult;
		int32_t L_5 = V_0;
		L_4->___m_length_0 = L_5;
		// ulong carry = 0;
		V_2 = ((int64_t)0);
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_6 = ___1_pLarge;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_7 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_6->___m_blocks_1);
		uint32_t* L_8 = (uint32_t*)(&L_7->___FixedElementField_0);
		V_4 = L_8;
		// fixed (uint * pLargeCur1  = pLarge.m_blocks)
		uint32_t* L_9 = V_4;
		V_3 = (uint32_t*)((uintptr_t)L_9);
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_10 = ___2_pSmall;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_11 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_10->___m_blocks_1);
		uint32_t* L_12 = (uint32_t*)(&L_11->___FixedElementField_0);
		V_6 = L_12;
		// fixed (uint * pSmallCur1  = pSmall.m_blocks)
		uint32_t* L_13 = V_6;
		V_5 = (uint32_t*)((uintptr_t)L_13);
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_14 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_15 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_14->___m_blocks_1);
		uint32_t* L_16 = (uint32_t*)(&L_15->___FixedElementField_0);
		V_7 = L_16;
		// fixed (uint * pResultCur1 = pResult.m_blocks)
		uint32_t* L_17 = V_7;
		// uint* pLargeCur = pLargeCur1;
		uint32_t* L_18 = V_3;
		V_8 = L_18;
		// uint* pSmallCur = pSmallCur1;
		uint32_t* L_19 = V_5;
		V_9 = L_19;
		// uint* pResultCur = pResultCur1;
		V_10 = (uint32_t*)((uintptr_t)L_17);
		// uint* pLargeEnd = pLargeCur + largeLen;
		uint32_t* L_20 = V_8;
		int32_t L_21 = V_0;
		V_11 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))));
		// uint* pSmallEnd = pSmallCur + smallLen;
		uint32_t* L_22 = V_9;
		int32_t L_23 = V_1;
		V_12 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))));
		goto IL_0096;
	}

IL_0068:
	{
		// ulong sum = carry + (ulong) (*pLargeCur) + (ulong) (*pSmallCur);
		uint64_t L_24 = V_2;
		uint32_t* L_25 = V_8;
		int32_t L_26 = *((uint32_t*)L_25);
		uint32_t* L_27 = V_9;
		int32_t L_28 = *((uint32_t*)L_27);
		V_13 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_24, ((int64_t)(uint64_t)((uint32_t)L_26)))), ((int64_t)(uint64_t)((uint32_t)L_28))));
		// carry = sum >> 32;
		uint64_t L_29 = V_13;
		V_2 = ((int64_t)((uint64_t)L_29>>((int32_t)32)));
		// (*pResultCur) = (uint)(sum & 0xFFFFFFFF);
		uint32_t* L_30 = V_10;
		uint64_t L_31 = V_13;
		*((int32_t*)L_30) = (int32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_31&((int64_t)(uint64_t)((uint32_t)(-1))))));
		// ++pLargeCur;
		uint32_t* L_32 = V_8;
		V_8 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_32, 4));
		// ++pSmallCur;
		uint32_t* L_33 = V_9;
		V_9 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_33, 4));
		// ++pResultCur;
		uint32_t* L_34 = V_10;
		V_10 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_34, 4));
	}

IL_0096:
	{
		// while (pSmallCur != pSmallEnd)
		uint32_t* L_35 = V_9;
		uint32_t* L_36 = V_12;
		if ((!(((uintptr_t)L_35) == ((uintptr_t)L_36))))
		{
			goto IL_0068;
		}
	}
	{
		goto IL_00c1;
	}

IL_009e:
	{
		// ulong sum = carry + (ulong) (*pLargeCur);
		uint64_t L_37 = V_2;
		uint32_t* L_38 = V_8;
		int32_t L_39 = *((uint32_t*)L_38);
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_37, ((int64_t)(uint64_t)((uint32_t)L_39))));
		// carry = sum >> 32;
		uint64_t L_40 = V_14;
		V_2 = ((int64_t)((uint64_t)L_40>>((int32_t)32)));
		// (*pResultCur) = (uint)(sum & 0xFFFFFFFF);
		uint32_t* L_41 = V_10;
		uint64_t L_42 = V_14;
		*((int32_t*)L_41) = (int32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_42&((int64_t)(uint64_t)((uint32_t)(-1))))));
		// ++pLargeCur;
		uint32_t* L_43 = V_8;
		V_8 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_43, 4));
		// ++pResultCur;
		uint32_t* L_44 = V_10;
		V_10 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_44, 4));
	}

IL_00c1:
	{
		// while (pLargeCur != pLargeEnd)
		uint32_t* L_45 = V_8;
		uint32_t* L_46 = V_11;
		if ((!(((uintptr_t)L_45) == ((uintptr_t)L_46))))
		{
			goto IL_009e;
		}
	}
	{
		// if (carry != 0)
		uint64_t L_47 = V_2;
		if (!L_47)
		{
			goto IL_00d9;
		}
	}
	{
		// *pResultCur = 1;
		uint32_t* L_48 = V_10;
		*((int32_t*)L_48) = (int32_t)1;
		// pResult.m_length = largeLen + 1;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_49 = ___0_pResult;
		int32_t L_50 = V_0;
		L_49->___m_length_0 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		goto IL_00e0;
	}

IL_00d9:
	{
		// pResult.m_length = largeLen;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_51 = ___0_pResult;
		int32_t L_52 = V_0;
		L_51->___m_length_0 = L_52;
	}

IL_00e0:
	{
		V_7 = (uint32_t*)((uintptr_t)0);
		V_6 = (uint32_t*)((uintptr_t)0);
		V_4 = (uint32_t*)((uintptr_t)0);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::BigInt_Multiply(Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply_m90F6D119D0DD397B1B0FB3C76EEE1126C6DFE8A9 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___1_lhs, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___2_rhs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lhs.m_length < rhs.m_length)
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_0 = ___1_lhs;
		int32_t L_1 = L_0->___m_length_0;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_2 = ___2_rhs;
		int32_t L_3 = L_2->___m_length_0;
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0017;
		}
	}
	{
		// BigInt_Multiply_internal(out pResult, rhs, lhs);
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_4 = ___0_pResult;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_5 = ___2_rhs;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_6 = ___1_lhs;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_BigInt_Multiply_internal_mEA2BBAA8C72283721474B5EF6F7BEBB426294CB3(L_4, L_5, L_6, NULL);
		return;
	}

IL_0017:
	{
		// BigInt_Multiply_internal(out pResult, lhs, rhs);
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_7 = ___0_pResult;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_8 = ___1_lhs;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_9 = ___2_rhs;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_BigInt_Multiply_internal_mEA2BBAA8C72283721474B5EF6F7BEBB426294CB3(L_7, L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::BigInt_Multiply_internal(Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply_internal_mEA2BBAA8C72283721474B5EF6F7BEBB426294CB3 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___1_pLarge, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___2_pSmall, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t* V_2 = NULL;
	uint32_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	uint32_t* V_5 = NULL;
	uint32_t* V_6 = NULL;
	uint32_t* V_7 = NULL;
	uint32_t* V_8 = NULL;
	uint32_t* V_9 = NULL;
	uint32_t V_10 = 0;
	uint32_t* V_11 = NULL;
	uint32_t* V_12 = NULL;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	{
		// int maxResultLen = pLarge.m_length + pSmall.m_length;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_0 = ___1_pLarge;
		int32_t L_1 = L_0->___m_length_0;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_2 = ___2_pSmall;
		int32_t L_3 = L_2->___m_length_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_3));
		// for (int i = 0; i < maxResultLen; i++)
		V_1 = 0;
		goto IL_0028;
	}

IL_0012:
	{
		// pResult.m_blocks[i] = 0;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_4 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_5 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_4->___m_blocks_1);
		uint32_t* L_6 = (uint32_t*)(&L_5->___FixedElementField_0);
		int32_t L_7 = V_1;
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), 4))))) = (int32_t)0;
		// for (int i = 0; i < maxResultLen; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < maxResultLen; i++)
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0012;
		}
	}
	{
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_11 = ___1_pLarge;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_12 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_11->___m_blocks_1);
		uint32_t* L_13 = (uint32_t*)(&L_12->___FixedElementField_0);
		V_2 = L_13;
		// fixed (uint *pLargeBeg1 = pLarge.m_blocks)
		uint32_t* L_14 = V_2;
		// uint* pLargeBeg = pLargeBeg1;
		V_3 = (uint32_t*)((uintptr_t)L_14);
		// uint* pLargeEnd = pLargeBeg + pLarge.m_length;
		uint32_t* L_15 = V_3;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_16 = ___1_pLarge;
		int32_t L_17 = L_16->___m_length_0;
		V_4 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))));
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_18 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_19 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_18->___m_blocks_1);
		uint32_t* L_20 = (uint32_t*)(&L_19->___FixedElementField_0);
		V_5 = L_20;
		// fixed (uint* pResultStart1 = pResult.m_blocks)
		uint32_t* L_21 = V_5;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_22 = ___2_pSmall;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_23 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_22->___m_blocks_1);
		uint32_t* L_24 = (uint32_t*)(&L_23->___FixedElementField_0);
		V_6 = L_24;
		// fixed (uint* pSmallCur1 = pSmall.m_blocks)
		uint32_t* L_25 = V_6;
		// uint* pSmallCur = pSmallCur1;
		V_7 = (uint32_t*)((uintptr_t)L_25);
		// uint* pSmallEnd = pSmallCur + pSmall.m_length;
		uint32_t* L_26 = V_7;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_27 = ___2_pSmall;
		int32_t L_28 = L_27->___m_length_0;
		V_8 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))));
		// uint* pResultStart = pResultStart1;
		V_9 = (uint32_t*)((uintptr_t)L_21);
		goto IL_00d9;
	}

IL_007c:
	{
		// uint multiplier = *pSmallCur;
		uint32_t* L_29 = V_7;
		int32_t L_30 = *((uint32_t*)L_29);
		V_10 = L_30;
		// if (multiplier != 0)
		uint32_t L_31 = V_10;
		if (!L_31)
		{
			goto IL_00cd;
		}
	}
	{
		// uint* pLargeCur = pLargeBeg;
		uint32_t* L_32 = V_3;
		V_11 = L_32;
		// uint* pResultCur = pResultStart;
		uint32_t* L_33 = V_9;
		V_12 = L_33;
		// ulong carry = 0;
		V_13 = ((int64_t)0);
	}

IL_0090:
	{
		// ulong product = (*pResultCur) + (*pLargeCur) * (ulong) multiplier + carry;
		uint32_t* L_34 = V_12;
		int32_t L_35 = *((uint32_t*)L_34);
		uint32_t* L_36 = V_11;
		int32_t L_37 = *((uint32_t*)L_36);
		uint32_t L_38 = V_10;
		uint64_t L_39 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_35)), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_37)), ((int64_t)(uint64_t)L_38))))), (int64_t)L_39));
		// carry = product >> 32;
		uint64_t L_40 = V_14;
		V_13 = ((int64_t)((uint64_t)L_40>>((int32_t)32)));
		// *pResultCur = (uint)(product & 0xFFFFFFFF);
		uint32_t* L_41 = V_12;
		uint64_t L_42 = V_14;
		*((int32_t*)L_41) = (int32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_42&((int64_t)(uint64_t)((uint32_t)(-1))))));
		// ++pLargeCur;
		uint32_t* L_43 = V_11;
		V_11 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_43, 4));
		// ++pResultCur;
		uint32_t* L_44 = V_12;
		V_12 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_44, 4));
		// } while (pLargeCur != pLargeEnd);
		uint32_t* L_45 = V_11;
		uint32_t* L_46 = V_4;
		if ((!(((uintptr_t)L_45) == ((uintptr_t)L_46))))
		{
			goto IL_0090;
		}
	}
	{
		// *pResultCur = (uint) (carry & 0xFFFFFFFF);
		uint32_t* L_47 = V_12;
		uint64_t L_48 = V_13;
		*((int32_t*)L_47) = (int32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_48&((int64_t)(uint64_t)((uint32_t)(-1))))));
	}

IL_00cd:
	{
		// for (;  pSmallCur != pSmallEnd; ++pSmallCur, ++pResultStart)
		uint32_t* L_49 = V_7;
		V_7 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_49, 4));
		// for (;  pSmallCur != pSmallEnd; ++pSmallCur, ++pResultStart)
		uint32_t* L_50 = V_9;
		V_9 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_50, 4));
	}

IL_00d9:
	{
		// for (;  pSmallCur != pSmallEnd; ++pSmallCur, ++pResultStart)
		uint32_t* L_51 = V_7;
		uint32_t* L_52 = V_8;
		if ((!(((uintptr_t)L_51) == ((uintptr_t)L_52))))
		{
			goto IL_007c;
		}
	}
	{
		// if (maxResultLen > 0 && pResult.m_blocks[maxResultLen - 1] == 0)
		int32_t L_53 = V_0;
		if ((((int32_t)L_53) <= ((int32_t)0)))
		{
			goto IL_0103;
		}
	}
	{
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_54 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_55 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_54->___m_blocks_1);
		uint32_t* L_56 = (uint32_t*)(&L_55->___FixedElementField_0);
		int32_t L_57 = V_0;
		int32_t L_58 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_56, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_57, 1))), 4)))));
		if (L_58)
		{
			goto IL_0103;
		}
	}
	{
		// pResult.m_length = maxResultLen - 1;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_59 = ___0_pResult;
		int32_t L_60 = V_0;
		L_59->___m_length_0 = ((int32_t)il2cpp_codegen_subtract(L_60, 1));
		goto IL_010a;
	}

IL_0103:
	{
		// pResult.m_length = maxResultLen;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_61 = ___0_pResult;
		int32_t L_62 = V_0;
		L_61->___m_length_0 = L_62;
	}

IL_010a:
	{
		V_6 = (uint32_t*)((uintptr_t)0);
		V_5 = (uint32_t*)((uintptr_t)0);
		V_2 = (uint32_t*)((uintptr_t)0);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::BigInt_Multiply(Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply_m80C42811355207D0CD9E4E14BB916F0242D44FDF (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___1_lhs, uint32_t ___2_rhs, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	uint32_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	uint32_t* V_5 = NULL;
	uint32_t* V_6 = NULL;
	uint64_t V_7 = 0;
	{
		// uint carry = 0;
		V_0 = 0;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_0 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_1 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_0->___m_blocks_1);
		uint32_t* L_2 = (uint32_t*)(&L_1->___FixedElementField_0);
		V_2 = L_2;
		// fixed (uint* pResultCur1 = pResult.m_blocks)
		uint32_t* L_3 = V_2;
		V_1 = (uint32_t*)((uintptr_t)L_3);
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_4 = ___1_lhs;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_5 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_4->___m_blocks_1);
		uint32_t* L_6 = (uint32_t*)(&L_5->___FixedElementField_0);
		V_3 = L_6;
		// fixed (uint* pLhsCur1 = lhs.m_blocks)
		uint32_t* L_7 = V_3;
		// uint* pResultCur = pResultCur1;
		uint32_t* L_8 = V_1;
		V_4 = L_8;
		// uint* pLhsCur = pLhsCur1;
		V_5 = (uint32_t*)((uintptr_t)L_7);
		// uint* pLhsEnd = pLhsCur + lhs.m_length;
		uint32_t* L_9 = V_5;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_10 = ___1_lhs;
		int32_t L_11 = L_10->___m_length_0;
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 4))));
		goto IL_005c;
	}

IL_0034:
	{
		// ulong product = (ulong) (*pLhsCur) * rhs + carry;
		uint32_t* L_12 = V_5;
		int32_t L_13 = *((uint32_t*)L_12);
		uint32_t L_14 = ___2_rhs;
		uint32_t L_15 = V_0;
		V_7 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_13)), ((int64_t)(uint64_t)L_14))), ((int64_t)(uint64_t)L_15)));
		// *pResultCur = (uint) (product & 0xFFFFFFFF);
		uint32_t* L_16 = V_4;
		uint64_t L_17 = V_7;
		*((int32_t*)L_16) = (int32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_17&((int64_t)(uint64_t)((uint32_t)(-1))))));
		// carry = (uint)(product >> 32);
		uint64_t L_18 = V_7;
		V_0 = ((int32_t)(uint32_t)((int64_t)((uint64_t)L_18>>((int32_t)32))));
		// for (; pLhsCur != pLhsEnd; ++pLhsCur, ++pResultCur)
		uint32_t* L_19 = V_5;
		V_5 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_19, 4));
		// for (; pLhsCur != pLhsEnd; ++pLhsCur, ++pResultCur)
		uint32_t* L_20 = V_4;
		V_4 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_20, 4));
	}

IL_005c:
	{
		// for (; pLhsCur != pLhsEnd; ++pLhsCur, ++pResultCur)
		uint32_t* L_21 = V_5;
		uint32_t* L_22 = V_6;
		if ((!(((uintptr_t)L_21) == ((uintptr_t)L_22))))
		{
			goto IL_0034;
		}
	}
	{
		// if (carry != 0)
		uint32_t L_23 = V_0;
		if (!L_23)
		{
			goto IL_0079;
		}
	}
	{
		// *pResultCur = (uint) carry;
		uint32_t* L_24 = V_4;
		uint32_t L_25 = V_0;
		*((int32_t*)L_24) = (int32_t)L_25;
		// pResult.m_length = lhs.m_length + 1;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_26 = ___0_pResult;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_27 = ___1_lhs;
		int32_t L_28 = L_27->___m_length_0;
		L_26->___m_length_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		goto IL_0085;
	}

IL_0079:
	{
		// pResult.m_length = lhs.m_length;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_29 = ___0_pResult;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_30 = ___1_lhs;
		int32_t L_31 = L_30->___m_length_0;
		L_29->___m_length_0 = L_31;
	}

IL_0085:
	{
		V_3 = (uint32_t*)((uintptr_t)0);
		V_2 = (uint32_t*)((uintptr_t)0);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::BigInt_Multiply2(Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply2_m2C3E74572DBF8B4600AC3AB75B2CF00A6498105C (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___1_input, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	uint32_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	uint32_t* V_5 = NULL;
	uint32_t* V_6 = NULL;
	uint32_t V_7 = 0;
	{
		// uint carry = 0;
		V_0 = 0;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_0 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_1 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_0->___m_blocks_1);
		uint32_t* L_2 = (uint32_t*)(&L_1->___FixedElementField_0);
		V_2 = L_2;
		// fixed (uint* pResultCur1 = pResult.m_blocks)
		uint32_t* L_3 = V_2;
		V_1 = (uint32_t*)((uintptr_t)L_3);
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_4 = ___1_input;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_5 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_4->___m_blocks_1);
		uint32_t* L_6 = (uint32_t*)(&L_5->___FixedElementField_0);
		V_3 = L_6;
		// fixed (uint* pLhsCur1 = input.m_blocks)
		uint32_t* L_7 = V_3;
		// uint* pResultCur = pResultCur1;
		uint32_t* L_8 = V_1;
		V_4 = L_8;
		// uint* pLhsCur = pLhsCur1;
		V_5 = (uint32_t*)((uintptr_t)L_7);
		// uint* pLhsEnd = pLhsCur + input.m_length;
		uint32_t* L_9 = V_5;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_10 = ___1_input;
		int32_t L_11 = L_10->___m_length_0;
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 4))));
		goto IL_0054;
	}

IL_0034:
	{
		// uint cur = *pLhsCur;
		uint32_t* L_12 = V_5;
		int32_t L_13 = *((uint32_t*)L_12);
		V_7 = L_13;
		// *pResultCur = (cur << 1) | carry;
		uint32_t* L_14 = V_4;
		uint32_t L_15 = V_7;
		uint32_t L_16 = V_0;
		*((int32_t*)L_14) = (int32_t)((int32_t)(((int32_t)((int32_t)L_15<<1))|(int32_t)L_16));
		// carry = cur >> 31;
		uint32_t L_17 = V_7;
		V_0 = ((int32_t)((uint32_t)L_17>>((int32_t)31)));
		// for (; pLhsCur != pLhsEnd; ++pLhsCur, ++pResultCur)
		uint32_t* L_18 = V_5;
		V_5 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_18, 4));
		// for (; pLhsCur != pLhsEnd; ++pLhsCur, ++pResultCur)
		uint32_t* L_19 = V_4;
		V_4 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_19, 4));
	}

IL_0054:
	{
		// for (; pLhsCur != pLhsEnd; ++pLhsCur, ++pResultCur)
		uint32_t* L_20 = V_5;
		uint32_t* L_21 = V_6;
		if ((!(((uintptr_t)L_20) == ((uintptr_t)L_21))))
		{
			goto IL_0034;
		}
	}
	{
		// if (carry != 0)
		uint32_t L_22 = V_0;
		if (!L_22)
		{
			goto IL_0071;
		}
	}
	{
		// *pResultCur = carry;
		uint32_t* L_23 = V_4;
		uint32_t L_24 = V_0;
		*((int32_t*)L_23) = (int32_t)L_24;
		// pResult.m_length = input.m_length + 1;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_25 = ___0_pResult;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_26 = ___1_input;
		int32_t L_27 = L_26->___m_length_0;
		L_25->___m_length_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		goto IL_007d;
	}

IL_0071:
	{
		// pResult.m_length = input.m_length;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_28 = ___0_pResult;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_29 = ___1_input;
		int32_t L_30 = L_29->___m_length_0;
		L_28->___m_length_0 = L_30;
	}

IL_007d:
	{
		V_3 = (uint32_t*)((uintptr_t)0);
		V_2 = (uint32_t*)((uintptr_t)0);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::BigInt_Multiply2(Unity.Burst.BurstString/tBigInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply2_m45D9B179615B4A6BAD47C2EAE92AEDE7A2406252 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	uint32_t* V_3 = NULL;
	uint32_t V_4 = 0;
	{
		// uint carry = 0;
		V_0 = 0;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_0 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_1 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_0->___m_blocks_1);
		uint32_t* L_2 = (uint32_t*)(&L_1->___FixedElementField_0);
		V_1 = L_2;
		// fixed (uint* pCur1 = pResult.m_blocks)
		uint32_t* L_3 = V_1;
		// uint* pCur = pCur1;
		V_2 = (uint32_t*)((uintptr_t)L_3);
		// uint* pEnd = pCur + pResult.m_length;
		uint32_t* L_4 = V_2;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_5 = ___0_pResult;
		int32_t L_6 = L_5->___m_length_0;
		V_3 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4))));
		goto IL_0035;
	}

IL_001f:
	{
		// uint cur = *pCur;
		uint32_t* L_7 = V_2;
		int32_t L_8 = *((uint32_t*)L_7);
		V_4 = L_8;
		// *pCur = (cur << 1) | carry;
		uint32_t* L_9 = V_2;
		uint32_t L_10 = V_4;
		uint32_t L_11 = V_0;
		*((int32_t*)L_9) = (int32_t)((int32_t)(((int32_t)((int32_t)L_10<<1))|(int32_t)L_11));
		// carry = cur >> 31;
		uint32_t L_12 = V_4;
		V_0 = ((int32_t)((uint32_t)L_12>>((int32_t)31)));
		// for (; pCur != pEnd; ++pCur)
		uint32_t* L_13 = V_2;
		V_2 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_13, 4));
	}

IL_0035:
	{
		// for (; pCur != pEnd; ++pCur)
		uint32_t* L_14 = V_2;
		uint32_t* L_15 = V_3;
		if ((!(((uintptr_t)L_14) == ((uintptr_t)L_15))))
		{
			goto IL_001f;
		}
	}
	{
		// if (carry != 0)
		uint32_t L_16 = V_0;
		if (!L_16)
		{
			goto IL_004a;
		}
	}
	{
		// *pCur = carry;
		uint32_t* L_17 = V_2;
		uint32_t L_18 = V_0;
		*((int32_t*)L_17) = (int32_t)L_18;
		// ++pResult.m_length;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_19 = ___0_pResult;
		int32_t* L_20 = (int32_t*)(&L_19->___m_length_0);
		int32_t* L_21 = L_20;
		int32_t L_22 = *((int32_t*)L_21);
		*((int32_t*)L_21) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_004a:
	{
		V_1 = (uint32_t*)((uintptr_t)0);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::BigInt_Multiply10(Unity.Burst.BurstString/tBigInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply10_m82AC5B11EB311D603B1A70235E95CC83D39E701E (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	uint32_t* V_3 = NULL;
	uint64_t V_4 = 0;
	{
		// ulong carry = 0;
		V_0 = ((int64_t)0);
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_0 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_1 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_0->___m_blocks_1);
		uint32_t* L_2 = (uint32_t*)(&L_1->___FixedElementField_0);
		V_1 = L_2;
		// fixed (uint* pCur1 = pResult.m_blocks)
		uint32_t* L_3 = V_1;
		// uint* pCur = pCur1;
		V_2 = (uint32_t*)((uintptr_t)L_3);
		// uint* pEnd = pCur + pResult.m_length;
		uint32_t* L_4 = V_2;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_5 = ___0_pResult;
		int32_t L_6 = L_5->___m_length_0;
		V_3 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4))));
		goto IL_003d;
	}

IL_0020:
	{
		// ulong product = (ulong) (*pCur) * 10 + carry;
		uint32_t* L_7 = V_2;
		int32_t L_8 = *((uint32_t*)L_7);
		uint64_t L_9 = V_0;
		V_4 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_8)), ((int64_t)((int32_t)10)))), (int64_t)L_9));
		// (*pCur) = (uint) (product & 0xFFFFFFFF);
		uint32_t* L_10 = V_2;
		uint64_t L_11 = V_4;
		*((int32_t*)L_10) = (int32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_11&((int64_t)(uint64_t)((uint32_t)(-1))))));
		// carry = product >> 32;
		uint64_t L_12 = V_4;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		// for (; pCur != pEnd; ++pCur)
		uint32_t* L_13 = V_2;
		V_2 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_13, 4));
	}

IL_003d:
	{
		// for (; pCur != pEnd; ++pCur)
		uint32_t* L_14 = V_2;
		uint32_t* L_15 = V_3;
		if ((!(((uintptr_t)L_14) == ((uintptr_t)L_15))))
		{
			goto IL_0020;
		}
	}
	{
		// if (carry != 0)
		uint64_t L_16 = V_0;
		if (!L_16)
		{
			goto IL_0053;
		}
	}
	{
		// *pCur = (uint) carry;
		uint32_t* L_17 = V_2;
		uint64_t L_18 = V_0;
		*((int32_t*)L_17) = (int32_t)((int32_t)(uint32_t)L_18);
		// ++pResult.m_length;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_19 = ___0_pResult;
		int32_t* L_20 = (int32_t*)(&L_19->___m_length_0);
		int32_t* L_21 = L_20;
		int32_t L_22 = *((int32_t*)L_21);
		*((int32_t*)L_21) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0053:
	{
		V_1 = (uint32_t*)((uintptr_t)0);
		// }
		return;
	}
}
// Unity.Burst.BurstString/tBigInt Unity.Burst.BurstString::g_PowerOf10_Big(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tBigInt_t6A436AD3913A2950571338A5018B48B299987358 BurstString_g_PowerOf10_Big_mD308778BE6E3F6102AA2FEB7F8092DD82B7F6D43 (int32_t ___0_i, const RuntimeMethod* method) 
{
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (i == 0)
		int32_t L_0 = ___0_i;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		// result.m_length = 1;
		(&V_0)->___m_length_0 = 1;
		// result.m_blocks[0] = 100000000;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_1 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_2 = (uint32_t*)(&L_1->___FixedElementField_0);
		*((int32_t*)L_2) = (int32_t)((int32_t)100000000);
		goto IL_0503;
	}

IL_0022:
	{
		// else if (i == 1)
		int32_t L_3 = ___0_i;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0059;
		}
	}
	{
		// result.m_length = 2;
		(&V_0)->___m_length_0 = 2;
		// result.m_blocks[0] = 0x6fc10000;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_4 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_5 = (uint32_t*)(&L_4->___FixedElementField_0);
		*((int32_t*)L_5) = (int32_t)((int32_t)1874919424);
		// result.m_blocks[1] = 0x002386f2;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_6 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_7 = (uint32_t*)(&L_6->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_7, 4))) = (int32_t)((int32_t)2328306);
		goto IL_0503;
	}

IL_0059:
	{
		// else if (i == 2)
		int32_t L_8 = ___0_i;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_00ba;
		}
	}
	{
		// result.m_length = 4;
		(&V_0)->___m_length_0 = 4;
		// result.m_blocks[0] = 0x00000000;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_9 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_10 = (uint32_t*)(&L_9->___FixedElementField_0);
		*((int32_t*)L_10) = (int32_t)0;
		// result.m_blocks[1] = 0x85acef81;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_11 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_12 = (uint32_t*)(&L_11->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_12, 4))) = (int32_t)((int32_t)-2052264063);
		// result.m_blocks[2] = 0x2d6d415b;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_13 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_14 = (uint32_t*)(&L_13->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4))))) = (int32_t)((int32_t)762134875);
		// result.m_blocks[3] = 0x000004ee;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_15 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_16 = (uint32_t*)(&L_15->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 4))))) = (int32_t)((int32_t)1262);
		goto IL_0503;
	}

IL_00ba:
	{
		// else if (i == 3)
		int32_t L_17 = ___0_i;
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_015f;
		}
	}
	{
		// result.m_length = 7;
		(&V_0)->___m_length_0 = 7;
		// result.m_blocks[0] = 0x00000000;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_18 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_19 = (uint32_t*)(&L_18->___FixedElementField_0);
		*((int32_t*)L_19) = (int32_t)0;
		// result.m_blocks[1] = 0x00000000;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_20 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_21 = (uint32_t*)(&L_20->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_21, 4))) = (int32_t)0;
		// result.m_blocks[2] = 0xbf6a1f01;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_22 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_23 = (uint32_t*)(&L_22->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4))))) = (int32_t)((int32_t)-1083564287);
		// result.m_blocks[3] = 0x6e38ed64;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_24 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_25 = (uint32_t*)(&L_24->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 4))))) = (int32_t)((int32_t)1849224548);
		// result.m_blocks[4] = 0xdaa797ed;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_26 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_27 = (uint32_t*)(&L_26->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), 4))))) = (int32_t)((int32_t)-626550803);
		// result.m_blocks[5] = 0xe93ff9f4;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_28 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_29 = (uint32_t*)(&L_28->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)5), 4))))) = (int32_t)((int32_t)-381683212);
		// result.m_blocks[6] = 0x00184f03;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_30 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_31 = (uint32_t*)(&L_30->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)6), 4))))) = (int32_t)((int32_t)1593091);
		goto IL_0503;
	}

IL_015f:
	{
		// else if (i == 4)
		int32_t L_32 = ___0_i;
		if ((!(((uint32_t)L_32) == ((uint32_t)4))))
		{
			goto IL_02a3;
		}
	}
	{
		// result.m_length = 14;
		(&V_0)->___m_length_0 = ((int32_t)14);
		// result.m_blocks[0] = 0x00000000;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_33 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_34 = (uint32_t*)(&L_33->___FixedElementField_0);
		*((int32_t*)L_34) = (int32_t)0;
		// result.m_blocks[1] = 0x00000000;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_35 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_36 = (uint32_t*)(&L_35->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_36, 4))) = (int32_t)0;
		// result.m_blocks[2] = 0x00000000;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_37 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_38 = (uint32_t*)(&L_37->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4))))) = (int32_t)0;
		// result.m_blocks[3] = 0x00000000;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_39 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_40 = (uint32_t*)(&L_39->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 4))))) = (int32_t)0;
		// result.m_blocks[4] = 0x2e953e01;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_41 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_42 = (uint32_t*)(&L_41->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), 4))))) = (int32_t)((int32_t)781532673);
		// result.m_blocks[5] = 0x03df9909;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_43 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_44 = (uint32_t*)(&L_43->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)5), 4))))) = (int32_t)((int32_t)64985353);
		// result.m_blocks[6] = 0x0f1538fd;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_45 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_46 = (uint32_t*)(&L_45->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_46, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)6), 4))))) = (int32_t)((int32_t)253049085);
		// result.m_blocks[7] = 0x2374e42f;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_47 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_48 = (uint32_t*)(&L_47->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_48, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)7), 4))))) = (int32_t)((int32_t)594863151);
		// result.m_blocks[8] = 0xd3cff5ec;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_49 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_50 = (uint32_t*)(&L_49->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_50, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)8), 4))))) = (int32_t)((int32_t)-741345812);
		// result.m_blocks[9] = 0xc404dc08;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_51 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_52 = (uint32_t*)(&L_51->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)9)), 4))))) = (int32_t)((int32_t)-1006314488);
		// result.m_blocks[10] = 0xbccdb0da;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_53 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_54 = (uint32_t*)(&L_53->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)10)), 4))))) = (int32_t)((int32_t)-1127370534);
		// result.m_blocks[11] = 0xa6337f19;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_55 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_56 = (uint32_t*)(&L_55->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_56, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)11)), 4))))) = (int32_t)((int32_t)-1506574567);
		// result.m_blocks[12] = 0xe91f2603;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_57 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_58 = (uint32_t*)(&L_57->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_58, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)12)), 4))))) = (int32_t)((int32_t)-383834621);
		// result.m_blocks[13] = 0x0000024e;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_59 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_60 = (uint32_t*)(&L_59->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)13)), 4))))) = (int32_t)((int32_t)590);
		goto IL_0503;
	}

IL_02a3:
	{
		// result.m_length = 27;
		(&V_0)->___m_length_0 = ((int32_t)27);
		// result.m_blocks[0] = 0x00000000;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_61 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_62 = (uint32_t*)(&L_61->___FixedElementField_0);
		*((int32_t*)L_62) = (int32_t)0;
		// result.m_blocks[1] = 0x00000000;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_63 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_64 = (uint32_t*)(&L_63->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_64, 4))) = (int32_t)0;
		// result.m_blocks[2] = 0x00000000;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_65 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_66 = (uint32_t*)(&L_65->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4))))) = (int32_t)0;
		// result.m_blocks[3] = 0x00000000;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_67 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_68 = (uint32_t*)(&L_67->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 4))))) = (int32_t)0;
		// result.m_blocks[4] = 0x00000000;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_69 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_70 = (uint32_t*)(&L_69->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_70, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), 4))))) = (int32_t)0;
		// result.m_blocks[5] = 0x00000000;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_71 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_72 = (uint32_t*)(&L_71->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)5), 4))))) = (int32_t)0;
		// result.m_blocks[6] = 0x00000000;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_73 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_74 = (uint32_t*)(&L_73->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)6), 4))))) = (int32_t)0;
		// result.m_blocks[7] = 0x00000000;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_75 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_76 = (uint32_t*)(&L_75->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_76, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)7), 4))))) = (int32_t)0;
		// result.m_blocks[8] = 0x982e7c01;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_77 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_78 = (uint32_t*)(&L_77->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)8), 4))))) = (int32_t)((int32_t)-1741784063);
		// result.m_blocks[9] = 0xbed3875b;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_79 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_80 = (uint32_t*)(&L_79->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)9)), 4))))) = (int32_t)((int32_t)-1093433509);
		// result.m_blocks[10] = 0xd8d99f72;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_81 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_82 = (uint32_t*)(&L_81->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_82, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)10)), 4))))) = (int32_t)((int32_t)-656826510);
		// result.m_blocks[11] = 0x12152f87;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_83 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_84 = (uint32_t*)(&L_83->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)11)), 4))))) = (int32_t)((int32_t)303378311);
		// result.m_blocks[12] = 0x6bde50c6;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_85 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_86 = (uint32_t*)(&L_85->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)12)), 4))))) = (int32_t)((int32_t)1809731782);
		// result.m_blocks[13] = 0xcf4a6e70;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_87 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_88 = (uint32_t*)(&L_87->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_88, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)13)), 4))))) = (int32_t)((int32_t)-817205648);
		// result.m_blocks[14] = 0xd595d80f;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_89 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_90 = (uint32_t*)(&L_89->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)14)), 4))))) = (int32_t)((int32_t)-711600113);
		// result.m_blocks[15] = 0x26b2716e;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_91 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_92 = (uint32_t*)(&L_91->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_92, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)15)), 4))))) = (int32_t)((int32_t)649228654);
		// result.m_blocks[16] = 0xadc666b0;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_93 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_94 = (uint32_t*)(&L_93->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_94, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)16)), 4))))) = (int32_t)((int32_t)-1379506512);
		// result.m_blocks[17] = 0x1d153624;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_95 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_96 = (uint32_t*)(&L_95->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)17)), 4))))) = (int32_t)((int32_t)487929380);
		// result.m_blocks[18] = 0x3c42d35a;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_97 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_98 = (uint32_t*)(&L_97->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)18)), 4))))) = (int32_t)((int32_t)1011012442);
		// result.m_blocks[19] = 0x63ff540e;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_99 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_100 = (uint32_t*)(&L_99->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_100, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)19)), 4))))) = (int32_t)((int32_t)1677677582);
		// result.m_blocks[20] = 0xcc5573c0;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_101 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_102 = (uint32_t*)(&L_101->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)20)), 4))))) = (int32_t)((int32_t)-866815040);
		// result.m_blocks[21] = 0x65f9ef17;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_103 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_104 = (uint32_t*)(&L_103->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_104, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)21)), 4))))) = (int32_t)((int32_t)1710878487);
		// result.m_blocks[22] = 0x55bc28f2;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_105 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_106 = (uint32_t*)(&L_105->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_106, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)22)), 4))))) = (int32_t)((int32_t)1438394610);
		// result.m_blocks[23] = 0x80dcc7f7;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_107 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_108 = (uint32_t*)(&L_107->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_108, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)23)), 4))))) = (int32_t)((int32_t)-2133014537);
		// result.m_blocks[24] = 0xf46eeddc;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_109 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_110 = (uint32_t*)(&L_109->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_110, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)24)), 4))))) = (int32_t)((int32_t)-194056740);
		// result.m_blocks[25] = 0x5fdcefce;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_111 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_112 = (uint32_t*)(&L_111->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_112, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)25)), 4))))) = (int32_t)((int32_t)1608314830);
		// result.m_blocks[26] = 0x000553f7;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_113 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&(&V_0)->___m_blocks_1);
		uint32_t* L_114 = (uint32_t*)(&L_113->___FixedElementField_0);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)26)), 4))))) = (int32_t)((int32_t)349175);
	}

IL_0503:
	{
		// return result;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358 L_115 = V_0;
		return L_115;
	}
}
// System.Void Unity.Burst.BurstString::BigInt_Pow10(Unity.Burst.BurstString/tBigInt&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Pow10_mE53CE39D44AABA6924D6544F12E564EC2DCFE642 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, uint32_t ___1_exponent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358 V_0;
	memset((&V_0), 0, sizeof(V_0));
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358 V_1;
	memset((&V_1), 0, sizeof(V_1));
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358* V_2 = NULL;
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358* V_3 = NULL;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358* V_6 = NULL;
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// tBigInt temp1 = default;
		il2cpp_codegen_initobj((&V_0), sizeof(tBigInt_t6A436AD3913A2950571338A5018B48B299987358));
		// tBigInt temp2 = default;
		il2cpp_codegen_initobj((&V_1), sizeof(tBigInt_t6A436AD3913A2950571338A5018B48B299987358));
		// ref tBigInt pCurTemp = ref temp1;
		V_2 = (&V_0);
		// ref tBigInt pNextTemp = ref temp2;
		V_3 = (&V_1);
		// uint smallExponent = exponent & 0x7;
		uint32_t L_0 = ___1_exponent;
		V_4 = ((int32_t)((int32_t)L_0&7));
		// pCurTemp.SetU32(g_PowerOf10_U32[smallExponent]);
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_1 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ((BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var))->___g_PowerOf10_U32_2;
		uint32_t L_3 = V_4;
		NullCheck(L_2);
		uint32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		tBigInt_SetU32_m9EF2E1018CDA89AED4F0FA625E91878BF1772233(L_1, L_5, NULL);
		// exponent >>= 3;
		uint32_t L_6 = ___1_exponent;
		___1_exponent = ((int32_t)((uint32_t)L_6>>3));
		// int tableIdx = 0;
		V_5 = 0;
		goto IL_0071;
	}

IL_0033:
	{
		// if ((exponent & 1) != 0)
		uint32_t L_7 = ___1_exponent;
		if (!((int32_t)((int32_t)L_7&1)))
		{
			goto IL_0066;
		}
	}
	{
		// BigInt_Multiply(out pNextTemp, pCurTemp, g_PowerOf10_Big(tableIdx));
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_8 = V_3;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_9 = V_2;
		int32_t L_10 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358 L_11;
		L_11 = BurstString_g_PowerOf10_Big_mD308778BE6E3F6102AA2FEB7F8092DD82B7F6D43(L_10, NULL);
		V_7 = L_11;
		BurstString_BigInt_Multiply_m90F6D119D0DD397B1B0FB3C76EEE1126C6DFE8A9(L_8, L_9, (&V_7), NULL);
		// ref tBigInt pSwap = ref pCurTemp;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_12 = V_2;
		V_6 = L_12;
		// pCurTemp = pNextTemp;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_13 = V_2;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_14 = V_3;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358 L_15 = (*(tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)L_14);
		*(tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)L_13 = L_15;
		// pNextTemp = pSwap;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_16 = V_3;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_17 = V_6;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358 L_18 = (*(tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)L_17);
		*(tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)L_16 = L_18;
	}

IL_0066:
	{
		// ++tableIdx;
		int32_t L_19 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		// exponent >>= 1;
		uint32_t L_20 = ___1_exponent;
		___1_exponent = ((int32_t)((uint32_t)L_20>>1));
	}

IL_0071:
	{
		// while (exponent != 0)
		uint32_t L_21 = ___1_exponent;
		if (L_21)
		{
			goto IL_0033;
		}
	}
	{
		// pResult = pCurTemp;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_22 = ___0_pResult;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_23 = V_2;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358 L_24 = (*(tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)L_23);
		*(tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)L_22 = L_24;
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::BigInt_MultiplyPow10(Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_MultiplyPow10_mA62F7C4D0BC220B200E0AF031CEA586C59E1EEBD (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___1_input, uint32_t ___2_exponent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358 V_0;
	memset((&V_0), 0, sizeof(V_0));
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358 V_1;
	memset((&V_1), 0, sizeof(V_1));
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358* V_2 = NULL;
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358* V_3 = NULL;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358* V_6 = NULL;
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// tBigInt temp1 = default;
		il2cpp_codegen_initobj((&V_0), sizeof(tBigInt_t6A436AD3913A2950571338A5018B48B299987358));
		// tBigInt temp2 = default;
		il2cpp_codegen_initobj((&V_1), sizeof(tBigInt_t6A436AD3913A2950571338A5018B48B299987358));
		// ref tBigInt pCurTemp = ref temp1;
		V_2 = (&V_0);
		// ref tBigInt pNextTemp = ref temp2;
		V_3 = (&V_1);
		// uint smallExponent = exponent & 0x7;
		uint32_t L_0 = ___2_exponent;
		V_4 = ((int32_t)((int32_t)L_0&7));
		// if (smallExponent != 0)
		uint32_t L_1 = V_4;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// BigInt_Multiply(out pCurTemp, input, g_PowerOf10_U32[smallExponent]);
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_2 = V_2;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_3 = ___1_input;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ((BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var))->___g_PowerOf10_U32_2;
		uint32_t L_5 = V_4;
		NullCheck(L_4);
		uint32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		BurstString_BigInt_Multiply_m80C42811355207D0CD9E4E14BB916F0242D44FDF(L_2, L_3, L_7, NULL);
		goto IL_003c;
	}

IL_0030:
	{
		// pCurTemp = input;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_8 = V_2;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_9 = ___1_input;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358 L_10 = (*(tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)L_9);
		*(tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)L_8 = L_10;
	}

IL_003c:
	{
		// exponent >>= 3;
		uint32_t L_11 = ___2_exponent;
		___2_exponent = ((int32_t)((uint32_t)L_11>>3));
		// int tableIdx = 0;
		V_5 = 0;
		goto IL_0084;
	}

IL_0046:
	{
		// if((exponent & 1) != 0)
		uint32_t L_12 = ___2_exponent;
		if (!((int32_t)((int32_t)L_12&1)))
		{
			goto IL_0079;
		}
	}
	{
		// BigInt_Multiply( out pNextTemp, pCurTemp, g_PowerOf10_Big(tableIdx) );
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_13 = V_3;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_14 = V_2;
		int32_t L_15 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358 L_16;
		L_16 = BurstString_g_PowerOf10_Big_mD308778BE6E3F6102AA2FEB7F8092DD82B7F6D43(L_15, NULL);
		V_7 = L_16;
		BurstString_BigInt_Multiply_m90F6D119D0DD397B1B0FB3C76EEE1126C6DFE8A9(L_13, L_14, (&V_7), NULL);
		// ref tBigInt pSwap = ref pCurTemp;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_17 = V_2;
		V_6 = L_17;
		// pCurTemp = pNextTemp;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_18 = V_2;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_19 = V_3;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358 L_20 = (*(tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)L_19);
		*(tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)L_18 = L_20;
		// pNextTemp = pSwap;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_21 = V_3;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_22 = V_6;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358 L_23 = (*(tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)L_22);
		*(tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)L_21 = L_23;
	}

IL_0079:
	{
		// ++tableIdx;
		int32_t L_24 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		// exponent >>= 1;
		uint32_t L_25 = ___2_exponent;
		___2_exponent = ((int32_t)((uint32_t)L_25>>1));
	}

IL_0084:
	{
		// while (exponent != 0)
		uint32_t L_26 = ___2_exponent;
		if (L_26)
		{
			goto IL_0046;
		}
	}
	{
		// pResult = pCurTemp;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_27 = ___0_pResult;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_28 = V_2;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358 L_29 = (*(tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)L_28);
		*(tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)L_27 = L_29;
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::BigInt_Pow2(Unity.Burst.BurstString/tBigInt&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Pow2_m7D6C74FD7591BA82DFAD8CFAEB2DC0727427587A (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, uint32_t ___1_exponent, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		// int blockIdx = (int)exponent / 32;
		uint32_t L_0 = ___1_exponent;
		V_0 = ((int32_t)((int32_t)L_0/((int32_t)32)));
		// for (uint i = 0; i <= blockIdx; ++i)
		V_2 = 0;
		goto IL_0021;
	}

IL_0009:
	{
		// pResult.m_blocks[i] = 0;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_1 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_2 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_1->___m_blocks_1);
		uint32_t* L_3 = (uint32_t*)(&L_2->___FixedElementField_0);
		uint32_t L_4 = V_2;
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_4), ((int64_t)4))))))) = (int32_t)0;
		// for (uint i = 0; i <= blockIdx; ++i)
		uint32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, 1));
	}

IL_0021:
	{
		// for (uint i = 0; i <= blockIdx; ++i)
		uint32_t L_6 = V_2;
		int32_t L_7 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_6)) <= ((int64_t)((int64_t)L_7))))
		{
			goto IL_0009;
		}
	}
	{
		// pResult.m_length = blockIdx + 1;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_8 = ___0_pResult;
		int32_t L_9 = V_0;
		L_8->___m_length_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// int bitIdx = ((int)exponent % 32);
		uint32_t L_10 = ___1_exponent;
		V_1 = ((int32_t)((int32_t)L_10%((int32_t)32)));
		// pResult.m_blocks[blockIdx] |= (uint)(1 << bitIdx);
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_11 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_12 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_11->___m_blocks_1);
		uint32_t* L_13 = (uint32_t*)(&L_12->___FixedElementField_0);
		int32_t L_14 = V_0;
		uint32_t* L_15 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), 4))));
		int32_t L_16 = *((uint32_t*)L_15);
		int32_t L_17 = V_1;
		*((int32_t*)L_15) = (int32_t)((int32_t)(L_16|((int32_t)(1<<((int32_t)(L_17&((int32_t)31)))))));
		// }
		return;
	}
}
// System.UInt32 Unity.Burst.BurstString::BigInt_DivideWithRemainder_MaxQuotient9(Unity.Burst.BurstString/tBigInt&,Unity.Burst.BurstString/tBigInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BurstString_BigInt_DivideWithRemainder_MaxQuotient9_m88E9DEA846064D23C9C090B9626B66DB52A844E9 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pDividend, tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___1_divisor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	uint32_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	uint32_t* V_5 = NULL;
	uint32_t* V_6 = NULL;
	uint32_t* V_7 = NULL;
	uint32_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	{
		// int length = divisor.m_length;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_0 = ___1_divisor;
		int32_t L_1 = L_0->___m_length_0;
		V_0 = L_1;
		// if (pDividend.m_length < divisor.m_length)
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_2 = ___0_pDividend;
		int32_t L_3 = L_2->___m_length_0;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_4 = ___1_divisor;
		int32_t L_5 = L_4->___m_length_0;
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_0017;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_0017:
	{
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_6 = ___1_divisor;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_7 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_6->___m_blocks_1);
		uint32_t* L_8 = (uint32_t*)(&L_7->___FixedElementField_0);
		V_2 = L_8;
		// fixed (uint* pDivisorCur1 = divisor.m_blocks)
		uint32_t* L_9 = V_2;
		V_1 = (uint32_t*)((uintptr_t)L_9);
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_10 = ___0_pDividend;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_11 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_10->___m_blocks_1);
		uint32_t* L_12 = (uint32_t*)(&L_11->___FixedElementField_0);
		V_4 = L_12;
		// fixed (uint* pDividendCur1 = pDividend.m_blocks)
		uint32_t* L_13 = V_4;
		V_3 = (uint32_t*)((uintptr_t)L_13);
		// uint* pDivisorCur = pDivisorCur1;
		uint32_t* L_14 = V_1;
		V_5 = L_14;
		// uint* pDividendCur = pDividendCur1;
		uint32_t* L_15 = V_3;
		V_6 = L_15;
		// uint* pFinalDivisorBlock = pDivisorCur + length - 1;
		uint32_t* L_16 = V_5;
		int32_t L_17 = V_0;
		V_7 = ((uint32_t*)il2cpp_codegen_subtract((intptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))), 4));
		// uint* pFinalDividendBlock = pDividendCur + length - 1;
		uint32_t* L_18 = V_6;
		int32_t L_19 = V_0;
		// uint quotient = *pFinalDividendBlock / (*pFinalDivisorBlock + 1);
		int32_t L_20 = *((uint32_t*)((uint32_t*)il2cpp_codegen_subtract((intptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4)))), 4)));
		uint32_t* L_21 = V_7;
		int32_t L_22 = *((uint32_t*)L_21);
		V_8 = ((int32_t)((uint32_t)(int32_t)L_20/(uint32_t)(int32_t)((int32_t)il2cpp_codegen_add(L_22, 1))));
		// if (quotient != 0)
		uint32_t L_23 = V_8;
		if (!L_23)
		{
			goto IL_00d4;
		}
	}
	{
		// ulong borrow = 0;
		V_9 = ((int64_t)0);
		// ulong carry = 0;
		V_10 = ((int64_t)0);
	}

IL_0066:
	{
		// ulong product = (ulong) *pDivisorCur * (ulong) quotient + carry;
		uint32_t* L_24 = V_5;
		int32_t L_25 = *((uint32_t*)L_24);
		uint32_t L_26 = V_8;
		uint64_t L_27 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_25)), ((int64_t)(uint64_t)L_26))), (int64_t)L_27));
		// carry = product >> 32;
		uint64_t L_28 = V_11;
		V_10 = ((int64_t)((uint64_t)L_28>>((int32_t)32)));
		// ulong difference = (ulong) *pDividendCur - (product & 0xFFFFFFFF) - borrow;
		uint32_t* L_29 = V_6;
		int32_t L_30 = *((uint32_t*)L_29);
		uint64_t L_31 = V_11;
		uint64_t L_32 = V_9;
		V_12 = ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)((uint32_t)L_30)), ((int64_t)((int64_t)L_31&((int64_t)(uint64_t)((uint32_t)(-1))))))), (int64_t)L_32));
		// borrow = (difference >> 32) & 1;
		uint64_t L_33 = V_12;
		V_9 = ((int64_t)(((int64_t)((uint64_t)L_33>>((int32_t)32)))&((int64_t)1)));
		// *pDividendCur = (uint) (difference & 0xFFFFFFFF);
		uint32_t* L_34 = V_6;
		uint64_t L_35 = V_12;
		*((int32_t*)L_34) = (int32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_35&((int64_t)(uint64_t)((uint32_t)(-1))))));
		// ++pDivisorCur;
		uint32_t* L_36 = V_5;
		V_5 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_36, 4));
		// ++pDividendCur;
		uint32_t* L_37 = V_6;
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_37, 4));
		// } while (pDivisorCur <= pFinalDivisorBlock);
		uint32_t* L_38 = V_5;
		uint32_t* L_39 = V_7;
		if ((!(((uintptr_t)L_38) > ((uintptr_t)L_39))))
		{
			goto IL_0066;
		}
	}
	{
		goto IL_00b4;
	}

IL_00b0:
	{
		// --length;
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
	}

IL_00b4:
	{
		// while (length > 0 && pDividend.m_blocks[length - 1] == 0)
		int32_t L_41 = V_0;
		if ((((int32_t)L_41) <= ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_42 = ___0_pDividend;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_43 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_42->___m_blocks_1);
		uint32_t* L_44 = (uint32_t*)(&L_43->___FixedElementField_0);
		int32_t L_45 = V_0;
		int32_t L_46 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_45, 1))), 4)))));
		if (!L_46)
		{
			goto IL_00b0;
		}
	}

IL_00cd:
	{
		// pDividend.m_length = length;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_47 = ___0_pDividend;
		int32_t L_48 = V_0;
		L_47->___m_length_0 = L_48;
	}

IL_00d4:
	{
		// if (BigInt_Compare(pDividend, divisor) >= 0)
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_49 = ___0_pDividend;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_50 = ___1_divisor;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		int32_t L_51;
		L_51 = BurstString_BigInt_Compare_m6815CCBF0899BF17AC14F259C329C715EFB6EBA1(L_49, L_50, NULL);
		if ((((int32_t)L_51) < ((int32_t)0)))
		{
			goto IL_0147;
		}
	}
	{
		// ++quotient;
		uint32_t L_52 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, 1));
		// pDivisorCur = pDivisorCur1;
		uint32_t* L_53 = V_1;
		V_5 = L_53;
		// pDividendCur = pDividendCur1;
		uint32_t* L_54 = V_3;
		V_6 = L_54;
		// ulong borrow = 0;
		V_13 = ((int64_t)0);
	}

IL_00ee:
	{
		// ulong difference = (ulong) *pDividendCur - (ulong) *pDivisorCur - borrow;
		uint32_t* L_55 = V_6;
		int32_t L_56 = *((uint32_t*)L_55);
		uint32_t* L_57 = V_5;
		int32_t L_58 = *((uint32_t*)L_57);
		uint64_t L_59 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)((uint32_t)L_56)), ((int64_t)(uint64_t)((uint32_t)L_58)))), (int64_t)L_59));
		// borrow = (difference >> 32) & 1;
		uint64_t L_60 = V_14;
		V_13 = ((int64_t)(((int64_t)((uint64_t)L_60>>((int32_t)32)))&((int64_t)1)));
		// *pDividendCur = (uint)(difference & 0xFFFFFFFF);
		uint32_t* L_61 = V_6;
		uint64_t L_62 = V_14;
		*((int32_t*)L_61) = (int32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_62&((int64_t)(uint64_t)((uint32_t)(-1))))));
		// ++pDivisorCur;
		uint32_t* L_63 = V_5;
		V_5 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_63, 4));
		// ++pDividendCur;
		uint32_t* L_64 = V_6;
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_64, 4));
		// } while (pDivisorCur <= pFinalDivisorBlock);
		uint32_t* L_65 = V_5;
		uint32_t* L_66 = V_7;
		if ((!(((uintptr_t)L_65) > ((uintptr_t)L_66))))
		{
			goto IL_00ee;
		}
	}
	{
		goto IL_0127;
	}

IL_0123:
	{
		// --length;
		int32_t L_67 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_67, 1));
	}

IL_0127:
	{
		// while (length > 0 && pDividend.m_blocks[length - 1] == 0)
		int32_t L_68 = V_0;
		if ((((int32_t)L_68) <= ((int32_t)0)))
		{
			goto IL_0140;
		}
	}
	{
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_69 = ___0_pDividend;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_70 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_69->___m_blocks_1);
		uint32_t* L_71 = (uint32_t*)(&L_70->___FixedElementField_0);
		int32_t L_72 = V_0;
		int32_t L_73 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_72, 1))), 4)))));
		if (!L_73)
		{
			goto IL_0123;
		}
	}

IL_0140:
	{
		// pDividend.m_length = length;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_74 = ___0_pDividend;
		int32_t L_75 = V_0;
		L_74->___m_length_0 = L_75;
	}

IL_0147:
	{
		// return quotient;
		uint32_t L_76 = V_8;
		return L_76;
	}
}
// System.Void Unity.Burst.BurstString::BigInt_ShiftLeft(Unity.Burst.BurstString/tBigInt&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_ShiftLeft_m0B99AC393DDF011FAC8F453039F4240C8F2BB583 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* ___0_pResult, uint32_t ___1_shift, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	uint32_t* V_5 = NULL;
	uint32_t* V_6 = NULL;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	{
		// int shiftBlocks = (int)shift / 32;
		uint32_t L_0 = ___1_shift;
		V_0 = ((int32_t)((int32_t)L_0/((int32_t)32)));
		// int shiftBits = (int)shift % 32;
		uint32_t L_1 = ___1_shift;
		V_1 = ((int32_t)((int32_t)L_1%((int32_t)32)));
		// int inLength    = pResult.m_length;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_2 = ___0_pResult;
		int32_t L_3 = L_2->___m_length_0;
		V_2 = L_3;
		// if (shiftBits == 0)
		int32_t L_4 = V_1;
		if (L_4)
		{
			goto IL_0088;
		}
	}
	{
		// {
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_5 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_6 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_5->___m_blocks_1);
		uint32_t* L_7 = (uint32_t*)(&L_6->___FixedElementField_0);
		V_3 = L_7;
		// fixed (uint* pInBlocks1 = pResult.m_blocks)
		uint32_t* L_8 = V_3;
		// uint* pInBlocks = pInBlocks1;
		V_4 = (uint32_t*)((uintptr_t)L_8);
		// uint* pInCur = pInBlocks + inLength - 1;
		uint32_t* L_9 = V_4;
		int32_t L_10 = V_2;
		V_5 = ((uint32_t*)il2cpp_codegen_subtract((intptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4)))), 4));
		// uint* pOutCur = pInCur + shiftBlocks;
		uint32_t* L_11 = V_5;
		int32_t L_12 = V_0;
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))));
		goto IL_004c;
	}

IL_003a:
	{
		// *pOutCur = *pInCur;
		uint32_t* L_13 = V_6;
		uint32_t* L_14 = V_5;
		int32_t L_15 = *((uint32_t*)L_14);
		*((int32_t*)L_13) = (int32_t)L_15;
		// for (; pInCur >= pInBlocks; --pInCur, --pOutCur)
		uint32_t* L_16 = V_5;
		V_5 = ((uint32_t*)il2cpp_codegen_subtract((intptr_t)L_16, 4));
		// for (; pInCur >= pInBlocks; --pInCur, --pOutCur)
		uint32_t* L_17 = V_6;
		V_6 = ((uint32_t*)il2cpp_codegen_subtract((intptr_t)L_17, 4));
	}

IL_004c:
	{
		// for (; pInCur >= pInBlocks; --pInCur, --pOutCur)
		uint32_t* L_18 = V_5;
		uint32_t* L_19 = V_4;
		if ((!(((uintptr_t)L_18) < ((uintptr_t)L_19))))
		{
			goto IL_003a;
		}
	}
	{
		V_3 = (uint32_t*)((uintptr_t)0);
		// for ( uint i = 0; i < shiftBlocks; ++i)
		V_7 = 0;
		goto IL_0075;
	}

IL_005a:
	{
		// pResult.m_blocks[i] = 0;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_20 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_21 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_20->___m_blocks_1);
		uint32_t* L_22 = (uint32_t*)(&L_21->___FixedElementField_0);
		uint32_t L_23 = V_7;
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_23), ((int64_t)4))))))) = (int32_t)0;
		// for ( uint i = 0; i < shiftBlocks; ++i)
		uint32_t L_24 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, 1));
	}

IL_0075:
	{
		// for ( uint i = 0; i < shiftBlocks; ++i)
		uint32_t L_25 = V_7;
		int32_t L_26 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_25)) < ((int64_t)((int64_t)L_26))))
		{
			goto IL_005a;
		}
	}
	{
		// pResult.m_length += shiftBlocks;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_27 = ___0_pResult;
		int32_t* L_28 = (int32_t*)(&L_27->___m_length_0);
		int32_t* L_29 = L_28;
		int32_t L_30 = *((int32_t*)L_29);
		int32_t L_31 = V_0;
		*((int32_t*)L_29) = (int32_t)((int32_t)il2cpp_codegen_add(L_30, L_31));
		return;
	}

IL_0088:
	{
		// int inBlockIdx  = inLength - 1;
		int32_t L_32 = V_2;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		// int outBlockIdx = inLength + shiftBlocks;
		int32_t L_33 = V_2;
		int32_t L_34 = V_0;
		V_9 = ((int32_t)il2cpp_codegen_add(L_33, L_34));
		// pResult.m_length = outBlockIdx + 1;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_35 = ___0_pResult;
		int32_t L_36 = V_9;
		L_35->___m_length_0 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		// int lowBitsShift = (32 - shiftBits);
		int32_t L_37 = V_1;
		V_10 = ((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_37));
		// uint highBits = 0;
		V_11 = 0;
		// uint block = pResult.m_blocks[inBlockIdx];
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_38 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_39 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_38->___m_blocks_1);
		uint32_t* L_40 = (uint32_t*)(&L_39->___FixedElementField_0);
		int32_t L_41 = V_8;
		int32_t L_42 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_41), 4)))));
		V_12 = L_42;
		// uint lowBits = block >> lowBitsShift;
		uint32_t L_43 = V_12;
		int32_t L_44 = V_10;
		V_13 = ((int32_t)((uint32_t)L_43>>((int32_t)(L_44&((int32_t)31)))));
		goto IL_010f;
	}

IL_00c5:
	{
		// pResult.m_blocks[outBlockIdx] = highBits | lowBits;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_45 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_46 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_45->___m_blocks_1);
		uint32_t* L_47 = (uint32_t*)(&L_46->___FixedElementField_0);
		int32_t L_48 = V_9;
		uint32_t L_49 = V_11;
		uint32_t L_50 = V_13;
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_47, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_48), 4))))) = (int32_t)((int32_t)((int32_t)L_49|(int32_t)L_50));
		// highBits = block << shiftBits;
		uint32_t L_51 = V_12;
		int32_t L_52 = V_1;
		V_11 = ((int32_t)((int32_t)L_51<<((int32_t)(L_52&((int32_t)31)))));
		// --inBlockIdx;
		int32_t L_53 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_53, 1));
		// --outBlockIdx;
		int32_t L_54 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_54, 1));
		// block = pResult.m_blocks[inBlockIdx];
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_55 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_56 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_55->___m_blocks_1);
		uint32_t* L_57 = (uint32_t*)(&L_56->___FixedElementField_0);
		int32_t L_58 = V_8;
		int32_t L_59 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4)))));
		V_12 = L_59;
		// lowBits = block >> lowBitsShift;
		uint32_t L_60 = V_12;
		int32_t L_61 = V_10;
		V_13 = ((int32_t)((uint32_t)L_60>>((int32_t)(L_61&((int32_t)31)))));
	}

IL_010f:
	{
		// while ( inBlockIdx > 0 )
		int32_t L_62 = V_8;
		if ((((int32_t)L_62) > ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		// pResult.m_blocks[outBlockIdx] = highBits | lowBits;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_63 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_64 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_63->___m_blocks_1);
		uint32_t* L_65 = (uint32_t*)(&L_64->___FixedElementField_0);
		int32_t L_66 = V_9;
		uint32_t L_67 = V_11;
		uint32_t L_68 = V_13;
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_65, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_66), 4))))) = (int32_t)((int32_t)((int32_t)L_67|(int32_t)L_68));
		// pResult.m_blocks[outBlockIdx-1] = block << shiftBits;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_69 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_70 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_69->___m_blocks_1);
		uint32_t* L_71 = (uint32_t*)(&L_70->___FixedElementField_0);
		int32_t L_72 = V_9;
		uint32_t L_73 = V_12;
		int32_t L_74 = V_1;
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_72, 1))), 4))))) = (int32_t)((int32_t)((int32_t)L_73<<((int32_t)(L_74&((int32_t)31)))));
		// for ( uint i = 0; i < shiftBlocks; ++i)
		V_14 = 0;
		goto IL_0166;
	}

IL_014b:
	{
		// pResult.m_blocks[i] = 0;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_75 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_76 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_75->___m_blocks_1);
		uint32_t* L_77 = (uint32_t*)(&L_76->___FixedElementField_0);
		uint32_t L_78 = V_14;
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_78), ((int64_t)4))))))) = (int32_t)0;
		// for ( uint i = 0; i < shiftBlocks; ++i)
		uint32_t L_79 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, 1));
	}

IL_0166:
	{
		// for ( uint i = 0; i < shiftBlocks; ++i)
		uint32_t L_80 = V_14;
		int32_t L_81 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_80)) < ((int64_t)((int64_t)L_81))))
		{
			goto IL_014b;
		}
	}
	{
		// if (pResult.m_blocks[pResult.m_length - 1] == 0)
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_82 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_83 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&L_82->___m_blocks_1);
		uint32_t* L_84 = (uint32_t*)(&L_83->___FixedElementField_0);
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_85 = ___0_pResult;
		int32_t L_86 = L_85->___m_length_0;
		int32_t L_87 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_86, 1))), 4)))));
		if (L_87)
		{
			goto IL_0192;
		}
	}
	{
		// --pResult.m_length;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_88 = ___0_pResult;
		int32_t* L_89 = (int32_t*)(&L_88->___m_length_0);
		int32_t* L_90 = L_89;
		int32_t L_91 = *((int32_t*)L_90);
		*((int32_t*)L_90) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_91, 1));
	}

IL_0192:
	{
		// }
		return;
	}
}
// System.UInt32 Unity.Burst.BurstString::Dragon4(System.UInt64,System.Int32,System.UInt32,System.Boolean,Unity.Burst.BurstString/CutoffMode,System.UInt32,System.Byte*,System.UInt32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BurstString_Dragon4_mCA09B197DEF9912F76B915FDC179A5EF9A1560EE (uint64_t ___0_mantissa, int32_t ___1_exponent, uint32_t ___2_mantissaHighBitIdx, bool ___3_hasUnequalMargins, int32_t ___4_cutoffMode, uint32_t ___5_cutoffNumber, uint8_t* ___6_pOutBuffer, uint32_t ___7_bufferSize, int32_t* ___8_pOutExponent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358 V_1;
	memset((&V_1), 0, sizeof(V_1));
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358 V_2;
	memset((&V_2), 0, sizeof(V_2));
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358 V_3;
	memset((&V_3), 0, sizeof(V_3));
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358* V_4 = NULL;
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	uint32_t V_11 = 0;
	bool V_12 = false;
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358 V_13;
	memset((&V_13), 0, sizeof(V_13));
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358 V_14;
	memset((&V_14), 0, sizeof(V_14));
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358 V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	uint32_t V_18 = 0;
	uint32_t V_19 = 0;
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358 V_20;
	memset((&V_20), 0, sizeof(V_20));
	{
		// byte* pCurDigit = pOutBuffer;
		uint8_t* L_0 = ___6_pOutBuffer;
		V_0 = L_0;
		// if (mantissa == 0)
		uint64_t L_1 = ___0_mantissa;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		// *pCurDigit = (byte)'0';
		uint8_t* L_2 = V_0;
		*((int8_t*)L_2) = (int8_t)((int32_t)48);
		// pOutExponent = 0;
		int32_t* L_3 = ___8_pOutExponent;
		*((int32_t*)L_3) = (int32_t)0;
		// return 1;
		return 1;
	}

IL_0010:
	{
		// tBigInt scale = default;              // positive scale applied to value and margin such that they can be
		il2cpp_codegen_initobj((&V_1), sizeof(tBigInt_t6A436AD3913A2950571338A5018B48B299987358));
		// tBigInt scaledValue = default;        // scale * mantissa
		il2cpp_codegen_initobj((&V_2), sizeof(tBigInt_t6A436AD3913A2950571338A5018B48B299987358));
		// tBigInt scaledMarginLow = default;    // scale * 0.5 * (distance between this floating-point number and its
		il2cpp_codegen_initobj((&V_3), sizeof(tBigInt_t6A436AD3913A2950571338A5018B48B299987358));
		// tBigInt optionalMarginHigh = default;
		il2cpp_codegen_initobj((&V_5), sizeof(tBigInt_t6A436AD3913A2950571338A5018B48B299987358));
		// if ( hasUnequalMargins )
		bool L_4 = ___3_hasUnequalMargins;
		if (!L_4)
		{
			goto IL_0093;
		}
	}
	{
		// if (exponent > 0)
		int32_t L_5 = ___1_exponent;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		// scaledValue.SetU64( 4 * mantissa );
		uint64_t L_6 = ___0_mantissa;
		tBigInt_SetU64_m72EE55FD3169036C517DAF7392CE0A133DD50C14((&V_2), ((int64_t)il2cpp_codegen_multiply(((int64_t)4), (int64_t)L_6)), NULL);
		// BigInt_ShiftLeft(ref scaledValue, (uint)exponent);
		int32_t L_7 = ___1_exponent;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_BigInt_ShiftLeft_m0B99AC393DDF011FAC8F453039F4240C8F2BB583((&V_2), L_7, NULL);
		// scale.SetU32( 4 );
		tBigInt_SetU32_m9EF2E1018CDA89AED4F0FA625E91878BF1772233((&V_1), 4, NULL);
		// BigInt_Pow2( out scaledMarginLow, (uint)exponent );
		int32_t L_8 = ___1_exponent;
		BurstString_BigInt_Pow2_m7D6C74FD7591BA82DFAD8CFAEB2DC0727427587A((&V_3), L_8, NULL);
		// BigInt_Pow2( out optionalMarginHigh, (uint)(exponent + 1));
		int32_t L_9 = ___1_exponent;
		BurstString_BigInt_Pow2_m7D6C74FD7591BA82DFAD8CFAEB2DC0727427587A((&V_5), ((int32_t)il2cpp_codegen_add(L_9, 1)), NULL);
		goto IL_008c;
	}

IL_0066:
	{
		// scaledValue.SetU64( 4 * mantissa );
		uint64_t L_10 = ___0_mantissa;
		tBigInt_SetU64_m72EE55FD3169036C517DAF7392CE0A133DD50C14((&V_2), ((int64_t)il2cpp_codegen_multiply(((int64_t)4), (int64_t)L_10)), NULL);
		// BigInt_Pow2(out scale, (uint)(-exponent + 2));
		int32_t L_11 = ___1_exponent;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_BigInt_Pow2_m7D6C74FD7591BA82DFAD8CFAEB2DC0727427587A((&V_1), ((int32_t)il2cpp_codegen_add(((-L_11)), 2)), NULL);
		// scaledMarginLow.SetU32( 1 );
		tBigInt_SetU32_m9EF2E1018CDA89AED4F0FA625E91878BF1772233((&V_3), 1, NULL);
		// optionalMarginHigh.SetU32( 2 );
		tBigInt_SetU32_m9EF2E1018CDA89AED4F0FA625E91878BF1772233((&V_5), 2, NULL);
	}

IL_008c:
	{
		// pScaledMarginHigh = &optionalMarginHigh;
		V_4 = (tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)((uintptr_t)(&V_5));
		goto IL_00df;
	}

IL_0093:
	{
		// if (exponent > 0)
		int32_t L_12 = ___1_exponent;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_00bc;
		}
	}
	{
		// scaledValue.SetU64( 2 * mantissa );
		uint64_t L_13 = ___0_mantissa;
		tBigInt_SetU64_m72EE55FD3169036C517DAF7392CE0A133DD50C14((&V_2), ((int64_t)il2cpp_codegen_multiply(((int64_t)2), (int64_t)L_13)), NULL);
		// BigInt_ShiftLeft(ref scaledValue, (uint)exponent);
		int32_t L_14 = ___1_exponent;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_BigInt_ShiftLeft_m0B99AC393DDF011FAC8F453039F4240C8F2BB583((&V_2), L_14, NULL);
		// scale.SetU32( 2 );
		tBigInt_SetU32_m9EF2E1018CDA89AED4F0FA625E91878BF1772233((&V_1), 2, NULL);
		// BigInt_Pow2(out scaledMarginLow, (uint)exponent );
		int32_t L_15 = ___1_exponent;
		BurstString_BigInt_Pow2_m7D6C74FD7591BA82DFAD8CFAEB2DC0727427587A((&V_3), L_15, NULL);
		goto IL_00da;
	}

IL_00bc:
	{
		// scaledValue.SetU64( 2 * mantissa );
		uint64_t L_16 = ___0_mantissa;
		tBigInt_SetU64_m72EE55FD3169036C517DAF7392CE0A133DD50C14((&V_2), ((int64_t)il2cpp_codegen_multiply(((int64_t)2), (int64_t)L_16)), NULL);
		// BigInt_Pow2(out scale, (uint)(-exponent + 1));
		int32_t L_17 = ___1_exponent;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_BigInt_Pow2_m7D6C74FD7591BA82DFAD8CFAEB2DC0727427587A((&V_1), ((int32_t)il2cpp_codegen_add(((-L_17)), 1)), NULL);
		// scaledMarginLow.SetU32( 1 );
		tBigInt_SetU32_m9EF2E1018CDA89AED4F0FA625E91878BF1772233((&V_3), 1, NULL);
	}

IL_00da:
	{
		// pScaledMarginHigh = &scaledMarginLow;
		V_4 = (tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)((uintptr_t)(&V_3));
	}

IL_00df:
	{
		// var digitExponentDoubleValue = (double) ((int) mantissaHighBitIdx + exponent) * log10_2 - 0.69;
		uint32_t L_18 = ___2_mantissaHighBitIdx;
		int32_t L_19 = ___1_exponent;
		// digitExponentDoubleValue = Math.Ceiling(digitExponentDoubleValue);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = ceil(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)((int32_t)il2cpp_codegen_add((int32_t)L_18, L_19))), (0.3010299956639812))), (0.68999999999999995))));
		// int digitExponent = (int)digitExponentDoubleValue;
		V_6 = il2cpp_codegen_cast_double_to_int<int32_t>(L_20);
		// if (cutoffMode == CutoffMode.FractionLength && digitExponent <= -(int)cutoffNumber)
		int32_t L_21 = ___4_cutoffMode;
		if ((!(((uint32_t)L_21) == ((uint32_t)2))))
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_22 = V_6;
		uint32_t L_23 = ___5_cutoffNumber;
		if ((((int32_t)L_22) > ((int32_t)((-((int32_t)L_23))))))
		{
			goto IL_0112;
		}
	}
	{
		// digitExponent = -(int)cutoffNumber + 1;
		uint32_t L_24 = ___5_cutoffNumber;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)((-((int32_t)L_24))), 1));
	}

IL_0112:
	{
		// if (digitExponent > 0)
		int32_t L_25 = V_6;
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_0127;
		}
	}
	{
		// BigInt_MultiplyPow10( out temp, scale, (uint)digitExponent );
		int32_t L_26 = V_6;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_BigInt_MultiplyPow10_mA62F7C4D0BC220B200E0AF031CEA586C59E1EEBD((&V_13), (&V_1), L_26, NULL);
		// scale = temp;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358 L_27 = V_13;
		V_1 = L_27;
		goto IL_0162;
	}

IL_0127:
	{
		// else if (digitExponent < 0)
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_0162;
		}
	}
	{
		// BigInt_Pow10(out pow10, (uint)(-digitExponent));
		int32_t L_29 = V_6;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_BigInt_Pow10_mE53CE39D44AABA6924D6544F12E564EC2DCFE642((&V_14), ((-L_29)), NULL);
		// BigInt_Multiply( out temp, scaledValue, pow10);
		BurstString_BigInt_Multiply_m90F6D119D0DD397B1B0FB3C76EEE1126C6DFE8A9((&V_15), (&V_2), (&V_14), NULL);
		// scaledValue = temp;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358 L_30 = V_15;
		V_2 = L_30;
		// BigInt_Multiply( out temp, scaledMarginLow, pow10);
		BurstString_BigInt_Multiply_m90F6D119D0DD397B1B0FB3C76EEE1126C6DFE8A9((&V_15), (&V_3), (&V_14), NULL);
		// scaledMarginLow = temp;
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358 L_31 = V_15;
		V_3 = L_31;
		// if (pScaledMarginHigh != &scaledMarginLow)
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_32 = V_4;
		if ((((intptr_t)L_32) == ((intptr_t)((uintptr_t)(&V_3)))))
		{
			goto IL_0162;
		}
	}
	{
		// BigInt_Multiply2( out *pScaledMarginHigh, scaledMarginLow );
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_33 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_BigInt_Multiply2_m2C3E74572DBF8B4600AC3AB75B2CF00A6498105C((tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)L_33, (&V_3), NULL);
	}

IL_0162:
	{
		// if( BigInt_Compare(scaledValue,scale) >= 0 )
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		int32_t L_34;
		L_34 = BurstString_BigInt_Compare_m6815CCBF0899BF17AC14F259C329C715EFB6EBA1((&V_2), (&V_1), NULL);
		if ((((int32_t)L_34) < ((int32_t)0)))
		{
			goto IL_0176;
		}
	}
	{
		// digitExponent = digitExponent + 1;
		int32_t L_35 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		goto IL_0194;
	}

IL_0176:
	{
		// BigInt_Multiply10( ref scaledValue );
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_BigInt_Multiply10_m82AC5B11EB311D603B1A70235E95CC83D39E701E((&V_2), NULL);
		// BigInt_Multiply10( ref scaledMarginLow );
		BurstString_BigInt_Multiply10_m82AC5B11EB311D603B1A70235E95CC83D39E701E((&V_3), NULL);
		// if (pScaledMarginHigh != &scaledMarginLow)
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_36 = V_4;
		if ((((intptr_t)L_36) == ((intptr_t)((uintptr_t)(&V_3)))))
		{
			goto IL_0194;
		}
	}
	{
		// BigInt_Multiply2( out *pScaledMarginHigh, scaledMarginLow );
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_37 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_BigInt_Multiply2_m2C3E74572DBF8B4600AC3AB75B2CF00A6498105C((tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)L_37, (&V_3), NULL);
	}

IL_0194:
	{
		// int cutoffExponent = digitExponent - (int)bufferSize;
		int32_t L_38 = V_6;
		uint32_t L_39 = ___7_bufferSize;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_38, (int32_t)L_39));
		int32_t L_40 = ___4_cutoffMode;
		switch (L_40)
		{
			case 0:
			{
				goto IL_01d2;
			}
			case 1:
			{
				goto IL_01b0;
			}
			case 2:
			{
				goto IL_01c3;
			}
		}
	}
	{
		goto IL_01d2;
	}

IL_01b0:
	{
		// int desiredCutoffExponent = digitExponent - (int) cutoffNumber;
		int32_t L_41 = V_6;
		uint32_t L_42 = ___5_cutoffNumber;
		V_16 = ((int32_t)il2cpp_codegen_subtract(L_41, (int32_t)L_42));
		// if (desiredCutoffExponent > cutoffExponent)
		int32_t L_43 = V_16;
		int32_t L_44 = V_7;
		if ((((int32_t)L_43) <= ((int32_t)L_44)))
		{
			goto IL_01d2;
		}
	}
	{
		// cutoffExponent = desiredCutoffExponent;
		int32_t L_45 = V_16;
		V_7 = L_45;
		// break;
		goto IL_01d2;
	}

IL_01c3:
	{
		// int desiredCutoffExponent = -(int) cutoffNumber;
		uint32_t L_46 = ___5_cutoffNumber;
		V_17 = ((-((int32_t)L_46)));
		// if (desiredCutoffExponent > cutoffExponent)
		int32_t L_47 = V_17;
		int32_t L_48 = V_7;
		if ((((int32_t)L_47) <= ((int32_t)L_48)))
		{
			goto IL_01d2;
		}
	}
	{
		// cutoffExponent = desiredCutoffExponent;
		int32_t L_49 = V_17;
		V_7 = L_49;
	}

IL_01d2:
	{
		// pOutExponent = digitExponent-1;
		int32_t* L_50 = ___8_pOutExponent;
		int32_t L_51 = V_6;
		*((int32_t*)L_50) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_51, 1));
		// uint hiBlock = scale.GetBlock( scale.GetLength() - 1 );
		int32_t L_52;
		L_52 = tBigInt_GetLength_m223AD69D6DB118C879FC58EF544D50C4A2E978E7_inline((&V_1), NULL);
		uint32_t L_53;
		L_53 = tBigInt_GetBlock_m6E4E377A7A4591B136D20D711B06CB1D145FC9D2((&V_1), ((int32_t)il2cpp_codegen_subtract(L_52, 1)), NULL);
		V_8 = L_53;
		// if (hiBlock < 8 || hiBlock > 429496729)
		uint32_t L_54 = V_8;
		if ((!(((uint32_t)L_54) >= ((uint32_t)8))))
		{
			goto IL_01f9;
		}
	}
	{
		uint32_t L_55 = V_8;
		if ((!(((uint32_t)L_55) > ((uint32_t)((int32_t)429496729)))))
		{
			goto IL_0237;
		}
	}

IL_01f9:
	{
		// uint hiBlockLog2 = LogBase2(hiBlock);
		uint32_t L_56 = V_8;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		uint32_t L_57;
		L_57 = BurstString_LogBase2_m034E17C8FE477EA2D6D3DDBCDAE5155EE0188F54(L_56, NULL);
		V_18 = L_57;
		// uint shift = (32 + 27 - hiBlockLog2) % 32;
		uint32_t L_58 = V_18;
		V_19 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)59), (int32_t)L_58))%(uint32_t)(int32_t)((int32_t)32)));
		// BigInt_ShiftLeft( ref scale, shift );
		uint32_t L_59 = V_19;
		BurstString_BigInt_ShiftLeft_m0B99AC393DDF011FAC8F453039F4240C8F2BB583((&V_1), L_59, NULL);
		// BigInt_ShiftLeft( ref scaledValue, shift);
		uint32_t L_60 = V_19;
		BurstString_BigInt_ShiftLeft_m0B99AC393DDF011FAC8F453039F4240C8F2BB583((&V_2), L_60, NULL);
		// BigInt_ShiftLeft( ref scaledMarginLow, shift);
		uint32_t L_61 = V_19;
		BurstString_BigInt_ShiftLeft_m0B99AC393DDF011FAC8F453039F4240C8F2BB583((&V_3), L_61, NULL);
		// if (pScaledMarginHigh != &scaledMarginLow)
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_62 = V_4;
		if ((((intptr_t)L_62) == ((intptr_t)((uintptr_t)(&V_3)))))
		{
			goto IL_0237;
		}
	}
	{
		// BigInt_Multiply2( out *pScaledMarginHigh, scaledMarginLow );
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_63 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_BigInt_Multiply2_m2C3E74572DBF8B4600AC3AB75B2CF00A6498105C((tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)L_63, (&V_3), NULL);
	}

IL_0237:
	{
		// if (cutoffMode == CutoffMode.Unique)
		int32_t L_64 = ___4_cutoffMode;
		if (L_64)
		{
			goto IL_02ad;
		}
	}

IL_023b:
	{
		// digitExponent = digitExponent-1;
		int32_t L_65 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
		// outputDigit = BigInt_DivideWithRemainder_MaxQuotient9(ref scaledValue, scale);
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		uint32_t L_66;
		L_66 = BurstString_BigInt_DivideWithRemainder_MaxQuotient9_m88E9DEA846064D23C9C090B9626B66DB52A844E9((&V_2), (&V_1), NULL);
		V_11 = L_66;
		// BigInt_Add( out scaledValueHigh, scaledValue, *pScaledMarginHigh );
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_67 = V_4;
		BurstString_BigInt_Add_m4E1C5A27B4D6168D2967BF79174DA2A04A07669E((&V_20), (&V_2), (tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)L_67, NULL);
		// low = BigInt_Compare(scaledValue, scaledMarginLow) < 0;
		int32_t L_68;
		L_68 = BurstString_BigInt_Compare_m6815CCBF0899BF17AC14F259C329C715EFB6EBA1((&V_2), (&V_3), NULL);
		V_9 = (bool)((((int32_t)L_68) < ((int32_t)0))? 1 : 0);
		// high = BigInt_Compare(scaledValueHigh, scale) > 0;
		int32_t L_69;
		L_69 = BurstString_BigInt_Compare_m6815CCBF0899BF17AC14F259C329C715EFB6EBA1((&V_20), (&V_1), NULL);
		V_10 = (bool)((((int32_t)L_69) > ((int32_t)0))? 1 : 0);
		// if (low | high | (digitExponent == cutoffExponent))
		bool L_70 = V_9;
		bool L_71 = V_10;
		int32_t L_72 = V_6;
		int32_t L_73 = V_7;
		if (((int32_t)(((int32_t)((int32_t)L_70|(int32_t)L_71))|((((int32_t)L_72) == ((int32_t)L_73))? 1 : 0))))
		{
			goto IL_02e9;
		}
	}
	{
		// *pCurDigit = (byte)('0' + outputDigit);
		uint8_t* L_74 = V_0;
		uint32_t L_75 = V_11;
		*((int8_t*)L_74) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_75)));
		// ++pCurDigit;
		uint8_t* L_76 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_76, 1));
		// BigInt_Multiply10( ref scaledValue );
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_BigInt_Multiply10_m82AC5B11EB311D603B1A70235E95CC83D39E701E((&V_2), NULL);
		// BigInt_Multiply10( ref scaledMarginLow );
		BurstString_BigInt_Multiply10_m82AC5B11EB311D603B1A70235E95CC83D39E701E((&V_3), NULL);
		// if (pScaledMarginHigh != &scaledMarginLow)
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_77 = V_4;
		if ((((intptr_t)L_77) == ((intptr_t)((uintptr_t)(&V_3)))))
		{
			goto IL_023b;
		}
	}
	{
		// BigInt_Multiply2( out *pScaledMarginHigh, scaledMarginLow );
		tBigInt_t6A436AD3913A2950571338A5018B48B299987358* L_78 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_BigInt_Multiply2_m2C3E74572DBF8B4600AC3AB75B2CF00A6498105C((tBigInt_t6A436AD3913A2950571338A5018B48B299987358*)L_78, (&V_3), NULL);
		goto IL_023b;
	}

IL_02ad:
	{
		// low = false;
		V_9 = (bool)0;
		// high = false;
		V_10 = (bool)0;
	}

IL_02b3:
	{
		// digitExponent = digitExponent-1;
		int32_t L_79 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_79, 1));
		// outputDigit = BigInt_DivideWithRemainder_MaxQuotient9(ref scaledValue, scale);
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		uint32_t L_80;
		L_80 = BurstString_BigInt_DivideWithRemainder_MaxQuotient9_m88E9DEA846064D23C9C090B9626B66DB52A844E9((&V_2), (&V_1), NULL);
		V_11 = L_80;
		// if ( scaledValue.IsZero() | (digitExponent == cutoffExponent) )
		bool L_81;
		L_81 = tBigInt_IsZero_mE0C94B9A59A09BFCE51C418F4C8C05EC253D68C8((&V_2), NULL);
		int32_t L_82 = V_6;
		int32_t L_83 = V_7;
		if (((int32_t)((int32_t)L_81|((((int32_t)L_82) == ((int32_t)L_83))? 1 : 0))))
		{
			goto IL_02e9;
		}
	}
	{
		// *pCurDigit = (byte)('0' + outputDigit);
		uint8_t* L_84 = V_0;
		uint32_t L_85 = V_11;
		*((int8_t*)L_84) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_85)));
		// ++pCurDigit;
		uint8_t* L_86 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_86, 1));
		// BigInt_Multiply10(ref scaledValue);
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_BigInt_Multiply10_m82AC5B11EB311D603B1A70235E95CC83D39E701E((&V_2), NULL);
		goto IL_02b3;
	}

IL_02e9:
	{
		// bool roundDown = low;
		bool L_87 = V_9;
		V_12 = L_87;
		// if (low == high)
		bool L_88 = V_9;
		bool L_89 = V_10;
		if ((!(((uint32_t)L_88) == ((uint32_t)L_89))))
		{
			goto IL_0314;
		}
	}
	{
		// BigInt_Multiply2(ref scaledValue);
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_BigInt_Multiply2_m45D9B179615B4A6BAD47C2EAE92AEDE7A2406252((&V_2), NULL);
		// int compare = BigInt_Compare(scaledValue, scale);
		int32_t L_90;
		L_90 = BurstString_BigInt_Compare_m6815CCBF0899BF17AC14F259C329C715EFB6EBA1((&V_2), (&V_1), NULL);
		// roundDown = compare < 0;
		int32_t L_91 = L_90;
		V_12 = (bool)((((int32_t)L_91) < ((int32_t)0))? 1 : 0);
		// if (compare == 0)
		if (L_91)
		{
			goto IL_0314;
		}
	}
	{
		// roundDown = (outputDigit & 1) == 0;
		uint32_t L_92 = V_11;
		V_12 = (bool)((((int32_t)((int32_t)((int32_t)L_92&1))) == ((int32_t)0))? 1 : 0);
	}

IL_0314:
	{
		// if (roundDown)
		bool L_93 = V_12;
		if (!L_93)
		{
			goto IL_0326;
		}
	}
	{
		// *pCurDigit = (byte)('0' + outputDigit);
		uint8_t* L_94 = V_0;
		uint32_t L_95 = V_11;
		*((int8_t*)L_94) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_95)));
		// ++pCurDigit;
		uint8_t* L_96 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_96, 1));
		goto IL_0368;
	}

IL_0326:
	{
		// if (outputDigit == 9)
		uint32_t L_97 = V_11;
		if ((!(((uint32_t)L_97) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_035a;
		}
	}

IL_032c:
	{
		// if (pCurDigit == pOutBuffer)
		uint8_t* L_98 = V_0;
		uint8_t* L_99 = ___6_pOutBuffer;
		if ((!(((uintptr_t)L_98) == ((uintptr_t)L_99))))
		{
			goto IL_0343;
		}
	}
	{
		// *pCurDigit = (byte)'1';
		uint8_t* L_100 = V_0;
		*((int8_t*)L_100) = (int8_t)((int32_t)49);
		// ++pCurDigit;
		uint8_t* L_101 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_101, 1));
		// pOutExponent += 1;
		int32_t* L_102 = ___8_pOutExponent;
		int32_t* L_103 = ___8_pOutExponent;
		int32_t L_104 = *((int32_t*)L_103);
		*((int32_t*)L_102) = (int32_t)((int32_t)il2cpp_codegen_add(L_104, 1));
		// break;
		goto IL_0368;
	}

IL_0343:
	{
		// --pCurDigit;
		uint8_t* L_105 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_105, 1));
		// if (*pCurDigit != (byte)'9')
		uint8_t* L_106 = V_0;
		int32_t L_107 = *((uint8_t*)L_106);
		if ((((int32_t)L_107) == ((int32_t)((int32_t)57))))
		{
			goto IL_032c;
		}
	}
	{
		// *pCurDigit += 1;
		uint8_t* L_108 = V_0;
		uint8_t* L_109 = L_108;
		int32_t L_110 = *((uint8_t*)L_109);
		*((int8_t*)L_109) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_110, 1)));
		// ++pCurDigit;
		uint8_t* L_111 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_111, 1));
		// break;
		goto IL_0368;
	}

IL_035a:
	{
		// *pCurDigit = (byte)((byte)'0' + outputDigit + 1);
		uint8_t* L_112 = V_0;
		uint32_t L_113 = V_11;
		*((int8_t*)L_112) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_113)), 1)));
		// ++pCurDigit;
		uint8_t* L_114 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_114, 1));
	}

IL_0368:
	{
		// uint outputLen = (uint)(pCurDigit - pOutBuffer);
		uint8_t* L_115 = V_0;
		uint8_t* L_116 = ___6_pOutBuffer;
		// return outputLen;
		return ((int32_t)(uint32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_115, (intptr_t)L_116))/1))));
	}
}
// System.Void Unity.Burst.BurstString::FormatInfinityNaN(System.Byte*,System.Int32&,System.Int32,System.UInt64,System.Boolean,Unity.Burst.BurstString/FormatOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_FormatInfinityNaN_mD90B190A044F0940A2F7681A79124103BD177979 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, uint64_t ___3_mantissa, bool ___4_isNegative, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 ___5_formatOptions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	{
		// int length = mantissa == 0 ? 8 + (isNegative ? 1 : 0) : 3;
		uint64_t L_0 = ___3_mantissa;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B6_0 = 3;
		goto IL_0010;
	}

IL_0006:
	{
		bool L_1 = ___4_isNegative;
		G_B3_0 = 8;
		if (L_1)
		{
			G_B4_0 = 8;
			goto IL_000e;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_000f:
	{
		G_B6_0 = ((int32_t)il2cpp_codegen_add(G_B5_1, G_B5_0));
	}

IL_0010:
	{
		V_0 = G_B6_0;
		// int align = formatOptions.AlignAndSize;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_2 = ___5_formatOptions;
		int8_t L_3 = L_2.___AlignAndSize_1;
		V_1 = L_3;
		// if (AlignLeft(dest, ref destIndex, destLength, align, length)) return;
		uint8_t* L_4 = ___0_dest;
		int32_t* L_5 = ___1_destIndex;
		int32_t L_6 = ___2_destLength;
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = BurstString_AlignLeft_mE09478055A126F1675FF9C15B6572186785585D0(L_4, L_5, L_6, L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0026;
		}
	}
	{
		// if (AlignLeft(dest, ref destIndex, destLength, align, length)) return;
		return;
	}

IL_0026:
	{
		// if (mantissa == 0)
		uint64_t L_10 = ___3_mantissa;
		if (L_10)
		{
			goto IL_0068;
		}
	}
	{
		// if (isNegative)
		bool L_11 = ___4_isNegative;
		if (!L_11)
		{
			goto IL_0041;
		}
	}
	{
		// if (destIndex >= destLength) return;
		int32_t* L_12 = ___1_destIndex;
		int32_t L_13 = *((int32_t*)L_12);
		int32_t L_14 = ___2_destLength;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0033;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_0033:
	{
		// dest[destIndex++] = (byte)'-';
		uint8_t* L_15 = ___0_dest;
		int32_t* L_16 = ___1_destIndex;
		int32_t* L_17 = ___1_destIndex;
		int32_t L_18 = *((int32_t*)L_17);
		V_2 = L_18;
		int32_t L_19 = V_2;
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_2;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_20))) = (int8_t)((int32_t)45);
	}

IL_0041:
	{
		// for (int i = 0; i < 8; i++)
		V_3 = 0;
		goto IL_0062;
	}

IL_0045:
	{
		// if (destIndex >= destLength) return;
		int32_t* L_21 = ___1_destIndex;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = ___2_destLength;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004b;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_004b:
	{
		// dest[destIndex++] = InfinityString[i];
		uint8_t* L_24 = ___0_dest;
		int32_t* L_25 = ___1_destIndex;
		int32_t* L_26 = ___1_destIndex;
		int32_t L_27 = *((int32_t*)L_26);
		V_2 = L_27;
		int32_t L_28 = V_2;
		*((int32_t*)L_25) = (int32_t)((int32_t)il2cpp_codegen_add(L_28, 1));
		int32_t L_29 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ((BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var))->___InfinityString_3;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_24, L_29))) = (int8_t)L_33;
		// for (int i = 0; i < 8; i++)
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0062:
	{
		// for (int i = 0; i < 8; i++)
		int32_t L_35 = V_3;
		if ((((int32_t)L_35) < ((int32_t)8)))
		{
			goto IL_0045;
		}
	}
	{
		goto IL_0092;
	}

IL_0068:
	{
		// for (int i = 0; i < 3; i++)
		V_4 = 0;
		goto IL_008d;
	}

IL_006d:
	{
		// if (destIndex >= destLength) return;
		int32_t* L_36 = ___1_destIndex;
		int32_t L_37 = *((int32_t*)L_36);
		int32_t L_38 = ___2_destLength;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		// if (destIndex >= destLength) return;
		return;
	}

IL_0073:
	{
		// dest[destIndex++] = NanString[i];
		uint8_t* L_39 = ___0_dest;
		int32_t* L_40 = ___1_destIndex;
		int32_t* L_41 = ___1_destIndex;
		int32_t L_42 = *((int32_t*)L_41);
		V_2 = L_42;
		int32_t L_43 = V_2;
		*((int32_t*)L_40) = (int32_t)((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = ((BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var))->___NanString_4;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		uint8_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, L_44))) = (int8_t)L_48;
		// for (int i = 0; i < 3; i++)
		int32_t L_49 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_008d:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_50 = V_4;
		if ((((int32_t)L_50) < ((int32_t)3)))
		{
			goto IL_006d;
		}
	}

IL_0092:
	{
		// AlignRight(dest, ref destIndex, destLength, align, length);
		uint8_t* L_51 = ___0_dest;
		int32_t* L_52 = ___1_destIndex;
		int32_t L_53 = ___2_destLength;
		int32_t L_54 = V_1;
		int32_t L_55 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = BurstString_AlignRight_m42725CF76779C09A0664D895DA590CEB4E1A8A37(L_51, L_52, L_53, L_54, L_55, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::ConvertFloatToString(System.Byte*,System.Int32&,System.Int32,System.Single,Unity.Burst.BurstString/FormatOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_ConvertFloatToString_m31A31291376EE1C7AA2DFA26573312B25E0DDCDA (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, float ___3_value, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 ___4_formatOptions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	tFloatUnion32_t1140001CA96F869F598FBC16C082BC2BA85AB2CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint8_t* V_9 = NULL;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	bool V_12 = false;
	NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4 V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B6_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// tFloatUnion32 floatUnion = default;
		il2cpp_codegen_initobj((&V_0), sizeof(tFloatUnion32_t1140001CA96F869F598FBC16C082BC2BA85AB2CA));
		// floatUnion.m_floatingPoint = value;
		float L_0 = ___3_value;
		(&V_0)->___m_floatingPoint_0 = L_0;
		// uint floatExponent = floatUnion.GetExponent();
		uint32_t L_1;
		L_1 = tFloatUnion32_GetExponent_m83ED8E199331F83BC7AE3E48DCCCA8E6212CA6A6((&V_0), NULL);
		V_1 = L_1;
		// uint floatMantissa = floatUnion.GetMantissa();
		uint32_t L_2;
		L_2 = tFloatUnion32_GetMantissa_mAB906EE8DD2E27CFB6D98FF99CC2D764FF44F0EF((&V_0), NULL);
		V_2 = L_2;
		// if (floatExponent == 0xFF)
		uint32_t L_3 = V_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_003c;
		}
	}
	{
		// FormatInfinityNaN(dest, ref destIndex, destLength, floatMantissa, floatUnion.IsNegative(), formatOptions);
		uint8_t* L_4 = ___0_dest;
		int32_t* L_5 = ___1_destIndex;
		int32_t L_6 = ___2_destLength;
		uint32_t L_7 = V_2;
		bool L_8;
		L_8 = tFloatUnion32_IsNegative_m75BC8B54D468278FCBA4535D6118346B3C8F9388((&V_0), NULL);
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_9 = ___4_formatOptions;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_FormatInfinityNaN_mD90B190A044F0940A2F7681A79124103BD177979(L_4, L_5, L_6, ((int64_t)(uint64_t)L_7), L_8, L_9, NULL);
		return;
	}

IL_003c:
	{
		// if (floatExponent != 0)
		uint32_t L_10 = V_1;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		// mantissa = (uint)((1UL << 23) | floatMantissa);
		uint32_t L_11 = V_2;
		V_3 = ((int32_t)(uint32_t)((int64_t)(((int64_t)((int32_t)8388608))|((int64_t)(uint64_t)L_11))));
		// exponent = (int)(floatExponent - 127 - 23);
		uint32_t L_12 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, ((int32_t)127))), ((int32_t)23)));
		// mantissaHighBitIdx = 23;
		V_5 = ((int32_t)23);
		// hasUnequalMargins = (floatExponent != 1) && (floatMantissa == 0);
		uint32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			goto IL_0061;
		}
	}
	{
		uint32_t L_14 = V_2;
		G_B6_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_0062;
	}

IL_0061:
	{
		G_B6_0 = 0;
	}

IL_0062:
	{
		V_6 = (bool)G_B6_0;
		goto IL_007a;
	}

IL_0066:
	{
		// mantissa = floatMantissa;
		uint32_t L_15 = V_2;
		V_3 = L_15;
		// exponent = 1 - 127 - 23;
		V_4 = ((int32_t)-149);
		// mantissaHighBitIdx = LogBase2(mantissa);
		uint32_t L_16 = V_3;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		uint32_t L_17;
		L_17 = BurstString_LogBase2_m034E17C8FE477EA2D6D3DDBCDAE5155EE0188F54(L_16, NULL);
		V_5 = L_17;
		// hasUnequalMargins = false;
		V_6 = (bool)0;
	}

IL_007a:
	{
		// var precision = formatOptions.Specifier == 0 ? -1 : formatOptions.Specifier;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_18 = ___4_formatOptions;
		uint8_t L_19 = L_18.___Specifier_2;
		if (!L_19)
		{
			goto IL_008c;
		}
	}
	{
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_20 = ___4_formatOptions;
		uint8_t L_21 = L_20.___Specifier_2;
		G_B11_0 = ((int32_t)(L_21));
		goto IL_008d;
	}

IL_008c:
	{
		G_B11_0 = (-1);
	}

IL_008d:
	{
		V_7 = G_B11_0;
		// var bufferSize = Math.Max(SingleNumberBufferLength, precision + 1);
		int32_t L_22 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_23;
		L_23 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)10), ((int32_t)il2cpp_codegen_add(L_22, 1)), NULL);
		V_8 = L_23;
		// var pOutBuffer = stackalloc byte[bufferSize];
		int32_t L_24 = V_8;
		uintptr_t L_25 = ((uintptr_t)L_24);
		int8_t* L_26 = (int8_t*) (L_25 ? alloca(L_25) : NULL);
		memset(L_26, 0, L_25);
		V_9 = (uint8_t*)(L_26);
		// if (precision < 0)
		int32_t L_27 = V_7;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_00ab;
		}
	}
	{
		// precision = SinglePrecisionCustomFormat;
		V_7 = 7;
	}

IL_00ab:
	{
		// uint numPrintDigits = Dragon4(mantissa,
		//     exponent,
		//     mantissaHighBitIdx,
		//     hasUnequalMargins,
		//     CutoffMode.TotalLength,
		//     (uint)precision,
		//     pOutBuffer,
		//     (uint)(bufferSize - 1),
		//     out printExponent);
		uint32_t L_28 = V_3;
		int32_t L_29 = V_4;
		uint32_t L_30 = V_5;
		bool L_31 = V_6;
		int32_t L_32 = V_7;
		uint8_t* L_33 = V_9;
		int32_t L_34 = V_8;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		uint32_t L_35;
		L_35 = BurstString_Dragon4_mCA09B197DEF9912F76B915FDC179A5EF9A1560EE(((int64_t)(uint64_t)L_28), L_29, L_30, L_31, 1, L_32, L_33, ((int32_t)il2cpp_codegen_subtract(L_34, 1)), (&V_10), NULL);
		V_11 = L_35;
		// pOutBuffer[numPrintDigits] = 0;
		uint8_t* L_36 = V_9;
		uint32_t L_37 = V_11;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_36, (intptr_t)((uintptr_t)L_37)))) = (int8_t)0;
		// bool isNegative = floatUnion.IsNegative();
		bool L_38;
		L_38 = tFloatUnion32_IsNegative_m75BC8B54D468278FCBA4535D6118346B3C8F9388((&V_0), NULL);
		V_12 = L_38;
		// if (floatUnion.m_integer == ((uint)1 << 31))
		tFloatUnion32_t1140001CA96F869F598FBC16C082BC2BA85AB2CA L_39 = V_0;
		uint32_t L_40 = L_39.___m_integer_1;
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)-2147483648LL)))))
		{
			goto IL_00e6;
		}
	}
	{
		// isNegative = false;
		V_12 = (bool)0;
	}

IL_00e6:
	{
		// var number = new NumberBuffer(NumberBufferKind.Float, pOutBuffer, (int)numPrintDigits, printExponent + 1, isNegative);
		uint8_t* L_41 = V_9;
		uint32_t L_42 = V_11;
		int32_t L_43 = V_10;
		bool L_44 = V_12;
		NumberBuffer__ctor_m1A0D288DFB6432947BB55759502F97BA25348141((&V_13), 1, L_41, L_42, ((int32_t)il2cpp_codegen_add(L_43, 1)), L_44, NULL);
		// FormatNumber(dest, ref destIndex, destLength, ref number, precision, formatOptions);
		uint8_t* L_45 = ___0_dest;
		int32_t* L_46 = ___1_destIndex;
		int32_t L_47 = ___2_destLength;
		int32_t L_48 = V_7;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_49 = ___4_formatOptions;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_FormatNumber_m84AA91726082A3F72562B6B579F3D030D6D3C673(L_45, L_46, L_47, (&V_13), L_48, L_49, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::ConvertDoubleToString(System.Byte*,System.Int32&,System.Int32,System.Double,Unity.Burst.BurstString/FormatOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_ConvertDoubleToString_m5B4644F134166CA236077075A11108590892EDD0 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, double ___3_value, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 ___4_formatOptions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	tFloatUnion64_t737111FBE1FD2D4509E72C45FE6389106B60B2FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint32_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint8_t* V_9 = NULL;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	bool V_12 = false;
	NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4 V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B6_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// tFloatUnion64 floatUnion = default;
		il2cpp_codegen_initobj((&V_0), sizeof(tFloatUnion64_t737111FBE1FD2D4509E72C45FE6389106B60B2FC));
		// floatUnion.m_floatingPoint = value;
		double L_0 = ___3_value;
		(&V_0)->___m_floatingPoint_0 = L_0;
		// uint floatExponent = floatUnion.GetExponent();
		uint32_t L_1;
		L_1 = tFloatUnion64_GetExponent_m85B0BB29969C376B7FF866A1793C1997645D1D60((&V_0), NULL);
		V_1 = L_1;
		// ulong floatMantissa = floatUnion.GetMantissa();
		uint64_t L_2;
		L_2 = tFloatUnion64_GetMantissa_m6EAD50CE3D1BFDABD12A308F2FF83F586F61328C((&V_0), NULL);
		V_2 = L_2;
		// if (floatExponent == 0x7FF)
		uint32_t L_3 = V_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)2047)))))
		{
			goto IL_003b;
		}
	}
	{
		// FormatInfinityNaN(dest, ref destIndex, destLength, floatMantissa, floatUnion.IsNegative(), formatOptions);
		uint8_t* L_4 = ___0_dest;
		int32_t* L_5 = ___1_destIndex;
		int32_t L_6 = ___2_destLength;
		uint64_t L_7 = V_2;
		bool L_8;
		L_8 = tFloatUnion64_IsNegative_m5427680D1918AB7410EDC266B0524E42313F171B((&V_0), NULL);
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_9 = ___4_formatOptions;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_FormatInfinityNaN_mD90B190A044F0940A2F7681A79124103BD177979(L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		return;
	}

IL_003b:
	{
		// if (floatExponent != 0)
		uint32_t L_10 = V_1;
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		// mantissa = (1UL << 52) | floatMantissa;
		uint64_t L_11 = V_2;
		V_3 = ((int64_t)(((int64_t)4503599627370496LL)|(int64_t)L_11));
		// exponent = (int)(floatExponent - 1023 - 52);
		uint32_t L_12 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, ((int32_t)1023))), ((int32_t)52)));
		// mantissaHighBitIdx = 52;
		V_5 = ((int32_t)52);
		// hasUnequalMargins = (floatExponent != 1) && (floatMantissa == 0);
		uint32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		uint64_t L_14 = V_2;
		G_B6_0 = ((((int64_t)L_14) == ((int64_t)((int64_t)0)))? 1 : 0);
		goto IL_0066;
	}

IL_0065:
	{
		G_B6_0 = 0;
	}

IL_0066:
	{
		V_6 = (bool)G_B6_0;
		goto IL_007f;
	}

IL_006a:
	{
		// mantissa = floatMantissa;
		uint64_t L_15 = V_2;
		V_3 = L_15;
		// exponent = 1 - 1023 - 52;
		V_4 = ((int32_t)-1074);
		// mantissaHighBitIdx = LogBase2((uint)mantissa);
		uint64_t L_16 = V_3;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		uint32_t L_17;
		L_17 = BurstString_LogBase2_m034E17C8FE477EA2D6D3DDBCDAE5155EE0188F54(((int32_t)(uint32_t)L_16), NULL);
		V_5 = L_17;
		// hasUnequalMargins = false;
		V_6 = (bool)0;
	}

IL_007f:
	{
		// var precision = formatOptions.Specifier == 0 ? -1 : formatOptions.Specifier;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_18 = ___4_formatOptions;
		uint8_t L_19 = L_18.___Specifier_2;
		if (!L_19)
		{
			goto IL_0091;
		}
	}
	{
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_20 = ___4_formatOptions;
		uint8_t L_21 = L_20.___Specifier_2;
		G_B11_0 = ((int32_t)(L_21));
		goto IL_0092;
	}

IL_0091:
	{
		G_B11_0 = (-1);
	}

IL_0092:
	{
		V_7 = G_B11_0;
		// var bufferSize = Math.Max(DoubleNumberBufferLength, precision + 1);
		int32_t L_22 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_23;
		L_23 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)18), ((int32_t)il2cpp_codegen_add(L_22, 1)), NULL);
		V_8 = L_23;
		// var pOutBuffer = stackalloc byte[bufferSize];
		int32_t L_24 = V_8;
		uintptr_t L_25 = ((uintptr_t)L_24);
		int8_t* L_26 = (int8_t*) (L_25 ? alloca(L_25) : NULL);
		memset(L_26, 0, L_25);
		V_9 = (uint8_t*)(L_26);
		// if (precision < 0)
		int32_t L_27 = V_7;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_00b1;
		}
	}
	{
		// precision = DoublePrecisionCustomFormat;
		V_7 = ((int32_t)15);
	}

IL_00b1:
	{
		// uint numPrintDigits = Dragon4(mantissa,
		//     exponent,
		//     mantissaHighBitIdx,
		//     hasUnequalMargins,
		//     CutoffMode.TotalLength,
		//     (uint)precision,
		//     pOutBuffer,
		//     (uint)(bufferSize - 1),
		//     out printExponent);
		uint64_t L_28 = V_3;
		int32_t L_29 = V_4;
		uint32_t L_30 = V_5;
		bool L_31 = V_6;
		int32_t L_32 = V_7;
		uint8_t* L_33 = V_9;
		int32_t L_34 = V_8;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		uint32_t L_35;
		L_35 = BurstString_Dragon4_mCA09B197DEF9912F76B915FDC179A5EF9A1560EE(L_28, L_29, L_30, L_31, 1, L_32, L_33, ((int32_t)il2cpp_codegen_subtract(L_34, 1)), (&V_10), NULL);
		V_11 = L_35;
		// pOutBuffer[numPrintDigits] = 0;
		uint8_t* L_36 = V_9;
		uint32_t L_37 = V_11;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_36, (intptr_t)((uintptr_t)L_37)))) = (int8_t)0;
		// bool isNegative = floatUnion.IsNegative();
		bool L_38;
		L_38 = tFloatUnion64_IsNegative_m5427680D1918AB7410EDC266B0524E42313F171B((&V_0), NULL);
		V_12 = L_38;
		// if (floatUnion.m_integer == ((ulong)1 << 63))
		tFloatUnion64_t737111FBE1FD2D4509E72C45FE6389106B60B2FC L_39 = V_0;
		uint64_t L_40 = L_39.___m_integer_1;
		if ((!(((uint64_t)L_40) == ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::min)())))))
		{
			goto IL_00ef;
		}
	}
	{
		// isNegative = false;
		V_12 = (bool)0;
	}

IL_00ef:
	{
		// var number = new NumberBuffer(NumberBufferKind.Float, pOutBuffer, (int)numPrintDigits, printExponent + 1, isNegative);
		uint8_t* L_41 = V_9;
		uint32_t L_42 = V_11;
		int32_t L_43 = V_10;
		bool L_44 = V_12;
		NumberBuffer__ctor_m1A0D288DFB6432947BB55759502F97BA25348141((&V_13), 1, L_41, L_42, ((int32_t)il2cpp_codegen_add(L_43, 1)), L_44, NULL);
		// FormatNumber(dest, ref destIndex, destLength, ref number, precision, formatOptions);
		uint8_t* L_45 = ___0_dest;
		int32_t* L_46 = ___1_destIndex;
		int32_t L_47 = ___2_destLength;
		int32_t L_48 = V_7;
		FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84 L_49 = ___4_formatOptions;
		il2cpp_codegen_runtime_class_init_inline(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		BurstString_FormatNumber_m84AA91726082A3F72562B6B579F3D030D6D3C673(L_45, L_46, L_47, (&V_13), L_48, L_49, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstString::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString__cctor_m7DAF55C23F1F9D98FC9F78D057E3730166E28B78 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t2CADAF0D55AC9D0785A6F7B80D4772CF1220C48F____07DB995E8ED2CFB0AB71EBA69F3A3EC07D5C6AC10C0C64F33E94ED2949B348AA_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t2CADAF0D55AC9D0785A6F7B80D4772CF1220C48F____C69994AC61B52FBCEA582D6CCCD595C12E00BDB18F0C6F593FB6B393CAEDB08C_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t2CADAF0D55AC9D0785A6F7B80D4772CF1220C48F____D0067CAD9A63E0813759A2BB841051CA73570C0DA2E08E840A8EB45DB6A7A010_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t2CADAF0D55AC9D0785A6F7B80D4772CF1220C48F____D5B592C05DC25B5032553F1B27F4139BE95E881F73DB33B02B05AB20C3F9981E_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly char[] SplitByColon = new char[] { ':' };
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
		((BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var))->___SplitByColon_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var))->___SplitByColon_0), (void*)L_1);
		// private static readonly byte[] logTable = new byte[256]
		// {
		//     0, 0, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3,
		//     4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
		//     5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		//     5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		//     6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		//     6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		//     6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		//     6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		//     7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
		//     7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
		//     7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
		//     7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
		//     7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
		//     7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
		//     7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
		//     7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7
		// };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_4 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t2CADAF0D55AC9D0785A6F7B80D4772CF1220C48F____07DB995E8ED2CFB0AB71EBA69F3A3EC07D5C6AC10C0C64F33E94ED2949B348AA_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_3, L_4, NULL);
		((BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var))->___logTable_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var))->___logTable_1), (void*)L_3);
		// private static readonly uint[] g_PowerOf10_U32 = new uint[]
		// {
		//     1,          // 10 ^ 0
		//     10,         // 10 ^ 1
		//     100,        // 10 ^ 2
		//     1000,       // 10 ^ 3
		//     10000,      // 10 ^ 4
		//     100000,     // 10 ^ 5
		//     1000000,    // 10 ^ 6
		//     10000000,   // 10 ^ 7
		// };
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_7 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t2CADAF0D55AC9D0785A6F7B80D4772CF1220C48F____C69994AC61B52FBCEA582D6CCCD595C12E00BDB18F0C6F593FB6B393CAEDB08C_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_6, L_7, NULL);
		((BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var))->___g_PowerOf10_U32_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var))->___g_PowerOf10_U32_2), (void*)L_6);
		// private static readonly byte[] InfinityString = new byte[]
		// {
		//     (byte) 'I',
		//     (byte) 'n',
		//     (byte) 'f',
		//     (byte) 'i',
		//     (byte) 'n',
		//     (byte) 'i',
		//     (byte) 't',
		//     (byte) 'y',
		// };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_10 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t2CADAF0D55AC9D0785A6F7B80D4772CF1220C48F____D0067CAD9A63E0813759A2BB841051CA73570C0DA2E08E840A8EB45DB6A7A010_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_9, L_10, NULL);
		((BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var))->___InfinityString_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var))->___InfinityString_3), (void*)L_9);
		// private static readonly byte[] NanString = new byte[]
		// {
		//     (byte) 'N',
		//     (byte) 'a',
		//     (byte) 'N',
		// };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = L_11;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_13 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t2CADAF0D55AC9D0785A6F7B80D4772CF1220C48F____D5B592C05DC25B5032553F1B27F4139BE95E881F73DB33B02B05AB20C3F9981E_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_12, L_13, NULL);
		((BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var))->___NanString_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_tD6AF700FD5AF48728FC90C6CA2AA2E48C6472AF1_il2cpp_TypeInfo_var))->___NanString_4), (void*)L_12);
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
// System.Void Unity.Burst.BurstString/PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_mBA1653B32D31972033C043A55588458B03F262B1 (PreserveAttribute_t54BBA699FC0C1DD99BED77D21CADC33A352E1999* __this, const RuntimeMethod* method) 
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
// Conversion methods for marshalling of: Unity.Burst.BurstString/NumberBuffer
IL2CPP_EXTERN_C void NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshal_pinvoke(const NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4& unmarshaled, NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshaled_pinvoke& marshaled)
{
	marshaled.____buffer_0 = unmarshaled.____buffer_0;
	marshaled.___Kind_1 = unmarshaled.___Kind_1;
	marshaled.___DigitsCount_2 = unmarshaled.___DigitsCount_2;
	marshaled.___Scale_3 = unmarshaled.___Scale_3;
	marshaled.___IsNegative_4 = static_cast<int32_t>(unmarshaled.___IsNegative_4);
}
IL2CPP_EXTERN_C void NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshal_pinvoke_back(const NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshaled_pinvoke& marshaled, NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4& unmarshaled)
{
	unmarshaled.____buffer_0 = marshaled.____buffer_0;
	int32_t unmarshaledKind_temp_1 = 0;
	unmarshaledKind_temp_1 = marshaled.___Kind_1;
	unmarshaled.___Kind_1 = unmarshaledKind_temp_1;
	int32_t unmarshaledDigitsCount_temp_2 = 0;
	unmarshaledDigitsCount_temp_2 = marshaled.___DigitsCount_2;
	unmarshaled.___DigitsCount_2 = unmarshaledDigitsCount_temp_2;
	int32_t unmarshaledScale_temp_3 = 0;
	unmarshaledScale_temp_3 = marshaled.___Scale_3;
	unmarshaled.___Scale_3 = unmarshaledScale_temp_3;
	bool unmarshaledIsNegative_temp_4 = false;
	unmarshaledIsNegative_temp_4 = static_cast<bool>(marshaled.___IsNegative_4);
	unmarshaled.___IsNegative_4 = unmarshaledIsNegative_temp_4;
}
// Conversion method for clean up from marshalling of: Unity.Burst.BurstString/NumberBuffer
IL2CPP_EXTERN_C void NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshal_pinvoke_cleanup(NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Burst.BurstString/NumberBuffer
IL2CPP_EXTERN_C void NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshal_com(const NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4& unmarshaled, NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshaled_com& marshaled)
{
	marshaled.____buffer_0 = unmarshaled.____buffer_0;
	marshaled.___Kind_1 = unmarshaled.___Kind_1;
	marshaled.___DigitsCount_2 = unmarshaled.___DigitsCount_2;
	marshaled.___Scale_3 = unmarshaled.___Scale_3;
	marshaled.___IsNegative_4 = static_cast<int32_t>(unmarshaled.___IsNegative_4);
}
IL2CPP_EXTERN_C void NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshal_com_back(const NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshaled_com& marshaled, NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4& unmarshaled)
{
	unmarshaled.____buffer_0 = marshaled.____buffer_0;
	int32_t unmarshaledKind_temp_1 = 0;
	unmarshaledKind_temp_1 = marshaled.___Kind_1;
	unmarshaled.___Kind_1 = unmarshaledKind_temp_1;
	int32_t unmarshaledDigitsCount_temp_2 = 0;
	unmarshaledDigitsCount_temp_2 = marshaled.___DigitsCount_2;
	unmarshaled.___DigitsCount_2 = unmarshaledDigitsCount_temp_2;
	int32_t unmarshaledScale_temp_3 = 0;
	unmarshaledScale_temp_3 = marshaled.___Scale_3;
	unmarshaled.___Scale_3 = unmarshaledScale_temp_3;
	bool unmarshaledIsNegative_temp_4 = false;
	unmarshaledIsNegative_temp_4 = static_cast<bool>(marshaled.___IsNegative_4);
	unmarshaled.___IsNegative_4 = unmarshaledIsNegative_temp_4;
}
// Conversion method for clean up from marshalling of: Unity.Burst.BurstString/NumberBuffer
IL2CPP_EXTERN_C void NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshal_com_cleanup(NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshaled_com& marshaled)
{
}
// System.Void Unity.Burst.BurstString/NumberBuffer::.ctor(Unity.Burst.BurstString/NumberBufferKind,System.Byte*,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberBuffer__ctor_m1A0D288DFB6432947BB55759502F97BA25348141 (NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* __this, int32_t ___0_kind, uint8_t* ___1_buffer, int32_t ___2_digitsCount, int32_t ___3_scale, bool ___4_isNegative, const RuntimeMethod* method) 
{
	{
		// Kind = kind;
		int32_t L_0 = ___0_kind;
		__this->___Kind_1 = L_0;
		// _buffer = buffer;
		uint8_t* L_1 = ___1_buffer;
		__this->____buffer_0 = L_1;
		// DigitsCount = digitsCount;
		int32_t L_2 = ___2_digitsCount;
		__this->___DigitsCount_2 = L_2;
		// Scale = scale;
		int32_t L_3 = ___3_scale;
		__this->___Scale_3 = L_3;
		// IsNegative = isNegative;
		bool L_4 = ___4_isNegative;
		__this->___IsNegative_4 = L_4;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NumberBuffer__ctor_m1A0D288DFB6432947BB55759502F97BA25348141_AdjustorThunk (RuntimeObject* __this, int32_t ___0_kind, uint8_t* ___1_buffer, int32_t ___2_digitsCount, int32_t ___3_scale, bool ___4_isNegative, const RuntimeMethod* method)
{
	NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4*>(__this + _offset);
	NumberBuffer__ctor_m1A0D288DFB6432947BB55759502F97BA25348141(_thisAdjusted, ___0_kind, ___1_buffer, ___2_digitsCount, ___3_scale, ___4_isNegative, method);
}
// System.Byte* Unity.Burst.BurstString/NumberBuffer::GetDigitsPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NumberBuffer_GetDigitsPointer_m877C617CEE264BE12DE38D7289D741ED39B99846 (NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* __this, const RuntimeMethod* method) 
{
	{
		// public byte* GetDigitsPointer() => _buffer;
		uint8_t* L_0 = __this->____buffer_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint8_t* NumberBuffer_GetDigitsPointer_m877C617CEE264BE12DE38D7289D741ED39B99846_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4*>(__this + _offset);
	uint8_t* _returnValue;
	_returnValue = NumberBuffer_GetDigitsPointer_m877C617CEE264BE12DE38D7289D741ED39B99846_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Burst.BurstString/FormatOptions
IL2CPP_EXTERN_C void FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshal_pinvoke(const FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84& unmarshaled, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshaled_pinvoke& marshaled)
{
	marshaled.___Kind_0 = unmarshaled.___Kind_0;
	marshaled.___AlignAndSize_1 = unmarshaled.___AlignAndSize_1;
	marshaled.___Specifier_2 = unmarshaled.___Specifier_2;
	marshaled.___Lowercase_3 = static_cast<int32_t>(unmarshaled.___Lowercase_3);
}
IL2CPP_EXTERN_C void FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshal_pinvoke_back(const FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshaled_pinvoke& marshaled, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84& unmarshaled)
{
	uint8_t unmarshaledKind_temp_0 = 0;
	unmarshaledKind_temp_0 = marshaled.___Kind_0;
	unmarshaled.___Kind_0 = unmarshaledKind_temp_0;
	int8_t unmarshaledAlignAndSize_temp_1 = 0x0;
	unmarshaledAlignAndSize_temp_1 = marshaled.___AlignAndSize_1;
	unmarshaled.___AlignAndSize_1 = unmarshaledAlignAndSize_temp_1;
	uint8_t unmarshaledSpecifier_temp_2 = 0x0;
	unmarshaledSpecifier_temp_2 = marshaled.___Specifier_2;
	unmarshaled.___Specifier_2 = unmarshaledSpecifier_temp_2;
	bool unmarshaledLowercase_temp_3 = false;
	unmarshaledLowercase_temp_3 = static_cast<bool>(marshaled.___Lowercase_3);
	unmarshaled.___Lowercase_3 = unmarshaledLowercase_temp_3;
}
// Conversion method for clean up from marshalling of: Unity.Burst.BurstString/FormatOptions
IL2CPP_EXTERN_C void FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshal_pinvoke_cleanup(FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Burst.BurstString/FormatOptions
IL2CPP_EXTERN_C void FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshal_com(const FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84& unmarshaled, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshaled_com& marshaled)
{
	marshaled.___Kind_0 = unmarshaled.___Kind_0;
	marshaled.___AlignAndSize_1 = unmarshaled.___AlignAndSize_1;
	marshaled.___Specifier_2 = unmarshaled.___Specifier_2;
	marshaled.___Lowercase_3 = static_cast<int32_t>(unmarshaled.___Lowercase_3);
}
IL2CPP_EXTERN_C void FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshal_com_back(const FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshaled_com& marshaled, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84& unmarshaled)
{
	uint8_t unmarshaledKind_temp_0 = 0;
	unmarshaledKind_temp_0 = marshaled.___Kind_0;
	unmarshaled.___Kind_0 = unmarshaledKind_temp_0;
	int8_t unmarshaledAlignAndSize_temp_1 = 0x0;
	unmarshaledAlignAndSize_temp_1 = marshaled.___AlignAndSize_1;
	unmarshaled.___AlignAndSize_1 = unmarshaledAlignAndSize_temp_1;
	uint8_t unmarshaledSpecifier_temp_2 = 0x0;
	unmarshaledSpecifier_temp_2 = marshaled.___Specifier_2;
	unmarshaled.___Specifier_2 = unmarshaledSpecifier_temp_2;
	bool unmarshaledLowercase_temp_3 = false;
	unmarshaledLowercase_temp_3 = static_cast<bool>(marshaled.___Lowercase_3);
	unmarshaled.___Lowercase_3 = unmarshaledLowercase_temp_3;
}
// Conversion method for clean up from marshalling of: Unity.Burst.BurstString/FormatOptions
IL2CPP_EXTERN_C void FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshal_com_cleanup(FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshaled_com& marshaled)
{
}
// System.Void Unity.Burst.BurstString/FormatOptions::.ctor(Unity.Burst.BurstString/NumberFormatKind,System.SByte,System.Byte,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatOptions__ctor_mCF1FCAD2F6EE383DC6A602CA1F82BD16852CC055 (FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84* __this, uint8_t ___0_kind, int8_t ___1_alignAndSize, uint8_t ___2_specifier, bool ___3_lowercase, const RuntimeMethod* method) 
{
	{
		// public FormatOptions(NumberFormatKind kind, sbyte alignAndSize, byte specifier, bool lowercase) : this()
		il2cpp_codegen_initobj(__this, sizeof(FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84));
		// Kind = kind;
		uint8_t L_0 = ___0_kind;
		__this->___Kind_0 = L_0;
		// AlignAndSize = alignAndSize;
		int8_t L_1 = ___1_alignAndSize;
		__this->___AlignAndSize_1 = L_1;
		// Specifier = specifier;
		uint8_t L_2 = ___2_specifier;
		__this->___Specifier_2 = L_2;
		// Lowercase = lowercase;
		bool L_3 = ___3_lowercase;
		__this->___Lowercase_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FormatOptions__ctor_mCF1FCAD2F6EE383DC6A602CA1F82BD16852CC055_AdjustorThunk (RuntimeObject* __this, uint8_t ___0_kind, int8_t ___1_alignAndSize, uint8_t ___2_specifier, bool ___3_lowercase, const RuntimeMethod* method)
{
	FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84*>(__this + _offset);
	FormatOptions__ctor_mCF1FCAD2F6EE383DC6A602CA1F82BD16852CC055(_thisAdjusted, ___0_kind, ___1_alignAndSize, ___2_specifier, ___3_lowercase, method);
}
// System.Boolean Unity.Burst.BurstString/FormatOptions::get_Uppercase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FormatOptions_get_Uppercase_mE85E979D733EB67187AC1BCEB045508A0EF005C3 (FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84* __this, const RuntimeMethod* method) 
{
	{
		// public bool Uppercase => !Lowercase;
		bool L_0 = __this->___Lowercase_3;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool FormatOptions_get_Uppercase_mE85E979D733EB67187AC1BCEB045508A0EF005C3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84*>(__this + _offset);
	bool _returnValue;
	_returnValue = FormatOptions_get_Uppercase_mE85E979D733EB67187AC1BCEB045508A0EF005C3(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Burst.BurstString/FormatOptions::GetBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormatOptions_GetBase_m0466B18B4E020F258E2402BE194FB8D670B2C789 (FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84* __this, const RuntimeMethod* method) 
{
	{
		// switch (Kind)
		uint8_t L_0 = __this->___Kind_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_000c;
		}
	}
	{
		// return 16;
		return ((int32_t)16);
	}

IL_000c:
	{
		// return 10;
		return ((int32_t)10);
	}
}
IL2CPP_EXTERN_C  int32_t FormatOptions_GetBase_m0466B18B4E020F258E2402BE194FB8D670B2C789_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = FormatOptions_GetBase_m0466B18B4E020F258E2402BE194FB8D670B2C789(_thisAdjusted, method);
	return _returnValue;
}
// System.String Unity.Burst.BurstString/FormatOptions::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormatOptions_ToString_m96B89E42F1553D5D3B78D7238443ACC628EFB488 (FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatKind_t0CCF7872121CBA35A7D6296565B4A7554FB275E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CE6C7F7F72B90957BFCD4BAD12273C41A1C3421);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral733F2C0F892979C2C29E7E7599E36E7BC6DA158B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00E97A4D6DA0A1E727CA6FCAC517CF439F3A016);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEA647B69ECF2FB3DD083E36418FF930832E0BEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEAABBBE67A35DBB7CF309C3EC21780633775FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"{nameof(Kind)}: {Kind}, {nameof(AlignAndSize)}: {AlignAndSize}, {nameof(Specifier)}: {Specifier}, {nameof(Uppercase)}: {Uppercase}";
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral6CE6C7F7F72B90957BFCD4BAD12273C41A1C3421);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral6CE6C7F7F72B90957BFCD4BAD12273C41A1C3421);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		uint8_t L_3 = __this->___Kind_0;
		uint8_t L_4 = L_3;
		RuntimeObject* L_5 = Box(NumberFormatKind_t0CCF7872121CBA35A7D6296565B4A7554FB275E4_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralFFEAABBBE67A35DBB7CF309C3EC21780633775FD);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralFFEAABBBE67A35DBB7CF309C3EC21780633775FD);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		int8_t L_8 = __this->___AlignAndSize_1;
		int8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral733F2C0F892979C2C29E7E7599E36E7BC6DA158B);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteral733F2C0F892979C2C29E7E7599E36E7BC6DA158B);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		uint8_t L_13 = __this->___Specifier_2;
		uint8_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralEEA647B69ECF2FB3DD083E36418FF930832E0BEF);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)_stringLiteralEEA647B69ECF2FB3DD083E36418FF930832E0BEF);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		bool L_18;
		L_18 = FormatOptions_get_Uppercase_mE85E979D733EB67187AC1BCEB045508A0EF005C3(__this, NULL);
		bool L_19 = L_18;
		RuntimeObject* L_20 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		String_t* L_21;
		L_21 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralC00E97A4D6DA0A1E727CA6FCAC517CF439F3A016, L_17, NULL);
		return L_21;
	}
}
IL2CPP_EXTERN_C  String_t* FormatOptions_ToString_m96B89E42F1553D5D3B78D7238443ACC628EFB488_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = FormatOptions_ToString_m96B89E42F1553D5D3B78D7238443ACC628EFB488(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Unity.Burst.BurstString/tBigInt::GetLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tBigInt_GetLength_m223AD69D6DB118C879FC58EF544D50C4A2E978E7 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* __this, const RuntimeMethod* method) 
{
	{
		// public int GetLength()        { return m_length; }
		int32_t L_0 = __this->___m_length_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t tBigInt_GetLength_m223AD69D6DB118C879FC58EF544D50C4A2E978E7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<tBigInt_t6A436AD3913A2950571338A5018B48B299987358*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = tBigInt_GetLength_m223AD69D6DB118C879FC58EF544D50C4A2E978E7_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 Unity.Burst.BurstString/tBigInt::GetBlock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t tBigInt_GetBlock_m6E4E377A7A4591B136D20D711B06CB1D145FC9D2 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* __this, int32_t ___0_idx, const RuntimeMethod* method) 
{
	{
		// public uint GetBlock(int idx) { return m_blocks[idx]; }
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_0 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&__this->___m_blocks_1);
		uint32_t* L_1 = (uint32_t*)(&L_0->___FixedElementField_0);
		int32_t L_2 = ___0_idx;
		int32_t L_3 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), 4)))));
		return L_3;
	}
}
IL2CPP_EXTERN_C  uint32_t tBigInt_GetBlock_m6E4E377A7A4591B136D20D711B06CB1D145FC9D2_AdjustorThunk (RuntimeObject* __this, int32_t ___0_idx, const RuntimeMethod* method)
{
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<tBigInt_t6A436AD3913A2950571338A5018B48B299987358*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = tBigInt_GetBlock_m6E4E377A7A4591B136D20D711B06CB1D145FC9D2(_thisAdjusted, ___0_idx, method);
	return _returnValue;
}
// System.Boolean Unity.Burst.BurstString/tBigInt::IsZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tBigInt_IsZero_mE0C94B9A59A09BFCE51C418F4C8C05EC253D68C8 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsZero()  { return m_length == 0; }
		int32_t L_0 = __this->___m_length_0;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool tBigInt_IsZero_mE0C94B9A59A09BFCE51C418F4C8C05EC253D68C8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<tBigInt_t6A436AD3913A2950571338A5018B48B299987358*>(__this + _offset);
	bool _returnValue;
	_returnValue = tBigInt_IsZero_mE0C94B9A59A09BFCE51C418F4C8C05EC253D68C8(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Burst.BurstString/tBigInt::SetU64(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tBigInt_SetU64_m72EE55FD3169036C517DAF7392CE0A133DD50C14 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* __this, uint64_t ___0_val, const RuntimeMethod* method) 
{
	{
		// if (val > 0xFFFFFFFF)
		uint64_t L_0 = ___0_val;
		if ((!(((uint64_t)L_0) > ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_0034;
		}
	}
	{
		// m_blocks[0] = (uint)(val & 0xFFFFFFFF);
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_1 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&__this->___m_blocks_1);
		uint32_t* L_2 = (uint32_t*)(&L_1->___FixedElementField_0);
		uint64_t L_3 = ___0_val;
		*((int32_t*)L_2) = (int32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_3&((int64_t)(uint64_t)((uint32_t)(-1))))));
		// m_blocks[1] = (uint)(val >> 32 & 0xFFFFFFFF);
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_4 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&__this->___m_blocks_1);
		uint32_t* L_5 = (uint32_t*)(&L_4->___FixedElementField_0);
		uint64_t L_6 = ___0_val;
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_5, 4))) = (int32_t)((int32_t)(uint32_t)((int64_t)(((int64_t)((uint64_t)L_6>>((int32_t)32)))&((int64_t)(uint64_t)((uint32_t)(-1))))));
		// m_length = 2;
		__this->___m_length_0 = 2;
		return;
	}

IL_0034:
	{
		// else if (val != 0)
		uint64_t L_7 = ___0_val;
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// m_blocks[0] = (uint)(val & 0xFFFFFFFF);
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_8 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&__this->___m_blocks_1);
		uint32_t* L_9 = (uint32_t*)(&L_8->___FixedElementField_0);
		uint64_t L_10 = ___0_val;
		*((int32_t*)L_9) = (int32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_10&((int64_t)(uint64_t)((uint32_t)(-1))))));
		// m_length = 1;
		__this->___m_length_0 = 1;
		return;
	}

IL_0050:
	{
		// m_length = 0;
		__this->___m_length_0 = 0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void tBigInt_SetU64_m72EE55FD3169036C517DAF7392CE0A133DD50C14_AdjustorThunk (RuntimeObject* __this, uint64_t ___0_val, const RuntimeMethod* method)
{
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<tBigInt_t6A436AD3913A2950571338A5018B48B299987358*>(__this + _offset);
	tBigInt_SetU64_m72EE55FD3169036C517DAF7392CE0A133DD50C14(_thisAdjusted, ___0_val, method);
}
// System.Void Unity.Burst.BurstString/tBigInt::SetU32(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tBigInt_SetU32_m9EF2E1018CDA89AED4F0FA625E91878BF1772233 (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* __this, uint32_t ___0_val, const RuntimeMethod* method) 
{
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358* G_B3_0 = NULL;
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358* G_B4_1 = NULL;
	{
		// if (val != 0)
		uint32_t L_0 = ___0_val;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// m_blocks[0] = val;
		U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C* L_1 = (U3Cm_blocksU3Ee__FixedBuffer_tBBE20C4EF7009465021F0375E2128D5DCFF59F7C*)(&__this->___m_blocks_1);
		uint32_t* L_2 = (uint32_t*)(&L_1->___FixedElementField_0);
		uint32_t L_3 = ___0_val;
		*((int32_t*)L_2) = (int32_t)L_3;
		// m_length = (val != 0) ? 1 : 0;
		uint32_t L_4 = ___0_val;
		G_B2_0 = __this;
		if (L_4)
		{
			G_B3_0 = __this;
			goto IL_0017;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0018:
	{
		G_B4_1->___m_length_0 = G_B4_0;
		return;
	}

IL_001e:
	{
		// m_length = 0;
		__this->___m_length_0 = 0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void tBigInt_SetU32_m9EF2E1018CDA89AED4F0FA625E91878BF1772233_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_val, const RuntimeMethod* method)
{
	tBigInt_t6A436AD3913A2950571338A5018B48B299987358* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<tBigInt_t6A436AD3913A2950571338A5018B48B299987358*>(__this + _offset);
	tBigInt_SetU32_m9EF2E1018CDA89AED4F0FA625E91878BF1772233(_thisAdjusted, ___0_val, method);
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
// System.Boolean Unity.Burst.BurstString/tFloatUnion32::IsNegative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tFloatUnion32_IsNegative_m75BC8B54D468278FCBA4535D6118346B3C8F9388 (tFloatUnion32_t1140001CA96F869F598FBC16C082BC2BA85AB2CA* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsNegative() { return (m_integer >> 31) != 0; }
		uint32_t L_0 = __this->___m_integer_1;
		return (bool)((!(((uint32_t)((int32_t)((uint32_t)L_0>>((int32_t)31)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool tFloatUnion32_IsNegative_m75BC8B54D468278FCBA4535D6118346B3C8F9388_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	tFloatUnion32_t1140001CA96F869F598FBC16C082BC2BA85AB2CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<tFloatUnion32_t1140001CA96F869F598FBC16C082BC2BA85AB2CA*>(__this + _offset);
	bool _returnValue;
	_returnValue = tFloatUnion32_IsNegative_m75BC8B54D468278FCBA4535D6118346B3C8F9388(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 Unity.Burst.BurstString/tFloatUnion32::GetExponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t tFloatUnion32_GetExponent_m83ED8E199331F83BC7AE3E48DCCCA8E6212CA6A6 (tFloatUnion32_t1140001CA96F869F598FBC16C082BC2BA85AB2CA* __this, const RuntimeMethod* method) 
{
	{
		// public uint GetExponent() { return (m_integer >> 23) & 0xFF; }
		uint32_t L_0 = __this->___m_integer_1;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)23)))&((int32_t)255)));
	}
}
IL2CPP_EXTERN_C  uint32_t tFloatUnion32_GetExponent_m83ED8E199331F83BC7AE3E48DCCCA8E6212CA6A6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	tFloatUnion32_t1140001CA96F869F598FBC16C082BC2BA85AB2CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<tFloatUnion32_t1140001CA96F869F598FBC16C082BC2BA85AB2CA*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = tFloatUnion32_GetExponent_m83ED8E199331F83BC7AE3E48DCCCA8E6212CA6A6(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 Unity.Burst.BurstString/tFloatUnion32::GetMantissa()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t tFloatUnion32_GetMantissa_mAB906EE8DD2E27CFB6D98FF99CC2D764FF44F0EF (tFloatUnion32_t1140001CA96F869F598FBC16C082BC2BA85AB2CA* __this, const RuntimeMethod* method) 
{
	{
		// public uint GetMantissa() { return m_integer & 0x7FFFFF; }
		uint32_t L_0 = __this->___m_integer_1;
		return ((int32_t)((int32_t)L_0&((int32_t)8388607)));
	}
}
IL2CPP_EXTERN_C  uint32_t tFloatUnion32_GetMantissa_mAB906EE8DD2E27CFB6D98FF99CC2D764FF44F0EF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	tFloatUnion32_t1140001CA96F869F598FBC16C082BC2BA85AB2CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<tFloatUnion32_t1140001CA96F869F598FBC16C082BC2BA85AB2CA*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = tFloatUnion32_GetMantissa_mAB906EE8DD2E27CFB6D98FF99CC2D764FF44F0EF(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Burst.BurstString/tFloatUnion64::IsNegative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tFloatUnion64_IsNegative_m5427680D1918AB7410EDC266B0524E42313F171B (tFloatUnion64_t737111FBE1FD2D4509E72C45FE6389106B60B2FC* __this, const RuntimeMethod* method) 
{
	{
		// public bool   IsNegative() { return (m_integer >> 63) != 0; }
		uint64_t L_0 = __this->___m_integer_1;
		return (bool)((!(((uint64_t)((int64_t)((uint64_t)L_0>>((int32_t)63)))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool tFloatUnion64_IsNegative_m5427680D1918AB7410EDC266B0524E42313F171B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	tFloatUnion64_t737111FBE1FD2D4509E72C45FE6389106B60B2FC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<tFloatUnion64_t737111FBE1FD2D4509E72C45FE6389106B60B2FC*>(__this + _offset);
	bool _returnValue;
	_returnValue = tFloatUnion64_IsNegative_m5427680D1918AB7410EDC266B0524E42313F171B(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 Unity.Burst.BurstString/tFloatUnion64::GetExponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t tFloatUnion64_GetExponent_m85B0BB29969C376B7FF866A1793C1997645D1D60 (tFloatUnion64_t737111FBE1FD2D4509E72C45FE6389106B60B2FC* __this, const RuntimeMethod* method) 
{
	{
		// public uint GetExponent() { return (uint)((m_integer >> 52) & 0x7FF); }
		uint64_t L_0 = __this->___m_integer_1;
		return ((int32_t)(uint32_t)((int64_t)(((int64_t)((uint64_t)L_0>>((int32_t)52)))&((int64_t)((int32_t)2047)))));
	}
}
IL2CPP_EXTERN_C  uint32_t tFloatUnion64_GetExponent_m85B0BB29969C376B7FF866A1793C1997645D1D60_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	tFloatUnion64_t737111FBE1FD2D4509E72C45FE6389106B60B2FC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<tFloatUnion64_t737111FBE1FD2D4509E72C45FE6389106B60B2FC*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = tFloatUnion64_GetExponent_m85B0BB29969C376B7FF866A1793C1997645D1D60(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt64 Unity.Burst.BurstString/tFloatUnion64::GetMantissa()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t tFloatUnion64_GetMantissa_m6EAD50CE3D1BFDABD12A308F2FF83F586F61328C (tFloatUnion64_t737111FBE1FD2D4509E72C45FE6389106B60B2FC* __this, const RuntimeMethod* method) 
{
	{
		// public ulong GetMantissa() { return m_integer & 0xFFFFFFFFFFFFFUL; }
		uint64_t L_0 = __this->___m_integer_1;
		return ((int64_t)((int64_t)L_0&((int64_t)4503599627370495LL)));
	}
}
IL2CPP_EXTERN_C  uint64_t tFloatUnion64_GetMantissa_m6EAD50CE3D1BFDABD12A308F2FF83F586F61328C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	tFloatUnion64_t737111FBE1FD2D4509E72C45FE6389106B60B2FC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<tFloatUnion64_t737111FBE1FD2D4509E72C45FE6389106B60B2FC*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = tFloatUnion64_GetMantissa_m6EAD50CE3D1BFDABD12A308F2FF83F586F61328C(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void* Unity.Burst.SharedStatic::GetOrCreateSharedStaticInternal(System.Int64,System.Int64,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* SharedStatic_GetOrCreateSharedStaticInternal_m9850783202F2E2DCA43597CD97C129C683D6FEBD (int64_t ___0_getHashCode64, int64_t ___1_getSubHashCode64, uint32_t ___2_sizeOf, uint32_t ___3_alignment, const RuntimeMethod* method) 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var hash128 = new UnityEngine.Hash128((ulong)getHashCode64, (ulong)getSubHashCode64);
		int64_t L_0 = ___0_getHashCode64;
		int64_t L_1 = ___1_getSubHashCode64;
		Hash128__ctor_m0B61E717B3FF7D7BBD8FF12C8C8327C18A2AAAF3((&V_0), L_0, L_1, NULL);
		// var result = Unity.Burst.LowLevel.BurstCompilerService.GetOrCreateSharedMemory(ref hash128, sizeOf, alignment);
		uint32_t L_2 = ___2_sizeOf;
		uint32_t L_3 = ___3_alignment;
		void* L_4;
		L_4 = BurstCompilerService_GetOrCreateSharedMemory_m1293EB3119CBEE41DBCC0E3B2235601BD927BFE6((&V_0), L_2, L_3, NULL);
		// return result;
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
// System.Void Unity.Burst.SharedStatic/PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_m5C7C403F74E9EAEB24409A43B4EB60B4A161AB0F (PreserveAttribute_tDEA15EF9DCAB8AC4428ED72A2A1377384FE7C27B* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatMode_mFC4C13A636FAF57510757D42EA1017C1A3FA6580_inline (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public FloatMode FloatMode { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CFloatModeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatPrecision_m62685CD0A4F258FB8779A37BC01DAABB83DFD465_inline (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public FloatPrecision FloatPrecision { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CFloatPrecisionU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeMethodHandle_get_Value_m0EC577635F04EAB0185051CF6DF2EF0F76127B1F_inline (RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_EnableBurstCompilation_mE10DF1EAAF0A56906D9784498FD48EAC1B012CD0_inline (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) 
{
	{
		// get => _enableBurstCompilation;
		bool L_0 = __this->____enableBurstCompilation_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_IsGlobal_m8500610C2E650CFE58411EAD12DEE4F5F49C30B4_inline (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) 
{
	{
		// private bool IsGlobal { get; }
		bool L_0 = __this->___U3CIsGlobalU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_Options_mEC956014E83B4671F431159FE7D1DDD6BE5BC91E_inline (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string[] Options { get; set; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_value;
		__this->___U3COptionsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* BurstCompilerOptions_get_OptionsChanged_m073BEAA6F0BA3EA5F42853CE2BB33681D6274C69_inline (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) 
{
	{
		// internal Action OptionsChanged { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___U3COptionsChangedU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* NumberBuffer_GetDigitsPointer_m877C617CEE264BE12DE38D7289D741ED39B99846_inline (NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4* __this, const RuntimeMethod* method) 
{
	{
		// public byte* GetDigitsPointer() => _buffer;
		uint8_t* L_0 = __this->____buffer_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tBigInt_GetLength_m223AD69D6DB118C879FC58EF544D50C4A2E978E7_inline (tBigInt_t6A436AD3913A2950571338A5018B48B299987358* __this, const RuntimeMethod* method) 
{
	{
		// public int GetLength()        { return m_length; }
		int32_t L_0 = __this->___m_length_0;
		return L_0;
	}
}
