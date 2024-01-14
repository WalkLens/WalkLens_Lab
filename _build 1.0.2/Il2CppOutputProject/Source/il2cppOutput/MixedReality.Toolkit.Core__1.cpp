#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>
struct Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct IEqualityComparer_1_tABFD2A1DC92D481E3305F7D5D79F6A3E8BAD7E74;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// MixedReality.Toolkit.Experimental.InteractableChildrenEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,MixedReality.Toolkit.Experimental.IXRHoverInteractableChild>
struct InteractableChildrenEventRoute_2_t8AFA881E22597242060DEEE94BCF5FFE662E87DB;
// MixedReality.Toolkit.Experimental.InteractableChildrenEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,MixedReality.Toolkit.Experimental.IXRSelectInteractableChild>
struct InteractableChildrenEventRoute_2_t61991304B0321B5393A8B02E0B41363C4B32F398;
// MixedReality.Toolkit.Experimental.InteractableChildrenEventRoute`2<System.Object,System.Object>
struct InteractableChildrenEventRoute_2_t80096136FEA80884A323042FC4A2D8B7B57037E6;
// MixedReality.Toolkit.Experimental.InteractableParentEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,MixedReality.Toolkit.Experimental.IXRHoverInteractableParent>
struct InteractableParentEventRoute_2_t69B13003F009725088AA5CFED19BE2B5D71A8241;
// MixedReality.Toolkit.Experimental.InteractableParentEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,MixedReality.Toolkit.Experimental.IXRSelectInteractableParent>
struct InteractableParentEventRoute_2_t09E79049F98A012F93D48FA5E88FCE2BE7C73E14;
// MixedReality.Toolkit.Experimental.InteractableParentEventRoute`2<System.Object,System.Object>
struct InteractableParentEventRoute_2_tC41403C7AAA886A4F4FEC2C39D6F62442473D270;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Events.UnityEvent>
struct KeyCollection_tA5D83626E94476B72233AEBF8B28119789B11BF5;
// System.Collections.Generic.List`1<MixedReality.Toolkit.Experimental.IXRHoverInteractableChild>
struct List_1_t0EDBE0B8167D1BC41E1232990FD505E888F86F25;
// System.Collections.Generic.List`1<MixedReality.Toolkit.Experimental.IXRHoverInteractableParent>
struct List_1_t6CA9CBEAD882FB319848F81B62FBF9560516B767;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810;
// System.Collections.Generic.List`1<MixedReality.Toolkit.Experimental.IXRSelectInteractableChild>
struct List_1_tF38CF145FBD36E5661038F9F440144AE109728B8;
// System.Collections.Generic.List`1<MixedReality.Toolkit.Experimental.IXRSelectInteractableParent>
struct List_1_tDD9A5C7D03B349538E9381D03809AC29A729EF33;
// System.Collections.Generic.List`1<MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource>
struct List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>
struct MRTKSubsystemDescriptor_2_tEDCD147CAD9CFDCE805395B64CDBB6B4B44E0610;
// MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<System.Object,System.Object>
struct MRTKSubsystemDescriptor_2_tCB36B72992831AA9632D121580044E167EDC4035;
// MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct MRTKSubsystemDescriptor_2_tBDC1E6BBAAC968B45C750090B2ECD749E3D2F15F;
// MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem>
struct MRTKSubsystemProvider_1_t3CB0FAE6020049C184445926AA2E23AB24D02C70;
// MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<System.Object>
struct MRTKSubsystemProvider_1_tC08188F41A5C4CC25C7CA1DC3A76C6D9DE5290D6;
// MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem>
struct MRTKSubsystemProvider_1_t6458250D792973A2BBA855A5EA53ADA6D2E1C75B;
// MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<System.Object,System.Object,System.Object>
struct MRTKSubsystem_3_tC6F5612EAD44F0EC50AF80375D83C3337116F6A8;
// MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct MRTKSubsystem_3_t74E3150011B22C8A54539CCE251C9E3392FB82CE;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct SubsystemWithProvider_3_t5BFC5359C606B0EE6356E2F03F8270C5AD866551;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Events.UnityEvent>
struct ValueCollection_t84AFA3A44C85FFD072F03475AD4B0D3807856675;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Events.UnityEvent>[]
struct EntryU5BU5D_tF1FC7CDF24F7984E8306D27CC309980FDD2E392B;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>[]
struct SlotU5BU5D_tB2D4C64645D1D1222164FC007D3A34C8BEF61A1B;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable[]
struct IXRInteractableU5BU5D_t15C3B0839294519BE8D32AF8738AA20F78721704;
// MixedReality.Toolkit.Experimental.IXRInteractableEventRoute[]
struct IXRInteractableEventRouteU5BU5D_t331148B96794E8C965E823457E7485938E758EA8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource[]
struct InteractableEventRouterChildSourceU5BU5D_tEB8EB1CB6BCB46BE9D43EDEAC20B44C143D28C30;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// MixedReality.Toolkit.Experimental.BubbleChildHoverEvents
struct BubbleChildHoverEvents_t054E2B1D5B8B94625554910C34DEF7EF0E671F2F;
// MixedReality.Toolkit.Experimental.BubbleChildSelectEvents
struct BubbleChildSelectEvents_t1D72A25522D070F527C1EBB95E11315CB5CD7245;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs
struct HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs
struct HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable
struct IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD;
// MixedReality.Toolkit.Experimental.IXRHoverInteractableChild
struct IXRHoverInteractableChild_tF68C380106FC974B4295D9AB1F0EA2C925ED2F12;
// MixedReality.Toolkit.Experimental.IXRHoverInteractableParent
struct IXRHoverInteractableParent_t6FB3A3A722B91C5CD9B7B470009340B3DD459953;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable
struct IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA;
// MixedReality.Toolkit.Experimental.IXRInteractableEventRoute
struct IXRInteractableEventRoute_t5237B2DC58868E7168F078A45539648FED42176E;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractor
struct IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735;
// MixedReality.Toolkit.Experimental.IXRSelectInteractableChild
struct IXRSelectInteractableChild_tE674FA6E51E26665F2AAAE5B1380135A829F82E2;
// MixedReality.Toolkit.Experimental.IXRSelectInteractableParent
struct IXRSelectInteractableParent_t9202DD3B596CA2827F74C960A781DE6A55C2590D;
// MixedReality.Toolkit.Experimental.InteractableEventRouter
struct InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356;
// MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource
struct InteractableEventRouterChildSource_t477444515B8E2CF4D986567BF53CEA53ADDF3155;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo
struct KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E;
// MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor
struct KeywordRecognitionSubsystemDescriptor_t9429CB51C79BA89EFF1526814D23E80FCE7310B2;
// MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo
struct MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem
struct TextToSpeechSubsystem_tC04EB828E65D903691C16C7C56FEAECBD621D41B;
// MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo
struct TextToSpeechSubsystemCinfo_t214AD1AE0E918C25D1765B4DFE56072C349F97F3;
// MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor
struct TextToSpeechSubsystemDescriptor_t2F56416FDADA9CA1871E27EADE9505B69B491D5A;
// MixedReality.Toolkit.Experimental.TrickleChildHoverEvents
struct TrickleChildHoverEvents_t217FAA998A81F103C791939E674B6FCD3562E28E;
// MixedReality.Toolkit.Experimental.TrickleChildSelectEvents
struct TrickleChildSelectEvents_tFACC244834FE1C3FA1FE50F096E8EDEAE4D01C32;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider
struct Provider_tFF34A6EEFB6B79057EC02EA0F1586F2526ECDF13;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider
struct Provider_tB4060FF5D728869B74F33231A2DDB686F100DE9B;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRHoverInteractableChild_tF68C380106FC974B4295D9AB1F0EA2C925ED2F12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRHoverInteractableParent_t6FB3A3A722B91C5CD9B7B470009340B3DD459953_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRInteractableEventRoute_t5237B2DC58868E7168F078A45539648FED42176E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRSelectInteractableChild_tE674FA6E51E26665F2AAAE5B1380135A829F82E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRSelectInteractableParent_t9202DD3B596CA2827F74C960A781DE6A55C2590D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeywordRecognitionSubsystemDescriptor_t9429CB51C79BA89EFF1526814D23E80FCE7310B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MRTKSubsystem_3_t74E3150011B22C8A54539CCE251C9E3392FB82CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextToSpeechSubsystemDescriptor_t2F56416FDADA9CA1871E27EADE9505B69B491D5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral33B1E25D03A60D4D52E409FD3171FF658C3AB9F9;
IL2CPP_EXTERN_C String_t* _stringLiteral5542C2C12376B62727BB20CE9C9B84E76ACD561B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisIXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_mDBA9EDBBC4FA0776A4908B6DF27F624BEBF8A13C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisInteractableEventRouterChildSource_t477444515B8E2CF4D986567BF53CEA53ADDF3155_m6ABAE2ACD42B5368774E71200104CDFE22A7B5CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9404CABBDD206B28449279E04821FD0D1BA6C5A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_mCED08157F9BBECF5C9781943201B246ACF5F2921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m321F26D964CAFF6263B06C83093EA9741D907815_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractableChildrenEventRoute_2__ctor_m2D020850E8339485A299506C229759B09CAB4E54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractableChildrenEventRoute_2__ctor_mA0433B97D69BE55967294C7CCF06E5883293585A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractableEventRouter_ConnectAllEventRoutesToInteractables_m17430702BF2F4610ACA1106F2E919EC22C9E6285_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractableParentEventRoute_2__ctor_m982DC347358DD656B75A5740293F3B67581C33F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractableParentEventRoute_2__ctor_mA56CF2692998A4F6A2A7FED280C1B3A02B84D767_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeywordRecognitionSubsystemDescriptor_Create_m0BB24F91A11434D414D8FCA0123A8AC8DFD60F7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m43D76283B6313F754581B7B5D2678A7C90AF04A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m247BF28F8A1F9F3EE681A1BBDFD364F19947AB7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m78556E9A69C21307B337D4F6F8FE0466CE37C39D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m813E4C01FA736EBD8792E6296BAA5143C5D59F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDBE25C642B9DBA94E11A7BA62481277AEC77B033_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystemDescriptor_2__ctor_m38179AA1220C2F8DCE0753AE0182A958B963EC24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystemDescriptor_2__ctor_m50373FCE07665C2FDC46CB1855051CE8ADF7D09D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystemProvider_1__ctor_m2E917E84C117E12DE9FC6F2981F9980B2CC9DD27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystemProvider_1__ctor_m3DF9BDF78565DE51CF46B1097D66EB7AB9C53F98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystem_3__ctor_mBBC3C9877D1BFC6656A6C1767F28655A9F5A801C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_mC6AE1FDBEF5D8A5EC9E42CA7C071867B9B1A8319_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextToSpeechSubsystemDescriptor_Create_m9467B37E606190A0E9245595771C17E45733E0B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_CheckTypes_TisKeywordRecognitionSubsystem_t457F66CE8995D7969E3C850E3525F8A5D8248AA6_TisProvider_tFF34A6EEFB6B79057EC02EA0F1586F2526ECDF13_m31FDD807EDE0F8780A94F9ACC9E6A94DD25A4D2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_CheckTypes_TisTextToSpeechSubsystem_tC04EB828E65D903691C16C7C56FEAECBD621D41B_TisProvider_tB4060FF5D728869B74F33231A2DDB686F100DE9B_mE8F97725B7554AF8A23FDCCC1F13F49DEF2ADC49_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IXRInteractableEventRouteU5BU5D_t331148B96794E8C965E823457E7485938E758EA8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>
struct Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF1FC7CDF24F7984E8306D27CC309980FDD2E392B* ____entries_1;
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
	KeyCollection_tA5D83626E94476B72233AEBF8B28119789B11BF5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t84AFA3A44C85FFD072F03475AD4B0D3807856675* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tB2D4C64645D1D1222164FC007D3A34C8BEF61A1B* ____slots_8;
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

// MixedReality.Toolkit.Experimental.InteractableEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,MixedReality.Toolkit.Experimental.IXRHoverInteractableChild>
struct InteractableEventRoute_2_tF1917FF13974D465985BF5280D54B2F3072CC82E  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> MixedReality.Toolkit.Experimental.InteractableEventRoute`2::targets
	List_1_t0EDBE0B8167D1BC41E1232990FD505E888F86F25* ___targets_0;
};

// MixedReality.Toolkit.Experimental.InteractableEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,MixedReality.Toolkit.Experimental.IXRHoverInteractableParent>
struct InteractableEventRoute_2_t3910534631FE1317BBDDA753E182E72E595ADBA6  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> MixedReality.Toolkit.Experimental.InteractableEventRoute`2::targets
	List_1_t6CA9CBEAD882FB319848F81B62FBF9560516B767* ___targets_0;
};

// MixedReality.Toolkit.Experimental.InteractableEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,MixedReality.Toolkit.Experimental.IXRSelectInteractableChild>
struct InteractableEventRoute_2_tBD9EEF0D876D991E3B317136B3F59FAAACB838E6  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> MixedReality.Toolkit.Experimental.InteractableEventRoute`2::targets
	List_1_tF38CF145FBD36E5661038F9F440144AE109728B8* ___targets_0;
};

// MixedReality.Toolkit.Experimental.InteractableEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,MixedReality.Toolkit.Experimental.IXRSelectInteractableParent>
struct InteractableEventRoute_2_t01CE1D0603E831FDCB5833696E5A4AEF702BFD74  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> MixedReality.Toolkit.Experimental.InteractableEventRoute`2::targets
	List_1_tDD9A5C7D03B349538E9381D03809AC29A729EF33* ___targets_0;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IXRInteractableU5BU5D_t15C3B0839294519BE8D32AF8738AA20F78721704* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource>
struct List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InteractableEventRouterChildSourceU5BU5D_tEB8EB1CB6BCB46BE9D43EDEAC20B44C143D28C30* ____items_1;
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

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t33099492FF1973CC6EE9A96E30EEDB9D88CB234B  : public RuntimeObject
{
};

// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
struct BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactorObject>k__BackingField
	RuntimeObject* ___U3CinteractorObjectU3Ek__BackingField_0;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactableObject>k__BackingField
	RuntimeObject* ___U3CinteractableObjectU3Ek__BackingField_1;
};

// MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo
struct MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898  : public RuntimeObject
{
	// System.String MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_1;
	// System.String MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::<Author>k__BackingField
	String_t* ___U3CAuthorU3Ek__BackingField_2;
	// System.Type MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::<ConfigType>k__BackingField
	Type_t* ___U3CConfigTypeU3Ek__BackingField_3;
	// System.Type MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::<ProviderType>k__BackingField
	Type_t* ___U3CProviderTypeU3Ek__BackingField_4;
	// System.Type MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::<SubsystemTypeOverride>k__BackingField
	Type_t* ___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// MixedReality.Toolkit.Experimental.InteractableChildrenEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,MixedReality.Toolkit.Experimental.IXRHoverInteractableChild>
struct InteractableChildrenEventRoute_2_t8AFA881E22597242060DEEE94BCF5FFE662E87DB  : public InteractableEventRoute_2_tF1917FF13974D465985BF5280D54B2F3072CC82E
{
};

// MixedReality.Toolkit.Experimental.InteractableChildrenEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,MixedReality.Toolkit.Experimental.IXRSelectInteractableChild>
struct InteractableChildrenEventRoute_2_t61991304B0321B5393A8B02E0B41363C4B32F398  : public InteractableEventRoute_2_tBD9EEF0D876D991E3B317136B3F59FAAACB838E6
{
};

// MixedReality.Toolkit.Experimental.InteractableParentEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,MixedReality.Toolkit.Experimental.IXRHoverInteractableParent>
struct InteractableParentEventRoute_2_t69B13003F009725088AA5CFED19BE2B5D71A8241  : public InteractableEventRoute_2_t3910534631FE1317BBDDA753E182E72E595ADBA6
{
};

// MixedReality.Toolkit.Experimental.InteractableParentEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,MixedReality.Toolkit.Experimental.IXRSelectInteractableParent>
struct InteractableParentEventRoute_2_t09E79049F98A012F93D48FA5E88FCE2BE7C73E14  : public InteractableEventRoute_2_t01CE1D0603E831FDCB5833696E5A4AEF702BFD74
{
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tFA5E4BF173F17FEEA455EDDFDD9E383105DBC0CE  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t57075B43871783E2C2BD5CAA5A9F9DC2FA59E9FB  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem>
struct SubsystemProvider_1_t6E2ABB576C95FCCE32DD8AF7C6339DC5F1CB33C9  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem>
struct SubsystemProvider_1_tE0DFA334DAD0160B26B4A5B41BC79013B8B30AD9  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
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

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct SubsystemWithProvider_3_t5BFC5359C606B0EE6356E2F03F8270C5AD866551  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	TextToSpeechSubsystemDescriptor_t2F56416FDADA9CA1871E27EADE9505B69B491D5A* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tB4060FF5D728869B74F33231A2DDB686F100DE9B* ___U3CproviderU3Ek__BackingField_3;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs
struct HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs
struct HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
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

// MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo
struct KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E  : public MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898
{
	// System.Boolean MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo::<IsCloudBased>k__BackingField
	bool ___U3CIsCloudBasedU3Ek__BackingField_6;
};

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
};

// MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo
struct TextToSpeechSubsystemCinfo_t214AD1AE0E918C25D1765B4DFE56072C349F97F3  : public MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898
{
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_t9AFB7E6B1816558F47483DF5D8788DFF68294749 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_t9AFB7E6B1816558F47483DF5D8788DFF68294749__padding[96];
	};
};

// MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>
struct MRTKSubsystemDescriptor_2_tEDCD147CAD9CFDCE805395B64CDBB6B4B44E0610  : public SubsystemDescriptorWithProvider_2_tFA5E4BF173F17FEEA455EDDFDD9E383105DBC0CE
{
	// System.String MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_3;
	// System.String MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2::<Author>k__BackingField
	String_t* ___U3CAuthorU3Ek__BackingField_4;
	// System.Type MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2::<ConfigType>k__BackingField
	Type_t* ___U3CConfigTypeU3Ek__BackingField_5;
};

// MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct MRTKSubsystemDescriptor_2_tBDC1E6BBAAC968B45C750090B2ECD749E3D2F15F  : public SubsystemDescriptorWithProvider_2_t57075B43871783E2C2BD5CAA5A9F9DC2FA59E9FB
{
	// System.String MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_3;
	// System.String MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2::<Author>k__BackingField
	String_t* ___U3CAuthorU3Ek__BackingField_4;
	// System.Type MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2::<ConfigType>k__BackingField
	Type_t* ___U3CConfigTypeU3Ek__BackingField_5;
};

// MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem>
struct MRTKSubsystemProvider_1_t3CB0FAE6020049C184445926AA2E23AB24D02C70  : public SubsystemProvider_1_t6E2ABB576C95FCCE32DD8AF7C6339DC5F1CB33C9
{
};

// MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem>
struct MRTKSubsystemProvider_1_t6458250D792973A2BBA855A5EA53ADA6D2E1C75B  : public SubsystemProvider_1_tE0DFA334DAD0160B26B4A5B41BC79013B8B30AD9
{
};

// MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct MRTKSubsystem_3_t74E3150011B22C8A54539CCE251C9E3392FB82CE  : public SubsystemWithProvider_3_t5BFC5359C606B0EE6356E2F03F8270C5AD866551
{
};

// MixedReality.Toolkit.Experimental.BubbleChildHoverEvents
struct BubbleChildHoverEvents_t054E2B1D5B8B94625554910C34DEF7EF0E671F2F  : public InteractableParentEventRoute_2_t69B13003F009725088AA5CFED19BE2B5D71A8241
{
};

// MixedReality.Toolkit.Experimental.BubbleChildSelectEvents
struct BubbleChildSelectEvents_t1D72A25522D070F527C1EBB95E11315CB5CD7245  : public InteractableParentEventRoute_2_t09E79049F98A012F93D48FA5E88FCE2BE7C73E14
{
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

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB  : public UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008
{
};

// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832  : public UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26
{
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

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0  : public UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8
{
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6  : public UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B
{
};

// MixedReality.Toolkit.Experimental.TrickleChildHoverEvents
struct TrickleChildHoverEvents_t217FAA998A81F103C791939E674B6FCD3562E28E  : public InteractableChildrenEventRoute_2_t8AFA881E22597242060DEEE94BCF5FFE662E87DB
{
};

// MixedReality.Toolkit.Experimental.TrickleChildSelectEvents
struct TrickleChildSelectEvents_tFACC244834FE1C3FA1FE50F096E8EDEAE4D01C32  : public InteractableChildrenEventRoute_2_t61991304B0321B5393A8B02E0B41363C4B32F398
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

// MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor
struct KeywordRecognitionSubsystemDescriptor_t9429CB51C79BA89EFF1526814D23E80FCE7310B2  : public MRTKSubsystemDescriptor_2_tEDCD147CAD9CFDCE805395B64CDBB6B4B44E0610
{
	// System.Boolean MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::<IsCloudBased>k__BackingField
	bool ___U3CIsCloudBasedU3Ek__BackingField_6;
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

// MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem
struct TextToSpeechSubsystem_tC04EB828E65D903691C16C7C56FEAECBD621D41B  : public MRTKSubsystem_3_t74E3150011B22C8A54539CCE251C9E3392FB82CE
{
};

// MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor
struct TextToSpeechSubsystemDescriptor_t2F56416FDADA9CA1871E27EADE9505B69B491D5A  : public MRTKSubsystemDescriptor_2_tBDC1E6BBAAC968B45C750090B2ECD749E3D2F15F
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider
struct Provider_tFF34A6EEFB6B79057EC02EA0F1586F2526ECDF13  : public MRTKSubsystemProvider_1_t3CB0FAE6020049C184445926AA2E23AB24D02C70
{
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent> MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider::keywordDictionary
	Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* ___keywordDictionary_1;
};

// MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider
struct Provider_tB4060FF5D728869B74F33231A2DDB686F100DE9B  : public MRTKSubsystemProvider_1_t6458250D792973A2BBA855A5EA53ADA6D2E1C75B
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E  : public MulticastDelegate_t
{
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

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// MixedReality.Toolkit.Experimental.InteractableEventRouter
struct InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> MixedReality.Toolkit.Experimental.InteractableEventRouter::activeInteractables
	HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* ___activeInteractables_4;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> MixedReality.Toolkit.Experimental.InteractableEventRouter::newInteractables
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___newInteractables_5;
	// System.Collections.Generic.List`1<MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource> MixedReality.Toolkit.Experimental.InteractableEventRouter::childSources
	List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2* ___childSources_6;
	// MixedReality.Toolkit.Experimental.IXRInteractableEventRoute[] MixedReality.Toolkit.Experimental.InteractableEventRouter::eventRoutes
	IXRInteractableEventRouteU5BU5D_t331148B96794E8C965E823457E7485938E758EA8* ___eventRoutes_7;
};

// MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource
struct InteractableEventRouterChildSource_t477444515B8E2CF4D986567BF53CEA53ADDF3155  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource::childrenChanged
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___childrenChanged_4;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>

// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>

// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>

// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IXRInteractableU5BU5D_t15C3B0839294519BE8D32AF8738AA20F78721704* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>

// System.Collections.Generic.List`1<MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource>
struct List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InteractableEventRouterChildSourceU5BU5D_tEB8EB1CB6BCB46BE9D43EDEAC20B44C143D28C30* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t33099492FF1973CC6EE9A96E30EEDB9D88CB234B_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::577BB66DB352A52651963484243DD20947F8819D4C6589BA449C17677806F41B
	__StaticArrayInitTypeSizeU3D96_t9AFB7E6B1816558F47483DF5D8788DFF68294749 ___577BB66DB352A52651963484243DD20947F8819D4C6589BA449C17677806F41B_0;
};

// <PrivateImplementationDetails>

// MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo

// MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemProvider

// UnityEngine.SubsystemsImplementation.SubsystemProvider

// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>

// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>

// MixedReality.Toolkit.Experimental.InteractableChildrenEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,MixedReality.Toolkit.Experimental.IXRHoverInteractableChild>

// MixedReality.Toolkit.Experimental.InteractableChildrenEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,MixedReality.Toolkit.Experimental.IXRHoverInteractableChild>

// MixedReality.Toolkit.Experimental.InteractableChildrenEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,MixedReality.Toolkit.Experimental.IXRSelectInteractableChild>

// MixedReality.Toolkit.Experimental.InteractableChildrenEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,MixedReality.Toolkit.Experimental.IXRSelectInteractableChild>

// MixedReality.Toolkit.Experimental.InteractableParentEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,MixedReality.Toolkit.Experimental.IXRHoverInteractableParent>

// MixedReality.Toolkit.Experimental.InteractableParentEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,MixedReality.Toolkit.Experimental.IXRHoverInteractableParent>

// MixedReality.Toolkit.Experimental.InteractableParentEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,MixedReality.Toolkit.Experimental.IXRSelectInteractableParent>

// MixedReality.Toolkit.Experimental.InteractableParentEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,MixedReality.Toolkit.Experimental.IXRSelectInteractableParent>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Boolean>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Boolean>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs

// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs

// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo

// MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs

// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs

// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs

// MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo

// MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96

// MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>

// MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>

// MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>

// MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>

// MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem>

// MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem>

// MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem>

// MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem>

// MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct MRTKSubsystem_3_t74E3150011B22C8A54539CCE251C9E3392FB82CE_StaticFields
{
	// Unity.Profiling.ProfilerMarker MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_4;
	// Unity.Profiling.ProfilerMarker MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::LateUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___LateUpdatePerfMarker_5;
	// Unity.Profiling.ProfilerMarker MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::FixedUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___FixedUpdatePerfMarker_6;
};

// MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>

// MixedReality.Toolkit.Experimental.BubbleChildHoverEvents

// MixedReality.Toolkit.Experimental.BubbleChildHoverEvents

// MixedReality.Toolkit.Experimental.BubbleChildSelectEvents

// MixedReality.Toolkit.Experimental.BubbleChildSelectEvents

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent

// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent

// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent

// MixedReality.Toolkit.Experimental.TrickleChildHoverEvents

// MixedReality.Toolkit.Experimental.TrickleChildHoverEvents

// MixedReality.Toolkit.Experimental.TrickleChildSelectEvents

// MixedReality.Toolkit.Experimental.TrickleChildSelectEvents

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor

// MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor

// MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem

// MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem

// MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor

// MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor

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

// MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider

// MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider

// MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider

// MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>

// System.ArgumentException

// System.ArgumentException

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// MixedReality.Toolkit.Experimental.InteractableEventRouter

// MixedReality.Toolkit.Experimental.InteractableEventRouter

// MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource

// MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// MixedReality.Toolkit.Experimental.IXRInteractableEventRoute[]
struct IXRInteractableEventRouteU5BU5D_t331148B96794E8C965E823457E7485938E758EA8  : public RuntimeArray
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemProvider_1__ctor_mBAE6618278D72569444010ECF6C9B01DDBD156E2_gshared (MRTKSubsystemProvider_1_tC08188F41A5C4CC25C7CA1DC3A76C6D9DE5290D6* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___0_value, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<System.Object,System.Object>::.ctor(MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemDescriptor_2__ctor_m9FFE06DC1528B6B734D8FA745AA8BE09AAD6954A_gshared (MRTKSubsystemDescriptor_2_tCB36B72992831AA9632D121580044E167EDC4035* __this, MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898* ___0_MRTKSubsystemCinfo, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.XRSubsystemHelpers::CheckTypes<System.Object,System.Object>(System.String,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_m278F3FCEAA8C04FFCE843545BD7BC34894367760_gshared (String_t* ___0_name, Type_t* ___1_subsystemTypeOverride, Type_t* ___2_providerType, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystem_3__ctor_m341C28CE0238F15E3509D746AFBAC5D1717A1617_gshared (MRTKSubsystem_3_tC6F5612EAD44F0EC50AF80375D83C3337116F6A8* __this, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentsInChildren_TisRuntimeObject_m7AFED511573059D0DA49E1966117E7F80F9112CC_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___1_result, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___0_call, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Experimental.InteractableParentEventRoute`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableParentEventRoute_2__ctor_m19EB37BC00781E9228C8182DF7F6579855508770_gshared (InteractableParentEventRoute_2_tC41403C7AAA886A4F4FEC2C39D6F62442473D270* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Experimental.InteractableChildrenEventRoute`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableChildrenEventRoute_2__ctor_mC70213CA72B4FF0BCFA6143A71517BD8F6AB1557_gshared (InteractableChildrenEventRoute_2_t80096136FEA80884A323042FC4A2D8B7B57037E6* __this, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>::.ctor()
inline void Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E (Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem>::.ctor()
inline void MRTKSubsystemProvider_1__ctor_m2E917E84C117E12DE9FC6F2981F9980B2CC9DD27 (MRTKSubsystemProvider_1_t3CB0FAE6020049C184445926AA2E23AB24D02C70* __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystemProvider_1_t3CB0FAE6020049C184445926AA2E23AB24D02C70*, const RuntimeMethod*))MRTKSubsystemProvider_1__ctor_mBAE6618278D72569444010ECF6C9B01DDBD156E2_gshared)(__this, method);
}
// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::get_running()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemProvider_get_running_m0331B5275B76BA00ACD2635216B455B599E41420_inline (SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* __this, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::Equals(MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRTKSubsystemCinfo_Equals_mDFB7017131D5C586BAB8679AB1A27E7F16DA9795 (MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898* __this, MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898* ___0_other, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo::get_IsCloudBased()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeywordRecognitionSubsystemCinfo_get_IsCloudBased_mA52090A24B4A7D3040A04C465808224BC96BC38D_inline (KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, bool, const RuntimeMethod*))Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared)(__this, ___0_value, method);
}
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
inline bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// System.Void MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemCinfo__ctor_m0A36074757028C796B4ACBAE3367418F3BCFB24B (MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>::.ctor(MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo)
inline void MRTKSubsystemDescriptor_2__ctor_m50373FCE07665C2FDC46CB1855051CE8ADF7D09D (MRTKSubsystemDescriptor_2_tEDCD147CAD9CFDCE805395B64CDBB6B4B44E0610* __this, MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898* ___0_MRTKSubsystemCinfo, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystemDescriptor_2_tEDCD147CAD9CFDCE805395B64CDBB6B4B44E0610*, MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898*, const RuntimeMethod*))MRTKSubsystemDescriptor_2__ctor_m9FFE06DC1528B6B734D8FA745AA8BE09AAD6954A_gshared)(__this, ___0_MRTKSubsystemCinfo, method);
}
// System.Void MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::set_IsCloudBased(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystemDescriptor_set_IsCloudBased_mEC3CB64F8CFDBBF1CD31838BDCEFDDE440755DB5_inline (KeywordRecognitionSubsystemDescriptor_t9429CB51C79BA89EFF1526814D23E80FCE7310B2* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MRTKSubsystemCinfo_get_Name_m8E8FD32AA187B506BD35A5F5BEBFF5EEA09999EB_inline (MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898* __this, const RuntimeMethod* method) ;
// System.Type MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::get_SubsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MRTKSubsystemCinfo_get_SubsystemTypeOverride_mD67F25EFA1140AC0850A0BD8F47C40186D198700_inline (MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898* __this, const RuntimeMethod* method) ;
// System.Type MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::get_ProviderType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MRTKSubsystemCinfo_get_ProviderType_m7288FD8F4C568C3769A9A323BA33106E76187EC3_inline (MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898* __this, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.XRSubsystemHelpers::CheckTypes<MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>(System.String,System.Type,System.Type)
inline bool XRSubsystemHelpers_CheckTypes_TisKeywordRecognitionSubsystem_t457F66CE8995D7969E3C850E3525F8A5D8248AA6_TisProvider_tFF34A6EEFB6B79057EC02EA0F1586F2526ECDF13_m31FDD807EDE0F8780A94F9ACC9E6A94DD25A4D2D (String_t* ___0_name, Type_t* ___1_subsystemTypeOverride, Type_t* ___2_providerType, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, Type_t*, Type_t*, const RuntimeMethod*))XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_m278F3FCEAA8C04FFCE843545BD7BC34894367760_gshared)(___0_name, ___1_subsystemTypeOverride, ___2_providerType, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::.ctor(MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystemDescriptor__ctor_m472C6D4F3CAD2530FBABAB4961815EEFFC87BC2F (KeywordRecognitionSubsystemDescriptor_t9429CB51C79BA89EFF1526814D23E80FCE7310B2* __this, KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E* ___0_cinfo, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>::.ctor()
inline void MRTKSubsystem_3__ctor_mBBC3C9877D1BFC6656A6C1767F28655A9F5A801C (MRTKSubsystem_3_t74E3150011B22C8A54539CCE251C9E3392FB82CE* __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystem_3_t74E3150011B22C8A54539CCE251C9E3392FB82CE*, const RuntimeMethod*))MRTKSubsystem_3__ctor_m341C28CE0238F15E3509D746AFBAC5D1717A1617_gshared)(__this, method);
}
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>::get_provider()
inline Provider_tB4060FF5D728869B74F33231A2DDB686F100DE9B* SubsystemWithProvider_3_get_provider_mC6AE1FDBEF5D8A5EC9E42CA7C071867B9B1A8319_inline (SubsystemWithProvider_3_t5BFC5359C606B0EE6356E2F03F8270C5AD866551* __this, const RuntimeMethod* method)
{
	return ((  Provider_tB4060FF5D728869B74F33231A2DDB686F100DE9B* (*) (SubsystemWithProvider_3_t5BFC5359C606B0EE6356E2F03F8270C5AD866551*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
// MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor::Create(MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextToSpeechSubsystemDescriptor_t2F56416FDADA9CA1871E27EADE9505B69B491D5A* TextToSpeechSubsystemDescriptor_Create_m9467B37E606190A0E9245595771C17E45733E0B0 (TextToSpeechSubsystemCinfo_t214AD1AE0E918C25D1765B4DFE56072C349F97F3* ___0_cinfo, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___0_descriptor, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem>::.ctor()
inline void MRTKSubsystemProvider_1__ctor_m3DF9BDF78565DE51CF46B1097D66EB7AB9C53F98 (MRTKSubsystemProvider_1_t6458250D792973A2BBA855A5EA53ADA6D2E1C75B* __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystemProvider_1_t6458250D792973A2BBA855A5EA53ADA6D2E1C75B*, const RuntimeMethod*))MRTKSubsystemProvider_1__ctor_mBAE6618278D72569444010ECF6C9B01DDBD156E2_gshared)(__this, method);
}
// System.Void MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>::.ctor(MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo)
inline void MRTKSubsystemDescriptor_2__ctor_m38179AA1220C2F8DCE0753AE0182A958B963EC24 (MRTKSubsystemDescriptor_2_tBDC1E6BBAAC968B45C750090B2ECD749E3D2F15F* __this, MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898* ___0_MRTKSubsystemCinfo, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystemDescriptor_2_tBDC1E6BBAAC968B45C750090B2ECD749E3D2F15F*, MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898*, const RuntimeMethod*))MRTKSubsystemDescriptor_2__ctor_m9FFE06DC1528B6B734D8FA745AA8BE09AAD6954A_gshared)(__this, ___0_MRTKSubsystemCinfo, method);
}
// System.Boolean MixedReality.Toolkit.XRSubsystemHelpers::CheckTypes<MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>(System.String,System.Type,System.Type)
inline bool XRSubsystemHelpers_CheckTypes_TisTextToSpeechSubsystem_tC04EB828E65D903691C16C7C56FEAECBD621D41B_TisProvider_tB4060FF5D728869B74F33231A2DDB686F100DE9B_mE8F97725B7554AF8A23FDCCC1F13F49DEF2ADC49 (String_t* ___0_name, Type_t* ___1_subsystemTypeOverride, Type_t* ___2_providerType, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, Type_t*, Type_t*, const RuntimeMethod*))XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_m278F3FCEAA8C04FFCE843545BD7BC34894367760_gshared)(___0_name, ___1_subsystemTypeOverride, ___2_providerType, method);
}
// System.Void MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor::.ctor(MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechSubsystemDescriptor__ctor_m6CF52D3D6B744083C5A39BF8E2A1B9B6FD4E5C8E (TextToSpeechSubsystemDescriptor_t2F56416FDADA9CA1871E27EADE9505B69B491D5A* __this, TextToSpeechSubsystemCinfo_t214AD1AE0E918C25D1765B4DFE56072C349F97F3* ___0_cinfo, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouter::EnableEventRoutes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_EnableEventRoutes_m4FDC38E0CD4C85E57EEA32395FC8CBC2E1FB873F (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouter::ConnectAllEventRoutesToInteractables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_ConnectAllEventRoutesToInteractables_m17430702BF2F4610ACA1106F2E919EC22C9E6285 (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouter::ConnectChildSources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_ConnectChildSources_m09E3FA7EB96A0BC5119E2B519DF5E9DF66D4CDF1 (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouter::DisconnectChildSources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_DisconnectChildSources_m7D733358B328120280484D269C13B31416A6E33A (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouter::DisconnectAllEventRoutesFromKnownInteractables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_DisconnectAllEventRoutesFromKnownInteractables_m6BB6A580A6174946D4C0BF25498D452F0FC9D628 (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouter::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_Refresh_m736759A1EB3DAF7B6751B7B0A918F6B76DABBD87 (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouter::EnableEventRoute(MixedReality.Toolkit.Experimental.IXRInteractableEventRoute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_EnableEventRoute_mD6BDD65CF69F277058556A30697F333AAF51E5B0 (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, RuntimeObject* ___0_eventRoute, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::GetComponentsInChildren<MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource>(System.Boolean,System.Collections.Generic.List`1<T>)
inline void Component_GetComponentsInChildren_TisInteractableEventRouterChildSource_t477444515B8E2CF4D986567BF53CEA53ADDF3155_m6ABAE2ACD42B5368774E71200104CDFE22A7B5CB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2* ___1_result, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m7AFED511573059D0DA49E1966117E7F80F9112CC_gshared)(__this, ___0_includeInactive, ___1_result, method);
}
// T System.Collections.Generic.List`1<MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource>::get_Item(System.Int32)
inline InteractableEventRouterChildSource_t477444515B8E2CF4D986567BF53CEA53ADDF3155* List_1_get_Item_mDBE25C642B9DBA94E11A7BA62481277AEC77B033 (List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  InteractableEventRouterChildSource_t477444515B8E2CF4D986567BF53CEA53ADDF3155* (*) (List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// UnityEngine.Events.UnityEvent MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource::get_ChildrenChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* InteractableEventRouterChildSource_get_ChildrenChanged_m4F4B29A905100AE25F6B6CA570C9D02B38B68EE4_inline (InteractableEventRouterChildSource_t477444515B8E2CF4D986567BF53CEA53ADDF3155* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource>::get_Count()
inline int32_t List_1_get_Count_m78556E9A69C21307B337D4F6F8FE0466CE37C39D_inline (List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::GetComponentsInChildren<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>(System.Boolean,System.Collections.Generic.List`1<T>)
inline void Component_GetComponentsInChildren_TisIXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_mDBA9EDBBC4FA0776A4908B6DF27F624BEBF8A13C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___1_result, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m7AFED511573059D0DA49E1966117E7F80F9112CC_gshared)(__this, ___0_includeInactive, ___1_result, method);
}
// T System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m813E4C01FA736EBD8792E6296BAA5143C5D59F0E (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::Add(T)
inline bool HashSet_1_Add_m9404CABBDD206B28449279E04821FD0D1BA6C5A9 (HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
// System.Boolean MixedReality.Toolkit.Experimental.InteractableEventRouter::IsValidChild(UnityEngine.XR.Interaction.Toolkit.IXRInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractableEventRouter_IsValidChild_m569EFA724C4C3C76AD5D8149207DD4DF58A781FE (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, RuntimeObject* ___0_interactable, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::get_Count()
inline int32_t List_1_get_Count_m247BF28F8A1F9F3EE681A1BBDFD364F19947AB7E_inline (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::GetEnumerator()
inline Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6 HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689 (HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6 (*) (HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::Dispose()
inline void Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011 (Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_inline (Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::MoveNext()
inline bool Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C (Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::Clear()
inline void HashSet_1_Clear_mCED08157F9BBECF5C9781943201B246ACF5F2921 (HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF*, const RuntimeMethod*))HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::.ctor()
inline void HashSet_1__ctor_m321F26D964CAFF6263B06C83093EA9741D907815 (HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::.ctor()
inline void List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource>::.ctor()
inline void List_1__ctor_m43D76283B6313F754581B7B5D2678A7C90AF04A1 (List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4 (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008* __this, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008*, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8 (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722 (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26* __this, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26*, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33 (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008* __this, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008*, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78 (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26* __this, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26*, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___0_call, method);
}
// System.Void MixedReality.Toolkit.Experimental.InteractableParentEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,MixedReality.Toolkit.Experimental.IXRHoverInteractableParent>::.ctor()
inline void InteractableParentEventRoute_2__ctor_m982DC347358DD656B75A5740293F3B67581C33F5 (InteractableParentEventRoute_2_t69B13003F009725088AA5CFED19BE2B5D71A8241* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractableParentEventRoute_2_t69B13003F009725088AA5CFED19BE2B5D71A8241*, const RuntimeMethod*))InteractableParentEventRoute_2__ctor_m19EB37BC00781E9228C8182DF7F6579855508770_gshared)(__this, method);
}
// System.Void MixedReality.Toolkit.Experimental.InteractableChildrenEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,MixedReality.Toolkit.Experimental.IXRHoverInteractableChild>::.ctor()
inline void InteractableChildrenEventRoute_2__ctor_mA0433B97D69BE55967294C7CCF06E5883293585A (InteractableChildrenEventRoute_2_t8AFA881E22597242060DEEE94BCF5FFE662E87DB* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractableChildrenEventRoute_2_t8AFA881E22597242060DEEE94BCF5FFE662E87DB*, const RuntimeMethod*))InteractableChildrenEventRoute_2__ctor_mC70213CA72B4FF0BCFA6143A71517BD8F6AB1557_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24 (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2 (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8*, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40 (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602 (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B*, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8*, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B*, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___0_call, method);
}
// System.Void MixedReality.Toolkit.Experimental.InteractableParentEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,MixedReality.Toolkit.Experimental.IXRSelectInteractableParent>::.ctor()
inline void InteractableParentEventRoute_2__ctor_mA56CF2692998A4F6A2A7FED280C1B3A02B84D767 (InteractableParentEventRoute_2_t09E79049F98A012F93D48FA5E88FCE2BE7C73E14* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractableParentEventRoute_2_t09E79049F98A012F93D48FA5E88FCE2BE7C73E14*, const RuntimeMethod*))InteractableParentEventRoute_2__ctor_m19EB37BC00781E9228C8182DF7F6579855508770_gshared)(__this, method);
}
// System.Void MixedReality.Toolkit.Experimental.InteractableChildrenEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,MixedReality.Toolkit.Experimental.IXRSelectInteractableChild>::.ctor()
inline void InteractableChildrenEventRoute_2__ctor_m2D020850E8339485A299506C229759B09CAB4E54 (InteractableChildrenEventRoute_2_t61991304B0321B5393A8B02E0B41363C4B32F398* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractableChildrenEventRoute_2_t61991304B0321B5393A8B02E0B41363C4B32F398*, const RuntimeMethod*))InteractableChildrenEventRoute_2__ctor_mC70213CA72B4FF0BCFA6143A71517BD8F6AB1557_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mE949110B9A222D4A418ACCC0A6DD30E030864DF3 (Provider_tFF34A6EEFB6B79057EC02EA0F1586F2526ECDF13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystemProvider_1__ctor_m2E917E84C117E12DE9FC6F2981F9980B2CC9DD27_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Dictionary<string, UnityEvent> keywordDictionary = new Dictionary<string, UnityEvent>();
		Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* L_0 = (Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050*)il2cpp_codegen_object_new(Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E(L_0, Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E_RuntimeMethod_var);
		__this->___keywordDictionary_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keywordDictionary_1), (void*)L_0);
		MRTKSubsystemProvider_1__ctor_m2E917E84C117E12DE9FC6F2981F9980B2CC9DD27(__this, MRTKSubsystemProvider_1__ctor_m2E917E84C117E12DE9FC6F2981F9980B2CC9DD27_RuntimeMethod_var);
		return;
	}
}
// System.Boolean MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider::UnityEngine.ISubsystem.get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_UnityEngine_ISubsystem_get_running_m4506CDFCFC4BA98F28DFEF23DF34BD2874C546C9 (Provider_tFF34A6EEFB6B79057EC02EA0F1586F2526ECDF13* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = SubsystemProvider_get_running_m0331B5275B76BA00ACD2635216B455B599E41420_inline(__this, NULL);
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
// System.Boolean MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo::get_IsCloudBased()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeywordRecognitionSubsystemCinfo_get_IsCloudBased_mA52090A24B4A7D3040A04C465808224BC96BC38D (KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = __this->___U3CIsCloudBasedU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo::set_IsCloudBased(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystemCinfo_set_IsCloudBased_m4B2537878042D814A5B376B0E0A0B53154EE8E8B (KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CIsCloudBasedU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo::Equals(MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeywordRecognitionSubsystemCinfo_Equals_m1A802B77FD52CBBC11381A0BC84ACF72457FC2AA (KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E* __this, MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E* G_B3_0 = NULL;
	bool G_B3_1 = false;
	KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E* G_B2_0 = NULL;
	bool G_B2_1 = false;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	bool G_B4_1 = false;
	{
		// return base.Equals(other) && IsCloudBased == (other as KeywordRecognitionSubsystemCinfo)?.IsCloudBased;
		MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898* L_0 = ___0_other;
		bool L_1;
		L_1 = MRTKSubsystemCinfo_Equals_mDFB7017131D5C586BAB8679AB1A27E7F16DA9795(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		bool L_2;
		L_2 = KeywordRecognitionSubsystemCinfo_get_IsCloudBased_mA52090A24B4A7D3040A04C465808224BC96BC38D_inline(__this, NULL);
		MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898* L_3 = ___0_other;
		KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E* L_4 = ((KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E*)IsInstClass((RuntimeObject*)L_3, KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E_il2cpp_TypeInfo_var));
		G_B2_0 = L_4;
		G_B2_1 = L_2;
		if (L_4)
		{
			G_B3_0 = L_4;
			G_B3_1 = L_2;
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_5 = V_1;
		G_B4_0 = L_5;
		G_B4_1 = G_B2_1;
		goto IL_002e;
	}

IL_0024:
	{
		NullCheck(G_B3_0);
		bool L_6;
		L_6 = KeywordRecognitionSubsystemCinfo_get_IsCloudBased_mA52090A24B4A7D3040A04C465808224BC96BC38D_inline(G_B3_0, NULL);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
	}

IL_002e:
	{
		V_0 = G_B4_0;
		bool L_8;
		L_8 = Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline((&V_0), Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		bool L_9;
		L_9 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_0), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		return (bool)((int32_t)(((((int32_t)G_B4_1) == ((int32_t)L_8))? 1 : 0)&(int32_t)L_9));
	}

IL_0041:
	{
		return (bool)0;
	}
}
// System.Void MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystemCinfo__ctor_m6189120355572FB122FD59CB8F5633ED18B596A9 (KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E* __this, const RuntimeMethod* method) 
{
	{
		MRTKSubsystemCinfo__ctor_m0A36074757028C796B4ACBAE3367418F3BCFB24B(__this, NULL);
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
// System.Void MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::.ctor(MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystemDescriptor__ctor_m472C6D4F3CAD2530FBABAB4961815EEFFC87BC2F (KeywordRecognitionSubsystemDescriptor_t9429CB51C79BA89EFF1526814D23E80FCE7310B2* __this, KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E* ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystemDescriptor_2__ctor_m50373FCE07665C2FDC46CB1855051CE8ADF7D09D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// KeywordRecognitionSubsystemDescriptor(KeywordRecognitionSubsystemCinfo cinfo) : base(cinfo)
		KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E* L_0 = ___0_cinfo;
		MRTKSubsystemDescriptor_2__ctor_m50373FCE07665C2FDC46CB1855051CE8ADF7D09D(__this, L_0, MRTKSubsystemDescriptor_2__ctor_m50373FCE07665C2FDC46CB1855051CE8ADF7D09D_RuntimeMethod_var);
		// IsCloudBased = cinfo.IsCloudBased;
		KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E* L_1 = ___0_cinfo;
		NullCheck(L_1);
		bool L_2;
		L_2 = KeywordRecognitionSubsystemCinfo_get_IsCloudBased_mA52090A24B4A7D3040A04C465808224BC96BC38D_inline(L_1, NULL);
		KeywordRecognitionSubsystemDescriptor_set_IsCloudBased_mEC3CB64F8CFDBBF1CD31838BDCEFDDE440755DB5_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Boolean MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::get_IsCloudBased()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeywordRecognitionSubsystemDescriptor_get_IsCloudBased_m2758BEF6B7C82EDC4BCBCD3366F05A394E3A9B0D (KeywordRecognitionSubsystemDescriptor_t9429CB51C79BA89EFF1526814D23E80FCE7310B2* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = __this->___U3CIsCloudBasedU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::set_IsCloudBased(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystemDescriptor_set_IsCloudBased_mEC3CB64F8CFDBBF1CD31838BDCEFDDE440755DB5 (KeywordRecognitionSubsystemDescriptor_t9429CB51C79BA89EFF1526814D23E80FCE7310B2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CIsCloudBasedU3Ek__BackingField_6 = L_0;
		return;
	}
}
// MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::Create(MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeywordRecognitionSubsystemDescriptor_t9429CB51C79BA89EFF1526814D23E80FCE7310B2* KeywordRecognitionSubsystemDescriptor_Create_m0BB24F91A11434D414D8FCA0123A8AC8DFD60F7B (KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E* ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeywordRecognitionSubsystemDescriptor_t9429CB51C79BA89EFF1526814D23E80FCE7310B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_CheckTypes_TisKeywordRecognitionSubsystem_t457F66CE8995D7969E3C850E3525F8A5D8248AA6_TisProvider_tFF34A6EEFB6B79057EC02EA0F1586F2526ECDF13_m31FDD807EDE0F8780A94F9ACC9E6A94DD25A4D2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!XRSubsystemHelpers.CheckTypes<KeywordRecognitionSubsystem, KeywordRecognitionSubsystem.Provider>(cinfo.Name,
		//                                                                                                     cinfo.SubsystemTypeOverride,
		//                                                                                                     cinfo.ProviderType))
		KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E* L_0 = ___0_cinfo;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = MRTKSubsystemCinfo_get_Name_m8E8FD32AA187B506BD35A5F5BEBFF5EEA09999EB_inline(L_0, NULL);
		KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E* L_2 = ___0_cinfo;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = MRTKSubsystemCinfo_get_SubsystemTypeOverride_mD67F25EFA1140AC0850A0BD8F47C40186D198700_inline(L_2, NULL);
		KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E* L_4 = ___0_cinfo;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = MRTKSubsystemCinfo_get_ProviderType_m7288FD8F4C568C3769A9A323BA33106E76187EC3_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = XRSubsystemHelpers_CheckTypes_TisKeywordRecognitionSubsystem_t457F66CE8995D7969E3C850E3525F8A5D8248AA6_TisProvider_tFF34A6EEFB6B79057EC02EA0F1586F2526ECDF13_m31FDD807EDE0F8780A94F9ACC9E6A94DD25A4D2D(L_1, L_3, L_5, XRSubsystemHelpers_CheckTypes_TisKeywordRecognitionSubsystem_t457F66CE8995D7969E3C850E3525F8A5D8248AA6_TisProvider_tFF34A6EEFB6B79057EC02EA0F1586F2526ECDF13_m31FDD807EDE0F8780A94F9ACC9E6A94DD25A4D2D_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		// throw new ArgumentException("Could not create KeywordRecognitionSubsystemDescriptor.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral33B1E25D03A60D4D52E409FD3171FF658C3AB9F9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeywordRecognitionSubsystemDescriptor_Create_m0BB24F91A11434D414D8FCA0123A8AC8DFD60F7B_RuntimeMethod_var)));
	}

IL_0024:
	{
		// return new KeywordRecognitionSubsystemDescriptor(cinfo);
		KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E* L_8 = ___0_cinfo;
		KeywordRecognitionSubsystemDescriptor_t9429CB51C79BA89EFF1526814D23E80FCE7310B2* L_9 = (KeywordRecognitionSubsystemDescriptor_t9429CB51C79BA89EFF1526814D23E80FCE7310B2*)il2cpp_codegen_object_new(KeywordRecognitionSubsystemDescriptor_t9429CB51C79BA89EFF1526814D23E80FCE7310B2_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		KeywordRecognitionSubsystemDescriptor__ctor_m472C6D4F3CAD2530FBABAB4961815EEFFC87BC2F(L_9, L_8, NULL);
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
// System.Void MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechSubsystem__ctor_mA86A808FE0B5975838DADB6270B53B9A3E600118 (TextToSpeechSubsystem_tC04EB828E65D903691C16C7C56FEAECBD621D41B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystem_3__ctor_mBBC3C9877D1BFC6656A6C1767F28655A9F5A801C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystem_3_t74E3150011B22C8A54539CCE251C9E3392FB82CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TextToSpeechSubsystem()
		il2cpp_codegen_runtime_class_init_inline(MRTKSubsystem_3_t74E3150011B22C8A54539CCE251C9E3392FB82CE_il2cpp_TypeInfo_var);
		MRTKSubsystem_3__ctor_mBBC3C9877D1BFC6656A6C1767F28655A9F5A801C(__this, MRTKSubsystem_3__ctor_mBBC3C9877D1BFC6656A6C1767F28655A9F5A801C_RuntimeMethod_var);
		// { }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem::TrySpeak(System.String,UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TextToSpeechSubsystem_TrySpeak_m4E6087DA898DE92095B743FF3E50408AE051A4B7 (TextToSpeechSubsystem_tC04EB828E65D903691C16C7C56FEAECBD621D41B* __this, String_t* ___0_phrase, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___1_audioSource, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mC6AE1FDBEF5D8A5EC9E42CA7C071867B9B1A8319_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual Task<bool> TrySpeak(string phrase, AudioSource audioSource) => provider.TrySpeak(phrase, audioSource);
		Provider_tB4060FF5D728869B74F33231A2DDB686F100DE9B* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mC6AE1FDBEF5D8A5EC9E42CA7C071867B9B1A8319_inline(__this, SubsystemWithProvider_3_get_provider_mC6AE1FDBEF5D8A5EC9E42CA7C071867B9B1A8319_RuntimeMethod_var);
		String_t* L_1 = ___0_phrase;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = ___1_audioSource;
		NullCheck(L_0);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_3;
		L_3 = VirtualFuncInvoker2< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, String_t*, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* >::Invoke(18 /* System.Threading.Tasks.Task`1<System.Boolean> MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider::TrySpeak(System.String,UnityEngine.AudioSource) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem::Register(MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextToSpeechSubsystem_Register_m2C63B2367F47B890C5E91DF9D39760FB982403C9 (TextToSpeechSubsystemCinfo_t214AD1AE0E918C25D1765B4DFE56072C349F97F3* ___0_subsystemParams, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TextToSpeechSubsystemDescriptor Descriptor = TextToSpeechSubsystemDescriptor.Create(subsystemParams);
		TextToSpeechSubsystemCinfo_t214AD1AE0E918C25D1765B4DFE56072C349F97F3* L_0 = ___0_subsystemParams;
		TextToSpeechSubsystemDescriptor_t2F56416FDADA9CA1871E27EADE9505B69B491D5A* L_1;
		L_1 = TextToSpeechSubsystemDescriptor_Create_m9467B37E606190A0E9245595771C17E45733E0B0(L_0, NULL);
		// SubsystemDescriptorStore.RegisterDescriptor(Descriptor);
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
// System.Void MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m4F96E36388C5B40AE870E402BC97B3926D740E68 (Provider_tB4060FF5D728869B74F33231A2DDB686F100DE9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystemProvider_1__ctor_m3DF9BDF78565DE51CF46B1097D66EB7AB9C53F98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MRTKSubsystemProvider_1__ctor_m3DF9BDF78565DE51CF46B1097D66EB7AB9C53F98(__this, MRTKSubsystemProvider_1__ctor_m3DF9BDF78565DE51CF46B1097D66EB7AB9C53F98_RuntimeMethod_var);
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
// System.Boolean MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo::Equals(MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextToSpeechSubsystemCinfo_Equals_m92852B8E5BC1049E7B568189BB9ABBDBA36F3011 (TextToSpeechSubsystemCinfo_t214AD1AE0E918C25D1765B4DFE56072C349F97F3* __this, MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898* ___0_other, const RuntimeMethod* method) 
{
	{
		// return base.Equals(other);
		MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898* L_0 = ___0_other;
		bool L_1;
		L_1 = MRTKSubsystemCinfo_Equals_mDFB7017131D5C586BAB8679AB1A27E7F16DA9795(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechSubsystemCinfo__ctor_m3994252F56A4ADAB5A14F4DB654F38570E5AFA20 (TextToSpeechSubsystemCinfo_t214AD1AE0E918C25D1765B4DFE56072C349F97F3* __this, const RuntimeMethod* method) 
{
	{
		MRTKSubsystemCinfo__ctor_m0A36074757028C796B4ACBAE3367418F3BCFB24B(__this, NULL);
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
// System.Void MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor::.ctor(MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechSubsystemDescriptor__ctor_m6CF52D3D6B744083C5A39BF8E2A1B9B6FD4E5C8E (TextToSpeechSubsystemDescriptor_t2F56416FDADA9CA1871E27EADE9505B69B491D5A* __this, TextToSpeechSubsystemCinfo_t214AD1AE0E918C25D1765B4DFE56072C349F97F3* ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystemDescriptor_2__ctor_m38179AA1220C2F8DCE0753AE0182A958B963EC24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TextToSpeechSubsystemDescriptor(TextToSpeechSubsystemCinfo cinfo) : base(cinfo)
		TextToSpeechSubsystemCinfo_t214AD1AE0E918C25D1765B4DFE56072C349F97F3* L_0 = ___0_cinfo;
		MRTKSubsystemDescriptor_2__ctor_m38179AA1220C2F8DCE0753AE0182A958B963EC24(__this, L_0, MRTKSubsystemDescriptor_2__ctor_m38179AA1220C2F8DCE0753AE0182A958B963EC24_RuntimeMethod_var);
		// }
		return;
	}
}
// MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor::Create(MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextToSpeechSubsystemDescriptor_t2F56416FDADA9CA1871E27EADE9505B69B491D5A* TextToSpeechSubsystemDescriptor_Create_m9467B37E606190A0E9245595771C17E45733E0B0 (TextToSpeechSubsystemCinfo_t214AD1AE0E918C25D1765B4DFE56072C349F97F3* ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToSpeechSubsystemDescriptor_t2F56416FDADA9CA1871E27EADE9505B69B491D5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_CheckTypes_TisTextToSpeechSubsystem_tC04EB828E65D903691C16C7C56FEAECBD621D41B_TisProvider_tB4060FF5D728869B74F33231A2DDB686F100DE9B_mE8F97725B7554AF8A23FDCCC1F13F49DEF2ADC49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!XRSubsystemHelpers.CheckTypes<TextToSpeechSubsystem, TextToSpeechSubsystem.Provider>(
		//         cinfo.Name,
		//         cinfo.SubsystemTypeOverride,
		//         cinfo.ProviderType))
		TextToSpeechSubsystemCinfo_t214AD1AE0E918C25D1765B4DFE56072C349F97F3* L_0 = ___0_cinfo;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = MRTKSubsystemCinfo_get_Name_m8E8FD32AA187B506BD35A5F5BEBFF5EEA09999EB_inline(L_0, NULL);
		TextToSpeechSubsystemCinfo_t214AD1AE0E918C25D1765B4DFE56072C349F97F3* L_2 = ___0_cinfo;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = MRTKSubsystemCinfo_get_SubsystemTypeOverride_mD67F25EFA1140AC0850A0BD8F47C40186D198700_inline(L_2, NULL);
		TextToSpeechSubsystemCinfo_t214AD1AE0E918C25D1765B4DFE56072C349F97F3* L_4 = ___0_cinfo;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = MRTKSubsystemCinfo_get_ProviderType_m7288FD8F4C568C3769A9A323BA33106E76187EC3_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = XRSubsystemHelpers_CheckTypes_TisTextToSpeechSubsystem_tC04EB828E65D903691C16C7C56FEAECBD621D41B_TisProvider_tB4060FF5D728869B74F33231A2DDB686F100DE9B_mE8F97725B7554AF8A23FDCCC1F13F49DEF2ADC49(L_1, L_3, L_5, XRSubsystemHelpers_CheckTypes_TisTextToSpeechSubsystem_tC04EB828E65D903691C16C7C56FEAECBD621D41B_TisProvider_tB4060FF5D728869B74F33231A2DDB686F100DE9B_mE8F97725B7554AF8A23FDCCC1F13F49DEF2ADC49_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		// throw new ArgumentException("Could not create TextToSpeechSubsystemDescriptor.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5542C2C12376B62727BB20CE9C9B84E76ACD561B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextToSpeechSubsystemDescriptor_Create_m9467B37E606190A0E9245595771C17E45733E0B0_RuntimeMethod_var)));
	}

IL_0024:
	{
		// return new TextToSpeechSubsystemDescriptor(cinfo);
		TextToSpeechSubsystemCinfo_t214AD1AE0E918C25D1765B4DFE56072C349F97F3* L_8 = ___0_cinfo;
		TextToSpeechSubsystemDescriptor_t2F56416FDADA9CA1871E27EADE9505B69B491D5A* L_9 = (TextToSpeechSubsystemDescriptor_t2F56416FDADA9CA1871E27EADE9505B69B491D5A*)il2cpp_codegen_object_new(TextToSpeechSubsystemDescriptor_t2F56416FDADA9CA1871E27EADE9505B69B491D5A_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		TextToSpeechSubsystemDescriptor__ctor_m6CF52D3D6B744083C5A39BF8E2A1B9B6FD4E5C8E(L_9, L_8, NULL);
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
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouter::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_OnEnable_mF199C36D19CC89A4E085C809024B18C769F600CC (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, const RuntimeMethod* method) 
{
	{
		// EnableEventRoutes();
		InteractableEventRouter_EnableEventRoutes_m4FDC38E0CD4C85E57EEA32395FC8CBC2E1FB873F(__this, NULL);
		// ConnectAllEventRoutesToInteractables();
		InteractableEventRouter_ConnectAllEventRoutesToInteractables_m17430702BF2F4610ACA1106F2E919EC22C9E6285(__this, NULL);
		// ConnectChildSources();
		InteractableEventRouter_ConnectChildSources_m09E3FA7EB96A0BC5119E2B519DF5E9DF66D4CDF1(__this, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouter::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_OnDisable_m40CA997FC166D91E254442F308C0FF11A6E60211 (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, const RuntimeMethod* method) 
{
	{
		// DisconnectChildSources();
		InteractableEventRouter_DisconnectChildSources_m7D733358B328120280484D269C13B31416A6E33A(__this, NULL);
		// DisconnectAllEventRoutesFromKnownInteractables();
		InteractableEventRouter_DisconnectAllEventRoutesFromKnownInteractables_m6BB6A580A6174946D4C0BF25498D452F0FC9D628(__this, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouter::OnTransformChildrenChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_OnTransformChildrenChanged_m9A8F368F2440219D86CB992D7581778BF7A700B3 (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, const RuntimeMethod* method) 
{
	{
		// Refresh();
		InteractableEventRouter_Refresh_m736759A1EB3DAF7B6751B7B0A918F6B76DABBD87(__this, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouter::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_Refresh_m736759A1EB3DAF7B6751B7B0A918F6B76DABBD87 (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, const RuntimeMethod* method) 
{
	{
		// DisconnectChildSources();
		InteractableEventRouter_DisconnectChildSources_m7D733358B328120280484D269C13B31416A6E33A(__this, NULL);
		// DisconnectAllEventRoutesFromKnownInteractables();
		InteractableEventRouter_DisconnectAllEventRoutesFromKnownInteractables_m6BB6A580A6174946D4C0BF25498D452F0FC9D628(__this, NULL);
		// EnableEventRoutes();
		InteractableEventRouter_EnableEventRoutes_m4FDC38E0CD4C85E57EEA32395FC8CBC2E1FB873F(__this, NULL);
		// ConnectAllEventRoutesToInteractables();
		InteractableEventRouter_ConnectAllEventRoutesToInteractables_m17430702BF2F4610ACA1106F2E919EC22C9E6285(__this, NULL);
		// ConnectChildSources();
		InteractableEventRouter_ConnectChildSources_m09E3FA7EB96A0BC5119E2B519DF5E9DF66D4CDF1(__this, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouter::EnableEventRoutes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_EnableEventRoutes_m4FDC38E0CD4C85E57EEA32395FC8CBC2E1FB873F (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (eventRoutes != null)
		IXRInteractableEventRouteU5BU5D_t331148B96794E8C965E823457E7485938E758EA8* L_0 = __this->___eventRoutes_7;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// for (int i = 0; i < eventRoutes.Length; i++)
		V_0 = 0;
		goto IL_001e;
	}

IL_000c:
	{
		// EnableEventRoute(eventRoutes[i]);
		IXRInteractableEventRouteU5BU5D_t331148B96794E8C965E823457E7485938E758EA8* L_1 = __this->___eventRoutes_7;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		InteractableEventRouter_EnableEventRoute_mD6BDD65CF69F277058556A30697F333AAF51E5B0(__this, L_4, NULL);
		// for (int i = 0; i < eventRoutes.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001e:
	{
		// for (int i = 0; i < eventRoutes.Length; i++)
		int32_t L_6 = V_0;
		IXRInteractableEventRouteU5BU5D_t331148B96794E8C965E823457E7485938E758EA8* L_7 = __this->___eventRoutes_7;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000c;
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouter::EnableEventRoute(MixedReality.Toolkit.Experimental.IXRInteractableEventRoute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_EnableEventRoute_mD6BDD65CF69F277058556A30697F333AAF51E5B0 (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, RuntimeObject* ___0_eventRoute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractableEventRoute_t5237B2DC58868E7168F078A45539648FED42176E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eventRoute.OnEnabled(gameObject);
		RuntimeObject* L_0 = ___0_eventRoute;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(0 /* System.Void MixedReality.Toolkit.Experimental.IXRInteractableEventRoute::OnEnabled(UnityEngine.GameObject) */, IXRInteractableEventRoute_t5237B2DC58868E7168F078A45539648FED42176E_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouter::ConnectChildSources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_ConnectChildSources_m09E3FA7EB96A0BC5119E2B519DF5E9DF66D4CDF1 (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisInteractableEventRouterChildSource_t477444515B8E2CF4D986567BF53CEA53ADDF3155_m6ABAE2ACD42B5368774E71200104CDFE22A7B5CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractableEventRouter_ConnectAllEventRoutesToInteractables_m17430702BF2F4610ACA1106F2E919EC22C9E6285_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m78556E9A69C21307B337D4F6F8FE0466CE37C39D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDBE25C642B9DBA94E11A7BA62481277AEC77B033_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// GetComponentsInChildren(includeInactive: true, childSources);
		List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2* L_0 = __this->___childSources_6;
		Component_GetComponentsInChildren_TisInteractableEventRouterChildSource_t477444515B8E2CF4D986567BF53CEA53ADDF3155_m6ABAE2ACD42B5368774E71200104CDFE22A7B5CB(__this, (bool)1, L_0, Component_GetComponentsInChildren_TisInteractableEventRouterChildSource_t477444515B8E2CF4D986567BF53CEA53ADDF3155_m6ABAE2ACD42B5368774E71200104CDFE22A7B5CB_RuntimeMethod_var);
		// for (int i = 0; i < childSources.Count; i++)
		V_0 = 0;
		goto IL_0037;
	}

IL_0011:
	{
		// childSources[i].ChildrenChanged.AddListener(ConnectAllEventRoutesToInteractables);
		List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2* L_1 = __this->___childSources_6;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		InteractableEventRouterChildSource_t477444515B8E2CF4D986567BF53CEA53ADDF3155* L_3;
		L_3 = List_1_get_Item_mDBE25C642B9DBA94E11A7BA62481277AEC77B033(L_1, L_2, List_1_get_Item_mDBE25C642B9DBA94E11A7BA62481277AEC77B033_RuntimeMethod_var);
		NullCheck(L_3);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4;
		L_4 = InteractableEventRouterChildSource_get_ChildrenChanged_m4F4B29A905100AE25F6B6CA570C9D02B38B68EE4_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)InteractableEventRouter_ConnectAllEventRoutesToInteractables_m17430702BF2F4610ACA1106F2E919EC22C9E6285_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// for (int i = 0; i < childSources.Count; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < childSources.Count; i++)
		int32_t L_7 = V_0;
		List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2* L_8 = __this->___childSources_6;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m78556E9A69C21307B337D4F6F8FE0466CE37C39D_inline(L_8, List_1_get_Count_m78556E9A69C21307B337D4F6F8FE0466CE37C39D_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouter::DisconnectChildSources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_DisconnectChildSources_m7D733358B328120280484D269C13B31416A6E33A (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractableEventRouter_ConnectAllEventRoutesToInteractables_m17430702BF2F4610ACA1106F2E919EC22C9E6285_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m78556E9A69C21307B337D4F6F8FE0466CE37C39D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDBE25C642B9DBA94E11A7BA62481277AEC77B033_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < childSources.Count; i++)
		V_0 = 0;
		goto IL_002a;
	}

IL_0004:
	{
		// childSources[i].ChildrenChanged.RemoveListener(ConnectAllEventRoutesToInteractables);
		List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2* L_0 = __this->___childSources_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		InteractableEventRouterChildSource_t477444515B8E2CF4D986567BF53CEA53ADDF3155* L_2;
		L_2 = List_1_get_Item_mDBE25C642B9DBA94E11A7BA62481277AEC77B033(L_0, L_1, List_1_get_Item_mDBE25C642B9DBA94E11A7BA62481277AEC77B033_RuntimeMethod_var);
		NullCheck(L_2);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3;
		L_3 = InteractableEventRouterChildSource_get_ChildrenChanged_m4F4B29A905100AE25F6B6CA570C9D02B38B68EE4_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)InteractableEventRouter_ConnectAllEventRoutesToInteractables_m17430702BF2F4610ACA1106F2E919EC22C9E6285_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_3, L_4, NULL);
		// for (int i = 0; i < childSources.Count; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_002a:
	{
		// for (int i = 0; i < childSources.Count; i++)
		int32_t L_6 = V_0;
		List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2* L_7 = __this->___childSources_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m78556E9A69C21307B337D4F6F8FE0466CE37C39D_inline(L_7, List_1_get_Count_m78556E9A69C21307B337D4F6F8FE0466CE37C39D_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouter::ConnectAllEventRoutesToInteractables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_ConnectAllEventRoutesToInteractables_m17430702BF2F4610ACA1106F2E919EC22C9E6285 (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisIXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_mDBA9EDBBC4FA0776A4908B6DF27F624BEBF8A13C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9404CABBDD206B28449279E04821FD0D1BA6C5A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractableEventRoute_t5237B2DC58868E7168F078A45539648FED42176E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m247BF28F8A1F9F3EE681A1BBDFD364F19947AB7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m813E4C01FA736EBD8792E6296BAA5143C5D59F0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// GetComponentsInChildren(includeInactive: true, newInteractables);
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_0 = __this->___newInteractables_5;
		Component_GetComponentsInChildren_TisIXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_mDBA9EDBBC4FA0776A4908B6DF27F624BEBF8A13C(__this, (bool)1, L_0, Component_GetComponentsInChildren_TisIXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_mDBA9EDBBC4FA0776A4908B6DF27F624BEBF8A13C_RuntimeMethod_var);
		// for (int i = 0; i < newInteractables.Count; i++)
		V_0 = 0;
		goto IL_0062;
	}

IL_0011:
	{
		// var interactable = newInteractables[i];
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_1 = __this->___newInteractables_5;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = List_1_get_Item_m813E4C01FA736EBD8792E6296BAA5143C5D59F0E(L_1, L_2, List_1_get_Item_m813E4C01FA736EBD8792E6296BAA5143C5D59F0E_RuntimeMethod_var);
		V_1 = L_3;
		// if (activeInteractables.Add(interactable) && IsValidChild(interactable) && eventRoutes != null)
		HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* L_4 = __this->___activeInteractables_4;
		RuntimeObject* L_5 = V_1;
		NullCheck(L_4);
		bool L_6;
		L_6 = HashSet_1_Add_m9404CABBDD206B28449279E04821FD0D1BA6C5A9(L_4, L_5, HashSet_1_Add_m9404CABBDD206B28449279E04821FD0D1BA6C5A9_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		bool L_8;
		L_8 = InteractableEventRouter_IsValidChild_m569EFA724C4C3C76AD5D8149207DD4DF58A781FE(__this, L_7, NULL);
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		IXRInteractableEventRouteU5BU5D_t331148B96794E8C965E823457E7485938E758EA8* L_9 = __this->___eventRoutes_7;
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		// for (int j = 0; j < eventRoutes.Length; j++)
		V_2 = 0;
		goto IL_0053;
	}

IL_0041:
	{
		// eventRoutes[j].Register(interactable);
		IXRInteractableEventRouteU5BU5D_t331148B96794E8C965E823457E7485938E758EA8* L_10 = __this->___eventRoutes_7;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		RuntimeObject* L_14 = V_1;
		NullCheck(L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void MixedReality.Toolkit.Experimental.IXRInteractableEventRoute::Register(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractableEventRoute_t5237B2DC58868E7168F078A45539648FED42176E_il2cpp_TypeInfo_var, L_13, L_14);
		// for (int j = 0; j < eventRoutes.Length; j++)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0053:
	{
		// for (int j = 0; j < eventRoutes.Length; j++)
		int32_t L_16 = V_2;
		IXRInteractableEventRouteU5BU5D_t331148B96794E8C965E823457E7485938E758EA8* L_17 = __this->___eventRoutes_7;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0041;
		}
	}

IL_005e:
	{
		// for (int i = 0; i < newInteractables.Count; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0062:
	{
		// for (int i = 0; i < newInteractables.Count; i++)
		int32_t L_19 = V_0;
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_20 = __this->___newInteractables_5;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m247BF28F8A1F9F3EE681A1BBDFD364F19947AB7E_inline(L_20, List_1_get_Count_m247BF28F8A1F9F3EE681A1BBDFD364F19947AB7E_RuntimeMethod_var);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouter::ConnectEventRouteToKnownInteractables(MixedReality.Toolkit.Experimental.IXRInteractableEventRoute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_ConnectEventRouteToKnownInteractables_m9AF64215AB5CAB6294BDDCB813D35B4157E057E2 (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, RuntimeObject* ___0_eventRoute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractableEventRoute_t5237B2DC58868E7168F078A45539648FED42176E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// if (eventRoute == null)
		RuntimeObject* L_0 = ___0_eventRoute;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// foreach (var activeInteractable in activeInteractables)
		HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* L_1 = __this->___activeInteractables_4;
		NullCheck(L_1);
		Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6 L_2;
		L_2 = HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689(L_1, HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011((&V_0), Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_0012_1:
			{
				// foreach (var activeInteractable in activeInteractables)
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_inline((&V_0), Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_RuntimeMethod_var);
				V_1 = L_3;
				// eventRoute.Register(activeInteractable);
				RuntimeObject* L_4 = ___0_eventRoute;
				RuntimeObject* L_5 = V_1;
				NullCheck(L_4);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void MixedReality.Toolkit.Experimental.IXRInteractableEventRoute::Register(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractableEventRoute_t5237B2DC58868E7168F078A45539648FED42176E_il2cpp_TypeInfo_var, L_4, L_5);
			}

IL_0021_1:
			{
				// foreach (var activeInteractable in activeInteractables)
				bool L_6;
				L_6 = Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C((&V_0), Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouter::DisconnectAllEventRoutesFromKnownInteractables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_DisconnectAllEventRoutesFromKnownInteractables_m6BB6A580A6174946D4C0BF25498D452F0FC9D628 (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_mCED08157F9BBECF5C9781943201B246ACF5F2921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractableEventRoute_t5237B2DC58868E7168F078A45539648FED42176E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (eventRoutes != null)
		IXRInteractableEventRouteU5BU5D_t331148B96794E8C965E823457E7485938E758EA8* L_0 = __this->___eventRoutes_7;
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		// foreach (var interactable in activeInteractables)
		HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* L_1 = __this->___activeInteractables_4;
		NullCheck(L_1);
		Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6 L_2;
		L_2 = HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689(L_1, HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011((&V_0), Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003f_1;
			}

IL_0016_1:
			{
				// foreach (var interactable in activeInteractables)
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_inline((&V_0), Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_RuntimeMethod_var);
				V_1 = L_3;
				// for (int j = 0; j < eventRoutes.Length; j++)
				V_2 = 0;
				goto IL_0034_1;
			}

IL_0022_1:
			{
				// eventRoutes[j].Unregister(interactable);
				IXRInteractableEventRouteU5BU5D_t331148B96794E8C965E823457E7485938E758EA8* L_4 = __this->___eventRoutes_7;
				int32_t L_5 = V_2;
				NullCheck(L_4);
				int32_t L_6 = L_5;
				RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
				RuntimeObject* L_8 = V_1;
				NullCheck(L_7);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void MixedReality.Toolkit.Experimental.IXRInteractableEventRoute::Unregister(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractableEventRoute_t5237B2DC58868E7168F078A45539648FED42176E_il2cpp_TypeInfo_var, L_7, L_8);
				// for (int j = 0; j < eventRoutes.Length; j++)
				int32_t L_9 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
			}

IL_0034_1:
			{
				// for (int j = 0; j < eventRoutes.Length; j++)
				int32_t L_10 = V_2;
				IXRInteractableEventRouteU5BU5D_t331148B96794E8C965E823457E7485938E758EA8* L_11 = __this->___eventRoutes_7;
				NullCheck(L_11);
				if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
				{
					goto IL_0022_1;
				}
			}

IL_003f_1:
			{
				// foreach (var interactable in activeInteractables)
				bool L_12;
				L_12 = Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C((&V_0), Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0058;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0058:
	{
		// activeInteractables.Clear();
		HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* L_13 = __this->___activeInteractables_4;
		NullCheck(L_13);
		HashSet_1_Clear_mCED08157F9BBECF5C9781943201B246ACF5F2921(L_13, HashSet_1_Clear_mCED08157F9BBECF5C9781943201B246ACF5F2921_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouter::DisconnectEventRouteFromKnownInteractables(MixedReality.Toolkit.Experimental.IXRInteractableEventRoute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_DisconnectEventRouteFromKnownInteractables_mCEE164BE819A4AECF748AFB0C0DF92E5BC857461 (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, RuntimeObject* ___0_eventRoute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractableEventRoute_t5237B2DC58868E7168F078A45539648FED42176E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// if (eventRoute == null)
		RuntimeObject* L_0 = ___0_eventRoute;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// foreach (var activeInteractable in activeInteractables)
		HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* L_1 = __this->___activeInteractables_4;
		NullCheck(L_1);
		Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6 L_2;
		L_2 = HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689(L_1, HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011((&V_0), Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_0012_1:
			{
				// foreach (var activeInteractable in activeInteractables)
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_inline((&V_0), Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_RuntimeMethod_var);
				V_1 = L_3;
				// eventRoute.Unregister(activeInteractable);
				RuntimeObject* L_4 = ___0_eventRoute;
				RuntimeObject* L_5 = V_1;
				NullCheck(L_4);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void MixedReality.Toolkit.Experimental.IXRInteractableEventRoute::Unregister(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractableEventRoute_t5237B2DC58868E7168F078A45539648FED42176E_il2cpp_TypeInfo_var, L_4, L_5);
			}

IL_0021_1:
			{
				// foreach (var activeInteractable in activeInteractables)
				bool L_6;
				L_6 = Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C((&V_0), Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Boolean MixedReality.Toolkit.Experimental.InteractableEventRouter::IsValidChild(UnityEngine.XR.Interaction.Toolkit.IXRInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractableEventRouter_IsValidChild_m569EFA724C4C3C76AD5D8149207DD4DF58A781FE (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, RuntimeObject* ___0_interactable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* V_0 = NULL;
	{
		// return interactable is MonoBehaviour behaviour &&
		//     behaviour.gameObject != gameObject;
		RuntimeObject* L_0 = ___0_interactable;
		V_0 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = V_0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, L_4, NULL);
		return L_5;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter__ctor_m125D9BE1FBE88A8580E19717CC4D40510D8ECDCD (InteractableEventRouter_t9190E0D9D9E9629E0C9617EC3F71FB3D789C5356* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m321F26D964CAFF6263B06C83093EA9741D907815_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m43D76283B6313F754581B7B5D2678A7C90AF04A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly HashSet<IXRInteractable> activeInteractables = new HashSet<IXRInteractable>();
		HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* L_0 = (HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF*)il2cpp_codegen_object_new(HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m321F26D964CAFF6263B06C83093EA9741D907815(L_0, HashSet_1__ctor_m321F26D964CAFF6263B06C83093EA9741D907815_RuntimeMethod_var);
		__this->___activeInteractables_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeInteractables_4), (void*)L_0);
		// private readonly List<IXRInteractable> newInteractables = new List<IXRInteractable>();
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_1 = (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*)il2cpp_codegen_object_new(List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F(L_1, List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F_RuntimeMethod_var);
		__this->___newInteractables_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___newInteractables_5), (void*)L_1);
		// private readonly List<InteractableEventRouterChildSource> childSources = new List<InteractableEventRouterChildSource>();
		List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2* L_2 = (List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2*)il2cpp_codegen_object_new(List_1_tBD065EFFA9E1657C3ACA3FAAF14B818D2446C7F2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m43D76283B6313F754581B7B5D2678A7C90AF04A1(L_2, List_1__ctor_m43D76283B6313F754581B7B5D2678A7C90AF04A1_RuntimeMethod_var);
		__this->___childSources_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___childSources_6), (void*)L_2);
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
// System.Void MixedReality.Toolkit.Experimental.BubbleChildHoverEvents::Register(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,MixedReality.Toolkit.Experimental.IXRHoverInteractableParent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BubbleChildHoverEvents_Register_m19E75282AF561D91B5F43EBE89CA4DD2293A9249 (BubbleChildHoverEvents_t054E2B1D5B8B94625554910C34DEF7EF0E671F2F* __this, RuntimeObject* ___0_source, RuntimeObject* ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRHoverInteractableParent_t6FB3A3A722B91C5CD9B7B470009340B3DD459953_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source.hoverEntered.AddListener(target.OnChildHoverEntered);
		RuntimeObject* L_0 = ___0_source;
		NullCheck(L_0);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_1;
		L_1 = InterfaceFuncInvoker0< HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* >::Invoke(2 /* UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable::get_hoverEntered() */, IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___1_target;
		RuntimeObject* L_3 = L_2;
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_4 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_4, L_3, (intptr_t)((void*)GetInterfaceMethodInfo(L_3, 0, IXRHoverInteractableParent_t6FB3A3A722B91C5CD9B7B470009340B3DD459953_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F(L_1, L_4, UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		// source.hoverExited.AddListener(target.OnChildHoverExited);
		RuntimeObject* L_5 = ___0_source;
		NullCheck(L_5);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_6;
		L_6 = InterfaceFuncInvoker0< HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* >::Invoke(3 /* UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable::get_hoverExited() */, IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7 = ___1_target;
		RuntimeObject* L_8 = L_7;
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_9 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_9, L_8, (intptr_t)((void*)GetInterfaceMethodInfo(L_8, 1, IXRHoverInteractableParent_t6FB3A3A722B91C5CD9B7B470009340B3DD459953_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_6);
		UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722(L_6, L_9, UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Experimental.BubbleChildHoverEvents::Unregister(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,MixedReality.Toolkit.Experimental.IXRHoverInteractableParent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BubbleChildHoverEvents_Unregister_m7A31C5EA3F0119F9F39A2897084414AEB88471E7 (BubbleChildHoverEvents_t054E2B1D5B8B94625554910C34DEF7EF0E671F2F* __this, RuntimeObject* ___0_source, RuntimeObject* ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRHoverInteractableParent_t6FB3A3A722B91C5CD9B7B470009340B3DD459953_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source.hoverEntered.RemoveListener(target.OnChildHoverEntered);
		RuntimeObject* L_0 = ___0_source;
		NullCheck(L_0);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_1;
		L_1 = InterfaceFuncInvoker0< HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* >::Invoke(2 /* UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable::get_hoverEntered() */, IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___1_target;
		RuntimeObject* L_3 = L_2;
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_4 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_4, L_3, (intptr_t)((void*)GetInterfaceMethodInfo(L_3, 0, IXRHoverInteractableParent_t6FB3A3A722B91C5CD9B7B470009340B3DD459953_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33(L_1, L_4, UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var);
		// source.hoverExited.RemoveListener(target.OnChildHoverExited);
		RuntimeObject* L_5 = ___0_source;
		NullCheck(L_5);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_6;
		L_6 = InterfaceFuncInvoker0< HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* >::Invoke(3 /* UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable::get_hoverExited() */, IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7 = ___1_target;
		RuntimeObject* L_8 = L_7;
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_9 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_9, L_8, (intptr_t)((void*)GetInterfaceMethodInfo(L_8, 1, IXRHoverInteractableParent_t6FB3A3A722B91C5CD9B7B470009340B3DD459953_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_6);
		UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78(L_6, L_9, UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Experimental.BubbleChildHoverEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BubbleChildHoverEvents__ctor_m05A6BA884A18ED4111ABA51D141E691735AD9F7D (BubbleChildHoverEvents_t054E2B1D5B8B94625554910C34DEF7EF0E671F2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractableParentEventRoute_2__ctor_m982DC347358DD656B75A5740293F3B67581C33F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteractableParentEventRoute_2__ctor_m982DC347358DD656B75A5740293F3B67581C33F5(__this, InteractableParentEventRoute_2__ctor_m982DC347358DD656B75A5740293F3B67581C33F5_RuntimeMethod_var);
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
// System.Void MixedReality.Toolkit.Experimental.TrickleChildHoverEvents::Register(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,MixedReality.Toolkit.Experimental.IXRHoverInteractableChild)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrickleChildHoverEvents_Register_m6992CA8B14C86F74F789276FF4F915A997A7D6B3 (TrickleChildHoverEvents_t217FAA998A81F103C791939E674B6FCD3562E28E* __this, RuntimeObject* ___0_source, RuntimeObject* ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRHoverInteractableChild_tF68C380106FC974B4295D9AB1F0EA2C925ED2F12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source.hoverEntered.AddListener(target.OnParentHoverEntered);
		RuntimeObject* L_0 = ___0_source;
		NullCheck(L_0);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_1;
		L_1 = InterfaceFuncInvoker0< HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* >::Invoke(2 /* UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable::get_hoverEntered() */, IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___1_target;
		RuntimeObject* L_3 = L_2;
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_4 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_4, L_3, (intptr_t)((void*)GetInterfaceMethodInfo(L_3, 0, IXRHoverInteractableChild_tF68C380106FC974B4295D9AB1F0EA2C925ED2F12_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F(L_1, L_4, UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		// source.hoverExited.AddListener(target.OnParentHoverExited);
		RuntimeObject* L_5 = ___0_source;
		NullCheck(L_5);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_6;
		L_6 = InterfaceFuncInvoker0< HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* >::Invoke(3 /* UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable::get_hoverExited() */, IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7 = ___1_target;
		RuntimeObject* L_8 = L_7;
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_9 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_9, L_8, (intptr_t)((void*)GetInterfaceMethodInfo(L_8, 1, IXRHoverInteractableChild_tF68C380106FC974B4295D9AB1F0EA2C925ED2F12_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_6);
		UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722(L_6, L_9, UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Experimental.TrickleChildHoverEvents::Unregister(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,MixedReality.Toolkit.Experimental.IXRHoverInteractableChild)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrickleChildHoverEvents_Unregister_mDAD69DDACF289D995B9CA0AE1B284E3C33030807 (TrickleChildHoverEvents_t217FAA998A81F103C791939E674B6FCD3562E28E* __this, RuntimeObject* ___0_source, RuntimeObject* ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRHoverInteractableChild_tF68C380106FC974B4295D9AB1F0EA2C925ED2F12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source.hoverEntered.RemoveListener(target.OnParentHoverEntered);
		RuntimeObject* L_0 = ___0_source;
		NullCheck(L_0);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_1;
		L_1 = InterfaceFuncInvoker0< HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* >::Invoke(2 /* UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable::get_hoverEntered() */, IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___1_target;
		RuntimeObject* L_3 = L_2;
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_4 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_4, L_3, (intptr_t)((void*)GetInterfaceMethodInfo(L_3, 0, IXRHoverInteractableChild_tF68C380106FC974B4295D9AB1F0EA2C925ED2F12_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33(L_1, L_4, UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var);
		// source.hoverExited.RemoveListener(target.OnParentHoverExited);
		RuntimeObject* L_5 = ___0_source;
		NullCheck(L_5);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_6;
		L_6 = InterfaceFuncInvoker0< HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* >::Invoke(3 /* UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable::get_hoverExited() */, IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7 = ___1_target;
		RuntimeObject* L_8 = L_7;
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_9 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_9, L_8, (intptr_t)((void*)GetInterfaceMethodInfo(L_8, 1, IXRHoverInteractableChild_tF68C380106FC974B4295D9AB1F0EA2C925ED2F12_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_6);
		UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78(L_6, L_9, UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Experimental.TrickleChildHoverEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrickleChildHoverEvents__ctor_m200898D876DEC54AAA82AA99861584757A764EAE (TrickleChildHoverEvents_t217FAA998A81F103C791939E674B6FCD3562E28E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractableChildrenEventRoute_2__ctor_mA0433B97D69BE55967294C7CCF06E5883293585A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteractableChildrenEventRoute_2__ctor_mA0433B97D69BE55967294C7CCF06E5883293585A(__this, InteractableChildrenEventRoute_2__ctor_mA0433B97D69BE55967294C7CCF06E5883293585A_RuntimeMethod_var);
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
// System.Void MixedReality.Toolkit.Experimental.BubbleChildSelectEvents::Register(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,MixedReality.Toolkit.Experimental.IXRSelectInteractableParent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BubbleChildSelectEvents_Register_m16468C3DAA35F6A92345500FCF0185E7E5074828 (BubbleChildSelectEvents_t1D72A25522D070F527C1EBB95E11315CB5CD7245* __this, RuntimeObject* ___0_source, RuntimeObject* ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRSelectInteractableParent_t9202DD3B596CA2827F74C960A781DE6A55C2590D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source.selectEntered.AddListener(target.OnChildSelectEntered);
		RuntimeObject* L_0 = ___0_source;
		NullCheck(L_0);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_1;
		L_1 = InterfaceFuncInvoker0< SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* >::Invoke(2 /* UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable::get_selectEntered() */, IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___1_target;
		RuntimeObject* L_3 = L_2;
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_4 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_4, L_3, (intptr_t)((void*)GetInterfaceMethodInfo(L_3, 0, IXRSelectInteractableParent_t9202DD3B596CA2827F74C960A781DE6A55C2590D_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_1, L_4, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// source.selectExited.AddListener(target.OnChildSelectExited);
		RuntimeObject* L_5 = ___0_source;
		NullCheck(L_5);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_6;
		L_6 = InterfaceFuncInvoker0< SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* >::Invoke(3 /* UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable::get_selectExited() */, IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7 = ___1_target;
		RuntimeObject* L_8 = L_7;
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_9 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_9, L_8, (intptr_t)((void*)GetInterfaceMethodInfo(L_8, 1, IXRSelectInteractableParent_t9202DD3B596CA2827F74C960A781DE6A55C2590D_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_6);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_6, L_9, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Experimental.BubbleChildSelectEvents::Unregister(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,MixedReality.Toolkit.Experimental.IXRSelectInteractableParent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BubbleChildSelectEvents_Unregister_m5FFD94236CE65A268D56D1FB76CFF4A5F1785FC3 (BubbleChildSelectEvents_t1D72A25522D070F527C1EBB95E11315CB5CD7245* __this, RuntimeObject* ___0_source, RuntimeObject* ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRSelectInteractableParent_t9202DD3B596CA2827F74C960A781DE6A55C2590D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source.selectEntered.RemoveListener(target.OnChildSelectEntered);
		RuntimeObject* L_0 = ___0_source;
		NullCheck(L_0);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_1;
		L_1 = InterfaceFuncInvoker0< SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* >::Invoke(2 /* UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable::get_selectEntered() */, IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___1_target;
		RuntimeObject* L_3 = L_2;
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_4 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_4, L_3, (intptr_t)((void*)GetInterfaceMethodInfo(L_3, 0, IXRSelectInteractableParent_t9202DD3B596CA2827F74C960A781DE6A55C2590D_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_1, L_4, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// source.selectExited.RemoveListener(target.OnChildSelectExited);
		RuntimeObject* L_5 = ___0_source;
		NullCheck(L_5);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_6;
		L_6 = InterfaceFuncInvoker0< SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* >::Invoke(3 /* UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable::get_selectExited() */, IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7 = ___1_target;
		RuntimeObject* L_8 = L_7;
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_9 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_9, L_8, (intptr_t)((void*)GetInterfaceMethodInfo(L_8, 1, IXRSelectInteractableParent_t9202DD3B596CA2827F74C960A781DE6A55C2590D_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_6);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_6, L_9, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Experimental.BubbleChildSelectEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BubbleChildSelectEvents__ctor_m2D9FB7BC608F919406447962B707BF6842A0E536 (BubbleChildSelectEvents_t1D72A25522D070F527C1EBB95E11315CB5CD7245* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractableParentEventRoute_2__ctor_mA56CF2692998A4F6A2A7FED280C1B3A02B84D767_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteractableParentEventRoute_2__ctor_mA56CF2692998A4F6A2A7FED280C1B3A02B84D767(__this, InteractableParentEventRoute_2__ctor_mA56CF2692998A4F6A2A7FED280C1B3A02B84D767_RuntimeMethod_var);
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
// System.Void MixedReality.Toolkit.Experimental.TrickleChildSelectEvents::Register(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,MixedReality.Toolkit.Experimental.IXRSelectInteractableChild)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrickleChildSelectEvents_Register_mB30CA8DC411B24E1D0FF226C64047E5422F6B43F (TrickleChildSelectEvents_tFACC244834FE1C3FA1FE50F096E8EDEAE4D01C32* __this, RuntimeObject* ___0_source, RuntimeObject* ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRSelectInteractableChild_tE674FA6E51E26665F2AAAE5B1380135A829F82E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source.selectEntered.AddListener(target.OnParentSelectEntered);
		RuntimeObject* L_0 = ___0_source;
		NullCheck(L_0);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_1;
		L_1 = InterfaceFuncInvoker0< SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* >::Invoke(2 /* UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable::get_selectEntered() */, IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___1_target;
		RuntimeObject* L_3 = L_2;
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_4 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_4, L_3, (intptr_t)((void*)GetInterfaceMethodInfo(L_3, 0, IXRSelectInteractableChild_tE674FA6E51E26665F2AAAE5B1380135A829F82E2_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_1, L_4, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// source.selectExited.AddListener(target.OnParentSelectExited);
		RuntimeObject* L_5 = ___0_source;
		NullCheck(L_5);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_6;
		L_6 = InterfaceFuncInvoker0< SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* >::Invoke(3 /* UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable::get_selectExited() */, IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7 = ___1_target;
		RuntimeObject* L_8 = L_7;
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_9 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_9, L_8, (intptr_t)((void*)GetInterfaceMethodInfo(L_8, 1, IXRSelectInteractableChild_tE674FA6E51E26665F2AAAE5B1380135A829F82E2_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_6);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_6, L_9, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Experimental.TrickleChildSelectEvents::Unregister(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,MixedReality.Toolkit.Experimental.IXRSelectInteractableChild)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrickleChildSelectEvents_Unregister_mC0CDFDD58A3A6FB697213E137F8000A83CA5476F (TrickleChildSelectEvents_tFACC244834FE1C3FA1FE50F096E8EDEAE4D01C32* __this, RuntimeObject* ___0_source, RuntimeObject* ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRSelectInteractableChild_tE674FA6E51E26665F2AAAE5B1380135A829F82E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source.selectEntered.RemoveListener(target.OnParentSelectEntered);
		RuntimeObject* L_0 = ___0_source;
		NullCheck(L_0);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_1;
		L_1 = InterfaceFuncInvoker0< SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* >::Invoke(2 /* UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable::get_selectEntered() */, IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___1_target;
		RuntimeObject* L_3 = L_2;
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_4 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_4, L_3, (intptr_t)((void*)GetInterfaceMethodInfo(L_3, 0, IXRSelectInteractableChild_tE674FA6E51E26665F2AAAE5B1380135A829F82E2_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_1, L_4, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// source.selectExited.RemoveListener(target.OnParentSelectExited);
		RuntimeObject* L_5 = ___0_source;
		NullCheck(L_5);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_6;
		L_6 = InterfaceFuncInvoker0< SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* >::Invoke(3 /* UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable::get_selectExited() */, IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7 = ___1_target;
		RuntimeObject* L_8 = L_7;
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_9 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_9, L_8, (intptr_t)((void*)GetInterfaceMethodInfo(L_8, 1, IXRSelectInteractableChild_tE674FA6E51E26665F2AAAE5B1380135A829F82E2_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_6);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_6, L_9, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Experimental.TrickleChildSelectEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrickleChildSelectEvents__ctor_m7C4E48F6830190E9997785C45A5DBC7ED1F9901A (TrickleChildSelectEvents_tFACC244834FE1C3FA1FE50F096E8EDEAE4D01C32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractableChildrenEventRoute_2__ctor_m2D020850E8339485A299506C229759B09CAB4E54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteractableChildrenEventRoute_2__ctor_m2D020850E8339485A299506C229759B09CAB4E54(__this, InteractableChildrenEventRoute_2__ctor_m2D020850E8339485A299506C229759B09CAB4E54_RuntimeMethod_var);
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
// UnityEngine.Events.UnityEvent MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource::get_ChildrenChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* InteractableEventRouterChildSource_get_ChildrenChanged_m4F4B29A905100AE25F6B6CA570C9D02B38B68EE4 (InteractableEventRouterChildSource_t477444515B8E2CF4D986567BF53CEA53ADDF3155* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent ChildrenChanged => childrenChanged;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___childrenChanged_4;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource::OnTransformChildrenChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouterChildSource_OnTransformChildrenChanged_m403532AFD221FA11721B6E8905DCB91307AD646C (InteractableEventRouterChildSource_t477444515B8E2CF4D986567BF53CEA53ADDF3155* __this, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// childrenChanged?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___childrenChanged_4;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0;
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
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouterChildSource__ctor_m06CEE4C7A47B4A07AFA42A64E626334A3CDE5A86 (InteractableEventRouterChildSource_t477444515B8E2CF4D986567BF53CEA53ADDF3155* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private UnityEvent childrenChanged = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___childrenChanged_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___childrenChanged_4), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemProvider_get_running_m0331B5275B76BA00ACD2635216B455B599E41420_inline (SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_Running_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeywordRecognitionSubsystemCinfo_get_IsCloudBased_mA52090A24B4A7D3040A04C465808224BC96BC38D_inline (KeywordRecognitionSubsystemCinfo_tEC7E1F42D21E5B94FFD125D3F1FE6C29C530692E* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = __this->___U3CIsCloudBasedU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystemDescriptor_set_IsCloudBased_mEC3CB64F8CFDBBF1CD31838BDCEFDDE440755DB5_inline (KeywordRecognitionSubsystemDescriptor_t9429CB51C79BA89EFF1526814D23E80FCE7310B2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CIsCloudBasedU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MRTKSubsystemCinfo_get_Name_m8E8FD32AA187B506BD35A5F5BEBFF5EEA09999EB_inline (MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MRTKSubsystemCinfo_get_SubsystemTypeOverride_mD67F25EFA1140AC0850A0BD8F47C40186D198700_inline (MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898* __this, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MRTKSubsystemCinfo_get_ProviderType_m7288FD8F4C568C3769A9A323BA33106E76187EC3_inline (MRTKSubsystemCinfo_t92B988A832B9F0B54340E504F46F68CF625F6898* __this, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get; set; }
		Type_t* L_0 = __this->___U3CProviderTypeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* InteractableEventRouterChildSource_get_ChildrenChanged_m4F4B29A905100AE25F6B6CA570C9D02B38B68EE4_inline (InteractableEventRouterChildSource_t477444515B8E2CF4D986567BF53CEA53ADDF3155* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent ChildrenChanged => childrenChanged;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___childrenChanged_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
