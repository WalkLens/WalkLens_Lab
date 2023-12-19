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

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>
struct IEnumerable_1_t6AE17B07175DBD12A85153B9F8B709B29419C733;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>
struct IEqualityComparer_1_tCC09FBE705E85E03B43A69897D3CB1582F920BD9;
// System.Collections.Generic.Dictionary`2/KeyCollection<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct KeyCollection_tF1DFF34D6882A27E9FE9CBAF10A79F298D6BEC85;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.List`1<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>
struct List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>
struct MRTKSubsystemProvider_1_tA1BCC59B43276DC9E4D7789F187D4365A6998E3B;
// MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<System.Object>
struct MRTKSubsystemProvider_1_tC08188F41A5C4CC25C7CA1DC3A76C6D9DE5290D6;
// MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct MRTKSubsystem_3_t057DB79908BCA9C22BB5ED3F4421C19D4E3C89A1;
// MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<System.Object,System.Object,System.Object>
struct MRTKSubsystem_3_tC6F5612EAD44F0EC50AF80375D83C3337116F6A8;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tC4502634FFCB447A8B24CF8C693DCC68195C7D2A;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>
struct SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct SubsystemWithProvider_3_tF6354EEABB229041BC6BBAEABA61FA71F76B3674;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct ValueCollection_tAE64CCEC60B5F147734777C2F91A95E9FDE4C7A7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/Entry<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>[]
struct EntryU5BU5D_t8E1515AE3053915350C8CFA99D5CFB569F78F282;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// MixedReality.Toolkit.Accessibility.AccessibleObjectClassification[]
struct AccessibleObjectClassificationU5BU5D_tA4DC2401749541EF78C5E850D68A4BD5D2720F4C;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// MixedReality.Toolkit.Accessibility.AccessibilitySubsystem
struct AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582;
// MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig
struct AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3;
// MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor
struct AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1;
// MixedReality.Toolkit.Accessibility.AccessibleObject
struct AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675;
// MixedReality.Toolkit.Accessibility.AccessibleObjectClassification
struct AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9;
// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// MixedReality.Toolkit.BaseSubsystemConfig
struct BaseSubsystemConfig_t45DE317EA7641CB136203849EDA560353093B13A;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem
struct MRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// MixedReality.Toolkit.Accessibility.ObjectRole
struct ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// MixedReality.Toolkit.Accessibility.ScreenReaderObjectSettings
struct ScreenReaderObjectSettings_t2BF065764D49859C4497D5B07DAE75AAD36F33F8;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// MixedReality.Toolkit.Accessibility.TextAccessibility
struct TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider
struct Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider
struct AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccessibilityUtilities_tFAA889699821BD03A832D5E3343203DEC9016D1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraFOVChecker_t3475E4E43D873C7B11A8E76B124E52979A7D9A8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tD8640BD3EEEC2043D69EE193D0BF9F8569B458D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MRTKSubsystem_3_t057DB79908BCA9C22BB5ED3F4421C19D4E3C89A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0514B8E4342F7B936BE02120037C20832C1C2F20;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FA4353F2CBCCACE1A1F98B3C3F3738127E492;
IL2CPP_EXTERN_C String_t* _stringLiteral2714B1EC52279442F9A3B7ED93239624B9226A15;
IL2CPP_EXTERN_C String_t* _stringLiteral281033B411A2723B0C82F6B48AC1E70FEB902A11;
IL2CPP_EXTERN_C String_t* _stringLiteral52D2CD097CFAA0461035A19E2C6115F54219A6EE;
IL2CPP_EXTERN_C String_t* _stringLiteral680D5F85FF107897716444439FE6176166BED070;
IL2CPP_EXTERN_C String_t* _stringLiteral8B158F9A3667630BBA0D7A4DB24E6105065433E7;
IL2CPP_EXTERN_C String_t* _stringLiteral906F379A3EDE20E3AEF88CF2F80715B39D89684B;
IL2CPP_EXTERN_C String_t* _stringLiteralA48C0F16E39A46C469EC5BB4DA73F02A7D84D8E7;
IL2CPP_EXTERN_C String_t* _stringLiteralA8731F4AEB28CD3592CFFC1849F528FCA9738497;
IL2CPP_EXTERN_C String_t* _stringLiteralACBDBFBF2CD1DAF969EC64771234F755CFEFF59A;
IL2CPP_EXTERN_C String_t* _stringLiteralC059A8FD08BCE672BF2CB48A49B7329B485F3ED8;
IL2CPP_EXTERN_C String_t* _stringLiteralE528A64618644524EC116F5E5BB24B0B6C94B55F;
IL2CPP_EXTERN_C String_t* _stringLiteralE9DAA516D37F8A67FD590A557B2B18E7B9BC8F7C;
IL2CPP_EXTERN_C const RuntimeMethod* AccessibilitySubsystemCinfo_GetHashCode_mB84786CBF53EF4A9B060D109E71B73C705B7FF09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AccessibilitySubsystemDescriptor_Create_m13D5FA518F88AFBC27B603EFD3E2DAE6AC11B4D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m56A0C11CF03EEBE9218C3AC9957362AAFF155090_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m257B8C90C41CB522B5A2D24FFF4676471FE46B33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m25BEAB34BCA70DF90CF8FFB48C90F4356C816B0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC921F0A6E3AEDBFBCFB8814339BAE1322DD2ABDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m7B5DDF7BCC66529C9DC6E9C39BAD534182492AD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mB8994FB01D5326868F236A779F2DF4E5BAC10D7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4FEC06045F10D0643E3EB6DBBFB57844CDF58166_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m75297E7D08AE3AB13BC9E9B5B217CFD43E463FB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m04143F3DAE9E0837982BEE60843B7B78C168BE6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF04637E81CF819EBD5975E53102C923C17FFB3E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m571AAB121D0C10985A7C3A783461745D9DA3FE9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m658804DB42C0652E5963E8B12A95415AA17257ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mFF30CBE3C429844CF584BAC596EDAF7B49398705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m3452DB888275C4F2F551F5EA575B97E5BD7E077C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC8BB955AE59B04F0EAF93471507EEE766D066516_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5FBB6B16664449B594EE92438FDAFBF6A89BADF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystemProvider_1__ctor_m6FEDBFA34FB3B9BDBC5E4CD1D046FDFC84F5B34C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystem_3__ctor_m347BAFB23B611CEAAAD615475078169C74B32E04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_m550CA2FD8B49E27F199025B8D00180D0CBA5BD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextAccessibility_OnInvertTextColorChanged_mEEF10C7F41CF47AC730D187DF1436CAD6918347E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mDFB5AD8B638E6EF2679CFAF9138B32296E811497_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_TisProvider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A_mFC88ADC53CB14101995C34E0BF2BD65E6791BB9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F_TisAccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_m9FED92F08254D85C3BCB0B4D0ACA8E0CA4E04998_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3_TisMRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F_mC0212D83AED30A16AD3BD0C9812DB75CF94FBCC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_mD714530B0B5CD3126DE804405E74629F8684E56D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
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
struct U3CModuleU3E_tB91B55230D33210A45908E3E73B34D6731CF6573 
{
};

// System.Collections.Generic.Dictionary`2<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t8E1515AE3053915350C8CFA99D5CFB569F78F282* ____entries_1;
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
	KeyCollection_tF1DFF34D6882A27E9FE9CBAF10A79F298D6BEC85* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tAE64CCEC60B5F147734777C2F91A95E9FDE4C7A7* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct KeyCollection_tF1DFF34D6882A27E9FE9CBAF10A79F298D6BEC85  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* ____dictionary_0;
};

// System.Collections.Generic.List`1<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>
struct List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AccessibleObjectClassificationU5BU5D_tA4DC2401749541EF78C5E850D68A4BD5D2720F4C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
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

// System.Collections.Generic.Dictionary`2/ValueCollection<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct ValueCollection_tAE64CCEC60B5F147734777C2F91A95E9FDE4C7A7  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* ____dictionary_0;
};

// MixedReality.Toolkit.Accessibility.AccessibilityHelpers
struct AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// MixedReality.Toolkit.Accessibility.ScreenReaderObjectSettings
struct ScreenReaderObjectSettings_t2BF065764D49859C4497D5B07DAE75AAD36F33F8  : public RuntimeObject
{
	// System.Single MixedReality.Toolkit.Accessibility.ScreenReaderObjectSettings::maxObjectDistance
	float ___maxObjectDistance_0;
	// MixedReality.Toolkit.Accessibility.ScreenReaderSpatializationOption MixedReality.Toolkit.Accessibility.ScreenReaderObjectSettings::spatializationOption
	int32_t ___spatializationOption_1;
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

// System.Collections.Generic.List`1/Enumerator<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>
struct Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ____current_3;
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

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tC4502634FFCB447A8B24CF8C693DCC68195C7D2A  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>
struct SubsystemProvider_1_t89741747B410C01681D2CD154D7B2CEBC32E696F  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct SubsystemWithProvider_3_tF6354EEABB229041BC6BBAEABA61FA71F76B3674  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	RuntimeObject* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	RuntimeObject* ___U3CproviderU3Ek__BackingField_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
struct AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB 
{
	// System.String MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_1;
	// System.String MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<Author>k__BackingField
	String_t* ___U3CAuthorU3Ek__BackingField_2;
	// System.Type MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<ConfigType>k__BackingField
	Type_t* ___U3CConfigTypeU3Ek__BackingField_3;
	// System.Type MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<ProviderType>k__BackingField
	Type_t* ___U3CProviderTypeU3Ek__BackingField_4;
	// System.Type MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<SubsystemTypeOverride>k__BackingField
	Type_t* ___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
};
// Native definition for P/Invoke marshalling of MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
struct AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshaled_pinvoke
{
	char* ___U3CNameU3Ek__BackingField_0;
	char* ___U3CDisplayNameU3Ek__BackingField_1;
	char* ___U3CAuthorU3Ek__BackingField_2;
	Type_t* ___U3CConfigTypeU3Ek__BackingField_3;
	Type_t* ___U3CProviderTypeU3Ek__BackingField_4;
	Type_t* ___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
};
// Native definition for COM marshalling of MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
struct AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshaled_com
{
	Il2CppChar* ___U3CNameU3Ek__BackingField_0;
	Il2CppChar* ___U3CDisplayNameU3Ek__BackingField_1;
	Il2CppChar* ___U3CAuthorU3Ek__BackingField_2;
	Type_t* ___U3CConfigTypeU3Ek__BackingField_3;
	Type_t* ___U3CProviderTypeU3Ek__BackingField_4;
	Type_t* ___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>
struct MRTKSubsystemProvider_1_tA1BCC59B43276DC9E4D7789F187D4365A6998E3B  : public SubsystemProvider_1_t89741747B410C01681D2CD154D7B2CEBC32E696F
{
};

// MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct MRTKSubsystem_3_t057DB79908BCA9C22BB5ED3F4421C19D4E3C89A1  : public SubsystemWithProvider_3_tF6354EEABB229041BC6BBAEABA61FA71F76B3674
{
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor
struct AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1  : public SubsystemDescriptorWithProvider_2_tC4502634FFCB447A8B24CF8C693DCC68195C7D2A
{
	// System.String MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_3;
	// System.String MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::<Author>k__BackingField
	String_t* ___U3CAuthorU3Ek__BackingField_4;
	// System.Type MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::<ConfigType>k__BackingField
	Type_t* ___U3CConfigTypeU3Ek__BackingField_5;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// MixedReality.Toolkit.Accessibility.AccessibilitySubsystem
struct AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582  : public MRTKSubsystem_3_t057DB79908BCA9C22BB5ED3F4421C19D4E3C89A1
{
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider
struct Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A  : public MRTKSubsystemProvider_1_tA1BCC59B43276DC9E4D7789F187D4365A6998E3B
{
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// MixedReality.Toolkit.Accessibility.AccessibleObjectClassification
struct AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String MixedReality.Toolkit.Accessibility.AccessibleObjectClassification::description
	String_t* ___description_4;
	// System.String MixedReality.Toolkit.Accessibility.AccessibleObjectClassification::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_5;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// MixedReality.Toolkit.BaseSubsystemConfig
struct BaseSubsystemConfig_t45DE317EA7641CB136203849EDA560353093B13A  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem
struct MRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F  : public AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582
{
};

// MixedReality.Toolkit.Accessibility.ObjectRole
struct ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String MixedReality.Toolkit.Accessibility.ObjectRole::description
	String_t* ___description_4;
	// System.String MixedReality.Toolkit.Accessibility.ObjectRole::formalName
	String_t* ___formalName_5;
	// System.Boolean MixedReality.Toolkit.Accessibility.ObjectRole::isAria
	bool ___isAria_6;
	// System.String MixedReality.Toolkit.Accessibility.ObjectRole::referenceLink
	String_t* ___referenceLink_7;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider
struct AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716  : public Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A
{
	// MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::<Config>k__BackingField
	AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* ___U3CConfigU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>> MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::accessibleObjects
	Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* ___accessibleObjects_2;
	// System.Boolean MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::invertTextColor
	bool ___invertTextColor_3;
	// System.Action`1<System.Boolean> MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::InvertTextColorChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___InvertTextColorChanged_4;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig
struct AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3  : public BaseSubsystemConfig_t45DE317EA7641CB136203849EDA560353093B13A
{
	// System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::invertTextColor
	bool ___invertTextColor_4;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// MixedReality.Toolkit.Accessibility.AccessibleObject
struct AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MixedReality.Toolkit.Accessibility.AccessibleObjectClassification MixedReality.Toolkit.Accessibility.AccessibleObject::classification
	AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ___classification_4;
	// System.String MixedReality.Toolkit.Accessibility.AccessibleObject::contents
	String_t* ___contents_5;
	// System.String MixedReality.Toolkit.Accessibility.AccessibleObject::contentSummary
	String_t* ___contentSummary_6;
	// System.String MixedReality.Toolkit.Accessibility.AccessibleObject::description
	String_t* ___description_7;
	// System.String MixedReality.Toolkit.Accessibility.AccessibleObject::instructions
	String_t* ___instructions_8;
	// System.Boolean MixedReality.Toolkit.Accessibility.AccessibleObject::isContextuallyRelevant
	bool ___isContextuallyRelevant_9;
	// MixedReality.Toolkit.Accessibility.ObjectRole MixedReality.Toolkit.Accessibility.AccessibleObject::role
	ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* ___role_10;
	// System.String MixedReality.Toolkit.Accessibility.AccessibleObject::semantic
	String_t* ___semantic_11;
};

// MixedReality.Toolkit.Accessibility.TextAccessibility
struct TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MixedReality.Toolkit.Accessibility.AccessibilitySubsystem MixedReality.Toolkit.Accessibility.TextAccessibility::accessibilitySubsystem
	AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* ___accessibilitySubsystem_4;
	// UnityEngine.Material MixedReality.Toolkit.Accessibility.TextAccessibility::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>

// System.Collections.Generic.Dictionary`2<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>

// System.Collections.Generic.Dictionary`2/KeyCollection<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>

// System.Collections.Generic.Dictionary`2/KeyCollection<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>

// System.Collections.Generic.List`1<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>
struct List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AccessibleObjectClassificationU5BU5D_tA4DC2401749541EF78C5E850D68A4BD5D2720F4C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>

// System.Collections.Generic.Dictionary`2/ValueCollection<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>

// MixedReality.Toolkit.Accessibility.AccessibilityHelpers
struct AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_StaticFields
{
	// MixedReality.Toolkit.Accessibility.AccessibilitySubsystem MixedReality.Toolkit.Accessibility.AccessibilityHelpers::subsystem
	AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* ___subsystem_0;
};

// MixedReality.Toolkit.Accessibility.AccessibilityHelpers

// MixedReality.Toolkit.Accessibility.ScreenReaderObjectSettings

// MixedReality.Toolkit.Accessibility.ScreenReaderObjectSettings

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

// System.Collections.Generic.List`1/Enumerator<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>

// System.Collections.Generic.List`1/Enumerator<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>

// MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo

// MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

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

// MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>

// MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>

// MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct MRTKSubsystem_3_t057DB79908BCA9C22BB5ED3F4421C19D4E3C89A1_StaticFields
{
	// Unity.Profiling.ProfilerMarker MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_4;
	// Unity.Profiling.ProfilerMarker MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::LateUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___LateUpdatePerfMarker_5;
	// Unity.Profiling.ProfilerMarker MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::FixedUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___FixedUpdatePerfMarker_6;
};

// MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>

// MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor

// MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// MixedReality.Toolkit.Accessibility.AccessibilitySubsystem

// MixedReality.Toolkit.Accessibility.AccessibilitySubsystem

// System.ApplicationException

// System.ApplicationException

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

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

// MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider

// MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider

// System.Action`1<System.Boolean>

// System.Action`1<System.Boolean>

// MixedReality.Toolkit.Accessibility.AccessibleObjectClassification

// MixedReality.Toolkit.Accessibility.AccessibleObjectClassification

// System.ArgumentException

// System.ArgumentException

// MixedReality.Toolkit.BaseSubsystemConfig

// MixedReality.Toolkit.BaseSubsystemConfig

// UnityEngine.Collider

// UnityEngine.Collider

// MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem

// MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem

// MixedReality.Toolkit.Accessibility.ObjectRole

// MixedReality.Toolkit.Accessibility.ObjectRole

// UnityEngine.Transform

// UnityEngine.Transform

// MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider

// MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider

// MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig

// MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// MixedReality.Toolkit.Accessibility.AccessibleObject
struct AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675_StaticFields
{
	// System.Boolean MixedReality.Toolkit.Accessibility.AccessibleObject::suppressSubsystemNotFound
	bool ___suppressSubsystemNotFound_12;
};

// MixedReality.Toolkit.Accessibility.AccessibleObject

// MixedReality.Toolkit.Accessibility.TextAccessibility

// MixedReality.Toolkit.Accessibility.TextAccessibility

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text
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


// System.Void MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystem_3__ctor_m341C28CE0238F15E3509D746AFBAC5D1717A1617_gshared (MRTKSubsystem_3_tC6F5612EAD44F0EC50AF80375D83C3337116F6A8* __this, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemProvider_1__ctor_mBAE6618278D72569444010ECF6C9B01DDBD156E2_gshared (MRTKSubsystemProvider_1_tC08188F41A5C4CC25C7CA1DC3A76C6D9DE5290D6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared (SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07* __this, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.XRSubsystemHelpers::CheckTypes<System.Object,System.Object>(System.String,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_m278F3FCEAA8C04FFCE843545BD7BC34894367760_gshared (String_t* ___0_name, Type_t* ___1_subsystemTypeOverride, Type_t* ___2_providerType, const RuntimeMethod* method) ;
// CinfoT MixedReality.Toolkit.XRSubsystemHelpers::ConstructCinfo<System.Object,MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB XRSubsystemHelpers_ConstructCinfo_TisRuntimeObject_TisAccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_m0A52DD95E973EF4A86C99B7B222FB9E4C108D8D2_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// ConfigT MixedReality.Toolkit.XRSubsystemHelpers::GetConfiguration<System.Object,System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRSubsystemHelpers_GetConfiguration_TisRuntimeObject_TisRuntimeObject_m8EB21D75A7CC263ACBF63D3B36DD185D3F98894A_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) ;
// T MixedReality.Toolkit.XRSubsystemHelpers::GetFirstRunningSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRSubsystemHelpers_GetFirstRunningSubsystem_TisRuntimeObject_m82D3DF1AA85D404A0BEAC7E9F19B938B2C1E8AC0_gshared (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

// System.Void MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>::.ctor()
inline void MRTKSubsystem_3__ctor_m347BAFB23B611CEAAAD615475078169C74B32E04 (MRTKSubsystem_3_t057DB79908BCA9C22BB5ED3F4421C19D4E3C89A1* __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystem_3_t057DB79908BCA9C22BB5ED3F4421C19D4E3C89A1*, const RuntimeMethod*))MRTKSubsystem_3__ctor_m341C28CE0238F15E3509D746AFBAC5D1717A1617_gshared)(__this, method);
}
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>::get_provider()
inline Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_inline (SubsystemWithProvider_3_tF6354EEABB229041BC6BBAEABA61FA71F76B3674* __this, const RuntimeMethod* method)
{
	return ((  Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* (*) (SubsystemWithProvider_3_tF6354EEABB229041BC6BBAEABA61FA71F76B3674*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
// MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::Create(MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* AccessibilitySubsystemDescriptor_Create_m13D5FA518F88AFBC27B603EFD3E2DAE6AC11B4D9 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_cinfo, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___0_descriptor, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>::.ctor()
inline void MRTKSubsystemProvider_1__ctor_m6FEDBFA34FB3B9BDBC5E4CD1D046FDFC84F5B34C (MRTKSubsystemProvider_1_tA1BCC59B43276DC9E4D7789F187D4365A6998E3B* __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystemProvider_1_tA1BCC59B43276DC9E4D7789F187D4365A6998E3B*, const RuntimeMethod*))MRTKSubsystemProvider_1__ctor_mBAE6618278D72569444010ECF6C9B01DDBD156E2_gshared)(__this, method);
}
// System.Void MixedReality.Toolkit.BaseSubsystemConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSubsystemConfig__ctor_mA76AF075FD5292FF470A73700ACF7CBB83079970 (BaseSubsystemConfig_t45DE317EA7641CB136203849EDA560353093B13A* __this, const RuntimeMethod* method) ;
// System.String MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Name_m7BA15E44E11886098AA8EA821FA2B0D8CA6D3F69_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Name_m54B2AAF7136105A464C28A65A767850BCC9D28DE_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_DisplayName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_DisplayName_m1C3CADDFDDFF05FF5E06B578B817C79ECEE3A964_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_DisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_DisplayName_mF4B2888EB0B9CC079304C763202B433B9B64C08C_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_Author()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Author_mB23C2F600D79473293FE3F4DDE478668EE588665_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_Author(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Author_m4A54DBB53320F9B0799D1C0004DAE344C8D878CA_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Type MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_ConfigType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ConfigType_m5825C91DED37520EE451694F04D3017425F362D9_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_ConfigType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ConfigType_m1C88D3720C41C9FC6119AF8E9CA16CF0D2A5A314_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Type MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_ProviderType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ProviderType_m4B965C0720F4FCAB71FDE2E1BF4432847A0E1C1B_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_ProviderType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ProviderType_mCDC3B7F3086F0A22F733146CD575C502735ECF7F_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Type MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_SubsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m8C9D503648BE2A02681BF586F56DCCE002B3DEAF_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_SubsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mAFD4D08EBA60CA1B62FF06B43AED9C3CD6D4B2F3_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::Equals(MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_Equals_m49E691E268E8996616A9BA9E85983707394C2DD6 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_other, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_Equals_m1BD3A23EAD9C33D50355D94B6FA45A727D8CFC42 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::op_Equality(MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo,MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_op_Equality_m131E9119C6C3C0DF060F5E0444BE0B869E61BFA1 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_lhs, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___1_rhs, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82 (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AccessibilitySubsystemCinfo_GetHashCode_mB84786CBF53EF4A9B060D109E71B73C705B7FF09 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_m550CA2FD8B49E27F199025B8D00180D0CBA5BD70 (SubsystemDescriptorWithProvider_2_tC4502634FFCB447A8B24CF8C693DCC68195C7D2A* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_tC4502634FFCB447A8B24CF8C693DCC68195C7D2A*, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared)(__this, method);
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Name_mEFFA92DCB7010EF0D62CFA93CF66C7FE89995A35 (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_DisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_DisplayName_m229717C0C39B818FA4640EF6BBE1A62F32F172E8_inline (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_Author(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Author_m591A68F34AC959997975F6C2C35C4F7B9995E675_inline (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_ProviderType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_ProviderType_mAFC2AE75ADD111813929CB2345C459A474CEF14A (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_SubsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_SubsystemTypeOverride_m42CE8C9FDCEC0043F91A21D048593EA54C13AB9E (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_providerType_m1ED8F898361B508FFE2A46D05E81CEAC43B040D4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mCE84F1611CB09975FBB4BE48E015316ADDB52668_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.XRSubsystemHelpers::CheckTypes<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>(System.String,System.Type,System.Type)
inline bool XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_TisProvider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A_mFC88ADC53CB14101995C34E0BF2BD65E6791BB9D (String_t* ___0_name, Type_t* ___1_subsystemTypeOverride, Type_t* ___2_providerType, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, Type_t*, Type_t*, const RuntimeMethod*))XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_m278F3FCEAA8C04FFCE843545BD7BC34894367760_gshared)(___0_name, ___1_subsystemTypeOverride, ___2_providerType, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::.ctor(MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor__ctor_m1017F1BFFE0F471C44F9E8DCDCCD8EA52866279E (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_accessibilitySubsystemCinfo, const RuntimeMethod* method) ;
// CinfoT MixedReality.Toolkit.XRSubsystemHelpers::ConstructCinfo<MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem,MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo>()
inline AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F_TisAccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_m9FED92F08254D85C3BCB0B4D0ACA8E0CA4E04998 (const RuntimeMethod* method)
{
	return ((  AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB (*) (const RuntimeMethod*))XRSubsystemHelpers_ConstructCinfo_TisRuntimeObject_TisAccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_m0A52DD95E973EF4A86C99B7B222FB9E4C108D8D2_gshared)(method);
}
// System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::Register(MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_Register_m7FE164349E7F04D107D53BCBBCEB5E34695239D3 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_accessibilitySubsystemParams, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem__ctor_m346280A1856D314E104FD4688F97D970CB692AE6 (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::.ctor()
inline void Dictionary_2__ctor_mC921F0A6E3AEDBFBCFB8814339BAE1322DD2ABDC (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mB4F3702935FBE59EE119EECC559DEAFB0BFDA904 (Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* __this, const RuntimeMethod* method) ;
// ConfigT MixedReality.Toolkit.XRSubsystemHelpers::GetConfiguration<MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig,MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem>()
inline AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3_TisMRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F_mC0212D83AED30A16AD3BD0C9812DB75CF94FBCC1 (const RuntimeMethod* method)
{
	return ((  AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* (*) (const RuntimeMethod*))XRSubsystemHelpers_GetConfiguration_TisRuntimeObject_TisRuntimeObject_m8EB21D75A7CC263ACBF63D3B36DD185D3F98894A_gshared)(method);
}
// MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::get_Config()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* AccessibilityProvider_get_Config_m8BDDBA8D863454381F67C1D5AB92E2BFF20CFD1D_inline (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::get_InvertTextColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AccessibilitySubsystemConfig_get_InvertTextColor_m99AE5F060B8439274802FCFEC0695DAC12C2CB40_inline (AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::AssembleAccessibleObjects(System.Collections.Generic.List`1<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_AssembleAccessibleObjects_m4D306FFD496179B967A3339305B4C69F9E6AFB0D (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* ___0_classifications, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___1_accessibleObjectsList, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::FilterAccessibleObjects(MixedReality.Toolkit.Accessibility.AccessibleObjectVisibility,System.Single,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_FilterAccessibleObjects_m01D01B98B708732F7B9773926F456645BCC12AE5 (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, int32_t ___0_visibility, float ___1_maxDistance, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___2_objectList, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>::Clear()
inline void List_1_Clear_mC8BB955AE59B04F0EAF93471507EEE766D066516_inline (List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::get_Keys()
inline KeyCollection_tF1DFF34D6882A27E9FE9CBAF10A79F298D6BEC85* Dictionary_2_get_Keys_m7B5DDF7BCC66529C9DC6E9C39BAD534182492AD8 (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tF1DFF34D6882A27E9FE9CBAF10A79F298D6BEC85* (*) (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m3452DB888275C4F2F551F5EA575B97E5BD7E077C (List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::get_Values()
inline ValueCollection_tAE64CCEC60B5F147734777C2F91A95E9FDE4C7A7* Dictionary_2_get_Values_mB8994FB01D5326868F236A779F2DF4E5BAC10D7A (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tAE64CCEC60B5F147734777C2F91A95E9FDE4C7A7* (*) (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::GetEnumerator()
inline Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6 ValueCollection_GetEnumerator_mDFB5AD8B638E6EF2679CFAF9138B32296E811497 (ValueCollection_tAE64CCEC60B5F147734777C2F91A95E9FDE4C7A7* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6 (*) (ValueCollection_tAE64CCEC60B5F147734777C2F91A95E9FDE4C7A7*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::Dispose()
inline void Enumerator_Dispose_m4FEC06045F10D0643E3EB6DBBFB57844CDF58166 (Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6*, const RuntimeMethod*))Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::get_Current()
inline List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* Enumerator_get_Current_m658804DB42C0652E5963E8B12A95415AA17257ED_inline (Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6* __this, const RuntimeMethod* method)
{
	return ((  List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* (*) (Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6*, const RuntimeMethod*))Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::MoveNext()
inline bool Enumerator_MoveNext_mF04637E81CF819EBD5975E53102C923C17FFB3E1 (Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6*, const RuntimeMethod*))Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m25BEAB34BCA70DF90CF8FFB48C90F4356C816B0B (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* __this, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E*, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m257B8C90C41CB522B5A2D24FFF4676471FE46B33 (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* __this, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ___0_key, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E*, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9*, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// TValue System.Collections.Generic.Dictionary`2<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::get_Item(TKey)
inline List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* __this, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ___0_key, const RuntimeMethod* method)
{
	return ((  List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* (*) (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E*, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
inline bool List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
inline bool List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>::GetEnumerator()
inline Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF List_1_GetEnumerator_m5FBB6B16664449B594EE92438FDAFBF6A89BADF4 (List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF (*) (List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>::Dispose()
inline void Enumerator_Dispose_m75297E7D08AE3AB13BC9E9B5B217CFD43E463FB0 (Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>::get_Current()
inline AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* Enumerator_get_Current_m571AAB121D0C10985A7C3A783461745D9DA3FE9C_inline (Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF* __this, const RuntimeMethod* method)
{
	return ((  AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* (*) (Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>::MoveNext()
inline bool Enumerator_MoveNext_m04143F3DAE9E0837982BEE60843B7B78C168BE6D (Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Boolean UnityEngine.GameObject::TryGetComponent<UnityEngine.Collider>(T&)
inline bool GameObject_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mFF30CBE3C429844CF584BAC596EDAF7B49398705 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___0_component, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.CameraFOVChecker::IsInFOVCached(UnityEngine.Camera,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraFOVChecker_IsInFOVCached_m79438798C0A3B4D4ECDE161D0FE45E8040925D69 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___1_myCollider, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::RaiseInvertTextColorChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_RaiseInvertTextColorChanged_m5E307665E29899B75B3C499B4D3F562352276EFD (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, bool ___0_invert, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.GraphicsTools.AccessibilityUtilities::SetTextColorInversion(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityUtilities_SetTextColorInversion_m19C6890F04D0E38F637826C326A0EA858FB65B89 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_textMaterial, bool ___1_Invert, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___0_obj, method);
}
// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::get_running()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) ;
// T MixedReality.Toolkit.XRSubsystemHelpers::GetFirstRunningSubsystem<MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>()
inline AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_mD714530B0B5CD3126DE804405E74629F8684E56D (const RuntimeMethod* method)
{
	return ((  AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* (*) (const RuntimeMethod*))XRSubsystemHelpers_GetFirstRunningSubsystem_TisRuntimeObject_m82D3DF1AA85D404A0BEAC7E9F19B938B2C1E8AC0_gshared)(method);
}
// MixedReality.Toolkit.Accessibility.AccessibilitySubsystem MixedReality.Toolkit.Accessibility.AccessibilityHelpers::get_Subsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* AccessibilityHelpers_get_Subsystem_m8466FB86B3BFD4EA6466F7769B26434D4B66F31D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// MixedReality.Toolkit.Accessibility.AccessibleObjectClassification MixedReality.Toolkit.Accessibility.AccessibleObject::get_Classification()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* AccessibleObject_get_Classification_mE14955800BCBC287221DD48936ED165C111773C5_inline (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::TryRegisterAccessibleObject(UnityEngine.GameObject,MixedReality.Toolkit.Accessibility.AccessibleObjectClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryRegisterAccessibleObject_m24998FD8667A149D174B9C776075464815A9513B (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_accessibleObject, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ___1_classification, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::TryUnregisterAccessibleObject(UnityEngine.GameObject,MixedReality.Toolkit.Accessibility.AccessibleObjectClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryUnregisterAccessibleObject_m5D1040D28B0933C42D3C7202DD6023ED44661059 (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_accessibleObject, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ___1_classification, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::get_InvertTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_get_InvertTextColor_m206C55094D228501FDA32608D19A28C43BFC49EB (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.TextAccessibility::OnInvertTextColorChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnInvertTextColorChanged_mEEF10C7F41CF47AC730D187DF1436CAD6918347E (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, bool ___0_invert, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<TMPro.TMP_Text>(T&)
inline bool Component_TryGetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m56A0C11CF03EEBE9218C3AC9957362AAFF155090 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___0_component, method);
}
// UnityEngine.Material TMPro.TMP_Text::get_fontMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* TMP_Text_get_fontMaterial_m4EBEC9AF78B5B66C983A98F78948E753EE4DDFC6 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::ApplyTextColorInversion(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_ApplyTextColorInversion_m6B180E6AB65DBB48A8342DA6F6F4167BD25A3456 (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, bool ___1_enable, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.TextAccessibility::ApplyInitialConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_ApplyInitialConfiguration_m73BF0385F2DD0C456533D77AE83F394390DB8110 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::add_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_add_InvertTextColorChanged_mF0E4A5552620BE1379B3E706BBF47ED428D0840D (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_value, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::remove_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_remove_InvertTextColorChanged_m9F5AC71049A7230CBC69804770211B7715E90E35 (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_value, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.TextAccessibility::GetTextMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_GetTextMaterial_m0AC087D72AD6D0CEEA584A36A46F5E4CDA734FC4 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.TextAccessibility::RegisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_RegisterHandlers_m7E7F67229CF6733C845E16746610FA53242D0164 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Accessibility.TextAccessibility::UnregisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_UnregisterHandlers_m188E90F2E90DD44E7EE4D4EA2D69F49B8EAFEFB5 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
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
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem__ctor_m346280A1856D314E104FD4688F97D970CB692AE6 (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystem_3__ctor_m347BAFB23B611CEAAAD615475078169C74B32E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystem_3_t057DB79908BCA9C22BB5ED3F4421C19D4E3C89A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AccessibilitySubsystem()
		il2cpp_codegen_runtime_class_init_inline(MRTKSubsystem_3_t057DB79908BCA9C22BB5ED3F4421C19D4E3C89A1_il2cpp_TypeInfo_var);
		MRTKSubsystem_3__ctor_m347BAFB23B611CEAAAD615475078169C74B32E04(__this, MRTKSubsystem_3__ctor_m347BAFB23B611CEAAAD615475078169C74B32E04_RuntimeMethod_var);
		// { }
		return;
	}
}
// System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::TryGetAccessibleObjects(System.Collections.Generic.List`1<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>,MixedReality.Toolkit.Accessibility.AccessibleObjectVisibility,System.Single,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryGetAccessibleObjects_mF07719D8BAD658B8A01A55E7F50BBF3A8389396B (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* ___0_classifications, int32_t ___1_readerView, float ___2_maxDistance, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___3_accessibleObjectList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// provider.TryGetAccessibleObjects(classifications, readerView, maxDistance, accessibleObjectList);
		Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_inline(__this, SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* L_1 = ___0_classifications;
		int32_t L_2 = ___1_readerView;
		float L_3 = ___2_maxDistance;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = ___3_accessibleObjectList;
		NullCheck(L_0);
		bool L_5;
		L_5 = VirtualFuncInvoker4< bool, List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C*, int32_t, float, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* >::Invoke(25 /* System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::TryGetAccessibleObjects(System.Collections.Generic.List`1<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>,MixedReality.Toolkit.Accessibility.AccessibleObjectVisibility,System.Single,System.Collections.Generic.List`1<UnityEngine.GameObject>) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::TryGetAccessibleObjectClassifications(System.Collections.Generic.List`1<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryGetAccessibleObjectClassifications_m2B771AF2840568A5F75109A3D723BBC0A52B0A18 (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* ___0_classifications, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// provider.TryGetAccessibleObjectClassifications(classifications);
		Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_inline(__this, SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* L_1 = ___0_classifications;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* >::Invoke(26 /* System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::TryGetAccessibleObjectClassifications(System.Collections.Generic.List`1<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::TryRegisterAccessibleObject(UnityEngine.GameObject,MixedReality.Toolkit.Accessibility.AccessibleObjectClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryRegisterAccessibleObject_m24998FD8667A149D174B9C776075464815A9513B (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_accessibleObject, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ___1_classification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// provider.TryRegisterAccessibleObject(accessibleObject, classification);
		Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_inline(__this, SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_accessibleObject;
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_2 = ___1_classification;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* >::Invoke(27 /* System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::TryRegisterAccessibleObject(UnityEngine.GameObject,MixedReality.Toolkit.Accessibility.AccessibleObjectClassification) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::TryUnregisterAccessibleObject(UnityEngine.GameObject,MixedReality.Toolkit.Accessibility.AccessibleObjectClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryUnregisterAccessibleObject_m5D1040D28B0933C42D3C7202DD6023ED44661059 (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_accessibleObject, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ___1_classification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// provider.TryUnregisterAccessibleObject(accessibleObject, classification);
		Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_inline(__this, SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_accessibleObject;
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_2 = ___1_classification;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* >::Invoke(28 /* System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::TryUnregisterAccessibleObject(UnityEngine.GameObject,MixedReality.Toolkit.Accessibility.AccessibleObjectClassification) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::get_InvertTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_get_InvertTextColor_m206C55094D228501FDA32608D19A28C43BFC49EB (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => provider.InvertTextColor;
		Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_inline(__this, SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(29 /* System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::get_InvertTextColor() */, L_0);
		return L_1;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::set_InvertTextColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_set_InvertTextColor_m14FD0D98E21800800E69C1BB8215D24C99E71074 (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => provider.InvertTextColor = value;
		Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_inline(__this, SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		bool L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< bool >::Invoke(30 /* System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::set_InvertTextColor(System.Boolean) */, L_0, L_1);
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::add_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_add_InvertTextColorChanged_mF0E4A5552620BE1379B3E706BBF47ED428D0840D (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// add => provider.InvertTextColorChanged += value;
		Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_inline(__this, SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(31 /* System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::add_InvertTextColorChanged(System.Action`1<System.Boolean>) */, L_0, L_1);
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::remove_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_remove_InvertTextColorChanged_m9F5AC71049A7230CBC69804770211B7715E90E35 (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remove => provider.InvertTextColorChanged -= value;
		Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_inline(__this, SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(32 /* System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::remove_InvertTextColorChanged(System.Action`1<System.Boolean>) */, L_0, L_1);
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::ApplyTextColorInversion(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_ApplyTextColorInversion_m6B180E6AB65DBB48A8342DA6F6F4167BD25A3456 (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, bool ___1_enable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool enable) => provider.ApplyTextColorInversion(material, enable);
		Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_inline(__this, SubsystemWithProvider_3_get_provider_m4F14FD0B82B8F315AAFE7E700230C5B5D5F6B038_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___0_material;
		bool L_2 = ___1_enable;
		NullCheck(L_0);
		VirtualActionInvoker2< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, bool >::Invoke(33 /* System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::ApplyTextColorInversion(UnityEngine.Material,System.Boolean) */, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::Register(MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_Register_m7FE164349E7F04D107D53BCBBCEB5E34695239D3 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_accessibilitySubsystemParams, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AccessibilitySubsystemDescriptor descriptor = AccessibilitySubsystemDescriptor.Create(accessibilitySubsystemParams);
		AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB L_0 = ___0_accessibilitySubsystemParams;
		AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* L_1;
		L_1 = AccessibilitySubsystemDescriptor_Create_m13D5FA518F88AFBC27B603EFD3E2DAE6AC11B4D9(L_0, NULL);
		// SubsystemDescriptorStore.RegisterDescriptor(descriptor);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12(L_1, NULL);
		// return true;
		return (bool)1;
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
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mB4F3702935FBE59EE119EECC559DEAFB0BFDA904 (Provider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystemProvider_1__ctor_m6FEDBFA34FB3B9BDBC5E4CD1D046FDFC84F5B34C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MRTKSubsystemProvider_1__ctor_m6FEDBFA34FB3B9BDBC5E4CD1D046FDFC84F5B34C(__this, MRTKSubsystemProvider_1__ctor_m6FEDBFA34FB3B9BDBC5E4CD1D046FDFC84F5B34C_RuntimeMethod_var);
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
// System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::get_InvertTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemConfig_get_InvertTextColor_m99AE5F060B8439274802FCFEC0695DAC12C2CB40 (AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* __this, const RuntimeMethod* method) 
{
	{
		// get => invertTextColor;
		bool L_0 = __this->___invertTextColor_4;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::set_InvertTextColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemConfig_set_InvertTextColor_mC441327B10BCCE2A9A49B9707816792BD5997B4A (AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => invertTextColor = value;
		bool L_0 = ___0_value;
		__this->___invertTextColor_4 = L_0;
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemConfig_Reset_m8A1738D961C3C37D80DA4E6B721C9184049FB218 (AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* __this, const RuntimeMethod* method) 
{
	{
		// invertTextColor = default;
		__this->___invertTextColor_4 = (bool)0;
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemConfig__ctor_m694C9145222318BDD3CC65BC798570CA79970060 (AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* __this, const RuntimeMethod* method) 
{
	{
		BaseSubsystemConfig__ctor_mA76AF075FD5292FF470A73700ACF7CBB83079970(__this, NULL);
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
// Conversion methods for marshalling of: MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshal_pinvoke(const AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB& unmarshaled, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'AccessibilitySubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshal_pinvoke_back(const AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshaled_pinvoke& marshaled, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB& unmarshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'AccessibilitySubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshal_pinvoke_cleanup(AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshal_com(const AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB& unmarshaled, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshaled_com& marshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'AccessibilitySubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshal_com_back(const AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshaled_com& marshaled, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB& unmarshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'AccessibilitySubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshal_com_cleanup(AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_marshaled_com& marshaled)
{
}
// System.String MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Name_m7BA15E44E11886098AA8EA821FA2B0D8CA6D3F69 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AccessibilitySubsystemCinfo_get_Name_m7BA15E44E11886098AA8EA821FA2B0D8CA6D3F69_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_Name_m7BA15E44E11886098AA8EA821FA2B0D8CA6D3F69_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Name_m54B2AAF7136105A464C28A65A767850BCC9D28DE (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_Name_m54B2AAF7136105A464C28A65A767850BCC9D28DE_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_Name_m54B2AAF7136105A464C28A65A767850BCC9D28DE_inline(_thisAdjusted, ___0_value, method);
}
// System.String MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_DisplayName_m1C3CADDFDDFF05FF5E06B578B817C79ECEE3A964 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AccessibilitySubsystemCinfo_get_DisplayName_m1C3CADDFDDFF05FF5E06B578B817C79ECEE3A964_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_DisplayName_m1C3CADDFDDFF05FF5E06B578B817C79ECEE3A964_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_DisplayName_mF4B2888EB0B9CC079304C763202B433B9B64C08C (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDisplayNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_DisplayName_mF4B2888EB0B9CC079304C763202B433B9B64C08C_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_DisplayName_mF4B2888EB0B9CC079304C763202B433B9B64C08C_inline(_thisAdjusted, ___0_value, method);
}
// System.String MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_Author()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Author_mB23C2F600D79473293FE3F4DDE478668EE588665 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = __this->___U3CAuthorU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AccessibilitySubsystemCinfo_get_Author_mB23C2F600D79473293FE3F4DDE478668EE588665_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_Author_mB23C2F600D79473293FE3F4DDE478668EE588665_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_Author(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Author_m4A54DBB53320F9B0799D1C0004DAE344C8D878CA (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CAuthorU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_Author_m4A54DBB53320F9B0799D1C0004DAE344C8D878CA_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_Author_m4A54DBB53320F9B0799D1C0004DAE344C8D878CA_inline(_thisAdjusted, ___0_value, method);
}
// System.Type MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_ConfigType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ConfigType_m5825C91DED37520EE451694F04D3017425F362D9 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = __this->___U3CConfigTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* AccessibilitySubsystemCinfo_get_ConfigType_m5825C91DED37520EE451694F04D3017425F362D9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_ConfigType_m5825C91DED37520EE451694F04D3017425F362D9_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_ConfigType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ConfigType_m1C88D3720C41C9FC6119AF8E9CA16CF0D2A5A314 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CConfigTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_ConfigType_m1C88D3720C41C9FC6119AF8E9CA16CF0D2A5A314_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_ConfigType_m1C88D3720C41C9FC6119AF8E9CA16CF0D2A5A314_inline(_thisAdjusted, ___0_value, method);
}
// System.Type MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_ProviderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ProviderType_m4B965C0720F4FCAB71FDE2E1BF4432847A0E1C1B (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get; set; }
		Type_t* L_0 = __this->___U3CProviderTypeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* AccessibilitySubsystemCinfo_get_ProviderType_m4B965C0720F4FCAB71FDE2E1BF4432847A0E1C1B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_ProviderType_m4B965C0720F4FCAB71FDE2E1BF4432847A0E1C1B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_ProviderType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ProviderType_mCDC3B7F3086F0A22F733146CD575C502735ECF7F (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CProviderTypeU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProviderTypeU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_ProviderType_mCDC3B7F3086F0A22F733146CD575C502735ECF7F_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_ProviderType_mCDC3B7F3086F0A22F733146CD575C502735ECF7F_inline(_thisAdjusted, ___0_value, method);
}
// System.Type MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_SubsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m8C9D503648BE2A02681BF586F56DCCE002B3DEAF (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m8C9D503648BE2A02681BF586F56DCCE002B3DEAF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m8C9D503648BE2A02681BF586F56DCCE002B3DEAF_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_SubsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mAFD4D08EBA60CA1B62FF06B43AED9C3CD6D4B2F3 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mAFD4D08EBA60CA1B62FF06B43AED9C3CD6D4B2F3_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mAFD4D08EBA60CA1B62FF06B43AED9C3CD6D4B2F3_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::Equals(MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_Equals_m49E691E268E8996616A9BA9E85983707394C2DD6 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_other, const RuntimeMethod* method) 
{
	{
		// return
		//     ReferenceEquals(Name, other.Name)
		//     && ReferenceEquals(ProviderType, other.ProviderType)
		//     && ReferenceEquals(SubsystemTypeOverride, other.SubsystemTypeOverride);
		String_t* L_0;
		L_0 = AccessibilitySubsystemCinfo_get_Name_m7BA15E44E11886098AA8EA821FA2B0D8CA6D3F69_inline(__this, NULL);
		String_t* L_1;
		L_1 = AccessibilitySubsystemCinfo_get_Name_m7BA15E44E11886098AA8EA821FA2B0D8CA6D3F69_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(String_t*)L_1))))
		{
			goto IL_002e;
		}
	}
	{
		Type_t* L_2;
		L_2 = AccessibilitySubsystemCinfo_get_ProviderType_m4B965C0720F4FCAB71FDE2E1BF4432847A0E1C1B_inline(__this, NULL);
		Type_t* L_3;
		L_3 = AccessibilitySubsystemCinfo_get_ProviderType_m4B965C0720F4FCAB71FDE2E1BF4432847A0E1C1B_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_2) == ((RuntimeObject*)(Type_t*)L_3))))
		{
			goto IL_002e;
		}
	}
	{
		Type_t* L_4;
		L_4 = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m8C9D503648BE2A02681BF586F56DCCE002B3DEAF_inline(__this, NULL);
		Type_t* L_5;
		L_5 = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m8C9D503648BE2A02681BF586F56DCCE002B3DEAF_inline((&___0_other), NULL);
		return (bool)((((RuntimeObject*)(Type_t*)L_4) == ((RuntimeObject*)(Type_t*)L_5))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AccessibilitySubsystemCinfo_Equals_m49E691E268E8996616A9BA9E85983707394C2DD6_AdjustorThunk (RuntimeObject* __this, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_other, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	bool _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_Equals_m49E691E268E8996616A9BA9E85983707394C2DD6(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_Equals_m1BD3A23EAD9C33D50355D94B6FA45A727D8CFC42 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return (obj is AccessibilitySubsystemCinfo cinfo) && Equals(cinfo);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*)((AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*)(AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*)UnBox(L_1, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_il2cpp_TypeInfo_var))));
		AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB L_2 = V_0;
		bool L_3;
		L_3 = AccessibilitySubsystemCinfo_Equals_m49E691E268E8996616A9BA9E85983707394C2DD6(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AccessibilitySubsystemCinfo_Equals_m1BD3A23EAD9C33D50355D94B6FA45A727D8CFC42_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	bool _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_Equals_m1BD3A23EAD9C33D50355D94B6FA45A727D8CFC42(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::op_Equality(MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo,MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_op_Equality_m131E9119C6C3C0DF060F5E0444BE0B869E61BFA1 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_lhs, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___1_rhs, const RuntimeMethod* method) 
{
	{
		// return lhs.Equals(rhs);
		AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB L_0 = ___1_rhs;
		bool L_1;
		L_1 = AccessibilitySubsystemCinfo_Equals_m49E691E268E8996616A9BA9E85983707394C2DD6((&___0_lhs), L_0, NULL);
		return L_1;
	}
}
// System.Boolean MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::op_Inequality(MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo,MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_op_Inequality_m36D213EFE52BFE6EAD556389AB9F43AB8DEC3F44 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_lhs, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___1_rhs, const RuntimeMethod* method) 
{
	{
		// return !(lhs == rhs);
		AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB L_0 = ___0_lhs;
		AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB L_1 = ___1_rhs;
		bool L_2;
		L_2 = AccessibilitySubsystemCinfo_op_Equality_m131E9119C6C3C0DF060F5E0444BE0B869E61BFA1(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AccessibilitySubsystemCinfo_GetHashCode_mB84786CBF53EF4A9B060D109E71B73C705B7FF09 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		// throw new ApplicationException("Do not hash subsystem descriptors as keys.");
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_0 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0514B8E4342F7B936BE02120037C20832C1C2F20)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccessibilitySubsystemCinfo_GetHashCode_mB84786CBF53EF4A9B060D109E71B73C705B7FF09_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  int32_t AccessibilitySubsystemCinfo_GetHashCode_mB84786CBF53EF4A9B060D109E71B73C705B7FF09_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_GetHashCode_mB84786CBF53EF4A9B060D109E71B73C705B7FF09(_thisAdjusted, method);
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
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::.ctor(MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor__ctor_m1017F1BFFE0F471C44F9E8DCDCCD8EA52866279E (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_accessibilitySubsystemCinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_m550CA2FD8B49E27F199025B8D00180D0CBA5BD70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AccessibilitySubsystemDescriptor(AccessibilitySubsystemCinfo accessibilitySubsystemCinfo)
		SubsystemDescriptorWithProvider_2__ctor_m550CA2FD8B49E27F199025B8D00180D0CBA5BD70(__this, SubsystemDescriptorWithProvider_2__ctor_m550CA2FD8B49E27F199025B8D00180D0CBA5BD70_RuntimeMethod_var);
		// Name = accessibilitySubsystemCinfo.Name;
		String_t* L_0;
		L_0 = AccessibilitySubsystemCinfo_get_Name_m7BA15E44E11886098AA8EA821FA2B0D8CA6D3F69_inline((&___0_accessibilitySubsystemCinfo), NULL);
		AccessibilitySubsystemDescriptor_set_Name_mEFFA92DCB7010EF0D62CFA93CF66C7FE89995A35(__this, L_0, NULL);
		// DisplayName = accessibilitySubsystemCinfo.DisplayName;
		String_t* L_1;
		L_1 = AccessibilitySubsystemCinfo_get_DisplayName_m1C3CADDFDDFF05FF5E06B578B817C79ECEE3A964_inline((&___0_accessibilitySubsystemCinfo), NULL);
		AccessibilitySubsystemDescriptor_set_DisplayName_m229717C0C39B818FA4640EF6BBE1A62F32F172E8_inline(__this, L_1, NULL);
		// Author = accessibilitySubsystemCinfo.Author;
		String_t* L_2;
		L_2 = AccessibilitySubsystemCinfo_get_Author_mB23C2F600D79473293FE3F4DDE478668EE588665_inline((&___0_accessibilitySubsystemCinfo), NULL);
		AccessibilitySubsystemDescriptor_set_Author_m591A68F34AC959997975F6C2C35C4F7B9995E675_inline(__this, L_2, NULL);
		// ProviderType = accessibilitySubsystemCinfo.ProviderType;
		Type_t* L_3;
		L_3 = AccessibilitySubsystemCinfo_get_ProviderType_m4B965C0720F4FCAB71FDE2E1BF4432847A0E1C1B_inline((&___0_accessibilitySubsystemCinfo), NULL);
		AccessibilitySubsystemDescriptor_set_ProviderType_mAFC2AE75ADD111813929CB2345C459A474CEF14A(__this, L_3, NULL);
		// SubsystemTypeOverride = accessibilitySubsystemCinfo.SubsystemTypeOverride;
		Type_t* L_4;
		L_4 = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m8C9D503648BE2A02681BF586F56DCCE002B3DEAF_inline((&___0_accessibilitySubsystemCinfo), NULL);
		AccessibilitySubsystemDescriptor_set_SubsystemTypeOverride_m42CE8C9FDCEC0043F91A21D048593EA54C13AB9E(__this, L_4, NULL);
		// }
		return;
	}
}
// System.String MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemDescriptor_get_Name_m108F199A1FF05C30E863E0AF62C461B1F72AFC58 (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get => id; set => id = value; }
		String_t* L_0;
		L_0 = SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_inline(__this, NULL);
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Name_mEFFA92DCB7010EF0D62CFA93CF66C7FE89995A35 (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get => id; set => id = value; }
		String_t* L_0 = ___0_value;
		SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline(__this, L_0, NULL);
		return;
	}
}
// System.String MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemDescriptor_get_DisplayName_m57EB1603CD462F798F8FE303DFA65313FEBE8885 (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_DisplayName_m229717C0C39B818FA4640EF6BBE1A62F32F172E8 (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDisplayNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_Author()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemDescriptor_get_Author_mB979A9783295A2FB593430FECB605A09265BAEC3 (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = __this->___U3CAuthorU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_Author(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Author_m591A68F34AC959997975F6C2C35C4F7B9995E675 (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CAuthorU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Type MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_ConfigType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemDescriptor_get_ConfigType_m4135BDC70C4E0D1F9CDBAE6E649DAED4E6ACA0D0 (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = __this->___U3CConfigTypeU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_ConfigType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_ConfigType_m0C210B6EB04EC932CADFC2DDBF0F52F613DCC5F1 (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CConfigTypeU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigTypeU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Type MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_ProviderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemDescriptor_get_ProviderType_m4B7348F17EC306A651B8C1ADB36C1D2D75F535BB (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get => providerType; set => providerType = value; }
		Type_t* L_0;
		L_0 = SubsystemDescriptorWithProvider_get_providerType_m1ED8F898361B508FFE2A46D05E81CEAC43B040D4_inline(__this, NULL);
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_ProviderType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_ProviderType_mAFC2AE75ADD111813929CB2345C459A474CEF14A (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get => providerType; set => providerType = value; }
		Type_t* L_0 = ___0_value;
		SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline(__this, L_0, NULL);
		return;
	}
}
// System.Type MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_SubsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemDescriptor_get_SubsystemTypeOverride_m20ABACBB65F37D963EF6D5E83D3BC4991A04CD1D (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get => subsystemTypeOverride; set => subsystemTypeOverride = value; }
		Type_t* L_0;
		L_0 = SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mCE84F1611CB09975FBB4BE48E015316ADDB52668_inline(__this, NULL);
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_SubsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_SubsystemTypeOverride_m42CE8C9FDCEC0043F91A21D048593EA54C13AB9E (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get => subsystemTypeOverride; set => subsystemTypeOverride = value; }
		Type_t* L_0 = ___0_value;
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline(__this, L_0, NULL);
		return;
	}
}
// MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::Create(MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* AccessibilitySubsystemDescriptor_Create_m13D5FA518F88AFBC27B603EFD3E2DAE6AC11B4D9 (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_TisProvider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A_mFC88ADC53CB14101995C34E0BF2BD65E6791BB9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral680D5F85FF107897716444439FE6176166BED070);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!XRSubsystemHelpers.CheckTypes<AccessibilitySubsystem, AccessibilitySubsystem.Provider>(cinfo.Name,
		//                                                                                   cinfo.SubsystemTypeOverride,
		//                                                                                   cinfo.ProviderType))
		String_t* L_0;
		L_0 = AccessibilitySubsystemCinfo_get_Name_m7BA15E44E11886098AA8EA821FA2B0D8CA6D3F69_inline((&___0_cinfo), NULL);
		Type_t* L_1;
		L_1 = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m8C9D503648BE2A02681BF586F56DCCE002B3DEAF_inline((&___0_cinfo), NULL);
		Type_t* L_2;
		L_2 = AccessibilitySubsystemCinfo_get_ProviderType_m4B965C0720F4FCAB71FDE2E1BF4432847A0E1C1B_inline((&___0_cinfo), NULL);
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_TisProvider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A_mFC88ADC53CB14101995C34E0BF2BD65E6791BB9D(L_0, L_1, L_2, XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_TisProvider_t6B89658FF42BACD2F4C91E0ABFF9D2DA6DE3D60A_mFC88ADC53CB14101995C34E0BF2BD65E6791BB9D_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		// throw new ArgumentException("Could not create AccessibilitySubsystemDescriptor.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B158F9A3667630BBA0D7A4DB24E6105065433E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccessibilitySubsystemDescriptor_Create_m13D5FA518F88AFBC27B603EFD3E2DAE6AC11B4D9_RuntimeMethod_var)));
	}

IL_0027:
	{
		// Debug.Log("Successfully created new descriptor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral680D5F85FF107897716444439FE6176166BED070, NULL);
		// return new AccessibilitySubsystemDescriptor(cinfo);
		AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB L_5 = ___0_cinfo;
		AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* L_6 = (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1*)il2cpp_codegen_object_new(AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AccessibilitySubsystemDescriptor__ctor_m1017F1BFFE0F471C44F9E8DCDCCD8EA52866279E(L_6, L_5, NULL);
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
// System.Void MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKAccessibilitySubsystem_Register_m0F566F665ED6C57F7BAD01365A89C6B9280BF700 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F_TisAccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_m9FED92F08254D85C3BCB0B4D0ACA8E0CA4E04998_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA48C0F16E39A46C469EC5BB4DA73F02A7D84D8E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE528A64618644524EC116F5E5BB24B0B6C94B55F);
		s_Il2CppMethodInitialized = true;
	}
	AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cinfo = XRSubsystemHelpers.ConstructCinfo<MRTKAccessibilitySubsystem, AccessibilitySubsystemCinfo>();
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB L_0;
		L_0 = XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F_TisAccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_m9FED92F08254D85C3BCB0B4D0ACA8E0CA4E04998(XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F_TisAccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB_m9FED92F08254D85C3BCB0B4D0ACA8E0CA4E04998_RuntimeMethod_var);
		V_0 = L_0;
		// if (!AccessibilitySubsystem.Register(cinfo))
		AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB L_1 = V_0;
		bool L_2;
		L_2 = AccessibilitySubsystem_Register_m7FE164349E7F04D107D53BCBBCEB5E34695239D3(L_1, NULL);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		// Debug.LogError($"Failed to register the {cinfo.Name} subsystem.");
		String_t* L_3;
		L_3 = AccessibilitySubsystemCinfo_get_Name_m7BA15E44E11886098AA8EA821FA2B0D8CA6D3F69_inline((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralA48C0F16E39A46C469EC5BB4DA73F02A7D84D8E7, L_3, _stringLiteralE528A64618644524EC116F5E5BB24B0B6C94B55F, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKAccessibilitySubsystem__ctor_m23BF63985FE6DA3D03B73405678CF49497478C48 (MRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F* __this, const RuntimeMethod* method) 
{
	{
		AccessibilitySubsystem__ctor_m346280A1856D314E104FD4688F97D970CB692AE6(__this, NULL);
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
// MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::get_Config()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* AccessibilityProvider_get_Config_m8BDDBA8D863454381F67C1D5AB92E2BFF20CFD1D (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, const RuntimeMethod* method) 
{
	{
		// protected AccessibilitySubsystemConfig Config { get; }
		AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* L_0 = __this->___U3CConfigU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider__ctor_m0020981F2558A0FF492DA062EB70726E1E65E1B3 (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC921F0A6E3AEDBFBCFB8814339BAE1322DD2ABDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3_TisMRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F_mC0212D83AED30A16AD3BD0C9812DB75CF94FBCC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<AccessibleObjectClassification, List<GameObject>> accessibleObjects =
		//     new Dictionary<AccessibleObjectClassification, List<GameObject>>();
		Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* L_0 = (Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E*)il2cpp_codegen_object_new(Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC921F0A6E3AEDBFBCFB8814339BAE1322DD2ABDC(L_0, Dictionary_2__ctor_mC921F0A6E3AEDBFBCFB8814339BAE1322DD2ABDC_RuntimeMethod_var);
		__this->___accessibleObjects_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accessibleObjects_2), (void*)L_0);
		// public AccessibilityProvider() : base()
		Provider__ctor_mB4F3702935FBE59EE119EECC559DEAFB0BFDA904(__this, NULL);
		// Config = XRSubsystemHelpers.GetConfiguration<AccessibilitySubsystemConfig, MRTKAccessibilitySubsystem>();
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* L_1;
		L_1 = XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3_TisMRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F_mC0212D83AED30A16AD3BD0C9812DB75CF94FBCC1(XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3_TisMRTKAccessibilitySubsystem_t18CB758CAB0BD6C5DDC4115125641F7EBAA8018F_mC0212D83AED30A16AD3BD0C9812DB75CF94FBCC1_RuntimeMethod_var);
		__this->___U3CConfigU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigU3Ek__BackingField_1), (void*)L_1);
		// invertTextColor = Config.InvertTextColor;
		AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* L_2;
		L_2 = AccessibilityProvider_get_Config_m8BDDBA8D863454381F67C1D5AB92E2BFF20CFD1D_inline(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = AccessibilitySubsystemConfig_get_InvertTextColor_m99AE5F060B8439274802FCFEC0695DAC12C2CB40_inline(L_2, NULL);
		__this->___invertTextColor_3 = L_3;
		// }
		return;
	}
}
// System.Boolean MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::TryGetAccessibleObjects(System.Collections.Generic.List`1<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>,MixedReality.Toolkit.Accessibility.AccessibleObjectVisibility,System.Single,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_TryGetAccessibleObjects_m67921EE44A66E5A277C091CD61CDB0EB10D7413A (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* ___0_classifications, int32_t ___1_visibility, float ___2_maxDistance, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___3_accessibleObjectsList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral906F379A3EDE20E3AEF88CF2F80715B39D89684B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (maxDistance <= 0)
		float L_0 = ___2_maxDistance;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError("The distance from the camera to the objects cannot be less than or equal to zero.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral906F379A3EDE20E3AEF88CF2F80715B39D89684B, NULL);
		// return false;
		return (bool)0;
	}

IL_0014:
	{
		// accessibleObjectsList.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = ___3_accessibleObjectsList;
		NullCheck(L_1);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_1, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// AssembleAccessibleObjects(classifications, accessibleObjectsList);
		List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* L_2 = ___0_classifications;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = ___3_accessibleObjectsList;
		AccessibilityProvider_AssembleAccessibleObjects_m4D306FFD496179B967A3339305B4C69F9E6AFB0D(__this, L_2, L_3, NULL);
		// FilterAccessibleObjects(visibility, maxDistance, accessibleObjectsList);
		int32_t L_4 = ___1_visibility;
		float L_5 = ___2_maxDistance;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = ___3_accessibleObjectsList;
		AccessibilityProvider_FilterAccessibleObjects_m01D01B98B708732F7B9773926F456645BCC12AE5(__this, L_4, L_5, L_6, NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::TryGetAccessibleObjectClassifications(System.Collections.Generic.List`1<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_TryGetAccessibleObjectClassifications_mC0AD9F54B336AFF785258B98F163692EF2495E6B (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* ___0_classifications, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m7B5DDF7BCC66529C9DC6E9C39BAD534182492AD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m3452DB888275C4F2F551F5EA575B97E5BD7E077C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC8BB955AE59B04F0EAF93471507EEE766D066516_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// classifications.Clear();
		List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* L_0 = ___0_classifications;
		NullCheck(L_0);
		List_1_Clear_mC8BB955AE59B04F0EAF93471507EEE766D066516_inline(L_0, List_1_Clear_mC8BB955AE59B04F0EAF93471507EEE766D066516_RuntimeMethod_var);
		// classifications.AddRange(accessibleObjects.Keys);
		List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* L_1 = ___0_classifications;
		Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* L_2 = __this->___accessibleObjects_2;
		NullCheck(L_2);
		KeyCollection_tF1DFF34D6882A27E9FE9CBAF10A79F298D6BEC85* L_3;
		L_3 = Dictionary_2_get_Keys_m7B5DDF7BCC66529C9DC6E9C39BAD534182492AD8(L_2, Dictionary_2_get_Keys_m7B5DDF7BCC66529C9DC6E9C39BAD534182492AD8_RuntimeMethod_var);
		NullCheck(L_1);
		List_1_AddRange_m3452DB888275C4F2F551F5EA575B97E5BD7E077C(L_1, L_3, List_1_AddRange_m3452DB888275C4F2F551F5EA575B97E5BD7E077C_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Boolean MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::TryRegisterAccessibleObject(UnityEngine.GameObject,MixedReality.Toolkit.Accessibility.AccessibleObjectClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_TryRegisterAccessibleObject_mADBBEAF93FC3144E35C8EA8FD3807BA0B294EFE0 (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_accessibleObject, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ___1_classification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m257B8C90C41CB522B5A2D24FFF4676471FE46B33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m25BEAB34BCA70DF90CF8FFB48C90F4356C816B0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mB8994FB01D5326868F236A779F2DF4E5BAC10D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4FEC06045F10D0643E3EB6DBBFB57844CDF58166_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF04637E81CF819EBD5975E53102C923C17FFB3E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m658804DB42C0652E5963E8B12A95415AA17257ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tD8640BD3EEEC2043D69EE193D0BF9F8569B458D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mDFB5AD8B638E6EF2679CFAF9138B32296E811497_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral281033B411A2723B0C82F6B48AC1E70FEB902A11);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// foreach (IList<GameObject> list in accessibleObjects.Values)
		Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* L_0 = __this->___accessibleObjects_2;
		NullCheck(L_0);
		ValueCollection_tAE64CCEC60B5F147734777C2F91A95E9FDE4C7A7* L_1;
		L_1 = Dictionary_2_get_Values_mB8994FB01D5326868F236A779F2DF4E5BAC10D7A(L_0, Dictionary_2_get_Values_mB8994FB01D5326868F236A779F2DF4E5BAC10D7A_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_tAFB46C81D6CE3638BC27A7CB79EE6033BA6D14A6 L_2;
		L_2 = ValueCollection_GetEnumerator_mDFB5AD8B638E6EF2679CFAF9138B32296E811497(L_1, ValueCollection_GetEnumerator_mDFB5AD8B638E6EF2679CFAF9138B32296E811497_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4FEC06045F10D0643E3EB6DBBFB57844CDF58166((&V_0), Enumerator_Dispose_m4FEC06045F10D0643E3EB6DBBFB57844CDF58166_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003b_1;
			}

IL_0013_1:
			{
				// foreach (IList<GameObject> list in accessibleObjects.Values)
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3;
				L_3 = Enumerator_get_Current_m658804DB42C0652E5963E8B12A95415AA17257ED_inline((&V_0), Enumerator_get_Current_m658804DB42C0652E5963E8B12A95415AA17257ED_RuntimeMethod_var);
				// if (list.Contains(accessibleObject))
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_accessibleObject;
				NullCheck(L_3);
				bool L_5;
				L_5 = InterfaceFuncInvoker1< bool, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::Contains(T) */, ICollection_1_tD8640BD3EEEC2043D69EE193D0BF9F8569B458D6_il2cpp_TypeInfo_var, L_3, L_4);
				if (!L_5)
				{
					goto IL_003b_1;
				}
			}
			{
				// Debug.LogError($"{accessibleObject.name} has already been registered as a accessible object");
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___0_accessibleObject;
				NullCheck(L_6);
				String_t* L_7;
				L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
				String_t* L_8;
				L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, _stringLiteral281033B411A2723B0C82F6B48AC1E70FEB902A11, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_8, NULL);
				// return false;
				V_1 = (bool)0;
				goto IL_0087;
			}

IL_003b_1:
			{
				// foreach (IList<GameObject> list in accessibleObjects.Values)
				bool L_9;
				L_9 = Enumerator_MoveNext_mF04637E81CF819EBD5975E53102C923C17FFB3E1((&V_0), Enumerator_MoveNext_mF04637E81CF819EBD5975E53102C923C17FFB3E1_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0054;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		// if (!accessibleObjects.ContainsKey(classification))
		Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* L_10 = __this->___accessibleObjects_2;
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_11 = ___1_classification;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_ContainsKey_m25BEAB34BCA70DF90CF8FFB48C90F4356C816B0B(L_10, L_11, Dictionary_2_ContainsKey_m25BEAB34BCA70DF90CF8FFB48C90F4356C816B0B_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_0073;
		}
	}
	{
		// accessibleObjects.Add(classification, new List<GameObject>());
		Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* L_13 = __this->___accessibleObjects_2;
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_14 = ___1_classification;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_15 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_15, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		NullCheck(L_13);
		Dictionary_2_Add_m257B8C90C41CB522B5A2D24FFF4676471FE46B33(L_13, L_14, L_15, Dictionary_2_Add_m257B8C90C41CB522B5A2D24FFF4676471FE46B33_RuntimeMethod_var);
	}

IL_0073:
	{
		// accessibleObjects[classification].Add(accessibleObject);
		Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* L_16 = __this->___accessibleObjects_2;
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_17 = ___1_classification;
		NullCheck(L_16);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_18;
		L_18 = Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E(L_16, L_17, Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = ___0_accessibleObject;
		NullCheck(L_18);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_18, L_19, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_0087:
	{
		// }
		bool L_20 = V_1;
		return L_20;
	}
}
// System.Boolean MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::TryUnregisterAccessibleObject(UnityEngine.GameObject,MixedReality.Toolkit.Accessibility.AccessibleObjectClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_TryUnregisterAccessibleObject_m04DF8D869FAF13C99917FE3F667A488FE518696E (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_accessibleObject, AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* ___1_classification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D2CD097CFAA0461035A19E2C6115F54219A6EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9DAA516D37F8A67FD590A557B2B18E7B9BC8F7C);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_0 = NULL;
	{
		// List<GameObject> objCollection = accessibleObjects[classification];
		Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* L_0 = __this->___accessibleObjects_2;
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_1 = ___1_classification;
		NullCheck(L_0);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2;
		L_2 = Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E(L_0, L_1, Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E_RuntimeMethod_var);
		V_0 = L_2;
		// if (!objCollection.Contains(accessibleObject))
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_accessibleObject;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384(L_3, L_4, List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError($"{accessibleObject.name} has not been registered as a accessible object of classification {classification}");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___0_accessibleObject;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_8 = ___1_classification;
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral52D2CD097CFAA0461035A19E2C6115F54219A6EE, L_7, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_9, NULL);
		// return false;
		return (bool)0;
	}

IL_002e:
	{
		// if (!objCollection.Remove(accessibleObject))
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = ___0_accessibleObject;
		NullCheck(L_10);
		bool L_12;
		L_12 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_10, L_11, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_004f;
		}
	}
	{
		// Debug.LogError($"Failed to unregister {accessibleObject.name} as a accessible object of classification {classification}");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = ___0_accessibleObject;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_15 = ___1_classification;
		String_t* L_16;
		L_16 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralE9DAA516D37F8A67FD590A557B2B18E7B9BC8F7C, L_14, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_16, NULL);
		// return false;
		return (bool)0;
	}

IL_004f:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::AssembleAccessibleObjects(System.Collections.Generic.List`1<MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_AssembleAccessibleObjects_m4D306FFD496179B967A3339305B4C69F9E6AFB0D (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* ___0_classifications, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___1_accessibleObjectsList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m75297E7D08AE3AB13BC9E9B5B217CFD43E463FB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m04143F3DAE9E0837982BEE60843B7B78C168BE6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m571AAB121D0C10985A7C3A783461745D9DA3FE9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5FBB6B16664449B594EE92438FDAFBF6A89BADF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF V_0;
	memset((&V_0), 0, sizeof(V_0));
	AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* V_1 = NULL;
	{
		// foreach (AccessibleObjectClassification classification in classifications)
		List_1_t3F33A8B72EA0ADD649C3EDDA8DCA89789DEBA09C* L_0 = ___0_classifications;
		NullCheck(L_0);
		Enumerator_t05887FF31BF2F9C1E8DF40C9EF6915337EDEE6DF L_1;
		L_1 = List_1_GetEnumerator_m5FBB6B16664449B594EE92438FDAFBF6A89BADF4(L_0, List_1_GetEnumerator_m5FBB6B16664449B594EE92438FDAFBF6A89BADF4_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m75297E7D08AE3AB13BC9E9B5B217CFD43E463FB0((&V_0), Enumerator_Dispose_m75297E7D08AE3AB13BC9E9B5B217CFD43E463FB0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0023_1;
			}

IL_0009_1:
			{
				// foreach (AccessibleObjectClassification classification in classifications)
				AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_2;
				L_2 = Enumerator_get_Current_m571AAB121D0C10985A7C3A783461745D9DA3FE9C_inline((&V_0), Enumerator_get_Current_m571AAB121D0C10985A7C3A783461745D9DA3FE9C_RuntimeMethod_var);
				V_1 = L_2;
				// accessibleObjectsList.AddRange(accessibleObjects[classification]);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = ___1_accessibleObjectsList;
				Dictionary_2_tE1D19D0AA81D718342812CD900CBF4D4C298AF8E* L_4 = __this->___accessibleObjects_2;
				AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_5 = V_1;
				NullCheck(L_4);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6;
				L_6 = Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E(L_4, L_5, Dictionary_2_get_Item_m78CDA8E556C6471CCE4A2F137898CDD00DED974E_RuntimeMethod_var);
				NullCheck(L_3);
				List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C(L_3, L_6, List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C_RuntimeMethod_var);
			}

IL_0023_1:
			{
				// foreach (AccessibleObjectClassification classification in classifications)
				bool L_7;
				L_7 = Enumerator_MoveNext_m04143F3DAE9E0837982BEE60843B7B78C168BE6D((&V_0), Enumerator_MoveNext_m04143F3DAE9E0837982BEE60843B7B78C168BE6D_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_003c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::FilterAccessibleObjects(MixedReality.Toolkit.Accessibility.AccessibleObjectVisibility,System.Single,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_FilterAccessibleObjects_m01D01B98B708732F7B9773926F456645BCC12AE5 (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, int32_t ___0_visibility, float ___1_maxDistance, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___2_objectList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFOVChecker_t3475E4E43D873C7B11A8E76B124E52979A7D9A8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mFF30CBE3C429844CF584BAC596EDAF7B49398705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (objectList.Count == 0) { return; }
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = ___2_objectList;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		// if (objectList.Count == 0) { return; }
		return;
	}

IL_0009:
	{
		// float maxDistanceSquared = maxDistance * maxDistance;
		float L_2 = ___1_maxDistance;
		float L_3 = ___1_maxDistance;
		V_0 = ((float)il2cpp_codegen_multiply(L_2, L_3));
		// for (int i = (objectList.Count - 1); i != 0; i--)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = ___2_objectList;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_4, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0084;
	}

IL_0018:
	{
		// GameObject obj = objectList[i];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = ___2_objectList;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_6, L_7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		V_2 = L_8;
		// if (!obj.TryGetComponent<Collider>(out Collider collider))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_2;
		NullCheck(L_9);
		bool L_10;
		L_10 = GameObject_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mFF30CBE3C429844CF584BAC596EDAF7B49398705(L_9, (&V_3), GameObject_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mFF30CBE3C429844CF584BAC596EDAF7B49398705_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		// objectList.Remove(obj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = ___2_objectList;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_2;
		NullCheck(L_11);
		bool L_13;
		L_13 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_11, L_12, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// continue;
		goto IL_0080;
	}

IL_0034:
	{
		// if ((visibility == AccessibleObjectVisibility.FieldOfView) &&
		//     !CameraFOVChecker.IsInFOVCached(Camera.main, collider))
		int32_t L_14 = ___0_visibility;
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_004d;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15;
		L_15 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_16 = V_3;
		il2cpp_codegen_runtime_class_init_inline(CameraFOVChecker_t3475E4E43D873C7B11A8E76B124E52979A7D9A8E_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = CameraFOVChecker_IsInFOVCached_m79438798C0A3B4D4ECDE161D0FE45E8040925D69(L_15, L_16, NULL);
		if (L_17)
		{
			goto IL_004d;
		}
	}
	{
		// objectList.Remove(obj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_18 = ___2_objectList;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_2;
		NullCheck(L_18);
		bool L_20;
		L_20 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_18, L_19, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
	}

IL_004d:
	{
		// if (maxDistanceSquared < (Camera.main.transform.position - obj.transform.position).sqrMagnitude)
		float L_21 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22;
		L_22 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_2;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_24, L_27, NULL);
		V_4 = L_28;
		float L_29;
		L_29 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_4), NULL);
		if ((!(((float)L_21) < ((float)L_29))))
		{
			goto IL_0080;
		}
	}
	{
		// objectList.Remove(obj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_30 = ___2_objectList;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_2;
		NullCheck(L_30);
		bool L_32;
		L_32 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_30, L_31, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
	}

IL_0080:
	{
		// for (int i = (objectList.Count - 1); i != 0; i--)
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
	}

IL_0084:
	{
		// for (int i = (objectList.Count - 1); i != 0; i--)
		int32_t L_34 = V_1;
		if (L_34)
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::get_InvertTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_get_InvertTextColor_m4F336978C34357FCED9CB6A54F185D91D7FFC9D5 (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, const RuntimeMethod* method) 
{
	{
		// get => invertTextColor;
		bool L_0 = __this->___invertTextColor_3;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::set_InvertTextColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_set_InvertTextColor_m04C2EC54685752849AA4A411E87B578D3C27E201 (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// if (invertTextColor != value)
		bool L_0 = __this->___invertTextColor_3;
		bool L_1 = ___0_value;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		// invertTextColor = value;
		bool L_2 = ___0_value;
		__this->___invertTextColor_3 = L_2;
		// RaiseInvertTextColorChanged(invertTextColor);
		bool L_3 = __this->___invertTextColor_3;
		AccessibilityProvider_RaiseInvertTextColorChanged_m5E307665E29899B75B3C499B4D3F562352276EFD(__this, L_3, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::add_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_add_InvertTextColorChanged_mEB9186F820E19B45A3FAA7F741622B988D65B60A (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___InvertTextColorChanged_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C**)(&__this->___InvertTextColorChanged_4);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::remove_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_remove_InvertTextColorChanged_m7AEA6C526CBB774EF0336657D8850A1105242404 (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___InvertTextColorChanged_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C**)(&__this->___InvertTextColorChanged_4);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::ApplyTextColorInversion(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_ApplyTextColorInversion_m2D8F40A570E02BC19079C1AB87FE27C32594D006 (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, bool ___1_enable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilityUtilities_tFAA889699821BD03A832D5E3343203DEC9016D1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AccessibilityUtilities.SetTextColorInversion(material, enable);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_material;
		bool L_1 = ___1_enable;
		il2cpp_codegen_runtime_class_init_inline(AccessibilityUtilities_tFAA889699821BD03A832D5E3343203DEC9016D1A_il2cpp_TypeInfo_var);
		AccessibilityUtilities_SetTextColorInversion_m19C6890F04D0E38F637826C326A0EA858FB65B89(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::RaiseInvertTextColorChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_RaiseInvertTextColorChanged_m5E307665E29899B75B3C499B4D3F562352276EFD (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, bool ___0_invert, const RuntimeMethod* method) 
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B1_0 = NULL;
	{
		// InvertTextColorChanged?.Invoke(invert);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___InvertTextColorChanged_4;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = L_0;
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
		bool L_2 = ___0_invert;
		NullCheck(G_B2_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B2_0, L_2, NULL);
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
// MixedReality.Toolkit.Accessibility.AccessibilitySubsystem MixedReality.Toolkit.Accessibility.AccessibilityHelpers::get_Subsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* AccessibilityHelpers_get_Subsystem_m8466FB86B3BFD4EA6466F7769B26434D4B66F31D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_mD714530B0B5CD3126DE804405E74629F8684E56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (subsystem == null || !subsystem.running)
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_0 = ((AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_StaticFields*)il2cpp_codegen_static_fields_for(AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_il2cpp_TypeInfo_var))->___subsystem_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_1 = ((AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_StaticFields*)il2cpp_codegen_static_fields_for(AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_il2cpp_TypeInfo_var))->___subsystem_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}

IL_0013:
	{
		// subsystem = XRSubsystemHelpers.GetFirstRunningSubsystem<AccessibilitySubsystem>();
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_3;
		L_3 = XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_mD714530B0B5CD3126DE804405E74629F8684E56D(XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_mD714530B0B5CD3126DE804405E74629F8684E56D_RuntimeMethod_var);
		((AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_StaticFields*)il2cpp_codegen_static_fields_for(AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_il2cpp_TypeInfo_var))->___subsystem_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_StaticFields*)il2cpp_codegen_static_fields_for(AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_il2cpp_TypeInfo_var))->___subsystem_0), (void*)L_3);
	}

IL_001d:
	{
		// return subsystem;
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_4 = ((AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_StaticFields*)il2cpp_codegen_static_fields_for(AccessibilityHelpers_t8CFD641C8E88DFC48B4AB10FB6785970B773D6CE_il2cpp_TypeInfo_var))->___subsystem_0;
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
// MixedReality.Toolkit.Accessibility.AccessibleObjectClassification MixedReality.Toolkit.Accessibility.AccessibleObject::get_Classification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* AccessibleObject_get_Classification_mE14955800BCBC287221DD48936ED165C111773C5 (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	{
		// public AccessibleObjectClassification Classification => classification;
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_0 = __this->___classification_4;
		return L_0;
	}
}
// System.String MixedReality.Toolkit.Accessibility.AccessibleObject::get_Contents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibleObject_get_Contents_m27ECB0EBC4211B43CCFD6A922EC8D60BC411FB7F (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	{
		// public string Contents => contents;
		String_t* L_0 = __this->___contents_5;
		return L_0;
	}
}
// System.String MixedReality.Toolkit.Accessibility.AccessibleObject::get_ContentSummary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibleObject_get_ContentSummary_m723AB41CF10D816CB79DB6FDEF560C471D56605B (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	{
		// public string ContentSummary => contentSummary;
		String_t* L_0 = __this->___contentSummary_6;
		return L_0;
	}
}
// System.String MixedReality.Toolkit.Accessibility.AccessibleObject::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibleObject_get_Description_m96070B2D092B09619AA5CC49B93FA5D1FD0A7816 (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	{
		// public string Description => description;
		String_t* L_0 = __this->___description_7;
		return L_0;
	}
}
// System.String MixedReality.Toolkit.Accessibility.AccessibleObject::get_Instructions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibleObject_get_Instructions_m963213A4B8F837A4FE436107FB69E4AEDB21AAFC (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	{
		// public string Instructions => instructions;
		String_t* L_0 = __this->___instructions_8;
		return L_0;
	}
}
// System.Boolean MixedReality.Toolkit.Accessibility.AccessibleObject::get_IsContextuallyRelevant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibleObject_get_IsContextuallyRelevant_m07209CE1974DF35F5EAD42341AF255EDB0A69F8F (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	{
		// get => isContextuallyRelevant;
		bool L_0 = __this->___isContextuallyRelevant_9;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibleObject::set_IsContextuallyRelevant(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibleObject_set_IsContextuallyRelevant_mFDE11FBE963EC227751C1910DF01615884887F5A (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => isContextuallyRelevant = value;
		bool L_0 = ___0_value;
		__this->___isContextuallyRelevant_9 = L_0;
		return;
	}
}
// MixedReality.Toolkit.Accessibility.ObjectRole MixedReality.Toolkit.Accessibility.AccessibleObject::get_Role()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* AccessibleObject_get_Role_m4AE204E1839B72460A2908B89E606A6041A95739 (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	{
		// public ObjectRole Role => role;
		ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* L_0 = __this->___role_10;
		return L_0;
	}
}
// System.String MixedReality.Toolkit.Accessibility.AccessibleObject::get_Semantic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibleObject_get_Semantic_mC9AA86F63D64997EEBDC9FE4BF117E6590CCE305 (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	{
		// public string Semantic => semantic;
		String_t* L_0 = __this->___semantic_11;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibleObject::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibleObject_OnEnable_m6EF12CDB7D95437AB6803FDFC4BA880177A60C7D (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FA4353F2CBCCACE1A1F98B3C3F3738127E492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2714B1EC52279442F9A3B7ED93239624B9226A15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACBDBFBF2CD1DAF969EC64771234F755CFEFF59A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((AccessibilityHelpers.Subsystem == null) && !suppressSubsystemNotFound)
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_0;
		L_0 = AccessibilityHelpers_get_Subsystem_m8466FB86B3BFD4EA6466F7769B26434D4B66F31D(NULL);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		bool L_1 = ((AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675_StaticFields*)il2cpp_codegen_static_fields_for(AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675_il2cpp_TypeInfo_var))->___suppressSubsystemNotFound_12;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogWarning("The accessibility subsystem is not enabled or has not yet started.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral2714B1EC52279442F9A3B7ED93239624B9226A15, NULL);
		// suppressSubsystemNotFound = true;
		((AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675_StaticFields*)il2cpp_codegen_static_fields_for(AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675_il2cpp_TypeInfo_var))->___suppressSubsystemNotFound_12 = (bool)1;
		// return;
		return;
	}

IL_001f:
	{
		// if (!AccessibilityHelpers.Subsystem.TryRegisterAccessibleObject(gameObject, Classification))
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_2;
		L_2 = AccessibilityHelpers_get_Subsystem_m8466FB86B3BFD4EA6466F7769B26434D4B66F31D(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_4;
		L_4 = AccessibleObject_get_Classification_mE14955800BCBC287221DD48936ED165C111773C5_inline(__this, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = AccessibilitySubsystem_TryRegisterAccessibleObject_m24998FD8667A149D174B9C776075464815A9513B(L_2, L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0056;
		}
	}
	{
		// Debug.LogError($"Failed to register {gameObject.name} with the accessibility subsystem.");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralACBDBFBF2CD1DAF969EC64771234F755CFEFF59A, L_7, _stringLiteral0B0FA4353F2CBCCACE1A1F98B3C3F3738127E492, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_8, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibleObject::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibleObject_OnDisable_mE4BCDDBB6753DA473F5069396BE730607452EB0D (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FA4353F2CBCCACE1A1F98B3C3F3738127E492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8731F4AEB28CD3592CFFC1849F528FCA9738497);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (AccessibilityHelpers.Subsystem == null) { return; }
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_0;
		L_0 = AccessibilityHelpers_get_Subsystem_m8466FB86B3BFD4EA6466F7769B26434D4B66F31D(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (AccessibilityHelpers.Subsystem == null) { return; }
		return;
	}

IL_0008:
	{
		// if (!AccessibilityHelpers.Subsystem.TryUnregisterAccessibleObject(gameObject, Classification))
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_1;
		L_1 = AccessibilityHelpers_get_Subsystem_m8466FB86B3BFD4EA6466F7769B26434D4B66F31D(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_3;
		L_3 = AccessibleObject_get_Classification_mE14955800BCBC287221DD48936ED165C111773C5_inline(__this, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = AccessibilitySubsystem_TryUnregisterAccessibleObject_m5D1040D28B0933C42D3C7202DD6023ED44661059(L_1, L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_003f;
		}
	}
	{
		// Debug.LogError($"Failed to unregister {gameObject.name} with the accessibility subsystem.");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralA8731F4AEB28CD3592CFFC1849F528FCA9738497, L_6, _stringLiteral0B0FA4353F2CBCCACE1A1F98B3C3F3738127E492, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_7, NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibleObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibleObject__ctor_mAEC10C1F8046C57177544C7BB67A3D9435C0707F (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string contents = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___contents_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___contents_5), (void*)L_0);
		// private string contentSummary = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___contentSummary_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___contentSummary_6), (void*)L_1);
		// private string description = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___description_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___description_7), (void*)L_2);
		// private string instructions = string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___instructions_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instructions_8), (void*)L_3);
		// private bool isContextuallyRelevant = true;
		__this->___isContextuallyRelevant_9 = (bool)1;
		// private string semantic = string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___semantic_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___semantic_11), (void*)L_4);
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
// System.String MixedReality.Toolkit.Accessibility.AccessibleObjectClassification::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibleObjectClassification_get_Description_m709C493BC5E105750D3B7CAA0D6B1070599CC2FE (AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* __this, const RuntimeMethod* method) 
{
	{
		// public string Description { get; set; }
		String_t* L_0 = __this->___U3CDescriptionU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibleObjectClassification::set_Description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibleObjectClassification_set_Description_mEA7CB3B0F2B87E5B6FBA4C15B2135DE5985C3862 (AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Description { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDescriptionU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptionU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.AccessibleObjectClassification::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibleObjectClassification__ctor_m233263924006168CB81ED260398AD43CA878680F (AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.String MixedReality.Toolkit.Accessibility.ObjectRole::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectRole_get_Description_m7CCD8CB9FA67D715C4EC8B8931BEDF35F0F660FF (ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* __this, const RuntimeMethod* method) 
{
	{
		// get => description;
		String_t* L_0 = __this->___description_4;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.ObjectRole::set_Description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRole_set_Description_m567BBDCEDF41A6880B9C57D9EE8C87C1FD971693 (ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => description = value;
		String_t* L_0 = ___0_value;
		__this->___description_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___description_4), (void*)L_0);
		return;
	}
}
// System.String MixedReality.Toolkit.Accessibility.ObjectRole::get_FormalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectRole_get_FormalName_m03EBDB609BFB607EAC7251DE77E5352339CDB07D (ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* __this, const RuntimeMethod* method) 
{
	{
		// get => formalName;
		String_t* L_0 = __this->___formalName_5;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.ObjectRole::set_FormalName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRole_set_FormalName_mDDEE164704C44EF2B44F40359A66B8815E4BDD50 (ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => formalName = value;
		String_t* L_0 = ___0_value;
		__this->___formalName_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___formalName_5), (void*)L_0);
		return;
	}
}
// System.Boolean MixedReality.Toolkit.Accessibility.ObjectRole::get_IsAria()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectRole_get_IsAria_m87C34CC41242ADC7FCAA920DD8A5BCF7CA02427C (ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* __this, const RuntimeMethod* method) 
{
	{
		// get => isAria;
		bool L_0 = __this->___isAria_6;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.ObjectRole::set_IsAria(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRole_set_IsAria_mDBFAEF3268695EEDFD32976924570AF30E613213 (ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => isAria = value;
		bool L_0 = ___0_value;
		__this->___isAria_6 = L_0;
		return;
	}
}
// System.String MixedReality.Toolkit.Accessibility.ObjectRole::get_ReferenceLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectRole_get_ReferenceLink_m321D03977C3FB544090A26861D16FA72AA132E46 (ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* __this, const RuntimeMethod* method) 
{
	{
		// get => referenceLink;
		String_t* L_0 = __this->___referenceLink_7;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.ObjectRole::set_ReferenceLink(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRole_set_ReferenceLink_m38EC44FE2798DBCC69972B098AE899D46340459B (ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => referenceLink = value;
		String_t* L_0 = ___0_value;
		__this->___referenceLink_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___referenceLink_7), (void*)L_0);
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.ObjectRole::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRole__ctor_mB8E6DFD3F1DD869D4BE23BA7F8A354427CD4691F (ObjectRole_tA769A97007F1FAAC073D12B94CDBD0CED6743438* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Single MixedReality.Toolkit.Accessibility.ScreenReaderObjectSettings::get_MaxObjectDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScreenReaderObjectSettings_get_MaxObjectDistance_mA58E718ACDFE20B00E3ADD91718049E11E2BF78E (ScreenReaderObjectSettings_t2BF065764D49859C4497D5B07DAE75AAD36F33F8* __this, const RuntimeMethod* method) 
{
	{
		// get => maxObjectDistance;
		float L_0 = __this->___maxObjectDistance_0;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.ScreenReaderObjectSettings::set_MaxObjectDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenReaderObjectSettings_set_MaxObjectDistance_m81B85D106D5A0A2B835404DC093615C08223B64D (ScreenReaderObjectSettings_t2BF065764D49859C4497D5B07DAE75AAD36F33F8* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => maxObjectDistance = value;
		float L_0 = ___0_value;
		__this->___maxObjectDistance_0 = L_0;
		return;
	}
}
// MixedReality.Toolkit.Accessibility.ScreenReaderSpatializationOption MixedReality.Toolkit.Accessibility.ScreenReaderObjectSettings::get_SpatializationOption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScreenReaderObjectSettings_get_SpatializationOption_mD5B0A33AD034CC0C90C2AFB92F1EF1A63594BF42 (ScreenReaderObjectSettings_t2BF065764D49859C4497D5B07DAE75AAD36F33F8* __this, const RuntimeMethod* method) 
{
	{
		// get => spatializationOption;
		int32_t L_0 = __this->___spatializationOption_1;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.ScreenReaderObjectSettings::set_SpatializationOption(MixedReality.Toolkit.Accessibility.ScreenReaderSpatializationOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenReaderObjectSettings_set_SpatializationOption_m03E3CBAEA769E3B019808063FACE69CC11B44526 (ScreenReaderObjectSettings_t2BF065764D49859C4497D5B07DAE75AAD36F33F8* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => spatializationOption = value;
		int32_t L_0 = ___0_value;
		__this->___spatializationOption_1 = L_0;
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.ScreenReaderObjectSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenReaderObjectSettings__ctor_mB333B317B81FC3F22D8E29C700B2544C40C2C39F (ScreenReaderObjectSettings_t2BF065764D49859C4497D5B07DAE75AAD36F33F8* __this, const RuntimeMethod* method) 
{
	{
		// private float maxObjectDistance = float.PositiveInfinity;
		__this->___maxObjectDistance_0 = (std::numeric_limits<float>::infinity());
		// private ScreenReaderSpatializationOption spatializationOption = ScreenReaderSpatializationOption.Full;
		__this->___spatializationOption_1 = 1;
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
// System.Void MixedReality.Toolkit.Accessibility.TextAccessibility::ApplyInitialConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_ApplyInitialConfiguration_m73BF0385F2DD0C456533D77AE83F394390DB8110 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) 
{
	{
		// OnInvertTextColorChanged(accessibilitySubsystem.InvertTextColor);
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_0 = __this->___accessibilitySubsystem_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = AccessibilitySubsystem_get_InvertTextColor_m206C55094D228501FDA32608D19A28C43BFC49EB(L_0, NULL);
		TextAccessibility_OnInvertTextColorChanged_mEEF10C7F41CF47AC730D187DF1436CAD6918347E(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.TextAccessibility::GetTextMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_GetTextMaterial_m0AC087D72AD6D0CEEA584A36A46F5E4CDA734FC4 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m56A0C11CF03EEBE9218C3AC9957362AAFF155090_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC059A8FD08BCE672BF2CB48A49B7329B485F3ED8);
		s_Il2CppMethodInitialized = true;
	}
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* V_0 = NULL;
	{
		// if (TryGetComponent(out TMP_Text tmpText))
		bool L_0;
		L_0 = Component_TryGetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m56A0C11CF03EEBE9218C3AC9957362AAFF155090(__this, (&V_0), Component_TryGetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m56A0C11CF03EEBE9218C3AC9957362AAFF155090_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// material = tmpText.fontMaterial;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = V_0;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = TMP_Text_get_fontMaterial_m4EBEC9AF78B5B66C983A98F78948E753EE4DDFC6(L_1, NULL);
		__this->___material_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material_5), (void*)L_2);
		// return;
		return;
	}

IL_0017:
	{
		// Debug.LogError($"{nameof(TextAccessibility)} requires being attached to a TextMeshPro or TextMeshProUGUI object");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC059A8FD08BCE672BF2CB48A49B7329B485F3ED8, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.TextAccessibility::OnInvertTextColorChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnInvertTextColorChanged_mEEF10C7F41CF47AC730D187DF1436CAD6918347E (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, bool ___0_invert, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* G_B4_0 = NULL;
	AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* G_B3_0 = NULL;
	{
		// if (material == null) { return; }
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___material_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (material == null) { return; }
		return;
	}

IL_000f:
	{
		// accessibilitySubsystem?.ApplyTextColorInversion(material, invert);
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_2 = __this->___accessibilitySubsystem_4;
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___material_5;
		bool L_5 = ___0_invert;
		NullCheck(G_B4_0);
		AccessibilitySubsystem_ApplyTextColorInversion_m6B180E6AB65DBB48A8342DA6F6F4167BD25A3456(G_B4_0, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.TextAccessibility::RegisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_RegisterHandlers_m7E7F67229CF6733C845E16746610FA53242D0164 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAccessibility_OnInvertTextColorChanged_mEEF10C7F41CF47AC730D187DF1436CAD6918347E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (accessibilitySubsystem != null)
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_0 = __this->___accessibilitySubsystem_4;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// ApplyInitialConfiguration();
		TextAccessibility_ApplyInitialConfiguration_m73BF0385F2DD0C456533D77AE83F394390DB8110(__this, NULL);
		// accessibilitySubsystem.InvertTextColorChanged += OnInvertTextColorChanged;
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_1 = __this->___accessibilitySubsystem_4;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_2, __this, (intptr_t)((void*)TextAccessibility_OnInvertTextColorChanged_mEEF10C7F41CF47AC730D187DF1436CAD6918347E_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AccessibilitySubsystem_add_InvertTextColorChanged_mF0E4A5552620BE1379B3E706BBF47ED428D0840D(L_1, L_2, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.TextAccessibility::UnregisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_UnregisterHandlers_m188E90F2E90DD44E7EE4D4EA2D69F49B8EAFEFB5 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAccessibility_OnInvertTextColorChanged_mEEF10C7F41CF47AC730D187DF1436CAD6918347E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (accessibilitySubsystem != null)
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_0 = __this->___accessibilitySubsystem_4;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// accessibilitySubsystem.InvertTextColorChanged -= OnInvertTextColorChanged;
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_1 = __this->___accessibilitySubsystem_4;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_2, __this, (intptr_t)((void*)TextAccessibility_OnInvertTextColorChanged_mEEF10C7F41CF47AC730D187DF1436CAD6918347E_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AccessibilitySubsystem_remove_InvertTextColorChanged_m9F5AC71049A7230CBC69804770211B7715E90E35(L_1, L_2, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.TextAccessibility::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_Start_mF7B79076E3F6C8EB2840229A2EBA49F8EEECA075 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_mD714530B0B5CD3126DE804405E74629F8684E56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetTextMaterial();
		TextAccessibility_GetTextMaterial_m0AC087D72AD6D0CEEA584A36A46F5E4CDA734FC4(__this, NULL);
		// accessibilitySubsystem = XRSubsystemHelpers.GetFirstRunningSubsystem<AccessibilitySubsystem>();
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582* L_0;
		L_0 = XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_mD714530B0B5CD3126DE804405E74629F8684E56D(XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582_mD714530B0B5CD3126DE804405E74629F8684E56D_RuntimeMethod_var);
		__this->___accessibilitySubsystem_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accessibilitySubsystem_4), (void*)L_0);
		// RegisterHandlers();
		TextAccessibility_RegisterHandlers_m7E7F67229CF6733C845E16746610FA53242D0164(__this, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.TextAccessibility::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnEnable_mC4060921EEDE2F6BA5E5FF0EAE564B94503CE0DC (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) 
{
	{
		// RegisterHandlers();
		TextAccessibility_RegisterHandlers_m7E7F67229CF6733C845E16746610FA53242D0164(__this, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.TextAccessibility::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnDisable_m70B475CC2DF016B0E9B515F9FDF0BA50039FFEC0 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) 
{
	{
		// UnregisterHandlers();
		TextAccessibility_UnregisterHandlers_m188E90F2E90DD44E7EE4D4EA2D69F49B8EAFEFB5(__this, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.TextAccessibility::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnDestroy_mAC4981D53463CC9DA32932E77FFA42B4FD807DD1 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) 
{
	{
		// accessibilitySubsystem = null;
		__this->___accessibilitySubsystem_4 = (AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accessibilitySubsystem_4), (void*)(AccessibilitySubsystem_t26A604A92BAA7AB49AE390E0005A789720443582*)NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Accessibility.TextAccessibility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility__ctor_m882353A18F335F527D55EAE958FA54196B298B63 (TextAccessibility_t6BF564AD435E02350F6019627AB366FB8E54F126* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Name_m7BA15E44E11886098AA8EA821FA2B0D8CA6D3F69_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Name_m54B2AAF7136105A464C28A65A767850BCC9D28DE_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_DisplayName_m1C3CADDFDDFF05FF5E06B578B817C79ECEE3A964_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_DisplayName_mF4B2888EB0B9CC079304C763202B433B9B64C08C_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDisplayNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Author_mB23C2F600D79473293FE3F4DDE478668EE588665_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = __this->___U3CAuthorU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Author_m4A54DBB53320F9B0799D1C0004DAE344C8D878CA_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CAuthorU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ConfigType_m5825C91DED37520EE451694F04D3017425F362D9_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = __this->___U3CConfigTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ConfigType_m1C88D3720C41C9FC6119AF8E9CA16CF0D2A5A314_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CConfigTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ProviderType_m4B965C0720F4FCAB71FDE2E1BF4432847A0E1C1B_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get; set; }
		Type_t* L_0 = __this->___U3CProviderTypeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ProviderType_mCDC3B7F3086F0A22F733146CD575C502735ECF7F_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CProviderTypeU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProviderTypeU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m8C9D503648BE2A02681BF586F56DCCE002B3DEAF_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mAFD4D08EBA60CA1B62FF06B43AED9C3CD6D4B2F3_inline (AccessibilitySubsystemCinfo_tCF25C9AEB9158D1CCC734DBF683F94EF917F3FAB* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_DisplayName_m229717C0C39B818FA4640EF6BBE1A62F32F172E8_inline (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDisplayNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Author_m591A68F34AC959997975F6C2C35C4F7B9995E675_inline (AccessibilitySubsystemDescriptor_t366293770CE03F66419FAB2461E0D33BCE4CDCF1* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CAuthorU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	{
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_providerType_m1ED8F898361B508FFE2A46D05E81CEAC43B040D4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	{
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mCE84F1611CB09975FBB4BE48E015316ADDB52668_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	{
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* AccessibilityProvider_get_Config_m8BDDBA8D863454381F67C1D5AB92E2BFF20CFD1D_inline (AccessibilityProvider_tED15C3EB0977856F8B4828DFCAD18A7ED3AF6716* __this, const RuntimeMethod* method) 
{
	{
		// protected AccessibilitySubsystemConfig Config { get; }
		AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* L_0 = __this->___U3CConfigU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AccessibilitySubsystemConfig_get_InvertTextColor_m99AE5F060B8439274802FCFEC0695DAC12C2CB40_inline (AccessibilitySubsystemConfig_t04BF4C96175B11A0C996CDD69CA75C82A8B645C3* __this, const RuntimeMethod* method) 
{
	{
		// get => invertTextColor;
		bool L_0 = __this->___invertTextColor_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrunningU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* AccessibleObject_get_Classification_mE14955800BCBC287221DD48936ED165C111773C5_inline (AccessibleObject_t0223569CC040AD2AB2F90BEAE62CEA22CC0F9675* __this, const RuntimeMethod* method) 
{
	{
		// public AccessibleObjectClassification Classification => classification;
		AccessibleObjectClassification_t48AAC4E76C1D9AA7E8CFB11F30B54DC795646ED9* L_0 = __this->___classification_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____currentValue_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
