﻿#include "pch-cpp.hpp"

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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty>
struct IEnumerator_1_tE241CB87CC95A73A720D51ACEC78F0245F877C86;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonToken>
struct IEnumerator_1_t02CD314CF6671EA4E8F21A8C41D664B043C07DD3;
// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>
struct List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E;
// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>
struct List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>
struct List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED;
// Newtonsoft.Json.Bson.BsonProperty[]
struct BsonPropertyU5BU5D_tE77AACFC9C5CEE1F990C258B77C2C1BBBBC583E5;
// Newtonsoft.Json.Bson.BsonToken[]
struct BsonTokenU5BU5D_tE5ED6E776E77B95220ED90B899FC35F33C39BD07;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
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
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// Newtonsoft.Json.Bson.BsonReader/ContainerContext[]
struct ContainerContextU5BU5D_tE42AA5D2C4E0FD7AC139F4E619241748C176783E;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// Newtonsoft.Json.Bson.BsonArray
struct BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1;
// Newtonsoft.Json.Bson.BsonBinary
struct BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8;
// Newtonsoft.Json.Bson.BsonBinaryWriter
struct BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09;
// Newtonsoft.Json.Bson.BsonBoolean
struct BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD;
// Newtonsoft.Json.Bson.BsonEmpty
struct BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8;
// Newtonsoft.Json.Bson.BsonObject
struct BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB;
// Newtonsoft.Json.Bson.BsonObjectId
struct BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2;
// Newtonsoft.Json.Bson.BsonProperty
struct BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE;
// Newtonsoft.Json.Bson.BsonReader
struct BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423;
// Newtonsoft.Json.Bson.BsonRegex
struct BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1;
// Newtonsoft.Json.Bson.BsonString
struct BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4;
// Newtonsoft.Json.Bson.BsonValue
struct BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660;
// Newtonsoft.Json.Bson.BsonWriter
struct BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765;
// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3;
// Newtonsoft.Json.JsonWriterException
struct JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Newtonsoft.Json.Bson.BsonReader/ContainerContext
struct ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Text.UTF8Encoding/UTF8EncodingSealed
struct UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonReaderState_tD4B4396ABF029DAD64E0389C71168E3C4949B41F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonType_tB6A96FAF144D5C44C1B6071029D7FBBCF806AF51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t597C435D76D0912631AF7909B79461C347020E0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t02CD314CF6671EA4E8F21A8C41D664B043C07DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE241CB87CC95A73A720D51ACEC78F0245F877C86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* State_tFC19CCEAFF8F4E6C73914F3B8850C622CE3490A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral013D189FFF6214B6307FB356F81DB4FD46A89D0E;
IL2CPP_EXTERN_C String_t* _stringLiteral040ACBC1C698075688E5B27E50C6370BEB2676A0;
IL2CPP_EXTERN_C String_t* _stringLiteral06A61D64D27460EF04BE4DCF66F6E64E285C68A4;
IL2CPP_EXTERN_C String_t* _stringLiteral0C97C66F7D6312F0BCB5A4E3E9ED7F8F1CF50F6A;
IL2CPP_EXTERN_C String_t* _stringLiteral15F434DE6EB05B31D391B12B5A8516BD141B7A93;
IL2CPP_EXTERN_C String_t* _stringLiteral161567E318CEB965509FE84CE4198A12E62440AF;
IL2CPP_EXTERN_C String_t* _stringLiteral37FDA2B361182A202537DCA1203AB3BEC2779E2F;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4C48A326ACCC25E558DC329A6C92D8184942B973;
IL2CPP_EXTERN_C String_t* _stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral66598110B46A51C4B35EB3014DABBD9FFC1FA160;
IL2CPP_EXTERN_C String_t* _stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2;
IL2CPP_EXTERN_C String_t* _stringLiteral6E0489F9FAF23DF58DCABE03DAEB479BD06406A5;
IL2CPP_EXTERN_C String_t* _stringLiteral7630F7A0C27B2EE30DD70CE0777AD917869A5FC4;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8F72A13E7E8E1CB50038C54FE7CC02AB7582F7AA;
IL2CPP_EXTERN_C String_t* _stringLiteralAEE8864CE32A6E593EF9DA8C7FCDB920CEE839A0;
IL2CPP_EXTERN_C String_t* _stringLiteralD63216A99D4FD683AD72F25F707C7D4A188E2029;
IL2CPP_EXTERN_C String_t* _stringLiteralD76F2E16F30EA8C8C52D4ABD70B672BC7A3AEAB2;
IL2CPP_EXTERN_C String_t* _stringLiteralD8CD2F2DA1948373D6BFA8C44122166BC25E3FC0;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5269102EEAA6174B84EBA318CAFFA90AE3217B;
IL2CPP_EXTERN_C String_t* _stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC83771A00C701043A940F621CC1C765D30D31;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C String_t* _stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAD954A5D5DC7494CB8B4AE55EDFCFE125A1338;
IL2CPP_EXTERN_C const RuntimeMethod* BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonObjectId__ctor_m755CAEE2BE89A3B5A751FE980FB1A333B3D603C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_GetString_mB3FD61F039F2636EE8B6B4BF2CAF84A26E4DDBFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_ReadCodeWScope_m0DA7805CE5A3D1CC83E1554C8015207538D1FF3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_Read_mFEBE910985E708117F1DFB084E839D4EC4432C70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteComment_m43D84D85207162EF1083D96254809FD5422D46C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteObjectId_mF118E0F427F73A1FEAFB3853F056E9BE87524452_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteRawValue_m12591A651F07D961A685E3C463098ED87557CB02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteRaw_m166F2B79C505DA68A9A52275A9DF26B397A4460D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteStartConstructor_m1F88ADAEF8A51724CCBEDBF45591F27C337A9B15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteValue_m244AEDCA1E419CEFAC8A082D4B9A0C4689FF2CCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteValue_m253E004DDC355C900E5146C875EFEBFE0B808CFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m05A778DDB06E3015BA3B2B539CB6360D44308F65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7B3928D9D175A2FC23AD66D3F2E0BC9200D98E5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFB02AD1C6DBE2CCEC757E8633ED0353BFCA3A415_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m872CB87380297BB9B43B61A80CB28F4A8C1C9011_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC2E8A71D702B5F722A83170C68470084EA6F1AEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m157C47B733293E34DDC19F26D66D2C959F8251FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3935A6D299A58068CCFB138217E1D9C02F7130E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m573D86B46CB0180CD99560B5E3B03E4A5CDE368E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF6B5797FA7FC75AAAE66FC325B93A5C2AC311E98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>
struct List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BsonPropertyU5BU5D_tE77AACFC9C5CEE1F990C258B77C2C1BBBBC583E5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>
struct List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BsonTokenU5BU5D_tE5ED6E776E77B95220ED90B899FC35F33C39BD07* ____items_1;
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

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>
struct List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ContainerContextU5BU5D_tE42AA5D2C4E0FD7AC139F4E619241748C176783E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t2100A0BC4744267E7860382071B8C5AC5C15E6CD  : public RuntimeObject
{
};

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

// Newtonsoft.Json.Bson.BsonBinaryWriter
struct BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09  : public RuntimeObject
{
	// System.IO.BinaryWriter Newtonsoft.Json.Bson.BsonBinaryWriter::_writer
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ____writer_1;
	// System.Byte[] Newtonsoft.Json.Bson.BsonBinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_2;
	// System.DateTimeKind Newtonsoft.Json.Bson.BsonBinaryWriter::<DateTimeKindHandling>k__BackingField
	int32_t ___U3CDateTimeKindHandlingU3Ek__BackingField_3;
};

// Newtonsoft.Json.Bson.BsonObjectId
struct BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2  : public RuntimeObject
{
	// System.Byte[] Newtonsoft.Json.Bson.BsonObjectId::<Value>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CValueU3Ek__BackingField_0;
};

// Newtonsoft.Json.Bson.BsonProperty
struct BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE  : public RuntimeObject
{
	// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonProperty::<Name>k__BackingField
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___U3CNameU3Ek__BackingField_0;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonProperty::<Value>k__BackingField
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___U3CValueU3Ek__BackingField_1;
};

// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4  : public RuntimeObject
{
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonToken::<Parent>k__BackingField
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___U3CParentU3Ek__BackingField_0;
	// System.Int32 Newtonsoft.Json.Bson.BsonToken::<CalculatedSize>k__BackingField
	int32_t ___U3CCalculatedSizeU3Ek__BackingField_1;
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

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;
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

// Newtonsoft.Json.Bson.BsonReader/ContainerContext
struct ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A  : public RuntimeObject
{
	// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader/ContainerContext::Type
	int8_t ___Type_0;
	// System.Int32 Newtonsoft.Json.Bson.BsonReader/ContainerContext::Length
	int32_t ___Length_1;
	// System.Int32 Newtonsoft.Json.Bson.BsonReader/ContainerContext::Position
	int32_t ___Position_2;
};

// System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Bson.BsonProperty>
struct Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Bson.BsonToken>
struct Enumerator_t597C435D76D0912631AF7909B79461C347020E0C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ____current_3;
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

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F 
{
	// System.Int32 System.Numerics.BigInteger::_sign
	int32_t ____sign_0;
	// System.UInt32[] System.Numerics.BigInteger::_bits
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____bits_1;
};
// Native definition for P/Invoke marshalling of System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke
{
	int32_t ____sign_0;
	Il2CppSafeArray/*NONE*/* ____bits_1;
};
// Native definition for COM marshalling of System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com
{
	int32_t ____sign_0;
	Il2CppSafeArray/*NONE*/* ____bits_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// Newtonsoft.Json.Bson.BsonArray
struct BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1  : public BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken> Newtonsoft.Json.Bson.BsonArray::_children
	List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* ____children_2;
};

// Newtonsoft.Json.Bson.BsonEmpty
struct BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8  : public BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4
{
	// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonEmpty::<Type>k__BackingField
	int8_t ___U3CTypeU3Ek__BackingField_4;
};

// Newtonsoft.Json.Bson.BsonObject
struct BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB  : public BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty> Newtonsoft.Json.Bson.BsonObject::_children
	List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* ____children_2;
};

// Newtonsoft.Json.Bson.BsonRegex
struct BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1  : public BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4
{
	// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::<Pattern>k__BackingField
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___U3CPatternU3Ek__BackingField_2;
	// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::<Options>k__BackingField
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___U3COptionsU3Ek__BackingField_3;
};

// Newtonsoft.Json.Bson.BsonValue
struct BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660  : public BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4
{
	// System.Object Newtonsoft.Json.Bson.BsonValue::_value
	RuntimeObject* ____value_2;
	// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonValue::_type
	int8_t ____type_3;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E 
{
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;
};
// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
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

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
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

// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE  : public Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095
{
	// System.Boolean System.Text.UTF8Encoding::_emitUTF8Identifier
	bool ____emitUTF8Identifier_18;
	// System.Boolean System.Text.UTF8Encoding::_isThrowException
	bool ____isThrowException_19;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct __StaticArrayInitTypeSizeU3D10_t2D94270D7B052DF2B0E1709CF65BBFB0CC814D8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t2D94270D7B052DF2B0E1709CF65BBFB0CC814D8F__padding[10];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_tE90359F0CD1BEDE1C7689E8B514B601C509627D0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tE90359F0CD1BEDE1C7689E8B514B601C509627D0__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFD46B3DD967382E5D96BE5CA4345732DEEED51D2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFD46B3DD967382E5D96BE5CA4345732DEEED51D2__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_tC16C381DF0B3CA4BD93AC8CDA35C4B380DD187A1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tC16C381DF0B3CA4BD93AC8CDA35C4B380DD187A1__padding[20];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_tF0225D9C6172DF007FE90AF8D9E4655390CD88EC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_tF0225D9C6172DF007FE90AF8D9E4655390CD88EC__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct __StaticArrayInitTypeSizeU3D28_t0100FD18FF65715BC25E2BF08EC7C3052FDE2A77 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t0100FD18FF65715BC25E2BF08EC7C3052FDE2A77__padding[28];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct __StaticArrayInitTypeSizeU3D40_t1672A8AB2BC5BBFC71D184ED523D14D02EA62968 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t1672A8AB2BC5BBFC71D184ED523D14D02EA62968__padding[40];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct __StaticArrayInitTypeSizeU3D44_tA60F548D647725107E2BA182D24D0561B24FED62 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_tA60F548D647725107E2BA182D24D0561B24FED62__padding[44];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_t7DC45007ADF2FA0BF5C6470DEC1A790AC78583EB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_t7DC45007ADF2FA0BF5C6470DEC1A790AC78583EB__padding[48];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct __StaticArrayInitTypeSizeU3D52_tAB96EF88882201B83E07D300C007D1D396914920 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_tAB96EF88882201B83E07D300C007D1D396914920__padding[52];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
struct __StaticArrayInitTypeSizeU3D6_tDB565845177A27186A10B7E9A656A02A889729EE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_tDB565845177A27186A10B7E9A656A02A889729EE__padding[6];
	};
};

// Newtonsoft.Json.Bson.BsonBinary
struct BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8  : public BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660
{
	// Newtonsoft.Json.Bson.BsonBinaryType Newtonsoft.Json.Bson.BsonBinary::<BinaryType>k__BackingField
	uint8_t ___U3CBinaryTypeU3Ek__BackingField_4;
};

// Newtonsoft.Json.Bson.BsonBoolean
struct BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD  : public BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660
{
};

// Newtonsoft.Json.Bson.BsonString
struct BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE  : public BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660
{
	// System.Int32 Newtonsoft.Json.Bson.BsonString::<ByteCount>k__BackingField
	int32_t ___U3CByteCountU3Ek__BackingField_4;
	// System.Boolean Newtonsoft.Json.Bson.BsonString::<IncludeLength>k__BackingField
	bool ___U3CIncludeLengthU3Ek__BackingField_5;
};

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_9;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_10;
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

// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765  : public RuntimeObject
{
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject* ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;
};

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.JsonWriter::<AutoCompleteOnClose>k__BackingField
	bool ___U3CAutoCompleteOnCloseU3Ek__BackingField_7;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_8;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_9;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_10;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_11;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_12;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_13;
};

// Newtonsoft.Json.Bson.BsonReader
struct BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423  : public JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765
{
	// System.IO.BinaryReader Newtonsoft.Json.Bson.BsonReader::_reader
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ____reader_20;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext> Newtonsoft.Json.Bson.BsonReader::_stack
	List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* ____stack_21;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_22;
	// System.Char[] Newtonsoft.Json.Bson.BsonReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_23;
	// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader::_currentElementType
	int8_t ____currentElementType_24;
	// Newtonsoft.Json.Bson.BsonReader/BsonReaderState Newtonsoft.Json.Bson.BsonReader::_bsonReaderState
	int32_t ____bsonReaderState_25;
	// Newtonsoft.Json.Bson.BsonReader/ContainerContext Newtonsoft.Json.Bson.BsonReader::_currentContext
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* ____currentContext_26;
	// System.Boolean Newtonsoft.Json.Bson.BsonReader::_readRootValueAsArray
	bool ____readRootValueAsArray_27;
	// System.Boolean Newtonsoft.Json.Bson.BsonReader::_jsonNet35BinaryCompatibility
	bool ____jsonNet35BinaryCompatibility_28;
	// System.DateTimeKind Newtonsoft.Json.Bson.BsonReader::_dateTimeKindHandling
	int32_t ____dateTimeKindHandling_29;
};

// Newtonsoft.Json.Bson.BsonWriter
struct BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456  : public JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3
{
	// Newtonsoft.Json.Bson.BsonBinaryWriter Newtonsoft.Json.Bson.BsonWriter::_writer
	BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* ____writer_14;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonWriter::_root
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ____root_15;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonWriter::_parent
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ____parent_16;
	// System.String Newtonsoft.Json.Bson.BsonWriter::_propertyName
	String_t* ____propertyName_17;
};

// Newtonsoft.Json.JsonException
struct JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA  : public JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD
{
	// System.Int32 Newtonsoft.Json.JsonReaderException::<LineNumber>k__BackingField
	int32_t ___U3CLineNumberU3Ek__BackingField_18;
	// System.Int32 Newtonsoft.Json.JsonReaderException::<LinePosition>k__BackingField
	int32_t ___U3CLinePositionU3Ek__BackingField_19;
	// System.String Newtonsoft.Json.JsonReaderException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_20;
};

// Newtonsoft.Json.JsonWriterException
struct JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA  : public JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD
{
	// System.String Newtonsoft.Json.JsonWriterException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_18;
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
};

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>
struct List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BsonPropertyU5BU5D_tE77AACFC9C5CEE1F990C258B77C2C1BBBBC583E5* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>
struct List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BsonTokenU5BU5D_tE5ED6E776E77B95220ED90B899FC35F33C39BD07* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>
struct List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ContainerContextU5BU5D_tE42AA5D2C4E0FD7AC139F4E619241748C176783E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t2100A0BC4744267E7860382071B8C5AC5C15E6CD_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::0F002A59EC63CCA50A3CC2C062C42A4935A05C35
	__StaticArrayInitTypeSizeU3D20_tC16C381DF0B3CA4BD93AC8CDA35C4B380DD187A1 ___0F002A59EC63CCA50A3CC2C062C42A4935A05C35_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::2DD83A8B0A7366E2EAC75009078BFE8632CDC70D
	__StaticArrayInitTypeSizeU3D16_tFD46B3DD967382E5D96BE5CA4345732DEEED51D2 ___2DD83A8B0A7366E2EAC75009078BFE8632CDC70D_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::3D16927F86DFCAB43DBD64C5F60D8998877BB9DC
	__StaticArrayInitTypeSizeU3D48_t7DC45007ADF2FA0BF5C6470DEC1A790AC78583EB ___3D16927F86DFCAB43DBD64C5F60D8998877BB9DC_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::3DE43C11C7130AF9014115BCDC2584DFE6B50579
	__StaticArrayInitTypeSizeU3D6_tDB565845177A27186A10B7E9A656A02A889729EE ___3DE43C11C7130AF9014115BCDC2584DFE6B50579_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::54B7E4C5C88483847DA5B1EFB2E217B53FEF9666
	__StaticArrayInitTypeSizeU3D20_tC16C381DF0B3CA4BD93AC8CDA35C4B380DD187A1 ___54B7E4C5C88483847DA5B1EFB2E217B53FEF9666_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::610F3BBD757449636B52AB1E8670DE917884C641
	__StaticArrayInitTypeSizeU3D40_t1672A8AB2BC5BBFC71D184ED523D14D02EA62968 ___610F3BBD757449636B52AB1E8670DE917884C641_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::6F297923D21BE95CE222BF981C2B5FB1B824C582
	__StaticArrayInitTypeSizeU3D20_tC16C381DF0B3CA4BD93AC8CDA35C4B380DD187A1 ___6F297923D21BE95CE222BF981C2B5FB1B824C582_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::804BD52EB3CDCB7BB0E8C8567DDEE46653FC624E
	__StaticArrayInitTypeSizeU3D40_t1672A8AB2BC5BBFC71D184ED523D14D02EA62968 ___804BD52EB3CDCB7BB0E8C8567DDEE46653FC624E_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9A14E82BEEDCA749BDA3423758C6033328AE9D16
	__StaticArrayInitTypeSizeU3D16_tFD46B3DD967382E5D96BE5CA4345732DEEED51D2 ___9A14E82BEEDCA749BDA3423758C6033328AE9D16_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::9E31F24F64765FCAA589F589324D17C9FCF6A06D
	__StaticArrayInitTypeSizeU3D28_t0100FD18FF65715BC25E2BF08EC7C3052FDE2A77 ___9E31F24F64765FCAA589F589324D17C9FCF6A06D_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::A2ABD69721A03D7D0642D81CF0763E03FF1FFBB4
	__StaticArrayInitTypeSizeU3D44_tA60F548D647725107E2BA182D24D0561B24FED62 ___A2ABD69721A03D7D0642D81CF0763E03FF1FFBB4_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::A578D03ED416447261A6B1B139697ADD728B35B8
	__StaticArrayInitTypeSizeU3D16_tFD46B3DD967382E5D96BE5CA4345732DEEED51D2 ___A578D03ED416447261A6B1B139697ADD728B35B8_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::A6DC2102A5AEF8F5B8C5387A080F381336A1853F
	__StaticArrayInitTypeSizeU3D40_t1672A8AB2BC5BBFC71D184ED523D14D02EA62968 ___A6DC2102A5AEF8F5B8C5387A080F381336A1853F_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::ADFD2E1C801C825415DD53F4F2F72A13B389313C
	__StaticArrayInitTypeSizeU3D12_tE90359F0CD1BEDE1C7689E8B514B601C509627D0 ___ADFD2E1C801C825415DD53F4F2F72A13B389313C_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::C4C312E2FC5BDFB59C5C048BCB568D6DD6D44220
	__StaticArrayInitTypeSizeU3D40_t1672A8AB2BC5BBFC71D184ED523D14D02EA62968 ___C4C312E2FC5BDFB59C5C048BCB568D6DD6D44220_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::D06BCCE559D1067E5035085507D7504CDC37BF0A
	__StaticArrayInitTypeSizeU3D40_t1672A8AB2BC5BBFC71D184ED523D14D02EA62968 ___D06BCCE559D1067E5035085507D7504CDC37BF0A_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::D288968AD84532DC3EF6F9F09DC70F2ACA02C7C6
	__StaticArrayInitTypeSizeU3D24_tF0225D9C6172DF007FE90AF8D9E4655390CD88EC ___D288968AD84532DC3EF6F9F09DC70F2ACA02C7C6_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB
	__StaticArrayInitTypeSizeU3D10_t2D94270D7B052DF2B0E1709CF65BBFB0CC814D8F ___D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::D68E65A98602F8616EEDC785B546177DF94150BD
	__StaticArrayInitTypeSizeU3D40_t1672A8AB2BC5BBFC71D184ED523D14D02EA62968 ___D68E65A98602F8616EEDC785B546177DF94150BD_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::DD3AEFEADB1CD615F3017763F1568179FEE640B0
	__StaticArrayInitTypeSizeU3D52_tAB96EF88882201B83E07D300C007D1D396914920 ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::E92B39D8233061927D9ACDE54665E68E7535635A
	__StaticArrayInitTypeSizeU3D52_tAB96EF88882201B83E07D300C007D1D396914920 ___E92B39D8233061927D9ACDE54665E68E7535635A_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::F0126FF7D771FAC4CE63479D6D4CF5934A341EC6
	__StaticArrayInitTypeSizeU3D40_t1672A8AB2BC5BBFC71D184ED523D14D02EA62968 ___F0126FF7D771FAC4CE63479D6D4CF5934A341EC6_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::FAD59F79E931A8B88E11F4B140DC08CFBFEFDF45
	__StaticArrayInitTypeSizeU3D28_t0100FD18FF65715BC25E2BF08EC7C3052FDE2A77 ___FAD59F79E931A8B88E11F4B140DC08CFBFEFDF45_22;
};

// <PrivateImplementationDetails>

// System.IO.BinaryReader

// System.IO.BinaryReader

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
};

// System.IO.BinaryWriter

// Newtonsoft.Json.Bson.BsonBinaryWriter
struct BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields
{
	// System.Text.Encoding Newtonsoft.Json.Bson.BsonBinaryWriter::Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___Encoding_0;
};

// Newtonsoft.Json.Bson.BsonBinaryWriter

// Newtonsoft.Json.Bson.BsonObjectId

// Newtonsoft.Json.Bson.BsonObjectId

// Newtonsoft.Json.Bson.BsonProperty

// Newtonsoft.Json.Bson.BsonProperty

// Newtonsoft.Json.Bson.BsonToken

// Newtonsoft.Json.Bson.BsonToken

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

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_35;
};

// System.Uri

// Newtonsoft.Json.Bson.BsonReader/ContainerContext

// Newtonsoft.Json.Bson.BsonReader/ContainerContext

// System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Bson.BsonProperty>

// System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Bson.BsonProperty>

// System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Bson.BsonToken>

// System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Bson.BsonToken>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

// System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields
{
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnMinInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinInt_2;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnOneInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnOneInt_3;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnZeroInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnZeroInt_4;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnMinusOneInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinusOneInt_5;
	// System.Byte[] System.Numerics.BigInteger::s_success
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_success_6;
};

// System.Numerics.BigInteger

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// Newtonsoft.Json.Bson.BsonArray

// Newtonsoft.Json.Bson.BsonArray

// Newtonsoft.Json.Bson.BsonEmpty
struct BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_StaticFields
{
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonEmpty::Null
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___Null_2;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonEmpty::Undefined
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___Undefined_3;
};

// Newtonsoft.Json.Bson.BsonEmpty

// Newtonsoft.Json.Bson.BsonObject

// Newtonsoft.Json.Bson.BsonObject

// Newtonsoft.Json.Bson.BsonRegex

// Newtonsoft.Json.Bson.BsonRegex

// Newtonsoft.Json.Bson.BsonValue

// Newtonsoft.Json.Bson.BsonValue

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Decimal

// System.Double

// System.Double

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.SByte

// System.SByte

// System.Single

// System.Single

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

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

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_StaticFields
{
	// System.Text.UTF8Encoding/UTF8EncodingSealed System.Text.UTF8Encoding::s_default
	UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36* ___s_default_16;
	// System.Byte[] System.Text.UTF8Encoding::s_preamble
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_preamble_17;
};

// System.Text.UTF8Encoding

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6

// Newtonsoft.Json.Bson.BsonBinary

// Newtonsoft.Json.Bson.BsonBinary

// Newtonsoft.Json.Bson.BsonBoolean
struct BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_StaticFields
{
	// Newtonsoft.Json.Bson.BsonBoolean Newtonsoft.Json.Bson.BsonBoolean::False
	BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD* ___False_4;
	// Newtonsoft.Json.Bson.BsonBoolean Newtonsoft.Json.Bson.BsonBoolean::True
	BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD* ___True_5;
};

// Newtonsoft.Json.Bson.BsonBoolean

// Newtonsoft.Json.Bson.BsonString

// Newtonsoft.Json.Bson.BsonString

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

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Newtonsoft.Json.JsonReader

// Newtonsoft.Json.JsonReader

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_StaticFields
{
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArrayTempate
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArrayTempate_1;
};

// Newtonsoft.Json.JsonWriter

// Newtonsoft.Json.Bson.BsonReader
struct BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields
{
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::SeqRange1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SeqRange1_16;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::SeqRange2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SeqRange2_17;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::SeqRange3
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SeqRange3_18;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::SeqRange4
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SeqRange4_19;
};

// Newtonsoft.Json.Bson.BsonReader

// Newtonsoft.Json.Bson.BsonWriter

// Newtonsoft.Json.Bson.BsonWriter

// System.ArgumentException

// System.ArgumentException

// Newtonsoft.Json.JsonReaderException

// Newtonsoft.Json.JsonReaderException

// Newtonsoft.Json.JsonWriterException

// Newtonsoft.Json.JsonWriterException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// System.IO.EndOfStreamException

// System.IO.EndOfStreamException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::set_DateTimeKindHandling(System.DateTimeKind)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonBinaryWriter_set_DateTimeKindHandling_mE5606CA1E2ADA134652CEC5A0306E5F728E80FC5_inline (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter_Dispose_m62A1213D09FA2598A6F7866DC60357D53393E5B2 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSize(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_t, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteTokenInternal(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_t, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonToken::get_CalculatedSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty> Newtonsoft.Json.Bson.BsonObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonObject_GetEnumerator_mD0C11E8BAC09FB62CA08FF674E3F7F23690AE14D (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonProperty::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* BsonProperty_get_Value_m0DAFFE451F84BACD72C5FF9F592D351117DB85F2_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonProperty::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonProperty_get_Name_mF70295B575263AB7307995C119732FBA89FB6FA9_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) ;
// System.Object Newtonsoft.Json.Bson.BsonValue::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* __this, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonString::get_ByteCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteString(System.String,System.Int32,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, String_t* ___0_s, int32_t ___1_byteCount, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___2_calculatedlengthPrefix, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonToken> Newtonsoft.Json.Bson.BsonArray::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonArray_GetEnumerator_m38E989DD847BFBA1D9AE6408890EBEC664E0729C (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.UInt64::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mCDDACF05D6B5B3ECB10B1FEEE58ED3407973E7A7 (uint64_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Utilities.MathUtils::IntLength(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MathUtils_IntLength_m23241F09F5280B9249FBD8D666E56C81E464919C (uint64_t ___0_i, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m5C8BF1D45F508E7AEDA393AE72555148527E3ED3 (RuntimeObject* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Int64 System.Convert::ToInt64(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m6CA00ABB70FAD8242C62ED9913F7D7C3B811FC31 (RuntimeObject* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m8DED60F2E0251A3D389F1DD22AA5AF9CD440ABE8 (RuntimeObject* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___0_value, method);
}
// System.DateTimeKind Newtonsoft.Json.Bson.BsonBinaryWriter::get_DateTimeKindHandling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_get_DateTimeKindHandling_m90614E0F1C0F02A38281C923194D7339F536664F_inline (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToLocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_mA2ACEC25DDFC8FD1CD43D6368BDF4FB612B453B8 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_dateTime, bool ___1_convertToUtc, const RuntimeMethod* method) ;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeOffset_get_UtcDateTime_mE7EB39F361C89E1367CBC03C3410BA34F194DA40 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTimeOffset::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTimeOffset_get_Offset_mE90E2548227F1EE8BF4A6A5EB71B32D48D3035A4 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m0D5815D6340AC9707A7FD04B27F2101845CC598F (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_dateTime, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_offset, const RuntimeMethod* method) ;
// Newtonsoft.Json.Bson.BsonBinaryType Newtonsoft.Json.Bson.BsonBinary::get_BinaryType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BsonBinary_get_BinaryType_mDE0AC23257F594CDF9EECBBD6C9BF59D998DD91B_inline (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::get_Pattern()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonRegex_get_Pattern_mA699B72A76008CE662D1715632112D68F8BB85CC_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonRegex_get_Options_mDCE4C399FD3DB3BE40F013A3458CCCD0FCB44211_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5 (String_t* ___0_format, RuntimeObject* ___1_provider, RuntimeObject* ___2_arg0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteUtf8Bytes(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteUtf8Bytes_m8D5ECCD51C6AB60CE140EF0AF33E9E5C6A1485AB (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, String_t* ___0_s, int32_t ___1_byteCount, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonToken::set_CalculatedSize(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSize_m2AF1B2832ECDC9964A31AA22CD528C0514BCAE46 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___0_stringByteCount, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonString::set_ByteCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonString_set_ByteCount_m31A317821BECC7731FA48F92B5433200A6515BCF_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Bson.BsonString::get_IncludeLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BsonString_get_IncludeLength_m0E82D14B7DF5B53FBCD95D5891C3F79E96462D2D_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSizeWithLength(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSizeWithLength_mB26898787AEA883063A203D7B1C2325586B6E737 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___0_stringByteCount, bool ___1_includeSize, const RuntimeMethod* method) ;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_mBCC79DB57729512321FA4F0E17342F0D1A43EA34 (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* __this, bool ___0_encoderShouldEmitUTF8Identifier, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888 (RuntimeObject* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.Stream,System.Boolean,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_mF744C7E937F79AB3421D775693B583EB820168BF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, bool ___1_readRootValueAsArray, int32_t ___2_dateTimeKindHandling, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.BinaryReader,System.Boolean,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_m5991340F78C61D5938CF823F1C7D309FEF4037FC (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, bool ___1_readRootValueAsArray, int32_t ___2_dateTimeKindHandling, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m1C65CDB90A8B108668938BBE17329FEC76D62C27 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>::.ctor()
inline void List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader::ReadType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonReader_ReadType_m609B4018D61DC17479EA954CAB7A4CF38F9ED691 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Bson.BsonReader::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadString_m43756951ED9A74FE856F42E2CF1A1BE2AE341100 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadNormal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadCodeWScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadCodeWScope_m0DA7805CE5A3D1CC83E1554C8015207538D1FF3E (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.JsonReaderException Newtonsoft.Json.JsonReaderException::Create(Newtonsoft.Json.JsonReader,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonReader::SetToken(Newtonsoft.Json.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, int32_t ___0_newToken, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Close_m68AD33DBE5DA0990DB82A21F3AB2D1F91AE49F84 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.JsonReader::get_CloseInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonReader_get_CloseInput_m5D28FC12BD22B62AA1E493BC7A77402F1AA26DE4_inline (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader_Dispose_mAFF1A9CE9A73D148270FFA1F896992EB52D36078 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonReader::SetToken(Newtonsoft.Json.JsonToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, int32_t ___0_newToken, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonReader::ReadInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Bson.BsonReader::ReadLengthString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::get_CurrentState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699_inline (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader/ContainerContext::.ctor(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* __this, int8_t ___0_type, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::PushContext(Newtonsoft.Json.Bson.BsonReader/ContainerContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* ___0_newContext, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonReader_ReadBytes_m1CC1F7104F11C353A30134E0AA3D66B3F52938F7 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___0_count, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A (RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::ReadType(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int8_t ___0_type, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Bson.BsonReader::ReadElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadElement_m51016B8553A73DB79F38CF122BF6292662F4D754 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Byte Newtonsoft.Json.Bson.BsonReader::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BsonReader_ReadByte_mC6BD5BEBF68FF9ECC8741786CE7A62B50CACAAE4 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::PopContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_PopContext_m63825894764D148A8EE7451048A0761FF27BE312 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::MovePosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___0_count, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>::get_Count()
inline int32_t List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_inline (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m157C47B733293E34DDC19F26D66D2C959F8251FE (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// T System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>::get_Item(System.Int32)
inline ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* List_1_get_Item_mF6B5797FA7FC75AAAE66FC325B93A5C2AC311E98 (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* (*) (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>::Add(T)
inline void List_1_Add_mFB02AD1C6DBE2CCEC757E8633ED0353BFCA3A415_inline (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* __this, ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*, ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Double Newtonsoft.Json.Bson.BsonReader::ReadDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BsonReader_ReadDouble_m4E7917E24274C4A8DE38DAA6DAD13B019AE75C52 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Convert_ToDecimal_m2A6822B7BCB33F60B9425C58248111D316C3FE4C (RuntimeObject* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadBinary(Newtonsoft.Json.Bson.BsonBinaryType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonReader_ReadBinary_m4A4F52AE9037A613C091BF93066D918478C2FECF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, uint8_t* ___0_binaryType, const RuntimeMethod* method) ;
// System.Void System.Guid::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C (Guid_t* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_b, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m6148BAC617B69CACDF14A8C74836767DFF0CB6A9 (uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Int64 Newtonsoft.Json.Bson.BsonReader::ReadInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BsonReader_ReadInt64_m3CD355565907B98481732EC6A91102F89CE1FF02 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::ConvertJavaScriptTicksToDateTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeUtils_ConvertJavaScriptTicksToDateTime_m927253156D26643004345A45B5FE76648E8F8884 (int64_t ___0_javaScriptTicks, const RuntimeMethod* method) ;
// System.DateTimeKind Newtonsoft.Json.Bson.BsonReader::get_DateTimeKindHandling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonReader_get_DateTimeKindHandling_m7A6ED156AAC7CD3D4343B0779E4ABD90E247333D_inline (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_SpecifyKind_mFC3F6DD6AD017F62A8AF81DAD5620AEC474871D0 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, int32_t ___1_kind, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::EnsureBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_EnsureBuffers_mC7DD59EA3A760B60368F4A117D73F4448F706BB1 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_val, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonReader::GetLastFullCharStop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_GetLastFullCharStop_m5F12D814D034886A5A2CA2FADA4B8411D0FE90AD (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___0_start, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747 (StringBuilder_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_value, int32_t ___1_startIndex, int32_t ___2_charCount, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Bson.BsonReader::GetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_GetString_mB3FD61F039F2636EE8B6B4BF2CAF84A26E4DDBFC (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___0_length, const RuntimeMethod* method) ;
// System.Void System.IO.EndOfStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4 (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonReader::BytesInSequence(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_BytesInSequence_mFEDFB2E86DEB1DE9F3773FE802BD6D37BBC1A36E (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, uint8_t ___0_b, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonProperty__ctor_mFC963BA0F736C7A11FE68BB3A4DDE63A99B3A54C (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonString::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56 (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, RuntimeObject* ___0_value, bool ___1_includeLength, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonProperty::set_Name(Newtonsoft.Json.Bson.BsonString)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonProperty_set_Name_mBF75E093501D61ABA9B44CD595A848386002EDA0_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonProperty::set_Value(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonProperty_set_Value_m7DAC5256E7337131CB0004255D86FBB812E5BAD8_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>::Add(T)
inline void List_1_Add_m05A778DDB06E3015BA3B2B539CB6360D44308F65_inline (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* __this, BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E*, BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void Newtonsoft.Json.Bson.BsonToken::set_Parent(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonToken_set_Parent_m6FE9310A7BE7920BFBBB78D007D3326FE25861BC_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>::GetEnumerator()
inline Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203 List_1_GetEnumerator_m872CB87380297BB9B43B61A80CB28F4A8C1C9011 (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203 (*) (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>::.ctor()
inline void List_1__ctor_m573D86B46CB0180CD99560B5E3B03E4A5CDE368E (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Newtonsoft.Json.Bson.BsonToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>::Add(T)
inline void List_1_Add_m7B3928D9D175A2FC23AD66D3F2E0BC9200D98E5D_inline (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE*, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>::GetEnumerator()
inline Enumerator_t597C435D76D0912631AF7909B79461C347020E0C List_1_GetEnumerator_mC2E8A71D702B5F722A83170C68470084EA6F1AEE (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t597C435D76D0912631AF7909B79461C347020E0C (*) (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>::.ctor()
inline void List_1__ctor_m3935A6D299A58068CCFB138217E1D9C02F7130E1 (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Newtonsoft.Json.Bson.BsonEmpty::.ctor(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonEmpty__ctor_m7FD72E9106B5CECA3B85DAC437D81FF1C89C8F75 (BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8* __this, int8_t ___0_type, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonValue::.ctor(System.Object,Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695 (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* __this, RuntimeObject* ___0_value, int8_t ___1_type, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBoolean::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBoolean__ctor_mBFEDD9C83B640D17F73B2ACA0B92DCD58D5781D5 (BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinary::set_BinaryType(Newtonsoft.Json.Bson.BsonBinaryType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonBinary_set_BinaryType_m967019AC06E6A447F796DCA7A73CABEFF3C7402A_inline (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonRegex::set_Pattern(Newtonsoft.Json.Bson.BsonString)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonRegex_set_Pattern_m03387AC7A329EEAA6442715EA019B93C7D4A14FF_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonRegex::set_Options(Newtonsoft.Json.Bson.BsonString)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonRegex_set_Options_m8A305E5CD6B32F3A48F6BC31203892A26FE967FC_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m5B0E4DCEC60E5158D71DDF7768E0FC5B09573739 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_output, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::.ctor(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter__ctor_mD40C3447EF11061CE8EEE41BB5ED7A874102DC3C (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_writer, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_Flush_m8844BC6FFEE6C0BE26F4D807110A1F4C1E6658DA (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteEnd(Newtonsoft.Json.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteEnd_m36FB4C43EE0F01066B13019046E5EECF96C902B8 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, int32_t ___0_token, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonWriter::RemoveParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_RemoveParent_m76AEE3E680B0AA556D984C4D7AE1848C198AF103 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.JsonWriter::get_Top()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriter_get_Top_m5095DA8B798DD98BE08ACA13C1C9CD816E9CB335 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteToken(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteToken_m1CBE5AB86FEB5C2399287FEAEBFB80F9094A48E9 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_t, const RuntimeMethod* method) ;
// Newtonsoft.Json.JsonWriterException Newtonsoft.Json.JsonWriterException::Create(Newtonsoft.Json.JsonWriter,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___0_writer, String_t* ___1_message, Exception_t* ___2_ex, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteStartArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteStartArray_mE2EDFEE60214B989C151DCD66C2B3219D927C75A (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonArray__ctor_m3121DAA5995AA53B27FCE79E5F69D13131F1F9F1 (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddParent(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddParent_m5733DE6024C0F5F3DF8B2638EB25D9DF15AB2761 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_container, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteStartObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteStartObject_m327A0474DB3032162614C57B6154773EA900C153 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObject__ctor_m630E32FEFB85ABC73DA890C946486161162E0BDA (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_mD805FBFFF2D43C2EC1E23A59C0102E5244CD537F (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Close_m550789FF5D483AA86A99B5301B375F5BFB08C523 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.JsonWriter::get_CloseOutput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonWriter_get_CloseOutput_m0A40D11FF244B8766FA5A2467C78024B6E2F4736_inline (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_Close_m16C6400A2D52FFC66BC3F29D7A94373EDCB6291C (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddToken(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_token, const RuntimeMethod* method) ;
// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonToken::get_Parent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* BsonToken_get_Parent_m05A247A8B1E2FB87849EB7B6FE0B49A606BEF1A2_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonObject::Add(System.String,Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObject_Add_mC5FD9CC9FC974FC4D7B10981A33291E88DB9DC79 (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, String_t* ___0_name, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___1_token, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonArray::Add(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonArray_Add_m483471C0CDB8A4438E1A0274845DC6424BDB765D (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_token, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::SetWriteState(Newtonsoft.Json.JsonToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_SetWriteState_m5B9E16507E0F0539F8BD43ACBE7A4DE549DA9463 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, int32_t ___0_token, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Byte[] System.Numerics.BigInteger::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_ToByteArray_mC501D315AF605FB0EF172628E9D4C95D2F015EB3 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinary::.ctor(System.Byte[],Newtonsoft.Json.Bson.BsonBinaryType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinary__ctor_m5B3120436DF99BD5D9DE02D2695CD9DE2CE7BB5B (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, uint8_t ___1_binaryType, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mC96DBA6DC02ACB9D67D4524889764368DB468C2E (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteNull_m2BF712564701AA53BAC6BD922677FF7B0B2310BC (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteUndefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteUndefined_m507BF49F988B94F07230A9B502D7E430E1ACCF00 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m3ECF13257A8D1AB90301A4174D42337149BC9D0C (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m8E9BDBD7C29F82DCCB87B4F5D17304F5A341A5B8 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddValue(System.Object,Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, RuntimeObject* ___0_value, int8_t ___1_type, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m94B80E8F2C3BF83E01624C8DE99D37CAEF2FE39B (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mEAB0A21EA57BEDF7BAD742C3F2A75EEB2E1091FE (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m9A6D49A850A3EA706B7143FF45BCF9DECF2A6ED5 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mB83A734CC93E3FA5CF86ACD51DC69F42DF7FEA54 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m2C9947B42490CA9AB5E8EEFB36B3E00359C472D9 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m9EF9755CB7576F61E081148C00169A7128903B8B (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mE7084E3565A5BAE07F9E553F7C9362C2022E5B44 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, int16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m152C46080EAA9C377E3E2E2942B16273F93A2148 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mD5E4500BFFBC814E26C57409026A403C71EEECCF (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m1AEB560BFD2393EBBE9E766263CA01E3BA2D0E6F (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m0E635E0E6B005CD8D434FE57FAC79655FD774C4C (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, int8_t ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mBCA33B3507B7A3BBDA956DC573ACEEB6A9D359D8 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m0FF59870C2C94523F795BF6F7F2FFC30CE179F8A (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) ;
// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::get_DateTimeZoneHandling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonWriter_get_DateTimeZoneHandling_m70A3776234605D953796332656844492C164F799_inline (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::EnsureDateTime(System.DateTime,Newtonsoft.Json.DateTimeZoneHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeUtils_EnsureDateTime_mA79D09FFD516714FB3A1296F5E55780FBD5191C8 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, int32_t ___1_timeZone, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mF792BC34323AF19A7161B55838A630A9E169A132 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mE1F445EACF5FB3E7EDF70D0C89BB230D95084DAD (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mE9DA95DC1D6DAC672C97C861B92D3CB63933EC7B (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, Guid_t ___0_value, const RuntimeMethod* method) ;
// System.Byte[] System.Guid::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9 (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mBE7C0F46DDAD5B5F4D814A322D271B8141BF0F07 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) ;
// System.String System.TimeSpan::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeSpan_ToString_m44D5BF48E35E18BB8B99A86B6535DA5E847FFE92 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_op_Equality_mD7D7AAB7023C0873B37D8B8C7195BEF34002A194 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_uri1, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___1_uri2, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mBEB204C502C7E1547FC955BDBF558C0D616CD65A (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonRegex::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonRegex__ctor_mA823184E2E1262D62F38DC5D1ACC130B5B0EEE99 (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, String_t* ___0_pattern, String_t* ___1_options, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.DateTimeKind Newtonsoft.Json.Bson.BsonBinaryWriter::get_DateTimeKindHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_get_DateTimeKindHandling_m90614E0F1C0F02A38281C923194D7339F536664F (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDateTimeKindHandlingU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::set_DateTimeKindHandling(System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_set_DateTimeKindHandling_mE5606CA1E2ADA134652CEC5A0306E5F728E80FC5 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CDateTimeKindHandlingU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::.ctor(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter__ctor_mD40C3447EF11061CE8EEE41BB5ED7A874102DC3C (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_writer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BsonBinaryWriter_set_DateTimeKindHandling_mE5606CA1E2ADA134652CEC5A0306E5F728E80FC5_inline(__this, 1, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_writer;
		__this->____writer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____writer_1), (void*)L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_Flush_m8844BC6FFEE6C0BE26F4D807110A1F4C1E6658DA (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) 
{
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = __this->____writer_1;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(6 /* System.Void System.IO.BinaryWriter::Flush() */, L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_Close_m16C6400A2D52FFC66BC3F29D7A94373EDCB6291C (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) 
{
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = __this->____writer_1;
		NullCheck(L_0);
		BinaryWriter_Dispose_m62A1213D09FA2598A6F7866DC60357D53393E5B2(L_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteToken(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteToken_m1CBE5AB86FEB5C2399287FEAEBFB80F9094A48E9 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_t, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___0_t;
		int32_t L_1;
		L_1 = BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907(__this, L_0, NULL);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_2 = ___0_t;
		BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E(__this, L_2, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteTokenInternal(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t02CD314CF6671EA4E8F21A8C41D664B043C07DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE241CB87CC95A73A720D51ACEC78F0245F877C86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int8_t V_0 = 0;
	BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* V_3 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_4;
	memset((&V_4), 0, sizeof(V_4));
	BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* V_5 = NULL;
	uint64_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* V_8 = NULL;
	BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* V_9 = NULL;
	BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* V_10 = NULL;
	BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* V_11 = NULL;
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* V_12 = NULL;
	BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* V_13 = NULL;
	int64_t V_14 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_15;
	memset((&V_15), 0, sizeof(V_15));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_16;
	memset((&V_16), 0, sizeof(V_16));
	BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* V_17 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_18 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_19 = NULL;
	BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* V_20 = NULL;
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___0_t;
		NullCheck(L_0);
		int8_t L_1;
		L_1 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_0);
		V_0 = L_1;
		int8_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_01d6;
			}
			case 1:
			{
				goto IL_01fb;
			}
			case 2:
			{
				goto IL_005c;
			}
			case 3:
			{
				goto IL_00f2;
			}
			case 4:
			{
				goto IL_02ca;
			}
			case 5:
			{
				goto IL_03b7;
			}
			case 6:
			{
				goto IL_030f;
			}
			case 7:
			{
				goto IL_022b;
			}
			case 8:
			{
				goto IL_023f;
			}
			case 9:
			{
				goto IL_03b7;
			}
			case 10:
			{
				goto IL_032f;
			}
			case 11:
			{
				goto IL_0392;
			}
			case 12:
			{
				goto IL_0392;
			}
			case 13:
			{
				goto IL_0392;
			}
			case 14:
			{
				goto IL_0392;
			}
			case 15:
			{
				goto IL_018c;
			}
			case 16:
			{
				goto IL_0392;
			}
			case 17:
			{
				goto IL_01b1;
			}
		}
	}
	{
		goto IL_0392;
	}

IL_005c:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_3 = ___0_t;
		V_1 = ((BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB*)CastclassClass((RuntimeObject*)L_3, BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = __this->____writer_1;
		BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_4, L_6);
		BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* L_7 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = BsonObject_GetEnumerator_mD0C11E8BAC09FB62CA08FF674E3F7F23690AE14D(L_7, NULL);
		V_2 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00db:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_2;
					if (!L_9)
					{
						goto IL_00e4;
					}
				}
				{
					RuntimeObject* L_10 = V_2;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_00e4:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d1_1;
			}

IL_007d_1:
			{
				RuntimeObject* L_11 = V_2;
				NullCheck(L_11);
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_12;
				L_12 = InterfaceFuncInvoker0< BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty>::get_Current() */, IEnumerator_1_tE241CB87CC95A73A720D51ACEC78F0245F877C86_il2cpp_TypeInfo_var, L_11);
				V_3 = L_12;
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_13 = __this->____writer_1;
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_14 = V_3;
				NullCheck(L_14);
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_15;
				L_15 = BsonProperty_get_Value_m0DAFFE451F84BACD72C5FF9F592D351117DB85F2_inline(L_14, NULL);
				NullCheck(L_15);
				int8_t L_16;
				L_16 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_15);
				NullCheck(L_13);
				VirtualActionInvoker1< int8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.SByte) */, L_13, L_16);
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_17 = V_3;
				NullCheck(L_17);
				BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_18;
				L_18 = BsonProperty_get_Name_mF70295B575263AB7307995C119732FBA89FB6FA9_inline(L_17, NULL);
				NullCheck(L_18);
				RuntimeObject* L_19;
				L_19 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_18, NULL);
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_20 = V_3;
				NullCheck(L_20);
				BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_21;
				L_21 = BsonProperty_get_Name_mF70295B575263AB7307995C119732FBA89FB6FA9_inline(L_20, NULL);
				NullCheck(L_21);
				int32_t L_22;
				L_22 = BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline(L_21, NULL);
				il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_23 = V_4;
				BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_19, String_t_il2cpp_TypeInfo_var)), L_22, L_23, NULL);
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_24 = V_3;
				NullCheck(L_24);
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_25;
				L_25 = BsonProperty_get_Value_m0DAFFE451F84BACD72C5FF9F592D351117DB85F2_inline(L_24, NULL);
				BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E(__this, L_25, NULL);
			}

IL_00d1_1:
			{
				RuntimeObject* L_26 = V_2;
				NullCheck(L_26);
				bool L_27;
				L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				if (L_27)
				{
					goto IL_007d_1;
				}
			}
			{
				goto IL_00e5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e5:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_28 = __this->____writer_1;
		NullCheck(L_28);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_28, (uint8_t)0);
		return;
	}

IL_00f2:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_29 = ___0_t;
		V_5 = ((BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1*)CastclassClass((RuntimeObject*)L_29, BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_30 = __this->____writer_1;
		BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* L_31 = V_5;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_31, NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_30, L_32);
		V_6 = ((int64_t)0);
		BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* L_33 = V_5;
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = BsonArray_GetEnumerator_m38E989DD847BFBA1D9AE6408890EBEC664E0729C(L_33, NULL);
		V_7 = L_34;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0173:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_35 = V_7;
					if (!L_35)
					{
						goto IL_017e;
					}
				}
				{
					RuntimeObject* L_36 = V_7;
					NullCheck(L_36);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_36);
				}

IL_017e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0168_1;
			}

IL_011b_1:
			{
				RuntimeObject* L_37 = V_7;
				NullCheck(L_37);
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_38;
				L_38 = InterfaceFuncInvoker0< BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonToken>::get_Current() */, IEnumerator_1_t02CD314CF6671EA4E8F21A8C41D664B043C07DD3_il2cpp_TypeInfo_var, L_37);
				V_8 = L_38;
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_39 = __this->____writer_1;
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_40 = V_8;
				NullCheck(L_40);
				int8_t L_41;
				L_41 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_40);
				NullCheck(L_39);
				VirtualActionInvoker1< int8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.SByte) */, L_39, L_41);
				il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_42;
				L_42 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
				String_t* L_43;
				L_43 = UInt64_ToString_mCDDACF05D6B5B3ECB10B1FEEE58ED3407973E7A7((&V_6), L_42, NULL);
				uint64_t L_44 = V_6;
				int32_t L_45;
				L_45 = MathUtils_IntLength_m23241F09F5280B9249FBD8D666E56C81E464919C(L_44, NULL);
				il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_46 = V_4;
				BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801(__this, L_43, L_45, L_46, NULL);
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_47 = V_8;
				BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E(__this, L_47, NULL);
				uint64_t L_48 = V_6;
				V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_48, ((int64_t)1)));
			}

IL_0168_1:
			{
				RuntimeObject* L_49 = V_7;
				NullCheck(L_49);
				bool L_50;
				L_50 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_49);
				if (L_50)
				{
					goto IL_011b_1;
				}
			}
			{
				goto IL_017f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_017f:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_51 = __this->____writer_1;
		NullCheck(L_51);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_51, (uint8_t)0);
		return;
	}

IL_018c:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_52 = ___0_t;
		V_9 = ((BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)CastclassClass((RuntimeObject*)L_52, BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_53 = __this->____writer_1;
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_54 = V_9;
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_54, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_56;
		L_56 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_57;
		L_57 = Convert_ToInt32_m5C8BF1D45F508E7AEDA393AE72555148527E3ED3(L_55, L_56, NULL);
		NullCheck(L_53);
		VirtualActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_53, L_57);
		return;
	}

IL_01b1:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_58 = ___0_t;
		V_10 = ((BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)CastclassClass((RuntimeObject*)L_58, BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_59 = __this->____writer_1;
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_60 = V_10;
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_60, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_62;
		L_62 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_63;
		L_63 = Convert_ToInt64_m6CA00ABB70FAD8242C62ED9913F7D7C3B811FC31(L_61, L_62, NULL);
		NullCheck(L_59);
		VirtualActionInvoker1< int64_t >::Invoke(19 /* System.Void System.IO.BinaryWriter::Write(System.Int64) */, L_59, L_63);
		return;
	}

IL_01d6:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_64 = ___0_t;
		V_11 = ((BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)CastclassClass((RuntimeObject*)L_64, BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_65 = __this->____writer_1;
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_66 = V_11;
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_66, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_68;
		L_68 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_69;
		L_69 = Convert_ToDouble_m8DED60F2E0251A3D389F1DD22AA5AF9CD440ABE8(L_67, L_68, NULL);
		NullCheck(L_65);
		VirtualActionInvoker1< double >::Invoke(14 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_65, L_69);
		return;
	}

IL_01fb:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_70 = ___0_t;
		V_12 = ((BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)CastclassClass((RuntimeObject*)L_70, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var));
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_71 = V_12;
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_71, NULL);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_73 = V_12;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline(L_73, NULL);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_75 = V_12;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_75, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_77), ((int32_t)il2cpp_codegen_subtract(L_76, 4)), /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_72, String_t_il2cpp_TypeInfo_var)), L_74, L_77, NULL);
		return;
	}

IL_022b:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_78 = __this->____writer_1;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_79 = ___0_t;
		il2cpp_codegen_runtime_class_init_inline(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var);
		BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD* L_80 = ((BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var))->___True_5;
		NullCheck(L_78);
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_78, (bool)((((RuntimeObject*)(BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4*)L_79) == ((RuntimeObject*)(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD*)L_80))? 1 : 0));
		return;
	}

IL_023f:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_81 = ___0_t;
		V_13 = ((BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)CastclassClass((RuntimeObject*)L_81, BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var));
		V_14 = ((int64_t)0);
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_82 = V_13;
		NullCheck(L_82);
		RuntimeObject* L_83;
		L_83 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_82, NULL);
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_83, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)))
		{
			goto IL_0299;
		}
	}
	{
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_84 = V_13;
		NullCheck(L_84);
		RuntimeObject* L_85;
		L_85 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_84, NULL);
		V_15 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_85, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))));
		int32_t L_86;
		L_86 = BsonBinaryWriter_get_DateTimeKindHandling_m90614E0F1C0F02A38281C923194D7339F536664F_inline(__this, NULL);
		if ((!(((uint32_t)L_86) == ((uint32_t)1))))
		{
			goto IL_027b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_87;
		L_87 = DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9((&V_15), NULL);
		V_15 = L_87;
		goto IL_028d;
	}

IL_027b:
	{
		int32_t L_88;
		L_88 = BsonBinaryWriter_get_DateTimeKindHandling_m90614E0F1C0F02A38281C923194D7339F536664F_inline(__this, NULL);
		if ((!(((uint32_t)L_88) == ((uint32_t)2))))
		{
			goto IL_028d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_89;
		L_89 = DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94((&V_15), NULL);
		V_15 = L_89;
	}

IL_028d:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_90 = V_15;
		il2cpp_codegen_runtime_class_init_inline(DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		int64_t L_91;
		L_91 = DateTimeUtils_ConvertDateTimeToJavaScriptTicks_mA2ACEC25DDFC8FD1CD43D6368BDF4FB612B453B8(L_90, (bool)0, NULL);
		V_14 = L_91;
		goto IL_02bc;
	}

IL_0299:
	{
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_92 = V_13;
		NullCheck(L_92);
		RuntimeObject* L_93;
		L_93 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_92, NULL);
		V_16 = ((*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)((DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)UnBox(L_93, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var))));
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_94;
		L_94 = DateTimeOffset_get_UtcDateTime_mE7EB39F361C89E1367CBC03C3410BA34F194DA40((&V_16), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_95;
		L_95 = DateTimeOffset_get_Offset_mE90E2548227F1EE8BF4A6A5EB71B32D48D3035A4((&V_16), NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		int64_t L_96;
		L_96 = DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m0D5815D6340AC9707A7FD04B27F2101845CC598F(L_94, L_95, NULL);
		V_14 = L_96;
	}

IL_02bc:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_97 = __this->____writer_1;
		int64_t L_98 = V_14;
		NullCheck(L_97);
		VirtualActionInvoker1< int64_t >::Invoke(19 /* System.Void System.IO.BinaryWriter::Write(System.Int64) */, L_97, L_98);
		return;
	}

IL_02ca:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_99 = ___0_t;
		V_17 = ((BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8*)CastclassClass((RuntimeObject*)L_99, BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var));
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_100 = V_17;
		NullCheck(L_100);
		RuntimeObject* L_101;
		L_101 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_100, NULL);
		V_18 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_101, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_102 = __this->____writer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = V_18;
		NullCheck(L_103);
		NullCheck(L_102);
		VirtualActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_102, ((int32_t)(((RuntimeArray*)L_103)->max_length)));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_104 = __this->____writer_1;
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_105 = V_17;
		NullCheck(L_105);
		uint8_t L_106;
		L_106 = BsonBinary_get_BinaryType_mDE0AC23257F594CDF9EECBBD6C9BF59D998DD91B_inline(L_105, NULL);
		NullCheck(L_104);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_104, L_106);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_107 = __this->____writer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = V_18;
		NullCheck(L_107);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_107, L_108);
		return;
	}

IL_030f:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_109 = ___0_t;
		NullCheck(((BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)CastclassClass((RuntimeObject*)L_109, BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var)));
		RuntimeObject* L_110;
		L_110 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(((BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)CastclassClass((RuntimeObject*)L_109, BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var)), NULL);
		V_19 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_110, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_111 = __this->____writer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_19;
		NullCheck(L_111);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_111, L_112);
		return;
	}

IL_032f:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_113 = ___0_t;
		V_20 = ((BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1*)CastclassClass((RuntimeObject*)L_113, BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var));
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_114 = V_20;
		NullCheck(L_114);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_115;
		L_115 = BsonRegex_get_Pattern_mA699B72A76008CE662D1715632112D68F8BB85CC_inline(L_114, NULL);
		NullCheck(L_115);
		RuntimeObject* L_116;
		L_116 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_115, NULL);
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_117 = V_20;
		NullCheck(L_117);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_118;
		L_118 = BsonRegex_get_Pattern_mA699B72A76008CE662D1715632112D68F8BB85CC_inline(L_117, NULL);
		NullCheck(L_118);
		int32_t L_119;
		L_119 = BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline(L_118, NULL);
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_120 = V_4;
		BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_116, String_t_il2cpp_TypeInfo_var)), L_119, L_120, NULL);
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_121 = V_20;
		NullCheck(L_121);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_122;
		L_122 = BsonRegex_get_Options_mDCE4C399FD3DB3BE40F013A3458CCCD0FCB44211_inline(L_121, NULL);
		NullCheck(L_122);
		RuntimeObject* L_123;
		L_123 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_122, NULL);
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_124 = V_20;
		NullCheck(L_124);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_125;
		L_125 = BsonRegex_get_Options_mDCE4C399FD3DB3BE40F013A3458CCCD0FCB44211_inline(L_124, NULL);
		NullCheck(L_125);
		int32_t L_126;
		L_126 = BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline(L_125, NULL);
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_127 = V_4;
		BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_123, String_t_il2cpp_TypeInfo_var)), L_126, L_127, NULL);
		return;
	}

IL_0392:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_128;
		L_128 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_129 = ___0_t;
		NullCheck(L_129);
		int8_t L_130;
		L_130 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_129);
		int8_t L_131 = L_130;
		RuntimeObject* L_132 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonType_tB6A96FAF144D5C44C1B6071029D7FBBCF806AF51_il2cpp_TypeInfo_var)), &L_131);
		String_t* L_133;
		L_133 = StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E0489F9FAF23DF58DCABE03DAEB479BD06406A5)), L_128, L_132, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_134 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_134);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_134, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2)), L_133, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_134, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E_RuntimeMethod_var)));
	}

IL_03b7:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteString(System.String,System.Int32,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, String_t* ___0_s, int32_t ___1_byteCount, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___2_calculatedlengthPrefix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&___2_calculatedlengthPrefix), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = __this->____writer_1;
		int32_t L_2;
		L_2 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&___2_calculatedlengthPrefix), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, L_2);
	}

IL_001b:
	{
		String_t* L_3 = ___0_s;
		int32_t L_4 = ___1_byteCount;
		BsonBinaryWriter_WriteUtf8Bytes_m8D5ECCD51C6AB60CE140EF0AF33E9E5C6A1485AB(__this, L_3, L_4, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_5 = __this->____writer_1;
		NullCheck(L_5);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_5, (uint8_t)0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteUtf8Bytes(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteUtf8Bytes_m8D5ECCD51C6AB60CE140EF0AF33E9E5C6A1485AB (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, String_t* ___0_s, int32_t ___1_byteCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_1 = ___1_byteCount;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)256))))
		{
			goto IL_0051;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____largeByteBuffer_2;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->____largeByteBuffer_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____largeByteBuffer_2), (void*)L_3);
	}

IL_0023:
	{
		il2cpp_codegen_runtime_class_init_inline(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4 = ((BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var))->___Encoding_0;
		String_t* L_5 = ___0_s;
		String_t* L_6 = ___0_s;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->____largeByteBuffer_2;
		NullCheck(L_4);
		int32_t L_9;
		L_9 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(27 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_4, L_5, 0, L_7, L_8, 0);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_10 = __this->____writer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->____largeByteBuffer_2;
		int32_t L_12 = ___1_byteCount;
		NullCheck(L_10);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(11 /* System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32) */, L_10, L_11, 0, L_12);
		return;
	}

IL_0051:
	{
		il2cpp_codegen_runtime_class_init_inline(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_13 = ((BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var))->___Encoding_0;
		String_t* L_14 = ___0_s;
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(26 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_13, L_14);
		V_0 = L_15;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_16 = __this->____writer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		NullCheck(L_16);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_16, L_17);
	}

IL_0069:
	{
		return;
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSize_m2AF1B2832ECDC9964A31AA22CD528C0514BCAE46 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___0_stringByteCount, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_stringByteCount;
		return ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSizeWithLength(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSizeWithLength_mB26898787AEA883063A203D7B1C2325586B6E737 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___0_stringByteCount, bool ___1_includeSize, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___1_includeSize;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 5;
	}

IL_0007:
	{
		int32_t L_1 = ___0_stringByteCount;
		return ((int32_t)il2cpp_codegen_add(G_B3_0, L_1));
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSize(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t02CD314CF6671EA4E8F21A8C41D664B043C07DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE241CB87CC95A73A720D51ACEC78F0245F877C86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int8_t V_0 = 0;
	BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* V_4 = NULL;
	int32_t V_5 = 0;
	BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* V_6 = NULL;
	int32_t V_7 = 0;
	uint64_t V_8 = 0;
	RuntimeObject* V_9 = NULL;
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* V_10 = NULL;
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* V_11 = NULL;
	String_t* V_12 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_13 = NULL;
	BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* V_14 = NULL;
	int32_t V_15 = 0;
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* G_B25_0 = NULL;
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* G_B24_0 = NULL;
	int32_t G_B26_0 = 0;
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* G_B26_1 = NULL;
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___0_t;
		NullCheck(L_0);
		int8_t L_1;
		L_1 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_0);
		V_0 = L_1;
		int8_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_0144;
			}
			case 1:
			{
				goto IL_0146;
			}
			case 2:
			{
				goto IL_005c;
			}
			case 3:
			{
				goto IL_00c3;
			}
			case 4:
			{
				goto IL_019f;
			}
			case 5:
			{
				goto IL_019b;
			}
			case 6:
			{
				goto IL_01c4;
			}
			case 7:
			{
				goto IL_0199;
			}
			case 8:
			{
				goto IL_019d;
			}
			case 9:
			{
				goto IL_019b;
			}
			case 10:
			{
				goto IL_01c7;
			}
			case 11:
			{
				goto IL_0207;
			}
			case 12:
			{
				goto IL_0207;
			}
			case 13:
			{
				goto IL_0207;
			}
			case 14:
			{
				goto IL_0207;
			}
			case 15:
			{
				goto IL_0140;
			}
			case 16:
			{
				goto IL_0207;
			}
			case 17:
			{
				goto IL_0142;
			}
		}
	}
	{
		goto IL_0207;
	}

IL_005c:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_3 = ___0_t;
		V_1 = ((BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB*)CastclassClass((RuntimeObject*)L_3, BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var));
		V_2 = 4;
		BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = BsonObject_GetEnumerator_mD0C11E8BAC09FB62CA08FF674E3F7F23690AE14D(L_4, NULL);
		V_3 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ac:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_3;
					if (!L_6)
					{
						goto IL_00b5;
					}
				}
				{
					RuntimeObject* L_7 = V_3;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_00b5:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a2_1;
			}

IL_006e_1:
			{
				RuntimeObject* L_8 = V_3;
				NullCheck(L_8);
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_9;
				L_9 = InterfaceFuncInvoker0< BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty>::get_Current() */, IEnumerator_1_tE241CB87CC95A73A720D51ACEC78F0245F877C86_il2cpp_TypeInfo_var, L_8);
				V_4 = L_9;
				V_5 = 1;
				int32_t L_10 = V_5;
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_11 = V_4;
				NullCheck(L_11);
				BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_12;
				L_12 = BsonProperty_get_Name_mF70295B575263AB7307995C119732FBA89FB6FA9_inline(L_11, NULL);
				int32_t L_13;
				L_13 = BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907(__this, L_12, NULL);
				V_5 = ((int32_t)il2cpp_codegen_add(L_10, L_13));
				int32_t L_14 = V_5;
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_15 = V_4;
				NullCheck(L_15);
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_16;
				L_16 = BsonProperty_get_Value_m0DAFFE451F84BACD72C5FF9F592D351117DB85F2_inline(L_15, NULL);
				int32_t L_17;
				L_17 = BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907(__this, L_16, NULL);
				V_5 = ((int32_t)il2cpp_codegen_add(L_14, L_17));
				int32_t L_18 = V_2;
				int32_t L_19 = V_5;
				V_2 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
			}

IL_00a2_1:
			{
				RuntimeObject* L_20 = V_3;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_006e_1;
				}
			}
			{
				goto IL_00b6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b6:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* L_23 = V_1;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline(L_23, L_24, NULL);
		int32_t L_25 = V_2;
		return L_25;
	}

IL_00c3:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_26 = ___0_t;
		V_6 = ((BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1*)CastclassClass((RuntimeObject*)L_26, BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var));
		V_7 = 4;
		V_8 = ((int64_t)0);
		BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* L_27 = V_6;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = BsonArray_GetEnumerator_m38E989DD847BFBA1D9AE6408890EBEC664E0729C(L_27, NULL);
		V_9 = L_28;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_011d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_29 = V_9;
					if (!L_29)
					{
						goto IL_0128;
					}
				}
				{
					RuntimeObject* L_30 = V_9;
					NullCheck(L_30);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_30);
				}

IL_0128:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0112_1;
			}

IL_00dd_1:
			{
				RuntimeObject* L_31 = V_9;
				NullCheck(L_31);
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_32;
				L_32 = InterfaceFuncInvoker0< BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonToken>::get_Current() */, IEnumerator_1_t02CD314CF6671EA4E8F21A8C41D664B043C07DD3_il2cpp_TypeInfo_var, L_31);
				V_10 = L_32;
				int32_t L_33 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
				int32_t L_34 = V_7;
				uint64_t L_35 = V_8;
				int32_t L_36;
				L_36 = MathUtils_IntLength_m23241F09F5280B9249FBD8D666E56C81E464919C(L_35, NULL);
				int32_t L_37;
				L_37 = BsonBinaryWriter_CalculateSize_m2AF1B2832ECDC9964A31AA22CD528C0514BCAE46(__this, L_36, NULL);
				V_7 = ((int32_t)il2cpp_codegen_add(L_34, L_37));
				int32_t L_38 = V_7;
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_39 = V_10;
				int32_t L_40;
				L_40 = BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907(__this, L_39, NULL);
				V_7 = ((int32_t)il2cpp_codegen_add(L_38, L_40));
				uint64_t L_41 = V_8;
				V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)1)));
			}

IL_0112_1:
			{
				RuntimeObject* L_42 = V_9;
				NullCheck(L_42);
				bool L_43;
				L_43 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_42);
				if (L_43)
				{
					goto IL_00dd_1;
				}
			}
			{
				goto IL_0129;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0129:
	{
		int32_t L_44 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* L_45 = V_6;
		int32_t L_46 = V_7;
		NullCheck(L_45);
		BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline(L_45, L_46, NULL);
		BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* L_47 = V_6;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_47, NULL);
		return L_48;
	}

IL_0140:
	{
		return 4;
	}

IL_0142:
	{
		return 8;
	}

IL_0144:
	{
		return 8;
	}

IL_0146:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_49 = ___0_t;
		V_11 = ((BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)CastclassClass((RuntimeObject*)L_49, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var));
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_50 = V_11;
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_50, NULL);
		V_12 = ((String_t*)CastclassSealed((RuntimeObject*)L_51, String_t_il2cpp_TypeInfo_var));
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_52 = V_11;
		String_t* L_53 = V_12;
		G_B24_0 = L_52;
		if (L_53)
		{
			G_B25_0 = L_52;
			goto IL_0165;
		}
	}
	{
		G_B26_0 = 0;
		G_B26_1 = G_B24_0;
		goto IL_0171;
	}

IL_0165:
	{
		il2cpp_codegen_runtime_class_init_inline(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_54 = ((BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var))->___Encoding_0;
		String_t* L_55 = V_12;
		NullCheck(L_54);
		int32_t L_56;
		L_56 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(19 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_54, L_55);
		G_B26_0 = L_56;
		G_B26_1 = G_B25_0;
	}

IL_0171:
	{
		NullCheck(G_B26_1);
		BsonString_set_ByteCount_m31A317821BECC7731FA48F92B5433200A6515BCF_inline(G_B26_1, G_B26_0, NULL);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_57 = V_11;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_58 = V_11;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline(L_58, NULL);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_60 = V_11;
		NullCheck(L_60);
		bool L_61;
		L_61 = BsonString_get_IncludeLength_m0E82D14B7DF5B53FBCD95D5891C3F79E96462D2D_inline(L_60, NULL);
		int32_t L_62;
		L_62 = BsonBinaryWriter_CalculateSizeWithLength_mB26898787AEA883063A203D7B1C2325586B6E737(__this, L_59, L_61, NULL);
		NullCheck(L_57);
		BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline(L_57, L_62, NULL);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_63 = V_11;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_63, NULL);
		return L_64;
	}

IL_0199:
	{
		return 1;
	}

IL_019b:
	{
		return 0;
	}

IL_019d:
	{
		return 8;
	}

IL_019f:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_65 = ___0_t;
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_66 = ((BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8*)CastclassClass((RuntimeObject*)L_65, BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var));
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline(L_66, NULL);
		V_13 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_67, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_68 = L_66;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = V_13;
		NullCheck(L_69);
		NullCheck(L_68);
		BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline(L_68, ((int32_t)il2cpp_codegen_add(5, ((int32_t)(((RuntimeArray*)L_69)->max_length)))), NULL);
		NullCheck(L_68);
		int32_t L_70;
		L_70 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_68, NULL);
		return L_70;
	}

IL_01c4:
	{
		return ((int32_t)12);
	}

IL_01c7:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_71 = ___0_t;
		V_14 = ((BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1*)CastclassClass((RuntimeObject*)L_71, BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var));
		V_15 = 0;
		int32_t L_72 = V_15;
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_73 = V_14;
		NullCheck(L_73);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_74;
		L_74 = BsonRegex_get_Pattern_mA699B72A76008CE662D1715632112D68F8BB85CC_inline(L_73, NULL);
		int32_t L_75;
		L_75 = BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907(__this, L_74, NULL);
		V_15 = ((int32_t)il2cpp_codegen_add(L_72, L_75));
		int32_t L_76 = V_15;
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_77 = V_14;
		NullCheck(L_77);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_78;
		L_78 = BsonRegex_get_Options_mDCE4C399FD3DB3BE40F013A3458CCCD0FCB44211_inline(L_77, NULL);
		int32_t L_79;
		L_79 = BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907(__this, L_78, NULL);
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, L_79));
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_80 = V_14;
		int32_t L_81 = V_15;
		NullCheck(L_80);
		BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline(L_80, L_81, NULL);
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_82 = V_14;
		NullCheck(L_82);
		int32_t L_83;
		L_83 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_82, NULL);
		return L_83;
	}

IL_0207:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_84;
		L_84 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_85 = ___0_t;
		NullCheck(L_85);
		int8_t L_86;
		L_86 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_85);
		int8_t L_87 = L_86;
		RuntimeObject* L_88 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonType_tB6A96FAF144D5C44C1B6071029D7FBBCF806AF51_il2cpp_TypeInfo_var)), &L_87);
		String_t* L_89;
		L_89 = StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E0489F9FAF23DF58DCABE03DAEB479BD06406A5)), L_84, L_88, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_90 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_90);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_90, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2)), L_89, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_90, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907_RuntimeMethod_var)));
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter__cctor_mA6BEC2932FB2A544F7527BCB1401C139932B39B2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* L_0 = (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE*)il2cpp_codegen_object_new(UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UTF8Encoding__ctor_mBCC79DB57729512321FA4F0E17342F0D1A43EA34(L_0, (bool)0, NULL);
		((BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var))->___Encoding_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var))->___Encoding_0), (void*)L_0);
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
// System.Byte[] Newtonsoft.Json.Bson.BsonObjectId::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonObjectId_get_Value_mEBD0BBDDA460C3B1ECFFBD7B64C709172C7F14CD (BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CValueU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonObjectId::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObjectId__ctor_m755CAEE2BE89A3B5A751FE980FB1A333B3D603C8 (BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888((RuntimeObject*)L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_value;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)((int32_t)12))))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD76F2E16F30EA8C8C52D4ABD70B672BC7A3AEAB2)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonObjectId__ctor_m755CAEE2BE89A3B5A751FE980FB1A333B3D603C8_RuntimeMethod_var)));
	}

IL_0028:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_0), (void*)L_3);
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
// System.Boolean Newtonsoft.Json.Bson.BsonReader::get_JsonNet35BinaryCompatibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_get_JsonNet35BinaryCompatibility_m429C63D604BDC2BBF8CFE35248B4D41371C1DAFE (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____jsonNet35BinaryCompatibility_28;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::set_JsonNet35BinaryCompatibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_set_JsonNet35BinaryCompatibility_mE3AB448A934B558F6A32630E0D70440616570807 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->____jsonNet35BinaryCompatibility_28 = L_0;
		return;
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonReader::get_ReadRootValueAsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_get_ReadRootValueAsArray_mA61EBEBB08A8483EFB848CC9FD3476F413FF0F24 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____readRootValueAsArray_27;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::set_ReadRootValueAsArray(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_set_ReadRootValueAsArray_m2FC5A40C553833F78193274168325865E54ABABA (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->____readRootValueAsArray_27 = L_0;
		return;
	}
}
// System.DateTimeKind Newtonsoft.Json.Bson.BsonReader::get_DateTimeKindHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_get_DateTimeKindHandling_m7A6ED156AAC7CD3D4343B0779E4ABD90E247333D (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____dateTimeKindHandling_29;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::set_DateTimeKindHandling(System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_set_DateTimeKindHandling_m9D015B7C7A3BD6C2C5418B42F7C0E1BBFB510E84 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->____dateTimeKindHandling_29 = L_0;
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_mA390BC9C2C09F1B1A97A0F26430A1E1149D3AE9F (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		BsonReader__ctor_mF744C7E937F79AB3421D775693B583EB820168BF(__this, L_0, (bool)0, 2, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_m8DDC7432406DEBDC42DC0930E73ADC28E767C92B (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, const RuntimeMethod* method) 
{
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___0_reader;
		BsonReader__ctor_m5991340F78C61D5938CF823F1C7D309FEF4037FC(__this, L_0, (bool)0, 2, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.Stream,System.Boolean,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_mF744C7E937F79AB3421D775693B583EB820168BF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, bool ___1_readRootValueAsArray, int32_t ___2_dateTimeKindHandling, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonReader__ctor_m1C65CDB90A8B108668938BBE17329FEC76D62C27(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888(L_0, _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_2, L_1, NULL);
		__this->____reader_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reader_20), (void*)L_2);
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_3 = (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*)il2cpp_codegen_object_new(List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC(L_3, List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC_RuntimeMethod_var);
		__this->____stack_21 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stack_21), (void*)L_3);
		bool L_4 = ___1_readRootValueAsArray;
		__this->____readRootValueAsArray_27 = L_4;
		int32_t L_5 = ___2_dateTimeKindHandling;
		__this->____dateTimeKindHandling_29 = L_5;
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.BinaryReader,System.Boolean,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_m5991340F78C61D5938CF823F1C7D309FEF4037FC (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, bool ___1_readRootValueAsArray, int32_t ___2_dateTimeKindHandling, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAC83771A00C701043A940F621CC1C765D30D31);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonReader__ctor_m1C65CDB90A8B108668938BBE17329FEC76D62C27(__this, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___0_reader;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888(L_0, _stringLiteralECAC83771A00C701043A940F621CC1C765D30D31, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_reader;
		__this->____reader_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reader_20), (void*)L_1);
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_2 = (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*)il2cpp_codegen_object_new(List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC(L_2, List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC_RuntimeMethod_var);
		__this->____stack_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stack_21), (void*)L_2);
		bool L_3 = ___1_readRootValueAsArray;
		__this->____readRootValueAsArray_27 = L_3;
		int32_t L_4 = ___2_dateTimeKindHandling;
		__this->____dateTimeKindHandling_29 = L_4;
		return;
	}
}
// System.String Newtonsoft.Json.Bson.BsonReader::ReadElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadElement_m51016B8553A73DB79F38CF122BF6292662F4D754 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		int8_t L_0;
		L_0 = BsonReader_ReadType_m609B4018D61DC17479EA954CAB7A4CF38F9ED691(__this, NULL);
		__this->____currentElementType_24 = L_0;
		String_t* L_1;
		L_1 = BsonReader_ReadString_m43756951ED9A74FE856F42E2CF1A1BE2AE341100(__this, NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_Read_mFEBE910985E708117F1DFB084E839D4EC4432C70 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = __this->____bsonReaderState_25;
			V_1 = L_0;
			int32_t L_1 = V_1;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0033_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_003c_1;
				}
				case 3:
				{
					goto IL_003c_1;
				}
				case 4:
				{
					goto IL_0045_1;
				}
				case 5:
				{
					goto IL_0045_1;
				}
				case 6:
				{
					goto IL_0045_1;
				}
				case 7:
				{
					goto IL_0045_1;
				}
				case 8:
				{
					goto IL_0045_1;
				}
			}
		}
		{
			goto IL_004e_1;
		}

IL_0033_1:
		{
			bool L_2;
			L_2 = BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF(__this, NULL);
			V_0 = L_2;
			goto IL_006f_1;
		}

IL_003c_1:
		{
			bool L_3;
			L_3 = BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4(__this, NULL);
			V_0 = L_3;
			goto IL_006f_1;
		}

IL_0045_1:
		{
			bool L_4;
			L_4 = BsonReader_ReadCodeWScope_m0DA7805CE5A3D1CC83E1554C8015207538D1FF3E(__this, NULL);
			V_0 = L_4;
			goto IL_006f_1;
		}

IL_004e_1:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
			CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
			L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
			int32_t L_6 = __this->____bsonReaderState_25;
			int32_t L_7 = L_6;
			RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReaderState_tD4B4396ABF029DAD64E0389C71168E3C4949B41F_il2cpp_TypeInfo_var)), &L_7);
			String_t* L_9;
			L_9 = StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBAD954A5D5DC7494CB8B4AE55EDFCFE125A1338)), L_5, L_8, NULL);
			JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_10;
			L_10 = JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529(__this, L_9, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_Read_mFEBE910985E708117F1DFB084E839D4EC4432C70_RuntimeMethod_var)));
		}

IL_006f_1:
		{
			bool L_11 = V_0;
			if (L_11)
			{
				goto IL_007d_1;
			}
		}
		{
			JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 0, NULL);
			V_2 = (bool)0;
			goto IL_008d;
		}

IL_007d_1:
		{
			V_2 = (bool)1;
			goto IL_008d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0081;
		}
		throw e;
	}

CATCH_0081:
	{// begin catch(System.IO.EndOfStreamException)
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 0, NULL);
		V_2 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008d;
	}// end catch (depth: 1)

IL_008d:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_Close_mD087C7D1ACBF9FEB47490BA47BE24298DFD86EC5 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* G_B3_0 = NULL;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* G_B2_0 = NULL;
	{
		JsonReader_Close_m68AD33DBE5DA0990DB82A21F3AB2D1F91AE49F84(__this, NULL);
		bool L_0;
		L_0 = JsonReader_get_CloseInput_m5D28FC12BD22B62AA1E493BC7A77402F1AA26DE4_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = __this->____reader_20;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		NullCheck(G_B3_0);
		BinaryReader_Dispose_mAFF1A9CE9A73D148270FFA1F896992EB52D36078(G_B3_0, NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadCodeWScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadCodeWScope_m0DA7805CE5A3D1CC83E1554C8015207538D1FF3E (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15F434DE6EB05B31D391B12B5A8516BD141B7A93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD63216A99D4FD683AD72F25F707C7D4A188E2029);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* V_1 = NULL;
	bool G_B10_0 = false;
	bool G_B8_0 = false;
	bool G_B9_0 = false;
	{
		int32_t L_0 = __this->____bsonReaderState_25;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 4)))
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_005b;
			}
			case 3:
			{
				goto IL_009c;
			}
			case 4:
			{
				goto IL_00b7;
			}
		}
	}
	{
		goto IL_00c8;
	}

IL_0028:
	{
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 4, _stringLiteralD63216A99D4FD683AD72F25F707C7D4A188E2029, NULL);
		__this->____bsonReaderState_25 = 5;
		return (bool)1;
	}

IL_003d:
	{
		int32_t L_2;
		L_2 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		String_t* L_3;
		L_3 = BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA(__this, NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)9), L_3, NULL);
		__this->____bsonReaderState_25 = 6;
		return (bool)1;
	}

IL_005b:
	{
		int32_t L_4;
		L_4 = JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699_inline(__this, NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)8))))
		{
			goto IL_0072;
		}
	}
	{
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 4, _stringLiteral15F434DE6EB05B31D391B12B5A8516BD141B7A93, NULL);
		return (bool)1;
	}

IL_0072:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 1, NULL);
		__this->____bsonReaderState_25 = 7;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_5 = (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)il2cpp_codegen_object_new(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B(L_5, 3, NULL);
		V_1 = L_5;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_6 = V_1;
		BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF(__this, L_6, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_7 = V_1;
		int32_t L_8;
		L_8 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		NullCheck(L_7);
		L_7->___Length_1 = L_8;
		return (bool)1;
	}

IL_009c:
	{
		bool L_9;
		L_9 = BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF(__this, NULL);
		bool L_10 = L_9;
		G_B8_0 = L_10;
		if (!L_10)
		{
			G_B10_0 = L_10;
			goto IL_00b6;
		}
	}
	{
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, __this);
		G_B9_0 = G_B8_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)13)))))
		{
			G_B10_0 = G_B8_0;
			goto IL_00b6;
		}
	}
	{
		__this->____bsonReaderState_25 = 8;
		G_B10_0 = G_B9_0;
	}

IL_00b6:
	{
		return G_B10_0;
	}

IL_00b7:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, ((int32_t)13), NULL);
		__this->____bsonReaderState_25 = 0;
		return (bool)1;
	}

IL_00c8:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadCodeWScope_m0DA7805CE5A3D1CC83E1554C8015207538D1FF3E_RuntimeMethod_var)));
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_007d;
		}
	}
	{
		goto IL_00d1;
	}

IL_0018:
	{
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 4, _stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382, NULL);
		__this->____bsonReaderState_25 = 2;
		return (bool)1;
	}

IL_002d:
	{
		int32_t L_4 = __this->____bsonReaderState_25;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5;
		L_5 = BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA(__this, NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)9), L_5, NULL);
		return (bool)1;
	}

IL_0046:
	{
		int32_t L_6 = __this->____bsonReaderState_25;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0061;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = BsonReader_ReadBytes_m1CC1F7104F11C353A30134E0AA3D66B3F52938F7(__this, ((int32_t)12), NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)17), (RuntimeObject*)L_7, NULL);
		return (bool)1;
	}

IL_0061:
	{
		int32_t L_8 = __this->____bsonReaderState_25;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReaderState_tD4B4396ABF029DAD64E0389C71168E3C4949B41F_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66598110B46A51C4B35EB3014DABBD9FFC1FA160)), L_10, NULL);
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_12;
		L_12 = JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529(__this, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4_RuntimeMethod_var)));
	}

IL_007d:
	{
		int32_t L_13 = __this->____bsonReaderState_25;
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_009b;
		}
	}
	{
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 4, _stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA, NULL);
		__this->____bsonReaderState_25 = 3;
		return (bool)1;
	}

IL_009b:
	{
		int32_t L_14 = __this->____bsonReaderState_25;
		if ((!(((uint32_t)L_14) == ((uint32_t)3))))
		{
			goto IL_00b5;
		}
	}
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, ((int32_t)13), NULL);
		__this->____bsonReaderState_25 = 0;
		return (bool)1;
	}

IL_00b5:
	{
		int32_t L_15 = __this->____bsonReaderState_25;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReaderState_tD4B4396ABF029DAD64E0389C71168E3C4949B41F_il2cpp_TypeInfo_var)), &L_16);
		String_t* L_18;
		L_18 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66598110B46A51C4B35EB3014DABBD9FFC1FA160)), L_17, NULL);
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_19;
		L_19 = JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529(__this, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4_RuntimeMethod_var)));
	}

IL_00d1:
	{
		int32_t L_20;
		L_20 = JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699_inline(__this, NULL);
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&State_tFC19CCEAFF8F4E6C73914F3B8850C622CE3490A4_il2cpp_TypeInfo_var)), &L_21);
		String_t* L_23;
		L_23 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66598110B46A51C4B35EB3014DABBD9FFC1FA160)), L_22, NULL);
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_24;
		L_24 = JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529(__this, L_23, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4_RuntimeMethod_var)));
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadNormal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B25_0 = 0;
	{
		int32_t L_0;
		L_0 = JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0084;
			}
			case 2:
			{
				goto IL_0086;
			}
			case 3:
			{
				goto IL_0094;
			}
			case 4:
			{
				goto IL_013d;
			}
			case 5:
			{
				goto IL_0094;
			}
			case 6:
			{
				goto IL_013d;
			}
			case 7:
			{
				goto IL_0084;
			}
			case 8:
			{
				goto IL_0094;
			}
			case 9:
			{
				goto IL_0143;
			}
			case 10:
			{
				goto IL_0143;
			}
			case 11:
			{
				goto IL_0143;
			}
			case 12:
			{
				goto IL_0143;
			}
		}
	}
	{
		goto IL_013d;
	}

IL_0046:
	{
		bool L_2 = __this->____readRootValueAsArray_27;
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		G_B5_0 = 2;
		goto IL_0052;
	}

IL_0051:
	{
		G_B5_0 = 1;
	}

IL_0052:
	{
		V_3 = G_B5_0;
		bool L_3 = __this->____readRootValueAsArray_27;
		if (!L_3)
		{
			goto IL_005e;
		}
	}
	{
		G_B8_0 = 4;
		goto IL_005f;
	}

IL_005e:
	{
		G_B8_0 = 3;
	}

IL_005f:
	{
		int32_t L_4 = V_3;
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, L_4, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_5 = (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)il2cpp_codegen_object_new(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B(L_5, G_B8_0, NULL);
		V_4 = L_5;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_6 = V_4;
		BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF(__this, L_6, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_7 = V_4;
		int32_t L_8;
		L_8 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		NullCheck(L_7);
		L_7->___Length_1 = L_8;
		return (bool)1;
	}

IL_0084:
	{
		return (bool)0;
	}

IL_0086:
	{
		int8_t L_9 = __this->____currentElementType_24;
		BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB(__this, L_9, NULL);
		return (bool)1;
	}

IL_0094:
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_10 = __this->____currentContext_26;
		V_1 = L_10;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_11 = V_1;
		if (L_11)
		{
			goto IL_00a0;
		}
	}
	{
		return (bool)0;
	}

IL_00a0:
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = L_12->___Length_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = L_14->___Position_2;
		int32_t L_16 = V_2;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_00df;
		}
	}
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_17 = V_1;
		NullCheck(L_17);
		int8_t L_18 = L_17->___Type_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)4))))
		{
			goto IL_00d0;
		}
	}
	{
		String_t* L_19;
		L_19 = BsonReader_ReadElement_m51016B8553A73DB79F38CF122BF6292662F4D754(__this, NULL);
		int8_t L_20 = __this->____currentElementType_24;
		BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB(__this, L_20, NULL);
		return (bool)1;
	}

IL_00d0:
	{
		String_t* L_21;
		L_21 = BsonReader_ReadElement_m51016B8553A73DB79F38CF122BF6292662F4D754(__this, NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 4, L_21, NULL);
		return (bool)1;
	}

IL_00df:
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = L_22->___Position_2;
		int32_t L_24 = V_2;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0131;
		}
	}
	{
		uint8_t L_25;
		L_25 = BsonReader_ReadByte_mC6BD5BEBF68FF9ECC8741786CE7A62B50CACAAE4(__this, NULL);
		if (!L_25)
		{
			goto IL_00fc;
		}
	}
	{
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_26;
		L_26 = JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDB5269102EEAA6174B84EBA318CAFFA90AE3217B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF_RuntimeMethod_var)));
	}

IL_00fc:
	{
		BsonReader_PopContext_m63825894764D148A8EE7451048A0761FF27BE312(__this, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_27 = __this->____currentContext_26;
		if (!L_27)
		{
			goto IL_0116;
		}
	}
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = L_28->___Length_1;
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, L_29, NULL);
	}

IL_0116:
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_30 = V_1;
		NullCheck(L_30);
		int8_t L_31 = L_30->___Type_0;
		if ((((int32_t)L_31) == ((int32_t)3)))
		{
			goto IL_0123;
		}
	}
	{
		G_B25_0 = ((int32_t)14);
		goto IL_0125;
	}

IL_0123:
	{
		G_B25_0 = ((int32_t)13);
	}

IL_0125:
	{
		V_5 = G_B25_0;
		int32_t L_32 = V_5;
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, L_32, NULL);
		return (bool)1;
	}

IL_0131:
	{
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_33;
		L_33 = JsonReaderException_Create_mE1CBC0A12B559F606A85F2450C4400676ABD6529(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEE8864CE32A6E593EF9DA8C7FCDB920CEE839A0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF_RuntimeMethod_var)));
	}

IL_013d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_34 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_34);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF_RuntimeMethod_var)));
	}

IL_0143:
	{
		return (bool)0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::PopContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_PopContext_m63825894764D148A8EE7451048A0761FF27BE312 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m157C47B733293E34DDC19F26D66D2C959F8251FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF6B5797FA7FC75AAAE66FC325B93A5C2AC311E98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_0 = __this->____stack_21;
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_1 = __this->____stack_21;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_inline(L_1, List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_RemoveAt_m157C47B733293E34DDC19F26D66D2C959F8251FE(L_0, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), List_1_RemoveAt_m157C47B733293E34DDC19F26D66D2C959F8251FE_RuntimeMethod_var);
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_3 = __this->____stack_21;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_inline(L_3, List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		__this->____currentContext_26 = (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentContext_26), (void*)(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)NULL);
		return;
	}

IL_002d:
	{
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_5 = __this->____stack_21;
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_6 = __this->____stack_21;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_inline(L_6, List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_RuntimeMethod_var);
		NullCheck(L_5);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_8;
		L_8 = List_1_get_Item_mF6B5797FA7FC75AAAE66FC325B93A5C2AC311E98(L_5, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), List_1_get_Item_mF6B5797FA7FC75AAAE66FC325B93A5C2AC311E98_RuntimeMethod_var);
		__this->____currentContext_26 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentContext_26), (void*)L_8);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::PushContext(Newtonsoft.Json.Bson.BsonReader/ContainerContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* ___0_newContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFB02AD1C6DBE2CCEC757E8633ED0353BFCA3A415_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_0 = __this->____stack_21;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_1 = ___0_newContext;
		NullCheck(L_0);
		List_1_Add_mFB02AD1C6DBE2CCEC757E8633ED0353BFCA3A415_inline(L_0, L_1, List_1_Add_mFB02AD1C6DBE2CCEC757E8633ED0353BFCA3A415_RuntimeMethod_var);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_2 = ___0_newContext;
		__this->____currentContext_26 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentContext_26), (void*)L_2);
		return;
	}
}
// System.Byte Newtonsoft.Json.Bson.BsonReader::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BsonReader_ReadByte_mC6BD5BEBF68FF9ECC8741786CE7A62B50CACAAE4 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, 1, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_20;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_0);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::ReadType(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int8_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	uint8_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	bool V_5 = false;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_6;
	memset((&V_6), 0, sizeof(V_6));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_7;
	memset((&V_7), 0, sizeof(V_7));
	String_t* V_8 = NULL;
	String_t* V_9 = NULL;
	String_t* V_10 = NULL;
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* V_11 = NULL;
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* V_12 = NULL;
	int32_t V_13 = 0;
	RuntimeObject* G_B11_0 = NULL;
	{
		int8_t L_0 = ___0_type;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_0090;
			}
			case 2:
			{
				goto IL_009f;
			}
			case 3:
			{
				goto IL_00c4;
			}
			case 4:
			{
				goto IL_00e9;
			}
			case 5:
			{
				goto IL_010f;
			}
			case 6:
			{
				goto IL_0118;
			}
			case 7:
			{
				goto IL_012d;
			}
			case 8:
			{
				goto IL_014a;
			}
			case 9:
			{
				goto IL_0195;
			}
			case 10:
			{
				goto IL_019e;
			}
			case 11:
			{
				goto IL_01ce;
			}
			case 12:
			{
				goto IL_01dd;
			}
			case 13:
			{
				goto IL_0090;
			}
			case 14:
			{
				goto IL_01ec;
			}
			case 15:
			{
				goto IL_01fb;
			}
			case 16:
			{
				goto IL_020f;
			}
			case 17:
			{
				goto IL_020f;
			}
		}
	}
	{
		goto IL_0222;
	}

IL_0055:
	{
		double L_1;
		L_1 = BsonReader_ReadDouble_m4E7917E24274C4A8DE38DAA6DAD13B019AE75C52(__this, NULL);
		V_0 = L_1;
		int32_t L_2 = ((JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765*)__this)->____floatParseHandling_10;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0082;
		}
	}
	{
		double L_3 = V_0;
		double L_4 = L_3;
		RuntimeObject* L_5 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_4);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6;
		L_6 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_7;
		L_7 = Convert_ToDecimal_m2A6822B7BCB33F60B9425C58248111D316C3FE4C(L_5, L_6, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_8 = L_7;
		RuntimeObject* L_9 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_8);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 8, L_9, NULL);
		return;
	}

IL_0082:
	{
		double L_10 = V_0;
		double L_11 = L_10;
		RuntimeObject* L_12 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_11);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 8, L_12, NULL);
		return;
	}

IL_0090:
	{
		String_t* L_13;
		L_13 = BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA(__this, NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)9), L_13, NULL);
		return;
	}

IL_009f:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 1, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_14 = (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)il2cpp_codegen_object_new(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B(L_14, 3, NULL);
		V_11 = L_14;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_15 = V_11;
		BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF(__this, L_15, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_16 = V_11;
		int32_t L_17;
		L_17 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		NullCheck(L_16);
		L_16->___Length_1 = L_17;
		return;
	}

IL_00c4:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 2, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_18 = (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)il2cpp_codegen_object_new(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B(L_18, 4, NULL);
		V_12 = L_18;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_19 = V_12;
		BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF(__this, L_19, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_20 = V_12;
		int32_t L_21;
		L_21 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		NullCheck(L_20);
		L_20->___Length_1 = L_21;
		return;
	}

IL_00e9:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = BsonReader_ReadBinary_m4A4F52AE9037A613C091BF93066D918478C2FECF(__this, (&V_1), NULL);
		V_2 = L_22;
		uint8_t L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)4))))
		{
			goto IL_0103;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_2;
		Guid_t L_25;
		memset((&L_25), 0, sizeof(L_25));
		Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C((&L_25), L_24, /*hidden argument*/NULL);
		Guid_t L_26 = L_25;
		RuntimeObject* L_27 = Box(Guid_t_il2cpp_TypeInfo_var, &L_26);
		G_B11_0 = L_27;
		goto IL_0104;
	}

IL_0103:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_2;
		G_B11_0 = ((RuntimeObject*)(L_28));
	}

IL_0104:
	{
		V_3 = G_B11_0;
		RuntimeObject* L_29 = V_3;
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)17), L_29, NULL);
		return;
	}

IL_010f:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, ((int32_t)12), NULL);
		return;
	}

IL_0118:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
		L_30 = BsonReader_ReadBytes_m1CC1F7104F11C353A30134E0AA3D66B3F52938F7(__this, ((int32_t)12), NULL);
		V_4 = L_30;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_4;
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)17), (RuntimeObject*)L_31, NULL);
		return;
	}

IL_012d:
	{
		uint8_t L_32;
		L_32 = BsonReader_ReadByte_mC6BD5BEBF68FF9ECC8741786CE7A62B50CACAAE4(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Convert_ToBoolean_m6148BAC617B69CACDF14A8C74836767DFF0CB6A9(L_32, NULL);
		V_5 = L_33;
		bool L_34 = V_5;
		bool L_35 = L_34;
		RuntimeObject* L_36 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_35);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)10), L_36, NULL);
		return;
	}

IL_014a:
	{
		int64_t L_37;
		L_37 = BsonReader_ReadInt64_m3CD355565907B98481732EC6A91102F89CE1FF02(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_38;
		L_38 = DateTimeUtils_ConvertJavaScriptTicksToDateTime_m927253156D26643004345A45B5FE76648E8F8884(L_37, NULL);
		V_6 = L_38;
		int32_t L_39;
		L_39 = BsonReader_get_DateTimeKindHandling_m7A6ED156AAC7CD3D4343B0779E4ABD90E247333D_inline(__this, NULL);
		V_13 = L_39;
		int32_t L_40 = V_13;
		if (!L_40)
		{
			goto IL_016a;
		}
	}
	{
		int32_t L_41 = V_13;
		if ((((int32_t)L_41) == ((int32_t)2)))
		{
			goto IL_0176;
		}
	}
	{
		goto IL_0181;
	}

IL_016a:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_42 = V_6;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_43;
		L_43 = DateTime_SpecifyKind_mFC3F6DD6AD017F62A8AF81DAD5620AEC474871D0(L_42, 0, NULL);
		V_7 = L_43;
		goto IL_0185;
	}

IL_0176:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_44;
		L_44 = DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94((&V_6), NULL);
		V_7 = L_44;
		goto IL_0185;
	}

IL_0181:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_45 = V_6;
		V_7 = L_45;
	}

IL_0185:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_46 = V_7;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_47 = L_46;
		RuntimeObject* L_48 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_47);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)16), L_48, NULL);
		return;
	}

IL_0195:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, ((int32_t)11), NULL);
		return;
	}

IL_019e:
	{
		String_t* L_49;
		L_49 = BsonReader_ReadString_m43756951ED9A74FE856F42E2CF1A1BE2AE341100(__this, NULL);
		V_8 = L_49;
		String_t* L_50;
		L_50 = BsonReader_ReadString_m43756951ED9A74FE856F42E2CF1A1BE2AE341100(__this, NULL);
		V_9 = L_50;
		String_t* L_51 = V_8;
		String_t* L_52 = V_9;
		String_t* L_53;
		L_53 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_51, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_52, NULL);
		V_10 = L_53;
		String_t* L_54 = V_10;
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)9), L_54, NULL);
		return;
	}

IL_01ce:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 1, NULL);
		__this->____bsonReaderState_25 = 1;
		return;
	}

IL_01dd:
	{
		String_t* L_55;
		L_55 = BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA(__this, NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)9), L_55, NULL);
		return;
	}

IL_01ec:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 1, NULL);
		__this->____bsonReaderState_25 = 4;
		return;
	}

IL_01fb:
	{
		int32_t L_56;
		L_56 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		int64_t L_57 = ((int64_t)L_56);
		RuntimeObject* L_58 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_57);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 7, L_58, NULL);
		return;
	}

IL_020f:
	{
		int64_t L_59;
		L_59 = BsonReader_ReadInt64_m3CD355565907B98481732EC6A91102F89CE1FF02(__this, NULL);
		int64_t L_60 = L_59;
		RuntimeObject* L_61 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_60);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 7, L_61, NULL);
		return;
	}

IL_0222:
	{
		int8_t L_62 = ___0_type;
		int8_t L_63 = L_62;
		RuntimeObject* L_64 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonType_tB6A96FAF144D5C44C1B6071029D7FBBCF806AF51_il2cpp_TypeInfo_var)), &L_63);
		String_t* L_65;
		L_65 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral06A61D64D27460EF04BE4DCF66F6E64E285C68A4)), L_64, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_66 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_66);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_66, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), L_65, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_66, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB_RuntimeMethod_var)));
	}
}
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadBinary(Newtonsoft.Json.Bson.BsonBinaryType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonReader_ReadBinary_m4A4F52AE9037A613C091BF93066D918478C2FECF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, uint8_t* ___0_binaryType, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		V_0 = L_0;
		uint8_t* L_1 = ___0_binaryType;
		uint8_t L_2;
		L_2 = BsonReader_ReadByte_mC6BD5BEBF68FF9ECC8741786CE7A62B50CACAAE4(__this, NULL);
		*((int8_t*)L_1) = (int8_t)L_2;
		uint8_t* L_3 = ___0_binaryType;
		int32_t L_4 = *((uint8_t*)L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0023;
		}
	}
	{
		bool L_5 = __this->____jsonNet35BinaryCompatibility_28;
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_6;
		L_6 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		V_0 = L_6;
	}

IL_0023:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = BsonReader_ReadBytes_m1CC1F7104F11C353A30134E0AA3D66B3F52938F7(__this, L_7, NULL);
		return L_8;
	}
}
// System.String Newtonsoft.Json.Bson.BsonReader::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadString_m43756951ED9A74FE856F42E2CF1A1BE2AE341100 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		BsonReader_EnsureBuffers_mC7DD59EA3A760B60368F4A117D73F4448F706BB1(__this, NULL);
		V_0 = (StringBuilder_t*)NULL;
		V_1 = 0;
		V_2 = 0;
	}

IL_000c:
	{
		int32_t L_0 = V_2;
		V_3 = L_0;
		goto IL_001e;
	}

IL_0010:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____byteBuffer_22;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		uint8_t L_4 = V_4;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
	}

IL_001e:
	{
		int32_t L_5 = V_3;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0037;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_6 = __this->____reader_20;
		NullCheck(L_6);
		uint8_t L_7;
		L_7 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_6);
		uint8_t L_8 = L_7;
		V_4 = L_8;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0010;
		}
	}

IL_0037:
	{
		int32_t L_9 = V_3;
		int32_t L_10 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, L_10));
		int32_t L_11 = V_1;
		int32_t L_12 = V_5;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		int32_t L_13 = V_3;
		if ((((int32_t)L_13) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0080;
		}
	}
	{
		StringBuilder_t* L_14 = V_0;
		if (L_14)
		{
			goto IL_0080;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_15;
		L_15 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->____byteBuffer_22;
		int32_t L_17 = V_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = __this->____charBuffer_23;
		NullCheck(L_15);
		int32_t L_19;
		L_19 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(34 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_15, L_16, 0, L_17, L_18, 0);
		V_6 = L_19;
		int32_t L_20 = V_1;
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, ((int32_t)il2cpp_codegen_add(L_20, 1)), NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = __this->____charBuffer_23;
		int32_t L_22 = V_6;
		String_t* L_23;
		L_23 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_21, 0, L_22, NULL);
		return L_23;
	}

IL_0080:
	{
		int32_t L_24 = V_3;
		int32_t L_25;
		L_25 = BsonReader_GetLastFullCharStop_m5F12D814D034886A5A2CA2FADA4B8411D0FE90AD(__this, ((int32_t)il2cpp_codegen_subtract(L_24, 1)), NULL);
		V_7 = L_25;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_26;
		L_26 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->____byteBuffer_22;
		int32_t L_28 = V_7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_29 = __this->____charBuffer_23;
		NullCheck(L_26);
		int32_t L_30;
		L_30 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(34 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_26, L_27, 0, ((int32_t)il2cpp_codegen_add(L_28, 1)), L_29, 0);
		V_8 = L_30;
		StringBuilder_t* L_31 = V_0;
		if (L_31)
		{
			goto IL_00b7;
		}
	}
	{
		StringBuilder_t* L_32 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_32, ((int32_t)256), NULL);
		V_0 = L_32;
	}

IL_00b7:
	{
		StringBuilder_t* L_33 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_34 = __this->____charBuffer_23;
		int32_t L_35 = V_8;
		NullCheck(L_33);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747(L_33, L_34, 0, L_35, NULL);
		int32_t L_37 = V_7;
		int32_t L_38 = V_5;
		if ((((int32_t)L_37) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_38, 1)))))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_7;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_39, L_40)), 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = __this->____byteBuffer_22;
		int32_t L_42 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = __this->____byteBuffer_22;
		int32_t L_44 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_41, ((int32_t)il2cpp_codegen_add(L_42, 1)), (RuntimeArray*)L_43, 0, L_44, NULL);
		goto IL_000c;
	}

IL_00f3:
	{
		int32_t L_45 = V_3;
		if ((((int32_t)L_45) >= ((int32_t)((int32_t)128))))
		{
			goto IL_010b;
		}
	}
	{
		int32_t L_46 = V_1;
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, ((int32_t)il2cpp_codegen_add(L_46, 1)), NULL);
		StringBuilder_t* L_47 = V_0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_47);
		return L_48;
	}

IL_010b:
	{
		V_2 = 0;
		goto IL_000c;
	}
}
// System.String Newtonsoft.Json.Bson.BsonReader::ReadLengthString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, L_1, NULL);
		int32_t L_2 = V_0;
		String_t* L_3;
		L_3 = BsonReader_GetString_mB3FD61F039F2636EE8B6B4BF2CAF84A26E4DDBFC(__this, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = __this->____reader_20;
		NullCheck(L_4);
		uint8_t L_5;
		L_5 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_4);
		return L_3;
	}
}
// System.String Newtonsoft.Json.Bson.BsonReader::GetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_GetString_mB3FD61F039F2636EE8B6B4BF2CAF84A26E4DDBFC (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___0_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___0_length;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_0009:
	{
		BsonReader_EnsureBuffers_mC7DD59EA3A760B60368F4A117D73F4448F706BB1(__this, NULL);
		V_0 = (StringBuilder_t*)NULL;
		V_1 = 0;
		V_2 = 0;
	}

IL_0015:
	{
		int32_t L_2 = ___0_length;
		int32_t L_3 = V_1;
		int32_t L_4 = V_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_4)))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = ___0_length;
		int32_t L_6 = V_1;
		G_B6_0 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
		goto IL_002d;
	}

IL_0026:
	{
		int32_t L_7 = V_2;
		G_B6_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_7));
	}

IL_002d:
	{
		V_3 = G_B6_0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_8 = __this->____reader_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->____byteBuffer_22;
		int32_t L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_8);
		int32_t L_12;
		L_12 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, L_10, L_11);
		V_4 = L_12;
		int32_t L_13 = V_4;
		if (L_13)
		{
			goto IL_0052;
		}
	}
	{
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_14 = (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7630F7A0C27B2EE30DD70CE0777AD917869A5FC4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_GetString_mB3FD61F039F2636EE8B6B4BF2CAF84A26E4DDBFC_RuntimeMethod_var)));
	}

IL_0052:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = V_4;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, L_16));
		int32_t L_17 = V_4;
		int32_t L_18 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		int32_t L_19 = V_4;
		int32_t L_20 = ___0_length;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_008d;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_21;
		L_21 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->____byteBuffer_22;
		int32_t L_23 = V_4;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_24 = __this->____charBuffer_23;
		NullCheck(L_21);
		int32_t L_25;
		L_25 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(34 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_21, L_22, 0, L_23, L_24, 0);
		V_5 = L_25;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = __this->____charBuffer_23;
		int32_t L_27 = V_5;
		String_t* L_28;
		L_28 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_26, 0, L_27, NULL);
		return L_28;
	}

IL_008d:
	{
		int32_t L_29 = V_4;
		int32_t L_30;
		L_30 = BsonReader_GetLastFullCharStop_m5F12D814D034886A5A2CA2FADA4B8411D0FE90AD(__this, ((int32_t)il2cpp_codegen_subtract(L_29, 1)), NULL);
		V_6 = L_30;
		StringBuilder_t* L_31 = V_0;
		if (L_31)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_32 = ___0_length;
		StringBuilder_t* L_33 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_33, L_32, NULL);
		V_0 = L_33;
	}

IL_00a3:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_34;
		L_34 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->____byteBuffer_22;
		int32_t L_36 = V_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_37 = __this->____charBuffer_23;
		NullCheck(L_34);
		int32_t L_38;
		L_38 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(34 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_34, L_35, 0, ((int32_t)il2cpp_codegen_add(L_36, 1)), L_37, 0);
		V_7 = L_38;
		StringBuilder_t* L_39 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_40 = __this->____charBuffer_23;
		int32_t L_41 = V_7;
		NullCheck(L_39);
		StringBuilder_t* L_42;
		L_42 = StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747(L_39, L_40, 0, L_41, NULL);
		int32_t L_43 = V_6;
		int32_t L_44 = V_4;
		if ((((int32_t)L_43) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_44, 1)))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_45 = V_4;
		int32_t L_46 = V_6;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_45, L_46)), 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->____byteBuffer_22;
		int32_t L_48 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = __this->____byteBuffer_22;
		int32_t L_50 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_47, ((int32_t)il2cpp_codegen_add(L_48, 1)), (RuntimeArray*)L_49, 0, L_50, NULL);
		goto IL_00fc;
	}

IL_00fa:
	{
		V_2 = 0;
	}

IL_00fc:
	{
		int32_t L_51 = V_1;
		int32_t L_52 = ___0_length;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0015;
		}
	}
	{
		StringBuilder_t* L_53 = V_0;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_53);
		return L_54;
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonReader::GetLastFullCharStop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_GetLastFullCharStop_m5F12D814D034886A5A2CA2FADA4B8411D0FE90AD (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_start;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0028;
	}

IL_0006:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____byteBuffer_22;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5;
		L_5 = BsonReader_BytesInSequence_mFEDFB2E86DEB1DE9F3773FE802BD6D37BBC1A36E(__this, L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0028;
	}

IL_001e:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_002c;
	}

IL_0028:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_002c:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___0_start;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_12, L_13))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_14 = ___0_start;
		return L_14;
	}

IL_0034:
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonReader::BytesInSequence(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_BytesInSequence_mFEDFB2E86DEB1DE9F3773FE802BD6D37BBC1A36E (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, uint8_t ___0_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___0_b;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange1_16;
		NullCheck(L_1);
		int32_t L_2 = 1;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_0) > ((int32_t)L_3)))
		{
			goto IL_000c;
		}
	}
	{
		return 1;
	}

IL_000c:
	{
		uint8_t L_4 = ___0_b;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange2_17;
		NullCheck(L_5);
		int32_t L_6 = 0;
		uint8_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_4) < ((int32_t)L_7)))
		{
			goto IL_0022;
		}
	}
	{
		uint8_t L_8 = ___0_b;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange2_17;
		NullCheck(L_9);
		int32_t L_10 = 1;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_8) > ((int32_t)L_11)))
		{
			goto IL_0022;
		}
	}
	{
		return 2;
	}

IL_0022:
	{
		uint8_t L_12 = ___0_b;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange3_18;
		NullCheck(L_13);
		int32_t L_14 = 0;
		uint8_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if ((((int32_t)L_12) < ((int32_t)L_15)))
		{
			goto IL_0038;
		}
	}
	{
		uint8_t L_16 = ___0_b;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange3_18;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		if ((((int32_t)L_16) > ((int32_t)L_19)))
		{
			goto IL_0038;
		}
	}
	{
		return 3;
	}

IL_0038:
	{
		uint8_t L_20 = ___0_b;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange4_19;
		NullCheck(L_21);
		int32_t L_22 = 0;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		if ((((int32_t)L_20) < ((int32_t)L_23)))
		{
			goto IL_004e;
		}
	}
	{
		uint8_t L_24 = ___0_b;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange4_19;
		NullCheck(L_25);
		int32_t L_26 = 1;
		uint8_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if ((((int32_t)L_24) > ((int32_t)L_27)))
		{
			goto IL_004e;
		}
	}
	{
		return 4;
	}

IL_004e:
	{
		return 0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::EnsureBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_EnsureBuffers_mC7DD59EA3A760B60368F4A117D73F4448F706BB1 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____byteBuffer_22;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		__this->____byteBuffer_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____byteBuffer_22), (void*)L_1);
	}

IL_0018:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = __this->____charBuffer_23;
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(42 /* System.Int32 System.Text.Encoding::GetMaxCharCount(System.Int32) */, L_3, ((int32_t)128));
		V_0 = L_4;
		int32_t L_5 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->____charBuffer_23 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charBuffer_23), (void*)L_6);
	}

IL_003c:
	{
		return;
	}
}
// System.Double Newtonsoft.Json.Bson.BsonReader::ReadDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BsonReader_ReadDouble_m4E7917E24274C4A8DE38DAA6DAD13B019AE75C52 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, 8, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_20;
		NullCheck(L_0);
		double L_1;
		L_1 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_0);
		return L_1;
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonReader::ReadInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, 4, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_20;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_0);
		return L_1;
	}
}
// System.Int64 Newtonsoft.Json.Bson.BsonReader::ReadInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BsonReader_ReadInt64_m3CD355565907B98481732EC6A91102F89CE1FF02 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, 8, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_20;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(17 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_0);
		return L_1;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader::ReadType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonReader_ReadType_m609B4018D61DC17479EA954CAB7A4CF38F9ED691 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, 1, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_20;
		NullCheck(L_0);
		int8_t L_1;
		L_1 = VirtualFuncInvoker0< int8_t >::Invoke(11 /* System.SByte System.IO.BinaryReader::ReadSByte() */, L_0);
		return (int8_t)(L_1);
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::MovePosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_0 = __this->____currentContext_26;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Position_2;
		int32_t L_3 = ___0_count;
		NullCheck(L_1);
		L_1->___Position_2 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		return;
	}
}
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonReader_ReadBytes_m1CC1F7104F11C353A30134E0AA3D66B3F52938F7 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_count;
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, L_0, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = __this->____reader_20;
		int32_t L_2 = ___0_count;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_1, L_2);
		return L_3;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__cctor_m0DD14E39C1F1B4DE1A4C13B0DEFAE390C729627F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)127));
		((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange1_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange1_16), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)194));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)223));
		((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange2_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange2_17), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)224));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)239));
		((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange3_18 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange3_18), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)240));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)244));
		((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange4_19 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange4_19), (void*)L_10);
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
// System.Void Newtonsoft.Json.Bson.BsonReader/ContainerContext::.ctor(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* __this, int8_t ___0_type, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int8_t L_0 = ___0_type;
		__this->___Type_0 = L_0;
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
// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonToken::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* BsonToken_get_Parent_m05A247A8B1E2FB87849EB7B6FE0B49A606BEF1A2 (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = __this->___U3CParentU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonToken::set_Parent(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonToken_set_Parent_m6FE9310A7BE7920BFBBB78D007D3326FE25861BC (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_value, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___0_value;
		__this->___U3CParentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonToken::get_CalculatedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCalculatedSizeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonToken::set_CalculatedSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCalculatedSizeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) 
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
// System.Void Newtonsoft.Json.Bson.BsonObject::Add(System.String,Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObject_Add_mC5FD9CC9FC974FC4D7B10981A33291E88DB9DC79 (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, String_t* ___0_name, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___1_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m05A778DDB06E3015BA3B2B539CB6360D44308F65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* L_0 = __this->____children_2;
		BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_1 = (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE*)il2cpp_codegen_object_new(BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BsonProperty__ctor_mFC963BA0F736C7A11FE68BB3A4DDE63A99B3A54C(L_1, NULL);
		BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_2 = L_1;
		String_t* L_3 = ___0_name;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_4 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_4, L_3, (bool)0, NULL);
		NullCheck(L_2);
		BsonProperty_set_Name_mBF75E093501D61ABA9B44CD595A848386002EDA0_inline(L_2, L_4, NULL);
		BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_5 = L_2;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_6 = ___1_token;
		NullCheck(L_5);
		BsonProperty_set_Value_m7DAC5256E7337131CB0004255D86FBB812E5BAD8_inline(L_5, L_6, NULL);
		NullCheck(L_0);
		List_1_Add_m05A778DDB06E3015BA3B2B539CB6360D44308F65_inline(L_0, L_5, List_1_Add_m05A778DDB06E3015BA3B2B539CB6360D44308F65_RuntimeMethod_var);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_7 = ___1_token;
		NullCheck(L_7);
		BsonToken_set_Parent_m6FE9310A7BE7920BFBBB78D007D3326FE25861BC_inline(L_7, __this, NULL);
		return;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonObject::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonObject_get_Type_m970C3BD8AC7D9844A62BE0C687DCF270E784D8ED (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) 
{
	{
		return (int8_t)(3);
	}
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty> Newtonsoft.Json.Bson.BsonObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonObject_GetEnumerator_mD0C11E8BAC09FB62CA08FF674E3F7F23690AE14D (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m872CB87380297BB9B43B61A80CB28F4A8C1C9011_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* L_0 = __this->____children_2;
		NullCheck(L_0);
		Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203 L_1;
		L_1 = List_1_GetEnumerator_m872CB87380297BB9B43B61A80CB28F4A8C1C9011(L_0, List_1_GetEnumerator_m872CB87380297BB9B43B61A80CB28F4A8C1C9011_RuntimeMethod_var);
		Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203 L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Bson.BsonObject::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonObject_System_Collections_IEnumerable_GetEnumerator_m6C7320F7B08967EF6FF0D1EB4681408550A44D7C (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = BsonObject_GetEnumerator_mD0C11E8BAC09FB62CA08FF674E3F7F23690AE14D(__this, NULL);
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObject__ctor_m630E32FEFB85ABC73DA890C946486161162E0BDA (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m573D86B46CB0180CD99560B5E3B03E4A5CDE368E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* L_0 = (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E*)il2cpp_codegen_object_new(List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m573D86B46CB0180CD99560B5E3B03E4A5CDE368E(L_0, List_1__ctor_m573D86B46CB0180CD99560B5E3B03E4A5CDE368E_RuntimeMethod_var);
		__this->____children_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____children_2), (void*)L_0);
		BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA(__this, NULL);
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
// System.Void Newtonsoft.Json.Bson.BsonArray::Add(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonArray_Add_m483471C0CDB8A4438E1A0274845DC6424BDB765D (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7B3928D9D175A2FC23AD66D3F2E0BC9200D98E5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* L_0 = __this->____children_2;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_1 = ___0_token;
		NullCheck(L_0);
		List_1_Add_m7B3928D9D175A2FC23AD66D3F2E0BC9200D98E5D_inline(L_0, L_1, List_1_Add_m7B3928D9D175A2FC23AD66D3F2E0BC9200D98E5D_RuntimeMethod_var);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_2 = ___0_token;
		NullCheck(L_2);
		BsonToken_set_Parent_m6FE9310A7BE7920BFBBB78D007D3326FE25861BC_inline(L_2, __this, NULL);
		return;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonArray::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonArray_get_Type_mCC68071DB9C64C070101B2633053632727FB9382 (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) 
{
	{
		return (int8_t)(4);
	}
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonToken> Newtonsoft.Json.Bson.BsonArray::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonArray_GetEnumerator_m38E989DD847BFBA1D9AE6408890EBEC664E0729C (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t597C435D76D0912631AF7909B79461C347020E0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC2E8A71D702B5F722A83170C68470084EA6F1AEE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* L_0 = __this->____children_2;
		NullCheck(L_0);
		Enumerator_t597C435D76D0912631AF7909B79461C347020E0C L_1;
		L_1 = List_1_GetEnumerator_mC2E8A71D702B5F722A83170C68470084EA6F1AEE(L_0, List_1_GetEnumerator_mC2E8A71D702B5F722A83170C68470084EA6F1AEE_RuntimeMethod_var);
		Enumerator_t597C435D76D0912631AF7909B79461C347020E0C L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_t597C435D76D0912631AF7909B79461C347020E0C_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Bson.BsonArray::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonArray_System_Collections_IEnumerable_GetEnumerator_m36E9AA3609FC3571D00A9C885C12A578D15432D7 (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = BsonArray_GetEnumerator_m38E989DD847BFBA1D9AE6408890EBEC664E0729C(__this, NULL);
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonArray__ctor_m3121DAA5995AA53B27FCE79E5F69D13131F1F9F1 (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3935A6D299A58068CCFB138217E1D9C02F7130E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* L_0 = (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE*)il2cpp_codegen_object_new(List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m3935A6D299A58068CCFB138217E1D9C02F7130E1(L_0, List_1__ctor_m3935A6D299A58068CCFB138217E1D9C02F7130E1_RuntimeMethod_var);
		__this->____children_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____children_2), (void*)L_0);
		BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA(__this, NULL);
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
// System.Void Newtonsoft.Json.Bson.BsonEmpty::.ctor(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonEmpty__ctor_m7FD72E9106B5CECA3B85DAC437D81FF1C89C8F75 (BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8* __this, int8_t ___0_type, const RuntimeMethod* method) 
{
	{
		BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA(__this, NULL);
		int8_t L_0 = ___0_type;
		__this->___U3CTypeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonEmpty::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonEmpty_get_Type_m2E09C11029868486DAA3C8CFCEE103301C430563 (BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8* __this, const RuntimeMethod* method) 
{
	{
		int8_t L_0 = __this->___U3CTypeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonEmpty::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonEmpty__cctor_m5C7D52A47D3F8B1A0265D40C1310BB5DEF4F1E9C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8* L_0 = (BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8*)il2cpp_codegen_object_new(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BsonEmpty__ctor_m7FD72E9106B5CECA3B85DAC437D81FF1C89C8F75(L_0, ((int32_t)10), NULL);
		((BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var))->___Null_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var))->___Null_2), (void*)L_0);
		BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8* L_1 = (BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8*)il2cpp_codegen_object_new(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BsonEmpty__ctor_m7FD72E9106B5CECA3B85DAC437D81FF1C89C8F75(L_1, 6, NULL);
		((BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var))->___Undefined_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var))->___Undefined_3), (void*)L_1);
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
// System.Void Newtonsoft.Json.Bson.BsonValue::.ctor(System.Object,Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695 (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* __this, RuntimeObject* ___0_value, int8_t ___1_type, const RuntimeMethod* method) 
{
	{
		BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA(__this, NULL);
		RuntimeObject* L_0 = ___0_value;
		__this->____value_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_2), (void*)L_0);
		int8_t L_1 = ___1_type;
		__this->____type_3 = L_1;
		return;
	}
}
// System.Object Newtonsoft.Json.Bson.BsonValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2 (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____value_2;
		return L_0;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonValue::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonValue_get_Type_m02508F5B41591FB05A329FB62FF25DBC56BC200A (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* __this, const RuntimeMethod* method) 
{
	{
		int8_t L_0 = __this->____type_3;
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
// System.Void Newtonsoft.Json.Bson.BsonBoolean::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBoolean__ctor_mBFEDD9C83B640D17F73B2ACA0B92DCD58D5781D5 (BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695(__this, L_2, 8, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBoolean::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBoolean__cctor_m0421B7408D44F2AA246C85FACD518A33698C1071 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD* L_0 = (BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD*)il2cpp_codegen_object_new(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BsonBoolean__ctor_mBFEDD9C83B640D17F73B2ACA0B92DCD58D5781D5(L_0, (bool)0, NULL);
		((BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var))->___False_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var))->___False_4), (void*)L_0);
		BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD* L_1 = (BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD*)il2cpp_codegen_object_new(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BsonBoolean__ctor_mBFEDD9C83B640D17F73B2ACA0B92DCD58D5781D5(L_1, (bool)1, NULL);
		((BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var))->___True_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var))->___True_5), (void*)L_1);
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
// System.Int32 Newtonsoft.Json.Bson.BsonString::get_ByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3 (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CByteCountU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonString::set_ByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonString_set_ByteCount_m31A317821BECC7731FA48F92B5433200A6515BCF (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CByteCountU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonString::get_IncludeLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonString_get_IncludeLength_m0E82D14B7DF5B53FBCD95D5891C3F79E96462D2D (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIncludeLengthU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonString::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56 (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, RuntimeObject* ___0_value, bool ___1_includeLength, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695(__this, L_0, 2, NULL);
		bool L_1 = ___1_includeLength;
		__this->___U3CIncludeLengthU3Ek__BackingField_5 = L_1;
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
// Newtonsoft.Json.Bson.BsonBinaryType Newtonsoft.Json.Bson.BsonBinary::get_BinaryType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BsonBinary_get_BinaryType_mDE0AC23257F594CDF9EECBBD6C9BF59D998DD91B (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CBinaryTypeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinary::set_BinaryType(Newtonsoft.Json.Bson.BsonBinaryType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinary_set_BinaryType_m967019AC06E6A447F796DCA7A73CABEFF3C7402A (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___U3CBinaryTypeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinary::.ctor(System.Byte[],Newtonsoft.Json.Bson.BsonBinaryType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinary__ctor_m5B3120436DF99BD5D9DE02D2695CD9DE2CE7BB5B (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, uint8_t ___1_binaryType, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695(__this, (RuntimeObject*)L_0, 5, NULL);
		uint8_t L_1 = ___1_binaryType;
		BsonBinary_set_BinaryType_m967019AC06E6A447F796DCA7A73CABEFF3C7402A_inline(__this, L_1, NULL);
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
// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::get_Pattern()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonRegex_get_Pattern_mA699B72A76008CE662D1715632112D68F8BB85CC (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = __this->___U3CPatternU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonRegex::set_Pattern(Newtonsoft.Json.Bson.BsonString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonRegex_set_Pattern_m03387AC7A329EEAA6442715EA019B93C7D4A14FF (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___0_value, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___0_value;
		__this->___U3CPatternU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPatternU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonRegex_get_Options_mDCE4C399FD3DB3BE40F013A3458CCCD0FCB44211 (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = __this->___U3COptionsU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonRegex::set_Options(Newtonsoft.Json.Bson.BsonString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonRegex_set_Options_m8A305E5CD6B32F3A48F6BC31203892A26FE967FC (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___0_value, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___0_value;
		__this->___U3COptionsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonRegex::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonRegex__ctor_mA823184E2E1262D62F38DC5D1ACC130B5B0EEE99 (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, String_t* ___0_pattern, String_t* ___1_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA(__this, NULL);
		String_t* L_0 = ___0_pattern;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_1 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_1, L_0, (bool)0, NULL);
		BsonRegex_set_Pattern_m03387AC7A329EEAA6442715EA019B93C7D4A14FF_inline(__this, L_1, NULL);
		String_t* L_2 = ___1_options;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_3 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_3, L_2, (bool)0, NULL);
		BsonRegex_set_Options_m8A305E5CD6B32F3A48F6BC31203892A26FE967FC_inline(__this, L_3, NULL);
		return;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonRegex::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonRegex_get_Type_mE72E10F4DBAAC4714F12F2DC916E927A1EE72C3A (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) 
{
	{
		return (int8_t)(((int32_t)11));
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
// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonProperty::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonProperty_get_Name_mF70295B575263AB7307995C119732FBA89FB6FA9 (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonProperty::set_Name(Newtonsoft.Json.Bson.BsonString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonProperty_set_Name_mBF75E093501D61ABA9B44CD595A848386002EDA0 (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___0_value, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonProperty::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* BsonProperty_get_Value_m0DAFFE451F84BACD72C5FF9F592D351117DB85F2 (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonProperty::set_Value(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonProperty_set_Value_m7DAC5256E7337131CB0004255D86FBB812E5BAD8 (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_value, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonProperty__ctor_mFC963BA0F736C7A11FE68BB3A4DDE63A99B3A54C (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) 
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
// System.DateTimeKind Newtonsoft.Json.Bson.BsonWriter::get_DateTimeKindHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonWriter_get_DateTimeKindHandling_m97179D0C081FB37FC144909FEE6FC4B2146B8E8F (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	{
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_0 = __this->____writer_14;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BsonBinaryWriter_get_DateTimeKindHandling_m90614E0F1C0F02A38281C923194D7339F536664F_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::set_DateTimeKindHandling(System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_set_DateTimeKindHandling_m248E2BDCA2BBAAC774B31003C5F399D2B5D9DAE7 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_0 = __this->____writer_14;
		int32_t L_1 = ___0_value;
		NullCheck(L_0);
		BsonBinaryWriter_set_DateTimeKindHandling_mE5606CA1E2ADA134652CEC5A0306E5F728E80FC5_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter__ctor_mB8DA2F2E87909A79490FBDF3FCD82D9C14D56B24 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m5B0E4DCEC60E5158D71DDF7768E0FC5B09573739(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888(L_0, _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_2, L_1, NULL);
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_3 = (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09*)il2cpp_codegen_object_new(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonBinaryWriter__ctor_mD40C3447EF11061CE8EEE41BB5ED7A874102DC3C(L_3, L_2, NULL);
		__this->____writer_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____writer_14), (void*)L_3);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::.ctor(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter__ctor_m9A68F285FFC9770E242BDDDEBF8E6F7D4FC22F0E (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_writer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m5B0E4DCEC60E5158D71DDF7768E0FC5B09573739(__this, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_writer;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888(L_0, _stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___0_writer;
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_2 = (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09*)il2cpp_codegen_object_new(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BsonBinaryWriter__ctor_mD40C3447EF11061CE8EEE41BB5ED7A874102DC3C(L_2, L_1, NULL);
		__this->____writer_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____writer_14), (void*)L_2);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_Flush_m9E2FCED7F3C90BB693529D62635D1DAF11685F08 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	{
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_0 = __this->____writer_14;
		NullCheck(L_0);
		BsonBinaryWriter_Flush_m8844BC6FFEE6C0BE26F4D807110A1F4C1E6658DA(L_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteEnd(Newtonsoft.Json.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteEnd_mF35070E1C6EC127F41F69707FB949FE90324F439 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, int32_t ___0_token, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_token;
		JsonWriter_WriteEnd_m36FB4C43EE0F01066B13019046E5EECF96C902B8(__this, L_0, NULL);
		BsonWriter_RemoveParent_m76AEE3E680B0AA556D984C4D7AE1848C198AF103(__this, NULL);
		int32_t L_1;
		L_1 = JsonWriter_get_Top_m5095DA8B798DD98BE08ACA13C1C9CD816E9CB335(__this, NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_2 = __this->____writer_14;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_3 = __this->____root_15;
		NullCheck(L_2);
		BsonBinaryWriter_WriteToken_m1CBE5AB86FEB5C2399287FEAEBFB80F9094A48E9(L_2, L_3, NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteComment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteComment_m43D84D85207162EF1083D96254809FD5422D46C3 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_0;
		L_0 = JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F72A13E7E8E1CB50038C54FE7CC02AB7582F7AA)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteComment_m43D84D85207162EF1083D96254809FD5422D46C3_RuntimeMethod_var)));
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartConstructor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteStartConstructor_m1F88ADAEF8A51724CCBEDBF45591F27C337A9B15 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_0;
		L_0 = JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral040ACBC1C698075688E5B27E50C6370BEB2676A0)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteStartConstructor_m1F88ADAEF8A51724CCBEDBF45591F27C337A9B15_RuntimeMethod_var)));
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteRaw_m166F2B79C505DA68A9A52275A9DF26B397A4460D (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___0_json, const RuntimeMethod* method) 
{
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_0;
		L_0 = JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C97C66F7D6312F0BCB5A4E3E9ED7F8F1CF50F6A)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteRaw_m166F2B79C505DA68A9A52275A9DF26B397A4460D_RuntimeMethod_var)));
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRawValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteRawValue_m12591A651F07D961A685E3C463098ED87557CB02 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___0_json, const RuntimeMethod* method) 
{
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_0;
		L_0 = JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C97C66F7D6312F0BCB5A4E3E9ED7F8F1CF50F6A)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteRawValue_m12591A651F07D961A685E3C463098ED87557CB02_RuntimeMethod_var)));
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteStartArray_m843BECB153A090E2412988023B9B2D7412D95DA2 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_WriteStartArray_mE2EDFEE60214B989C151DCD66C2B3219D927C75A(__this, NULL);
		BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* L_0 = (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1*)il2cpp_codegen_object_new(BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BsonArray__ctor_m3121DAA5995AA53B27FCE79E5F69D13131F1F9F1(L_0, NULL);
		BsonWriter_AddParent_m5733DE6024C0F5F3DF8B2638EB25D9DF15AB2761(__this, L_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteStartObject_mE29202DE49A43E8A76A3E230307B42D042076313 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_WriteStartObject_m327A0474DB3032162614C57B6154773EA900C153(__this, NULL);
		BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* L_0 = (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB*)il2cpp_codegen_object_new(BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BsonObject__ctor_m630E32FEFB85ABC73DA890C946486161162E0BDA(L_0, NULL);
		BsonWriter_AddParent_m5733DE6024C0F5F3DF8B2638EB25D9DF15AB2761(__this, L_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WritePropertyName_mFE66ED7A0D014936611D49C5F53A490D717D721E (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		JsonWriter_WritePropertyName_mD805FBFFF2D43C2EC1E23A59C0102E5244CD537F(__this, L_0, NULL);
		String_t* L_1 = ___0_name;
		__this->____propertyName_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____propertyName_17), (void*)L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_Close_m8D322FE76531EA2599FD4F4C31540532D0A13A42 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* G_B3_0 = NULL;
	BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* G_B2_0 = NULL;
	{
		JsonWriter_Close_m550789FF5D483AA86A99B5301B375F5BFB08C523(__this, NULL);
		bool L_0;
		L_0 = JsonWriter_get_CloseOutput_m0A40D11FF244B8766FA5A2467C78024B6E2F4736_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_1 = __this->____writer_14;
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		NullCheck(G_B3_0);
		BsonBinaryWriter_Close_m16C6400A2D52FFC66BC3F29D7A94373EDCB6291C(G_B3_0, NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddParent(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddParent_m5733DE6024C0F5F3DF8B2638EB25D9DF15AB2761 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_container, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___0_container;
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_0, NULL);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_1 = ___0_container;
		__this->____parent_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parent_16), (void*)L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::RemoveParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_RemoveParent_m76AEE3E680B0AA556D984C4D7AE1848C198AF103 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = __this->____parent_16;
		NullCheck(L_0);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_1;
		L_1 = BsonToken_get_Parent_m05A247A8B1E2FB87849EB7B6FE0B49A606BEF1A2_inline(L_0, NULL);
		__this->____parent_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parent_16), (void*)L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddValue(System.Object,Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, RuntimeObject* ___0_value, int8_t ___1_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		int8_t L_1 = ___1_type;
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_2 = (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)il2cpp_codegen_object_new(BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695(L_2, L_0, L_1, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_2, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddToken(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* V_0 = NULL;
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = __this->____parent_16;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_1 = __this->____parent_16;
		V_0 = ((BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB*)IsInstClass((RuntimeObject*)L_1, BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var));
		BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* L_3 = V_0;
		String_t* L_4 = __this->____propertyName_17;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_5 = ___0_token;
		NullCheck(L_3);
		BsonObject_Add_mC5FD9CC9FC974FC4D7B10981A33291E88DB9DC79(L_3, L_4, L_5, NULL);
		__this->____propertyName_17 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____propertyName_17), (void*)(String_t*)NULL);
		return;
	}

IL_002c:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_6 = __this->____parent_16;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_7 = ___0_token;
		NullCheck(((BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1*)CastclassClass((RuntimeObject*)L_6, BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var)));
		BsonArray_Add_m483471C0CDB8A4438E1A0274845DC6424BDB765D(((BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1*)CastclassClass((RuntimeObject*)L_6, BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var)), L_7, NULL);
		return;
	}

IL_003e:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_8 = ___0_token;
		NullCheck(L_8);
		int8_t L_9;
		L_9 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_8);
		if ((((int32_t)L_9) == ((int32_t)3)))
		{
			goto IL_0072;
		}
	}
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_10 = ___0_token;
		NullCheck(L_10);
		int8_t L_11;
		L_11 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_10);
		if ((((int32_t)L_11) == ((int32_t)4)))
		{
			goto IL_0072;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_12;
		L_12 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_13 = ___0_token;
		NullCheck(L_13);
		int8_t L_14;
		L_14 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_13);
		int8_t L_15 = L_14;
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonType_tB6A96FAF144D5C44C1B6071029D7FBBCF806AF51_il2cpp_TypeInfo_var)), &L_15);
		String_t* L_17;
		L_17 = StringUtils_FormatWith_m97587965D365EA1584A7D31B57D618E7768073E5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4C48A326ACCC25E558DC329A6C92D8184942B973)), L_12, L_16, NULL);
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_18;
		L_18 = JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B(__this, L_17, (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901_RuntimeMethod_var)));
	}

IL_0072:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_19 = ___0_token;
		__this->____parent_16 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parent_16), (void*)L_19);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_20 = ___0_token;
		__this->____root_15 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____root_15), (void*)L_20);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m1C861DC3F9139376E4A6C2677D367DC71F54CE19 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		JsonWriter_SetWriteState_m5B9E16507E0F0539F8BD43ACBE7A4DE549DA9463(__this, 7, NULL, NULL);
		RuntimeObject* L_1 = ___0_value;
		V_0 = ((*(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)UnBox(L_1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BigInteger_ToByteArray_mC501D315AF605FB0EF172628E9D4C95D2F015EB3((&V_0), NULL);
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_3 = (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8*)il2cpp_codegen_object_new(BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonBinary__ctor_m5B3120436DF99BD5D9DE02D2695CD9DE2CE7BB5B(L_3, L_2, 0, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_3, NULL);
		return;
	}

IL_002b:
	{
		RuntimeObject* L_4 = ___0_value;
		JsonWriter_WriteValue_mC96DBA6DC02ACB9D67D4524889764368DB468C2E(__this, L_4, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteNull_mFFF707F753F8ABDDB465D0B4E961D64DC7887586 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_WriteNull_m2BF712564701AA53BAC6BD922677FF7B0B2310BC(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ((BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var))->___Null_2;
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteUndefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteUndefined_m08D4E492179735F9F3857ACCB7153F71A9F45A72 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_WriteUndefined_m507BF49F988B94F07230A9B502D7E430E1ACCF00(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ((BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var))->___Undefined_3;
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mF23F9970B41FBBAF8D989EDEADF6D850737A94F3 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* G_B2_0 = NULL;
	BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* G_B1_0 = NULL;
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* G_B3_0 = NULL;
	BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* G_B3_1 = NULL;
	{
		String_t* L_0 = ___0_value;
		JsonWriter_WriteValue_m3ECF13257A8D1AB90301A4174D42337149BC9D0C(__this, L_0, NULL);
		String_t* L_1 = ___0_value;
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		String_t* L_2 = ___0_value;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_3 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_3, L_2, (bool)1, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0019;
	}

IL_0014:
	{
		il2cpp_codegen_runtime_class_init_inline(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_4 = ((BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F20528B697AB47F6FBA41E6BA4246DBD536BAB8_il2cpp_TypeInfo_var))->___Null_2;
		G_B3_0 = ((BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)(L_4));
		G_B3_1 = G_B2_0;
	}

IL_0019:
	{
		NullCheck(G_B3_1);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(G_B3_1, G_B3_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m2FC79561497CBDF988D2EF722E22903E63ECDC57 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_value;
		JsonWriter_WriteValue_m8E9BDBD7C29F82DCCB87B4F5D17304F5A341A5B8(__this, L_0, NULL);
		int32_t L_1 = ___0_value;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m244AEDCA1E419CEFAC8A082D4B9A0C4689FF2CCE (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_value;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_0015;
		}
	}
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_1;
		L_1 = JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37FDA2B361182A202537DCA1203AB3BEC2779E2F)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteValue_m244AEDCA1E419CEFAC8A082D4B9A0C4689FF2CCE_RuntimeMethod_var)));
	}

IL_0015:
	{
		uint32_t L_2 = ___0_value;
		JsonWriter_WriteValue_m94B80E8F2C3BF83E01624C8DE99D37CAEF2FE39B(__this, L_2, NULL);
		uint32_t L_3 = ___0_value;
		uint32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_4);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_5, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m3CCC473FC5D5CDB2FA5A096112C3680B7AAD13D8 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___0_value;
		JsonWriter_WriteValue_mEAB0A21EA57BEDF7BAD742C3F2A75EEB2E1091FE(__this, L_0, NULL);
		int64_t L_1 = ___0_value;
		int64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)18), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m253E004DDC355C900E5146C875EFEBFE0B808CFD (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ___0_value;
		if ((!(((uint64_t)L_0) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
		{
			goto IL_0019;
		}
	}
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_1;
		L_1 = JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral013D189FFF6214B6307FB356F81DB4FD46A89D0E)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteValue_m253E004DDC355C900E5146C875EFEBFE0B808CFD_RuntimeMethod_var)));
	}

IL_0019:
	{
		uint64_t L_2 = ___0_value;
		JsonWriter_WriteValue_m9A6D49A850A3EA706B7143FF45BCF9DECF2A6ED5(__this, L_2, NULL);
		uint64_t L_3 = ___0_value;
		uint64_t L_4 = L_3;
		RuntimeObject* L_5 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_4);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_5, ((int32_t)18), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mE26EACDC1C523AA208225AB9FACF48D6EE9A939B (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_value;
		JsonWriter_WriteValue_mB83A734CC93E3FA5CF86ACD51DC69F42DF7FEA54(__this, L_0, NULL);
		float L_1 = ___0_value;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, 1, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mA83F23BC4B8D4AC8C71C95F7BD91275B61ACCEFC (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, double ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___0_value;
		JsonWriter_WriteValue_m2C9947B42490CA9AB5E8EEFB36B3E00359C472D9(__this, L_0, NULL);
		double L_1 = ___0_value;
		double L_2 = L_1;
		RuntimeObject* L_3 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, 1, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mD623680FD8D563F2713B13D88D9DC4BBF1A5B939 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* G_B2_0 = NULL;
	BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* G_B1_0 = NULL;
	BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD* G_B3_0 = NULL;
	BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* G_B3_1 = NULL;
	{
		bool L_0 = ___0_value;
		JsonWriter_WriteValue_m9EF9755CB7576F61E081148C00169A7128903B8B(__this, L_0, NULL);
		bool L_1 = ___0_value;
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var);
		BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD* L_2 = ((BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var))->___False_4;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var);
		BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD* L_3 = ((BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tCDA0063DFA3B0C789C19533BFA53A6E7CCD644BD_il2cpp_TypeInfo_var))->___True_5;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(G_B3_1, G_B3_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m6DB75597C66D7A25306CDE9F94D404F71B13B595 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int16_t L_0 = ___0_value;
		JsonWriter_WriteValue_mE7084E3565A5BAE07F9E553F7C9362C2022E5B44(__this, L_0, NULL);
		int16_t L_1 = ___0_value;
		int16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m03EFC7DAE130F7060ABE5AF7EB2FCF2E1E19ED62 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0 = ___0_value;
		JsonWriter_WriteValue_m152C46080EAA9C377E3E2E2942B16273F93A2148(__this, L_0, NULL);
		uint16_t L_1 = ___0_value;
		uint16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m5896FAE2E7C7B6F78920F6B3D024952066069434 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Il2CppChar L_0 = ___0_value;
		JsonWriter_WriteValue_mD5E4500BFFBC814E26C57409026A403C71EEECCF(__this, L_0, NULL);
		V_0 = (String_t*)NULL;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&___0_value), NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_3 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_3, L_2, (bool)1, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_3, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m8CAB1650E127C21B630B95315A4B16D28F096F4E (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___0_value;
		JsonWriter_WriteValue_m1AEB560BFD2393EBBE9E766263CA01E3BA2D0E6F(__this, L_0, NULL);
		uint8_t L_1 = ___0_value;
		uint8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mE2C9B27E787A7A8BDB1595D45E225AAC49E50BF7 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, int8_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int8_t L_0 = ___0_value;
		JsonWriter_WriteValue_m0E635E0E6B005CD8D434FE57FAC79655FD774C4C(__this, L_0, NULL);
		int8_t L_1 = ___0_value;
		int8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m7CED6666FFC962781DA90B7EF454DDDDF199E5F1 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___0_value;
		JsonWriter_WriteValue_mBCA33B3507B7A3BBDA956DC573ACEEB6A9D359D8(__this, L_0, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1 = ___0_value;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2 = L_1;
		RuntimeObject* L_3 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, 1, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mAF1D91264588FB657ADF93788EE460C24B6F76C3 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		JsonWriter_WriteValue_m0FF59870C2C94523F795BF6F7F2FFC30CE179F8A(__this, L_0, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___0_value;
		int32_t L_2;
		L_2 = JsonWriter_get_DateTimeZoneHandling_m70A3776234605D953796332656844492C164F799_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTimeUtils_EnsureDateTime_mA79D09FFD516714FB3A1296F5E55780FBD5191C8(L_1, L_2, NULL);
		___0_value = L_3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4 = ___0_value;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5 = L_4;
		RuntimeObject* L_6 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_5);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_6, ((int32_t)9), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m61CDDC4C0D0229BB4C6C7423B4A9425E4F7DEC2E (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_0 = ___0_value;
		JsonWriter_WriteValue_mF792BC34323AF19A7161B55838A630A9E169A132(__this, L_0, NULL);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_1 = ___0_value;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_2 = L_1;
		RuntimeObject* L_3 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)9), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m80C95A43E5F729592340D263DB7517C40235C14A (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		VirtualActionInvoker0::Invoke(82 /* System.Void Newtonsoft.Json.JsonWriter::WriteNull() */, __this);
		return;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_value;
		JsonWriter_WriteValue_mE1F445EACF5FB3E7EDF70D0C89BB230D95084DAD(__this, L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_value;
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_3 = (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8*)il2cpp_codegen_object_new(BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonBinary__ctor_m5B3120436DF99BD5D9DE02D2695CD9DE2CE7BB5B(L_3, L_2, 0, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_3, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mD25E3A6ADCA02C5BEC592E5171BE3963965BD71E (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, Guid_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Guid_t L_0 = ___0_value;
		JsonWriter_WriteValue_mE9DA95DC1D6DAC672C97C861B92D3CB63933EC7B(__this, L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9((&___0_value), NULL);
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_2 = (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8*)il2cpp_codegen_object_new(BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BsonBinary__ctor_m5B3120436DF99BD5D9DE02D2695CD9DE2CE7BB5B(L_2, L_1, 4, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_2, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mA18524C3F7989C780934E01266E635D06837AE51 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___0_value;
		JsonWriter_WriteValue_mBE7C0F46DDAD5B5F4D814A322D271B8141BF0F07(__this, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = TimeSpan_ToString_m44D5BF48E35E18BB8B99A86B6535DA5E847FFE92((&___0_value), NULL);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_2 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_2, L_1, (bool)1, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_2, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mFD86C81134810D4CD85941746F697C0A3CAD8A5C (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Uri_op_Equality_mD7D7AAB7023C0873B37D8B8C7195BEF34002A194(L_0, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		VirtualActionInvoker0::Invoke(82 /* System.Void Newtonsoft.Json.JsonWriter::WriteNull() */, __this);
		return;
	}

IL_0010:
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_2 = ___0_value;
		JsonWriter_WriteValue_mBEB204C502C7E1547FC955BDBF558C0D616CD65A(__this, L_2, NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_3 = ___0_value;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_5 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_5, L_4, (bool)1, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_5, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteObjectId(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteObjectId_mF118E0F427F73A1FEAFB3853F056E9BE87524452 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888((RuntimeObject*)L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_value;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)((int32_t)12))))
		{
			goto IL_001f;
		}
	}
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_2;
		L_2 = JsonWriterException_Create_mA440D59D85200435C7AFC40CDEF5773888D0F94B(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral161567E318CEB965509FE84CE4198A12E62440AF)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteObjectId_mF118E0F427F73A1FEAFB3853F056E9BE87524452_RuntimeMethod_var)));
	}

IL_001f:
	{
		JsonWriter_SetWriteState_m5B9E16507E0F0539F8BD43ACBE7A4DE549DA9463(__this, ((int32_t)12), NULL, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_value;
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, (RuntimeObject*)L_3, 7, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRegex(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteRegex_m5A72DD206C8BA845F9F2B6AAC9BF61AC6480B71E (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___0_pattern, String_t* ___1_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8CD2F2DA1948373D6BFA8C44122166BC25E3FC0);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_pattern;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888(L_0, _stringLiteralD8CD2F2DA1948373D6BFA8C44122166BC25E3FC0, NULL);
		JsonWriter_SetWriteState_m5B9E16507E0F0539F8BD43ACBE7A4DE549DA9463(__this, ((int32_t)12), NULL, NULL);
		String_t* L_1 = ___0_pattern;
		String_t* L_2 = ___1_options;
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_3 = (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1*)il2cpp_codegen_object_new(BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonRegex__ctor_mA823184E2E1262D62F38DC5D1ACC130B5B0EEE99(L_3, L_1, L_2, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_3, NULL);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mD3F36EC5C78F193C349C41776297E0482C988A51 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonBinaryWriter_set_DateTimeKindHandling_mE5606CA1E2ADA134652CEC5A0306E5F728E80FC5_inline (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CDateTimeKindHandlingU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCalculatedSizeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* BsonProperty_get_Value_m0DAFFE451F84BACD72C5FF9F592D351117DB85F2_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonProperty_get_Name_mF70295B575263AB7307995C119732FBA89FB6FA9_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2_inline (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____value_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CByteCountU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_get_DateTimeKindHandling_m90614E0F1C0F02A38281C923194D7339F536664F_inline (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDateTimeKindHandlingU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BsonBinary_get_BinaryType_mDE0AC23257F594CDF9EECBBD6C9BF59D998DD91B_inline (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CBinaryTypeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonRegex_get_Pattern_mA699B72A76008CE662D1715632112D68F8BB85CC_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = __this->___U3CPatternU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonRegex_get_Options_mDCE4C399FD3DB3BE40F013A3458CCCD0FCB44211_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = __this->___U3COptionsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCalculatedSizeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonString_set_ByteCount_m31A317821BECC7731FA48F92B5433200A6515BCF_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CByteCountU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BsonString_get_IncludeLength_m0E82D14B7DF5B53FBCD95D5891C3F79E96462D2D_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIncludeLengthU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonReader_get_CloseInput_m5D28FC12BD22B62AA1E493BC7A77402F1AA26DE4_inline (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CCloseInputU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699_inline (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____currentState_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonReader_get_DateTimeKindHandling_m7A6ED156AAC7CD3D4343B0779E4ABD90E247333D_inline (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____dateTimeKindHandling_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonProperty_set_Name_mBF75E093501D61ABA9B44CD595A848386002EDA0_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___0_value, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonProperty_set_Value_m7DAC5256E7337131CB0004255D86FBB812E5BAD8_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_value, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonToken_set_Parent_m6FE9310A7BE7920BFBBB78D007D3326FE25861BC_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___0_value, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___0_value;
		__this->___U3CParentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonBinary_set_BinaryType_m967019AC06E6A447F796DCA7A73CABEFF3C7402A_inline (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___U3CBinaryTypeU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonRegex_set_Pattern_m03387AC7A329EEAA6442715EA019B93C7D4A14FF_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___0_value, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___0_value;
		__this->___U3CPatternU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPatternU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonRegex_set_Options_m8A305E5CD6B32F3A48F6BC31203892A26FE967FC_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___0_value, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___0_value;
		__this->___U3COptionsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonWriter_get_CloseOutput_m0A40D11FF244B8766FA5A2467C78024B6E2F4736_inline (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CCloseOutputU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* BsonToken_get_Parent_m05A247A8B1E2FB87849EB7B6FE0B49A606BEF1A2_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = __this->___U3CParentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonWriter_get_DateTimeZoneHandling_m70A3776234605D953796332656844492C164F799_inline (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____dateTimeZoneHandling_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
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
