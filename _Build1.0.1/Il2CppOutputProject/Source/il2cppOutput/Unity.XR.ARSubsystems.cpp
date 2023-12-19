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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>
struct InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>
struct InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>
struct SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tF8E2E455D5493CB9D730F2D121FD9CED8ABB8B5C;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t0BFBF5E56D4A1F904B4AE98ECBB376520816FB32;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t8CB28AA1030E7FAEFC28809245F48903A966B2CF;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tFB624BCBD66F2375A53C5B17F42E131972D1E0D9;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<System.Object>
struct SubsystemProvider_1_t7964A83C7EDD0F612E018A2033A9D500479D92F3;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct SubsystemProvider_1_t22A73CFC0FBED238F54239530C581C40C8C1E4AB;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct SubsystemProvider_1_tBF3C4994CBAACCFBF7C5B74C847151ED05D7D9C7;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemWithProvider_3_t9B46676D7BE943A96773ABEE0697A7F35EA89C3B;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemWithProvider_3_tE2E94AA2ED69A0B1D8AFC10351E3A4D199EE973A;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemWithProvider_3_t4D6DBA97FBFBBDD88E0B44C80B4711879EFD7522;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t65DE76C1B2152EFFE408635A150811F4B8000AA9;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct TrackingSubsystem_4_t6A4D8CCD1F1694558E2CC65E84F2376ED1018B1B;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t7A10D71D38CC667281CC808FAB8ED27CD44C8D7C;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct TrackingSubsystem_4_tAE598621837B470F57C1F0867DC899BE9FDE8956;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t47A08A8E52556949A85ED11792391A687F965D53;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct TrackingSubsystem_4_t36B7E963263063D29AD906549E77576FAA31C385;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>[]
struct InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>[]
struct InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[]
struct ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27;
// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2;
// UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser
struct DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// UnityEngine.XR.ARSubsystems.HandheldARInputDevice
struct HandheldARInputDevice_tDC70607D65788F0D6A7BA2EABA6D289D15DFDCE9;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242;
// System.Type
struct Type_t;
// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor
struct XRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor
struct XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor
struct XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider
struct Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider
struct Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Feature_t4F077DF9999D98A1C051A9A8983AB9A4F9D00F6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaneAlignment_t531EADCD75A8A621FF67C4788965BF89F076CFBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaneClassification_t2E56AE9FB4BA673700F5C41856A74899B46C05F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0040832A71810E092F962A5F9A66A6A1866CC7D1;
IL2CPP_EXTERN_C String_t* _stringLiteral068B9DAC1E2A8DA48FFC0F566F9C805099D13F1B;
IL2CPP_EXTERN_C String_t* _stringLiteral0B9AEC2348486B831A3488530ACA1A6FECCC60DE;
IL2CPP_EXTERN_C String_t* _stringLiteral0EEB74DAF175D886E4EA5D5BB23B6E48993A80AF;
IL2CPP_EXTERN_C String_t* _stringLiteral0FBF1F3BF0E575F4D92649F1F5678267C887CF89;
IL2CPP_EXTERN_C String_t* _stringLiteral132C67C31C67A73009E12AF0BF92B84B55B95E84;
IL2CPP_EXTERN_C String_t* _stringLiteral158E95C298826281B51D5B4EE894BE864B7D1153;
IL2CPP_EXTERN_C String_t* _stringLiteral16B03B9B09A75749753D1BD8C49C3482ED00598A;
IL2CPP_EXTERN_C String_t* _stringLiteral1862DB4B99A6D2D4DDE2C775E5AC1AF7CD03A268;
IL2CPP_EXTERN_C String_t* _stringLiteral1889AF12D766B3A68EB9EE79FE4ECA560C23A4F5;
IL2CPP_EXTERN_C String_t* _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4;
IL2CPP_EXTERN_C String_t* _stringLiteral371D4A83362DFDF00E89BA68C82057A64E205D24;
IL2CPP_EXTERN_C String_t* _stringLiteral3AB0DA5C0A0620735E866EA5BC9FCAA876BA5545;
IL2CPP_EXTERN_C String_t* _stringLiteral3B1384C148B6355F25E67F7DFA0D39159B634A77;
IL2CPP_EXTERN_C String_t* _stringLiteral40F25DCEA3689A55267487C5F546C2AD0C2BB96B;
IL2CPP_EXTERN_C String_t* _stringLiteral41D4ECEC72974BEA998FBA733A15A0EA3B7DF9B1;
IL2CPP_EXTERN_C String_t* _stringLiteral49DE19A080E7D5ADFAE0565CAFC30E6F99EB7FFD;
IL2CPP_EXTERN_C String_t* _stringLiteral4B80EFD0BD00CE9A8E26DD1EA0F4B58964AF32CD;
IL2CPP_EXTERN_C String_t* _stringLiteral5BA2A4A16421FA9FAB2CAF2E4AFC91121F7BB4FD;
IL2CPP_EXTERN_C String_t* _stringLiteral6F57A13713CB116503D42E8DFD65A84DA07B33BB;
IL2CPP_EXTERN_C String_t* _stringLiteral73B1EF85B3661969EA06515B1FAB6B1BECBB653C;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral772119CD0175AC1E1CADE4F75080F5F07B6BB1F9;
IL2CPP_EXTERN_C String_t* _stringLiteral7F623AA45815B8B51F227F5A19CB68E1BD42852E;
IL2CPP_EXTERN_C String_t* _stringLiteral95FA8CB284CA44C4320BEA5DCF663790F1EE26AA;
IL2CPP_EXTERN_C String_t* _stringLiteralA26025A2F3BC871A6B1E0A92BE4B4EA60DBC6C91;
IL2CPP_EXTERN_C String_t* _stringLiteralA8A8717ECC5E31F30A99C8547616828C8F428B66;
IL2CPP_EXTERN_C String_t* _stringLiteralA9BA2974AED76FB92F26F69C6093F790414376FA;
IL2CPP_EXTERN_C String_t* _stringLiteralAA661F2F4F2AC2A4D1268C73A499D77CA7E0C476;
IL2CPP_EXTERN_C String_t* _stringLiteralB51BA3F369D95E685969CC962493A3F0B421BA4D;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC838375A805C8CCC6514E96BA13E150D629186;
IL2CPP_EXTERN_C String_t* _stringLiteralBEC9FDEA1EB953376E5F17E9CEC1AFAC97FDD26D;
IL2CPP_EXTERN_C String_t* _stringLiteralC127E2685E9BA6170311362A98135614A56E47AF;
IL2CPP_EXTERN_C String_t* _stringLiteralCEA8A633C4C95F85CAB2C4D07CAFA53611912B32;
IL2CPP_EXTERN_C String_t* _stringLiteralCF903030A69C6580BF09DFE1B291D6179B4A58FC;
IL2CPP_EXTERN_C String_t* _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567;
IL2CPP_EXTERN_C String_t* _stringLiteralD2316C6372C4914C9A07CD469B803A77534ADCF4;
IL2CPP_EXTERN_C String_t* _stringLiteralD7D10F5EBD63494DC1C7F8C9033E7A490800B3AF;
IL2CPP_EXTERN_C String_t* _stringLiteralDA1CD25788E7EE9FDEA55BBF0CEE5D1AD7F125CD;
IL2CPP_EXTERN_C String_t* _stringLiteralE249513646B3CA3B2119CA7AD27370C9E9012B74;
IL2CPP_EXTERN_C String_t* _stringLiteralE7538558415E1BD8F7A4C577BB457C0AD0F3C884;
IL2CPP_EXTERN_C String_t* _stringLiteralED9546C195BD4988B71713BD762B7E7F364227ED;
IL2CPP_EXTERN_C String_t* _stringLiteralF1FF99A8F97A90CE3EB35AA1C7B40C1DDFC82A9B;
IL2CPP_EXTERN_C String_t* _stringLiteralF627CDA1D5403909B224DFB1DDF5D0F8E00F2EEA;
IL2CPP_EXTERN_C String_t* _stringLiteralF9A65D560514A0DBAEA0BD813C4A25CD252C2D66;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_mFE0B943258581DA1E3C8A38D2B1FDF6C431276B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_GetBoundary_m85479D05365E9665B11E24CADDC45AFDC9A43158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_Raycast_mB206D5960A72ECCC6BC44AA91719306F790C4854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_Raycast_mDB7696CAE66690693DA105DDC40B319A327807E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_get_frameRate_m3D2F14E59249D30B755798C8C0732B0CEFA059E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_requestedPlaneDetectionMode_mEC2045B55C836A6D80F35FDC31682FB6A2F00E3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_m07EAA6E76991BF9B677CE120674A862A92575EA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_mACCDE670DB69FFC142AB069719CD54CAB899FCFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_mB31F5CFD7E71A6B9480B8267881059F421FBB405_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_mC889EBB6C5855DD9086D1ABADA7C64D5D3461B9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m14DC8034E7EF5275FC50EA47EF2355B6D9CC22B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m4302B564B35CA84EA7C4963ACA31B49822791CF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m70092D82649E54D6A2DFC428DA9587E292044D13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_mB17ACABA3F2892B7CA5AE85EBF66B795E26AA997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3__ctor_m8563E495EB3A4C08B0C3C47658443D5A72A646FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m7DD7F5DB439B46CA939D9C98022F808219C91C4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingSubsystem_4__ctor_m2BD5EAC3E1CE96C425D0CADDDD7821CA3449405F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingSubsystem_4__ctor_m7E7E0815845FC7D13BBCA56A4EE6A9F384E22CC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingSubsystem_4__ctor_mB019CC7BC60D33E4395F93C4E202215BD2D5C7FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRAnchorSubsystem_GetChanges_m75942CEB1452CCBC366E8AAC9FE1A747B54FE439_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPlaneSubsystem_GetBoundary_mF1638B7F45F420D6A56A25D5749A91AF6C46B961_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD7905859D3FACCECA28953FF9B590D5C187C0B66 
{
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

// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// UnityEngine.XR.ARSubsystems.FeatureExtensions
struct FeatureExtensions_t1232274C1E6A23CE1DB5FDAF029C067F4270B473  : public RuntimeObject
{
};

// UnityEngine.XR.ARSubsystems.HashCodeUtil
struct HashCodeUtil_tA3F03A72789A1ACC32DC77001887D48B2801B3A5  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
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

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>>
struct InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>>
struct InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF* ___additionalValues_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>
struct NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>
struct NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tF8E2E455D5493CB9D730F2D121FD9CED8ABB8B5C  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t0BFBF5E56D4A1F904B4AE98ECBB376520816FB32  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t8CB28AA1030E7FAEFC28809245F48903A966B2CF  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tFB624BCBD66F2375A53C5B17F42E131972D1E0D9  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct SubsystemProvider_1_t22A73CFC0FBED238F54239530C581C40C8C1E4AB  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct SubsystemProvider_1_tBF3C4994CBAACCFBF7C5B74C847151ED05D7D9C7  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	RuntimeObject* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	RuntimeObject* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemWithProvider_3_t9B46676D7BE943A96773ABEE0697A7F35EA89C3B  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemWithProvider_3_tE2E94AA2ED69A0B1D8AFC10351E3A4D199EE973A  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemWithProvider_3_t4D6DBA97FBFBBDD88E0B44C80B4711879EFD7522  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* ___U3CproviderU3Ek__BackingField_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser
struct DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8  : public ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2
{
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

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
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

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
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

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
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

// UnityEngine.XR.ARSubsystems.ScopedProfiler
struct ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F 
{
	union
	{
		struct
		{
		};
		uint8_t ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F__padding[1];
	};
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

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
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

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384 
{
	// System.String UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F 
{
	// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsHorizontalPlaneDetection>k__BackingField
	bool ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsVerticalPlaneDetection>k__BackingField
	bool ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsArbitraryPlaneDetection>k__BackingField
	bool ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsBoundaryVertices>k__BackingField
	bool ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsClassification>k__BackingField
	bool ___U3CsupportsClassificationU3Ek__BackingField_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	int32_t ___U3CsupportsClassificationU3Ek__BackingField_8;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	int32_t ___U3CsupportsClassificationU3Ek__BackingField_8;
};

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 
{
	// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsViewportBasedRaycast>k__BackingField
	bool ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsWorldBasedRaycast>k__BackingField
	bool ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportedTrackableTypes>k__BackingField
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsTrackedRaycasts>k__BackingField
	bool ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	int32_t ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	int32_t ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_3;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_pinvoke
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	char* ___U3CidU3Ek__BackingField_2;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_3;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_com
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	Il2CppChar* ___U3CidU3Ek__BackingField_2;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_3;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct TrackableChanges_1_tFC79B2E1FF9EFB1D5754F6995583D33A519F300F 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___m_Removed_3;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct TrackableChanges_1_t6971CD7F709E7353F4365FE06A109B21A0F0C931 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___m_Removed_3;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___m_Removed_3;
};

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct TrackingSubsystem_4_t6A4D8CCD1F1694558E2CC65E84F2376ED1018B1B  : public SubsystemWithProvider_3_tE2E94AA2ED69A0B1D8AFC10351E3A4D199EE973A
{
};

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct TrackingSubsystem_4_tAE598621837B470F57C1F0867DC899BE9FDE8956  : public SubsystemWithProvider_3_t9B46676D7BE943A96773ABEE0697A7F35EA89C3B
{
};

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct TrackingSubsystem_4_t36B7E963263063D29AD906549E77576FAA31C385  : public SubsystemWithProvider_3_t4D6DBA97FBFBBDD88E0B44C80B4711879EFD7522
{
};

// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor
struct ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Identifier
	intptr_t ___m_Identifier_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Capabilities
	uint64_t ___m_Capabilities_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Rank
	int32_t ___m_Rank_2;
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

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_40;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::m_ByteOffset
	uint32_t ___m_ByteOffset_41;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_42;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_43;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor
struct XRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30  : public SubsystemDescriptorWithProvider_2_tF8E2E455D5493CB9D730F2D121FD9CED8ABB8B5C
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_3;
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor
struct XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300  : public SubsystemDescriptorWithProvider_2_t0BFBF5E56D4A1F904B4AE98ECBB376520816FB32
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsHorizontalPlaneDetection>k__BackingField
	bool ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsVerticalPlaneDetection>k__BackingField
	bool ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsArbitraryPlaneDetection>k__BackingField
	bool ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsBoundaryVertices>k__BackingField
	bool ___U3CsupportsBoundaryVerticesU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsClassification>k__BackingField
	bool ___U3CsupportsClassificationU3Ek__BackingField_7;
};

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor
struct XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311  : public SubsystemDescriptorWithProvider_2_t8CB28AA1030E7FAEFC28809245F48903A966B2CF
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportsViewportBasedRaycast>k__BackingField
	bool ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportsWorldBasedRaycast>k__BackingField
	bool ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportedTrackableTypes>k__BackingField
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportsTrackedRaycasts>k__BackingField
	bool ___U3CsupportsTrackedRaycastsU3Ek__BackingField_6;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399  : public SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526
{
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_DefaultConfigurationChooser
	ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* ___m_DefaultConfigurationChooser_4;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_ConfigurationChooser
	ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* ___m_ConfigurationChooser_5;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076  : public SubsystemDescriptorWithProvider_2_tFB624BCBD66F2375A53C5B17F42E131972D1E0D9
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.XRSessionUpdateParams
struct XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 
{
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenOrientation>k__BackingField
	int32_t ___U3CscreenOrientationU3Ek__BackingField_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenDimensions>k__BackingField
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CscreenDimensionsU3Ek__BackingField_1;
};

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider
struct Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C  : public SubsystemProvider_1_t22A73CFC0FBED238F54239530C581C40C8C1E4AB
{
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8  : public SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781
{
};

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider
struct Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46  : public SubsystemProvider_1_tBF3C4994CBAACCFBF7C5B74C847151ED05D7D9C7
{
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5  : public SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F
{
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;
};

// UnityEngine.XR.ARSubsystems.Configuration
struct Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 
{
	// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor UnityEngine.XR.ARSubsystems.Configuration::<descriptor>k__BackingField
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 ___U3CdescriptorU3Ek__BackingField_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.Configuration::<features>k__BackingField
	uint64_t ___U3CfeaturesU3Ek__BackingField_1;
};

// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// System.Boolean UnityEngine.InputSystem.InputControl::m_CachedValueIsStale
	bool ___m_CachedValueIsStale_18;
	// System.Boolean UnityEngine.InputSystem.InputControl::m_UnprocessedCachedValueIsStale
	bool ___m_UnprocessedCachedValueIsStale_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_20;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_21;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.InputControl::m_OptimizedControlDataType
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_OptimizedControlDataType_23;
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

// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t ___m_SessionId_5;
};

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF  : public TrackingSubsystem_4_tAE598621837B470F57C1F0867DC899BE9FDE8956
{
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62  : public TrackingSubsystem_4_t6A4D8CCD1F1694558E2CC65E84F2376ED1018B1B
{
};

// UnityEngine.XR.ARSubsystems.XRRaycast
struct XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycast::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRRaycast::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycast::m_Distance
	float ___m_Distance_5;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_HitTrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_HitTrackableId_6;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7  : public TrackingSubsystem_4_t36B7E963263063D29AD906549E77576FAA31C385
{
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>
struct InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>
struct InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;
};

// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_27;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_28;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_29;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_30;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description_31;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_32;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_33;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl_34;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl_35;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl_36;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl_37;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap_38;
	// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[] UnityEngine.InputSystem.InputDevice::m_ControlTreeNodes
	ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27* ___m_ControlTreeNodes_39;
	// System.UInt16[] UnityEngine.InputSystem.InputDevice::m_ControlTreeIndices
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___m_ControlTreeIndices_40;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.XR.ARSubsystems.HandheldARInputDevice
struct HandheldARInputDevice_tDC70607D65788F0D6A7BA2EABA6D289D15DFDCE9  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.ARSubsystems.HandheldARInputDevice::<devicePosition>k__BackingField
	Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___U3CdevicePositionU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.ARSubsystems.HandheldARInputDevice::<deviceRotation>k__BackingField
	QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___U3CdeviceRotationU3Ek__BackingField_45;
};

// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1  : public InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<x>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CxU3Ek__BackingField_28;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<y>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CyU3Ek__BackingField_29;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<z>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CzU3Ek__BackingField_30;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<w>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CwU3Ek__BackingField_31;
};

// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A  : public InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<x>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CxU3Ek__BackingField_28;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<y>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CyU3Ek__BackingField_29;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<z>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CzU3Ek__BackingField_30;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// UnityEngine.XR.ARSubsystems.ConfigurationChooser

// UnityEngine.XR.ARSubsystems.ConfigurationChooser

// UnityEngine.XR.ARSubsystems.FeatureExtensions

// UnityEngine.XR.ARSubsystems.FeatureExtensions

// UnityEngine.XR.ARSubsystems.HashCodeUtil

// UnityEngine.XR.ARSubsystems.HashCodeUtil

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser

// UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

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

// UnityEngine.XR.ARSubsystems.ScopedProfiler

// UnityEngine.XR.ARSubsystems.ScopedProfiler

// System.Single

// System.Single

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.XR.ARSubsystems.TrackableId

// System.UInt64

// System.UInt64

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector2Int

// System.Void

// System.Void

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>

// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor

// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// UnityEngine.Ray

// UnityEngine.Ray

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.Text.RegularExpressions.Regex

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRSessionUpdateParams

// UnityEngine.XR.ARSubsystems.XRSessionUpdateParams

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields
{
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.BoundedPlane

// UnityEngine.XR.ARSubsystems.Configuration

// UnityEngine.XR.ARSubsystems.Configuration

// UnityEngine.InputSystem.InputControl

// UnityEngine.InputSystem.InputControl

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

// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRAnchor

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem

// UnityEngine.XR.ARSubsystems.XRRaycast
struct XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::s_Default
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRRaycast

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem

// UnityEngine.InputSystem.InputDevice

// UnityEngine.InputSystem.InputDevice

// System.InvalidOperationException

// System.InvalidOperationException

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.XR.ARSubsystems.HandheldARInputDevice

// UnityEngine.XR.ARSubsystems.HandheldARInputDevice

// UnityEngine.InputSystem.Controls.QuaternionControl

// UnityEngine.InputSystem.Controls.QuaternionControl

// UnityEngine.InputSystem.Controls.Vector3Control

// UnityEngine.InputSystem.Controls.Vector3Control
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


// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_mBBE9989D4A84C84F096B0567206CA55C8EC949F3_gshared (TrackingSubsystem_4_t7A10D71D38CC667281CC808FAB8ED27CD44C8D7C* __this, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared (SubsystemProvider_1_t7964A83C7EDD0F612E018A2033A9D500479D92F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared (SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_mED282B11BA9E98619E681938C98D7A83A0251349_gshared (TrackingSubsystem_4_t65DE76C1B2152EFFE408635A150811F4B8000AA9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_mFB0EB2FBD50AE188F7C5BA05657F8CB3E61C78CC_gshared (TrackingSubsystem_4_t47A08A8E52556949A85ED11792391A687F965D53* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_3__ctor_mEC13729FA21E9E590467B3B9FC8CD25CC281FFD4_gshared (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::CreateResolvedPromise(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB* Promise_1_CreateResolvedPromise_m0949FA71DFBA371879063E5948B8E5B46467EFCF_gshared (int32_t ___0_result, const RuntimeMethod* method) ;

// System.Void UnityEngine.XR.ARSubsystems.XRAnchor::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchor__ctor_mDD8A7F48E03A25972AA93D2C89C1D773635CA15B (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, int32_t ___2_trackingState, intptr_t ___3_nativePtr, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::get_trackableId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRAnchor_get_trackableId_m0F50E81D0152D0BA4152EF9B66F648EF9FC664AE_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRAnchor_get_pose_m2347783C1262EEFBC0B817EF0357FA4BB4BF053F_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::get_trackingState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRAnchor_get_trackingState_m6124A26C36CA93C25C57548576CB00C1F496ED83_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::get_nativePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRAnchor_get_nativePtr_mC0551FA7E8DB8A0DA1EAE02D9B0BFD9D47389C26_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) ;
// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::get_sessionId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t XRAnchor_get_sessionId_m719628E8A58027C75FF2CEA3345DC41200FB5F76_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.TrackableId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Pose::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pose_GetHashCode_mDD6C48FABC18795F04F82D42DFCBC916C0C6CCDB (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D (intptr_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Guid::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408 (Guid_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRAnchor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRAnchor_GetHashCode_mEFA5E37600C1A0B56F911227326704C17C3B5400 (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Pose::Equals(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pose_Equals_m31979E7A46252DBB620F4A0EA3BDBA61782DA498 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_other, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Boolean System.Guid::Equals(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C (Guid_t* __this, Guid_t ___0_g, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchor::Equals(UnityEngine.XR.ARSubsystems.XRAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRAnchor_Equals_m8F3408527C2CF86CF0A09AE74BF790F8E60ED6F1 (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRAnchor_Equals_mFD12F373615A9015CB110787F6FF06CDAAC1433F (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::get_invalidId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494_inline (const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>::.ctor()
inline void TrackingSubsystem_4__ctor_m2BD5EAC3E1CE96C425D0CADDDD7821CA3449405F (TrackingSubsystem_4_tAE598621837B470F57C1F0867DC899BE9FDE8956* __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingSubsystem_4_tAE598621837B470F57C1F0867DC899BE9FDE8956*, const RuntimeMethod*))TrackingSubsystem_4__ctor_mBBE9989D4A84C84F096B0567206CA55C8EC949F3_gshared)(__this, method);
}
// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::get_running()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>::get_provider()
inline Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* SubsystemWithProvider_3_get_provider_m7DD7F5DB439B46CA939D9C98022F808219C91C4B_inline (SubsystemWithProvider_3_t9B46676D7BE943A96773ABEE0697A7F35EA89C3B* __this, const RuntimeMethod* method)
{
	return ((  Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* (*) (SubsystemWithProvider_3_t9B46676D7BE943A96773ABEE0697A7F35EA89C3B*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::get_defaultValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 XRAnchor_get_defaultValue_mF68ABF2D0EC8B54DD8D5333FCD56EEF14A985A9A_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m70092D82649E54D6A2DFC428DA9587E292044D13 (SubsystemProvider_1_t22A73CFC0FBED238F54239530C581C40C8C1E4AB* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_t22A73CFC0FBED238F54239530C581C40C8C1E4AB*, const RuntimeMethod*))SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor__ctor_m09A98B336838C4CF7BCFE08EB3AF49BFDA9AFF8C (XRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30* __this, Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384 ___0_cinfo, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___0_descriptor, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_mB31F5CFD7E71A6B9480B8267881059F421FBB405 (SubsystemDescriptorWithProvider_2_tF8E2E455D5493CB9D730F2D121FD9CED8ABB8B5C* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_tF8E2E455D5493CB9D730F2D121FD9CED8ABB8B5C*, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mFF66DF9642403D18476451C30BD5F2FC89CAF8B1_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m2D11E14B5E4C48474C00C579D4C2F5F45970D70B_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_mD1DEE5FBF656FDF4BF5E28B60C04F53B6D146C3B_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_supportsTrackableAttachments()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_m2BA4A0E85635C4D85059CDF713EE7FC21F80DBF4_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor_set_supportsTrackableAttachments_m61CE5B37DB3C3492D4EB5123976414A0CB940413_inline (XRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m6344F3700C1D743D82AB9E74925F7687925734A6_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m0E291C22B0B2CF634024F32ECA2E424F18157ACF_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mD5C5CAAC167444FE1BD48C1A16AA904E8DFF7052_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m58F12783B1EF42ED420CC99E0585FA6ED046C4AD_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::ReferenceHash(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mE063F9FDF568ECC85F4D30998CB9A071A82C3859 (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_mD8F45C05DFDE73ABDD26DC002B6F0B1506149F6D (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m11F554099FC7163A8405E15A238CD1084BCCB65E (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor UnityEngine.XR.ARSubsystems.Configuration::get_descriptor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 Configuration_get_descriptor_m3C4973351367EA0BD9E48DA1E2201D8803BA8D1E_inline (Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.Configuration::get_features()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Configuration_get_features_m704F372E940AF1DB435C1EBFF8E48EAD4E8B3776_inline (Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigurationDescriptor_GetHashCode_mAD2765B79FFD1806DEA8D927D928C496AAADB411 (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, const RuntimeMethod* method) ;
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_m98169BF154323DEFC91DB146CDD3CE7550B6AD36 (int32_t ___0_hash1, int32_t ___1_hash2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.Configuration::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Configuration_GetHashCode_m19DCAAF7939DB5DAAF29A2A4E994D41F66FB73D2 (Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::Equals(UnityEngine.XR.ARSubsystems.ConfigurationDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfigurationDescriptor_Equals_mC5F92BBF22292A48CAD47A31EF13F3D5A0DC4091 (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.Configuration::Equals(UnityEngine.XR.ARSubsystems.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Configuration_Equals_mFC36BD166DE654A704096918BDA1FE9E34A7B7E6 (Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* __this, Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.Configuration::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Configuration_Equals_m8D6DE5FC0FAD2DD34D2F3CEF1738FC3A2F131A91 (Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::get_identifier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ConfigurationDescriptor_get_identifier_m858F4B730002C1823D283460115DA65C6A46BCB6_inline (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::get_capabilities()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConfigurationDescriptor_get_capabilities_m6A4EF4C0E0FE3671E8564EF13BA2A5B4264CF938_inline (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::get_rank()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConfigurationDescriptor_get_rank_mEDFBF5E2173FA84A0695BB01A6A40860794F6FA8_inline (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::.ctor(System.IntPtr,UnityEngine.XR.ARSubsystems.Feature,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationDescriptor__ctor_m79BD6295C5A725B6B65CA3A4281EC801C12B2C41 (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, intptr_t ___0_identifier, uint64_t ___1_capabilities, int32_t ___2_rank, const RuntimeMethod* method) ;
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032 (intptr_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292 (intptr_t* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::HexString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigurationDescriptor_HexString_mA5D97CE4BCD0DD66455BB9BE281302136382BCD5 (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.FeatureExtensions::ToStringList(UnityEngine.XR.ARSubsystems.Feature,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FeatureExtensions_ToStringList_m7961C38D97DCDD6FB5EAC9AB77104F97D5304214 (uint64_t ___0_features, String_t* ___1_separator, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigurationDescriptor_ToString_m20EA191A42A1855B5E97CD8949F6AE5B9ACBDF65 (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::Combine(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_mF01D6438A25333A5530D4658D11A9F0BC988011A (int32_t ___0_hash1, int32_t ___1_hash2, int32_t ___2_hash3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfigurationDescriptor_Equals_m4FAAC4A13BF03211A9C3EB66F65FB48BE334A611 (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.ConfigurationChooser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationChooser__ctor_mBA387FADB0244DB6C71741AB9DE75E881B15B803 (ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.FeatureExtensions::LowestBit(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t FeatureExtensions_LowestBit_m0E549BA3822C6732458DAB421C673B7D774047DF (uint64_t ___0_self, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158 (String_t* ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::Combine(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_m6E8EC4EC047F80C102AEE35681D328C78A3DCE55 (int32_t ___0_hash1, int32_t ___1_hash2, int32_t ___2_hash3, int32_t ___3_hash4, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_m0CA248D97B33A8A3DD5AD8456D090619CCD63FFA (int32_t ___0_hash1, int32_t ___1_hash2, int32_t ___2_hash3, int32_t ___3_hash4, int32_t ___4_hash5, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_mAD5A58AE27677DC59EC7E9AE41FAF43AF414C506 (int32_t ___0_hash1, int32_t ___1_hash2, int32_t ___2_hash3, int32_t ___3_hash4, int32_t ___4_hash5, int32_t ___5_hash6, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputControl::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_FinishSetup_m46B682B124C6E127183D19E1BA86E966472C7C15 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.Vector3Control>(System.String)
inline Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___0_path, method);
}
// System.Void UnityEngine.XR.ARSubsystems.HandheldARInputDevice::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandheldARInputDevice_set_devicePosition_mFACF712435D25DBC04E7595C073EB2FFB60938EB_inline (HandheldARInputDevice_tDC70607D65788F0D6A7BA2EABA6D289D15DFDCE9* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___0_value, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.QuaternionControl>(System.String)
inline QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___0_path, method);
}
// System.Void UnityEngine.XR.ARSubsystems.HandheldARInputDevice::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandheldARInputDevice_set_deviceRotation_mFF98E66E587EB92247C73A5EDF34317014BB15F1_inline (HandheldARInputDevice_tDC70607D65788F0D6A7BA2EABA6D289D15DFDCE9* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevice__ctor_mAA72B9458CD588116A968FE54C2AD2B59C787E51 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.BoundedPlane::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.PlaneAlignment,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr,UnityEngine.XR.ARSubsystems.PlaneClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundedPlane__ctor_m95C41A6B0DB95A2636683BE716E9F92A0465EF87 (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___1_subsumedBy, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___2_pose, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_center, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___4_size, int32_t ___5_alignment, int32_t ___6_trackingState, intptr_t ___7_nativePtr, int32_t ___8_classification, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackableId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 BoundedPlane_get_trackableId_m7AA7FD63EA8F8A903300EFDF15616315ACFDA8AA_inline (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::get_subsumedById()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 BoundedPlane_get_subsumedById_m27EFD2CAFFDCF6560D445115D596F23094F612B9_inline (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BoundedPlane_get_pose_mE6F416B0C7519EDA0D1AE8D8BD4D627E4CEA96CC_inline (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_center()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoundedPlane_get_center_m3BB7635D2137C7C414FC682EBE0CB5E1F8D3F7D3_inline (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoundedPlane_get_extents_m60341CDB176C9039D5B88B2F52534D356E11F400 (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoundedPlane_get_size_m2645C0FF517DF15F381B268DF6366F4D14381DC8_inline (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::get_alignment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_alignment_m4E43582A7059AE23DD506878BCF164C61422DBEF_inline (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackingState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_trackingState_mC294F13F8F79D53F8F04D8FB4E160B092BA6A577_inline (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::get_nativePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t BoundedPlane_get_nativePtr_mE8E2608856FE4327913A38005F4A8590D65A43E7_inline (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::get_classification()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_classification_m4EA9556C440097648A87D3AB7EC433776468A725_inline (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.BoundedPlane::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BoundedPlane_ToString_mA4FBDD41FC676DB2C2EEB22DA2E624099EF06ADA (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.BoundedPlane::Equals(UnityEngine.XR.ARSubsystems.BoundedPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundedPlane_Equals_m1F738CE040A5D498E41B35521109A3FFBEB7196D (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.BoundedPlane::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundedPlane_Equals_mE1A074D048C20E980CB7016FAFA7EDFDA52DB15D (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_mED8670C0E122B7ED0DAB4C3381ADFF04B75E0B03_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.BoundedPlane::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedPlane_GetHashCode_m8C684989A748253B2A3772BCAA87D8758FB98941 (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::Equals(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_other, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>::.ctor()
inline void TrackingSubsystem_4__ctor_mB019CC7BC60D33E4395F93C4E202215BD2D5C7FE (TrackingSubsystem_4_t6A4D8CCD1F1694558E2CC65E84F2376ED1018B1B* __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingSubsystem_4_t6A4D8CCD1F1694558E2CC65E84F2376ED1018B1B*, const RuntimeMethod*))TrackingSubsystem_4__ctor_mED282B11BA9E98619E681938C98D7A83A0251349_gshared)(__this, method);
}
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>::get_provider()
inline Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_inline (SubsystemWithProvider_3_tE2E94AA2ED69A0B1D8AFC10351E3A4D199EE973A* __this, const RuntimeMethod* method)
{
	return ((  Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* (*) (SubsystemWithProvider_3_tE2E94AA2ED69A0B1D8AFC10351E3A4D199EE973A*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::get_defaultValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE BoundedPlane_get_defaultValue_m8231738F569F3ABD6A5A5697B1293C3A75F47D31_inline (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m4302B564B35CA84EA7C4963ACA31B49822791CF0 (SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781*, const RuntimeMethod*))SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor__ctor_m73149431D0358E0258082B14FA2EB05F49CED36B (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F ___0_cinfo, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_mACCDE670DB69FFC142AB069719CD54CAB899FCFA (SubsystemDescriptorWithProvider_2_t0BFBF5E56D4A1F904B4AE98ECBB376520816FB32* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_t0BFBF5E56D4A1F904B4AE98ECBB376520816FB32*, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m3C9491FE6D19662F5CDE221328F86862621B6DE2_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m43F95297A90490AFA397FC61B990A33F74259EF5_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m30B55A83F149F3B304AAAD85FE3E80BFCD75552D_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsHorizontalPlaneDetection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsHorizontalPlaneDetection_m25246A60EFD930C7AC4C50A950E910E7716C9315_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsHorizontalPlaneDetection_m839AD1DED4EBAEBED2F90F802A6DD88AA2959CDF_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsVerticalPlaneDetection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsVerticalPlaneDetection_mEA496CC68069CCAD03DBC1B57F53DDA57D56A8BF_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsVerticalPlaneDetection_m9BF239DBD1EE5568557F5086E5CB0EECFC1853CD_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsArbitraryPlaneDetection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsArbitraryPlaneDetection_m7E19D041E3828651646769D594B9647149B5A0F4_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsArbitraryPlaneDetection_m1754591F55E83D9D6734B5CAAAD452F9BC84D1E1_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsBoundaryVertices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsBoundaryVertices_m75615CA66C3E0020B75915F8426FE6B2B475BEDD_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsBoundaryVertices_m03857A490FF676C5E3E8C6596CABC70D7CFBEC96_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsClassification()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsClassification_m2596CCB90308DA90A90177C91854DDFBF18F464A_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsClassification(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsClassification_m68CBEB689207F4B058CB8B2F878F2FDC1AA321C4_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCADBFEB62A645F33A8FE7684CE21D11A837FB6F9_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m75AA9217739457DA075AB764BF440217E87A1126_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m8880B201EBF541B726CA629EF2DBA762E5ACB010_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_m73E4DE44A091E9B268214E732EFA29174703EEF1_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_m989F6D7C88D39981D1DD342DEC887E9DB3E44AF3_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m423FEFB76FB81C496A35BB358EF04592C8EE9C10_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_m96752ABD368822EE7EE393F7AE3AAE631A4C3657_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsClassification(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mB1E8AAC1F2A7D511C960C6606364C87EEA1A221D_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m8A992E8675D4C2A5FCF7FCD7714CD1DBD734FEC0 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m2B155451B272C1E8954EDA6D6DFD1C151408D393 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mC8813973E6CB5AB8D267B6D76693B6F96C006BF9 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::get_trackableId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycast_get_trackableId_mA844E950A9862ABA13C47395893C18A55C9117AB_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycast::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRRaycast_get_pose_mADE80A4AABEFCCCB8297186D7E836EAE5B730F73_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRRaycast::get_trackingState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRRaycast_get_trackingState_mDBA1DEB482B9346E44263E8B2201C1D8AF919B09_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARSubsystems.XRRaycast::get_nativePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRRaycast_get_nativePtr_m79D980249D35343744B394D7238F8A8FB943D484_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.ARSubsystems.XRRaycast::get_distance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float XRRaycast_get_distance_m0B11F8743558DCA40C4E724ECAB8E4DD5ECFFD2B_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::get_hitTrackableId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycast_get_hitTrackableId_m54245AC20302081DF8658019AA0261DEE1E7D6FE_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycast::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr,System.Single,UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycast__ctor_m0ACF53702D817AC34FD8C21F2C01EF7A8F592F9D (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, int32_t ___2_trackingState, intptr_t ___3_nativePtr, float ___4_distance, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___5_hitTrackableId, const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycast::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycast_GetHashCode_m94E4A6BDC4CD5E875F40777E273D1E9CD37D54A6 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycast::Equals(UnityEngine.XR.ARSubsystems.XRRaycast)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycast_Equals_m2A00EBA5AD411F5BFF724BB7D60175FAE69F8D74 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycast::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycast_Equals_m7F141CB415FF28341035CBD2B32037DC80469575 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::get_trackableId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycastHit_get_trackableId_m8B92C0F8977D274743D9388DEB7DCEBCC88E7325_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRRaycastHit_get_pose_m3B8D69B763A39178CB583948B4E08255FE9A633E_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::get_distance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float XRRaycastHit_get_distance_m7098B7C90D22697CA37FBBDF50A4109AD055CA80_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::get_hitType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRRaycastHit_get_hitType_m30A8013E847E6B2B70A9511B522099C03102E933_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastHit::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,System.Single,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastHit__ctor_mEFB9D7632D78C282C02A913F1E4A2F7866C6B641 (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, float ___2_distance, int32_t ___3_hitType, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastHit::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycastHit_GetHashCode_m7C9DBAE43B929D3D4BBFF37E15E4E01143BC4A6B (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastHit::Equals(UnityEngine.XR.ARSubsystems.XRRaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastHit_Equals_mE45E36906807C4F3C5E28C1F54228142D444DA0A (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastHit::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastHit_Equals_m319801A0EFB8A841B3B7E6197BB612780698759A (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>::.ctor()
inline void TrackingSubsystem_4__ctor_m7E7E0815845FC7D13BBCA56A4EE6A9F384E22CC1 (TrackingSubsystem_4_t36B7E963263063D29AD906549E77576FAA31C385* __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingSubsystem_4_t36B7E963263063D29AD906549E77576FAA31C385*, const RuntimeMethod*))TrackingSubsystem_4__ctor_mFB0EB2FBD50AE188F7C5BA05657F8CB3E61C78CC_gshared)(__this, method);
}
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>::get_provider()
inline Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline (SubsystemWithProvider_3_t4D6DBA97FBFBBDD88E0B44C80B4711879EFD7522* __this, const RuntimeMethod* method)
{
	return ((  Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* (*) (SubsystemWithProvider_3_t4D6DBA97FBFBBDD88E0B44C80B4711879EFD7522*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::get_defaultValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 XRRaycast_get_defaultValue_m37D4F9D561AA6422EEB957A49FDC8B9E1669A48E_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::get_defaultValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 XRRaycastHit_get_defaultValue_m330E18C6389B68E95AB5CFF26531D5CF5DE6E090_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m14DC8034E7EF5275FC50EA47EF2355B6D9CC22B8 (SubsystemProvider_1_tBF3C4994CBAACCFBF7C5B74C847151ED05D7D9C7* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_tBF3C4994CBAACCFBF7C5B74C847151ED05D7D9C7*, const RuntimeMethod*))SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor__ctor_m95E810A79E27BB9FE0CC927BCBDEE2BFC5A0B011 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___0_cinfo, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_m07EAA6E76991BF9B677CE120674A862A92575EA1 (SubsystemDescriptorWithProvider_2_t8CB28AA1030E7FAEFC28809245F48903A966B2CF* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_t8CB28AA1030E7FAEFC28809245F48903A966B2CF*, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsViewportBasedRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m1860360556D5F4BBD3B242C93D8C92B3F8FA8D90_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsWorldBasedRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_m2A57C6AF5B8A21E2780A2CDC288F2917DB4BC590_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportedTrackableTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_m99EBD94098B7BD499391301B0099EC9381D32558_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsTrackedRaycasts()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsTrackedRaycasts(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsTrackedRaycasts_m9C99240C24C64818B63A368C025689018E8C4044_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m962E07A26F49D8C32DAEFEC4F9E0F79EBC128533_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m5D183591B4A3ECA1EC2AA9015C02DCD1EB1F076F_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m20C9DAD8677611ACD22689DA249911EEDE46EBF7_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mC7DB604D2E288A145177EC66F8C1DAA50F38693F_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m05D5BC11896AED796A6E237BBB98FA4EF3CF17A4_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_m319BC9C9EB554C35CD40B791917A603D63BEEE0A_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsTrackedRaycasts(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackedRaycasts_m7E65DAEB9ED0CB4C4C83DB751C1547145949AA41_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_m3B3273BD5CFEFD2D09635E1B69281B0ECD9819FB (int32_t ___0_hash1, int32_t ___1_hash2, int32_t ___2_hash3, int32_t ___3_hash4, int32_t ___4_hash5, int32_t ___5_hash6, int32_t ___6_hash7, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m6CC66C9C4BA7904DF1E9E9D7A3C74DC8D6A6C1BA (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_mD2E403B4E791DCE658297F8CA484149EB2D5F5B8 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m4D9FFB9CFA4DF03E9AF2763D3E91926896FCD64D (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_ToString_m3022468C4555B097321DCDB08B4079DA430EBB3A (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.ScopedProfiler::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedProfiler__ctor_m652B5689DE1A3C3EF7D12801DA27FA3B40E4412F (ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.ScopedProfiler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedProfiler_Dispose_m7B646405B4E52CC4677329D3B860BE9C17A9DAC4 (ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConfigurationChooser__ctor_mDFBE2A3915F886FE4D79CD514F550A10CCC6A90C (DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::.ctor()
inline void SubsystemWithProvider_3__ctor_m8563E495EB3A4C08B0C3C47658443D5A72A646FF (SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526*, const RuntimeMethod*))SubsystemWithProvider_3__ctor_mEC13729FA21E9E590467B3B9FC8CD25CC281FFD4_gshared)(__this, method);
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>::CreateResolvedPromise(T)
inline Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* Promise_1_CreateResolvedPromise_mFE0B943258581DA1E3C8A38D2B1FDF6C431276B3 (int32_t ___0_result, const RuntimeMethod* method)
{
	return ((  Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_m0949FA71DFBA371879063E5948B8E5B46467EFCF_gshared)(___0_result, method);
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_mB17ACABA3F2892B7CA5AE85EBF66B795E26AA997 (SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F*, const RuntimeMethod*))SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor__ctor_mB1B365F156769946A415E3A37A4FDDE167D5D5B7 (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___0_cinfo, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_mC889EBB6C5855DD9086D1ABADA7C64D5D3461B9C (SubsystemDescriptorWithProvider_2_tFB624BCBD66F2375A53C5B17F42E131972D1E0D9* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_tFB624BCBD66F2375A53C5B17F42E131972D1E0D9*, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsInstall()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsInstall(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsInstall_m6BF049FADBC0C98964ED4DC227535BB27BBDA6B7_inline (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsMatchFrameRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m7E8D8FF23A84B20582BF51BEF07DCDFF325ACDF8_inline (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_mA4CF39BDB54C42BC8CBD401F6A77353B59EB074F_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_mC501E193696EC21EF655C7B789CABFE2D7D2B3E4_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m7ABF4746E3D8D5C9F5E845638AB861FFBF665594_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2B27139CECCAF21A444D7891124893D11B7B6484_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m5DD40EFEE5ADFC4A6624E1EF7345F63D66027423_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m2D7B3F90910D284E6D8696F3E187E61436768107 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m0C051CCCCA3A44F0C851768FE1CDB49DAC6D82B6 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m053CC1A9E8D4DBF1FAFACF66083B615EF36CA572 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenOrientation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenDimensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_GetHashCode_mA3B6135FA770AF0C171319B50D9B913657230EB7_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_GetHashCode_m735A861B2C2718DBF5588467EC76FC6EC77EFE8D (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_mEC4D21B1DFB2DB2327FCE21B43C144DD2003828C (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_mE2FA6A03BEBC662F543FA73D25561369FAEE7EAF (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSessionUpdateParams_ToString_m82D102D9405D9B5FCA96E55074C982F225287D80 (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2Int::Equals(UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_other, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::get_subId1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId1_m1F4296FEADE76DF0379F20BCBD94E807E2EF021F_inline (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::get_subId2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId2_m53BAB4D373B736E473381B24CB608EEF666BA24E_inline (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, uint64_t ___0_subId1, uint64_t ___1_subId2, const RuntimeMethod* method) ;
// System.String System.UInt64::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680 (uint64_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.TrackableId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrackableId_ToString_m4BE1AD91726751D994E6FB864B231BE5D7D3F85F (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_m67C98169A04DB96CCEBC08A05B3FF9544B52C3E5 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___0_pattern, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
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
// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::get_defaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 XRAnchor_get_defaultValue_mF68ABF2D0EC8B54DD8D5333FCD56EEF14A985A9A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRAnchor defaultValue => s_Default;
		il2cpp_codegen_runtime_class_init_inline(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_0 = ((XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_StaticFields*)il2cpp_codegen_static_fields_for(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var))->___s_Default_0;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchor::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchor__ctor_mDD8A7F48E03A25972AA93D2C89C1D773635CA15B (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, int32_t ___2_trackingState, intptr_t ___3_nativePtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Id = trackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ___0_trackableId;
		__this->___m_Id_1 = L_0;
		// m_Pose = pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = ___1_pose;
		__this->___m_Pose_2 = L_1;
		// m_TrackingState = trackingState;
		int32_t L_2 = ___2_trackingState;
		__this->___m_TrackingState_3 = L_2;
		// m_NativePtr = nativePtr;
		intptr_t L_3 = ___3_nativePtr;
		__this->___m_NativePtr_4 = L_3;
		// m_SessionId = Guid.Empty;
		Guid_t L_4 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->___Empty_0;
		__this->___m_SessionId_5 = L_4;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XRAnchor__ctor_mDD8A7F48E03A25972AA93D2C89C1D773635CA15B_AdjustorThunk (RuntimeObject* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, int32_t ___2_trackingState, intptr_t ___3_nativePtr, const RuntimeMethod* method)
{
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*>(__this + _offset);
	XRAnchor__ctor_mDD8A7F48E03A25972AA93D2C89C1D773635CA15B(_thisAdjusted, ___0_trackableId, ___1_pose, ___2_trackingState, ___3_nativePtr, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRAnchor_get_trackableId_m0F50E81D0152D0BA4152EF9B66F648EF9FC664AE (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableId trackableId => m_Id;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_Id_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRAnchor_get_trackableId_m0F50E81D0152D0BA4152EF9B66F648EF9FC664AE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*>(__this + _offset);
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 _returnValue;
	_returnValue = XRAnchor_get_trackableId_m0F50E81D0152D0BA4152EF9B66F648EF9FC664AE_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRAnchor_get_pose_m2347783C1262EEFBC0B817EF0357FA4BB4BF053F (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) 
{
	{
		// public Pose pose => m_Pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Pose_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRAnchor_get_pose_m2347783C1262EEFBC0B817EF0357FA4BB4BF053F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = XRAnchor_get_pose_m2347783C1262EEFBC0B817EF0357FA4BB4BF053F_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRAnchor_get_trackingState_m6124A26C36CA93C25C57548576CB00C1F496ED83 (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) 
{
	{
		// public TrackingState trackingState => m_TrackingState;
		int32_t L_0 = __this->___m_TrackingState_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRAnchor_get_trackingState_m6124A26C36CA93C25C57548576CB00C1F496ED83_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRAnchor_get_trackingState_m6124A26C36CA93C25C57548576CB00C1F496ED83_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRAnchor_get_nativePtr_mC0551FA7E8DB8A0DA1EAE02D9B0BFD9D47389C26 (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->___m_NativePtr_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  intptr_t XRAnchor_get_nativePtr_mC0551FA7E8DB8A0DA1EAE02D9B0BFD9D47389C26_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*>(__this + _offset);
	intptr_t _returnValue;
	_returnValue = XRAnchor_get_nativePtr_mC0551FA7E8DB8A0DA1EAE02D9B0BFD9D47389C26_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::get_sessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t XRAnchor_get_sessionId_m719628E8A58027C75FF2CEA3345DC41200FB5F76 (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) 
{
	{
		// public Guid sessionId => m_SessionId;
		Guid_t L_0 = __this->___m_SessionId_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Guid_t XRAnchor_get_sessionId_m719628E8A58027C75FF2CEA3345DC41200FB5F76_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*>(__this + _offset);
	Guid_t _returnValue;
	_returnValue = XRAnchor_get_sessionId_m719628E8A58027C75FF2CEA3345DC41200FB5F76_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRAnchor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRAnchor_GetHashCode_mEFA5E37600C1A0B56F911227326704C17C3B5400 (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var hashCode = m_Id.GetHashCode();
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_0 = (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)(&__this->___m_Id_1);
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537(L_0, NULL);
		// hashCode = hashCode * 486187739 + m_Pose.GetHashCode();
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)(&__this->___m_Pose_2);
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Pose_GetHashCode_mDD6C48FABC18795F04F82D42DFCBC916C0C6CCDB(L_2, NULL);
		// hashCode = hashCode * 486187739 + ((int)m_TrackingState).GetHashCode();
		int32_t L_4 = __this->___m_TrackingState_3;
		V_0 = L_4;
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		// hashCode = hashCode * 486187739 + m_NativePtr.GetHashCode();
		intptr_t* L_6 = (intptr_t*)(&__this->___m_NativePtr_4);
		int32_t L_7;
		L_7 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_6, NULL);
		// hashCode = hashCode * 486187739 + m_SessionId.GetHashCode();
		Guid_t* L_8 = (Guid_t*)(&__this->___m_SessionId_5);
		int32_t L_9;
		L_9 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_8, NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)486187739))), L_3)), ((int32_t)486187739))), L_5)), ((int32_t)486187739))), L_7)), ((int32_t)486187739))), L_9));
	}
}
IL2CPP_EXTERN_C  int32_t XRAnchor_GetHashCode_mEFA5E37600C1A0B56F911227326704C17C3B5400_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRAnchor_GetHashCode_mEFA5E37600C1A0B56F911227326704C17C3B5400(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchor::Equals(UnityEngine.XR.ARSubsystems.XRAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRAnchor_Equals_m8F3408527C2CF86CF0A09AE74BF790F8E60ED6F1 (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     m_Id.Equals(other.m_Id) &&
		//     m_Pose.Equals(other.m_Pose) &&
		//     m_TrackingState == other.m_TrackingState &&
		//     m_NativePtr == other.m_NativePtr &&
		//     m_SessionId.Equals(other.m_SessionId);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_0 = (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)(&__this->___m_Id_1);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_1 = ___0_other;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2 = L_1.___m_Id_1;
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)(&__this->___m_Pose_2);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_5 = ___0_other;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = L_5.___m_Pose_2;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Pose_Equals_m31979E7A46252DBB620F4A0EA3BDBA61782DA498(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_8 = __this->___m_TrackingState_3;
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_9 = ___0_other;
		int32_t L_10 = L_9.___m_TrackingState_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_0059;
		}
	}
	{
		intptr_t L_11 = __this->___m_NativePtr_4;
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_12 = ___0_other;
		intptr_t L_13 = L_12.___m_NativePtr_4;
		bool L_14;
		L_14 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0059;
		}
	}
	{
		Guid_t* L_15 = (Guid_t*)(&__this->___m_SessionId_5);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_16 = ___0_other;
		Guid_t L_17 = L_16.___m_SessionId_5;
		bool L_18;
		L_18 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C(L_15, L_17, NULL);
		return L_18;
	}

IL_0059:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRAnchor_Equals_m8F3408527C2CF86CF0A09AE74BF790F8E60ED6F1_AdjustorThunk (RuntimeObject* __this, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___0_other, const RuntimeMethod* method)
{
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRAnchor_Equals_m8F3408527C2CF86CF0A09AE74BF790F8E60ED6F1(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRAnchor_Equals_mFD12F373615A9015CB110787F6FF06CDAAC1433F (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => obj is XRAnchor && Equals((XRAnchor)obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = XRAnchor_Equals_m8F3408527C2CF86CF0A09AE74BF790F8E60ED6F1(__this, ((*(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*)((XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*)(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*)UnBox(L_1, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRAnchor_Equals_mFD12F373615A9015CB110787F6FF06CDAAC1433F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRAnchor_Equals_mFD12F373615A9015CB110787F6FF06CDAAC1433F(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchor__cctor_m089D3BC26EBFD0569C11B81E4DEAE752346441FE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// static readonly XRAnchor s_Default = new XRAnchor
		// {
		//     m_Id = TrackableId.invalidId,
		//     m_Pose = Pose.identity,
		//     m_SessionId = Guid.Empty
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82));
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0;
		L_0 = TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494_inline(NULL);
		(&V_0)->___m_Id_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		(&V_0)->___m_Pose_2 = L_1;
		Guid_t L_2 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->___Empty_0;
		(&V_0)->___m_SessionId_5 = L_2;
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_3 = V_0;
		((XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_StaticFields*)il2cpp_codegen_static_fields_for(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var))->___s_Default_0 = L_3;
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
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystem__ctor_m7475F45C8D0D2B0E0FE0B91E45A03A0F6541138D (XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingSubsystem_4__ctor_m2BD5EAC3E1CE96C425D0CADDDD7821CA3449405F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRAnchorSubsystem() { }
		TrackingSubsystem_4__ctor_m2BD5EAC3E1CE96C425D0CADDDD7821CA3449405F(__this, TrackingSubsystem_4__ctor_m2BD5EAC3E1CE96C425D0CADDDD7821CA3449405F_RuntimeMethod_var);
		// public XRAnchorSubsystem() { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor> UnityEngine.XR.ARSubsystems.XRAnchorSubsystem::GetChanges(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t6971CD7F709E7353F4365FE06A109B21A0F0C931 XRAnchorSubsystem_GetChanges_m75942CEB1452CCBC366E8AAC9FE1A747B54FE439 (XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* __this, int32_t ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m7DD7F5DB439B46CA939D9C98022F808219C91C4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!running)
		bool L_0;
		L_0 = SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("Can't call \"GetChanges\" without \"Start\"ing the anchor subsystem!");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9A65D560514A0DBAEA0BD813C4A25CD252C2D66)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRAnchorSubsystem_GetChanges_m75942CEB1452CCBC366E8AAC9FE1A747B54FE439_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var changes = provider.GetChanges(XRAnchor.defaultValue, allocator);
		Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* L_2;
		L_2 = SubsystemWithProvider_3_get_provider_m7DD7F5DB439B46CA939D9C98022F808219C91C4B_inline(__this, SubsystemWithProvider_3_get_provider_m7DD7F5DB439B46CA939D9C98022F808219C91C4B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_3;
		L_3 = XRAnchor_get_defaultValue_mF68ABF2D0EC8B54DD8D5333FCD56EEF14A985A9A_inline(NULL);
		int32_t L_4 = ___0_allocator;
		NullCheck(L_2);
		TrackableChanges_1_t6971CD7F709E7353F4365FE06A109B21A0F0C931 L_5;
		L_5 = VirtualFuncInvoker2< TrackableChanges_1_t6971CD7F709E7353F4365FE06A109B21A0F0C931, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82, int32_t >::Invoke(8 /* UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor> UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::GetChanges(UnityEngine.XR.ARSubsystems.XRAnchor,Unity.Collections.Allocator) */, L_2, L_3, L_4);
		// return changes;
		return L_5;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem::TryAddAnchor(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRAnchor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRAnchorSubsystem_TryAddAnchor_m17C838AABA88AE000FC4170ADE72C009DCB14EF5 (XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_pose, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* ___1_anchor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m7DD7F5DB439B46CA939D9C98022F808219C91C4B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return provider.TryAddAnchor(pose, out anchor);
		Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m7DD7F5DB439B46CA939D9C98022F808219C91C4B_inline(__this, SubsystemWithProvider_3_get_provider_m7DD7F5DB439B46CA939D9C98022F808219C91C4B_RuntimeMethod_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = ___0_pose;
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_2 = ___1_anchor;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* >::Invoke(9 /* System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::TryAddAnchor(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRAnchor&) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem::TryAttachAnchor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRAnchor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRAnchorSubsystem_TryAttachAnchor_m01E619A03158783EFC56D65258DCC19B5D422BAD (XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableToAffix, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* ___2_anchor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m7DD7F5DB439B46CA939D9C98022F808219C91C4B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return provider.TryAttachAnchor(trackableToAffix, pose, out anchor);
		Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m7DD7F5DB439B46CA939D9C98022F808219C91C4B_inline(__this, SubsystemWithProvider_3_get_provider_m7DD7F5DB439B46CA939D9C98022F808219C91C4B_RuntimeMethod_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_trackableToAffix;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = ___1_pose;
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_3 = ___2_anchor;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker3< bool, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* >::Invoke(10 /* System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::TryAttachAnchor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRAnchor&) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem::TryRemoveAnchor(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRAnchorSubsystem_TryRemoveAnchor_m88DEBF2B32CF1B4C49581D1ABAC95652741EE4ED (XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_anchorId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m7DD7F5DB439B46CA939D9C98022F808219C91C4B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return provider.TryRemoveAnchor(anchorId);
		Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m7DD7F5DB439B46CA939D9C98022F808219C91C4B_inline(__this, SubsystemWithProvider_3_get_provider_m7DD7F5DB439B46CA939D9C98022F808219C91C4B_RuntimeMethod_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_anchorId;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 >::Invoke(11 /* System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::TryRemoveAnchor(UnityEngine.XR.ARSubsystems.TrackableId) */, L_0, L_1);
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
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::TryAddAnchor(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRAnchor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddAnchor_mAD1617DCFF200E647967B17A3BE5292D2BE0840B (Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_pose, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* ___1_anchor, const RuntimeMethod* method) 
{
	{
		// anchor = default(XRAnchor);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_0 = ___1_anchor;
		il2cpp_codegen_initobj(L_0, sizeof(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82));
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::TryAttachAnchor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRAnchor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAttachAnchor_m52CBF550B170FA6F50DDC6705A9AC3F28B4FE175 (Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableToAffix, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* ___2_anchor, const RuntimeMethod* method) 
{
	{
		// anchor = default(XRAnchor);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_0 = ___2_anchor;
		il2cpp_codegen_initobj(L_0, sizeof(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82));
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::TryRemoveAnchor(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryRemoveAnchor_m245D945B15FC5D7657D9E05198F0EE60275E5216 (Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_anchorId, const RuntimeMethod* method) 
{
	{
		// public virtual bool TryRemoveAnchor(TrackableId anchorId) => false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mEC1254B41F2C452FD31DE2DF6F9D8AA5A4E4FB94 (Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m70092D82649E54D6A2DFC428DA9587E292044D13_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m70092D82649E54D6A2DFC428DA9587E292044D13(__this, SubsystemProvider_1__ctor_m70092D82649E54D6A2DFC428DA9587E292044D13_RuntimeMethod_var);
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
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor_set_supportsTrackableAttachments_m61CE5B37DB3C3492D4EB5123976414A0CB940413 (XRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackableAttachments { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsTrackableAttachmentsU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor_Create_m81AF7F8FB3993C02C7AB93B292F6D7C65D8050AC (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384 ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRAnchorSubsystemDescriptor(cinfo));
		Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384 L_0 = ___0_cinfo;
		XRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30* L_1 = (XRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30*)il2cpp_codegen_object_new(XRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XRAnchorSubsystemDescriptor__ctor_m09A98B336838C4CF7BCFE08EB3AF49BFDA9AFF8C(L_1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12(L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor__ctor_m09A98B336838C4CF7BCFE08EB3AF49BFDA9AFF8C (XRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30* __this, Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384 ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_mB31F5CFD7E71A6B9480B8267881059F421FBB405_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRAnchorSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptorWithProvider_2__ctor_mB31F5CFD7E71A6B9480B8267881059F421FBB405(__this, SubsystemDescriptorWithProvider_2__ctor_mB31F5CFD7E71A6B9480B8267881059F421FBB405_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0;
		L_0 = Cinfo_get_id_mFF66DF9642403D18476451C30BD5F2FC89CAF8B1_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline(__this, L_0, NULL);
		// providerType = cinfo.providerType;
		Type_t* L_1;
		L_1 = Cinfo_get_providerType_m2D11E14B5E4C48474C00C579D4C2F5F45970D70B_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline(__this, L_1, NULL);
		// subsystemTypeOverride = cinfo.subsystemTypeOverride;
		Type_t* L_2;
		L_2 = Cinfo_get_subsystemTypeOverride_mD1DEE5FBF656FDF4BF5E28B60C04F53B6D146C3B_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline(__this, L_2, NULL);
		// supportsTrackableAttachments = cinfo.supportsTrackableAttachments;
		bool L_3;
		L_3 = Cinfo_get_supportsTrackableAttachments_m2BA4A0E85635C4D85059CDF713EE7FC21F80DBF4_inline((&___0_cinfo), NULL);
		XRAnchorSubsystemDescriptor_set_supportsTrackableAttachments_m61CE5B37DB3C3492D4EB5123976414A0CB940413_inline(__this, L_3, NULL);
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384_marshal_pinvoke(const Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384& unmarshaled, Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384_marshal_pinvoke_back(const Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384_marshaled_pinvoke& marshaled, Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384_marshal_pinvoke_cleanup(Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384_marshal_com(const Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384& unmarshaled, Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384_marshal_com_back(const Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384_marshaled_com& marshaled, Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384_marshal_com_cleanup(Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mFF66DF9642403D18476451C30BD5F2FC89CAF8B1 (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_mFF66DF9642403D18476451C30BD5F2FC89CAF8B1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_mFF66DF9642403D18476451C30BD5F2FC89CAF8B1_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m6344F3700C1D743D82AB9E74925F7687925734A6 (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m6344F3700C1D743D82AB9E74925F7687925734A6_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384*>(__this + _offset);
	Cinfo_set_id_m6344F3700C1D743D82AB9E74925F7687925734A6_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m2D11E14B5E4C48474C00C579D4C2F5F45970D70B (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_providerType_m2D11E14B5E4C48474C00C579D4C2F5F45970D70B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_providerType_m2D11E14B5E4C48474C00C579D4C2F5F45970D70B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m0E291C22B0B2CF634024F32ECA2E424F18157ACF (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m0E291C22B0B2CF634024F32ECA2E424F18157ACF_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384*>(__this + _offset);
	Cinfo_set_providerType_m0E291C22B0B2CF634024F32ECA2E424F18157ACF_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_mD1DEE5FBF656FDF4BF5E28B60C04F53B6D146C3B (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_subsystemTypeOverride_mD1DEE5FBF656FDF4BF5E28B60C04F53B6D146C3B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_mD1DEE5FBF656FDF4BF5E28B60C04F53B6D146C3B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mD5C5CAAC167444FE1BD48C1A16AA904E8DFF7052 (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_mD5C5CAAC167444FE1BD48C1A16AA904E8DFF7052_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384*>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_mD5C5CAAC167444FE1BD48C1A16AA904E8DFF7052_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_supportsTrackableAttachments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_m2BA4A0E85635C4D85059CDF713EE7FC21F80DBF4 (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = __this->___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsTrackableAttachments_m2BA4A0E85635C4D85059CDF713EE7FC21F80DBF4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsTrackableAttachments_m2BA4A0E85635C4D85059CDF713EE7FC21F80DBF4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m58F12783B1EF42ED420CC99E0585FA6ED046C4AD (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsTrackableAttachments_m58F12783B1EF42ED420CC99E0585FA6ED046C4AD_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384*>(__this + _offset);
	Cinfo_set_supportsTrackableAttachments_m58F12783B1EF42ED420CC99E0585FA6ED046C4AD_inline(_thisAdjusted, ___0_value, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mE063F9FDF568ECC85F4D30998CB9A071A82C3859 (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// int hash = HashCodeUtil.ReferenceHash(id);
		String_t* L_0;
		L_0 = Cinfo_get_id_mFF66DF9642403D18476451C30BD5F2FC89CAF8B1_inline(__this, NULL);
		int32_t L_1;
		L_1 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_0, NULL);
		V_0 = L_1;
		// hash = 486187739 * hash + HashCodeUtil.ReferenceHash(providerType);
		int32_t L_2 = V_0;
		Type_t* L_3;
		L_3 = Cinfo_get_providerType_m2D11E14B5E4C48474C00C579D4C2F5F45970D70B_inline(__this, NULL);
		int32_t L_4;
		L_4 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_3, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)486187739), L_2)), L_4));
		// hash = 486187739 * hash + HashCodeUtil.ReferenceHash(subsystemTypeOverride);
		int32_t L_5 = V_0;
		Type_t* L_6;
		L_6 = Cinfo_get_subsystemTypeOverride_mD1DEE5FBF656FDF4BF5E28B60C04F53B6D146C3B_inline(__this, NULL);
		int32_t L_7;
		L_7 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)486187739), L_5)), L_7));
		// hash = 486187738 * hash + supportsTrackableAttachments.GetHashCode();
		int32_t L_8 = V_0;
		bool L_9;
		L_9 = Cinfo_get_supportsTrackableAttachments_m2BA4A0E85635C4D85059CDF713EE7FC21F80DBF4_inline(__this, NULL);
		V_1 = L_9;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)486187738), L_8)), L_10));
		// return hash;
		int32_t L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_mE063F9FDF568ECC85F4D30998CB9A071A82C3859_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_mE063F9FDF568ECC85F4D30998CB9A071A82C3859(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m11F554099FC7163A8405E15A238CD1084BCCB65E (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override bool Equals(object obj) => (obj is Cinfo other) && Equals(other);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384*)((Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384*)(Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384*)UnBox(L_1, Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384_il2cpp_TypeInfo_var))));
		Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384 L_2 = V_0;
		bool L_3;
		L_3 = Cinfo_Equals_mD8F45C05DFDE73ABDD26DC002B6F0B1506149F6D(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m11F554099FC7163A8405E15A238CD1084BCCB65E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m11F554099FC7163A8405E15A238CD1084BCCB65E(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_mD8F45C05DFDE73ABDD26DC002B6F0B1506149F6D (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384 ___0_other, const RuntimeMethod* method) 
{
	{
		// return
		//     String.Equals(id, other.id) &&
		//     ReferenceEquals(providerType, other.providerType) &&
		//     ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride) &&
		//     supportsTrackableAttachments == other.supportsTrackableAttachments; // NB: before 2020.2, this was excluded - just trying to keep from changing behavior
		String_t* L_0;
		L_0 = Cinfo_get_id_mFF66DF9642403D18476451C30BD5F2FC89CAF8B1_inline(__this, NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_mFF66DF9642403D18476451C30BD5F2FC89CAF8B1_inline((&___0_other), NULL);
		bool L_2;
		L_2 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		Type_t* L_3;
		L_3 = Cinfo_get_providerType_m2D11E14B5E4C48474C00C579D4C2F5F45970D70B_inline(__this, NULL);
		Type_t* L_4;
		L_4 = Cinfo_get_providerType_m2D11E14B5E4C48474C00C579D4C2F5F45970D70B_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_3) == ((RuntimeObject*)(Type_t*)L_4))))
		{
			goto IL_0042;
		}
	}
	{
		Type_t* L_5;
		L_5 = Cinfo_get_subsystemTypeOverride_mD1DEE5FBF656FDF4BF5E28B60C04F53B6D146C3B_inline(__this, NULL);
		Type_t* L_6;
		L_6 = Cinfo_get_subsystemTypeOverride_mD1DEE5FBF656FDF4BF5E28B60C04F53B6D146C3B_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_5) == ((RuntimeObject*)(Type_t*)L_6))))
		{
			goto IL_0042;
		}
	}
	{
		bool L_7;
		L_7 = Cinfo_get_supportsTrackableAttachments_m2BA4A0E85635C4D85059CDF713EE7FC21F80DBF4_inline(__this, NULL);
		bool L_8;
		L_8 = Cinfo_get_supportsTrackableAttachments_m2BA4A0E85635C4D85059CDF713EE7FC21F80DBF4_inline((&___0_other), NULL);
		return (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
	}

IL_0042:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_mD8F45C05DFDE73ABDD26DC002B6F0B1506149F6D_AdjustorThunk (RuntimeObject* __this, Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384 ___0_other, const RuntimeMethod* method)
{
	Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_mD8F45C05DFDE73ABDD26DC002B6F0B1506149F6D(_thisAdjusted, ___0_other, method);
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
// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor UnityEngine.XR.ARSubsystems.Configuration::get_descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 Configuration_get_descriptor_m3C4973351367EA0BD9E48DA1E2201D8803BA8D1E (Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* __this, const RuntimeMethod* method) 
{
	{
		// public ConfigurationDescriptor descriptor { get; private set; }
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_0 = __this->___U3CdescriptorU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 Configuration_get_descriptor_m3C4973351367EA0BD9E48DA1E2201D8803BA8D1E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947*>(__this + _offset);
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 _returnValue;
	_returnValue = Configuration_get_descriptor_m3C4973351367EA0BD9E48DA1E2201D8803BA8D1E_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.Configuration::get_features()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Configuration_get_features_m704F372E940AF1DB435C1EBFF8E48EAD4E8B3776 (Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* __this, const RuntimeMethod* method) 
{
	{
		// public Feature features { get; private set; }
		uint64_t L_0 = __this->___U3CfeaturesU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint64_t Configuration_get_features_m704F372E940AF1DB435C1EBFF8E48EAD4E8B3776_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = Configuration_get_features_m704F372E940AF1DB435C1EBFF8E48EAD4E8B3776_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.Configuration::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Configuration_GetHashCode_m19DCAAF7939DB5DAAF29A2A4E994D41F66FB73D2 (Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* __this, const RuntimeMethod* method) 
{
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint64_t V_1 = 0;
	{
		// public override int GetHashCode() => HashCodeUtil.Combine(descriptor.GetHashCode(), features.GetHashCode());
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_0;
		L_0 = Configuration_get_descriptor_m3C4973351367EA0BD9E48DA1E2201D8803BA8D1E_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = ConfigurationDescriptor_GetHashCode_mAD2765B79FFD1806DEA8D927D928C496AAADB411((&V_0), NULL);
		uint64_t L_2;
		L_2 = Configuration_get_features_m704F372E940AF1DB435C1EBFF8E48EAD4E8B3776_inline(__this, NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((uint64_t*)(&V_1), NULL);
		int32_t L_4;
		L_4 = HashCodeUtil_Combine_m98169BF154323DEFC91DB146CDD3CE7550B6AD36(L_1, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t Configuration_GetHashCode_m19DCAAF7939DB5DAAF29A2A4E994D41F66FB73D2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Configuration_GetHashCode_m19DCAAF7939DB5DAAF29A2A4E994D41F66FB73D2(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.Configuration::Equals(UnityEngine.XR.ARSubsystems.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Configuration_Equals_mFC36BD166DE654A704096918BDA1FE9E34A7B7E6 (Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* __this, Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___0_other, const RuntimeMethod* method) 
{
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public bool Equals(Configuration other) => descriptor.Equals(other.descriptor) && (features == other.features);
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_0;
		L_0 = Configuration_get_descriptor_m3C4973351367EA0BD9E48DA1E2201D8803BA8D1E_inline(__this, NULL);
		V_0 = L_0;
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_1;
		L_1 = Configuration_get_descriptor_m3C4973351367EA0BD9E48DA1E2201D8803BA8D1E_inline((&___0_other), NULL);
		bool L_2;
		L_2 = ConfigurationDescriptor_Equals_mC5F92BBF22292A48CAD47A31EF13F3D5A0DC4091((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		uint64_t L_3;
		L_3 = Configuration_get_features_m704F372E940AF1DB435C1EBFF8E48EAD4E8B3776_inline(__this, NULL);
		uint64_t L_4;
		L_4 = Configuration_get_features_m704F372E940AF1DB435C1EBFF8E48EAD4E8B3776_inline((&___0_other), NULL);
		return (bool)((((int64_t)L_3) == ((int64_t)L_4))? 1 : 0);
	}

IL_0027:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Configuration_Equals_mFC36BD166DE654A704096918BDA1FE9E34A7B7E6_AdjustorThunk (RuntimeObject* __this, Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___0_other, const RuntimeMethod* method)
{
	Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947*>(__this + _offset);
	bool _returnValue;
	_returnValue = Configuration_Equals_mFC36BD166DE654A704096918BDA1FE9E34A7B7E6(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.Configuration::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Configuration_Equals_m8D6DE5FC0FAD2DD34D2F3CEF1738FC3A2F131A91 (Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is Configuration) && Equals((Configuration)obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = Configuration_Equals_mFC36BD166DE654A704096918BDA1FE9E34A7B7E6(__this, ((*(Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947*)((Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947*)(Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947*)UnBox(L_1, Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Configuration_Equals_m8D6DE5FC0FAD2DD34D2F3CEF1738FC3A2F131A91_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947*>(__this + _offset);
	bool _returnValue;
	_returnValue = Configuration_Equals_m8D6DE5FC0FAD2DD34D2F3CEF1738FC3A2F131A91(_thisAdjusted, ___0_obj, method);
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
// System.Void UnityEngine.XR.ARSubsystems.ConfigurationChooser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationChooser__ctor_mBA387FADB0244DB6C71741AB9DE75E881B15B803 (ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* __this, const RuntimeMethod* method) 
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
// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::get_identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ConfigurationDescriptor_get_identifier_m858F4B730002C1823D283460115DA65C6A46BCB6 (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr identifier => m_Identifier;
		intptr_t L_0 = __this->___m_Identifier_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  intptr_t ConfigurationDescriptor_get_identifier_m858F4B730002C1823D283460115DA65C6A46BCB6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*>(__this + _offset);
	intptr_t _returnValue;
	_returnValue = ConfigurationDescriptor_get_identifier_m858F4B730002C1823D283460115DA65C6A46BCB6_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::get_capabilities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ConfigurationDescriptor_get_capabilities_m6A4EF4C0E0FE3671E8564EF13BA2A5B4264CF938 (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, const RuntimeMethod* method) 
{
	{
		// public Feature capabilities => m_Capabilities;
		uint64_t L_0 = __this->___m_Capabilities_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint64_t ConfigurationDescriptor_get_capabilities_m6A4EF4C0E0FE3671E8564EF13BA2A5B4264CF938_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = ConfigurationDescriptor_get_capabilities_m6A4EF4C0E0FE3671E8564EF13BA2A5B4264CF938_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::get_rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigurationDescriptor_get_rank_mEDFBF5E2173FA84A0695BB01A6A40860794F6FA8 (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, const RuntimeMethod* method) 
{
	{
		// public int rank => m_Rank;
		int32_t L_0 = __this->___m_Rank_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ConfigurationDescriptor_get_rank_mEDFBF5E2173FA84A0695BB01A6A40860794F6FA8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ConfigurationDescriptor_get_rank_mEDFBF5E2173FA84A0695BB01A6A40860794F6FA8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::.ctor(System.IntPtr,UnityEngine.XR.ARSubsystems.Feature,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationDescriptor__ctor_m79BD6295C5A725B6B65CA3A4281EC801C12B2C41 (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, intptr_t ___0_identifier, uint64_t ___1_capabilities, int32_t ___2_rank, const RuntimeMethod* method) 
{
	{
		// m_Identifier = identifier;
		intptr_t L_0 = ___0_identifier;
		__this->___m_Identifier_0 = L_0;
		// m_Capabilities = capabilities;
		uint64_t L_1 = ___1_capabilities;
		__this->___m_Capabilities_1 = L_1;
		// m_Rank = rank;
		int32_t L_2 = ___2_rank;
		__this->___m_Rank_2 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConfigurationDescriptor__ctor_m79BD6295C5A725B6B65CA3A4281EC801C12B2C41_AdjustorThunk (RuntimeObject* __this, intptr_t ___0_identifier, uint64_t ___1_capabilities, int32_t ___2_rank, const RuntimeMethod* method)
{
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*>(__this + _offset);
	ConfigurationDescriptor__ctor_m79BD6295C5A725B6B65CA3A4281EC801C12B2C41(_thisAdjusted, ___0_identifier, ___1_capabilities, ___2_rank, method);
}
// System.String UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::HexString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigurationDescriptor_HexString_mA5D97CE4BCD0DD66455BB9BE281302136382BCD5 (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F25DCEA3689A55267487C5F546C2AD0C2BB96B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// unsafe string HexString(IntPtr ptr) => sizeof(IntPtr) == 4 ? $"0x{ptr.ToInt32():x}" : $"0x{ptr.ToInt64():x}";
		uint32_t L_0 = sizeof(intptr_t);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0020;
		}
	}
	{
		int64_t L_1;
		L_1 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&___0_ptr), NULL);
		int64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral40F25DCEA3689A55267487C5F546C2AD0C2BB96B, L_3, NULL);
		return L_4;
	}

IL_0020:
	{
		int32_t L_5;
		L_5 = IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292((&___0_ptr), NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral40F25DCEA3689A55267487C5F546C2AD0C2BB96B, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  String_t* ConfigurationDescriptor_HexString_mA5D97CE4BCD0DD66455BB9BE281302136382BCD5_AdjustorThunk (RuntimeObject* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ConfigurationDescriptor_HexString_mA5D97CE4BCD0DD66455BB9BE281302136382BCD5(_thisAdjusted, ___0_ptr, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigurationDescriptor_ToString_m20EA191A42A1855B5E97CD8949F6AE5B9ACBDF65 (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF627CDA1D5403909B224DFB1DDF5D0F8E00F2EEA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"(Identifier: {HexString(identifier)}, Rank: {rank}, Capabilities: {capabilities.ToStringList()})";
		intptr_t L_0;
		L_0 = ConfigurationDescriptor_get_identifier_m858F4B730002C1823D283460115DA65C6A46BCB6_inline(__this, NULL);
		String_t* L_1;
		L_1 = ConfigurationDescriptor_HexString_mA5D97CE4BCD0DD66455BB9BE281302136382BCD5(__this, L_0, NULL);
		int32_t L_2;
		L_2 = ConfigurationDescriptor_get_rank_mEDFBF5E2173FA84A0695BB01A6A40860794F6FA8_inline(__this, NULL);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		uint64_t L_5;
		L_5 = ConfigurationDescriptor_get_capabilities_m6A4EF4C0E0FE3671E8564EF13BA2A5B4264CF938_inline(__this, NULL);
		String_t* L_6;
		L_6 = FeatureExtensions_ToStringList_m7961C38D97DCDD6FB5EAC9AB77104F97D5304214(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		String_t* L_7;
		L_7 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralF627CDA1D5403909B224DFB1DDF5D0F8E00F2EEA, L_1, L_4, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* ConfigurationDescriptor_ToString_m20EA191A42A1855B5E97CD8949F6AE5B9ACBDF65_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ConfigurationDescriptor_ToString_m20EA191A42A1855B5E97CD8949F6AE5B9ACBDF65(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigurationDescriptor_GetHashCode_mAD2765B79FFD1806DEA8D927D928C496AAADB411 (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// public override int GetHashCode() => HashCodeUtil.Combine(m_Identifier.GetHashCode(), ((ulong)m_Capabilities).GetHashCode(), m_Rank.GetHashCode());
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Identifier_0);
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_0, NULL);
		uint64_t L_2 = __this->___m_Capabilities_1;
		V_0 = L_2;
		int32_t L_3;
		L_3 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_0), NULL);
		int32_t* L_4 = (int32_t*)(&__this->___m_Rank_2);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, NULL);
		int32_t L_6;
		L_6 = HashCodeUtil_Combine_mF01D6438A25333A5530D4658D11A9F0BC988011A(L_1, L_3, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t ConfigurationDescriptor_GetHashCode_mAD2765B79FFD1806DEA8D927D928C496AAADB411_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ConfigurationDescriptor_GetHashCode_mAD2765B79FFD1806DEA8D927D928C496AAADB411(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::Equals(UnityEngine.XR.ARSubsystems.ConfigurationDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfigurationDescriptor_Equals_mC5F92BBF22292A48CAD47A31EF13F3D5A0DC4091 (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 ___0_other, const RuntimeMethod* method) 
{
	{
		// (m_Identifier == other.m_Identifier) &&
		// (m_Capabilities == other.m_Capabilities) &&
		// (m_Rank == other.m_Rank);
		intptr_t L_0 = __this->___m_Identifier_0;
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_1 = ___0_other;
		intptr_t L_2 = L_1.___m_Identifier_0;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		uint64_t L_4 = __this->___m_Capabilities_1;
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_5 = ___0_other;
		uint64_t L_6 = L_5.___m_Capabilities_1;
		if ((!(((uint64_t)L_4) == ((uint64_t)L_6))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_7 = __this->___m_Rank_2;
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_8 = ___0_other;
		int32_t L_9 = L_8.___m_Rank_2;
		return (bool)((((int32_t)L_7) == ((int32_t)L_9))? 1 : 0);
	}

IL_0030:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ConfigurationDescriptor_Equals_mC5F92BBF22292A48CAD47A31EF13F3D5A0DC4091_AdjustorThunk (RuntimeObject* __this, ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 ___0_other, const RuntimeMethod* method)
{
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = ConfigurationDescriptor_Equals_mC5F92BBF22292A48CAD47A31EF13F3D5A0DC4091(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfigurationDescriptor_Equals_m4FAAC4A13BF03211A9C3EB66F65FB48BE334A611 (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is ConfigurationDescriptor) && Equals((ConfigurationDescriptor)obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = ConfigurationDescriptor_Equals_mC5F92BBF22292A48CAD47A31EF13F3D5A0DC4091(__this, ((*(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*)((ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*)(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*)UnBox(L_1, ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ConfigurationDescriptor_Equals_m4FAAC4A13BF03211A9C3EB66F65FB48BE334A611_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = ConfigurationDescriptor_Equals_m4FAAC4A13BF03211A9C3EB66F65FB48BE334A611(_thisAdjusted, ___0_obj, method);
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
// System.Void UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConfigurationChooser__ctor_mDFBE2A3915F886FE4D79CD514F550A10CCC6A90C (DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8* __this, const RuntimeMethod* method) 
{
	{
		ConfigurationChooser__ctor_mBA387FADB0244DB6C71741AB9DE75E881B15B803(__this, NULL);
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
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.FeatureExtensions::LowestBit(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t FeatureExtensions_LowestBit_m0E549BA3822C6732458DAB421C673B7D774047DF (uint64_t ___0_self, const RuntimeMethod* method) 
{
	{
		// return self & (self ^ (self - 1));
		uint64_t L_0 = ___0_self;
		uint64_t L_1 = ___0_self;
		uint64_t L_2 = ___0_self;
		return (uint64_t)(((int64_t)((int64_t)L_0&((int64_t)((int64_t)L_1^((int64_t)il2cpp_codegen_subtract((int64_t)L_2, ((int64_t)1))))))));
	}
}
// System.String UnityEngine.XR.ARSubsystems.FeatureExtensions::ToStringList(UnityEngine.XR.ARSubsystems.Feature,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FeatureExtensions_ToStringList_m7961C38D97DCDD6FB5EAC9AB77104F97D5304214 (uint64_t ___0_features, String_t* ___1_separator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Feature_t4F077DF9999D98A1C051A9A8983AB9A4F9D00F6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral068B9DAC1E2A8DA48FFC0F566F9C805099D13F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EEB74DAF175D886E4EA5D5BB23B6E48993A80AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FBF1F3BF0E575F4D92649F1F5678267C887CF89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral132C67C31C67A73009E12AF0BF92B84B55B95E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral158E95C298826281B51D5B4EE894BE864B7D1153);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1862DB4B99A6D2D4DDE2C775E5AC1AF7CD03A268);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AB0DA5C0A0620735E866EA5BC9FCAA876BA5545);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41D4ECEC72974BEA998FBA733A15A0EA3B7DF9B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49DE19A080E7D5ADFAE0565CAFC30E6F99EB7FFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B80EFD0BD00CE9A8E26DD1EA0F4B58964AF32CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BA2A4A16421FA9FAB2CAF2E4AFC91121F7BB4FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F57A13713CB116503D42E8DFD65A84DA07B33BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral772119CD0175AC1E1CADE4F75080F5F07B6BB1F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F623AA45815B8B51F227F5A19CB68E1BD42852E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95FA8CB284CA44C4320BEA5DCF663790F1EE26AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA26025A2F3BC871A6B1E0A92BE4B4EA60DBC6C91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8A8717ECC5E31F30A99C8547616828C8F428B66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9BA2974AED76FB92F26F69C6093F790414376FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA661F2F4F2AC2A4D1268C73A499D77CA7E0C476);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC838375A805C8CCC6514E96BA13E150D629186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC127E2685E9BA6170311362A98135614A56E47AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA8A633C4C95F85CAB2C4D07CAFA53611912B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF903030A69C6580BF09DFE1B291D6179B4A58FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2316C6372C4914C9A07CD469B803A77534ADCF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1CD25788E7EE9FDEA55BBF0CEE5D1AD7F125CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE249513646B3CA3B2119CA7AD27370C9E9012B74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7538558415E1BD8F7A4C577BB457C0AD0F3C884);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1FF99A8F97A90CE3EB35AA1C7B40C1DDFC82A9B);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	uint64_t V_1 = 0;
	int64_t G_B6_0 = 0;
	int64_t G_B5_0 = 0;
	{
		// var names = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_036c;
	}

IL_000b:
	{
		// var feature = features.LowestBit();
		uint64_t L_1 = ___0_features;
		uint64_t L_2;
		L_2 = FeatureExtensions_LowestBit_m0E549BA3822C6732458DAB421C673B7D774047DF(L_1, NULL);
		V_1 = L_2;
		uint64_t L_3 = V_1;
		if ((!(((uint64_t)L_3) <= ((uint64_t)((int64_t)((int32_t)8192))))))
		{
			goto IL_00e3;
		}
	}
	{
		uint64_t L_4 = V_1;
		if ((!(((uint64_t)L_4) <= ((uint64_t)((int64_t)((int32_t)128))))))
		{
			goto IL_0088;
		}
	}
	{
		uint64_t L_5 = V_1;
		if ((!(((uint64_t)L_5) <= ((uint64_t)((int64_t)((int32_t)16))))))
		{
			goto IL_0065;
		}
	}
	{
		uint64_t L_6 = V_1;
		int64_t L_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_6, ((int64_t)1)));
		G_B5_0 = L_7;
		if ((!(((uint64_t)L_7) > ((uint64_t)((int64_t)3)))))
		{
			G_B6_0 = L_7;
			goto IL_0039;
		}
	}
	{
		goto IL_004f;
	}

IL_0039:
	{
		switch (((int32_t)(uint32_t)G_B6_0))
		{
			case 0:
			{
				goto IL_01bc;
			}
			case 1:
			{
				goto IL_01cc;
			}
			case 2:
			{
				goto IL_0351;
			}
			case 3:
			{
				goto IL_01dc;
			}
		}
	}

IL_004f:
	{
		uint64_t L_8 = V_1;
		if ((((int64_t)L_8) == ((int64_t)((int64_t)8))))
		{
			goto IL_01ec;
		}
	}
	{
		uint64_t L_9 = V_1;
		if ((((int64_t)L_9) == ((int64_t)((int64_t)((int32_t)16)))))
		{
			goto IL_01fc;
		}
	}
	{
		goto IL_0351;
	}

IL_0065:
	{
		uint64_t L_10 = V_1;
		if ((((int64_t)L_10) == ((int64_t)((int64_t)((int32_t)32)))))
		{
			goto IL_020c;
		}
	}
	{
		uint64_t L_11 = V_1;
		if ((((int64_t)L_11) == ((int64_t)((int64_t)((int32_t)64)))))
		{
			goto IL_021c;
		}
	}
	{
		uint64_t L_12 = V_1;
		if ((((int64_t)L_12) == ((int64_t)((int64_t)((int32_t)128)))))
		{
			goto IL_022c;
		}
	}
	{
		goto IL_0351;
	}

IL_0088:
	{
		uint64_t L_13 = V_1;
		if ((!(((uint64_t)L_13) <= ((uint64_t)((int64_t)((int32_t)1024))))))
		{
			goto IL_00ba;
		}
	}
	{
		uint64_t L_14 = V_1;
		if ((((int64_t)L_14) == ((int64_t)((int64_t)((int32_t)256)))))
		{
			goto IL_023c;
		}
	}
	{
		uint64_t L_15 = V_1;
		if ((((int64_t)L_15) == ((int64_t)((int64_t)((int32_t)512)))))
		{
			goto IL_024c;
		}
	}
	{
		uint64_t L_16 = V_1;
		if ((((int64_t)L_16) == ((int64_t)((int64_t)((int32_t)1024)))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0351;
	}

IL_00ba:
	{
		uint64_t L_17 = V_1;
		if ((((int64_t)L_17) == ((int64_t)((int64_t)((int32_t)2048)))))
		{
			goto IL_026c;
		}
	}
	{
		uint64_t L_18 = V_1;
		if ((((int64_t)L_18) == ((int64_t)((int64_t)((int32_t)4096)))))
		{
			goto IL_027c;
		}
	}
	{
		uint64_t L_19 = V_1;
		if ((((int64_t)L_19) == ((int64_t)((int64_t)((int32_t)8192)))))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_0351;
	}

IL_00e3:
	{
		uint64_t L_20 = V_1;
		if ((!(((uint64_t)L_20) <= ((uint64_t)((int64_t)((int32_t)524288))))))
		{
			goto IL_0147;
		}
	}
	{
		uint64_t L_21 = V_1;
		if ((!(((uint64_t)L_21) <= ((uint64_t)((int64_t)((int32_t)65536))))))
		{
			goto IL_011e;
		}
	}
	{
		uint64_t L_22 = V_1;
		if ((((int64_t)L_22) == ((int64_t)((int64_t)((int32_t)16384)))))
		{
			goto IL_029c;
		}
	}
	{
		uint64_t L_23 = V_1;
		if ((((int64_t)L_23) == ((int64_t)((int64_t)((int32_t)32768)))))
		{
			goto IL_02ac;
		}
	}
	{
		uint64_t L_24 = V_1;
		if ((((int64_t)L_24) == ((int64_t)((int64_t)((int32_t)65536)))))
		{
			goto IL_02bc;
		}
	}
	{
		goto IL_0351;
	}

IL_011e:
	{
		uint64_t L_25 = V_1;
		if ((((int64_t)L_25) == ((int64_t)((int64_t)((int32_t)131072)))))
		{
			goto IL_02cc;
		}
	}
	{
		uint64_t L_26 = V_1;
		if ((((int64_t)L_26) == ((int64_t)((int64_t)((int32_t)262144)))))
		{
			goto IL_02dc;
		}
	}
	{
		uint64_t L_27 = V_1;
		if ((((int64_t)L_27) == ((int64_t)((int64_t)((int32_t)524288)))))
		{
			goto IL_02e9;
		}
	}
	{
		goto IL_0351;
	}

IL_0147:
	{
		uint64_t L_28 = V_1;
		if ((!(((uint64_t)L_28) <= ((uint64_t)((int64_t)((int32_t)4194304))))))
		{
			goto IL_0179;
		}
	}
	{
		uint64_t L_29 = V_1;
		if ((((int64_t)L_29) == ((int64_t)((int64_t)((int32_t)1048576)))))
		{
			goto IL_02f6;
		}
	}
	{
		uint64_t L_30 = V_1;
		if ((((int64_t)L_30) == ((int64_t)((int64_t)((int32_t)2097152)))))
		{
			goto IL_0303;
		}
	}
	{
		uint64_t L_31 = V_1;
		if ((((int64_t)L_31) == ((int64_t)((int64_t)((int32_t)4194304)))))
		{
			goto IL_0310;
		}
	}
	{
		goto IL_0351;
	}

IL_0179:
	{
		uint64_t L_32 = V_1;
		if ((!(((uint64_t)L_32) <= ((uint64_t)((int64_t)((int32_t)16777216))))))
		{
			goto IL_019f;
		}
	}
	{
		uint64_t L_33 = V_1;
		if ((((int64_t)L_33) == ((int64_t)((int64_t)((int32_t)8388608)))))
		{
			goto IL_031d;
		}
	}
	{
		uint64_t L_34 = V_1;
		if ((((int64_t)L_34) == ((int64_t)((int64_t)((int32_t)16777216)))))
		{
			goto IL_032a;
		}
	}
	{
		goto IL_0351;
	}

IL_019f:
	{
		uint64_t L_35 = V_1;
		if ((((int64_t)L_35) == ((int64_t)((int64_t)((int32_t)33554432)))))
		{
			goto IL_0337;
		}
	}
	{
		uint64_t L_36 = V_1;
		if ((((int64_t)L_36) == ((int64_t)((int64_t)((int32_t)67108864)))))
		{
			goto IL_0344;
		}
	}
	{
		goto IL_0351;
	}

IL_01bc:
	{
		// names.Add("World Facing Camera");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_37 = V_0;
		NullCheck(L_37);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_37, _stringLiteralAA661F2F4F2AC2A4D1268C73A499D77CA7E0C476, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_01cc:
	{
		// names.Add("User Facing Camera");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_38 = V_0;
		NullCheck(L_38);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_38, _stringLiteralD2316C6372C4914C9A07CD469B803A77534ADCF4, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_01dc:
	{
		// names.Add("Rotation Only");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_39 = V_0;
		NullCheck(L_39);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_39, _stringLiteralCEA8A633C4C95F85CAB2C4D07CAFA53611912B32, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_01ec:
	{
		// names.Add("Rotation and Orientation");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_40 = V_0;
		NullCheck(L_40);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_40, _stringLiteral0EEB74DAF175D886E4EA5D5BB23B6E48993A80AF, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_01fc:
	{
		// names.Add("Face Tracking");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_41 = V_0;
		NullCheck(L_41);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_41, _stringLiteralC127E2685E9BA6170311362A98135614A56E47AF, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_020c:
	{
		// names.Add("Plane Tracking");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_42 = V_0;
		NullCheck(L_42);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_42, _stringLiteral1862DB4B99A6D2D4DDE2C775E5AC1AF7CD03A268, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_021c:
	{
		// names.Add("Image Tracking");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_43 = V_0;
		NullCheck(L_43);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_43, _stringLiteral0FBF1F3BF0E575F4D92649F1F5678267C887CF89, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_022c:
	{
		// names.Add("Object Tracking");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_44 = V_0;
		NullCheck(L_44);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_44, _stringLiteralA9BA2974AED76FB92F26F69C6093F790414376FA, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_023c:
	{
		// names.Add("Environment Probes");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_45 = V_0;
		NullCheck(L_45);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_45, _stringLiteralBDC838375A805C8CCC6514E96BA13E150D629186, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_024c:
	{
		// names.Add("2D Body Tracking");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_46 = V_0;
		NullCheck(L_46);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_46, _stringLiteralA8A8717ECC5E31F30A99C8547616828C8F428B66, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_025c:
	{
		// names.Add("3D Body Tracking");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_47 = V_0;
		NullCheck(L_47);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_47, _stringLiteral5BA2A4A16421FA9FAB2CAF2E4AFC91121F7BB4FD, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_026c:
	{
		// names.Add("3D Body Scale Estimation");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_48 = V_0;
		NullCheck(L_48);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_48, _stringLiteral772119CD0175AC1E1CADE4F75080F5F07B6BB1F9, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_027c:
	{
		// names.Add("Human Occlusion Stencil");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_49 = V_0;
		NullCheck(L_49);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_49, _stringLiteralA26025A2F3BC871A6B1E0A92BE4B4EA60DBC6C91, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_028c:
	{
		// names.Add("Human Occlusion Depth");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_50 = V_0;
		NullCheck(L_50);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_50, _stringLiteral95FA8CB284CA44C4320BEA5DCF663790F1EE26AA, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_029c:
	{
		// names.Add("Collaboration");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_51 = V_0;
		NullCheck(L_51);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_51, _stringLiteralF1FF99A8F97A90CE3EB35AA1C7B40C1DDFC82A9B, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_02ac:
	{
		// names.Add("Auto-Focus");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_52 = V_0;
		NullCheck(L_52);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_52, _stringLiteralDA1CD25788E7EE9FDEA55BBF0CEE5D1AD7F125CD, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_02bc:
	{
		// names.Add("Light Estimation (Ambient Intensity)");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_53 = V_0;
		NullCheck(L_53);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_53, _stringLiteral3AB0DA5C0A0620735E866EA5BC9FCAA876BA5545, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_02cc:
	{
		// names.Add("Light Estimation (Ambient Color)");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_54 = V_0;
		NullCheck(L_54);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_54, _stringLiteral068B9DAC1E2A8DA48FFC0F566F9C805099D13F1B, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_02dc:
	{
		// names.Add("Light Estimation (Spherical Harmonics)");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_55 = V_0;
		NullCheck(L_55);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_55, _stringLiteral6F57A13713CB116503D42E8DFD65A84DA07B33BB, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_02e9:
	{
		// names.Add("Light Estimation (Main Light Direction)");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_56 = V_0;
		NullCheck(L_56);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_56, _stringLiteral158E95C298826281B51D5B4EE894BE864B7D1153, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_02f6:
	{
		// names.Add("Light Estimation (Main Light Intensity)");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_57 = V_0;
		NullCheck(L_57);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_57, _stringLiteral132C67C31C67A73009E12AF0BF92B84B55B95E84, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_0303:
	{
		// names.Add("Raycast");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_58 = V_0;
		NullCheck(L_58);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_58, _stringLiteralE249513646B3CA3B2119CA7AD27370C9E9012B74, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_0310:
	{
		// names.Add("Meshing");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_59 = V_0;
		NullCheck(L_59);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_59, _stringLiteral7F623AA45815B8B51F227F5A19CB68E1BD42852E, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_031d:
	{
		// names.Add("Mesh Classification");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_60 = V_0;
		NullCheck(L_60);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_60, _stringLiteral4B80EFD0BD00CE9A8E26DD1EA0F4B58964AF32CD, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_032a:
	{
		// names.Add("Point Cloud");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_61 = V_0;
		NullCheck(L_61);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_61, _stringLiteral49DE19A080E7D5ADFAE0565CAFC30E6F99EB7FFD, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_0337:
	{
		// names.Add("Environment Depth");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_62 = V_0;
		NullCheck(L_62);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_62, _stringLiteralE7538558415E1BD8F7A4C577BB457C0AD0F3C884, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_0344:
	{
		// names.Add("Environment Depth Temporal Smoothing");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_63 = V_0;
		NullCheck(L_63);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_63, _stringLiteralCF903030A69C6580BF09DFE1B291D6179B4A58FC, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_0364;
	}

IL_0351:
	{
		// names.Add(feature.ToString());
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_64 = V_0;
		Il2CppFakeBox<uint64_t> L_65(Feature_t4F077DF9999D98A1C051A9A8983AB9A4F9D00F6A_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_66;
		L_66 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_65), NULL);
		NullCheck(L_64);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_64, L_66, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0364:
	{
		// features &= (features - 1);
		uint64_t L_67 = ___0_features;
		uint64_t L_68 = ___0_features;
		___0_features = ((int64_t)((int64_t)L_67&((int64_t)il2cpp_codegen_subtract((int64_t)L_68, ((int64_t)1)))));
	}

IL_036c:
	{
		// while (features != 0)
		uint64_t L_69 = ___0_features;
		if (L_69)
		{
			goto IL_000b;
		}
	}
	{
		// return names.Count > 0 ? string.Join(separator, names) : "(None)";
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_70 = V_0;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_70, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_71) > ((int32_t)0)))
		{
			goto IL_0381;
		}
	}
	{
		return _stringLiteral41D4ECEC72974BEA998FBA733A15A0EA3B7DF9B1;
	}

IL_0381:
	{
		String_t* L_72 = ___1_separator;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_73 = V_0;
		String_t* L_74;
		L_74 = String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158(L_72, L_73, NULL);
		return L_74;
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
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_m98169BF154323DEFC91DB146CDD3CE7550B6AD36 (int32_t ___0_hash1, int32_t ___1_hash2, const RuntimeMethod* method) 
{
	{
		// return hash1 * 486187739 + hash2;
		int32_t L_0 = ___0_hash1;
		int32_t L_1 = ___1_hash2;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)486187739))), L_1));
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::ReferenceHash(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		// public static int ReferenceHash(object obj) => obj != null ? obj.GetHashCode() : 0;
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_obj;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		return L_2;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::Combine(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_mF01D6438A25333A5530D4658D11A9F0BC988011A (int32_t ___0_hash1, int32_t ___1_hash2, int32_t ___2_hash3, const RuntimeMethod* method) 
{
	{
		// public static int Combine(int hash1, int hash2, int hash3) => Combine(Combine(hash1, hash2), hash3);
		int32_t L_0 = ___0_hash1;
		int32_t L_1 = ___1_hash2;
		int32_t L_2;
		L_2 = HashCodeUtil_Combine_m98169BF154323DEFC91DB146CDD3CE7550B6AD36(L_0, L_1, NULL);
		int32_t L_3 = ___2_hash3;
		int32_t L_4;
		L_4 = HashCodeUtil_Combine_m98169BF154323DEFC91DB146CDD3CE7550B6AD36(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::Combine(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_m6E8EC4EC047F80C102AEE35681D328C78A3DCE55 (int32_t ___0_hash1, int32_t ___1_hash2, int32_t ___2_hash3, int32_t ___3_hash4, const RuntimeMethod* method) 
{
	{
		// public static int Combine(int hash1, int hash2, int hash3, int hash4) => Combine(Combine(hash1, hash2, hash3), hash4);
		int32_t L_0 = ___0_hash1;
		int32_t L_1 = ___1_hash2;
		int32_t L_2 = ___2_hash3;
		int32_t L_3;
		L_3 = HashCodeUtil_Combine_mF01D6438A25333A5530D4658D11A9F0BC988011A(L_0, L_1, L_2, NULL);
		int32_t L_4 = ___3_hash4;
		int32_t L_5;
		L_5 = HashCodeUtil_Combine_m98169BF154323DEFC91DB146CDD3CE7550B6AD36(L_3, L_4, NULL);
		return L_5;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_m0CA248D97B33A8A3DD5AD8456D090619CCD63FFA (int32_t ___0_hash1, int32_t ___1_hash2, int32_t ___2_hash3, int32_t ___3_hash4, int32_t ___4_hash5, const RuntimeMethod* method) 
{
	{
		// public static int Combine(int hash1, int hash2, int hash3, int hash4, int hash5) => Combine(Combine(hash1, hash2, hash3, hash4), hash5);
		int32_t L_0 = ___0_hash1;
		int32_t L_1 = ___1_hash2;
		int32_t L_2 = ___2_hash3;
		int32_t L_3 = ___3_hash4;
		int32_t L_4;
		L_4 = HashCodeUtil_Combine_m6E8EC4EC047F80C102AEE35681D328C78A3DCE55(L_0, L_1, L_2, L_3, NULL);
		int32_t L_5 = ___4_hash5;
		int32_t L_6;
		L_6 = HashCodeUtil_Combine_m98169BF154323DEFC91DB146CDD3CE7550B6AD36(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_mAD5A58AE27677DC59EC7E9AE41FAF43AF414C506 (int32_t ___0_hash1, int32_t ___1_hash2, int32_t ___2_hash3, int32_t ___3_hash4, int32_t ___4_hash5, int32_t ___5_hash6, const RuntimeMethod* method) 
{
	{
		// public static int Combine(int hash1, int hash2, int hash3, int hash4, int hash5, int hash6) => Combine(Combine(hash1, hash2, hash3, hash4, hash5), hash6);
		int32_t L_0 = ___0_hash1;
		int32_t L_1 = ___1_hash2;
		int32_t L_2 = ___2_hash3;
		int32_t L_3 = ___3_hash4;
		int32_t L_4 = ___4_hash5;
		int32_t L_5;
		L_5 = HashCodeUtil_Combine_m0CA248D97B33A8A3DD5AD8456D090619CCD63FFA(L_0, L_1, L_2, L_3, L_4, NULL);
		int32_t L_6 = ___5_hash6;
		int32_t L_7;
		L_7 = HashCodeUtil_Combine_m98169BF154323DEFC91DB146CDD3CE7550B6AD36(L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_m3B3273BD5CFEFD2D09635E1B69281B0ECD9819FB (int32_t ___0_hash1, int32_t ___1_hash2, int32_t ___2_hash3, int32_t ___3_hash4, int32_t ___4_hash5, int32_t ___5_hash6, int32_t ___6_hash7, const RuntimeMethod* method) 
{
	{
		// public static int Combine(int hash1, int hash2, int hash3, int hash4, int hash5, int hash6, int hash7) => Combine(Combine(hash1, hash2, hash3, hash4, hash5, hash6), hash7);
		int32_t L_0 = ___0_hash1;
		int32_t L_1 = ___1_hash2;
		int32_t L_2 = ___2_hash3;
		int32_t L_3 = ___3_hash4;
		int32_t L_4 = ___4_hash5;
		int32_t L_5 = ___5_hash6;
		int32_t L_6;
		L_6 = HashCodeUtil_Combine_mAD5A58AE27677DC59EC7E9AE41FAF43AF414C506(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		int32_t L_7 = ___6_hash7;
		int32_t L_8;
		L_8 = HashCodeUtil_Combine_m98169BF154323DEFC91DB146CDD3CE7550B6AD36(L_6, L_7, NULL);
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
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.ARSubsystems.HandheldARInputDevice::get_devicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* HandheldARInputDevice_get_devicePosition_mEA94A0592CC39ADECED0B21A3B015B0C3F217894 (HandheldARInputDevice_tDC70607D65788F0D6A7BA2EABA6D289D15DFDCE9* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = __this->___U3CdevicePositionU3Ek__BackingField_44;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.HandheldARInputDevice::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandheldARInputDevice_set_devicePosition_mFACF712435D25DBC04E7595C073EB2FFB60938EB (HandheldARInputDevice_tDC70607D65788F0D6A7BA2EABA6D289D15DFDCE9* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = ___0_value;
		__this->___U3CdevicePositionU3Ek__BackingField_44 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdevicePositionU3Ek__BackingField_44), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.ARSubsystems.HandheldARInputDevice::get_deviceRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* HandheldARInputDevice_get_deviceRotation_m839A043DBB843829F25EE4F120D43C3C82C30892 (HandheldARInputDevice_tDC70607D65788F0D6A7BA2EABA6D289D15DFDCE9* __this, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = __this->___U3CdeviceRotationU3Ek__BackingField_45;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.HandheldARInputDevice::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandheldARInputDevice_set_deviceRotation_mFF98E66E587EB92247C73A5EDF34317014BB15F1 (HandheldARInputDevice_tDC70607D65788F0D6A7BA2EABA6D289D15DFDCE9* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = ___0_value;
		__this->___U3CdeviceRotationU3Ek__BackingField_45 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdeviceRotationU3Ek__BackingField_45), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.HandheldARInputDevice::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandheldARInputDevice_FinishSetup_m35BA4889F0CA64587C4146B741D8875BFE46352C (HandheldARInputDevice_tDC70607D65788F0D6A7BA2EABA6D289D15DFDCE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		InputControl_FinishSetup_m46B682B124C6E127183D19E1BA86E966472C7C15(__this, NULL);
		// devicePosition = GetChildControl<Vector3Control>("devicePosition");
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0;
		L_0 = InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418(__this, _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4, InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418_RuntimeMethod_var);
		HandheldARInputDevice_set_devicePosition_mFACF712435D25DBC04E7595C073EB2FFB60938EB_inline(__this, L_0, NULL);
		// deviceRotation = GetChildControl<QuaternionControl>("deviceRotation");
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_1;
		L_1 = InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4(__this, _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567, InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4_RuntimeMethod_var);
		HandheldARInputDevice_set_deviceRotation_mFF98E66E587EB92247C73A5EDF34317014BB15F1_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.HandheldARInputDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandheldARInputDevice__ctor_m6CD9A2A4F215809FADC75915093A7DDA5E9C226D (HandheldARInputDevice_tDC70607D65788F0D6A7BA2EABA6D289D15DFDCE9* __this, const RuntimeMethod* method) 
{
	{
		InputDevice__ctor_mAA72B9458CD588116A968FE54C2AD2B59C787E51(__this, NULL);
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
// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::get_defaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE BoundedPlane_get_defaultValue_m8231738F569F3ABD6A5A5697B1293C3A75F47D31 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static BoundedPlane defaultValue => s_Default;
		il2cpp_codegen_runtime_class_init_inline(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var);
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_0 = ((BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var))->___s_Default_0;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.BoundedPlane::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.PlaneAlignment,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr,UnityEngine.XR.ARSubsystems.PlaneClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundedPlane__ctor_m95C41A6B0DB95A2636683BE716E9F92A0465EF87 (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___1_subsumedBy, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___2_pose, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_center, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___4_size, int32_t ___5_alignment, int32_t ___6_trackingState, intptr_t ___7_nativePtr, int32_t ___8_classification, const RuntimeMethod* method) 
{
	{
		// m_TrackableId = trackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ___0_trackableId;
		__this->___m_TrackableId_1 = L_0;
		// m_SubsumedById = subsumedBy;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___1_subsumedBy;
		__this->___m_SubsumedById_2 = L_1;
		// m_Pose = pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = ___2_pose;
		__this->___m_Pose_4 = L_2;
		// m_Center = center;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___3_center;
		__this->___m_Center_3 = L_3;
		// m_Size = size;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___4_size;
		__this->___m_Size_5 = L_4;
		// m_Alignment = alignment;
		int32_t L_5 = ___5_alignment;
		__this->___m_Alignment_6 = L_5;
		// m_TrackingState = trackingState;
		int32_t L_6 = ___6_trackingState;
		__this->___m_TrackingState_7 = L_6;
		// m_NativePtr = nativePtr;
		intptr_t L_7 = ___7_nativePtr;
		__this->___m_NativePtr_8 = L_7;
		// m_Classification = classification;
		int32_t L_8 = ___8_classification;
		__this->___m_Classification_9 = L_8;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BoundedPlane__ctor_m95C41A6B0DB95A2636683BE716E9F92A0465EF87_AdjustorThunk (RuntimeObject* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___1_subsumedBy, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___2_pose, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_center, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___4_size, int32_t ___5_alignment, int32_t ___6_trackingState, intptr_t ___7_nativePtr, int32_t ___8_classification, const RuntimeMethod* method)
{
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*>(__this + _offset);
	BoundedPlane__ctor_m95C41A6B0DB95A2636683BE716E9F92A0465EF87(_thisAdjusted, ___0_trackableId, ___1_subsumedBy, ___2_pose, ___3_center, ___4_size, ___5_alignment, ___6_trackingState, ___7_nativePtr, ___8_classification, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 BoundedPlane_get_trackableId_m7AA7FD63EA8F8A903300EFDF15616315ACFDA8AA (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableId trackableId => m_TrackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_TrackableId_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 BoundedPlane_get_trackableId_m7AA7FD63EA8F8A903300EFDF15616315ACFDA8AA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*>(__this + _offset);
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 _returnValue;
	_returnValue = BoundedPlane_get_trackableId_m7AA7FD63EA8F8A903300EFDF15616315ACFDA8AA_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::get_subsumedById()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 BoundedPlane_get_subsumedById_m27EFD2CAFFDCF6560D445115D596F23094F612B9 (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableId subsumedById => m_SubsumedById;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_SubsumedById_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 BoundedPlane_get_subsumedById_m27EFD2CAFFDCF6560D445115D596F23094F612B9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*>(__this + _offset);
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 _returnValue;
	_returnValue = BoundedPlane_get_subsumedById_m27EFD2CAFFDCF6560D445115D596F23094F612B9_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BoundedPlane_get_pose_mE6F416B0C7519EDA0D1AE8D8BD4D627E4CEA96CC (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	{
		// public Pose pose => m_Pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Pose_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BoundedPlane_get_pose_mE6F416B0C7519EDA0D1AE8D8BD4D627E4CEA96CC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = BoundedPlane_get_pose_mE6F416B0C7519EDA0D1AE8D8BD4D627E4CEA96CC_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoundedPlane_get_center_m3BB7635D2137C7C414FC682EBE0CB5E1F8D3F7D3 (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 center => m_Center;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_Center_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoundedPlane_get_center_m3BB7635D2137C7C414FC682EBE0CB5E1F8D3F7D3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = BoundedPlane_get_center_m3BB7635D2137C7C414FC682EBE0CB5E1F8D3F7D3_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoundedPlane_get_extents_m60341CDB176C9039D5B88B2F52534D356E11F400 (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 extents => m_Size * 0.5f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_Size_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_0, (0.5f), NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoundedPlane_get_extents_m60341CDB176C9039D5B88B2F52534D356E11F400_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = BoundedPlane_get_extents_m60341CDB176C9039D5B88B2F52534D356E11F400(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoundedPlane_get_size_m2645C0FF517DF15F381B268DF6366F4D14381DC8 (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 size => m_Size;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_Size_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoundedPlane_get_size_m2645C0FF517DF15F381B268DF6366F4D14381DC8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = BoundedPlane_get_size_m2645C0FF517DF15F381B268DF6366F4D14381DC8_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::get_alignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_alignment_m4E43582A7059AE23DD506878BCF164C61422DBEF (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	{
		// public PlaneAlignment alignment => m_Alignment;
		int32_t L_0 = __this->___m_Alignment_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t BoundedPlane_get_alignment_m4E43582A7059AE23DD506878BCF164C61422DBEF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BoundedPlane_get_alignment_m4E43582A7059AE23DD506878BCF164C61422DBEF_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_trackingState_mC294F13F8F79D53F8F04D8FB4E160B092BA6A577 (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	{
		// public TrackingState trackingState => m_TrackingState;
		int32_t L_0 = __this->___m_TrackingState_7;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t BoundedPlane_get_trackingState_mC294F13F8F79D53F8F04D8FB4E160B092BA6A577_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BoundedPlane_get_trackingState_mC294F13F8F79D53F8F04D8FB4E160B092BA6A577_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t BoundedPlane_get_nativePtr_mE8E2608856FE4327913A38005F4A8590D65A43E7 (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->___m_NativePtr_8;
		return L_0;
	}
}
IL2CPP_EXTERN_C  intptr_t BoundedPlane_get_nativePtr_mE8E2608856FE4327913A38005F4A8590D65A43E7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*>(__this + _offset);
	intptr_t _returnValue;
	_returnValue = BoundedPlane_get_nativePtr_mE8E2608856FE4327913A38005F4A8590D65A43E7_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::get_classification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_classification_m4EA9556C440097648A87D3AB7EC433776468A725 (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	{
		// public PlaneClassification classification => m_Classification;
		int32_t L_0 = __this->___m_Classification_9;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t BoundedPlane_get_classification_m4EA9556C440097648A87D3AB7EC433776468A725_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BoundedPlane_get_classification_m4EA9556C440097648A87D3AB7EC433776468A725_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.BoundedPlane::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BoundedPlane_ToString_mA4FBDD41FC676DB2C2EEB22DA2E624099EF06ADA (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneAlignment_t531EADCD75A8A621FF67C4788965BF89F076CFBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneClassification_t2E56AE9FB4BA673700F5C41856A74899B46C05F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7D10F5EBD63494DC1C7F8C9033E7A490800B3AF);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return string.Format(
		//     "Plane:\n\ttrackableId: {0}\n\tsubsumedById: {1}\n\tpose: {2}\n\tcenter: {3}\n\tsize: {4}\n\talignment: {5}\n\tclassification: {6}\n\ttrackingState: {7}\n\tnativePtr: {8:X16}",
		//     trackableId,
		//     subsumedById,
		//     pose,
		//     center,
		//     size,
		//     alignment,
		//     classification,
		//     trackingState,
		//     nativePtr.ToInt64());
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2;
		L_2 = BoundedPlane_get_trackableId_m7AA7FD63EA8F8A903300EFDF15616315ACFDA8AA_inline(__this, NULL);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_3 = L_2;
		RuntimeObject* L_4 = Box(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_6;
		L_6 = BoundedPlane_get_subsumedById_m27EFD2CAFFDCF6560D445115D596F23094F612B9_inline(__this, NULL);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_7 = L_6;
		RuntimeObject* L_8 = Box(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10;
		L_10 = BoundedPlane_get_pose_mE6F416B0C7519EDA0D1AE8D8BD4D627E4CEA96CC_inline(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11 = L_10;
		RuntimeObject* L_12 = Box(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = BoundedPlane_get_center_m3BB7635D2137C7C414FC682EBE0CB5E1F8D3F7D3_inline(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = L_14;
		RuntimeObject* L_16 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = BoundedPlane_get_size_m2645C0FF517DF15F381B268DF6366F4D14381DC8_inline(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = L_18;
		RuntimeObject* L_20 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		int32_t L_22;
		L_22 = BoundedPlane_get_alignment_m4E43582A7059AE23DD506878BCF164C61422DBEF_inline(__this, NULL);
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(PlaneAlignment_t531EADCD75A8A621FF67C4788965BF89F076CFBC_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_21;
		int32_t L_26;
		L_26 = BoundedPlane_get_classification_m4EA9556C440097648A87D3AB7EC433776468A725_inline(__this, NULL);
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(PlaneClassification_t2E56AE9FB4BA673700F5C41856A74899B46C05F6_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_25;
		int32_t L_30;
		L_30 = BoundedPlane_get_trackingState_mC294F13F8F79D53F8F04D8FB4E160B092BA6A577_inline(__this, NULL);
		int32_t L_31 = L_30;
		RuntimeObject* L_32 = Box(TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_32);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_29;
		intptr_t L_34;
		L_34 = BoundedPlane_get_nativePtr_mE8E2608856FE4327913A38005F4A8590D65A43E7_inline(__this, NULL);
		V_0 = L_34;
		int64_t L_35;
		L_35 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_0), NULL);
		int64_t L_36 = L_35;
		RuntimeObject* L_37 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_37);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_37);
		String_t* L_38;
		L_38 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralD7D10F5EBD63494DC1C7F8C9033E7A490800B3AF, L_33, NULL);
		return L_38;
	}
}
IL2CPP_EXTERN_C  String_t* BoundedPlane_ToString_mA4FBDD41FC676DB2C2EEB22DA2E624099EF06ADA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = BoundedPlane_ToString_mA4FBDD41FC676DB2C2EEB22DA2E624099EF06ADA(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.BoundedPlane::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundedPlane_Equals_mE1A074D048C20E980CB7016FAFA7EDFDA52DB15D (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override bool Equals(object obj) => (obj is BoundedPlane other) && Equals(other);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*)((BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*)(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*)UnBox(L_1, BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var))));
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BoundedPlane_Equals_m1F738CE040A5D498E41B35521109A3FFBEB7196D(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BoundedPlane_Equals_mE1A074D048C20E980CB7016FAFA7EDFDA52DB15D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*>(__this + _offset);
	bool _returnValue;
	_returnValue = BoundedPlane_Equals_mE1A074D048C20E980CB7016FAFA7EDFDA52DB15D(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.BoundedPlane::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedPlane_GetHashCode_m8C684989A748253B2A3772BCAA87D8758FB98941 (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var hashCode = m_TrackableId.GetHashCode();
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_0 = (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)(&__this->___m_TrackableId_1);
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537(L_0, NULL);
		// hashCode = (hashCode * 486187739) + m_SubsumedById.GetHashCode();
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_2 = (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)(&__this->___m_SubsumedById_2);
		int32_t L_3;
		L_3 = TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537(L_2, NULL);
		// hashCode = (hashCode * 486187739) + m_Pose.GetHashCode();
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)(&__this->___m_Pose_4);
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Pose_GetHashCode_mDD6C48FABC18795F04F82D42DFCBC916C0C6CCDB(L_4, NULL);
		// hashCode = (hashCode * 486187739) + m_Center.GetHashCode();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___m_Center_3);
		int32_t L_7;
		L_7 = Vector2_GetHashCode_mED8670C0E122B7ED0DAB4C3381ADFF04B75E0B03_inline(L_6, NULL);
		// hashCode = (hashCode * 486187739) + m_Size.GetHashCode();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___m_Size_5);
		int32_t L_9;
		L_9 = Vector2_GetHashCode_mED8670C0E122B7ED0DAB4C3381ADFF04B75E0B03_inline(L_8, NULL);
		// hashCode = (hashCode * 486187739) + ((int)m_Alignment).GetHashCode();
		int32_t L_10 = __this->___m_Alignment_6;
		V_0 = L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		// hashCode = (hashCode * 486187739) + ((int)m_Classification).GetHashCode();
		int32_t L_12 = __this->___m_Classification_9;
		V_0 = L_12;
		int32_t L_13;
		L_13 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		// hashCode = (hashCode * 486187739) + ((int)m_TrackingState).GetHashCode();
		int32_t L_14 = __this->___m_TrackingState_7;
		V_0 = L_14;
		int32_t L_15;
		L_15 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		// hashCode = (hashCode * 486187739) + m_NativePtr.GetHashCode();
		intptr_t* L_16 = (intptr_t*)(&__this->___m_NativePtr_8);
		int32_t L_17;
		L_17 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_16, NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)486187739))), L_3)), ((int32_t)486187739))), L_5)), ((int32_t)486187739))), L_7)), ((int32_t)486187739))), L_9)), ((int32_t)486187739))), L_11)), ((int32_t)486187739))), L_13)), ((int32_t)486187739))), L_15)), ((int32_t)486187739))), L_17));
	}
}
IL2CPP_EXTERN_C  int32_t BoundedPlane_GetHashCode_m8C684989A748253B2A3772BCAA87D8758FB98941_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BoundedPlane_GetHashCode_m8C684989A748253B2A3772BCAA87D8758FB98941(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.BoundedPlane::Equals(UnityEngine.XR.ARSubsystems.BoundedPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundedPlane_Equals_m1F738CE040A5D498E41B35521109A3FFBEB7196D (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     m_TrackableId.Equals(other.m_TrackableId) &&
		//     m_SubsumedById.Equals(other.m_SubsumedById) &&
		//     m_Pose.Equals(other.m_Pose) &&
		//     m_Center.Equals(other.m_Center) &&
		//     m_Size.Equals(other.m_Size) &&
		//     (m_Alignment == other.m_Alignment) &&
		//     (m_Classification == other.m_Classification) &&
		//     (m_TrackingState == other.m_TrackingState) &&
		//     (m_NativePtr == other.m_NativePtr);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_0 = (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)(&__this->___m_TrackableId_1);
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_1 = ___0_other;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2 = L_1.___m_TrackableId_1;
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_009e;
		}
	}
	{
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_4 = (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)(&__this->___m_SubsumedById_2);
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_5 = ___0_other;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_6 = L_5.___m_SubsumedById_2;
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_009e;
		}
	}
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)(&__this->___m_Pose_4);
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_9 = ___0_other;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10 = L_9.___m_Pose_4;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Pose_Equals_m31979E7A46252DBB620F4A0EA3BDBA61782DA498(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_009e;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___m_Center_3);
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_13 = ___0_other;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = L_13.___m_Center_3;
		bool L_15;
		L_15 = Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_009e;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___m_Size_5);
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_17 = ___0_other;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = L_17.___m_Size_5;
		bool L_19;
		L_19 = Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_20 = __this->___m_Alignment_6;
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_21 = ___0_other;
		int32_t L_22 = L_21.___m_Alignment_6;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_22))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_23 = __this->___m_Classification_9;
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_24 = ___0_other;
		int32_t L_25 = L_24.___m_Classification_9;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_25))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_26 = __this->___m_TrackingState_7;
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_27 = ___0_other;
		int32_t L_28 = L_27.___m_TrackingState_7;
		if ((!(((uint32_t)L_26) == ((uint32_t)L_28))))
		{
			goto IL_009e;
		}
	}
	{
		intptr_t L_29 = __this->___m_NativePtr_8;
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_30 = ___0_other;
		intptr_t L_31 = L_30.___m_NativePtr_8;
		bool L_32;
		L_32 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_29, L_31, NULL);
		return L_32;
	}

IL_009e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BoundedPlane_Equals_m1F738CE040A5D498E41B35521109A3FFBEB7196D_AdjustorThunk (RuntimeObject* __this, BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___0_other, const RuntimeMethod* method)
{
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*>(__this + _offset);
	bool _returnValue;
	_returnValue = BoundedPlane_Equals_m1F738CE040A5D498E41B35521109A3FFBEB7196D(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.BoundedPlane::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundedPlane__cctor_mFBFFC643A005EC73B9D042217D880CD0121D8E91 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly BoundedPlane s_Default = new BoundedPlane(
		//         TrackableId.invalidId,
		//         TrackableId.invalidId,
		//         Pose.identity,
		//         Vector2.zero,
		//         Vector2.zero,
		//         PlaneAlignment.None,
		//         TrackingState.None,
		//         IntPtr.Zero,
		//         PlaneClassification.None);
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0;
		L_0 = TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494_inline(NULL);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1;
		L_1 = TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_6;
		memset((&L_6), 0, sizeof(L_6));
		BoundedPlane__ctor_m95C41A6B0DB95A2636683BE716E9F92A0465EF87((&L_6), L_0, L_1, L_2, L_3, L_4, 0, 0, L_5, 0, /*hidden argument*/NULL);
		((BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var))->___s_Default_0 = L_6;
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
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem__ctor_mDE29D107C740A5CB086A7159DCC17E567A666603 (XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingSubsystem_4__ctor_mB019CC7BC60D33E4395F93C4E202215BD2D5C7FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRPlaneSubsystem() { }
		TrackingSubsystem_4__ctor_mB019CC7BC60D33E4395F93C4E202215BD2D5C7FE(__this, TrackingSubsystem_4__ctor_mB019CC7BC60D33E4395F93C4E202215BD2D5C7FE_RuntimeMethod_var);
		// public XRPlaneSubsystem() { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::get_requestedPlaneDetectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRPlaneSubsystem_get_requestedPlaneDetectionMode_m303F2743295F6A35D586107BA463A80D445398F5 (XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => provider.requestedPlaneDetectionMode;
		Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_inline(__this, SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::get_requestedPlaneDetectionMode() */, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::set_requestedPlaneDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem_set_requestedPlaneDetectionMode_m35162C34975D7AF454CF0D077029BA9DA32284B8 (XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => provider.requestedPlaneDetectionMode = value;
		Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_inline(__this, SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var);
		int32_t L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(11 /* System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::set_requestedPlaneDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode) */, L_0, L_1);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::get_currentPlaneDetectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRPlaneSubsystem_get_currentPlaneDetectionMode_m45E78CABE7A117E62B2AA2A3F92D05A6158CE936 (XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PlaneDetectionMode currentPlaneDetectionMode => provider.currentPlaneDetectionMode;
		Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_inline(__this, SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(12 /* UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::get_currentPlaneDetectionMode() */, L_0);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane> UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::GetChanges(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_tFC79B2E1FF9EFB1D5754F6995583D33A519F300F XRPlaneSubsystem_GetChanges_m180B0681AF9853EB236AD62835F92E90F5E1908C (XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* __this, int32_t ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var changes = provider.GetChanges(BoundedPlane.defaultValue, allocator);
		Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_inline(__this, SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var);
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_1;
		L_1 = BoundedPlane_get_defaultValue_m8231738F569F3ABD6A5A5697B1293C3A75F47D31_inline(NULL);
		int32_t L_2 = ___0_allocator;
		NullCheck(L_0);
		TrackableChanges_1_tFC79B2E1FF9EFB1D5754F6995583D33A519F300F L_3;
		L_3 = VirtualFuncInvoker2< TrackableChanges_1_tFC79B2E1FF9EFB1D5754F6995583D33A519F300F, BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE, int32_t >::Invoke(9 /* UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane> UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::GetChanges(UnityEngine.XR.ARSubsystems.BoundedPlane,Unity.Collections.Allocator) */, L_0, L_1, L_2);
		// return changes;
		return L_3;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::GetBoundary(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.Vector2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem_GetBoundary_mF1638B7F45F420D6A56A25D5749A91AF6C46B961 (XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, int32_t ___1_allocator, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___2_boundary, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (allocator == Allocator.Temp)
		int32_t L_0 = ___1_allocator;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000f;
		}
	}
	{
		// throw new InvalidOperationException("Allocator.Temp is not supported. Use Allocator.TempJob if you wish to use a temporary allocator.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0040832A71810E092F962A5F9A66A6A1866CC7D1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRPlaneSubsystem_GetBoundary_mF1638B7F45F420D6A56A25D5749A91AF6C46B961_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (allocator == Allocator.None)
		int32_t L_2 = ___1_allocator;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		// throw new InvalidOperationException("Allocator.None is not a valid allocator.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1889AF12D766B3A68EB9EE79FE4ECA560C23A4F5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRPlaneSubsystem_GetBoundary_mF1638B7F45F420D6A56A25D5749A91AF6C46B961_RuntimeMethod_var)));
	}

IL_001e:
	{
		// provider.GetBoundary(trackableId, allocator, ref boundary);
		Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* L_4;
		L_4 = SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_inline(__this, SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_5 = ___0_trackableId;
		int32_t L_6 = ___1_allocator;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_7 = ___2_boundary;
		NullCheck(L_4);
		VirtualActionInvoker3< TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, int32_t, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* >::Invoke(8 /* System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::GetBoundary(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.Vector2>&) */, L_4, L_5, L_6, L_7);
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
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::GetBoundary(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.Vector2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_GetBoundary_m85479D05365E9665B11E24CADDC45AFDC9A43158 (Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, int32_t ___1_allocator, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___2_boundary, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Boundary vertices are not supported.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16B03B9B09A75749753D1BD8C49C3482ED00598A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_GetBoundary_m85479D05365E9665B11E24CADDC45AFDC9A43158_RuntimeMethod_var)));
	}
}
// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::get_requestedPlaneDetectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_requestedPlaneDetectionMode_m44A491A20B7336C2783B01835473BF1032570135 (Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* __this, const RuntimeMethod* method) 
{
	{
		// get => PlaneDetectionMode.None;
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::set_requestedPlaneDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_requestedPlaneDetectionMode_mEC2045B55C836A6D80F35FDC31682FB6A2F00E3F (Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (value != PlaneDetectionMode.None)
		int32_t L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new NotSupportedException("Plane detection is not supported.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralED9546C195BD4988B71713BD762B7E7F364227ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_set_requestedPlaneDetectionMode_mEC2045B55C836A6D80F35FDC31682FB6A2F00E3F_RuntimeMethod_var)));
	}

IL_000e:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::get_currentPlaneDetectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_currentPlaneDetectionMode_m72405CAD5E46C4CBD1DF9BABEDE6F7D3CF2F162E (Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* __this, const RuntimeMethod* method) 
{
	{
		// public virtual PlaneDetectionMode currentPlaneDetectionMode => PlaneDetectionMode.None;
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m54E6412FCE1B1A4CB7852D23AC643A9698BC4001 (Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m4302B564B35CA84EA7C4963ACA31B49822791CF0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m4302B564B35CA84EA7C4963ACA31B49822791CF0(__this, SubsystemProvider_1__ctor_m4302B564B35CA84EA7C4963ACA31B49822791CF0_RuntimeMethod_var);
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
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsHorizontalPlaneDetection_m839AD1DED4EBAEBED2F90F802A6DD88AA2959CDF (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsHorizontalPlaneDetection { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsVerticalPlaneDetection_m9BF239DBD1EE5568557F5086E5CB0EECFC1853CD (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsVerticalPlaneDetection { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsArbitraryPlaneDetection_m1754591F55E83D9D6734B5CAAAD452F9BC84D1E1 (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsArbitraryPlaneDetection { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::get_supportsBoundaryVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPlaneSubsystemDescriptor_get_supportsBoundaryVertices_m591A2527B7E06AF0AB1C46197EA9E8C21BF76206 (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsBoundaryVertices { get; private set; }
		bool L_0 = __this->___U3CsupportsBoundaryVerticesU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsBoundaryVertices_m03857A490FF676C5E3E8C6596CABC70D7CFBEC96 (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsBoundaryVertices { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsBoundaryVerticesU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsClassification(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsClassification_m68CBEB689207F4B058CB8B2F878F2FDC1AA321C4 (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsClassification { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsClassificationU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_Create_m436344F4D6E1681E25A6EB110E13B4B78D63FF59 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var descriptor = new XRPlaneSubsystemDescriptor(cinfo);
		Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F L_0 = ___0_cinfo;
		XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* L_1 = (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300*)il2cpp_codegen_object_new(XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XRPlaneSubsystemDescriptor__ctor_m73149431D0358E0258082B14FA2EB05F49CED36B(L_1, L_0, NULL);
		// SubsystemDescriptorStore.RegisterDescriptor(descriptor);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12(L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor__ctor_m73149431D0358E0258082B14FA2EB05F49CED36B (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_mACCDE670DB69FFC142AB069719CD54CAB899FCFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRPlaneSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptorWithProvider_2__ctor_mACCDE670DB69FFC142AB069719CD54CAB899FCFA(__this, SubsystemDescriptorWithProvider_2__ctor_mACCDE670DB69FFC142AB069719CD54CAB899FCFA_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0;
		L_0 = Cinfo_get_id_m3C9491FE6D19662F5CDE221328F86862621B6DE2_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline(__this, L_0, NULL);
		// providerType = cinfo.providerType;
		Type_t* L_1;
		L_1 = Cinfo_get_providerType_m43F95297A90490AFA397FC61B990A33F74259EF5_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline(__this, L_1, NULL);
		// subsystemTypeOverride = cinfo.subsystemTypeOverride;
		Type_t* L_2;
		L_2 = Cinfo_get_subsystemTypeOverride_m30B55A83F149F3B304AAAD85FE3E80BFCD75552D_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline(__this, L_2, NULL);
		// supportsHorizontalPlaneDetection = cinfo.supportsHorizontalPlaneDetection;
		bool L_3;
		L_3 = Cinfo_get_supportsHorizontalPlaneDetection_m25246A60EFD930C7AC4C50A950E910E7716C9315_inline((&___0_cinfo), NULL);
		XRPlaneSubsystemDescriptor_set_supportsHorizontalPlaneDetection_m839AD1DED4EBAEBED2F90F802A6DD88AA2959CDF_inline(__this, L_3, NULL);
		// supportsVerticalPlaneDetection = cinfo.supportsVerticalPlaneDetection;
		bool L_4;
		L_4 = Cinfo_get_supportsVerticalPlaneDetection_mEA496CC68069CCAD03DBC1B57F53DDA57D56A8BF_inline((&___0_cinfo), NULL);
		XRPlaneSubsystemDescriptor_set_supportsVerticalPlaneDetection_m9BF239DBD1EE5568557F5086E5CB0EECFC1853CD_inline(__this, L_4, NULL);
		// supportsArbitraryPlaneDetection = cinfo.supportsArbitraryPlaneDetection;
		bool L_5;
		L_5 = Cinfo_get_supportsArbitraryPlaneDetection_m7E19D041E3828651646769D594B9647149B5A0F4_inline((&___0_cinfo), NULL);
		XRPlaneSubsystemDescriptor_set_supportsArbitraryPlaneDetection_m1754591F55E83D9D6734B5CAAAD452F9BC84D1E1_inline(__this, L_5, NULL);
		// supportsBoundaryVertices = cinfo.supportsBoundaryVertices;
		bool L_6;
		L_6 = Cinfo_get_supportsBoundaryVertices_m75615CA66C3E0020B75915F8426FE6B2B475BEDD_inline((&___0_cinfo), NULL);
		XRPlaneSubsystemDescriptor_set_supportsBoundaryVertices_m03857A490FF676C5E3E8C6596CABC70D7CFBEC96_inline(__this, L_6, NULL);
		// supportsClassification = cinfo.supportsClassification;
		bool L_7;
		L_7 = Cinfo_get_supportsClassification_m2596CCB90308DA90A90177C91854DDFBF18F464A_inline((&___0_cinfo), NULL);
		XRPlaneSubsystemDescriptor_set_supportsClassification_m68CBEB689207F4B058CB8B2F878F2FDC1AA321C4_inline(__this, L_7, NULL);
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshal_pinvoke(const Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F& unmarshaled, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshal_pinvoke_back(const Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshaled_pinvoke& marshaled, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshal_pinvoke_cleanup(Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshal_com(const Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F& unmarshaled, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshal_com_back(const Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshaled_com& marshaled, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshal_com_cleanup(Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m3C9491FE6D19662F5CDE221328F86862621B6DE2 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m3C9491FE6D19662F5CDE221328F86862621B6DE2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_m3C9491FE6D19662F5CDE221328F86862621B6DE2_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_mCADBFEB62A645F33A8FE7684CE21D11A837FB6F9 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_mCADBFEB62A645F33A8FE7684CE21D11A837FB6F9_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Cinfo_set_id_mCADBFEB62A645F33A8FE7684CE21D11A837FB6F9_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m43F95297A90490AFA397FC61B990A33F74259EF5 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_providerType_m43F95297A90490AFA397FC61B990A33F74259EF5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_providerType_m43F95297A90490AFA397FC61B990A33F74259EF5_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m75AA9217739457DA075AB764BF440217E87A1126 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m75AA9217739457DA075AB764BF440217E87A1126_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Cinfo_set_providerType_m75AA9217739457DA075AB764BF440217E87A1126_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m30B55A83F149F3B304AAAD85FE3E80BFCD75552D (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_subsystemTypeOverride_m30B55A83F149F3B304AAAD85FE3E80BFCD75552D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_m30B55A83F149F3B304AAAD85FE3E80BFCD75552D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m8880B201EBF541B726CA629EF2DBA762E5ACB010 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_m8880B201EBF541B726CA629EF2DBA762E5ACB010_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_m8880B201EBF541B726CA629EF2DBA762E5ACB010_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsHorizontalPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsHorizontalPlaneDetection_m25246A60EFD930C7AC4C50A950E910E7716C9315 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = __this->___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsHorizontalPlaneDetection_m25246A60EFD930C7AC4C50A950E910E7716C9315_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsHorizontalPlaneDetection_m25246A60EFD930C7AC4C50A950E910E7716C9315_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_m73E4DE44A091E9B268214E732EFA29174703EEF1 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsHorizontalPlaneDetection_m73E4DE44A091E9B268214E732EFA29174703EEF1_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Cinfo_set_supportsHorizontalPlaneDetection_m73E4DE44A091E9B268214E732EFA29174703EEF1_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsVerticalPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsVerticalPlaneDetection_mEA496CC68069CCAD03DBC1B57F53DDA57D56A8BF (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = __this->___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsVerticalPlaneDetection_mEA496CC68069CCAD03DBC1B57F53DDA57D56A8BF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsVerticalPlaneDetection_mEA496CC68069CCAD03DBC1B57F53DDA57D56A8BF_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_m989F6D7C88D39981D1DD342DEC887E9DB3E44AF3 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsVerticalPlaneDetection_m989F6D7C88D39981D1DD342DEC887E9DB3E44AF3_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Cinfo_set_supportsVerticalPlaneDetection_m989F6D7C88D39981D1DD342DEC887E9DB3E44AF3_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsArbitraryPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsArbitraryPlaneDetection_m7E19D041E3828651646769D594B9647149B5A0F4 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = __this->___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsArbitraryPlaneDetection_m7E19D041E3828651646769D594B9647149B5A0F4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsArbitraryPlaneDetection_m7E19D041E3828651646769D594B9647149B5A0F4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m423FEFB76FB81C496A35BB358EF04592C8EE9C10 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsArbitraryPlaneDetection_m423FEFB76FB81C496A35BB358EF04592C8EE9C10_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Cinfo_set_supportsArbitraryPlaneDetection_m423FEFB76FB81C496A35BB358EF04592C8EE9C10_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsBoundaryVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsBoundaryVertices_m75615CA66C3E0020B75915F8426FE6B2B475BEDD (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = __this->___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsBoundaryVertices_m75615CA66C3E0020B75915F8426FE6B2B475BEDD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsBoundaryVertices_m75615CA66C3E0020B75915F8426FE6B2B475BEDD_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_m96752ABD368822EE7EE393F7AE3AAE631A4C3657 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsBoundaryVerticesU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsBoundaryVertices_m96752ABD368822EE7EE393F7AE3AAE631A4C3657_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Cinfo_set_supportsBoundaryVertices_m96752ABD368822EE7EE393F7AE3AAE631A4C3657_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsClassification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsClassification_m2596CCB90308DA90A90177C91854DDFBF18F464A (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = __this->___U3CsupportsClassificationU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsClassification_m2596CCB90308DA90A90177C91854DDFBF18F464A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsClassification_m2596CCB90308DA90A90177C91854DDFBF18F464A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsClassification(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mB1E8AAC1F2A7D511C960C6606364C87EEA1A221D (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsClassificationU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsClassification_mB1E8AAC1F2A7D511C960C6606364C87EEA1A221D_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Cinfo_set_supportsClassification_mB1E8AAC1F2A7D511C960C6606364C87EEA1A221D_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m8A992E8675D4C2A5FCF7FCD7714CD1DBD734FEC0 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F ___0_other, const RuntimeMethod* method) 
{
	{
		// return
		//     ReferenceEquals(id, other.id) &&
		//     ReferenceEquals(providerType, other.providerType) &&
		//     ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride) &&
		//     supportsHorizontalPlaneDetection == other.supportsHorizontalPlaneDetection &&
		//     supportsVerticalPlaneDetection == other.supportsVerticalPlaneDetection &&
		//     supportsArbitraryPlaneDetection == other.supportsArbitraryPlaneDetection &&
		//     supportsClassification == other.supportsClassification &&
		//     supportsBoundaryVertices == other.supportsBoundaryVertices;
		String_t* L_0;
		L_0 = Cinfo_get_id_m3C9491FE6D19662F5CDE221328F86862621B6DE2_inline(__this, NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_m3C9491FE6D19662F5CDE221328F86862621B6DE2_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(String_t*)L_1))))
		{
			goto IL_0079;
		}
	}
	{
		Type_t* L_2;
		L_2 = Cinfo_get_providerType_m43F95297A90490AFA397FC61B990A33F74259EF5_inline(__this, NULL);
		Type_t* L_3;
		L_3 = Cinfo_get_providerType_m43F95297A90490AFA397FC61B990A33F74259EF5_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_2) == ((RuntimeObject*)(Type_t*)L_3))))
		{
			goto IL_0079;
		}
	}
	{
		Type_t* L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_m30B55A83F149F3B304AAAD85FE3E80BFCD75552D_inline(__this, NULL);
		Type_t* L_5;
		L_5 = Cinfo_get_subsystemTypeOverride_m30B55A83F149F3B304AAAD85FE3E80BFCD75552D_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_4) == ((RuntimeObject*)(Type_t*)L_5))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_6;
		L_6 = Cinfo_get_supportsHorizontalPlaneDetection_m25246A60EFD930C7AC4C50A950E910E7716C9315_inline(__this, NULL);
		bool L_7;
		L_7 = Cinfo_get_supportsHorizontalPlaneDetection_m25246A60EFD930C7AC4C50A950E910E7716C9315_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_8;
		L_8 = Cinfo_get_supportsVerticalPlaneDetection_mEA496CC68069CCAD03DBC1B57F53DDA57D56A8BF_inline(__this, NULL);
		bool L_9;
		L_9 = Cinfo_get_supportsVerticalPlaneDetection_mEA496CC68069CCAD03DBC1B57F53DDA57D56A8BF_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_10;
		L_10 = Cinfo_get_supportsArbitraryPlaneDetection_m7E19D041E3828651646769D594B9647149B5A0F4_inline(__this, NULL);
		bool L_11;
		L_11 = Cinfo_get_supportsArbitraryPlaneDetection_m7E19D041E3828651646769D594B9647149B5A0F4_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_12;
		L_12 = Cinfo_get_supportsClassification_m2596CCB90308DA90A90177C91854DDFBF18F464A_inline(__this, NULL);
		bool L_13;
		L_13 = Cinfo_get_supportsClassification_m2596CCB90308DA90A90177C91854DDFBF18F464A_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_14;
		L_14 = Cinfo_get_supportsBoundaryVertices_m75615CA66C3E0020B75915F8426FE6B2B475BEDD_inline(__this, NULL);
		bool L_15;
		L_15 = Cinfo_get_supportsBoundaryVertices_m75615CA66C3E0020B75915F8426FE6B2B475BEDD_inline((&___0_other), NULL);
		return (bool)((((int32_t)L_14) == ((int32_t)L_15))? 1 : 0);
	}

IL_0079:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m8A992E8675D4C2A5FCF7FCD7714CD1DBD734FEC0_AdjustorThunk (RuntimeObject* __this, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F ___0_other, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m8A992E8675D4C2A5FCF7FCD7714CD1DBD734FEC0(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m2B155451B272C1E8954EDA6D6DFD1C151408D393 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is Cinfo))
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Equals((Cinfo)obj);
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = Cinfo_Equals_m8A992E8675D4C2A5FCF7FCD7714CD1DBD734FEC0(__this, ((*(Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*)((Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*)(Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*)UnBox(L_1, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m2B155451B272C1E8954EDA6D6DFD1C151408D393_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m2B155451B272C1E8954EDA6D6DFD1C151408D393(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mC8813973E6CB5AB8D267B6D76693B6F96C006BF9 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// int hashCode = HashCodeUtil.ReferenceHash(id);
		String_t* L_0;
		L_0 = Cinfo_get_id_m3C9491FE6D19662F5CDE221328F86862621B6DE2_inline(__this, NULL);
		int32_t L_1;
		L_1 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_0, NULL);
		// hashCode = (hashCode * 486187739) + HashCodeUtil.ReferenceHash(providerType);
		Type_t* L_2;
		L_2 = Cinfo_get_providerType_m43F95297A90490AFA397FC61B990A33F74259EF5_inline(__this, NULL);
		int32_t L_3;
		L_3 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_2, NULL);
		// hashCode = (hashCode * 486187739) + HashCodeUtil.ReferenceHash(subsystemTypeOverride);
		Type_t* L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_m30B55A83F149F3B304AAAD85FE3E80BFCD75552D_inline(__this, NULL);
		int32_t L_5;
		L_5 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_4, NULL);
		// hashCode = (hashCode * 486187739) + supportsHorizontalPlaneDetection.GetHashCode();
		bool L_6;
		L_6 = Cinfo_get_supportsHorizontalPlaneDetection_m25246A60EFD930C7AC4C50A950E910E7716C9315_inline(__this, NULL);
		V_0 = L_6;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		// hashCode = (hashCode * 486187739) + supportsVerticalPlaneDetection.GetHashCode();
		bool L_8;
		L_8 = Cinfo_get_supportsVerticalPlaneDetection_mEA496CC68069CCAD03DBC1B57F53DDA57D56A8BF_inline(__this, NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		// hashCode = (hashCode * 486187739) + supportsArbitraryPlaneDetection.GetHashCode();
		bool L_10;
		L_10 = Cinfo_get_supportsArbitraryPlaneDetection_m7E19D041E3828651646769D594B9647149B5A0F4_inline(__this, NULL);
		V_0 = L_10;
		int32_t L_11;
		L_11 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		// hashCode = (hashCode * 486187739) + supportsBoundaryVertices.GetHashCode();
		bool L_12;
		L_12 = Cinfo_get_supportsBoundaryVertices_m75615CA66C3E0020B75915F8426FE6B2B475BEDD_inline(__this, NULL);
		V_0 = L_12;
		int32_t L_13;
		L_13 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		// hashCode = (hashCode * 486187739) + supportsClassification.GetHashCode();
		bool L_14;
		L_14 = Cinfo_get_supportsClassification_m2596CCB90308DA90A90177C91854DDFBF18F464A_inline(__this, NULL);
		V_0 = L_14;
		int32_t L_15;
		L_15 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)486187739))), L_3)), ((int32_t)486187739))), L_5)), ((int32_t)486187739))), L_7)), ((int32_t)486187739))), L_9)), ((int32_t)486187739))), L_11)), ((int32_t)486187739))), L_13)), ((int32_t)486187739))), L_15));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_mC8813973E6CB5AB8D267B6D76693B6F96C006BF9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_mC8813973E6CB5AB8D267B6D76693B6F96C006BF9(_thisAdjusted, method);
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
// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::get_defaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 XRRaycast_get_defaultValue_m37D4F9D561AA6422EEB957A49FDC8B9E1669A48E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRRaycast defaultValue => s_Default;
		il2cpp_codegen_runtime_class_init_inline(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_0 = ((XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_StaticFields*)il2cpp_codegen_static_fields_for(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var))->___s_Default_0;
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycast_get_trackableId_mA844E950A9862ABA13C47395893C18A55C9117AB (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableId trackableId => m_TrackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_TrackableId_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycast_get_trackableId_mA844E950A9862ABA13C47395893C18A55C9117AB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*>(__this + _offset);
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 _returnValue;
	_returnValue = XRRaycast_get_trackableId_mA844E950A9862ABA13C47395893C18A55C9117AB_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycast::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRRaycast_get_pose_mADE80A4AABEFCCCB8297186D7E836EAE5B730F73 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public Pose pose => m_Pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Pose_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRRaycast_get_pose_mADE80A4AABEFCCCB8297186D7E836EAE5B730F73_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = XRRaycast_get_pose_mADE80A4AABEFCCCB8297186D7E836EAE5B730F73_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRRaycast::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycast_get_trackingState_mDBA1DEB482B9346E44263E8B2201C1D8AF919B09 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public TrackingState trackingState => m_TrackingState;
		int32_t L_0 = __this->___m_TrackingState_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRRaycast_get_trackingState_mDBA1DEB482B9346E44263E8B2201C1D8AF919B09_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRRaycast_get_trackingState_mDBA1DEB482B9346E44263E8B2201C1D8AF919B09_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.IntPtr UnityEngine.XR.ARSubsystems.XRRaycast::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRRaycast_get_nativePtr_m79D980249D35343744B394D7238F8A8FB943D484 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->___m_NativePtr_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  intptr_t XRRaycast_get_nativePtr_m79D980249D35343744B394D7238F8A8FB943D484_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*>(__this + _offset);
	intptr_t _returnValue;
	_returnValue = XRRaycast_get_nativePtr_m79D980249D35343744B394D7238F8A8FB943D484_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.XR.ARSubsystems.XRRaycast::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRRaycast_get_distance_m0B11F8743558DCA40C4E724ECAB8E4DD5ECFFD2B (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public float distance => m_Distance;
		float L_0 = __this->___m_Distance_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float XRRaycast_get_distance_m0B11F8743558DCA40C4E724ECAB8E4DD5ECFFD2B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*>(__this + _offset);
	float _returnValue;
	_returnValue = XRRaycast_get_distance_m0B11F8743558DCA40C4E724ECAB8E4DD5ECFFD2B_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::get_hitTrackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycast_get_hitTrackableId_m54245AC20302081DF8658019AA0261DEE1E7D6FE (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableId hitTrackableId => m_HitTrackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_HitTrackableId_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycast_get_hitTrackableId_m54245AC20302081DF8658019AA0261DEE1E7D6FE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*>(__this + _offset);
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 _returnValue;
	_returnValue = XRRaycast_get_hitTrackableId_m54245AC20302081DF8658019AA0261DEE1E7D6FE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycast::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr,System.Single,UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycast__ctor_m0ACF53702D817AC34FD8C21F2C01EF7A8F592F9D (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, int32_t ___2_trackingState, intptr_t ___3_nativePtr, float ___4_distance, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___5_hitTrackableId, const RuntimeMethod* method) 
{
	{
		// m_TrackableId = trackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ___0_trackableId;
		__this->___m_TrackableId_1 = L_0;
		// m_Pose = pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = ___1_pose;
		__this->___m_Pose_2 = L_1;
		// m_TrackingState = trackingState;
		int32_t L_2 = ___2_trackingState;
		__this->___m_TrackingState_3 = L_2;
		// m_NativePtr = nativePtr;
		intptr_t L_3 = ___3_nativePtr;
		__this->___m_NativePtr_4 = L_3;
		// m_Distance = distance;
		float L_4 = ___4_distance;
		__this->___m_Distance_5 = L_4;
		// m_HitTrackableId = hitTrackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_5 = ___5_hitTrackableId;
		__this->___m_HitTrackableId_6 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XRRaycast__ctor_m0ACF53702D817AC34FD8C21F2C01EF7A8F592F9D_AdjustorThunk (RuntimeObject* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, int32_t ___2_trackingState, intptr_t ___3_nativePtr, float ___4_distance, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___5_hitTrackableId, const RuntimeMethod* method)
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*>(__this + _offset);
	XRRaycast__ctor_m0ACF53702D817AC34FD8C21F2C01EF7A8F592F9D(_thisAdjusted, ___0_trackableId, ___1_pose, ___2_trackingState, ___3_nativePtr, ___4_distance, ___5_hitTrackableId, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycast::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycast_GetHashCode_m94E4A6BDC4CD5E875F40777E273D1E9CD37D54A6 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var hash = m_TrackableId.GetHashCode();
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_0 = (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)(&__this->___m_TrackableId_1);
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537(L_0, NULL);
		// hash = hash * 486187739 + m_Pose.GetHashCode();
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)(&__this->___m_Pose_2);
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Pose_GetHashCode_mDD6C48FABC18795F04F82D42DFCBC916C0C6CCDB(L_2, NULL);
		// hash = hash * 486187739 + ((int)m_TrackingState).GetHashCode();
		int32_t L_4 = __this->___m_TrackingState_3;
		V_0 = L_4;
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		// hash = hash * 486187739 + m_NativePtr.GetHashCode();
		intptr_t* L_6 = (intptr_t*)(&__this->___m_NativePtr_4);
		int32_t L_7;
		L_7 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_6, NULL);
		// hash = hash * 486187739 + m_Distance.GetHashCode();
		float* L_8 = (float*)(&__this->___m_Distance_5);
		int32_t L_9;
		L_9 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_8, NULL);
		// hash = hash * 486187739 + m_HitTrackableId.GetHashCode();
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_10 = (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)(&__this->___m_HitTrackableId_6);
		int32_t L_11;
		L_11 = TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537(L_10, NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)486187739))), L_3)), ((int32_t)486187739))), L_5)), ((int32_t)486187739))), L_7)), ((int32_t)486187739))), L_9)), ((int32_t)486187739))), L_11));
	}
}
IL2CPP_EXTERN_C  int32_t XRRaycast_GetHashCode_m94E4A6BDC4CD5E875F40777E273D1E9CD37D54A6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRRaycast_GetHashCode_m94E4A6BDC4CD5E875F40777E273D1E9CD37D54A6(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycast::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycast_Equals_m7F141CB415FF28341035CBD2B32037DC80469575 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is XRRaycast) && Equals((XRRaycast)obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = XRRaycast_Equals_m2A00EBA5AD411F5BFF724BB7D60175FAE69F8D74(__this, ((*(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*)((XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*)(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*)UnBox(L_1, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRRaycast_Equals_m7F141CB415FF28341035CBD2B32037DC80469575_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRRaycast_Equals_m7F141CB415FF28341035CBD2B32037DC80469575(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycast::Equals(UnityEngine.XR.ARSubsystems.XRRaycast)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycast_Equals_m2A00EBA5AD411F5BFF724BB7D60175FAE69F8D74 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TrackableId.Equals(other.m_TrackableId) &&
		// m_Pose.Equals(other.m_Pose) &&
		// (m_TrackingState == other.m_TrackingState) &&
		// (m_NativePtr == other.m_NativePtr) &&
		// m_HitTrackableId.Equals(other.m_HitTrackableId) &&
		// m_Distance.Equals(other.m_Distance);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_0 = (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)(&__this->___m_TrackableId_1);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_1 = ___0_other;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2 = L_1.___m_TrackableId_1;
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_006c;
		}
	}
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)(&__this->___m_Pose_2);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_5 = ___0_other;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = L_5.___m_Pose_2;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Pose_Equals_m31979E7A46252DBB620F4A0EA3BDBA61782DA498(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_8 = __this->___m_TrackingState_3;
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_9 = ___0_other;
		int32_t L_10 = L_9.___m_TrackingState_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_006c;
		}
	}
	{
		intptr_t L_11 = __this->___m_NativePtr_4;
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_12 = ___0_other;
		intptr_t L_13 = L_12.___m_NativePtr_4;
		bool L_14;
		L_14 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_15 = (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)(&__this->___m_HitTrackableId_6);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_16 = ___0_other;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_17 = L_16.___m_HitTrackableId_6;
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_006c;
		}
	}
	{
		float* L_19 = (float*)(&__this->___m_Distance_5);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_20 = ___0_other;
		float L_21 = L_20.___m_Distance_5;
		bool L_22;
		L_22 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_19, L_21, NULL);
		return L_22;
	}

IL_006c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRRaycast_Equals_m2A00EBA5AD411F5BFF724BB7D60175FAE69F8D74_AdjustorThunk (RuntimeObject* __this, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___0_other, const RuntimeMethod* method)
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRRaycast_Equals_m2A00EBA5AD411F5BFF724BB7D60175FAE69F8D74(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycast::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycast__cctor_m88C247D8041D39ED011C71BD40B6F42310EE48DB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly XRRaycast s_Default = new XRRaycast(
		//     TrackableId.invalidId, Pose.identity, TrackingState.None, IntPtr.Zero, 0, TrackableId.invalidId);
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0;
		L_0 = TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_3;
		L_3 = TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494_inline(NULL);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_4;
		memset((&L_4), 0, sizeof(L_4));
		XRRaycast__ctor_m0ACF53702D817AC34FD8C21F2C01EF7A8F592F9D((&L_4), L_0, L_1, 0, L_2, (0.0f), L_3, /*hidden argument*/NULL);
		((XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_StaticFields*)il2cpp_codegen_static_fields_for(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var))->___s_Default_0 = L_4;
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
// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::get_defaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 XRRaycastHit_get_defaultValue_m330E18C6389B68E95AB5CFF26531D5CF5DE6E090 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRRaycastHit defaultValue => s_Default;
		il2cpp_codegen_runtime_class_init_inline(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_0 = ((XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields*)il2cpp_codegen_static_fields_for(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var))->___s_Default_0;
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycastHit_get_trackableId_m8B92C0F8977D274743D9388DEB7DCEBCC88E7325 (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TrackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_TrackableId_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycastHit_get_trackableId_m8B92C0F8977D274743D9388DEB7DCEBCC88E7325_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 _returnValue;
	_returnValue = XRRaycastHit_get_trackableId_m8B92C0F8977D274743D9388DEB7DCEBCC88E7325_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRRaycastHit_get_pose_m3B8D69B763A39178CB583948B4E08255FE9A633E (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Pose_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRRaycastHit_get_pose_m3B8D69B763A39178CB583948B4E08255FE9A633E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = XRRaycastHit_get_pose_m3B8D69B763A39178CB583948B4E08255FE9A633E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRRaycastHit_get_distance_m7098B7C90D22697CA37FBBDF50A4109AD055CA80 (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Distance;
		float L_0 = __this->___m_Distance_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float XRRaycastHit_get_distance_m7098B7C90D22697CA37FBBDF50A4109AD055CA80_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	float _returnValue;
	_returnValue = XRRaycastHit_get_distance_m7098B7C90D22697CA37FBBDF50A4109AD055CA80_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::get_hitType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycastHit_get_hitType_m30A8013E847E6B2B70A9511B522099C03102E933 (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HitType;
		int32_t L_0 = __this->___m_HitType_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRRaycastHit_get_hitType_m30A8013E847E6B2B70A9511B522099C03102E933_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRRaycastHit_get_hitType_m30A8013E847E6B2B70A9511B522099C03102E933_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastHit::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,System.Single,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastHit__ctor_mEFB9D7632D78C282C02A913F1E4A2F7866C6B641 (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, float ___2_distance, int32_t ___3_hitType, const RuntimeMethod* method) 
{
	{
		// m_TrackableId = trackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ___0_trackableId;
		__this->___m_TrackableId_1 = L_0;
		// m_Pose = pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = ___1_pose;
		__this->___m_Pose_2 = L_1;
		// m_Distance = distance;
		float L_2 = ___2_distance;
		__this->___m_Distance_3 = L_2;
		// m_HitType = hitType;
		int32_t L_3 = ___3_hitType;
		__this->___m_HitType_4 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XRRaycastHit__ctor_mEFB9D7632D78C282C02A913F1E4A2F7866C6B641_AdjustorThunk (RuntimeObject* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, float ___2_distance, int32_t ___3_hitType, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	XRRaycastHit__ctor_mEFB9D7632D78C282C02A913F1E4A2F7866C6B641(_thisAdjusted, ___0_trackableId, ___1_pose, ___2_distance, ___3_hitType, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastHit::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycastHit_GetHashCode_m7C9DBAE43B929D3D4BBFF37E15E4E01143BC4A6B (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var hash = m_TrackableId.GetHashCode();
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_0 = (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)(&__this->___m_TrackableId_1);
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537(L_0, NULL);
		// hash = hash * 486187739 + m_Pose.GetHashCode();
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)(&__this->___m_Pose_2);
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Pose_GetHashCode_mDD6C48FABC18795F04F82D42DFCBC916C0C6CCDB(L_2, NULL);
		// hash = hash * 486187739 + m_Distance.GetHashCode();
		float* L_4 = (float*)(&__this->___m_Distance_3);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		// hash = hash * 486187739 + ((int)m_HitType).GetHashCode();
		int32_t L_6 = __this->___m_HitType_4;
		V_0 = L_6;
		int32_t L_7;
		L_7 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)486187739))), L_3)), ((int32_t)486187739))), L_5)), ((int32_t)486187739))), L_7));
	}
}
IL2CPP_EXTERN_C  int32_t XRRaycastHit_GetHashCode_m7C9DBAE43B929D3D4BBFF37E15E4E01143BC4A6B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRRaycastHit_GetHashCode_m7C9DBAE43B929D3D4BBFF37E15E4E01143BC4A6B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastHit::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastHit_Equals_m319801A0EFB8A841B3B7E6197BB612780698759A (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override bool Equals(object obj) => (obj is XRRaycastHit other) && Equals(other);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*)((XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*)(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*)UnBox(L_1, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var))));
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = XRRaycastHit_Equals_mE45E36906807C4F3C5E28C1F54228142D444DA0A(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRRaycastHit_Equals_m319801A0EFB8A841B3B7E6197BB612780698759A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRRaycastHit_Equals_m319801A0EFB8A841B3B7E6197BB612780698759A(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastHit::Equals(UnityEngine.XR.ARSubsystems.XRRaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastHit_Equals_mE45E36906807C4F3C5E28C1F54228142D444DA0A (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     (m_TrackableId.Equals(other.m_TrackableId)) &&
		//     (m_Pose.Equals(other.m_Pose)) &&
		//     (m_Distance.Equals(other.m_Distance)) &&
		//     (m_HitType == other.m_HitType);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_0 = (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)(&__this->___m_TrackableId_1);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_1 = ___0_other;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2 = L_1.___m_TrackableId_1;
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)(&__this->___m_Pose_2);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_5 = ___0_other;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = L_5.___m_Pose_2;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Pose_Equals_m31979E7A46252DBB620F4A0EA3BDBA61782DA498(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		float* L_8 = (float*)(&__this->___m_Distance_3);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_9 = ___0_other;
		float L_10 = L_9.___m_Distance_3;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_12 = __this->___m_HitType_4;
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_13 = ___0_other;
		int32_t L_14 = L_13.___m_HitType_4;
		return (bool)((((int32_t)L_12) == ((int32_t)L_14))? 1 : 0);
	}

IL_0048:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRRaycastHit_Equals_mE45E36906807C4F3C5E28C1F54228142D444DA0A_AdjustorThunk (RuntimeObject* __this, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___0_other, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRRaycastHit_Equals_mE45E36906807C4F3C5E28C1F54228142D444DA0A(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastHit::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastHit__cctor_m5484BC89F33E0E0E1C846CB135139037484009D8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly XRRaycastHit s_Default = new XRRaycastHit(
		//     TrackableId.invalidId, Pose.identity, 0, TrackableType.None);
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0;
		L_0 = TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_2;
		memset((&L_2), 0, sizeof(L_2));
		XRRaycastHit__ctor_mEFB9D7632D78C282C02A913F1E4A2F7866C6B641((&L_2), L_0, L_1, (0.0f), 0, /*hidden argument*/NULL);
		((XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields*)il2cpp_codegen_static_fields_for(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var))->___s_Default_0 = L_2;
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
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystem__ctor_m883CA69818A86683F768E24C30896A03AB231744 (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingSubsystem_4__ctor_m7E7E0815845FC7D13BBCA56A4EE6A9F384E22CC1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRRaycastSubsystem() { }
		TrackingSubsystem_4__ctor_m7E7E0815845FC7D13BBCA56A4EE6A9F384E22CC1(__this, TrackingSubsystem_4__ctor_m7E7E0815845FC7D13BBCA56A4EE6A9F384E22CC1_RuntimeMethod_var);
		// public XRRaycastSubsystem() { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::GetChanges(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 XRRaycastSubsystem_GetChanges_mAAF6A88E1636E9143D46216A137FC40065756B36 (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, int32_t ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var changes = provider.GetChanges(XRRaycast.defaultValue, allocator);
		Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline(__this, SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_1;
		L_1 = XRRaycast_get_defaultValue_m37D4F9D561AA6422EEB957A49FDC8B9E1669A48E_inline(NULL);
		int32_t L_2 = ___0_allocator;
		NullCheck(L_0);
		TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 L_3;
		L_3 = VirtualFuncInvoker2< TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103, int32_t >::Invoke(11 /* UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::GetChanges(UnityEngine.XR.ARSubsystems.XRRaycast,Unity.Collections.Allocator) */, L_0, L_1, L_2);
		// return changes;
		return L_3;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::TryAddRaycast(UnityEngine.Vector2,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastSubsystem_TryAddRaycast_mD0D3CCD94C1EAF43E5DA8130DD35CB2B95785DEF (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPoint, float ___1_estimatedDistance, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* ___2_raycast, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool TryAddRaycast(Vector2 screenPoint, float estimatedDistance, out XRRaycast raycast) => provider.TryAddRaycast(screenPoint, estimatedDistance, out raycast);
		Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline(__this, SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_screenPoint;
		float L_2 = ___1_estimatedDistance;
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* L_3 = ___2_raycast;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker3< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* >::Invoke(8 /* System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::TryAddRaycast(UnityEngine.Vector2,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::TryAddRaycast(UnityEngine.Ray,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastSubsystem_TryAddRaycast_m8B4904E8E52037689CC8A28E952BC532DAC13B8B (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, float ___1_estimatedDistance, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* ___2_raycast, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool TryAddRaycast(Ray ray, float estimatedDistance, out XRRaycast raycast) => provider.TryAddRaycast(ray, estimatedDistance, out raycast);
		Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline(__this, SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_1 = ___0_ray;
		float L_2 = ___1_estimatedDistance;
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* L_3 = ___2_raycast;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker3< bool, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, float, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* >::Invoke(9 /* System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::TryAddRaycast(UnityEngine.Ray,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::RemoveRaycast(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystem_RemoveRaycast_mD95EEE6441B70215E92C6FE47B8B586F61F5E331 (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void RemoveRaycast(TrackableId trackableId) => provider.RemoveRaycast(trackableId);
		Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline(__this, SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_trackableId;
		NullCheck(L_0);
		VirtualActionInvoker1< TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 >::Invoke(10 /* System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::RemoveRaycast(UnityEngine.XR.ARSubsystems.TrackableId) */, L_0, L_1);
		return;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::Raycast(UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 XRRaycastSubsystem_Raycast_m8F80A2A2DB7028A18192426BC8A12C1AEE8BAE12 (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, int32_t ___1_trackableTypeMask, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return provider.Raycast(XRRaycastHit.defaultValue, ray, trackableTypeMask, allocator);
		Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline(__this, SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_1;
		L_1 = XRRaycastHit_get_defaultValue_m330E18C6389B68E95AB5CFF26531D5CF5DE6E090_inline(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2 = ___0_ray;
		int32_t L_3 = ___1_trackableTypeMask;
		int32_t L_4 = ___2_allocator;
		NullCheck(L_0);
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 L_5;
		L_5 = VirtualFuncInvoker4< NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, int32_t, int32_t >::Invoke(12 /* Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::Raycast(UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 XRRaycastSubsystem_Raycast_mA1E217F2C1B58EDE213F651AD6F966E77D67F688 (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPoint, int32_t ___1_trackableTypeMask, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return provider.Raycast(XRRaycastHit.defaultValue, screenPoint, trackableTypeMask, allocator);
		Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline(__this, SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_1;
		L_1 = XRRaycastHit_get_defaultValue_m330E18C6389B68E95AB5CFF26531D5CF5DE6E090_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_screenPoint;
		int32_t L_3 = ___1_trackableTypeMask;
		int32_t L_4 = ___2_allocator;
		NullCheck(L_0);
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 L_5;
		L_5 = VirtualFuncInvoker4< NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, int32_t, int32_t >::Invoke(13 /* Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator) */, L_0, L_1, L_2, L_3, L_4);
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
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m1857D20E067E44CF3BAD3E96A368619BAB6474FA (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, const RuntimeMethod* method) 
{
	{
		// public override void Start() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_m1B4BADF1B98C07455D3BEEEB7A22FD8444904952 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, const RuntimeMethod* method) 
{
	{
		// public override void Stop() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_mB9445EA71155D4A8A69DA2E3A929FDAF5C4BB3B3 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, const RuntimeMethod* method) 
{
	{
		// public override void Destroy() { }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::TryAddRaycast(UnityEngine.Vector2,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddRaycast_mF21620620C50F046E545FBC7BD33B411C466D0A5 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPoint, float ___1_estimatedDistance, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* ___2_raycast, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// raycast = XRRaycast.defaultValue;
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* L_0 = ___2_raycast;
		il2cpp_codegen_runtime_class_init_inline(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_1;
		L_1 = XRRaycast_get_defaultValue_m37D4F9D561AA6422EEB957A49FDC8B9E1669A48E_inline(NULL);
		*(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*)L_0 = L_1;
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::TryAddRaycast(UnityEngine.Ray,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddRaycast_m42D31584099F01A3FC95D884A08C23BAA7515143 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, float ___1_estimatedDistance, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* ___2_raycast, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// raycast = XRRaycast.defaultValue;
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* L_0 = ___2_raycast;
		il2cpp_codegen_runtime_class_init_inline(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_1;
		L_1 = XRRaycast_get_defaultValue_m37D4F9D561AA6422EEB957A49FDC8B9E1669A48E_inline(NULL);
		*(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*)L_0 = L_1;
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::RemoveRaycast(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_RemoveRaycast_m255F5FAC2D9A0E406FDE819156EBC7C11B23DF94 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, const RuntimeMethod* method) 
{
	{
		// public virtual void RemoveRaycast(TrackableId trackableId) { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::GetChanges(UnityEngine.XR.ARSubsystems.XRRaycast,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 Provider_GetChanges_m62ED7DA58CBC28C0C63EDFF72C9C6B7421A3B2B5 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___0_defaultRaycast, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public virtual TrackableChanges<XRRaycast> GetChanges(XRRaycast defaultRaycast, Allocator allocator) => default;
		il2cpp_codegen_initobj((&V_0), sizeof(TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5));
		TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 L_0 = V_0;
		return L_0;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 Provider_Raycast_mB206D5960A72ECCC6BC44AA91719306F790C4854 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___0_defaultRaycastHit, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___1_ray, int32_t ___2_trackableTypeMask, int32_t ___3_allocator, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Raycasting using a Ray is not supported.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB51BA3F369D95E685969CC962493A3F0B421BA4D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_Raycast_mB206D5960A72ECCC6BC44AA91719306F790C4854_RuntimeMethod_var)));
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 Provider_Raycast_mDB7696CAE66690693DA105DDC40B319A327807E6 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___0_defaultRaycastHit, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_screenPoint, int32_t ___2_trackableTypeMask, int32_t ___3_allocator, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Raycasting using a screen point is not supported.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0B9AEC2348486B831A3488530ACA1A6FECCC60DE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_Raycast_mDB7696CAE66690693DA105DDC40B319A327807E6_RuntimeMethod_var)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mA6631023676667A3E88702E327B8CCC05F58F678 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m14DC8034E7EF5275FC50EA47EF2355B6D9CC22B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m14DC8034E7EF5275FC50EA47EF2355B6D9CC22B8(__this, SubsystemProvider_1__ctor_m14DC8034E7EF5275FC50EA47EF2355B6D9CC22B8_RuntimeMethod_var);
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
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::get_supportsViewportBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastSubsystemDescriptor_get_supportsViewportBasedRaycast_m9B041E253DF77C3584BC482D253746AB8A0B4FDB (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; private set; }
		bool L_0 = __this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m1860360556D5F4BBD3B242C93D8C92B3F8FA8D90 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::get_supportsWorldBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastSubsystemDescriptor_get_supportsWorldBasedRaycast_m06932061F9A99D5B2EDF87E420811B985EBD0F82 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; private set; }
		bool L_0 = __this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_m2A57C6AF5B8A21E2780A2CDC288F2917DB4BC590 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_m99EBD94098B7BD499391301B0099EC9381D32558 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TrackableType supportedTrackableTypes { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CsupportedTrackableTypesU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsTrackedRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsTrackedRaycasts_m9C99240C24C64818B63A368C025689018E8C4044 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsTrackedRaycastsU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_RegisterDescriptor_m5F967AE129CABAC92A8774272B77B97D5D52F5E9 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRRaycastSubsystemDescriptor(cinfo));
		Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 L_0 = ___0_cinfo;
		XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* L_1 = (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311*)il2cpp_codegen_object_new(XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XRRaycastSubsystemDescriptor__ctor_m95E810A79E27BB9FE0CC927BCBDEE2BFC5A0B011(L_1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12(L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor__ctor_m95E810A79E27BB9FE0CC927BCBDEE2BFC5A0B011 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_m07EAA6E76991BF9B677CE120674A862A92575EA1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRRaycastSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptorWithProvider_2__ctor_m07EAA6E76991BF9B677CE120674A862A92575EA1(__this, SubsystemDescriptorWithProvider_2__ctor_m07EAA6E76991BF9B677CE120674A862A92575EA1_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0;
		L_0 = Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline(__this, L_0, NULL);
		// providerType = cinfo.providerType;
		Type_t* L_1;
		L_1 = Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline(__this, L_1, NULL);
		// subsystemTypeOverride = cinfo.subsystemTypeOverride;
		Type_t* L_2;
		L_2 = Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline(__this, L_2, NULL);
		// supportsViewportBasedRaycast = cinfo.supportsViewportBasedRaycast;
		bool L_3;
		L_3 = Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline((&___0_cinfo), NULL);
		XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m1860360556D5F4BBD3B242C93D8C92B3F8FA8D90_inline(__this, L_3, NULL);
		// supportsWorldBasedRaycast = cinfo.supportsWorldBasedRaycast;
		bool L_4;
		L_4 = Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline((&___0_cinfo), NULL);
		XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_m2A57C6AF5B8A21E2780A2CDC288F2917DB4BC590_inline(__this, L_4, NULL);
		// supportedTrackableTypes = cinfo.supportedTrackableTypes;
		int32_t L_5;
		L_5 = Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline((&___0_cinfo), NULL);
		XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_m99EBD94098B7BD499391301B0099EC9381D32558_inline(__this, L_5, NULL);
		// supportsTrackedRaycasts = cinfo.supportsTrackedRaycasts;
		bool L_6;
		L_6 = Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8_inline((&___0_cinfo), NULL);
		XRRaycastSubsystemDescriptor_set_supportsTrackedRaycasts_m9C99240C24C64818B63A368C025689018E8C4044_inline(__this, L_6, NULL);
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshal_pinvoke(const Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54& unmarshaled, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshal_pinvoke_back(const Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_pinvoke& marshaled, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshal_pinvoke_cleanup(Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshal_com(const Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54& unmarshaled, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshal_com_back(const Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_com& marshaled, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshal_com_cleanup(Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m962E07A26F49D8C32DAEFEC4F9E0F79EBC128533 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m962E07A26F49D8C32DAEFEC4F9E0F79EBC128533_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_id_m962E07A26F49D8C32DAEFEC4F9E0F79EBC128533_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m5D183591B4A3ECA1EC2AA9015C02DCD1EB1F076F (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m5D183591B4A3ECA1EC2AA9015C02DCD1EB1F076F_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_providerType_m5D183591B4A3ECA1EC2AA9015C02DCD1EB1F076F_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m20C9DAD8677611ACD22689DA249911EEDE46EBF7 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_m20C9DAD8677611ACD22689DA249911EEDE46EBF7_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_m20C9DAD8677611ACD22689DA249911EEDE46EBF7_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsViewportBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = __this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mC7DB604D2E288A145177EC66F8C1DAA50F38693F (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsViewportBasedRaycast_mC7DB604D2E288A145177EC66F8C1DAA50F38693F_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_supportsViewportBasedRaycast_mC7DB604D2E288A145177EC66F8C1DAA50F38693F_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsWorldBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = __this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m05D5BC11896AED796A6E237BBB98FA4EF3CF17A4 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsWorldBasedRaycast_m05D5BC11896AED796A6E237BBB98FA4EF3CF17A4_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_supportsWorldBasedRaycast_m05D5BC11896AED796A6E237BBB98FA4EF3CF17A4_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportedTrackableTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = __this->___U3CsupportedTrackableTypesU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_m319BC9C9EB554C35CD40B791917A603D63BEEE0A (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CsupportedTrackableTypesU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportedTrackableTypes_m319BC9C9EB554C35CD40B791917A603D63BEEE0A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_supportedTrackableTypes_m319BC9C9EB554C35CD40B791917A603D63BEEE0A_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsTrackedRaycasts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = __this->___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsTrackedRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackedRaycasts_m7E65DAEB9ED0CB4C4C83DB751C1547145949AA41 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsTrackedRaycastsU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsTrackedRaycasts_m7E65DAEB9ED0CB4C4C83DB751C1547145949AA41_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_supportsTrackedRaycasts_m7E65DAEB9ED0CB4C4C83DB751C1547145949AA41_inline(_thisAdjusted, ___0_value, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m6CC66C9C4BA7904DF1E9E9D7A3C74DC8D6A6C1BA (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// public override int GetHashCode() => HashCodeUtil.Combine(
		//     HashCodeUtil.ReferenceHash(id),
		//     HashCodeUtil.ReferenceHash(providerType),
		//     HashCodeUtil.ReferenceHash(subsystemTypeOverride),
		//     supportsViewportBasedRaycast.GetHashCode(),
		//     supportsWorldBasedRaycast.GetHashCode(),
		//     ((int)supportedTrackableTypes).GetHashCode(),
		//     supportsTrackedRaycasts.GetHashCode());
		String_t* L_0;
		L_0 = Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline(__this, NULL);
		int32_t L_1;
		L_1 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_0, NULL);
		Type_t* L_2;
		L_2 = Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline(__this, NULL);
		int32_t L_3;
		L_3 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_2, NULL);
		Type_t* L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline(__this, NULL);
		int32_t L_5;
		L_5 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_4, NULL);
		bool L_6;
		L_6 = Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline(__this, NULL);
		V_0 = L_6;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		bool L_8;
		L_8 = Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline(__this, NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		int32_t L_10;
		L_10 = Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline(__this, NULL);
		V_1 = L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_1), NULL);
		bool L_12;
		L_12 = Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8_inline(__this, NULL);
		V_0 = L_12;
		int32_t L_13;
		L_13 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		int32_t L_14;
		L_14 = HashCodeUtil_Combine_m3B3273BD5CFEFD2D09635E1B69281B0ECD9819FB(L_1, L_3, L_5, L_7, L_9, L_11, L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m6CC66C9C4BA7904DF1E9E9D7A3C74DC8D6A6C1BA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_m6CC66C9C4BA7904DF1E9E9D7A3C74DC8D6A6C1BA(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m4D9FFB9CFA4DF03E9AF2763D3E91926896FCD64D (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is Cinfo) && Equals((Cinfo)obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = Cinfo_Equals_mD2E403B4E791DCE658297F8CA484149EB2D5F5B8(__this, ((*(Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*)((Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*)(Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*)UnBox(L_1, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m4D9FFB9CFA4DF03E9AF2763D3E91926896FCD64D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m4D9FFB9CFA4DF03E9AF2763D3E91926896FCD64D(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_ToString_m3022468C4555B097321DCDB08B4079DA430EBB3A (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B1EF85B3661969EA06515B1FAB6B1BECBB653C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("XRRaycastSubsystemDescriptor:\nsupportsViewportBasedRaycast: {0}\nsupportsWorldBasedRaycast: {1}",
		//     supportsViewportBasedRaycast, supportsWorldBasedRaycast);
		bool L_0;
		L_0 = Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline(__this, NULL);
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		bool L_3;
		L_3 = Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline(__this, NULL);
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral73B1EF85B3661969EA06515B1FAB6B1BECBB653C, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_ToString_m3022468C4555B097321DCDB08B4079DA430EBB3A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_ToString_m3022468C4555B097321DCDB08B4079DA430EBB3A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_mD2E403B4E791DCE658297F8CA484149EB2D5F5B8 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___0_other, const RuntimeMethod* method) 
{
	{
		// return
		//     String.Equals(id, other.id) &&
		//     ReferenceEquals(providerType, other.providerType) &&
		//     ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride) &&
		//     supportsViewportBasedRaycast == other.supportsViewportBasedRaycast &&
		//     supportsWorldBasedRaycast == other.supportsWorldBasedRaycast &&
		//     supportedTrackableTypes == other.supportedTrackableTypes;
		String_t* L_0;
		L_0 = Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline(__this, NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline((&___0_other), NULL);
		bool L_2;
		L_2 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0060;
		}
	}
	{
		Type_t* L_3;
		L_3 = Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline(__this, NULL);
		Type_t* L_4;
		L_4 = Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_3) == ((RuntimeObject*)(Type_t*)L_4))))
		{
			goto IL_0060;
		}
	}
	{
		Type_t* L_5;
		L_5 = Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline(__this, NULL);
		Type_t* L_6;
		L_6 = Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_5) == ((RuntimeObject*)(Type_t*)L_6))))
		{
			goto IL_0060;
		}
	}
	{
		bool L_7;
		L_7 = Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline(__this, NULL);
		bool L_8;
		L_8 = Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0060;
		}
	}
	{
		bool L_9;
		L_9 = Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline(__this, NULL);
		bool L_10;
		L_10 = Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_11;
		L_11 = Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline(__this, NULL);
		int32_t L_12;
		L_12 = Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline((&___0_other), NULL);
		return (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
	}

IL_0060:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_mD2E403B4E791DCE658297F8CA484149EB2D5F5B8_AdjustorThunk (RuntimeObject* __this, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___0_other, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_mD2E403B4E791DCE658297F8CA484149EB2D5F5B8(_thisAdjusted, ___0_other, method);
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
// System.Void UnityEngine.XR.ARSubsystems.ScopedProfiler::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedProfiler__ctor_m652B5689DE1A3C3EF7D12801DA27FA3B40E4412F (ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ScopedProfiler__ctor_m652B5689DE1A3C3EF7D12801DA27FA3B40E4412F_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, const RuntimeMethod* method)
{
	ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F*>(__this + _offset);
	ScopedProfiler__ctor_m652B5689DE1A3C3EF7D12801DA27FA3B40E4412F(_thisAdjusted, ___0_name, method);
}
// System.Void UnityEngine.XR.ARSubsystems.ScopedProfiler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedProfiler_Dispose_m7B646405B4E52CC4677329D3B860BE9C17A9DAC4 (ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ScopedProfiler_Dispose_m7B646405B4E52CC4677329D3B860BE9C17A9DAC4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F*>(__this + _offset);
	ScopedProfiler_Dispose_m7B646405B4E52CC4677329D3B860BE9C17A9DAC4(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem__ctor_mB926772E21C65B0CBCE36FD4610CEC1B677999C8 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3__ctor_m8563E495EB3A4C08B0C3C47658443D5A72A646FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ConfigurationChooser m_DefaultConfigurationChooser = new DefaultConfigurationChooser();
		DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8* L_0 = (DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8*)il2cpp_codegen_object_new(DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultConfigurationChooser__ctor_mDFBE2A3915F886FE4D79CD514F550A10CCC6A90C(L_0, NULL);
		__this->___m_DefaultConfigurationChooser_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DefaultConfigurationChooser_4), (void*)L_0);
		// public XRSessionSubsystem()
		SubsystemWithProvider_3__ctor_m8563E495EB3A4C08B0C3C47658443D5A72A646FF(__this, SubsystemWithProvider_3__ctor_m8563E495EB3A4C08B0C3C47658443D5A72A646FF_RuntimeMethod_var);
		// m_ConfigurationChooser = m_DefaultConfigurationChooser;
		ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* L_1 = __this->___m_DefaultConfigurationChooser_4;
		__this->___m_ConfigurationChooser_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ConfigurationChooser_5), (void*)L_1);
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
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m6E563F958F1D15385E35A74FC8A82E6AEA46343E (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public override void Start() {}
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_m333D402B548DA93070E850B93D06EC4F1FB07026 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public override void Stop() {}
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Update_mED507841F7B7D096FC116F775A144293B59E783A (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___0_updateParams, const RuntimeMethod* method) 
{
	{
		// public virtual void Update(XRSessionUpdateParams updateParams) { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams,UnityEngine.XR.ARSubsystems.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Update_m7DA03CBB0EBA3A2798DF9681CBDDBCA0AE224C85 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___0_updateParams, Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___1_configuration, const RuntimeMethod* method) 
{
	{
		// public virtual void Update(XRSessionUpdateParams updateParams, Configuration configuration) { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_requestedFeatures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Provider_get_requestedFeatures_m10A009D1F22281A8E1BDEA2156B6DF78C03BA855 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual Feature requestedFeatures => Feature.None;
		return (uint64_t)(((int64_t)0));
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_requestedTrackingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Provider_get_requestedTrackingMode_m7B7AC5BD9BAEB3B75E96FCC308EDB19523AF2834 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// get => Feature.None;
		return (uint64_t)(((int64_t)0));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::set_requestedTrackingMode(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_requestedTrackingMode_m8E0E2EBDB0E20C7E4B4DDD4BFCEDF3C8009BA2E3 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set {}
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_currentTrackingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Provider_get_currentTrackingMode_m65B8B630C321A5B41ACDC2F01D0DE2FF111CE638 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual Feature currentTrackingMode => Feature.None;
		return (uint64_t)(((int64_t)0));
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::GetConfigurationDescriptors(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 Provider_GetConfigurationDescriptors_m66DEAAC3E52B4D710710989049669C7DC7B6D643 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, int32_t ___0_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public virtual NativeArray<ConfigurationDescriptor> GetConfigurationDescriptors(Allocator allocator) => default;
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2));
		NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m8A97A126A24DE21208CC6C23BDA3C462F7DD0311 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public override void Destroy() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::OnApplicationPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_OnApplicationPause_m8FB7F1B59209A522883E89CCFD925A67198E9C90 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void OnApplicationPause() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::OnApplicationResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_OnApplicationResume_m744FBE7BF974465A14E7ABD2EBAD3EC7E588B117 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void OnApplicationResume() { }
		return;
	}
}
// System.IntPtr UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Provider_get_nativePtr_mB998A97B2BFEC1BB38F64D7B507FA0A1FB9C1B67 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual IntPtr nativePtr => IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::GetAvailabilityAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* Provider_GetAvailabilityAsync_m0CC77C1C614055744ADFBB72CA4297D4E51A0EE9 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_CreateResolvedPromise_mFE0B943258581DA1E3C8A38D2B1FDF6C431276B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Promise<SessionAvailability>.CreateResolvedPromise(SessionAvailability.None);
		Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* L_0;
		L_0 = Promise_1_CreateResolvedPromise_mFE0B943258581DA1E3C8A38D2B1FDF6C431276B3(0, Promise_1_CreateResolvedPromise_mFE0B943258581DA1E3C8A38D2B1FDF6C431276B3_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_trackingState_m0203345C74B979CB55AC990DA824AD8DE0CA1ADB (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual TrackingState trackingState => TrackingState.None;
		return (int32_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_notTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_notTrackingReason_m1D74C45C3CB3C617E7AB3D79C31F0B77CE7ECA32 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual NotTrackingReason notTrackingReason => NotTrackingReason.Unsupported;
		return (int32_t)(6);
	}
}
// System.Guid UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_sessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Provider_get_sessionId_m34F4CBEF73037CC97575A15ED53526D5030CCC93 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual Guid sessionId => Guid.Empty;
		Guid_t L_0 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->___Empty_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_matchFrameRateEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_matchFrameRateEnabled_m99E9CB391AC8D0CCFEBB9591C6725B2B06E2C5B9 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual bool matchFrameRateEnabled => false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_matchFrameRateRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_matchFrameRateRequested_m227999FA334E01B18CCB64CEDE9683FB6055B6C1 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// get => false;
		return (bool)0;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_frameRate_m3D2F14E59249D30B755798C8C0732B0CEFA059E3 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Querying the frame rate is not supported by this session subsystem.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3B1384C148B6355F25E67F7DFA0D39159B634A77)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_get_frameRate_m3D2F14E59249D30B755798C8C0732B0CEFA059E3_RuntimeMethod_var)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m43661C1B8B6373D456C0CDA35F96AACBAB01290A (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_mB17ACABA3F2892B7CA5AE85EBF66B795E26AA997_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_mB17ACABA3F2892B7CA5AE85EBF66B795E26AA997(__this, SubsystemProvider_1__ctor_mB17ACABA3F2892B7CA5AE85EBF66B795E26AA997_RuntimeMethod_var);
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
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsInstall(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsInstall_m6BF049FADBC0C98964ED4DC227535BB27BBDA6B7 (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsInstallU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m7E8D8FF23A84B20582BF51BEF07DCDFF325ACDF8 (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsMatchFrameRateU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_RegisterDescriptor_m93A3C60962B96C0AC75288931A21E2D2C0CF3895 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRSessionSubsystemDescriptor(cinfo));
		Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 L_0 = ___0_cinfo;
		XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* L_1 = (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076*)il2cpp_codegen_object_new(XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XRSessionSubsystemDescriptor__ctor_mB1B365F156769946A415E3A37A4FDDE167D5D5B7(L_1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12(L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor__ctor_mB1B365F156769946A415E3A37A4FDDE167D5D5B7 (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_mC889EBB6C5855DD9086D1ABADA7C64D5D3461B9C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRSessionSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptorWithProvider_2__ctor_mC889EBB6C5855DD9086D1ABADA7C64D5D3461B9C(__this, SubsystemDescriptorWithProvider_2__ctor_mC889EBB6C5855DD9086D1ABADA7C64D5D3461B9C_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0;
		L_0 = Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline(__this, L_0, NULL);
		// providerType = cinfo.providerType;
		Type_t* L_1;
		L_1 = Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline(__this, L_1, NULL);
		// subsystemTypeOverride = cinfo.subsystemTypeOverride;
		Type_t* L_2;
		L_2 = Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline(__this, L_2, NULL);
		// supportsInstall = cinfo.supportsInstall;
		bool L_3;
		L_3 = Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline((&___0_cinfo), NULL);
		XRSessionSubsystemDescriptor_set_supportsInstall_m6BF049FADBC0C98964ED4DC227535BB27BBDA6B7_inline(__this, L_3, NULL);
		// supportsMatchFrameRate = cinfo.supportsMatchFrameRate;
		bool L_4;
		L_4 = Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline((&___0_cinfo), NULL);
		XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m7E8D8FF23A84B20582BF51BEF07DCDFF325ACDF8_inline(__this, L_4, NULL);
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshal_pinvoke(const Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03& unmarshaled, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshal_pinvoke_back(const Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_pinvoke& marshaled, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshal_pinvoke_cleanup(Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshal_com(const Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03& unmarshaled, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshal_com_back(const Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_com& marshaled, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshal_com_cleanup(Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsInstall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = __this->___U3CsupportsInstallU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_mA4CF39BDB54C42BC8CBD401F6A77353B59EB074F (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsInstallU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsInstall_mA4CF39BDB54C42BC8CBD401F6A77353B59EB074F_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Cinfo_set_supportsInstall_mA4CF39BDB54C42BC8CBD401F6A77353B59EB074F_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsMatchFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = __this->___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_mC501E193696EC21EF655C7B789CABFE2D7D2B3E4 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsMatchFrameRateU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsMatchFrameRate_mC501E193696EC21EF655C7B789CABFE2D7D2B3E4_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Cinfo_set_supportsMatchFrameRate_mC501E193696EC21EF655C7B789CABFE2D7D2B3E4_inline(_thisAdjusted, ___0_value, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m7ABF4746E3D8D5C9F5E845638AB861FFBF665594 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m7ABF4746E3D8D5C9F5E845638AB861FFBF665594_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Cinfo_set_id_m7ABF4746E3D8D5C9F5E845638AB861FFBF665594_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2B27139CECCAF21A444D7891124893D11B7B6484 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m2B27139CECCAF21A444D7891124893D11B7B6484_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Cinfo_set_providerType_m2B27139CECCAF21A444D7891124893D11B7B6484_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m5DD40EFEE5ADFC4A6624E1EF7345F63D66027423 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_m5DD40EFEE5ADFC4A6624E1EF7345F63D66027423_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_m5DD40EFEE5ADFC4A6624E1EF7345F63D66027423_inline(_thisAdjusted, ___0_value, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m2D7B3F90910D284E6D8696F3E187E61436768107 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// int hash = HashCodeUtil.ReferenceHash(id);
		String_t* L_0;
		L_0 = Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline(__this, NULL);
		int32_t L_1;
		L_1 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_0, NULL);
		// hash = hash * 486187739 + HashCodeUtil.ReferenceHash(providerType);
		Type_t* L_2;
		L_2 = Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline(__this, NULL);
		int32_t L_3;
		L_3 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_2, NULL);
		// hash = hash * 486187739 + HashCodeUtil.ReferenceHash(subsystemTypeOverride);
		Type_t* L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline(__this, NULL);
		int32_t L_5;
		L_5 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_4, NULL);
		// hash = hash * 486187739 + supportsInstall.GetHashCode();
		bool L_6;
		L_6 = Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline(__this, NULL);
		V_0 = L_6;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		// hash = hash * 486187739 + supportsMatchFrameRate.GetHashCode();
		bool L_8;
		L_8 = Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline(__this, NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)486187739))), L_3)), ((int32_t)486187739))), L_5)), ((int32_t)486187739))), L_7)), ((int32_t)486187739))), L_9));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m2D7B3F90910D284E6D8696F3E187E61436768107_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_m2D7B3F90910D284E6D8696F3E187E61436768107(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m0C051CCCCA3A44F0C851768FE1CDB49DAC6D82B6 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___0_other, const RuntimeMethod* method) 
{
	{
		// return
		//     string.Equals(id, other.id) &&
		//     ReferenceEquals(providerType, other.providerType) &&
		//     ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride) &&
		//     supportsInstall == other.supportsInstall &&
		//     supportsMatchFrameRate == other.supportsMatchFrameRate;
		String_t* L_0;
		L_0 = Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline(__this, NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline((&___0_other), NULL);
		bool L_2;
		L_2 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		Type_t* L_3;
		L_3 = Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline(__this, NULL);
		Type_t* L_4;
		L_4 = Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_3) == ((RuntimeObject*)(Type_t*)L_4))))
		{
			goto IL_0051;
		}
	}
	{
		Type_t* L_5;
		L_5 = Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline(__this, NULL);
		Type_t* L_6;
		L_6 = Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_5) == ((RuntimeObject*)(Type_t*)L_6))))
		{
			goto IL_0051;
		}
	}
	{
		bool L_7;
		L_7 = Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline(__this, NULL);
		bool L_8;
		L_8 = Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0051;
		}
	}
	{
		bool L_9;
		L_9 = Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline(__this, NULL);
		bool L_10;
		L_10 = Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline((&___0_other), NULL);
		return (bool)((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0);
	}

IL_0051:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m0C051CCCCA3A44F0C851768FE1CDB49DAC6D82B6_AdjustorThunk (RuntimeObject* __this, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___0_other, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m0C051CCCCA3A44F0C851768FE1CDB49DAC6D82B6(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m053CC1A9E8D4DBF1FAFACF66083B615EF36CA572 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => obj is Cinfo && Equals((Cinfo)obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = Cinfo_Equals_m0C051CCCCA3A44F0C851768FE1CDB49DAC6D82B6(__this, ((*(Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*)((Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*)(Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*)UnBox(L_1, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m053CC1A9E8D4DBF1FAFACF66083B615EF36CA572_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m053CC1A9E8D4DBF1FAFACF66083B615EF36CA572(_thisAdjusted, ___0_obj, method);
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
// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) 
{
	{
		// public ScreenOrientation screenOrientation { get; set; }
		int32_t L_0 = __this->___U3CscreenOrientationU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenDimensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119 (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Int screenDimensions { get; set; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___U3CscreenDimensionsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A _returnValue;
	_returnValue = XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_GetHashCode_m735A861B2C2718DBF5588467EC76FC6EC77EFE8D (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public override int GetHashCode() => HashCodeUtil.Combine(((int)screenOrientation).GetHashCode(), screenDimensions.GetHashCode());
		int32_t L_0;
		L_0 = XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2;
		L_2 = XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline(__this, NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = Vector2Int_GetHashCode_mA3B6135FA770AF0C171319B50D9B913657230EB7_inline((&V_1), NULL);
		int32_t L_4;
		L_4 = HashCodeUtil_Combine_m98169BF154323DEFC91DB146CDD3CE7550B6AD36(L_1, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t XRSessionUpdateParams_GetHashCode_m735A861B2C2718DBF5588467EC76FC6EC77EFE8D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRSessionUpdateParams_GetHashCode_m735A861B2C2718DBF5588467EC76FC6EC77EFE8D(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_mE2FA6A03BEBC662F543FA73D25561369FAEE7EAF (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is XRSessionUpdateParams) && Equals((XRSessionUpdateParams)obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = XRSessionUpdateParams_Equals_mEC4D21B1DFB2DB2327FCE21B43C144DD2003828C(__this, ((*(XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*)((XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*)(XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*)UnBox(L_1, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRSessionUpdateParams_Equals_mE2FA6A03BEBC662F543FA73D25561369FAEE7EAF_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRSessionUpdateParams_Equals_mE2FA6A03BEBC662F543FA73D25561369FAEE7EAF(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSessionUpdateParams_ToString_m82D102D9405D9B5FCA96E55074C982F225287D80 (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral371D4A83362DFDF00E89BA68C82057A64E205D24);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"Screen Orientation: {screenOrientation}, Screen Dimensions: {screenDimensions}";
		int32_t L_0;
		L_0 = XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline(__this, NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var, &L_1);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_3;
		L_3 = XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline(__this, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_4 = L_3;
		RuntimeObject* L_5 = Box(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral371D4A83362DFDF00E89BA68C82057A64E205D24, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* XRSessionUpdateParams_ToString_m82D102D9405D9B5FCA96E55074C982F225287D80_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XRSessionUpdateParams_ToString_m82D102D9405D9B5FCA96E55074C982F225287D80(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_mEC4D21B1DFB2DB2327FCE21B43C144DD2003828C (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___0_other, const RuntimeMethod* method) 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// (screenOrientation == other.screenOrientation) &&
		// screenDimensions.Equals(other.screenDimensions);
		int32_t L_0;
		L_0 = XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline(__this, NULL);
		int32_t L_1;
		L_1 = XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0025;
		}
	}
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2;
		L_2 = XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline(__this, NULL);
		V_0 = L_2;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_3;
		L_3 = XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline((&___0_other), NULL);
		bool L_4;
		L_4 = Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline((&V_0), L_3, NULL);
		return L_4;
	}

IL_0025:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRSessionUpdateParams_Equals_mEC4D21B1DFB2DB2327FCE21B43C144DD2003828C_AdjustorThunk (RuntimeObject* __this, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___0_other, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRSessionUpdateParams_Equals_mEC4D21B1DFB2DB2327FCE21B43C144DD2003828C(_thisAdjusted, ___0_other, method);
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
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::get_invalidId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TrackableId invalidId => s_InvalidId;
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var))->___s_InvalidId_1;
		return L_0;
	}
}
// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::get_subId1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId1_m1F4296FEADE76DF0379F20BCBD94E807E2EF021F (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SubId1;
		uint64_t L_0 = __this->___m_SubId1_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint64_t TrackableId_get_subId1_m1F4296FEADE76DF0379F20BCBD94E807E2EF021F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = TrackableId_get_subId1_m1F4296FEADE76DF0379F20BCBD94E807E2EF021F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::get_subId2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId2_m53BAB4D373B736E473381B24CB608EEF666BA24E (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SubId2;
		uint64_t L_0 = __this->___m_SubId2_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint64_t TrackableId_get_subId2_m53BAB4D373B736E473381B24CB608EEF666BA24E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = TrackableId_get_subId2_m53BAB4D373B736E473381B24CB608EEF666BA24E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, uint64_t ___0_subId1, uint64_t ___1_subId2, const RuntimeMethod* method) 
{
	{
		// m_SubId1 = subId1;
		uint64_t L_0 = ___0_subId1;
		__this->___m_SubId1_2 = L_0;
		// m_SubId2 = subId2;
		uint64_t L_1 = ___1_subId2;
		__this->___m_SubId2_3 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5_AdjustorThunk (RuntimeObject* __this, uint64_t ___0_subId1, uint64_t ___1_subId2, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5(_thisAdjusted, ___0_subId1, ___1_subId2, method);
}
// System.String UnityEngine.XR.ARSubsystems.TrackableId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrackableId_ToString_m4BE1AD91726751D994E6FB864B231BE5D7D3F85F (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("{0}-{1}",
		//     m_SubId1.ToString("X16"),
		//     m_SubId2.ToString("X16"));
		uint64_t* L_0 = (uint64_t*)(&__this->___m_SubId1_2);
		String_t* L_1;
		L_1 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_0, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, NULL);
		uint64_t* L_2 = (uint64_t*)(&__this->___m_SubId2_3);
		String_t* L_3;
		L_3 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_2, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, NULL);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8, L_1, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* TrackableId_ToString_m4BE1AD91726751D994E6FB864B231BE5D7D3F85F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = TrackableId_ToString_m4BE1AD91726751D994E6FB864B231BE5D7D3F85F(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.TrackableId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) 
{
	{
		// public override int GetHashCode() => HashCodeUtil.Combine(m_SubId1.GetHashCode(), m_SubId2.GetHashCode());
		uint64_t* L_0 = (uint64_t*)(&__this->___m_SubId1_2);
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_0, NULL);
		uint64_t* L_2 = (uint64_t*)(&__this->___m_SubId2_3);
		int32_t L_3;
		L_3 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_2, NULL);
		int32_t L_4;
		L_4 = HashCodeUtil_Combine_m98169BF154323DEFC91DB146CDD3CE7550B6AD36(L_1, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_m67C98169A04DB96CCEBC08A05B3FF9544B52C3E5 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => obj is TrackableId && Equals((TrackableId)obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E(__this, ((*(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)UnBox(L_1, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TrackableId_Equals_m67C98169A04DB96CCEBC08A05B3FF9544B52C3E5_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	bool _returnValue;
	_returnValue = TrackableId_Equals_m67C98169A04DB96CCEBC08A05B3FF9544B52C3E5(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_other, const RuntimeMethod* method) 
{
	{
		// public bool Equals(TrackableId other) => (m_SubId1 == other.m_SubId1) && (m_SubId2 == other.m_SubId2);
		uint64_t L_0 = __this->___m_SubId1_2;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_other;
		uint64_t L_2 = L_1.___m_SubId1_2;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		uint64_t L_3 = __this->___m_SubId2_3;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_4 = ___0_other;
		uint64_t L_5 = L_4.___m_SubId2_3;
		return (bool)((((int64_t)L_3) == ((int64_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E_AdjustorThunk (RuntimeObject* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_other, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	bool _returnValue;
	_returnValue = TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::op_Inequality(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_op_Inequality_mBEED941F67FCF17377C6F01882CBA551B47246D4 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_lhs, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// (lhs.m_SubId1 != rhs.m_SubId1) ||
		// (lhs.m_SubId2 != rhs.m_SubId2);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ___0_lhs;
		uint64_t L_1 = L_0.___m_SubId1_2;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2 = ___1_rhs;
		uint64_t L_3 = L_2.___m_SubId1_2;
		if ((!(((uint64_t)L_1) == ((uint64_t)L_3))))
		{
			goto IL_0020;
		}
	}
	{
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_4 = ___0_lhs;
		uint64_t L_5 = L_4.___m_SubId2_3;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_6 = ___1_rhs;
		uint64_t L_7 = L_6.___m_SubId2_3;
		return (bool)((((int32_t)((((int64_t)L_5) == ((int64_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		return (bool)1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__cctor_m0233247C572757642543FD7F9D7AFFA432EC916F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEC9FDEA1EB953376E5F17E9CEC1AFAC97FDD26D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Regex s_TrackableIdRegex = new Regex(@"^(?<part1>[a-fA-F\d]{16})-(?<part2>[a-fA-F\d]{16})$",
		//                                                      RegexOptions.Compiled|RegexOptions.CultureInvariant|RegexOptions.Singleline|RegexOptions.ExplicitCapture);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_0, _stringLiteralBEC9FDEA1EB953376E5F17E9CEC1AFAC97FDD26D, ((int32_t)540), NULL);
		((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var))->___s_TrackableIdRegex_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var))->___s_TrackableIdRegex_0), (void*)L_0);
		// static TrackableId s_InvalidId = new TrackableId(0, 0);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5((&L_1), ((int64_t)0), ((int64_t)0), /*hidden argument*/NULL);
		((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var))->___s_InvalidId_1 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRAnchor_get_trackableId_m0F50E81D0152D0BA4152EF9B66F648EF9FC664AE_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableId trackableId => m_Id;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_Id_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRAnchor_get_pose_m2347783C1262EEFBC0B817EF0357FA4BB4BF053F_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) 
{
	{
		// public Pose pose => m_Pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Pose_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRAnchor_get_trackingState_m6124A26C36CA93C25C57548576CB00C1F496ED83_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) 
{
	{
		// public TrackingState trackingState => m_TrackingState;
		int32_t L_0 = __this->___m_TrackingState_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRAnchor_get_nativePtr_mC0551FA7E8DB8A0DA1EAE02D9B0BFD9D47389C26_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->___m_NativePtr_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t XRAnchor_get_sessionId_m719628E8A58027C75FF2CEA3345DC41200FB5F76_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) 
{
	{
		// public Guid sessionId => m_SessionId;
		Guid_t L_0 = __this->___m_SessionId_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TrackableId invalidId => s_InvalidId;
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var))->___s_InvalidId_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrunningU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 XRAnchor_get_defaultValue_mF68ABF2D0EC8B54DD8D5333FCD56EEF14A985A9A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRAnchor defaultValue => s_Default;
		il2cpp_codegen_runtime_class_init_inline(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_0 = ((XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_StaticFields*)il2cpp_codegen_static_fields_for(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var))->___s_Default_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mFF66DF9642403D18476451C30BD5F2FC89CAF8B1_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m2D11E14B5E4C48474C00C579D4C2F5F45970D70B_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_mD1DEE5FBF656FDF4BF5E28B60C04F53B6D146C3B_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_m2BA4A0E85635C4D85059CDF713EE7FC21F80DBF4_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = __this->___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor_set_supportsTrackableAttachments_m61CE5B37DB3C3492D4EB5123976414A0CB940413_inline (XRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackableAttachments { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsTrackableAttachmentsU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m6344F3700C1D743D82AB9E74925F7687925734A6_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m0E291C22B0B2CF634024F32ECA2E424F18157ACF_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mD5C5CAAC167444FE1BD48C1A16AA904E8DFF7052_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m58F12783B1EF42ED420CC99E0585FA6ED046C4AD_inline (Cinfo_t935E3721D062C7CF3DB741A91D425DFE99290384* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 Configuration_get_descriptor_m3C4973351367EA0BD9E48DA1E2201D8803BA8D1E_inline (Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* __this, const RuntimeMethod* method) 
{
	{
		// public ConfigurationDescriptor descriptor { get; private set; }
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_0 = __this->___U3CdescriptorU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Configuration_get_features_m704F372E940AF1DB435C1EBFF8E48EAD4E8B3776_inline (Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* __this, const RuntimeMethod* method) 
{
	{
		// public Feature features { get; private set; }
		uint64_t L_0 = __this->___U3CfeaturesU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ConfigurationDescriptor_get_identifier_m858F4B730002C1823D283460115DA65C6A46BCB6_inline (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr identifier => m_Identifier;
		intptr_t L_0 = __this->___m_Identifier_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConfigurationDescriptor_get_capabilities_m6A4EF4C0E0FE3671E8564EF13BA2A5B4264CF938_inline (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, const RuntimeMethod* method) 
{
	{
		// public Feature capabilities => m_Capabilities;
		uint64_t L_0 = __this->___m_Capabilities_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConfigurationDescriptor_get_rank_mEDFBF5E2173FA84A0695BB01A6A40860794F6FA8_inline (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, const RuntimeMethod* method) 
{
	{
		// public int rank => m_Rank;
		int32_t L_0 = __this->___m_Rank_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandheldARInputDevice_set_devicePosition_mFACF712435D25DBC04E7595C073EB2FFB60938EB_inline (HandheldARInputDevice_tDC70607D65788F0D6A7BA2EABA6D289D15DFDCE9* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = ___0_value;
		__this->___U3CdevicePositionU3Ek__BackingField_44 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdevicePositionU3Ek__BackingField_44), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandheldARInputDevice_set_deviceRotation_mFF98E66E587EB92247C73A5EDF34317014BB15F1_inline (HandheldARInputDevice_tDC70607D65788F0D6A7BA2EABA6D289D15DFDCE9* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = ___0_value;
		__this->___U3CdeviceRotationU3Ek__BackingField_45 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdeviceRotationU3Ek__BackingField_45), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 BoundedPlane_get_trackableId_m7AA7FD63EA8F8A903300EFDF15616315ACFDA8AA_inline (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableId trackableId => m_TrackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_TrackableId_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 BoundedPlane_get_subsumedById_m27EFD2CAFFDCF6560D445115D596F23094F612B9_inline (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableId subsumedById => m_SubsumedById;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_SubsumedById_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BoundedPlane_get_pose_mE6F416B0C7519EDA0D1AE8D8BD4D627E4CEA96CC_inline (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	{
		// public Pose pose => m_Pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Pose_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoundedPlane_get_center_m3BB7635D2137C7C414FC682EBE0CB5E1F8D3F7D3_inline (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 center => m_Center;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_Center_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoundedPlane_get_size_m2645C0FF517DF15F381B268DF6366F4D14381DC8_inline (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 size => m_Size;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_Size_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_alignment_m4E43582A7059AE23DD506878BCF164C61422DBEF_inline (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	{
		// public PlaneAlignment alignment => m_Alignment;
		int32_t L_0 = __this->___m_Alignment_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_trackingState_mC294F13F8F79D53F8F04D8FB4E160B092BA6A577_inline (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	{
		// public TrackingState trackingState => m_TrackingState;
		int32_t L_0 = __this->___m_TrackingState_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t BoundedPlane_get_nativePtr_mE8E2608856FE4327913A38005F4A8590D65A43E7_inline (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->___m_NativePtr_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_classification_m4EA9556C440097648A87D3AB7EC433776468A725_inline (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* __this, const RuntimeMethod* method) 
{
	{
		// public PlaneClassification classification => m_Classification;
		int32_t L_0 = __this->___m_Classification_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_mED8670C0E122B7ED0DAB4C3381ADFF04B75E0B03_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (float*)(&__this->___x_0);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (float*)(&__this->___y_1);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		V_0 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = __this->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_other;
		float L_2 = L_1.___x_0;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		float L_3 = __this->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_other;
		float L_5 = L_4.___y_1;
		G_B3_0 = ((((float)L_3) == ((float)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE BoundedPlane_get_defaultValue_m8231738F569F3ABD6A5A5697B1293C3A75F47D31_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static BoundedPlane defaultValue => s_Default;
		il2cpp_codegen_runtime_class_init_inline(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var);
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_0 = ((BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var))->___s_Default_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m3C9491FE6D19662F5CDE221328F86862621B6DE2_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m43F95297A90490AFA397FC61B990A33F74259EF5_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m30B55A83F149F3B304AAAD85FE3E80BFCD75552D_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsHorizontalPlaneDetection_m25246A60EFD930C7AC4C50A950E910E7716C9315_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = __this->___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsHorizontalPlaneDetection_m839AD1DED4EBAEBED2F90F802A6DD88AA2959CDF_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsHorizontalPlaneDetection { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsVerticalPlaneDetection_mEA496CC68069CCAD03DBC1B57F53DDA57D56A8BF_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = __this->___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsVerticalPlaneDetection_m9BF239DBD1EE5568557F5086E5CB0EECFC1853CD_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsVerticalPlaneDetection { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsArbitraryPlaneDetection_m7E19D041E3828651646769D594B9647149B5A0F4_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = __this->___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsArbitraryPlaneDetection_m1754591F55E83D9D6734B5CAAAD452F9BC84D1E1_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsArbitraryPlaneDetection { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsBoundaryVertices_m75615CA66C3E0020B75915F8426FE6B2B475BEDD_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = __this->___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsBoundaryVertices_m03857A490FF676C5E3E8C6596CABC70D7CFBEC96_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsBoundaryVertices { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsBoundaryVerticesU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsClassification_m2596CCB90308DA90A90177C91854DDFBF18F464A_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = __this->___U3CsupportsClassificationU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsClassification_m68CBEB689207F4B058CB8B2F878F2FDC1AA321C4_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsClassification { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsClassificationU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCADBFEB62A645F33A8FE7684CE21D11A837FB6F9_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m75AA9217739457DA075AB764BF440217E87A1126_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m8880B201EBF541B726CA629EF2DBA762E5ACB010_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_m73E4DE44A091E9B268214E732EFA29174703EEF1_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_m989F6D7C88D39981D1DD342DEC887E9DB3E44AF3_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m423FEFB76FB81C496A35BB358EF04592C8EE9C10_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_m96752ABD368822EE7EE393F7AE3AAE631A4C3657_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsBoundaryVerticesU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mB1E8AAC1F2A7D511C960C6606364C87EEA1A221D_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsClassificationU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycast_get_trackableId_mA844E950A9862ABA13C47395893C18A55C9117AB_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableId trackableId => m_TrackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_TrackableId_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRRaycast_get_pose_mADE80A4AABEFCCCB8297186D7E836EAE5B730F73_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public Pose pose => m_Pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Pose_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRRaycast_get_trackingState_mDBA1DEB482B9346E44263E8B2201C1D8AF919B09_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public TrackingState trackingState => m_TrackingState;
		int32_t L_0 = __this->___m_TrackingState_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRRaycast_get_nativePtr_m79D980249D35343744B394D7238F8A8FB943D484_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->___m_NativePtr_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float XRRaycast_get_distance_m0B11F8743558DCA40C4E724ECAB8E4DD5ECFFD2B_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public float distance => m_Distance;
		float L_0 = __this->___m_Distance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycast_get_hitTrackableId_m54245AC20302081DF8658019AA0261DEE1E7D6FE_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableId hitTrackableId => m_HitTrackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_HitTrackableId_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycastHit_get_trackableId_m8B92C0F8977D274743D9388DEB7DCEBCC88E7325_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TrackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_TrackableId_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRRaycastHit_get_pose_m3B8D69B763A39178CB583948B4E08255FE9A633E_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Pose_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float XRRaycastHit_get_distance_m7098B7C90D22697CA37FBBDF50A4109AD055CA80_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Distance;
		float L_0 = __this->___m_Distance_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRRaycastHit_get_hitType_m30A8013E847E6B2B70A9511B522099C03102E933_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HitType;
		int32_t L_0 = __this->___m_HitType_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 XRRaycast_get_defaultValue_m37D4F9D561AA6422EEB957A49FDC8B9E1669A48E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRRaycast defaultValue => s_Default;
		il2cpp_codegen_runtime_class_init_inline(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_0 = ((XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_StaticFields*)il2cpp_codegen_static_fields_for(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var))->___s_Default_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 XRRaycastHit_get_defaultValue_m330E18C6389B68E95AB5CFF26531D5CF5DE6E090_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRRaycastHit defaultValue => s_Default;
		il2cpp_codegen_runtime_class_init_inline(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_0 = ((XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields*)il2cpp_codegen_static_fields_for(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var))->___s_Default_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = __this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m1860360556D5F4BBD3B242C93D8C92B3F8FA8D90_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = __this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_m2A57C6AF5B8A21E2780A2CDC288F2917DB4BC590_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = __this->___U3CsupportedTrackableTypesU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_m99EBD94098B7BD499391301B0099EC9381D32558_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TrackableType supportedTrackableTypes { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CsupportedTrackableTypesU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = __this->___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsTrackedRaycasts_m9C99240C24C64818B63A368C025689018E8C4044_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsTrackedRaycastsU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m962E07A26F49D8C32DAEFEC4F9E0F79EBC128533_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m5D183591B4A3ECA1EC2AA9015C02DCD1EB1F076F_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m20C9DAD8677611ACD22689DA249911EEDE46EBF7_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mC7DB604D2E288A145177EC66F8C1DAA50F38693F_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m05D5BC11896AED796A6E237BBB98FA4EF3CF17A4_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_m319BC9C9EB554C35CD40B791917A603D63BEEE0A_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CsupportedTrackableTypesU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackedRaycasts_m7E65DAEB9ED0CB4C4C83DB751C1547145949AA41_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsTrackedRaycastsU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = __this->___U3CsupportsInstallU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsInstall_m6BF049FADBC0C98964ED4DC227535BB27BBDA6B7_inline (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsInstallU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = __this->___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m7E8D8FF23A84B20582BF51BEF07DCDFF325ACDF8_inline (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsMatchFrameRateU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_mA4CF39BDB54C42BC8CBD401F6A77353B59EB074F_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsInstallU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_mC501E193696EC21EF655C7B789CABFE2D7D2B3E4_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsMatchFrameRateU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m7ABF4746E3D8D5C9F5E845638AB861FFBF665594_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2B27139CECCAF21A444D7891124893D11B7B6484_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m5DD40EFEE5ADFC4A6624E1EF7345F63D66027423_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) 
{
	{
		// public ScreenOrientation screenOrientation { get; set; }
		int32_t L_0 = __this->___U3CscreenOrientationU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Int screenDimensions { get; set; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___U3CscreenDimensionsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_GetHashCode_mA3B6135FA770AF0C171319B50D9B913657230EB7_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		V_1 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_0023;
	}

IL_0023:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(__this, NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(__this, NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___0_other), NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId1_m1F4296FEADE76DF0379F20BCBD94E807E2EF021F_inline (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SubId1;
		uint64_t L_0 = __this->___m_SubId1_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId2_m53BAB4D373B736E473381B24CB608EEF666BA24E_inline (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SubId2;
		uint64_t L_0 = __this->___m_SubId2_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CproviderU3Ek__BackingField_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
