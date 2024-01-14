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

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517;
// ExitGames.Client.Photon.Encryption.EncryptorNet
struct EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170;
// System.Security.Cryptography.Rijndael
struct Rijndael_t282661761E53E282457A31F5675ACF53D64EE807;
// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39;
// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____1D920AA24CC00C3B7BBC1397D39DE20128DDED0DC4FB04967ED4959F99075D69_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3_FieldInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* EncryptorNet_CalculateEncryptedSize_mA339782931F2C6D63A37E77EFE50A72A080FED4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EncryptorNet_CalculateFragmentLength_mCB232E8A17E352D77FB83E2A7F8633570BE63656_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EncryptorNet_Decrypt2_m13F64655C76BCD1777374D17F3FBA7995818A292_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EncryptorNet_Encrypt2_mD5CEC938BBCCFC9BEF74D679E4E979CA70889946_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EncryptorNet_Init_m324081C7355CBF56915F80014BB3F4C9C44C2D5D_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D  : public RuntimeObject
{
};

// ExitGames.Client.Photon.Encryption.EncryptorNet
struct EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214  : public RuntimeObject
{
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// Photon.SocketServer.Security.OakleyGroups
struct OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8  : public RuntimeObject
{
};

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3  : public RuntimeObject
{
};

// ExitGames.Client.Photon.StructWrapping.StructWrapperUtility
struct StructWrapperUtility_t52EED288DCD9C436B8085AA8D6269666AC327F4C  : public RuntimeObject
{
};

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
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

// System.Security.Cryptography.Rijndael
struct Rijndael_t282661761E53E282457A31F5675ACF53D64EE807  : public SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8
{
};

// System.Security.Cryptography.SHA256
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct __StaticArrayInitTypeSizeU3D120_t07CC46E257D02C84819F71DEBA3492A32B3F58E9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_t07CC46E257D02C84819F71DEBA3492A32B3F58E9__padding[120];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_t2E29695B4BC956E343FF77CA0138C0C6A5CF9A78 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t2E29695B4BC956E343FF77CA0138C0C6A5CF9A78__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192
struct __StaticArrayInitTypeSizeU3D192_tA23B8958D5BD1371FDA0012276F7C3BE0284F299 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D192_tA23B8958D5BD1371FDA0012276F7C3BE0284F299__padding[192];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct __StaticArrayInitTypeSizeU3D9_t1D0E5E98B1B931A2F0A0B3372679DC64E05E4E20 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t1D0E5E98B1B931A2F0A0B3372679DC64E05E4E20__padding[9];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=97
struct __StaticArrayInitTypeSizeU3D97_t4087A205A5285288E91F491C3E306E5107025859 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D97_t4087A205A5285288E91F491C3E306E5107025859__padding[97];
	};
};

// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517  : public RuntimeObject
{
	// System.Numerics.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::prime
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___prime_1;
	// System.Numerics.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::secret
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___secret_2;
	// System.Numerics.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::publicKey
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___publicKey_3;
	// System.Security.Cryptography.Rijndael Photon.SocketServer.Security.DiffieHellmanCryptoProvider::crypto
	Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* ___crypto_4;
	// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::sharedKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKey_5;
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

// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170  : public RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3
{
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	intptr_t ____handle_1;
};

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39  : public Rijndael_t282661761E53E282457A31F5675ACF53D64EE807
{
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C  : public SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9
{
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int64 System.Security.Cryptography.SHA256Managed::_count
	int64_t ____count_5;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_stateSHA256
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____stateSHA256_6;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_W
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____W_7;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=97 <PrivateImplementationDetails>::1D920AA24CC00C3B7BBC1397D39DE20128DDED0DC4FB04967ED4959F99075D69
	__StaticArrayInitTypeSizeU3D97_t4087A205A5285288E91F491C3E306E5107025859 ___1D920AA24CC00C3B7BBC1397D39DE20128DDED0DC4FB04967ED4959F99075D69_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0
	__StaticArrayInitTypeSizeU3D128_t2E29695B4BC956E343FF77CA0138C0C6A5CF9A78 ___3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1;
	// System.Int64 <PrivateImplementationDetails>::5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5
	int64_t ___5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192 <PrivateImplementationDetails>::64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B
	__StaticArrayInitTypeSizeU3D192_tA23B8958D5BD1371FDA0012276F7C3BE0284F299 ___64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3;
	// System.Int32 <PrivateImplementationDetails>::7D166B5A02BF27DDA27FC8A2A239E019995A803B1306C9C9A6E644DE18C53446
	int32_t ___7D166B5A02BF27DDA27FC8A2A239E019995A803B1306C9C9A6E644DE18C53446_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC
	__StaticArrayInitTypeSizeU3D9_t1D0E5E98B1B931A2F0A0B3372679DC64E05E4E20 ___D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175
	__StaticArrayInitTypeSizeU3D120_t07CC46E257D02C84819F71DEBA3492A32B3F58E9 ___FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_6;
};

// <PrivateImplementationDetails>

// ExitGames.Client.Photon.Encryption.EncryptorNet

// ExitGames.Client.Photon.Encryption.EncryptorNet

// System.Security.Cryptography.HashAlgorithm

// System.Security.Cryptography.HashAlgorithm

// Photon.SocketServer.Security.OakleyGroups
struct OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields
{
	// System.Int32 Photon.SocketServer.Security.OakleyGroups::Generator
	int32_t ___Generator_0;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime768
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OakleyPrime768_1;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime1024
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OakleyPrime1024_2;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime1536
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OakleyPrime1536_3;
};

// Photon.SocketServer.Security.OakleyGroups

// System.Security.Cryptography.RandomNumberGenerator

// System.Security.Cryptography.RandomNumberGenerator

// ExitGames.Client.Photon.StructWrapping.StructWrapperUtility

// ExitGames.Client.Photon.StructWrapping.StructWrapperUtility

// System.Security.Cryptography.SymmetricAlgorithm

// System.Security.Cryptography.SymmetricAlgorithm

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

// System.Byte

// System.Byte

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.Security.Cryptography.Rijndael
struct Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_StaticFields
{
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalBlockSizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalKeySizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalKeySizes_10;
};

// System.Security.Cryptography.Rijndael

// System.Security.Cryptography.SHA256

// System.Security.Cryptography.SHA256

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=97

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=97

// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_StaticFields
{
	// System.Numerics.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::primeRoot
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___primeRoot_0;
};

// Photon.SocketServer.Security.DiffieHellmanCryptoProvider

// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_StaticFields
{
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	RuntimeObject* ____lock_0;
};

// System.Security.Cryptography.RNGCryptoServiceProvider

// System.Security.Cryptography.RijndaelManaged

// System.Security.Cryptography.RijndaelManaged

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticFields
{
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_K
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____K_8;
};

// System.Security.Cryptography.SHA256Managed

// System.NotImplementedException

// System.NotImplementedException
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



// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Numerics.BigInteger::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F DiffieHellmanCryptoProvider_GenerateRandomSecret_m95C657C24D2F7F6F92C09F47AA10484D40ABA311 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, int32_t ___0_secretLength, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F DiffieHellmanCryptoProvider_CalculatePublicKey_m148C933BC2BD188C70D0A089CF87E936CF401E21 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManaged__ctor_mACBA07A36FCD3FE3858C4B1FBBC57D7CBB7109C7 (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Numerics.BigInteger::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_ToByteArray_mC501D315AF605FB0EF172628E9D4C95D2F015EB3 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) ;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::MsBigIntArrayToPhotonBigIntArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_MsBigIntArrayToPhotonBigIntArray_mCC22AF1882F123D3F9F3B8834F8E463E56EE90F6 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::PhotonBigIntArrayToMsBigIntArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_PhotonBigIntArrayToMsBigIntArray_m82C648C9548C183CC8CC62C590E510CFED2FC1B8 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F DiffieHellmanCryptoProvider_CalculateSharedKey_mBD63B81C33804F448AECC08D2C838D3757B61116 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_otherPartyPublicKey, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.SHA256Managed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA256Managed__ctor_mB95C91954ECF9E74B133ABC3BC72FAE4D5BF9B4F (SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.Void System.Array::Reverse(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C (RuntimeArray* ___0_array, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_m272B6C274E95DE4862C6B4B0FF36D9B995F0B8B1 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::ModPow(System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_ModPow_mBA680367B8FE86270018C3DE0EF25CF398013F76 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_exponent, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___2_modulus, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNGCryptoServiceProvider__ctor_m605146E692C0209B3FFE83F7AC94335CA089CA09 (RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* __this, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Subtraction(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Subtraction_m91D2E4A4810792046B697F0500B8797F7645FF14 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_left, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_right, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_GreaterThanOrEqual(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_m2112ACC2CFF7AAFD07A4F46787A545E0670A187B (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_left, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_right, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_LessThan(System.Numerics.BigInteger,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_mD76A0CAA6AB2F6A0C712889429122ECA85261ABD (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_left, int64_t ___1_right, const RuntimeMethod* method) ;
// System.Void System.Numerics.BigInteger::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mFEDEDA4A6AFC2BA534FEEF4EB3431B9C5AC3F9D9 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
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
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNet::Init(System.Byte[],System.Byte[],System.Byte[],System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNet_Init_m324081C7355CBF56915F80014BB3F4C9C44C2D5D (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_encryptionSecret, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_hmacSecret, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ivBytes, bool ___3_chainingModeGCM, int32_t ___4_mtu, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptorNet_Init_m324081C7355CBF56915F80014BB3F4C9C44C2D5D_RuntimeMethod_var)));
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNet::Encrypt2(System.Byte[],System.Int32,System.Byte[],System.Byte[],System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNet_Encrypt2_mD5CEC938BBCCFC9BEF74D679E4E979CA70889946 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_len, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_header, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_output, int32_t ___4_outOffset, int32_t* ___5_outSize, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptorNet_Encrypt2_mD5CEC938BBCCFC9BEF74D679E4E979CA70889946_RuntimeMethod_var)));
	}
}
// System.Byte[] ExitGames.Client.Photon.Encryption.EncryptorNet::Decrypt2(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncryptorNet_Decrypt2_m13F64655C76BCD1777374D17F3FBA7995818A292 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_offset, int32_t ___2_len, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_header, int32_t* ___4_outLen, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptorNet_Decrypt2_m13F64655C76BCD1777374D17F3FBA7995818A292_RuntimeMethod_var)));
	}
}
// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNet::CalculateEncryptedSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncryptorNet_CalculateEncryptedSize_mA339782931F2C6D63A37E77EFE50A72A080FED4A (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, int32_t ___0_unencryptedSize, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptorNet_CalculateEncryptedSize_mA339782931F2C6D63A37E77EFE50A72A080FED4A_RuntimeMethod_var)));
	}
}
// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNet::CalculateFragmentLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncryptorNet_CalculateFragmentLength_mCB232E8A17E352D77FB83E2A7F8633570BE63656 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptorNet_CalculateFragmentLength_mCB232E8A17E352D77FB83E2A7F8633570BE63656_RuntimeMethod_var)));
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNet__ctor_m2957F804DA7D56350E57F5D63DD2E79AA7F57963 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, const RuntimeMethod* method) 
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
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider__ctor_mB0961B8367CE25888BF77E12A5515AA595EDA392 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime768_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		memset((&L_1), 0, sizeof(L_1));
		BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371((&L_1), L_0, /*hidden argument*/NULL);
		__this->___prime_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___prime_1))->____bits_1), (void*)NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = DiffieHellmanCryptoProvider_GenerateRandomSecret_m95C657C24D2F7F6F92C09F47AA10484D40ABA311(__this, ((int32_t)160), NULL);
		__this->___secret_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___secret_2))->____bits_1), (void*)NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = DiffieHellmanCryptoProvider_CalculatePublicKey_m148C933BC2BD188C70D0A089CF87E936CF401E21(__this, NULL);
		__this->___publicKey_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___publicKey_3))->____bits_1), (void*)NULL);
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider__ctor_m2183C5CD4BEB69F1E9024E5D2F6355DF37497A91 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cryptoKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* L_0 = (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39*)il2cpp_codegen_object_new(RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RijndaelManaged__ctor_mACBA07A36FCD3FE3858C4B1FBBC57D7CBB7109C7(L_0, NULL);
		__this->___crypto_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crypto_4), (void*)L_0);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_1 = __this->___crypto_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_cryptoKey;
		NullCheck(L_1);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(13 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_1, L_2);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_3 = __this->___crypto_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		NullCheck(L_3);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_3, L_4);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_5 = __this->___crypto_4;
		NullCheck(L_5);
		VirtualActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_5, 2);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_PublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_get_PublicKey_m6835C493E240517B934D3ECD1B0B0AE5B693F6F0 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___publicKey_3;
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = BigInteger_ToByteArray_mC501D315AF605FB0EF172628E9D4C95D2F015EB3((&V_0), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = DiffieHellmanCryptoProvider_MsBigIntArrayToPhotonBigIntArray_mCC22AF1882F123D3F9F3B8834F8E463E56EE90F6(__this, L_1, NULL);
		V_1 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		return L_3;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::DeriveSharedKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_DeriveSharedKey_m8FB84859C4CB3A1F2CED2562DF55FBD014568646 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_otherPartyPublicKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_otherPartyPublicKey;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = DiffieHellmanCryptoProvider_PhotonBigIntArrayToMsBigIntArray_m82C648C9548C183CC8CC62C590E510CFED2FC1B8(__this, L_0, NULL);
		___0_otherPartyPublicKey = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_otherPartyPublicKey;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371((&V_0), L_2, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3 = V_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = DiffieHellmanCryptoProvider_CalculateSharedKey_mBD63B81C33804F448AECC08D2C838D3757B61116(__this, L_3, NULL);
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = BigInteger_ToByteArray_mC501D315AF605FB0EF172628E9D4C95D2F015EB3((&V_1), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = DiffieHellmanCryptoProvider_MsBigIntArrayToPhotonBigIntArray_mCC22AF1882F123D3F9F3B8834F8E463E56EE90F6(__this, L_5, NULL);
		__this->___sharedKey_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sharedKey_5), (void*)L_6);
		SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C* L_7 = (SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C*)il2cpp_codegen_object_new(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		SHA256Managed__ctor_mB95C91954ECF9E74B133ABC3BC72FAE4D5BF9B4F(L_7, NULL);
		V_3 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_8 = V_3;
					if (!L_8)
					{
						goto IL_004e;
					}
				}
				{
					SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_9 = V_3;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_004e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_10 = V_3;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___sharedKey_5;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
			L_12 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_10, L_11, NULL);
			V_2 = L_12;
			goto IL_004f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* L_13 = (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39*)il2cpp_codegen_object_new(RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		RijndaelManaged__ctor_mACBA07A36FCD3FE3858C4B1FBBC57D7CBB7109C7(L_13, NULL);
		__this->___crypto_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crypto_4), (void*)L_13);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_14 = __this->___crypto_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_14);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(13 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_14, L_15);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_16 = __this->___crypto_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		NullCheck(L_16);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_16, L_17);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_18 = __this->___crypto_4;
		NullCheck(L_18);
		VirtualActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_18, 2);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::PhotonBigIntArrayToMsBigIntArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_PhotonBigIntArrayToMsBigIntArray_m82C648C9548C183CC8CC62C590E510CFED2FC1B8 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_array;
		NullCheck(L_2);
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_4&((int32_t)128)))) == ((int32_t)((int32_t)128)))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1)));
		V_1 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_array;
		NullCheck(L_10);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, ((int32_t)(((RuntimeArray*)L_10)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		V_2 = L_11;
		goto IL_0041;
	}

IL_003d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_array;
		V_2 = L_12;
		goto IL_0041;
	}

IL_0041:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		return L_13;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::MsBigIntArrayToPhotonBigIntArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_MsBigIntArrayToPhotonBigIntArray_mCC22AF1882F123D3F9F3B8834F8E463E56EE90F6 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_array;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1)));
		V_1 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_array;
		NullCheck(L_9);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_7, 1, (RuntimeArray*)L_8, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), 1)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		V_2 = L_10;
		goto IL_0035;
	}

IL_0031:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_array;
		V_2 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_2;
		return L_12;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_Encrypt_m2FE785BD6C29653FA2E50ADE2D63DC3CCCC2A563 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_0 = __this->___crypto_4;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(22 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor() */, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0024;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0024:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_data;
			int32_t L_6 = ___1_offset;
			int32_t L_7 = ___2_count;
			NullCheck(L_4);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7);
			V_1 = L_8;
			goto IL_0025;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0025:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		return L_9;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Decrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_Decrypt_mE867D145E9EC7B883E6A512D7E51DE1F429925A3 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_0 = __this->___crypto_4;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(24 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor() */, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0024;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0024:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_data;
			int32_t L_6 = ___1_offset;
			int32_t L_7 = ___2_count;
			NullCheck(L_4);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7);
			V_1 = L_8;
			goto IL_0025;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0025:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		return L_9;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_mF87C3E8E916083DDAE4F1696E0CE8A1662F1B71F (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DiffieHellmanCryptoProvider_Dispose_m272B6C274E95DE4862C6B4B0FF36D9B995F0B8B1(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_m272B6C274E95DE4862C6B4B0FF36D9B995F0B8B1 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = ___0_disposing;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		return;
	}
}
// System.Numerics.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F DiffieHellmanCryptoProvider_CalculatePublicKey_m148C933BC2BD188C70D0A089CF87E936CF401E21 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ((DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_StaticFields*)il2cpp_codegen_static_fields_for(DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var))->___primeRoot_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = __this->___secret_2;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = __this->___prime_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_ModPow_mBA680367B8FE86270018C3DE0EF25CF398013F76(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = V_0;
		return L_4;
	}
}
// System.Numerics.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F DiffieHellmanCryptoProvider_CalculateSharedKey_mBD63B81C33804F448AECC08D2C838D3757B61116 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_otherPartyPublicKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___0_otherPartyPublicKey;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = __this->___secret_2;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = __this->___prime_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_ModPow_mBA680367B8FE86270018C3DE0EF25CF398013F76(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = V_0;
		return L_4;
	}
}
// System.Numerics.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F DiffieHellmanCryptoProvider_GenerateRandomSecret_m95C657C24D2F7F6F92C09F47AA10484D40ABA311 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, int32_t ___0_secretLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B4_0 = 0;
	{
		RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* L_0 = (RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170*)il2cpp_codegen_object_new(RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RNGCryptoServiceProvider__ctor_m605146E692C0209B3FFE83F7AC94335CA089CA09(L_0, NULL);
		V_1 = L_0;
		int32_t L_1 = ___0_secretLength;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_1/8)));
		V_2 = L_2;
	}

IL_0010:
	{
		RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_2;
		NullCheck(L_3);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_3, L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371((&V_0), L_5, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6 = V_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7 = __this->___prime_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_8;
		L_8 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(1, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9;
		L_9 = BigInteger_op_Subtraction_m91D2E4A4810792046B697F0500B8797F7645FF14(L_7, L_8, NULL);
		bool L_10;
		L_10 = BigInteger_op_GreaterThanOrEqual_m2112ACC2CFF7AAFD07A4F46787A545E0670A187B(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0045;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = BigInteger_op_LessThan_mD76A0CAA6AB2F6A0C712889429122ECA85261ABD(L_11, ((int64_t)2), NULL);
		G_B4_0 = ((int32_t)(L_12));
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_3 = (bool)G_B4_0;
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_0010;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_14 = V_0;
		V_4 = L_14;
		goto IL_004f;
	}

IL_004f:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_15 = V_4;
		return L_15;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider__cctor_mD74430A6C87FC890FED39280CD05B809E264AD0B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___Generator_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		memset((&L_1), 0, sizeof(L_1));
		BigInteger__ctor_mFEDEDA4A6AFC2BA534FEEF4EB3431B9C5AC3F9D9((&L_1), L_0, /*hidden argument*/NULL);
		((DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_StaticFields*)il2cpp_codegen_static_fields_for(DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var))->___primeRoot_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&((DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_StaticFields*)il2cpp_codegen_static_fields_for(DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var))->___primeRoot_0))->____bits_1), (void*)NULL);
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
// System.Void Photon.SocketServer.Security.OakleyGroups::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OakleyGroups__cctor_mC4B19E0DC216DCABF2EC3F4B2E0593CF999F1CEF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____1D920AA24CC00C3B7BBC1397D39DE20128DDED0DC4FB04967ED4959F99075D69_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___Generator_0 = ((int32_t)22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)97));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____1D920AA24CC00C3B7BBC1397D39DE20128DDED0DC4FB04967ED4959F99075D69_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime768_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime768_1), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime1024_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime1024_2), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)192));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime1536_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime1536_3), (void*)L_7);
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
