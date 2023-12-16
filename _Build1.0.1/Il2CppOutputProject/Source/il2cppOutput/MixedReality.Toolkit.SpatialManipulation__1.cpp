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

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.FocusEnterEventArgs>
struct Action_1_t21CAFB7BDB821893A235C18E7C2300D802FE3FDD;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.FocusExitEventArgs>
struct Action_1_t393A03608230CE563F8246429100A321C42D935A;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupRegisteredEventArgs>
struct Action_1_t2AD535AD822BBF4C84782176E131C879B7DE281C;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupUnregisteredEventArgs>
struct Action_1_t253935EBEC6470ADBF9515523E953BB179550B28;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single>
struct BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C;
// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct Dictionary_2_t27580B46889C7E97A047AEB3AD96F6F5B67AB8C5;
// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,UnityEngine.XR.Interaction.Toolkit.XRInteractableSnapVolume>
struct Dictionary_2_t0656BBB97C60F5E8FCF233011632EEA5F601B241;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single>
struct Dictionary_2_tEABA4693399BB94F9F9031F041277F4D01CA9BB2;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRTargetPriorityInteractor>>
struct Dictionary_2_tC5C84A32C9B20E8410708E4451B5D63451CC3856;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter>
struct ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter>
struct ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct HashSetList_1_tC521CA1513DA32AFAD8144C7529793E24EA52945;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable>
struct HashSetList_1_tC1867B681AE7023306C341F97E7483BB3C8532B2;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct HashSetList_1_t4D485A2E14AF33326E4D8B5E60BEDD0E47CEE3F0;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup>
struct HashSet_1_t6B8E4B90487F48FD475841A041733E061ED91601;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>
struct HashSet_1_tD23C14FE172DE7F2894A3E41903EDCA5C6172BAF;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_tC0A12A847AF97F369A5CE9A0CCE71CE18EE1440E;
// System.Collections.Generic.IComparer`1<MixedReality.Toolkit.SpatialManipulation.TransformConstraint>
struct IComparer_1_t240CE9B64BBCBDB5B817924C73160608C312F901;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<MixedReality.Toolkit.SpatialManipulation.Solver>
struct IEnumerable_1_t6135AA1C50D0E9B2B6904B470D51D762A96FF0FF;
// System.Collections.Generic.IList`1<MixedReality.Toolkit.SpatialManipulation.Solver>
struct IList_1_t0C9422770C630EB553291C32BA1C9173395E0E0C;
// System.Collections.Generic.IReadOnlyCollection`1<MixedReality.Toolkit.SpatialManipulation.Solver>
struct IReadOnlyCollection_1_t99BB60E6EFB31A0F0753EB4B93217B5E8D512458;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRTargetPriorityInteractor>>
struct LinkedPool_1_tC253D76E8F52E23D166062D7609A341C95911E17;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>
struct LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.FocusEnterEventArgs>
struct LinkedPool_1_t9FD69F9E8D0E5201B462878F5C714293C8C32ED6;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.FocusExitEventArgs>
struct LinkedPool_1_t5664B48CF6EDC8E5B37736F22883798025097DB1;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct LinkedPool_1_tE1F615D0B985A30826D9B07A85F77778A812B6CD;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct LinkedPool_1_tEEF96C82811244992CA5ED26E238A2EFFA5EC24F;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct LinkedPool_1_tEB7BCD31EE340DFF1ED0FB348602497E5C1C5A2B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct LinkedPool_1_t96321B5D699D51D9041F43D96540BE192E0351BE;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupRegisteredEventArgs>
struct LinkedPool_1_t4EEC56F1534A4EC21AC8706EBAC87402AD3F17BE;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupUnregisteredEventArgs>
struct LinkedPool_1_tC453A1423D0BB4062CA1606FC4BB837E9E86BCF2;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct LinkedPool_1_t235D7006751154A9DAD14CCF74A1A212045A491F;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct LinkedPool_1_tF18FDD2E89CDCB970F8AFE5FB4DD92D95CF719D0;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct LinkedPool_1_t53B982701F6EA60678DC8C4E0991580C5D423D67;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct LinkedPool_1_t30C49977788BEDEFABC446A2625FA219DC309E62;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable>
struct List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup>
struct List_1_tC2CA2F00C214B8C7E92F689464A85292A6D89FA8;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>
struct List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.Solver>
struct List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC;
// System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.TransformConstraint>
struct List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t02510C493B34D49F210C22C40442D863A08509CB;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRInteractionManager>
struct List_1_t90B2E73B2119C38AE52BD0E0BB04E6B0477F6D7B;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// System.Collections.ObjectModel.ReadOnlyCollection`1<MixedReality.Toolkit.SpatialManipulation.Solver>
struct ReadOnlyCollection_1_tE3D820D1F14A11D461658535E50B780007C484E3;
// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct RegistrationList_1_t5B8AA175E254DFA1F9440925B6607DDCE1A48078;
// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup>
struct RegistrationList_1_t59D6072B55134A385BD91BA10DD1C732AD6C2E6C;
// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>
struct RegistrationList_1_t1AFBA9D926D100296ED3F61A8BE02BA1EDC23859;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractor[]
struct IXRInteractorU5BU5D_tAB644C2BFD29B3A34A98CFD6DBFE9F9C36BDE891;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// MixedReality.Toolkit.SpatialManipulation.Solver[]
struct SolverU5BU5D_t65353925DF1228C09DB3EC471A8D3B7DF2A9C055;
// MixedReality.Toolkit.SpatialManipulation.TransformConstraint[]
struct TransformConstraintU5BU5D_t3742C9D3DE62CB9F7798B34808208FBC97169457;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.Interaction.Toolkit.ActionBasedController
struct ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// MixedReality.Toolkit.SpatialManipulation.ConstraintExecOrderComparer
struct ConstraintExecOrderComparer_tBE3F1481D739EB9AEF1556BC3F06F5D56F472B67;
// MixedReality.Toolkit.ControllerLookup
struct ControllerLookup_t546F69017B49B4DB24E47BF1551B5135DB20B7A3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// MixedReality.Toolkit.Subsystems.IHandsAggregatorSubsystem
struct IHandsAggregatorSubsystem_t34A0F2983150896D0971E529B96C0964F824B1A9;
// UnityEngine.XR.Interaction.Toolkit.IXRFocusInteractable
struct IXRFocusInteractable_tC51F05C774C48143B23BF42507151489CD486AA0;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable
struct IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup
struct IXRInteractionGroup_tAD9069A6C37036CE5C97D68CF2F97B1F25044D5D;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractor
struct IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735;
// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter
struct IXRTargetFilter_t51750E0C671ECA90F38CC75BCD395285E61D2778;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// MixedReality.Toolkit.SpatialManipulation.Orbital
struct Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF;
// MixedReality.Toolkit.SpatialManipulation.Overlap
struct Overlap_tFE1BF0BCFA303A742941C61D8DFECB46325D0736;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// MixedReality.Toolkit.SpatialManipulation.RadialView
struct RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// MixedReality.Toolkit.SpatialManipulation.Solver
struct Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578;
// MixedReality.Toolkit.SpatialManipulation.SolverHandler
struct SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2;
// System.String
struct String_t;
// MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism
struct SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2;
// MixedReality.Toolkit.SpatialManipulation.TapToPlace
struct TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// MixedReality.Toolkit.SpatialManipulation.TransformConstraint
struct TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158;
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter
struct XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F;
// UnityEngine.XR.Interaction.Toolkit.XRControllerState
struct XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
struct XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;

IL2CPP_EXTERN_C RuntimeClass* ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHandsAggregatorSubsystem_t34A0F2983150896D0971E529B96C0964F824B1A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityRaycaster_t684278FB530FB57C502613442034953C1D139E83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Overlap_tFE1BF0BCFA303A742941C61D8DFECB46325D0736_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06620C4FFB77E4D531D0907F2C25F88CC2060A8D;
IL2CPP_EXTERN_C String_t* _stringLiteral0C5F77CBC6B48EEFA86CFC18E2E3A9CDF9071345;
IL2CPP_EXTERN_C String_t* _stringLiteral180B3BC56463B1A52304374A2002E6BC71CD0AAF;
IL2CPP_EXTERN_C String_t* _stringLiteral2CD00843945D07EA048DEB3291CC6916EE4EA58B;
IL2CPP_EXTERN_C String_t* _stringLiteral32E2B8232B2A08F835DCBBADA5F6DD4AC8F950D6;
IL2CPP_EXTERN_C String_t* _stringLiteral386364D784E9EBB79BC2A529A56F1826D1CD16F6;
IL2CPP_EXTERN_C String_t* _stringLiteral3DA576B330FF38E27262658AB85457F8F686E381;
IL2CPP_EXTERN_C String_t* _stringLiteral4069BFE2C10C7C96B347AFEE648D6F737B8E03B2;
IL2CPP_EXTERN_C String_t* _stringLiteral40725C381EA894578A0B93C4649F8531D3F9A7B5;
IL2CPP_EXTERN_C String_t* _stringLiteral4A465FF80F4FBEF13B6C41DD4A6D70DA1B682CCF;
IL2CPP_EXTERN_C String_t* _stringLiteral4FD09F0A748FACEE89654EC33115778AC9B649C5;
IL2CPP_EXTERN_C String_t* _stringLiteral5066539D6C39CF0BDA4491CDE53AD5E741C66761;
IL2CPP_EXTERN_C String_t* _stringLiteral5529465409870544CE39603F0D2335F17AE8D433;
IL2CPP_EXTERN_C String_t* _stringLiteral5AF9D8A6905692F27A4D66D976675934A990305D;
IL2CPP_EXTERN_C String_t* _stringLiteral61DB809903C95AF153BB9D39E15FCAC1EFD46716;
IL2CPP_EXTERN_C String_t* _stringLiteral664DB4A50174C557D235A3CD5502B5C937DD54E2;
IL2CPP_EXTERN_C String_t* _stringLiteral846C705B2B3B1C5DB9D011DAB1F52295B1617733;
IL2CPP_EXTERN_C String_t* _stringLiteralA5D8D154E5D9B4EACA86B890F2045DDCA6D915C5;
IL2CPP_EXTERN_C String_t* _stringLiteralCC380BC235C993FBE6F3BAE6FFCC9ECB99A9D861;
IL2CPP_EXTERN_C String_t* _stringLiteralD1811AA5C8D6DF915964E9D0E9CAFE3363BF78E4;
IL2CPP_EXTERN_C String_t* _stringLiteralD4688CA92F8ABA1648F41FC47174A407BAEC8C93;
IL2CPP_EXTERN_C String_t* _stringLiteralD68B6932B839E25BF967C1D8E8D31E1CF6BF1CFB;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentCache_1_FindFirstActiveInstance_mC8779F66BA148B9E11A33E628B0CED9744DEFD2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentCache_1_FindFirstActiveInstance_mE59FFA961F15E3B3EC8A0DBED8A963491E47737C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_m1847059692008A57D71105CCAF27ED51915680F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisSolver_t5BF456842BD6B3971A6718B914DD8B3343C96578_mB80A9DDF8CE9AC8E8D3AC394D6E8260243C8B7E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Intersect_TisSolver_t5BF456842BD6B3971A6718B914DD8B3343C96578_m64CBA93CBF786C0797D12E19B49E386FB852EB21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisSolver_t5BF456842BD6B3971A6718B914DD8B3343C96578_mC48E5FA97422560A72EF94202F63B7523BDA37D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7B6A479EF2BDF57F327EFB5AEC4285AE6F431D61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m47352F09D02E5FC7482850AD63DAD63051D03C67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF79348DB8CECE372E5E3B0F7FAB741021D50B682_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m4055A2B32D5AF6F6793124739C0ABF204BB81996_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9AAE4C6F3E0D42B412DF0B5FF0E62CA990DCDD99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC2AC6555E1F0B8D452B97C2BC2A55C1E9DEF674E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AsReadOnly_m93E02464160F1A6096252B1331D9F3EF6CD1A68C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_BinarySearch_mC66C14467FD2F8F870B2B58AC64715AF79E268BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m7C7470B753AF4DA999567303ED3EF584F106717B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m873F1F14F62CE615AB1F4C93B0C015E77D0AB760_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m65384599E5A8B4DFA1ED923BF8712E8B5525B5E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mA327316FB8027C5C066A0D7AC1350875AAC45D8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB79B4BD45ADAE1FA30B5B09D09C7E9155C0A8F72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m3B059906CFBF53F7673C207FC5DFD35F2460FDAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m0FA645EB65EDC117F5781E1DEA6FBAAACC970B96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m256EFCAABB46D24687868F0C3836D3BB72B5952A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mED3BD63F0FDA10CD4EE1DC17EE6137994655F793_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m15FD5FE5CFD518986DC6788827ADC5F8BDDA2466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m50000F8D414BFBF142A42777CA34EC62736B728F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4507899389EBE7C487F76469818C2C9757CCBD26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC46E60A706165ED16D0D5CC5BAAA3EF71967138F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TapToPlace_StopPlacementViaPerformedAction_mEF8850E2A5B705BAF3B760BFB1151FAB57BA0943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TapToPlace_StopPlacementViaSelect_m2E8DFC996F04B9E81049717846E8C45582628969_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>
struct List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IXRInteractorU5BU5D_tAB644C2BFD29B3A34A98CFD6DBFE9F9C36BDE891* ____items_1;
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

// System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.Solver>
struct List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SolverU5BU5D_t65353925DF1228C09DB3EC471A8D3B7DF2A9C055* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.TransformConstraint>
struct List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformConstraintU5BU5D_t3742C9D3DE62CB9F7798B34808208FBC97169457* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<MixedReality.Toolkit.SpatialManipulation.Solver>
struct ReadOnlyCollection_1_tE3D820D1F14A11D461658535E50B780007C484E3  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t3CD147085922794809D821E8EEC3AD73BDFB9678  : public RuntimeObject
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

// MixedReality.Toolkit.SpatialManipulation.ConstraintExecOrderComparer
struct ConstraintExecOrderComparer_tBE3F1481D739EB9AEF1556BC3F06F5D56F472B67  : public RuntimeObject
{
};

// MixedReality.Toolkit.SpatialManipulation.ConstraintUtils
struct ConstraintUtils_t9AC2196705DE08A245A4D80C77DE74BF27FA0337  : public RuntimeObject
{
};

// MixedReality.Toolkit.SpatialManipulation.InteractionFlagsExtensions
struct InteractionFlagsExtensions_t2C0F796E925473C0BE8705949C17AC154A37E5EE  : public RuntimeObject
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>
struct Enumerator_t7FB3FB7F9BEBFAFD5D4A95FDE8494494B3C52A4C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35* ____list_0;
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

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<UnityEngine.XR.XRNode>
struct Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD 
{
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
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

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 
{
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB 
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Value
	float ___m_Value_0;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Active
	bool ___m_Active_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_ActivatedThisFrame
	bool ___m_ActivatedThisFrame_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_DeactivatedThisFrame
	bool ___m_DeactivatedThisFrame_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_pinvoke
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_com
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
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

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
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

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t4E9893ED008BA3F6C24DD419E4EED10406E061FD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t4E9893ED008BA3F6C24DD419E4EED10406E061FD__padding[16];
	};
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
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

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// MixedReality.Toolkit.RayStep
struct RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5 
{
	// UnityEngine.Vector3 MixedReality.Toolkit.RayStep::<Origin>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3COriginU3Ek__BackingField_3;
	// UnityEngine.Vector3 MixedReality.Toolkit.RayStep::<Terminus>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CTerminusU3Ek__BackingField_4;
	// UnityEngine.Vector3 MixedReality.Toolkit.RayStep::<Direction>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CDirectionU3Ek__BackingField_5;
	// System.Single MixedReality.Toolkit.RayStep::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_6;
	// System.Single MixedReality.Toolkit.RayStep::epsilon
	float ___epsilon_7;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0  : public UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8
{
};

// MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed
struct Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B 
{
	// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::<Current>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CCurrentU3Ek__BackingField_0;
	// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::<Goal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CGoalU3Ek__BackingField_1;
	// System.Single MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::<SmoothTime>k__BackingField
	float ___U3CSmoothTimeU3Ek__BackingField_2;
};

// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// MixedReality.Toolkit.HandJointPose
struct HandJointPose_tFE6CB46BC73D00546E034E74333892993FFF9FAD 
{
	// UnityEngine.Pose MixedReality.Toolkit.HandJointPose::pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_0;
	// System.Single MixedReality.Toolkit.HandJointPose::radius
	float ___radius_1;
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// MixedReality.Toolkit.MixedRealityTransform
struct MixedRealityTransform_t9E541DB196CB2311E30A3C29EE8252D6C5BA3745 
{
	// UnityEngine.Pose MixedReality.Toolkit.MixedRealityTransform::pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_1;
	// UnityEngine.Vector3 MixedReality.Toolkit.MixedRealityTransform::scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_2;
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

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B  : public MulticastDelegate_t
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

// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionReference::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_4;
	// System.String UnityEngine.InputSystem.InputActionReference::m_ActionId
	String_t* ___m_ActionId_5;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_6;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// MixedReality.Toolkit.ControllerLookup
struct ControllerLookup_t546F69017B49B4DB24E47BF1551B5135DB20B7A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController MixedReality.Toolkit.ControllerLookup::gazeController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___gazeController_4;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController MixedReality.Toolkit.ControllerLookup::leftHandController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___leftHandController_5;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController MixedReality.Toolkit.ControllerLookup::rightHandController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___rightHandController_6;
};

// MixedReality.Toolkit.SpatialManipulation.Solver
struct Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.Solver::updateLinkedTransform
	bool ___updateLinkedTransform_5;
	// System.Single MixedReality.Toolkit.SpatialManipulation.Solver::moveLerpTime
	float ___moveLerpTime_6;
	// System.Single MixedReality.Toolkit.SpatialManipulation.Solver::rotateLerpTime
	float ___rotateLerpTime_7;
	// System.Single MixedReality.Toolkit.SpatialManipulation.Solver::scaleLerpTime
	float ___scaleLerpTime_8;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.Solver::maintainScaleOnInitialization
	bool ___maintainScaleOnInitialization_9;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.Solver::smoothing
	bool ___smoothing_10;
	// System.Single MixedReality.Toolkit.SpatialManipulation.Solver::lifetime
	float ___lifetime_11;
	// System.Single MixedReality.Toolkit.SpatialManipulation.Solver::currentLifetime
	float ___currentLifetime_12;
	// MixedReality.Toolkit.SpatialManipulation.SolverHandler MixedReality.Toolkit.SpatialManipulation.Solver::SolverHandler
	SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* ___SolverHandler_13;
};

// MixedReality.Toolkit.SpatialManipulation.SolverHandler
struct SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor MixedReality.Toolkit.SpatialManipulation.SolverHandler::leftInteractor
	XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___leftInteractor_4;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor MixedReality.Toolkit.SpatialManipulation.SolverHandler::rightInteractor
	XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___rightInteractor_5;
	// MixedReality.Toolkit.SpatialManipulation.TrackedObjectType MixedReality.Toolkit.SpatialManipulation.SolverHandler::trackedTargetType
	int32_t ___trackedTargetType_6;
	// MixedReality.Toolkit.Handedness MixedReality.Toolkit.SpatialManipulation.SolverHandler::trackedHandedness
	int32_t ___trackedHandedness_7;
	// MixedReality.Toolkit.TrackedHandJoint MixedReality.Toolkit.SpatialManipulation.SolverHandler::trackedHandJoint
	int32_t ___trackedHandJoint_8;
	// UnityEngine.Transform MixedReality.Toolkit.SpatialManipulation.SolverHandler::transformOverride
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transformOverride_9;
	// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.SolverHandler::additionalOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___additionalOffset_10;
	// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.SolverHandler::additionalRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___additionalRotation_11;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.SolverHandler::updateSolvers
	bool ___updateSolvers_12;
	// System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.Solver> MixedReality.Toolkit.SpatialManipulation.SolverHandler::solvers
	List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* ___solvers_13;
	// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.SolverHandler::<GoalPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CGoalPositionU3Ek__BackingField_14;
	// UnityEngine.Quaternion MixedReality.Toolkit.SpatialManipulation.SolverHandler::<GoalRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CGoalRotationU3Ek__BackingField_15;
	// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.SolverHandler::<GoalScale>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CGoalScaleU3Ek__BackingField_16;
	// MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed MixedReality.Toolkit.SpatialManipulation.SolverHandler::<AltScale>k__BackingField
	Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B ___U3CAltScaleU3Ek__BackingField_17;
	// System.Single MixedReality.Toolkit.SpatialManipulation.SolverHandler::<DeltaTime>k__BackingField
	float ___U3CDeltaTimeU3Ek__BackingField_18;
	// MixedReality.Toolkit.Handedness MixedReality.Toolkit.SpatialManipulation.SolverHandler::currentTrackedHandedness
	int32_t ___currentTrackedHandedness_19;
	// MixedReality.Toolkit.Handedness MixedReality.Toolkit.SpatialManipulation.SolverHandler::preferredTrackedHandedness
	int32_t ___preferredTrackedHandedness_20;
	// UnityEngine.GameObject MixedReality.Toolkit.SpatialManipulation.SolverHandler::trackingTarget
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___trackingTarget_21;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor MixedReality.Toolkit.SpatialManipulation.SolverHandler::controllerInteractor
	XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___controllerInteractor_22;
	// System.Single MixedReality.Toolkit.SpatialManipulation.SolverHandler::lastUpdateTime
	float ___lastUpdateTime_23;
	// System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.Solver> MixedReality.Toolkit.SpatialManipulation.SolverHandler::inspectorOrderedSolvers
	List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* ___inspectorOrderedSolvers_25;
	// UnityEngine.Transform MixedReality.Toolkit.SpatialManipulation.SolverHandler::cachedHandJointTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cachedHandJointTransform_26;
};

// MixedReality.Toolkit.SpatialManipulation.TransformConstraint
struct TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MixedReality.Toolkit.SpatialManipulation.ManipulationHandFlags MixedReality.Toolkit.SpatialManipulation.TransformConstraint::handType
	int32_t ___handType_4;
	// MixedReality.Toolkit.SpatialManipulation.ManipulationProximityFlags MixedReality.Toolkit.SpatialManipulation.TransformConstraint::proximityType
	int32_t ___proximityType_5;
	// System.Int32 MixedReality.Toolkit.SpatialManipulation.TransformConstraint::executionOrder
	int32_t ___executionOrder_6;
	// MixedReality.Toolkit.MixedRealityTransform MixedReality.Toolkit.SpatialManipulation.TransformConstraint::WorldPoseOnManipulationStart
	MixedRealityTransform_t9E541DB196CB2311E30A3C29EE8252D6C5BA3745 ___WorldPoseOnManipulationStart_7;
	// MixedReality.Toolkit.MixedRealityTransform MixedReality.Toolkit.SpatialManipulation.TransformConstraint::InitialWorldPose
	MixedRealityTransform_t9E541DB196CB2311E30A3C29EE8252D6C5BA3745 ___InitialWorldPose_8;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController/UpdateType UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UpdateTrackingType
	int32_t ___m_UpdateTrackingType_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputTracking
	bool ___m_EnableInputTracking_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputActions
	bool ___m_EnableInputActions_6;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelPrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelPrefab_7;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelParent_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_Model
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Model_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_AnimateModel
	bool ___m_AnimateModel_10;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelSelectTransition
	String_t* ___m_ModelSelectTransition_11;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelDeSelectTransition
	String_t* ___m_ModelDeSelectTransition_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HideControllerModel
	bool ___m_HideControllerModel_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_SelectInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_SelectInteractionState_14;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ActivateInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_ActivateInteractionState_15;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UIPressInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_UIPressInteractionState_16;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UIScrollValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UIScrollValue_17;
	// UnityEngine.XR.Interaction.Toolkit.XRControllerState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ControllerState
	XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* ___m_ControllerState_18;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_CreateControllerState
	bool ___m_CreateControllerState_19;
	// UnityEngine.Animator UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_ModelAnimator_20;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HasWarnedAnimatorMissing
	bool ___m_HasWarnedAnimatorMissing_21;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_PerformSetup
	bool ___m_PerformSetup_22;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlDeadzone>k__BackingField
	float ___U3CanchorControlDeadzoneU3Ek__BackingField_23;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlOffAxisDeadzone>k__BackingField
	float ___U3CanchorControlOffAxisDeadzoneU3Ek__BackingField_24;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::registered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___registered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::unregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___unregistered_7;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_8;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<containingGroup>k__BackingField
	RuntimeObject* ___U3CcontainingGroupU3Ek__BackingField_9;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_10;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_11;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_KeepSelectedTargetValid
	bool ___m_KeepSelectedTargetValid_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_DisableVisualsWhenBlockedInGroup
	bool ___m_DisableVisualsWhenBlockedInGroup_14;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectedInteractable
	XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___m_StartingSelectedInteractable_15;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingTargetFilter
	XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F* ___m_StartingTargetFilter_16;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_17;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_18;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_19;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_20;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_TargetFilter
	RuntimeObject* ___m_TargetFilter_21;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowHover
	bool ___m_AllowHover_22;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowSelect
	bool ___m_AllowSelect_23;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_IsPerformingManualInteraction
	bool ___m_IsPerformingManualInteraction_24;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractablesHovered
	HashSetList_1_tC521CA1513DA32AFAD8144C7529793E24EA52945* ___m_InteractablesHovered_25;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractablesSelected
	HashSetList_1_t4D485A2E14AF33326E4D8B5E60BEDD0E47CEE3F0* ___m_InteractablesSelected_26;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<firstInteractableSelected>k__BackingField
	RuntimeObject* ___U3CfirstInteractableSelectedU3Ek__BackingField_27;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<isInteractingWithUI>k__BackingField
	bool ___U3CisInteractingWithUIU3Ek__BackingField_28;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_29;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_30;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_31;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_32;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LargestInteractionStrength
	BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* ___m_LargestInteractionStrength_33;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_AttachPoseOnSelect_34;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LocalAttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_LocalAttachPoseOnSelect_35;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionStrengthInteractables
	HashSetList_1_tC1867B681AE7023306C341F97E7483BB3C8532B2* ___m_InteractionStrengthInteractables_36;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionStrengths
	Dictionary_2_tEABA4693399BB94F9F9031F041277F4D01CA9BB2* ___m_InteractionStrengths_37;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_ManualInteractionInteractable
	RuntimeObject* ___m_ManualInteractionInteractable_38;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_39;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<useAttachPointVelocity>k__BackingField
	bool ___U3CuseAttachPointVelocityU3Ek__BackingField_41;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPointVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AttachPointVelocity_42;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPointAngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AttachPointAngularVelocity_43;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_XROrigin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_XROrigin_44;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HasXROrigin
	bool ___m_HasXROrigin_45;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_FailedToFindXROrigin
	bool ___m_FailedToFindXROrigin_46;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetPriorityMode>k__BackingField
	int32_t ___U3CtargetPriorityModeU3Ek__BackingField_47;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetsForSelection>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CtargetsForSelectionU3Ek__BackingField_48;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_DeltaTimeStart
	float ___m_DeltaTimeStart_49;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_FrameOn
	int32_t ___m_FrameOn_51;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityPositionsCache
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_VelocityPositionsCache_52;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityNormalsCache
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_VelocityNormalsCache_53;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityPositionsSum
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_VelocityPositionsSum_54;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityNormalsSum
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_VelocityNormalsSum_55;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverEntered_56;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverExited_57;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectEntered_58;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectExited_59;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<hoverTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3ChoverTargetsU3Ek__BackingField_60;
};

// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactionGroupRegistered
	Action_1_t2AD535AD822BBF4C84782176E131C879B7DE281C* ___interactionGroupRegistered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactionGroupUnregistered
	Action_1_t253935EBEC6470ADBF9515523E953BB179550B28* ___interactionGroupUnregistered_5;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactorRegistered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___interactorRegistered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactorUnregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___interactorUnregistered_7;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactableRegistered
	Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___interactableRegistered_8;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::interactableUnregistered
	Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___interactableUnregistered_9;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.FocusEnterEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::focusGained
	Action_1_t21CAFB7BDB821893A235C18E7C2300D802FE3FDD* ___focusGained_10;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.FocusExitEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::focusLost
	Action_1_t393A03608230CE563F8246429100A321C42D935A* ___focusLost_11;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_12;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_13;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_14;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_15;
	// UnityEngine.XR.Interaction.Toolkit.IXRFocusInteractable UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::<lastFocused>k__BackingField
	RuntimeObject* ___U3ClastFocusedU3Ek__BackingField_16;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ColliderToInteractableMap
	Dictionary_2_t27580B46889C7E97A047AEB3AD96F6F5B67AB8C5* ___m_ColliderToInteractableMap_18;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,UnityEngine.XR.Interaction.Toolkit.XRInteractableSnapVolume> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ColliderToSnapVolumes
	Dictionary_2_t0656BBB97C60F5E8FCF233011632EEA5F601B241* ___m_ColliderToSnapVolumes_19;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_Interactors
	RegistrationList_1_t1AFBA9D926D100296ED3F61A8BE02BA1EDC23859* ___m_Interactors_20;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractionGroups
	RegistrationList_1_t59D6072B55134A385BD91BA10DD1C732AD6C2E6C* ___m_InteractionGroups_21;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_Interactables
	RegistrationList_1_t5B8AA175E254DFA1F9440925B6607DDCE1A48078* ___m_Interactables_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_CurrentHovered
	List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0* ___m_CurrentHovered_23;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_CurrentSelected
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___m_CurrentSelected_24;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRTargetPriorityInteractor>> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HighestPriorityTargetMap
	Dictionary_2_tC5C84A32C9B20E8410708E4451B5D63451CC3856* ___m_HighestPriorityTargetMap_25;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ValidTargets_27;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_UnorderedValidTargets
	HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* ___m_UnorderedValidTargets_28;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractorsInGroup
	HashSet_1_tD23C14FE172DE7F2894A3E41903EDCA5C6172BAF* ___m_InteractorsInGroup_29;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_GroupsInGroup
	HashSet_1_t6B8E4B90487F48FD475841A041733E061ED91601* ___m_GroupsInGroup_30;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_DeprecatedValidTargets
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___m_DeprecatedValidTargets_31;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ScratchInteractionGroups
	List_1_tC2CA2F00C214B8C7E92F689464A85292A6D89FA8* ___m_ScratchInteractionGroups_32;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ScratchInteractors
	List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35* ___m_ScratchInteractors_33;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_ScratchInteractables
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ScratchInteractables_34;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.FocusEnterEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_FocusEnterEventArgs
	LinkedPool_1_t9FD69F9E8D0E5201B462878F5C714293C8C32ED6* ___m_FocusEnterEventArgs_35;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.FocusExitEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_FocusExitEventArgs
	LinkedPool_1_t5664B48CF6EDC8E5B37736F22883798025097DB1* ___m_FocusExitEventArgs_36;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_SelectEnterEventArgs
	LinkedPool_1_t53B982701F6EA60678DC8C4E0991580C5D423D67* ___m_SelectEnterEventArgs_37;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_SelectExitEventArgs
	LinkedPool_1_t30C49977788BEDEFABC446A2625FA219DC309E62* ___m_SelectExitEventArgs_38;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HoverEnterEventArgs
	LinkedPool_1_tE1F615D0B985A30826D9B07A85F77778A812B6CD* ___m_HoverEnterEventArgs_39;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_HoverExitEventArgs
	LinkedPool_1_tEEF96C82811244992CA5ED26E238A2EFFA5EC24F* ___m_HoverExitEventArgs_40;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractionGroupRegisteredEventArgs
	LinkedPool_1_t4EEC56F1534A4EC21AC8706EBAC87402AD3F17BE* ___m_InteractionGroupRegisteredEventArgs_41;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractionGroupUnregisteredEventArgs
	LinkedPool_1_tC453A1423D0BB4062CA1606FC4BB837E9E86BCF2* ___m_InteractionGroupUnregisteredEventArgs_42;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractorRegisteredEventArgs
	LinkedPool_1_t235D7006751154A9DAD14CCF74A1A212045A491F* ___m_InteractorRegisteredEventArgs_43;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractorUnregisteredEventArgs
	LinkedPool_1_tF18FDD2E89CDCB970F8AFE5FB4DD92D95CF719D0* ___m_InteractorUnregisteredEventArgs_44;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractableRegisteredEventArgs
	LinkedPool_1_tEB7BCD31EE340DFF1ED0FB348602497E5C1C5A2B* ___m_InteractableRegisteredEventArgs_45;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::m_InteractableUnregisteredEventArgs
	LinkedPool_1_t96321B5D699D51D9041F43D96540BE192E0351BE* ___m_InteractableUnregisteredEventArgs_46;
};

// UnityEngine.XR.Interaction.Toolkit.ActionBasedController
struct ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68  : public XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C
{
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_PositionAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_PositionAction_25;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_RotationAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_RotationAction_26;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_IsTrackedAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_IsTrackedAction_27;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_TrackingStateAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_TrackingStateAction_28;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_SelectAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_SelectAction_29;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_SelectActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_SelectActionValue_30;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ActivateAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_ActivateAction_31;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ActivateActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_ActivateActionValue_32;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_UIPressAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_UIPressAction_33;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_UIPressActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_UIPressActionValue_34;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_UIScrollAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_UIScrollAction_35;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HapticDeviceAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_HapticDeviceAction_36;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_RotateAnchorAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_RotateAnchorAction_37;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_DirectionalAnchorRotationAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_DirectionalAnchorRotationAction_38;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_TranslateAnchorAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_TranslateAnchorAction_39;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HasCheckedDisabledTrackingInputReferenceActions
	bool ___m_HasCheckedDisabledTrackingInputReferenceActions_40;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HasCheckedDisabledInputReferenceActions
	bool ___m_HasCheckedDisabledInputReferenceActions_41;
	// System.Single UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ButtonPressPoint
	float ___m_ButtonPressPoint_42;
};

// MixedReality.Toolkit.SpatialManipulation.Orbital
struct Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF  : public Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578
{
	// MixedReality.Toolkit.SpatialManipulation.SolverOrientationType MixedReality.Toolkit.SpatialManipulation.Orbital::orientationType
	int32_t ___orientationType_14;
	// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Orbital::localOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localOffset_15;
	// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Orbital::worldOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldOffset_16;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.Orbital::useAngleStepping
	bool ___useAngleStepping_17;
	// System.Int32 MixedReality.Toolkit.SpatialManipulation.Orbital::tetherAngleSteps
	int32_t ___tetherAngleSteps_18;
};

// MixedReality.Toolkit.SpatialManipulation.Overlap
struct Overlap_tFE1BF0BCFA303A742941C61D8DFECB46325D0736  : public Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578
{
};

// MixedReality.Toolkit.SpatialManipulation.RadialView
struct RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B  : public Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578
{
	// MixedReality.Toolkit.SpatialManipulation.RadialViewReferenceDirection MixedReality.Toolkit.SpatialManipulation.RadialView::referenceDirection
	int32_t ___referenceDirection_14;
	// System.Single MixedReality.Toolkit.SpatialManipulation.RadialView::minDistance
	float ___minDistance_15;
	// System.Single MixedReality.Toolkit.SpatialManipulation.RadialView::maxDistance
	float ___maxDistance_16;
	// System.Single MixedReality.Toolkit.SpatialManipulation.RadialView::minViewDegrees
	float ___minViewDegrees_17;
	// System.Single MixedReality.Toolkit.SpatialManipulation.RadialView::maxViewDegrees
	float ___maxViewDegrees_18;
	// System.Single MixedReality.Toolkit.SpatialManipulation.RadialView::aspectV
	float ___aspectV_19;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.RadialView::ignoreAngleClamp
	bool ___ignoreAngleClamp_20;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.RadialView::ignoreDistanceClamp
	bool ___ignoreDistanceClamp_21;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.RadialView::useFixedVerticalPosition
	bool ___useFixedVerticalPosition_22;
	// System.Single MixedReality.Toolkit.SpatialManipulation.RadialView::fixedVerticalPosition
	float ___fixedVerticalPosition_23;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.RadialView::orientToReferenceDirection
	bool ___orientToReferenceDirection_24;
};

// MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism
struct SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2  : public Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578
{
	// UnityEngine.LayerMask[] MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::magneticSurfaces
	LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* ___magneticSurfaces_14;
	// System.Single MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::maxRaycastDistance
	float ___maxRaycastDistance_15;
	// System.Single MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::closestDistance
	float ___closestDistance_16;
	// System.Single MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::surfaceNormalOffset
	float ___surfaceNormalOffset_17;
	// System.Single MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::surfaceRayOffset
	float ___surfaceRayOffset_18;
	// MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/SceneQueryType MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::raycastMode
	int32_t ___raycastMode_19;
	// System.Int32 MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::boxRaysPerEdge
	int32_t ___boxRaysPerEdge_20;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::orthographicBoxCast
	bool ___orthographicBoxCast_21;
	// System.Single MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::maximumNormalVariance
	float ___maximumNormalVariance_22;
	// System.Single MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::sphereSize
	float ___sphereSize_23;
	// System.Single MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::volumeCastSizeOverride
	float ___volumeCastSizeOverride_24;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::useLinkedAltScaleOverride
	bool ___useLinkedAltScaleOverride_25;
	// MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/RaycastDirectionMode MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::currentRaycastDirectionMode
	int32_t ___currentRaycastDirectionMode_26;
	// MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/OrientationMode MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::orientationMode
	int32_t ___orientationMode_27;
	// System.Single MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::orientationBlend
	float ___orientationBlend_28;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::keepOrientationVertical
	bool ___keepOrientationVertical_29;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::debugEnabled
	bool ___debugEnabled_30;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::<OnSurface>k__BackingField
	bool ___U3COnSurfaceU3Ek__BackingField_31;
	// MixedReality.Toolkit.RayStep MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::currentRayStep
	RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5 ___currentRayStep_33;
	// UnityEngine.BoxCollider MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::boxCollider
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___boxCollider_34;
};

// MixedReality.Toolkit.SpatialManipulation.TapToPlace
struct TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F  : public Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578
{
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::autoStart
	bool ___autoStart_14;
	// System.Single MixedReality.Toolkit.SpatialManipulation.TapToPlace::defaultPlacementDistance
	float ___defaultPlacementDistance_15;
	// System.Single MixedReality.Toolkit.SpatialManipulation.TapToPlace::maxRaycastDistance
	float ___maxRaycastDistance_16;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::<IsBeingPlaced>k__BackingField
	bool ___U3CIsBeingPlacedU3Ek__BackingField_17;
	// System.Single MixedReality.Toolkit.SpatialManipulation.TapToPlace::surfaceNormalOffset
	float ___surfaceNormalOffset_18;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::useDefaultSurfaceNormalOffset
	bool ___useDefaultSurfaceNormalOffset_19;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::keepOrientationVertical
	bool ___keepOrientationVertical_20;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::rotateAccordingToSurface
	bool ___rotateAccordingToSurface_21;
	// UnityEngine.LayerMask[] MixedReality.Toolkit.SpatialManipulation.TapToPlace::magneticSurfaces
	LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* ___magneticSurfaces_22;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::debugEnabled
	bool ___debugEnabled_23;
	// UnityEngine.Events.UnityEvent MixedReality.Toolkit.SpatialManipulation.TapToPlace::onPlacingStarted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onPlacingStarted_24;
	// UnityEngine.Events.UnityEvent MixedReality.Toolkit.SpatialManipulation.TapToPlace::onPlacingStopped
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onPlacingStopped_25;
	// System.Int32 MixedReality.Toolkit.SpatialManipulation.TapToPlace::<GameObjectLayer>k__BackingField
	int32_t ___U3CGameObjectLayerU3Ek__BackingField_26;
	// System.Int32 MixedReality.Toolkit.SpatialManipulation.TapToPlace::ignoreRaycastLayer
	int32_t ___ignoreRaycastLayer_27;
	// MixedReality.Toolkit.RayStep MixedReality.Toolkit.SpatialManipulation.TapToPlace::currentRay
	RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5 ___currentRay_28;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::<DidHitSurface>k__BackingField
	bool ___U3CDidHitSurfaceU3Ek__BackingField_29;
	// UnityEngine.RaycastHit MixedReality.Toolkit.SpatialManipulation.TapToPlace::currentHit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___currentHit_30;
	// System.Single MixedReality.Toolkit.SpatialManipulation.TapToPlace::lastTimeClicked
	float ___lastTimeClicked_31;
	// System.Single MixedReality.Toolkit.SpatialManipulation.TapToPlace::<DoubleClickTimeout>k__BackingField
	float ___U3CDoubleClickTimeoutU3Ek__BackingField_32;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::startCalled
	bool ___startCalled_33;
	// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::placementRequested
	bool ___placementRequested_34;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager MixedReality.Toolkit.SpatialManipulation.TapToPlace::interactionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___interactionManager_35;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor> MixedReality.Toolkit.SpatialManipulation.TapToPlace::interactorsCache
	List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35* ___interactorsCache_36;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E  : public XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_SelectActionTrigger
	int32_t ___m_SelectActionTrigger_61;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HideControllerOnSelect
	bool ___m_HideControllerOnSelect_62;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoveredActivate
	bool ___m_AllowHoveredActivate_63;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_TargetPriorityMode
	int32_t ___m_TargetPriorityMode_64;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectEntered
	bool ___m_PlayAudioClipOnSelectEntered_65;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectEntered_66;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectExited
	bool ___m_PlayAudioClipOnSelectExited_67;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectExited_68;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectCanceled
	bool ___m_PlayAudioClipOnSelectCanceled_69;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectCanceled_70;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverEntered
	bool ___m_PlayAudioClipOnHoverEntered_71;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverEntered_72;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverExited
	bool ___m_PlayAudioClipOnHoverExited_73;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverExited_74;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverCanceled
	bool ___m_PlayAudioClipOnHoverCanceled_75;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverCanceled_76;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverAudioWhileSelecting
	bool ___m_AllowHoverAudioWhileSelecting_77;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectEntered
	bool ___m_PlayHapticsOnSelectEntered_78;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterIntensity
	float ___m_HapticSelectEnterIntensity_79;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterDuration
	float ___m_HapticSelectEnterDuration_80;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectExited
	bool ___m_PlayHapticsOnSelectExited_81;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitIntensity
	float ___m_HapticSelectExitIntensity_82;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitDuration
	float ___m_HapticSelectExitDuration_83;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectCanceled
	bool ___m_PlayHapticsOnSelectCanceled_84;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelIntensity
	float ___m_HapticSelectCancelIntensity_85;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelDuration
	float ___m_HapticSelectCancelDuration_86;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverEntered
	bool ___m_PlayHapticsOnHoverEntered_87;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterIntensity
	float ___m_HapticHoverEnterIntensity_88;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterDuration
	float ___m_HapticHoverEnterDuration_89;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverExited
	bool ___m_PlayHapticsOnHoverExited_90;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitIntensity
	float ___m_HapticHoverExitIntensity_91;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitDuration
	float ___m_HapticHoverExitDuration_92;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverCanceled
	bool ___m_PlayHapticsOnHoverCanceled_93;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelIntensity
	float ___m_HapticHoverCancelIntensity_94;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelDuration
	float ___m_HapticHoverCancelDuration_95;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverHapticsWhileSelecting
	bool ___m_AllowHoverHapticsWhileSelecting_96;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowActivate
	bool ___m_AllowActivate_97;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_Controller
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___m_Controller_98;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ActivateEventArgs
	LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01* ___m_ActivateEventArgs_99;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_DeactivateEventArgs
	LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B* ___m_DeactivateEventArgs_100;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectActive
	bool ___m_ToggleSelectActive_102;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectDeactivatedThisFrame
	bool ___m_ToggleSelectDeactivatedThisFrame_103;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_WaitingForSelectDeactivate
	bool ___m_WaitingForSelectDeactivate_104;
	// UnityEngine.AudioSource UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_EffectsAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_EffectsAudioSource_105;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::<validTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3CvalidTargetsU3Ek__BackingField_106;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>
struct List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IXRInteractorU5BU5D_tAB644C2BFD29B3A34A98CFD6DBFE9F9C36BDE891* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.Solver>
struct List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SolverU5BU5D_t65353925DF1228C09DB3EC471A8D3B7DF2A9C055* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.Solver>

// System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.TransformConstraint>
struct List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformConstraintU5BU5D_t3742C9D3DE62CB9F7798B34808208FBC97169457* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.TransformConstraint>

// System.Collections.ObjectModel.ReadOnlyCollection`1<MixedReality.Toolkit.SpatialManipulation.Solver>

// System.Collections.ObjectModel.ReadOnlyCollection`1<MixedReality.Toolkit.SpatialManipulation.Solver>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t3CD147085922794809D821E8EEC3AD73BDFB9678_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::3C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E
	__StaticArrayInitTypeSizeU3D16_t4E9893ED008BA3F6C24DD419E4EED10406E061FD ___3C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E_0;
};

// <PrivateImplementationDetails>

// MixedReality.Toolkit.SpatialManipulation.ConstraintExecOrderComparer

// MixedReality.Toolkit.SpatialManipulation.ConstraintExecOrderComparer

// MixedReality.Toolkit.SpatialManipulation.ConstraintUtils

// MixedReality.Toolkit.SpatialManipulation.ConstraintUtils

// MixedReality.Toolkit.SpatialManipulation.InteractionFlagsExtensions

// MixedReality.Toolkit.SpatialManipulation.InteractionFlagsExtensions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<UnityEngine.XR.XRNode>

// System.Nullable`1<UnityEngine.XR.XRNode>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// UnityEngine.InputSystem.InputActionProperty

// UnityEngine.InputSystem.InputActionProperty

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs

// System.Single

// System.Single

// System.UInt16

// System.UInt16

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// UnityEngine.InputSystem.InputAction/CallbackContext

// UnityEngine.InputSystem.InputAction/CallbackContext

// UnityEngine.Bounds

// UnityEngine.Bounds

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Plane

// UnityEngine.Plane

// Unity.Profiling.ProfilerMarker

// Unity.Profiling.ProfilerMarker

// UnityEngine.Ray

// UnityEngine.Ray

// MixedReality.Toolkit.RayStep
struct RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5_StaticFields
{
	// UnityEngine.Vector3 MixedReality.Toolkit.RayStep::dist
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dist_0;
	// UnityEngine.Vector3 MixedReality.Toolkit.RayStep::dir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir_1;
	// UnityEngine.Vector3 MixedReality.Toolkit.RayStep::pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_2;
};

// MixedReality.Toolkit.RayStep

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent

// MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed

// MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed

// Unity.Profiling.ProfilerMarker/AutoScope

// Unity.Profiling.ProfilerMarker/AutoScope

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// MixedReality.Toolkit.HandJointPose

// MixedReality.Toolkit.HandJointPose

// UnityEngine.InputSystem.InputAction

// UnityEngine.InputSystem.InputAction

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.InputSystem.InputActionReference

// UnityEngine.InputSystem.InputActionReference

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.BoxCollider

// UnityEngine.BoxCollider

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

// MixedReality.Toolkit.ControllerLookup

// MixedReality.Toolkit.ControllerLookup

// MixedReality.Toolkit.SpatialManipulation.Solver
struct Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578_StaticFields
{
	// MixedReality.Toolkit.ControllerLookup MixedReality.Toolkit.SpatialManipulation.Solver::controllerLookup
	ControllerLookup_t546F69017B49B4DB24E47BF1551B5135DB20B7A3* ___controllerLookup_4;
};

// MixedReality.Toolkit.SpatialManipulation.Solver

// MixedReality.Toolkit.SpatialManipulation.SolverHandler
struct SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_StaticFields
{
	// Unity.Profiling.ProfilerMarker MixedReality.Toolkit.SpatialManipulation.SolverHandler::AttachToNewTrackedObjectPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___AttachToNewTrackedObjectPerfMarker_27;
	// Unity.Profiling.ProfilerMarker MixedReality.Toolkit.SpatialManipulation.SolverHandler::UpdateCachedHandJointTransformPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateCachedHandJointTransformPerfMarker_28;
};

// MixedReality.Toolkit.SpatialManipulation.SolverHandler

// MixedReality.Toolkit.SpatialManipulation.TransformConstraint

// MixedReality.Toolkit.SpatialManipulation.TransformConstraint

// UnityEngine.XR.Interaction.Toolkit.XRBaseController

// UnityEngine.XR.Interaction.Toolkit.XRBaseController

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_StaticFields
{
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::s_ProcessInteractionStrengthMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractionStrengthMarker_40;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor

// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRInteractionManager> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::<activeInteractionManagers>k__BackingField
	List_1_t90B2E73B2119C38AE52BD0E0BB04E6B0477F6D7B* ___U3CactiveInteractionManagersU3Ek__BackingField_17;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRTargetPriorityInteractor>> UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_TargetPriorityInteractorListPool
	LinkedPool_1_tC253D76E8F52E23D166062D7609A341C95911E17* ___s_TargetPriorityInteractorListPool_26;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_PreprocessInteractorsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_PreprocessInteractorsMarker_47;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_ProcessInteractionStrengthMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractionStrengthMarker_48;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_ProcessInteractorsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractorsMarker_49;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_ProcessInteractablesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractablesMarker_50;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_UpdateGroupMemberInteractionsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_UpdateGroupMemberInteractionsMarker_51;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_GetValidTargetsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_GetValidTargetsMarker_52;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_FilterRegisteredValidTargetsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_FilterRegisteredValidTargetsMarker_53;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateInvalidFocusMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateInvalidFocusMarker_54;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateInvalidSelectionsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateInvalidSelectionsMarker_55;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateInvalidHoversMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateInvalidHoversMarker_56;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateValidSelectionsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateValidSelectionsMarker_57;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_EvaluateValidHoversMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_EvaluateValidHoversMarker_58;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_FocusEnterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_FocusEnterMarker_59;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_FocusExitMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_FocusExitMarker_60;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_SelectEnterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_SelectEnterMarker_61;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_SelectExitMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_SelectExitMarker_62;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_HoverEnterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_HoverEnterMarker_63;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::s_HoverExitMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_HoverExitMarker_64;
};

// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager

// UnityEngine.XR.Interaction.Toolkit.ActionBasedController

// UnityEngine.XR.Interaction.Toolkit.ActionBasedController

// MixedReality.Toolkit.SpatialManipulation.Orbital
struct Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF_StaticFields
{
	// Unity.Profiling.ProfilerMarker MixedReality.Toolkit.SpatialManipulation.Orbital::SolverUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___SolverUpdatePerfMarker_19;
};

// MixedReality.Toolkit.SpatialManipulation.Orbital

// MixedReality.Toolkit.SpatialManipulation.Overlap
struct Overlap_tFE1BF0BCFA303A742941C61D8DFECB46325D0736_StaticFields
{
	// Unity.Profiling.ProfilerMarker MixedReality.Toolkit.SpatialManipulation.Overlap::SolverUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___SolverUpdatePerfMarker_14;
};

// MixedReality.Toolkit.SpatialManipulation.Overlap

// MixedReality.Toolkit.SpatialManipulation.RadialView
struct RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_StaticFields
{
	// Unity.Profiling.ProfilerMarker MixedReality.Toolkit.SpatialManipulation.RadialView::SolverUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___SolverUpdatePerfMarker_25;
	// Unity.Profiling.ProfilerMarker MixedReality.Toolkit.SpatialManipulation.RadialView::GetDesiredOrientationDistanceOnlyPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___GetDesiredOrientationDistanceOnlyPerfMarker_26;
	// Unity.Profiling.ProfilerMarker MixedReality.Toolkit.SpatialManipulation.RadialView::GetDesiredOrientationPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___GetDesiredOrientationPerfMarker_27;
};

// MixedReality.Toolkit.SpatialManipulation.RadialView

// MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism
struct SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2_StaticFields
{
	// Unity.Profiling.ProfilerMarker MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::SolverUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___SolverUpdatePerfMarker_35;
};

// MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism

// MixedReality.Toolkit.SpatialManipulation.TapToPlace
struct TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_StaticFields
{
	// Unity.Profiling.ProfilerMarker MixedReality.Toolkit.SpatialManipulation.TapToPlace::StartPlacementPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___StartPlacementPerfMarker_37;
	// Unity.Profiling.ProfilerMarker MixedReality.Toolkit.SpatialManipulation.TapToPlace::StopPlacementPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___StopPlacementPerfMarker_38;
	// Unity.Profiling.ProfilerMarker MixedReality.Toolkit.SpatialManipulation.TapToPlace::SolverUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___SolverUpdatePerfMarker_39;
	// Unity.Profiling.ProfilerMarker MixedReality.Toolkit.SpatialManipulation.TapToPlace::PerformRaycastPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___PerformRaycastPerfMarker_40;
};

// MixedReality.Toolkit.SpatialManipulation.TapToPlace

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::s_ActivateTargets
	List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA* ___s_ActivateTargets_101;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99  : public RuntimeArray
{
	ALIGN_FIELD (8) LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB m_Items[1];

	inline LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T MixedReality.Toolkit.ComponentCache`1<System.Object>::FindFirstActiveInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ComponentCache_1_FindFirstActiveInstance_m7C55C8BA725E0A90683D46F6B01EC4E11A36FA63_gshared (const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* List_1_AsReadOnly_m69D18D2353099DC61F87AD42FF87F25B1A4D299B_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::GetComponents<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponents_TisRuntimeObject_m2CD12FB45EFC625510F7E12FE2EB7D0EC2BA4421_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_results, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Intersect_TisRuntimeObject_m84ECD6FD0A7538D476778479E7022A6CC257DBC1_gshared (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32Enum>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___0_call, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___0_call, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m4F1B6B4A07B00B2E604D0A793600C10835E40513_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;

// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_TransformTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion MixedReality.Toolkit.SpatialManipulation.Orbital::SnapToTetherAngleSteps(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Orbital_SnapToTetherAngleSteps_m23DC55B1C7E6C534C54A90C6E225FE07EC63C433 (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotationToSnap, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Orbital::get_LocalOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Orbital_get_LocalOffset_m989E02C0DD5DC176B45D27C6AE8BF61ECECBD568_inline (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Orbital::get_WorldOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Orbital_get_WorldOffset_mE36216EB5DE4F386298F6AB2B637DBBF7E79B693_inline (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion MixedReality.Toolkit.SpatialManipulation.Orbital::CalculateDesiredRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Orbital_CalculateDesiredRotation_mCD856FCC4BE2C27D6FAB1677105775BAE9FC58E4 (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_desiredPos, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalPosition_m51BBA4824D71ABC8189A6A6661A09942E5A72F76 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalRotation_m1223612AC25A7DCBBEBDECEB63E41E5425580A88 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.SpatialManipulation.Orbital::get_UseAngleStepping()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Orbital_get_UseAngleStepping_m7F5D47E4BF024DCA83771458CDDD3F23C9B86508_inline (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver__ctor_m61553BCC86AA46B55E44C1999BA45487652A09D8 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Solver::get_WorkingPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Solver_get_WorkingPosition_m0D0F18279AEB6922D9101850C66EDA1255C024BD (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.RadialView::GetDesiredOrientation_DistanceOnly(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_DistanceOnly_m9066B3CB83EC03870322C720B00C863033FFD886 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_desiredPos, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.RadialView::GetDesiredOrientation(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_mB4D6D28ED2CD5DDFBD69C11F5DAC242AF1FE6A20 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_desiredPos, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.RadialView::get_UpReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RadialView_get_UpReference_m7D004D9E98591C326BE2848071A9760983104B4C (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.RadialView::get_SolverReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RadialView_get_SolverReferenceDirection_m54DAED9478094B98B2AD851B724982A7A0D5D2FC (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_upwards, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.RadialView::get_ReferencePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RadialView_get_ReferencePoint_m7559284C2789031BCBE6397EB34424B651740A65 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.SpatialManipulation.RadialView::get_UseFixedVerticalPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_m81028E564FC20AC640E0C1847972BDCF36347C25_inline (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) ;
// System.Single MixedReality.Toolkit.SpatialManipulation.RadialView::get_FixedVerticalPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_mFE1B74EDDD04F227AE40B77106A64BF46849EEC9_inline (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_GoalPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_GoalPosition_m287FC681D5DFB57264ADD5E9E994B7C87BB9E049_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_m2D92641664852D4A576132EAA64A19D73BDCD2AA_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_GoalRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SolverHandler_get_GoalRotation_mC0CEEB989A81193D184206C6B11624B75EB41B34_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_mB10BEBDCB8E0EEF7105AAD9ABE32C75CC2476A9B_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_GoalScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_GoalScale_m8E037AF9B1B4E371A835086F59DAB2AE3A425E55_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_GoalScale(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_m33FDA0F6759ABD82E20B9A95213AEE3D202CEF1D_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Solver::get_GoalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Solver_get_GoalPosition_mF08100391BCB0E2597A67297051C69224D0E875F (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion MixedReality.Toolkit.SpatialManipulation.Solver::get_GoalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Solver_get_GoalRotation_m203C11A33069E62B914F969CFDC907DC6DDD2FBA (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Solver::get_GoalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Solver_get_GoalScale_m1A95E018BF1D6644B3157497DB90C46FA4B4B440 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalScale_m1116EF375DC1694A51CF451C49E7700B43D6F649 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<MixedReality.Toolkit.SpatialManipulation.SolverHandler>()
inline SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* Component_GetComponent_TisSolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_m1847059692008A57D71105CCAF27ED51915680F7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::RegisterSolver(MixedReality.Toolkit.SpatialManipulation.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RegisterSolver_mB83CC7455E7B3B1691019AD59A1401C858F7EEAF (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* ___0_solver, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::UnregisterSolver(MixedReality.Toolkit.SpatialManipulation.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_UnregisterSolver_mC2F9D25C39AA0F20A3CC0906A229EA8D676F1645 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* ___0_solver, const RuntimeMethod* method) ;
// T MixedReality.Toolkit.ComponentCache`1<MixedReality.Toolkit.ControllerLookup>::FindFirstActiveInstance()
inline ControllerLookup_t546F69017B49B4DB24E47BF1551B5135DB20B7A3* ComponentCache_1_FindFirstActiveInstance_mC8779F66BA148B9E11A33E628B0CED9744DEFD2A (const RuntimeMethod* method)
{
	return ((  ControllerLookup_t546F69017B49B4DB24E47BF1551B5135DB20B7A3* (*) (const RuntimeMethod*))ComponentCache_1_FindFirstActiveInstance_m7C55C8BA725E0A90683D46F6B01EC4E11A36FA63_gshared)(method);
}
// System.Single MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_DeltaTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_m7BD6BFA0D56BAC2A6E37099975F31A5A2D79DE49_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::UpdateWorkingToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingToGoal_m4C770F0A8AD9CD95264624E20DC8807C8AF0350F (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::set_WorkingPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingPosition_mA9747538E80E19A6C0D6A5BFAB14A99BF5E59FCB (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::set_WorkingRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingRotation_mB2B1C632B3E5D44D81801E1F50AAB41C9013529A (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::set_WorkingScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingScale_m48A655AB9C605F4F2DA8A1CB5297B3B691E72BBE (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Solver::SmoothTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Solver_SmoothTo_m710C5080A5EE348ACDB30A2C93EB50B5A2A9242F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_goal, float ___2_deltaTime, float ___3_lerpTime, const RuntimeMethod* method) ;
// UnityEngine.Quaternion MixedReality.Toolkit.SpatialManipulation.Solver::SmoothTo(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Solver_SmoothTo_m83E851DB8BBAB536D599470D92A79EA49464121D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_source, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_goal, float ___2_deltaTime, float ___3_lerpTime, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::UpdateWorkingPositionToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingPositionToGoal_m01ACF1DD94623D91F84A8F696CA049F110BC5ABD (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::UpdateWorkingRotationToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingRotationToGoal_m8376A3A2B0FE07E816F612ADE67CEF311A41FC25 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::UpdateWorkingScaleToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingScaleToGoal_m17FDBD0E9938E255CE27314716A629EC6823957B (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion MixedReality.Toolkit.SpatialManipulation.Solver::get_WorkingRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Solver_get_WorkingRotation_m900CAE5ECF091AA713B19FC04DF87ECD83EA1CF2 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Solver::get_WorkingScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Solver_get_WorkingScale_mD8C6FA9E392BA79C01092B25EBC4905490736807 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SolverHandler::IsValidTrackedObjectType(MixedReality.Toolkit.SpatialManipulation.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidTrackedObjectType_m9121DAEEF7FACB9CE12D26AEDDAB8976AED4D891 (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::RefreshTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RefreshTrackedObject_mFD53674807FE67BE33A479FE7D79AAFC082D5040 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SolverHandler::IsValidHandedness(MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidHandedness_mCCB68596BD7190E5C15FFD306BEC50EDBF61492D (int32_t ___0_hand, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.Solver>::AsReadOnly()
inline ReadOnlyCollection_1_tE3D820D1F14A11D461658535E50B780007C484E3* List_1_AsReadOnly_m93E02464160F1A6096252B1331D9F3EF6CD1A68C (List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_tE3D820D1F14A11D461658535E50B780007C484E3* (*) (List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC*, const RuntimeMethod*))List_1_AsReadOnly_m69D18D2353099DC61F87AD42FF87F25B1A4D299B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.Solver>::Clear()
inline void List_1_Clear_m7C7470B753AF4DA999567303ED3EF584F106717B_inline (List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.Solver>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m4055A2B32D5AF6F6793124739C0ABF204BB81996 (List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SolverHandler::IsInvalidTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsInvalidTracking_m1D1E423C8B18115B6695DF12AA2E55BE8203AFD3 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed__ctor_m17114C9DA61DBC98B01130A697088551CE4F7BB8 (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, float ___1_smoothingTime, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_AltScale(MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m8073F97C399A6562D9D035AA11BD07A9196B0F60_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_DeltaTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_mB20248550E0D32B895067C8D8BA3F23C7BC0C518_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_TrackedHandedness(MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandedness_m63A9D86B3453CE3A98244CDE48DCB4684C50BFE4 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_TrackedTargetType(MixedReality.Toolkit.SpatialManipulation.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedTargetType_m97BDC3B2C2513071D91480E6E519C8C84EFC2EBE (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// MixedReality.Toolkit.SpatialManipulation.TrackedObjectType MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_TrackedTargetType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_m583ECFD959097672CC7455FB1DD1B3D251BE3323_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SolverHandler::UpdateCachedHandJointTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_UpdateCachedHandJointTransform_mFB75B170E27D4F83B0D09EDD274C94C4CCA2E9C1 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_UpdateSolvers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_mA03F997C40AD497AE7A8195F05CA4F51279AC40D_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.Solver>::get_Item(System.Int32)
inline Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* List_1_get_Item_mC46E60A706165ED16D0D5CC5BAAA3EF71967138F (List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* (*) (List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::SolverUpdateEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SolverUpdateEntry_mCC5F3BC199C9509A5922F619877850A632D54FF1 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.Solver>::get_Count()
inline int32_t List_1_get_Count_m15FD5FE5CFD518986DC6788827ADC5F8BDDA2466_inline (List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.Solver>::Contains(T)
inline bool List_1_Contains_m65384599E5A8B4DFA1ED923BF8712E8B5525B5E8 (List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* __this, Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC*, Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// System.Void UnityEngine.Component::GetComponents<MixedReality.Toolkit.SpatialManipulation.Solver>(System.Collections.Generic.List`1<T>)
inline void Component_GetComponents_TisSolver_t5BF456842BD6B3971A6718B914DD8B3343C96578_mB80A9DDF8CE9AC8E8D3AC394D6E8260243C8B7E3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* ___0_results, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m2CD12FB45EFC625510F7E12FE2EB7D0EC2BA4421_gshared)(__this, ___0_results, method);
}
// System.Void System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.Solver>::Add(T)
inline void List_1_Add_m9AAE4C6F3E0D42B412DF0B5FF0E62CA990DCDD99_inline (List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* __this, Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC*, Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect<MixedReality.Toolkit.SpatialManipulation.Solver>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Intersect_TisSolver_t5BF456842BD6B3971A6718B914DD8B3343C96578_m64CBA93CBF786C0797D12E19B49E386FB852EB21 (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Intersect_TisRuntimeObject_m84ECD6FD0A7538D476778479E7022A6CC257DBC1_gshared)(___0_first, ___1_second, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<MixedReality.Toolkit.SpatialManipulation.Solver>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* Enumerable_ToList_TisSolver_t5BF456842BD6B3971A6718B914DD8B3343C96578_mC48E5FA97422560A72EF94202F63B7523BDA37D9 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___0_source, method);
}
// System.Boolean System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.Solver>::Remove(T)
inline bool List_1_Remove_m0FA645EB65EDC117F5781E1DEA6FBAAACC970B96 (List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* __this, Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC*, Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// MixedReality.Toolkit.Handedness MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_TrackedHandedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandedness_m4029B860B4C9208FCA90FB26C6DF8741A9FE5FE9_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) ;
// MixedReality.Toolkit.Handedness MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_PreferredTrackedHandedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SolverHandler_get_PreferredTrackedHandedness_m7610885EDC5E86909D61A996DABC9EEEEDEAE7F7_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor MixedReality.Toolkit.SpatialManipulation.SolverHandler::GetControllerInteractor(MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* SolverHandler_GetControllerInteractor_m642CABE1672E8BC772078326F89B3B7AC370EB2F (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, int32_t ___0_handedness, const RuntimeMethod* method) ;
// MixedReality.Toolkit.Handedness MixedReality.Toolkit.HandednessExtensions::GetOppositeHandedness(MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandednessExtensions_GetOppositeHandedness_m8AD005D4EA78BBB43C12111E4F072E920F5FD9C8 (int32_t ___0_current, const RuntimeMethod* method) ;
// MixedReality.Toolkit.Subsystems.IHandsAggregatorSubsystem MixedReality.Toolkit.XRSubsystemHelpers::get_HandsAggregator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRSubsystemHelpers_get_HandsAggregator_m5E0D624F49E4F022C3066327FD3125D2968DCCE7 (const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SolverHandler::IsHandTracked(MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsHandTracked_m60C07B44A0B8F718D0C24A889CDC16FD5522A113 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, int32_t ___0_hand, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::TrackTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_TrackTransform_m80F54A1DEBE56EEFD03171BA2197FC6C52202AE8 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.XR.XRNode> MixedReality.Toolkit.HandednessExtensions::ToXRNode(MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 HandednessExtensions_ToXRNode_m8069B1DE5E7097549941C8F2D7565FC7BC053572 (int32_t ___0_hand, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.XRNode>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_inline (Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36*, const RuntimeMethod*))Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline)(__this, method);
}
// MixedReality.Toolkit.TrackedHandJoint MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_TrackedHandJoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_m8067C11C9591B38CC0688525AD7EBBC868233695_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.XR.XRNode>::get_Value()
inline int32_t Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66 (Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36*, const RuntimeMethod*))Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.HandJointPose::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HandJointPose_get_Position_mB6388778B755280045EB610BBBB333BF66004D8A (HandJointPose_tFE6CB46BC73D00546E034E74333892993FFF9FAD* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion MixedReality.Toolkit.HandJointPose::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 HandJointPose_get_Rotation_m8BBB212DC1615D30784F688FC7DF8A3C5CD3946E (HandJointPose_tFE6CB46BC73D00546E034E74333892993FFF9FAD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_AdditionalOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_AdditionalOffset_m51F743045A482978DB4B6D238E7D37018815B10C_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_AdditionalRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_AdditionalRotation_mB8AA3A862B467392D1132799EB01FDB2177F15A3_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_RightInteractor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* SolverHandler_get_RightInteractor_m2F1B820636233A4CE88F6583D60C3FE21602BE81_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_LeftInteractor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* SolverHandler_get_LeftInteractor_m8A69A7CB2BD8E2FC9AE8B60DE6A93E07F25C5BF6_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.HandednessExtensions::IsMatch(MixedReality.Toolkit.Handedness,MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandednessExtensions_IsMatch_m697B9C1C2B0517F9E3C7DDBE515EC8927C67DA82 (int32_t ___0_current, int32_t ___1_compare, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.Solver>::.ctor()
inline void List_1__ctor_mED3BD63F0FDA10CD4EE1DC17EE6137994655F793 (List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SurfaceMagnetism_get_RaycastOrigin_m69B4B988DFC27995C2198488E75775B4875C6E3F (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) ;
// MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/RaycastDirectionMode MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_CurrentRaycastDirectionMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_m8BCB5B5A2347BDD96B904E8445B27694D5F277C6_inline (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SurfaceMagnetism_get_RaycastEndPoint_m186E20DF24032E1EFFA0D239DCDB7378D2D2B6B1 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_AltScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B SolverHandler_get_AltScale_mD5130E55FEC78CDDC9F9818CDDF0AC6458ECB69E_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Current_m09726493CD0732F10008C991EC37A77BC226BBEF_inline (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_KeepOrientationVertical()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_m5963208050451A724A2FBF58BF36E6E4DA831322_inline (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_fromDirection, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_toDirection, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/OrientationMode MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_CurrentOrientationMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_mE8700DDC1932D3B5C5D6D4C89EC912267B36E2E2_inline (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.RayStep::UpdateRayStep(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayStep_UpdateRayStep_m9B7B3E781E7C620B11DC90520AC285B8E5ED2305 (RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_terminus, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.RayStep::get_Direction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RayStep_get_Direction_mF8BC5AD55BB22ED4410C8F6F3FC072842D270171_inline (RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_DebugEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m71A5F16EE5B4E33CA4F6CB88D27D32841FA62814_inline (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.RayStep::get_Origin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RayStep_get_Origin_mD824FD9C6E7BB961ECF68E811B60725D111E9D7D_inline (RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.RayStep::get_Terminus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RayStep_get_Terminus_m1146FE794571E9B89713DD4F135C34F162F9E6C6_inline (RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
// MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/SceneQueryType MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_mF3EF1F12779C1DEDBDF705A0FD0FB0CBFD94A658_inline (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::SimpleRaycastStepUpdate(MixedReality.Toolkit.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SimpleRaycastStepUpdate_m317F62009471F6BABFD25C8A32311932B5AE5521 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* ___0_rayStep, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::BoxRaycastStepUpdate(MixedReality.Toolkit.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_BoxRaycastStepUpdate_mA948A671639F59718C77C50BFE0AFB93F5BC66BD (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* ___0_rayStep, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::SphereRaycastStepUpdate(MixedReality.Toolkit.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SphereRaycastStepUpdate_mDDED99CAEB3B6AB00BA0787F1751C75DCC3BF42F (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* ___0_rayStep, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.MixedRealityRaycaster::RaycastSimplePhysicsStep(MixedReality.Toolkit.RayStep,System.Single,UnityEngine.LayerMask[],System.Boolean,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastSimplePhysicsStep_m0D79CB7C531904B99B02983EE18BC12D4DA625C8 (RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5 ___0_step, float ___1_maxDistance, LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* ___2_prioritizedLayerMasks, bool ___3_focusIndividualCompoundCollider, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___4_physicsHit, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_OnSurface(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_mF05D844CEE08BDAF4A939CFD42ECAAA3DE11791C_inline (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RaycastHit::set_point(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHit_set_point_m3B63BEB25A82BFCF9FBB300022D0362BC2CF9E11 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_OnSurface()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OnSurface_m32C1EC1EA0D9BB9B880A1B63065E764E9EF8908C_inline (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::CalculateMagnetismOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SurfaceMagnetism_CalculateMagnetismOrientation_m70E50B71406F36B49E76D7EC575A0F6419EFDCEE (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_surfaceNormal, const RuntimeMethod* method) ;
// System.Single MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_ScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ScaleOverride_m72E7BAF998B49FFCB69D0B036BBB29B4A2FB4B6E (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.MixedRealityRaycaster::RaycastSpherePhysicsStep(MixedReality.Toolkit.RayStep,System.Single,System.Single,UnityEngine.LayerMask[],System.Boolean,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastSpherePhysicsStep_m5D27AE4350A6AAF070A83FF53C91F9AE5AB4845F (RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5 ___0_step, float ___1_radius, float ___2_maxDistance, LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* ___3_prioritizedLayerMasks, bool ___4_focusIndividualCompoundCollider, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___5_physicsHit, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_q, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_s, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.MixedRealityRaycaster::RaycastBoxPhysicsStep(MixedReality.Toolkit.RayStep,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Matrix4x4,System.Single,UnityEngine.LayerMask[],System.Int32,System.Boolean,System.Boolean,UnityEngine.Vector3[]&,UnityEngine.Vector3[]&,System.Boolean[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastBoxPhysicsStep_m25153BC9656C12D65C9EFED4F130299687F2AF1E (RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5 ___0_step, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_extents, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_targetPosition, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_matrix, float ___4_maxDistance, LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* ___5_prioritizedLayerMasks, int32_t ___6_raysPerEdge, bool ___7_isOrthographic, bool ___8_focusIndividualCompoundCollider, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** ___9_points, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** ___10_normals, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4** ___11_hits, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::FindPlacementPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Boolean[],System.Single,System.Single,System.Boolean,System.Boolean,UnityEngine.Plane&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_FindPlacementPlane_m55A44108B33B1BB3369B39F7D45E448FC2C94404 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___2_positions, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___3_normals, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___4_hits, float ___5_assetWidth, float ___6_maxNormalVariance, bool ___7_constrainVertical, bool ___8_useClosestDistance, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___9_plane, float* ___10_closestDistance, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::IsNormalVertical(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_IsNormalVertical_m6F94E5DB20E80D14EFF2234B10AFA98E1CC2E207 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_normal, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_inNormal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_inPoint, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_dir, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, float* ___1_enter, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___0_intVal, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_Start_m96B0F3C28A0EAD56022300ADDC07F7842F4E707F (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Physics::SyncTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_SyncTransforms_mB88B6B27C24234D18846F614F9AE674976A5F1CA (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___0_layerName, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_AutoStart()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_AutoStart_m1A03C3E5A137B7254387C7368CE0667E22408234_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::StartPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StartPlacement_mFBB44C28EBA05357BFAF3BE5C868C8469FCA6A26 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_UpdateSolvers(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m01A77F690FEC55D269A36D8E8C5BEF54189E9360_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::StopPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StopPlacement_mA94190CFA33CE2B95FA3BB6F10BFDCD51EC8AAEF (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_OnDisable_m121C931E5C31898D9B7F8C10DE7CC389E4610242 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Single MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_DoubleClickTimeout()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapToPlace_get_DoubleClickTimeout_m952BEBD21C5A7AC2883B5FF4FCC619A7C2B635F8_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_IsBeingPlaced()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_IsBeingPlaced_m4C33C2667FE902E4F9512B3839222204EE91CAD0_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_GameObjectLayer(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapToPlace_set_GameObjectLayer_mFF3C7D258D48762831B98E5C376E3FF935FABA56_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_IsBeingPlaced(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapToPlace_set_IsBeingPlaced_m8B793F411B97FC6A8743BD2F1AEE8E504EB02A86_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_OnPlacingStarted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* TapToPlace_get_OnPlacingStarted_m3D959E332A0FEB8C3B90205F82811D36E0923BCC_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::RegisterPlacementAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_RegisterPlacementAction_mC2CAF6910FB98CE11EC368DC5E204961C8585D9F (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) ;
// System.Int32 MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_GameObjectLayer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TapToPlace_get_GameObjectLayer_mC6938A2AFB978A140AE7052B2DE0A5D04DBD4237_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_OnPlacingStopped()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* TapToPlace_get_OnPlacingStopped_mFA06B5ADFCA9847AA6039A30B3969CE1F165193A_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::UnregisterPlacementAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_UnregisterPlacementAction_m7357025B43A8F667E06F77D37654E23308441CF4 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) ;
// MixedReality.Toolkit.RayStep MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_CurrentRay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5 TapToPlace_get_CurrentRay_m276F438D59F7CB11D14FCDC51329E072B6ACB8EE_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) ;
// System.Single MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_MaxRaycastDistance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapToPlace_get_MaxRaycastDistance_mC27CD8EB475448F094E31D70061C69B144F93D16_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) ;
// UnityEngine.LayerMask[] MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_MagneticSurfaces()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* TapToPlace_get_MagneticSurfaces_mFB0C350CB84615E279CF943AC322F881A1286ABD_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_DidHitSurface(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapToPlace_set_DidHitSurface_m915248DD158C0A40BAD11DEDF82AA372E29C1F2E_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_DidHitSurface()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_DidHitSurface_m088E003F412A5DE739A0F446AE1E5C75A3F333E0_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_CurrentHit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 TapToPlace_get_CurrentHit_m65418F37B9540864F6045922E3AC9C5B411228F7_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_UseDefaultSurfaceNormalOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_UseDefaultSurfaceNormalOffset_m1F7D47BC0EF1D11D3430CE724483983F661DE50A_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) ;
// System.Single MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_SurfaceNormalOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapToPlace_get_SurfaceNormalOffset_mFE57D19E104432E36782B616863941CE158BDD76_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) ;
// System.Single MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_DefaultSurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultSurfaceNormalOffset_m1FEE88D8881AE0F4547CF5AAFBBE4715E2D77E00 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) ;
// System.Single MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_DefaultPlacementDistance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultPlacementDistance_mECF30C634C0AA40353172B431457CB7920687D53_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) ;
// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_KeepOrientationVertical()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_KeepOrientationVertical_mFBC232E20AB6FCD31DAED7F156E342E122F08894_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) ;
// T MixedReality.Toolkit.ComponentCache`1<UnityEngine.XR.Interaction.Toolkit.XRInteractionManager>::FindFirstActiveInstance()
inline XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ComponentCache_1_FindFirstActiveInstance_mE59FFA961F15E3B3EC8A0DBED8A963491E47737C (const RuntimeMethod* method)
{
	return ((  XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* (*) (const RuntimeMethod*))ComponentCache_1_FindFirstActiveInstance_m7C55C8BA725E0A90683D46F6B01EC4E11A36FA63_gshared)(method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>::.ctor()
inline void List_1__ctor_m256EFCAABB46D24687868F0C3836D3BB72B5952A (List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.XRInteractionManager::GetRegisteredInteractors(System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInteractionManager_GetRegisteredInteractors_m10AC6F729264FDD9B6323C7643C2744E08327613 (XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* __this, List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35* ___0_results, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>::GetEnumerator()
inline Enumerator_t7FB3FB7F9BEBFAFD5D4A95FDE8494494B3C52A4C List_1_GetEnumerator_mB79B4BD45ADAE1FA30B5B09D09C7E9155C0A8F72 (List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7FB3FB7F9BEBFAFD5D4A95FDE8494494B3C52A4C (*) (List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>::Dispose()
inline void Enumerator_Dispose_m7B6A479EF2BDF57F327EFB5AEC4285AE6F431D61 (Enumerator_t7FB3FB7F9BEBFAFD5D4A95FDE8494494B3C52A4C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7FB3FB7F9BEBFAFD5D4A95FDE8494494B3C52A4C*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mF79348DB8CECE372E5E3B0F7FAB741021D50B682_inline (Enumerator_t7FB3FB7F9BEBFAFD5D4A95FDE8494494B3C52A4C* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t7FB3FB7F9BEBFAFD5D4A95FDE8494494B3C52A4C*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.XR.Interaction.Toolkit.XRBaseController UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::get_xrController()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* XRBaseControllerInteractor_get_xrController_m3BBC15462D296ED35A6F2E87D290B86BF9216650_inline (XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::get_selectAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline (ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47 (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
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
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>::MoveNext()
inline bool Enumerator_MoveNext_m47352F09D02E5FC7482850AD63DAD63051D03C67 (Enumerator_t7FB3FB7F9BEBFAFD5D4A95FDE8494494B3C52A4C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7FB3FB7F9BEBFAFD5D4A95FDE8494494B3C52A4C*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8*, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___0_call, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>::Clear()
inline void List_1_Clear_m873F1F14F62CE615AB1F4C93B0C015E77D0AB760_inline (List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Int32 MixedReality.Toolkit.SpatialManipulation.TransformConstraint::get_ExecutionPriority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransformConstraint_get_ExecutionPriority_m561DE63AA1068BD955E7217EA20826186D2E384F_inline (TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.TransformConstraint>::Contains(T)
inline bool List_1_Contains_mA327316FB8027C5C066A0D7AC1350875AAC45D8D (List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B* __this, TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B*, TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.TransformConstraint>::get_Count()
inline int32_t List_1_get_Count_m50000F8D414BFBF142A42777CA34EC62736B728F_inline (List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.TransformConstraint>::get_Item(System.Int32)
inline TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* List_1_get_Item_m4507899389EBE7C487F76469818C2C9757CCBD26 (List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* (*) (List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.TransformConstraint>::Add(T)
inline void List_1_Add_mC2AC6555E1F0B8D452B97C2BC2A55C1E9DEF674E_inline (List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B* __this, TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B*, TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.TransformConstraint>::Insert(System.Int32,T)
inline void List_1_Insert_m3B059906CFBF53F7673C207FC5DFD35F2460FDAE (List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B* __this, int32_t ___0_index, TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B*, int32_t, TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___0_index, ___1_item, method);
}
// System.Int32 System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.TransformConstraint>::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
inline int32_t List_1_BinarySearch_mC66C14467FD2F8F870B2B58AC64715AF79E268BA (List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B* __this, TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* ___0_item, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B*, TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768*, RuntimeObject*, const RuntimeMethod*))List_1_BinarySearch_m4F1B6B4A07B00B2E604D0A793600C10835E40513_gshared)(__this, ___0_item, ___1_comparer, method);
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::set_Current(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Current_m82AC5627F0CAFDCDCEF1C72380C65EEC1F620558_inline (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::get_Goal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Goal_mB44436399BBD24B5F08EFC51FF6C1B924FDBDA5E_inline (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::set_Goal(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Goal_mBE5158041F4C32A3B2CC48C7293055D8808B136D_inline (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::get_SmoothTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3Smoothed_get_SmoothTime_mFB5035C20AA2CC5EB2B287BB8C716EF647D6CE9A_inline (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::set_SmoothTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_SmoothTime_mBF92DBE9E89682A4CD4AE9D3002AC6B592B311D7_inline (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::SetGoal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_SetGoal_mB36A7F9A684864332C02B5CD35D485BE651A8483 (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_goal, const RuntimeMethod* method) ;
// System.Void MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_Update_mDDB6248A10F53ADFEC9903B0CF0CDDD8842617A4 (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, float ___0_deltaTime, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___0_markerPtr, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_mFDB4EFB160A9CB817D2F8ED21B88693616B27409 (intptr_t ___0_markerPtr, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_mC5E1AAB8CC1F0342065DF85BA3334445ED754E64 (String_t* ___0_name, uint16_t ___1_categoryId, uint16_t ___2_flags, int32_t ___3_metadataCount, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_mB5106F4E7ECEF54906545665ED23928D14F5FCA7 (intptr_t ___0_markerPtr, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// MixedReality.Toolkit.SpatialManipulation.SolverOrientationType MixedReality.Toolkit.SpatialManipulation.Orbital::get_OrientationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Orbital_get_OrientationType_mE723918EB837076B544E2D1E5FE6F7E89B3F61A4 (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, const RuntimeMethod* method) 
{
	{
		// get { return orientationType; }
		int32_t L_0 = __this->___orientationType_14;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Orbital::set_OrientationType(MixedReality.Toolkit.SpatialManipulation.SolverOrientationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_set_OrientationType_m958D38D9DDEFE56FF57DDB365E9157FF793FF289 (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set { orientationType = value; }
		int32_t L_0 = ___0_value;
		__this->___orientationType_14 = L_0;
		// set { orientationType = value; }
		return;
	}
}
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Orbital::get_LocalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Orbital_get_LocalOffset_m989E02C0DD5DC176B45D27C6AE8BF61ECECBD568 (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, const RuntimeMethod* method) 
{
	{
		// get { return localOffset; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___localOffset_15;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Orbital::set_LocalOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_set_LocalOffset_m44A2460190619A5FFEDB3DB3EBD0CE2FE6C466C8 (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { localOffset = value; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___localOffset_15 = L_0;
		// set { localOffset = value; }
		return;
	}
}
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Orbital::get_WorldOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Orbital_get_WorldOffset_mE36216EB5DE4F386298F6AB2B637DBBF7E79B693 (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, const RuntimeMethod* method) 
{
	{
		// get { return worldOffset; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___worldOffset_16;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Orbital::set_WorldOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_set_WorldOffset_m16E4F1539E55B9C169AE1BFFA0372CE324D8FC1D (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { worldOffset = value; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___worldOffset_16 = L_0;
		// set { worldOffset = value; }
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.Orbital::get_UseAngleStepping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Orbital_get_UseAngleStepping_m7F5D47E4BF024DCA83771458CDDD3F23C9B86508 (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, const RuntimeMethod* method) 
{
	{
		// get { return useAngleStepping; }
		bool L_0 = __this->___useAngleStepping_17;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Orbital::set_UseAngleStepping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_set_UseAngleStepping_m4B38B1D4DE24C1AF3654FB3CB327F3C38D9A9D4D (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { useAngleStepping = value; }
		bool L_0 = ___0_value;
		__this->___useAngleStepping_17 = L_0;
		// set { useAngleStepping = value; }
		return;
	}
}
// System.Int32 MixedReality.Toolkit.SpatialManipulation.Orbital::get_TetherAngleSteps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Orbital_get_TetherAngleSteps_m34351725967B8BF3F80E4BCE2C3AFCB67A6FD541 (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, const RuntimeMethod* method) 
{
	{
		// get { return tetherAngleSteps; }
		int32_t L_0 = __this->___tetherAngleSteps_18;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Orbital::set_TetherAngleSteps(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_set_TetherAngleSteps_mA9BFFED7C9AE2C6F72C9A3A7AA739F387F7E5CC9 (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// tetherAngleSteps = Mathf.Clamp(value, 2, 24);
		int32_t L_0 = ___0_value;
		int32_t L_1;
		L_1 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_0, 2, ((int32_t)24), NULL);
		__this->___tetherAngleSteps_18 = L_1;
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Orbital::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_SolverUpdate_m15CCFD0D77A06A7E9AEC53574A15224BAA0CA11A (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	{
		// using (SolverUpdatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF_StaticFields*)il2cpp_codegen_static_fields_for(Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF_il2cpp_TypeInfo_var))->___SolverUpdatePerfMarker_19;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00dd:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// Vector3 desiredPos = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.position : Vector3.zero;
				SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_2 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
				NullCheck(L_2);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
				L_3 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_2, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_4;
				L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_4)
				{
					goto IL_0028_1;
				}
			}
			{
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
				L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
				G_B4_0 = L_5;
				goto IL_0038_1;
			}

IL_0028_1:
			{
				SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_6 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
				NullCheck(L_6);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
				L_7 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_6, NULL);
				NullCheck(L_7);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
				L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
				G_B4_0 = L_8;
			}

IL_0038_1:
			{
				V_2 = G_B4_0;
				// Quaternion targetRot = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.rotation : Quaternion.Euler(0, 1, 0);
				SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_9 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
				NullCheck(L_9);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
				L_10 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_9, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_11;
				L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_11)
				{
					goto IL_0062_1;
				}
			}
			{
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
				L_12 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (1.0f), (0.0f), NULL);
				G_B7_0 = L_12;
				goto IL_0072_1;
			}

IL_0062_1:
			{
				SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_13 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
				NullCheck(L_13);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
				L_14 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_13, NULL);
				NullCheck(L_14);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
				L_15 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_14, NULL);
				G_B7_0 = L_15;
			}

IL_0072_1:
			{
				V_3 = G_B7_0;
				// Quaternion yawOnlyRot = Quaternion.Euler(0, targetRot.eulerAngles.y, 0);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
				L_16 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_3), NULL);
				float L_17 = L_16.___y_3;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
				L_18 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_17, (0.0f), NULL);
				V_4 = L_18;
				// desiredPos += (SnapToTetherAngleSteps(targetRot) * LocalOffset);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = V_3;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
				L_21 = Orbital_SnapToTetherAngleSteps_m23DC55B1C7E6C534C54A90C6E225FE07EC63C433(__this, L_20, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
				L_22 = Orbital_get_LocalOffset_m989E02C0DD5DC176B45D27C6AE8BF61ECECBD568_inline(__this, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
				L_23 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_21, L_22, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
				L_24 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_19, L_23, NULL);
				V_2 = L_24;
				// desiredPos += (SnapToTetherAngleSteps(yawOnlyRot) * WorldOffset);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_2;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = V_4;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
				L_27 = Orbital_SnapToTetherAngleSteps_m23DC55B1C7E6C534C54A90C6E225FE07EC63C433(__this, L_26, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
				L_28 = Orbital_get_WorldOffset_mE36216EB5DE4F386298F6AB2B637DBBF7E79B693_inline(__this, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
				L_29 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_27, L_28, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
				L_30 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_25, L_29, NULL);
				V_2 = L_30;
				// Quaternion desiredRot = CalculateDesiredRotation(desiredPos);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_2;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
				L_32 = Orbital_CalculateDesiredRotation_mCD856FCC4BE2C27D6FAB1677105775BAE9FC58E4(__this, L_31, NULL);
				V_5 = L_32;
				// GoalPosition = desiredPos;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_2;
				Solver_set_GoalPosition_m51BBA4824D71ABC8189A6A6661A09942E5A72F76(__this, L_33, NULL);
				// GoalRotation = desiredRot;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = V_5;
				Solver_set_GoalRotation_m1223612AC25A7DCBBEBDECEB63E41E5425580A88(__this, L_34, NULL);
				// }
				goto IL_00eb;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00eb:
	{
		// }
		return;
	}
}
// UnityEngine.Quaternion MixedReality.Toolkit.SpatialManipulation.Orbital::SnapToTetherAngleSteps(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Orbital_SnapToTetherAngleSteps_m23DC55B1C7E6C534C54A90C6E225FE07EC63C433 (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotationToSnap, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		// if (!UseAngleStepping || SolverHandler.TransformTarget == null)
		bool L_0;
		L_0 = Orbital_get_UseAngleStepping_m7F5D47E4BF024DCA83771458CDDD3F23C9B86508_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_1 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		// return rotationToSnap;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_rotationToSnap;
		return L_4;
	}

IL_001d:
	{
		// float stepAngle = 360f / tetherAngleSteps;
		int32_t L_5 = __this->___tetherAngleSteps_18;
		V_0 = ((float)((360.0f)/((float)L_5)));
		// int numberOfSteps = Mathf.RoundToInt(SolverHandler.TransformTarget.transform.eulerAngles.y / stepAngle);
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_6 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_8, NULL);
		float L_10 = L_9.___y_3;
		float L_11 = V_0;
		int32_t L_12;
		L_12 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)(L_10/L_11)), NULL);
		V_1 = L_12;
		// float newAngle = stepAngle * numberOfSteps;
		float L_13 = V_0;
		int32_t L_14 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply(L_13, ((float)L_14)));
		// return Quaternion.Euler(rotationToSnap.eulerAngles.x, newAngle, rotationToSnap.eulerAngles.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___0_rotationToSnap), NULL);
		float L_16 = L_15.___x_2;
		float L_17 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___0_rotationToSnap), NULL);
		float L_19 = L_18.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_16, L_17, L_19, NULL);
		return L_20;
	}
}
// UnityEngine.Quaternion MixedReality.Toolkit.SpatialManipulation.Orbital::CalculateDesiredRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Orbital_CalculateDesiredRotation_mCD856FCC4BE2C27D6FAB1677105775BAE9FC58E4 (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_desiredPos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CD00843945D07EA048DEB3291CC6916EE4EA58B);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float G_B5_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	{
		// Quaternion desiredRot = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		V_0 = L_0;
		// switch (orientationType)
		int32_t L_1 = __this->___orientationType_14;
		V_2 = L_1;
		int32_t L_2 = V_2;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0076;
			}
			case 1:
			{
				goto IL_010b;
			}
			case 2:
			{
				goto IL_009c;
			}
			case 3:
			{
				goto IL_0030;
			}
			case 4:
			{
				goto IL_00d4;
			}
			case 5:
			{
				goto IL_0087;
			}
		}
	}
	{
		goto IL_0138;
	}

IL_0030:
	{
		// float targetYRotation = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.eulerAngles.y : 0.0f;
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_3 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_004a;
		}
	}
	{
		G_B5_0 = (0.0f);
		goto IL_005f;
	}

IL_004a:
	{
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_6 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_7, NULL);
		float L_9 = L_8.___y_3;
		G_B5_0 = L_9;
	}

IL_005f:
	{
		V_1 = G_B5_0;
		// desiredRot = Quaternion.Euler(0f, targetYRotation, 0f);
		float L_10 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_10, (0.0f), NULL);
		V_0 = L_11;
		// break;
		goto IL_0152;
	}

IL_0076:
	{
		// desiredRot = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_12, NULL);
		V_0 = L_13;
		// break;
		goto IL_0152;
	}

IL_0087:
	{
		// desiredRot = Camera.main.transform.rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14;
		L_14 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
		V_0 = L_16;
		// break;
		goto IL_0152;
	}

IL_009c:
	{
		// desiredRot = SolverHandler.TransformTarget != null ? Quaternion.LookRotation(SolverHandler.TransformTarget.position - desiredPos) : Quaternion.identity;
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_17 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_19)
		{
			goto IL_00b6;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		G_B11_0 = L_20;
		goto IL_00d1;
	}

IL_00b6:
	{
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_21 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___0_desiredPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_23, L_24, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_25, NULL);
		G_B11_0 = L_26;
	}

IL_00d1:
	{
		V_0 = G_B11_0;
		// break;
		goto IL_0152;
	}

IL_00d4:
	{
		// desiredRot = SolverHandler.TransformTarget != null ? Quaternion.LookRotation(Camera.main.transform.position - desiredPos) : Quaternion.identity;
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_27 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_29)
		{
			goto IL_00ee;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		L_30 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		G_B15_0 = L_30;
		goto IL_0108;
	}

IL_00ee:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31;
		L_31 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ___0_desiredPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_33, L_34, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_35, NULL);
		G_B15_0 = L_36;
	}

IL_0108:
	{
		V_0 = G_B15_0;
		// break;
		goto IL_0152;
	}

IL_010b:
	{
		// desiredRot = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.rotation : Quaternion.identity;
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_37 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_37, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_38, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_39)
		{
			goto IL_0125;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40;
		L_40 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		G_B19_0 = L_40;
		goto IL_0135;
	}

IL_0125:
	{
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_41 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_41, NULL);
		NullCheck(L_42);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_42, NULL);
		G_B19_0 = L_43;
	}

IL_0135:
	{
		V_0 = G_B19_0;
		// break;
		goto IL_0152;
	}

IL_0138:
	{
		// Debug.LogError($"Invalid OrientationType for Orbital Solver on {gameObject.name}");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_44);
		String_t* L_45;
		L_45 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_44, NULL);
		String_t* L_46;
		L_46 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2CD00843945D07EA048DEB3291CC6916EE4EA58B, L_45, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_46, NULL);
	}

IL_0152:
	{
		// if (UseAngleStepping)
		bool L_47;
		L_47 = Orbital_get_UseAngleStepping_m7F5D47E4BF024DCA83771458CDDD3F23C9B86508_inline(__this, NULL);
		if (!L_47)
		{
			goto IL_0162;
		}
	}
	{
		// desiredRot = SnapToTetherAngleSteps(desiredRot);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Orbital_SnapToTetherAngleSteps_m23DC55B1C7E6C534C54A90C6E225FE07EC63C433(__this, L_48, NULL);
		V_0 = L_49;
	}

IL_0162:
	{
		// return desiredRot;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = V_0;
		return L_50;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Orbital::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital__ctor_m6D60B2B1295A67AE02484542FF6A79A2C96BB4EC (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, const RuntimeMethod* method) 
{
	{
		// private SolverOrientationType orientationType = SolverOrientationType.FollowTrackedObject;
		__this->___orientationType_14 = 1;
		// private Vector3 localOffset = new Vector3(0, -1, 1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (-1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___localOffset_15 = L_0;
		// private Vector3 worldOffset = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___worldOffset_16 = L_1;
		// private int tetherAngleSteps = 6;
		__this->___tetherAngleSteps_18 = 6;
		Solver__ctor_m61553BCC86AA46B55E44C1999BA45487652A09D8(__this, NULL);
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Orbital::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital__cctor_m7C15CABFAFC6906EE0E90B41BA025CED247D2D2E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC380BC235C993FBE6F3BAE6FFCC9ECB99A9D861);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker SolverUpdatePerfMarker =
		//     new ProfilerMarker("[MRTK] Orbital.SolverUpdate");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteralCC380BC235C993FBE6F3BAE6FFCC9ECB99A9D861, /*hidden argument*/NULL);
		((Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF_StaticFields*)il2cpp_codegen_static_fields_for(Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF_il2cpp_TypeInfo_var))->___SolverUpdatePerfMarker_19 = L_0;
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
// System.Void MixedReality.Toolkit.SpatialManipulation.Overlap::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Overlap_SolverUpdate_mF30F2A162EBF881A783DF8A1D066859796CECD75 (Overlap_tFE1BF0BCFA303A742941C61D8DFECB46325D0736* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Overlap_tFE1BF0BCFA303A742941C61D8DFECB46325D0736_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	{
		// using (SolverUpdatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(Overlap_tFE1BF0BCFA303A742941C61D8DFECB46325D0736_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((Overlap_tFE1BF0BCFA303A742941C61D8DFECB46325D0736_StaticFields*)il2cpp_codegen_static_fields_for(Overlap_tFE1BF0BCFA303A742941C61D8DFECB46325D0736_il2cpp_TypeInfo_var))->___SolverUpdatePerfMarker_14;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// Transform target = SolverHandler.TransformTarget;
				SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_2 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
				NullCheck(L_2);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
				L_3 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_2, NULL);
				V_2 = L_3;
				// if (target != null)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_5;
				L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_5)
				{
					goto IL_003b_1;
				}
			}
			{
				// GoalPosition = target.position;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_2;
				NullCheck(L_6);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
				L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
				Solver_set_GoalPosition_m51BBA4824D71ABC8189A6A6661A09942E5A72F76(__this, L_7, NULL);
				// GoalRotation = target.rotation;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_2;
				NullCheck(L_8);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
				L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
				Solver_set_GoalRotation_m1223612AC25A7DCBBEBDECEB63E41E5425580A88(__this, L_9, NULL);
			}

IL_003b_1:
			{
				// }
				goto IL_004b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Overlap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Overlap__ctor_m0C2768FED424C6FDF437D8B4D57EFA63284393FB (Overlap_tFE1BF0BCFA303A742941C61D8DFECB46325D0736* __this, const RuntimeMethod* method) 
{
	{
		Solver__ctor_m61553BCC86AA46B55E44C1999BA45487652A09D8(__this, NULL);
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Overlap::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Overlap__cctor_m01D9CFF49753DB4B46E7328549B3313239ECEF17 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Overlap_tFE1BF0BCFA303A742941C61D8DFECB46325D0736_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5066539D6C39CF0BDA4491CDE53AD5E741C66761);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker SolverUpdatePerfMarker =
		//     new ProfilerMarker("[MRTK] Overlap.SolverUpdate");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral5066539D6C39CF0BDA4491CDE53AD5E741C66761, /*hidden argument*/NULL);
		((Overlap_tFE1BF0BCFA303A742941C61D8DFECB46325D0736_StaticFields*)il2cpp_codegen_static_fields_for(Overlap_tFE1BF0BCFA303A742941C61D8DFECB46325D0736_il2cpp_TypeInfo_var))->___SolverUpdatePerfMarker_14 = L_0;
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
// MixedReality.Toolkit.SpatialManipulation.RadialViewReferenceDirection MixedReality.Toolkit.SpatialManipulation.RadialView::get_ReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RadialView_get_ReferenceDirection_mC889B1BA7B32771325DC7C2737A8FD084DA57432 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) 
{
	{
		// get => referenceDirection;
		int32_t L_0 = __this->___referenceDirection_14;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.RadialView::set_ReferenceDirection(MixedReality.Toolkit.SpatialManipulation.RadialViewReferenceDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_ReferenceDirection_mC7092B0C3665FBD2E0BB4C0F8EE5A418A9171505 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => referenceDirection = value;
		int32_t L_0 = ___0_value;
		__this->___referenceDirection_14 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.RadialView::get_MinDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MinDistance_m6A6BCB8ED8153073D2EFC6E611C3F7C5C0DCF2FE (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) 
{
	{
		// get => minDistance;
		float L_0 = __this->___minDistance_15;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.RadialView::set_MinDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MinDistance_mE7E9467FABC5A77D4528D66F0B413CFF561C24BA (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => minDistance = value;
		float L_0 = ___0_value;
		__this->___minDistance_15 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.RadialView::get_MaxDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MaxDistance_mEC15FE89B54E0B04F1204AB300377AF5C27CF310 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) 
{
	{
		// get => maxDistance;
		float L_0 = __this->___maxDistance_16;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.RadialView::set_MaxDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MaxDistance_m4F99B57AD97B2725CEB6CFDB2C064A9257EC7BB4 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => maxDistance = value;
		float L_0 = ___0_value;
		__this->___maxDistance_16 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.RadialView::get_MinViewDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MinViewDegrees_mBF899DCF0A2ED1CEFEE939D1EBE68028A9F3C3C9 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) 
{
	{
		// get => minViewDegrees;
		float L_0 = __this->___minViewDegrees_17;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.RadialView::set_MinViewDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MinViewDegrees_m97778EBA1588AF355EDEA6FF98FE62BC671340F0 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => minViewDegrees = value;
		float L_0 = ___0_value;
		__this->___minViewDegrees_17 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.RadialView::get_MaxViewDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MaxViewDegrees_m6EFF6C7907065FB33F00E42E12F5FF0383CAA95B (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) 
{
	{
		// get => maxViewDegrees;
		float L_0 = __this->___maxViewDegrees_18;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.RadialView::set_MaxViewDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MaxViewDegrees_mDAB7946134357E2A34BD835F086F8B78C896001B (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => maxViewDegrees = value;
		float L_0 = ___0_value;
		__this->___maxViewDegrees_18 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.RadialView::get_AspectV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_AspectV_m998C90BBF5190300CCDDF41FD0AF7F7FDB7C5348 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) 
{
	{
		// get => aspectV;
		float L_0 = __this->___aspectV_19;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.RadialView::set_AspectV(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_AspectV_m77A6BE9AC64C5C62DB0BA3B562FFAEFE8C2FB502 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => aspectV = value;
		float L_0 = ___0_value;
		__this->___aspectV_19 = L_0;
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.RadialView::get_IgnoreAngleClamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_IgnoreAngleClamp_m46F05A463B41DF9FD3431AD07B445318A7C9D268 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) 
{
	{
		// get => ignoreAngleClamp;
		bool L_0 = __this->___ignoreAngleClamp_20;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.RadialView::set_IgnoreAngleClamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_IgnoreAngleClamp_mE1D10E0F40DE388DB035C47BF71268D17B737C32 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => ignoreAngleClamp = value;
		bool L_0 = ___0_value;
		__this->___ignoreAngleClamp_20 = L_0;
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.RadialView::get_IgnoreDistanceClamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_IgnoreDistanceClamp_mB46E229C33B803D1C3D89D77A68B2943DE03E916 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) 
{
	{
		// get => ignoreDistanceClamp;
		bool L_0 = __this->___ignoreDistanceClamp_21;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.RadialView::set_IgnoreDistanceClamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_IgnoreDistanceClamp_mA2202E05F3C44B7EA63DD02DFC82FC8D35539981 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => ignoreDistanceClamp = value;
		bool L_0 = ___0_value;
		__this->___ignoreDistanceClamp_21 = L_0;
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.RadialView::get_UseFixedVerticalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_m81028E564FC20AC640E0C1847972BDCF36347C25 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) 
{
	{
		// get => useFixedVerticalPosition;
		bool L_0 = __this->___useFixedVerticalPosition_22;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.RadialView::set_UseFixedVerticalPosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_UseFixedVerticalPosition_mBDB0723088E4598193012079FCFC2958F25C8E2B (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => useFixedVerticalPosition = value;
		bool L_0 = ___0_value;
		__this->___useFixedVerticalPosition_22 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.RadialView::get_FixedVerticalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_mFE1B74EDDD04F227AE40B77106A64BF46849EEC9 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) 
{
	{
		// get => fixedVerticalPosition;
		float L_0 = __this->___fixedVerticalPosition_23;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.RadialView::set_FixedVerticalPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_FixedVerticalPosition_m5CAA1A6A11E9843D0E21AA061261363E4F355F58 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => fixedVerticalPosition = value;
		float L_0 = ___0_value;
		__this->___fixedVerticalPosition_23 = L_0;
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.RadialView::get_OrientToReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_OrientToReferenceDirection_m7301AC7E644588170B563B836C19660A6B539351 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) 
{
	{
		// get => orientToReferenceDirection;
		bool L_0 = __this->___orientToReferenceDirection_24;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.RadialView::set_OrientToReferenceDirection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_OrientToReferenceDirection_mC6A5B7167AA65F3BA4CB2392BF434177BE83B589 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => orientToReferenceDirection = value;
		bool L_0 = ___0_value;
		__this->___orientToReferenceDirection_24 = L_0;
		return;
	}
}
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.RadialView::get_SolverReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RadialView_get_SolverReferenceDirection_m54DAED9478094B98B2AD851B724982A7A0D5D2FC (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 SolverReferenceDirection => SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.forward : Vector3.forward;
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_0 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		return L_3;
	}

IL_0019:
	{
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_4 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.RadialView::get_UpReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RadialView_get_UpReference_m7D004D9E98591C326BE2848071A9760983104B4C (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// Vector3 upReference = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		V_0 = L_0;
		// if (referenceDirection == RadialViewReferenceDirection.ObjectOriented)
		int32_t L_1 = __this->___referenceDirection_14;
		if (L_1)
		{
			goto IL_0039;
		}
	}
	{
		// upReference = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.up : Vector3.up;
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_2 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		G_B4_0 = L_5;
		goto IL_0038;
	}

IL_0028:
	{
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_6 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_7, NULL);
		G_B4_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B4_0;
	}

IL_0039:
	{
		// return upReference;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.RadialView::get_ReferencePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RadialView_get_ReferencePoint_m7559284C2789031BCBE6397EB34424B651740A65 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 ReferencePoint => SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.position : Vector3.zero;
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_0 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_3;
	}

IL_0019:
	{
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_4 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		return L_6;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.RadialView::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_SolverUpdate_m8E420F3666FBBD46867DDC086FDA8A6B879C71B4 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	{
		// using (SolverUpdatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_StaticFields*)il2cpp_codegen_static_fields_for(RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_il2cpp_TypeInfo_var))->___SolverUpdatePerfMarker_25;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cb:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// Vector3 goalPosition = WorkingPosition;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
				L_2 = Solver_get_WorkingPosition_m0D0F18279AEB6922D9101850C66EDA1255C024BD(__this, NULL);
				V_2 = L_2;
				// if (ignoreAngleClamp)
				bool L_3 = __this->___ignoreAngleClamp_20;
				if (!L_3)
				{
					goto IL_003d_1;
				}
			}
			{
				// if (ignoreDistanceClamp)
				bool L_4 = __this->___ignoreDistanceClamp_21;
				if (!L_4)
				{
					goto IL_0033_1;
				}
			}
			{
				// goalPosition = transform.position;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
				L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				NullCheck(L_5);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
				L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
				V_2 = L_6;
				goto IL_0045_1;
			}

IL_0033_1:
			{
				// GetDesiredOrientation_DistanceOnly(ref goalPosition);
				RadialView_GetDesiredOrientation_DistanceOnly_m9066B3CB83EC03870322C720B00C863033FFD886(__this, (&V_2), NULL);
				goto IL_0045_1;
			}

IL_003d_1:
			{
				// GetDesiredOrientation(ref goalPosition);
				RadialView_GetDesiredOrientation_mB4D6D28ED2CD5DDFBD69C11F5DAC242AF1FE6A20(__this, (&V_2), NULL);
			}

IL_0045_1:
			{
				// Vector3 refDirUp = UpReference;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
				L_7 = RadialView_get_UpReference_m7D004D9E98591C326BE2848071A9760983104B4C(__this, NULL);
				V_3 = L_7;
				// if (orientToReferenceDirection)
				bool L_8 = __this->___orientToReferenceDirection_24;
				if (!L_8)
				{
					goto IL_0064_1;
				}
			}
			{
				// goalRotation = Quaternion.LookRotation(SolverReferenceDirection, refDirUp);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = RadialView_get_SolverReferenceDirection_m54DAED9478094B98B2AD851B724982A7A0D5D2FC(__this, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_3;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
				L_11 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_9, L_10, NULL);
				V_4 = L_11;
				goto IL_0078_1;
			}

IL_0064_1:
			{
				// goalRotation = Quaternion.LookRotation(goalPosition - ReferencePoint, refDirUp);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
				L_13 = RadialView_get_ReferencePoint_m7559284C2789031BCBE6397EB34424B651740A65(__this, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
				L_14 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_13, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_3;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
				L_16 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_14, L_15, NULL);
				V_4 = L_16;
			}

IL_0078_1:
			{
				// if (referenceDirection == RadialViewReferenceDirection.GravityAligned)
				int32_t L_17 = __this->___referenceDirection_14;
				if ((!(((uint32_t)L_17) == ((uint32_t)2))))
				{
					goto IL_0099_1;
				}
			}
			{
				// goalRotation.x = goalRotation.z = 0f;
				float L_18 = (0.0f);
				V_5 = L_18;
				(&V_4)->___z_2 = L_18;
				float L_19 = V_5;
				(&V_4)->___x_0 = L_19;
			}

IL_0099_1:
			{
				// if (UseFixedVerticalPosition)
				bool L_20;
				L_20 = RadialView_get_UseFixedVerticalPosition_m81028E564FC20AC640E0C1847972BDCF36347C25_inline(__this, NULL);
				if (!L_20)
				{
					goto IL_00ba_1;
				}
			}
			{
				// goalPosition.y = ReferencePoint.y + FixedVerticalPosition;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
				L_21 = RadialView_get_ReferencePoint_m7559284C2789031BCBE6397EB34424B651740A65(__this, NULL);
				float L_22 = L_21.___y_3;
				float L_23;
				L_23 = RadialView_get_FixedVerticalPosition_mFE1B74EDDD04F227AE40B77106A64BF46849EEC9_inline(__this, NULL);
				(&V_2)->___y_3 = ((float)il2cpp_codegen_add(L_22, L_23));
			}

IL_00ba_1:
			{
				// GoalPosition = goalPosition;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_2;
				Solver_set_GoalPosition_m51BBA4824D71ABC8189A6A6661A09942E5A72F76(__this, L_24, NULL);
				// GoalRotation = goalRotation;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = V_4;
				Solver_set_GoalRotation_m1223612AC25A7DCBBEBDECEB63E41E5425580A88(__this, L_25, NULL);
				// }
				goto IL_00d9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.RadialView::GetDesiredOrientation_DistanceOnly(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_DistanceOnly_m9066B3CB83EC03870322C720B00C863033FFD886 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_desiredPos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// using (GetDesiredOrientationDistanceOnlyPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_StaticFields*)il2cpp_codegen_static_fields_for(RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_il2cpp_TypeInfo_var))->___GetDesiredOrientationDistanceOnlyPerfMarker_26;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0081:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// Vector3 refPoint = ReferencePoint;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
				L_2 = RadialView_get_ReferencePoint_m7559284C2789031BCBE6397EB34424B651740A65(__this, NULL);
				V_2 = L_2;
				// Vector3 elementPoint = transform.position;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
				L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				NullCheck(L_3);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
				L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
				// Vector3 elementDelta = elementPoint - refPoint;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
				L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_5, NULL);
				V_3 = L_6;
				// float elementDist = elementDelta.magnitude;
				float L_7;
				L_7 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_3), NULL);
				V_4 = L_7;
				// Vector3 elementDir = elementDist > 0 ? elementDelta / elementDist : Vector3.one;
				float L_8 = V_4;
				if ((((float)L_8) > ((float)(0.0f))))
				{
					goto IL_0040_1;
				}
			}
			{
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
				G_B4_0 = L_9;
				goto IL_0048_1;
			}

IL_0040_1:
			{
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_3;
				float L_11 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
				L_12 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_10, L_11, NULL);
				G_B4_0 = L_12;
			}

IL_0048_1:
			{
				V_5 = G_B4_0;
				// float clampedDistance = Mathf.Clamp(elementDist, minDistance, maxDistance);
				float L_13 = V_4;
				float L_14 = __this->___minDistance_15;
				float L_15 = __this->___maxDistance_16;
				float L_16;
				L_16 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_13, L_14, L_15, NULL);
				V_6 = L_16;
				// if (!clampedDistance.Equals(elementDist))
				float L_17 = V_4;
				bool L_18;
				L_18 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_6), L_17, NULL);
				if (L_18)
				{
					goto IL_007f_1;
				}
			}
			{
				// desiredPos = refPoint + clampedDistance * elementDir;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = ___0_desiredPos;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
				float L_21 = V_6;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
				L_23 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_21, L_22, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
				L_24 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_23, NULL);
				*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_19 = L_24;
			}

IL_007f_1:
			{
				// }
				goto IL_008f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.RadialView::GetDesiredOrientation(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_mB4D6D28ED2CD5DDFBD69C11F5DAC242AF1FE6A20 (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_desiredPos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	float G_B6_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	{
		// using (GetDesiredOrientationPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_StaticFields*)il2cpp_codegen_static_fields_for(RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_il2cpp_TypeInfo_var))->___GetDesiredOrientationPerfMarker_27;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_015c:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// Vector3 direction = SolverReferenceDirection;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
				L_2 = RadialView_get_SolverReferenceDirection_m54DAED9478094B98B2AD851B724982A7A0D5D2FC(__this, NULL);
				V_2 = L_2;
				// Vector3 upDirection = UpReference;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
				L_3 = RadialView_get_UpReference_m7D004D9E98591C326BE2848071A9760983104B4C(__this, NULL);
				V_3 = L_3;
				// Vector3 referencePoint = ReferencePoint;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
				L_4 = RadialView_get_ReferencePoint_m7559284C2789031BCBE6397EB34424B651740A65(__this, NULL);
				V_4 = L_4;
				// Vector3 elementPoint = transform.position;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
				L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				NullCheck(L_5);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
				L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
				// Vector3 elementDelta = elementPoint - referencePoint;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
				L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_7, NULL);
				V_5 = L_8;
				// float elementDist = elementDelta.magnitude;
				float L_9;
				L_9 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_5), NULL);
				V_6 = L_9;
				// Vector3 elementDir = elementDist > 0 ? elementDelta / elementDist : Vector3.one;
				float L_10 = V_6;
				if ((((float)L_10) > ((float)(0.0f))))
				{
					goto IL_0051_1;
				}
			}
			{
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
				L_11 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
				G_B4_0 = L_11;
				goto IL_005a_1;
			}

IL_0051_1:
			{
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_5;
				float L_13 = V_6;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
				L_14 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_12, L_13, NULL);
				G_B4_0 = L_14;
			}

IL_005a_1:
			{
				V_7 = G_B4_0;
				// Vector3 perpendicularDirection = (elementDir - direction);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_7;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
				L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_16, NULL);
				V_8 = L_17;
				// perpendicularDirection -= direction * Vector3.Dot(perpendicularDirection, direction);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_2;
				float L_22;
				L_22 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_20, L_21, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
				L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_22, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
				L_24 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_18, L_23, NULL);
				V_8 = L_24;
				// perpendicularDirection.Normalize();
				Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_8), NULL);
				// float heightToViewAngle = Vector3.Angle(perpendicularDirection, upDirection);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_3;
				float L_27;
				L_27 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_25, L_26, NULL);
				V_9 = L_27;
				// float verticalAspectScale = Mathf.Lerp(aspectV, 1f, Mathf.Abs(Mathf.Sin(heightToViewAngle * Mathf.Deg2Rad)));
				float L_28 = __this->___aspectV_19;
				float L_29 = V_9;
				float L_30;
				L_30 = sinf(((float)il2cpp_codegen_multiply(L_29, (0.0174532924f))));
				float L_31;
				L_31 = fabsf(L_30);
				float L_32;
				L_32 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_28, (1.0f), L_31, NULL);
				V_10 = L_32;
				// float currentAngle = Vector3.Angle(elementDir, direction);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_7;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_2;
				float L_35;
				L_35 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_33, L_34, NULL);
				// float currentAngleClamped = Mathf.Clamp(currentAngle, minViewDegrees * verticalAspectScale, maxViewDegrees * verticalAspectScale);
				float L_36 = L_35;
				float L_37 = __this->___minViewDegrees_17;
				float L_38 = V_10;
				float L_39 = __this->___maxViewDegrees_18;
				float L_40 = V_10;
				float L_41;
				L_41 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_36, ((float)il2cpp_codegen_multiply(L_37, L_38)), ((float)il2cpp_codegen_multiply(L_39, L_40)), NULL);
				V_11 = L_41;
				// float clampedDistance = ignoreDistanceClamp ? elementDist : Mathf.Clamp(elementDist, minDistance, maxDistance);
				bool L_42 = __this->___ignoreDistanceClamp_21;
				G_B5_0 = L_36;
				if (L_42)
				{
					G_B6_0 = L_36;
					goto IL_00f1_1;
				}
			}
			{
				float L_43 = V_6;
				float L_44 = __this->___minDistance_15;
				float L_45 = __this->___maxDistance_16;
				float L_46;
				L_46 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_43, L_44, L_45, NULL);
				G_B7_0 = L_46;
				G_B7_1 = G_B5_0;
				goto IL_00f3_1;
			}

IL_00f1_1:
			{
				float L_47 = V_6;
				G_B7_0 = L_47;
				G_B7_1 = G_B6_0;
			}

IL_00f3_1:
			{
				V_12 = G_B7_0;
				// if (currentAngle != currentAngleClamped)
				float L_48 = V_11;
				if ((((float)G_B7_1) == ((float)L_48)))
				{
					goto IL_0139_1;
				}
			}
			{
				// float angRad = currentAngleClamped * Mathf.Deg2Rad;
				float L_49 = V_11;
				V_13 = ((float)il2cpp_codegen_multiply(L_49, (0.0174532924f)));
				// desiredPos = referencePoint + clampedDistance * (direction * Mathf.Cos(angRad) + perpendicularDirection * Mathf.Sin(angRad));
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_50 = ___0_desiredPos;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_4;
				float L_52 = V_12;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_2;
				float L_54 = V_13;
				float L_55;
				L_55 = cosf(L_54);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
				L_56 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_53, L_55, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_8;
				float L_58 = V_13;
				float L_59;
				L_59 = sinf(L_58);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
				L_60 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_57, L_59, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
				L_61 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_56, L_60, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
				L_62 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_52, L_61, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
				L_63 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_51, L_62, NULL);
				*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_50 = L_63;
				goto IL_016a;
			}

IL_0139_1:
			{
				// else if (!clampedDistance.Equals(elementDist))
				float L_64 = V_6;
				bool L_65;
				L_65 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_12), L_64, NULL);
				if (L_65)
				{
					goto IL_015a_1;
				}
			}
			{
				// desiredPos = referencePoint + clampedDistance * elementDir;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_66 = ___0_desiredPos;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = V_4;
				float L_68 = V_12;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_7;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
				L_70 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_68, L_69, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
				L_71 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_67, L_70, NULL);
				*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_66 = L_71;
			}

IL_015a_1:
			{
				// }
				goto IL_016a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_016a:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.RadialView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView__ctor_m0BF65089F8ADB66159BFCB7E82134B7507FBD9BC (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) 
{
	{
		// private RadialViewReferenceDirection referenceDirection = RadialViewReferenceDirection.FacingWorldUp;
		__this->___referenceDirection_14 = 1;
		// private float minDistance = 1f;
		__this->___minDistance_15 = (1.0f);
		// private float maxDistance = 2f;
		__this->___maxDistance_16 = (2.0f);
		// private float maxViewDegrees = 30f;
		__this->___maxViewDegrees_18 = (30.0f);
		// private float aspectV = 1f;
		__this->___aspectV_19 = (1.0f);
		// private float fixedVerticalPosition = -0.4f;
		__this->___fixedVerticalPosition_23 = (-0.400000006f);
		Solver__ctor_m61553BCC86AA46B55E44C1999BA45487652A09D8(__this, NULL);
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.RadialView::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView__cctor_m46F4AE93D0A4A8BABE8085708D390FD6AC6DAB21 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral180B3BC56463B1A52304374A2002E6BC71CD0AAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AF9D8A6905692F27A4D66D976675934A990305D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4688CA92F8ABA1648F41FC47174A407BAEC8C93);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker SolverUpdatePerfMarker =
		//     new ProfilerMarker("[MRTK] RadialView.SolverUpdate");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteralD4688CA92F8ABA1648F41FC47174A407BAEC8C93, /*hidden argument*/NULL);
		((RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_StaticFields*)il2cpp_codegen_static_fields_for(RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_il2cpp_TypeInfo_var))->___SolverUpdatePerfMarker_25 = L_0;
		// private static readonly ProfilerMarker GetDesiredOrientationDistanceOnlyPerfMarker =
		//     new ProfilerMarker("[MRTK] Orbital.GetDesiredOrientation_DistanceOnly");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_1), _stringLiteral5AF9D8A6905692F27A4D66D976675934A990305D, /*hidden argument*/NULL);
		((RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_StaticFields*)il2cpp_codegen_static_fields_for(RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_il2cpp_TypeInfo_var))->___GetDesiredOrientationDistanceOnlyPerfMarker_26 = L_1;
		// private static readonly ProfilerMarker GetDesiredOrientationPerfMarker =
		//     new ProfilerMarker("[MRTK] Orbital.GetDesiredOrientation");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_2), _stringLiteral180B3BC56463B1A52304374A2002E6BC71CD0AAF, /*hidden argument*/NULL);
		((RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_StaticFields*)il2cpp_codegen_static_fields_for(RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B_il2cpp_TypeInfo_var))->___GetDesiredOrientationPerfMarker_27 = L_2;
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
// MixedReality.Toolkit.ControllerLookup MixedReality.Toolkit.SpatialManipulation.Solver::get_ControllerLookup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerLookup_t546F69017B49B4DB24E47BF1551B5135DB20B7A3* Solver_get_ControllerLookup_m9F1EF392F205D0E263F31E154142C7DB9A84DB3A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static ControllerLookup ControllerLookup => controllerLookup;
		ControllerLookup_t546F69017B49B4DB24E47BF1551B5135DB20B7A3* L_0 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578_StaticFields*)il2cpp_codegen_static_fields_for(Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578_il2cpp_TypeInfo_var))->___controllerLookup_4;
		return L_0;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.Solver::get_UpdateLinkedTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver_get_UpdateLinkedTransform_mDB8EF5F1EAE5776F6DD6230E06F45E54C04FEAFB (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	{
		// get => updateLinkedTransform;
		bool L_0 = __this->___updateLinkedTransform_5;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::set_UpdateLinkedTransform(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_UpdateLinkedTransform_m365218D30B373AC51B3513ECC0692CAF16A78F5E (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => updateLinkedTransform = value;
		bool L_0 = ___0_value;
		__this->___updateLinkedTransform_5 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.Solver::get_MoveLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver_get_MoveLerpTime_mD861C7C260FDAE75354CC281C6C8056644B7537C (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	{
		// get => moveLerpTime;
		float L_0 = __this->___moveLerpTime_6;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::set_MoveLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_MoveLerpTime_m0A23157D23AEBDAE73AFBAD285399073A48F60D5 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => moveLerpTime = value;
		float L_0 = ___0_value;
		__this->___moveLerpTime_6 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.Solver::get_RotateLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver_get_RotateLerpTime_m6CF809CDA5120E1E46A00C932B95CF63EDD9A493 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	{
		// get => rotateLerpTime;
		float L_0 = __this->___rotateLerpTime_7;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::set_RotateLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_RotateLerpTime_m240142E1DE9AA0A66FB54090D2BC485D2276DBF2 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => rotateLerpTime = value;
		float L_0 = ___0_value;
		__this->___rotateLerpTime_7 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.Solver::get_ScaleLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver_get_ScaleLerpTime_m32B4F248D263B35D4E47B97F3C55001E62F60764 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	{
		// get => scaleLerpTime;
		float L_0 = __this->___scaleLerpTime_8;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::set_ScaleLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_ScaleLerpTime_mAF44B718872B57685F074B5F27C42DBD27BDC3EF (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => scaleLerpTime = value;
		float L_0 = ___0_value;
		__this->___scaleLerpTime_8 = L_0;
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.Solver::get_Smoothing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver_get_Smoothing_m99C178EF8050D8781114B8A80885036C44B71FF5 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	{
		// get => smoothing;
		bool L_0 = __this->___smoothing_10;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::set_Smoothing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_Smoothing_m76710B14857A4FA28033566ACBEE652AE60E61E8 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => smoothing = value;
		bool L_0 = ___0_value;
		__this->___smoothing_10 = L_0;
		return;
	}
}
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Solver::get_GoalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Solver_get_GoalPosition_mF08100391BCB0E2597A67297051C69224D0E875F (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	{
		// get { return SolverHandler.GoalPosition; }
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_0 = __this->___SolverHandler_13;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = SolverHandler_get_GoalPosition_m287FC681D5DFB57264ADD5E9E994B7C87BB9E049_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalPosition_m51BBA4824D71ABC8189A6A6661A09942E5A72F76 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { SolverHandler.GoalPosition = value; }
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_0 = __this->___SolverHandler_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		NullCheck(L_0);
		SolverHandler_set_GoalPosition_m2D92641664852D4A576132EAA64A19D73BDCD2AA_inline(L_0, L_1, NULL);
		// set { SolverHandler.GoalPosition = value; }
		return;
	}
}
// UnityEngine.Quaternion MixedReality.Toolkit.SpatialManipulation.Solver::get_GoalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Solver_get_GoalRotation_m203C11A33069E62B914F969CFDC907DC6DDD2FBA (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	{
		// get { return SolverHandler.GoalRotation; }
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_0 = __this->___SolverHandler_13;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = SolverHandler_get_GoalRotation_mC0CEEB989A81193D184206C6B11624B75EB41B34_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalRotation_m1223612AC25A7DCBBEBDECEB63E41E5425580A88 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { SolverHandler.GoalRotation = value; }
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_0 = __this->___SolverHandler_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_value;
		NullCheck(L_0);
		SolverHandler_set_GoalRotation_mB10BEBDCB8E0EEF7105AAD9ABE32C75CC2476A9B_inline(L_0, L_1, NULL);
		// set { SolverHandler.GoalRotation = value; }
		return;
	}
}
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Solver::get_GoalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Solver_get_GoalScale_m1A95E018BF1D6644B3157497DB90C46FA4B4B440 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	{
		// get { return SolverHandler.GoalScale; }
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_0 = __this->___SolverHandler_13;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = SolverHandler_get_GoalScale_m8E037AF9B1B4E371A835086F59DAB2AE3A425E55_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalScale_m1116EF375DC1694A51CF451C49E7700B43D6F649 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { SolverHandler.GoalScale = value; }
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_0 = __this->___SolverHandler_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		NullCheck(L_0);
		SolverHandler_set_GoalScale_m33FDA0F6759ABD82E20B9A95213AEE3D202CEF1D_inline(L_0, L_1, NULL);
		// set { SolverHandler.GoalScale = value; }
		return;
	}
}
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Solver::get_WorkingPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Solver_get_WorkingPosition_m0D0F18279AEB6922D9101850C66EDA1255C024BD (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	{
		// return updateLinkedTransform ? GoalPosition : transform.position;
		bool L_0 = __this->___updateLinkedTransform_5;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Solver_get_GoalPosition_mF08100391BCB0E2597A67297051C69224D0E875F(__this, NULL);
		return L_3;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::set_WorkingPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingPosition_mA9747538E80E19A6C0D6A5BFAB14A99BF5E59FCB (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->___updateLinkedTransform_5;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// GoalPosition = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		Solver_set_GoalPosition_m51BBA4824D71ABC8189A6A6661A09942E5A72F76(__this, L_1, NULL);
		return;
	}

IL_0010:
	{
		// transform.position = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_value;
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_3, NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion MixedReality.Toolkit.SpatialManipulation.Solver::get_WorkingRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Solver_get_WorkingRotation_m900CAE5ECF091AA713B19FC04DF87ECD83EA1CF2 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	{
		// return updateLinkedTransform ? GoalRotation : transform.rotation;
		bool L_0 = __this->___updateLinkedTransform_5;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Solver_get_GoalRotation_m203C11A33069E62B914F969CFDC907DC6DDD2FBA(__this, NULL);
		return L_3;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::set_WorkingRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingRotation_mB2B1C632B3E5D44D81801E1F50AAB41C9013529A (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->___updateLinkedTransform_5;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// GoalRotation = value;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_value;
		Solver_set_GoalRotation_m1223612AC25A7DCBBEBDECEB63E41E5425580A88(__this, L_1, NULL);
		return;
	}

IL_0010:
	{
		// transform.rotation = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___0_value;
		NullCheck(L_2);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_2, L_3, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Solver::get_WorkingScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Solver_get_WorkingScale_mD8C6FA9E392BA79C01092B25EBC4905490736807 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	{
		// return updateLinkedTransform ? GoalScale : transform.localScale;
		bool L_0 = __this->___updateLinkedTransform_5;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Solver_get_GoalScale_m1A95E018BF1D6644B3157497DB90C46FA4B4B440(__this, NULL);
		return L_3;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::set_WorkingScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingScale_m48A655AB9C605F4F2DA8A1CB5297B3B691E72BBE (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->___updateLinkedTransform_5;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// GoalScale = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		Solver_set_GoalScale_m1116EF375DC1694A51CF451C49E7700B43D6F649(__this, L_1, NULL);
		return;
	}

IL_0010:
	{
		// transform.localScale = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_value;
		NullCheck(L_2);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_Awake_m912ED59DA2DDC22EBD8F5CD38EA1A90799B64335 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_m1847059692008A57D71105CCAF27ED51915680F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40725C381EA894578A0B93C4649F8531D3F9A7B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FD09F0A748FACEE89654EC33115778AC9B649C5);
		s_Il2CppMethodInitialized = true;
	}
	Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* G_B7_0 = NULL;
	Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* G_B6_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* G_B8_1 = NULL;
	{
		// if (SolverHandler == null)
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_0 = __this->___SolverHandler_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// SolverHandler = GetComponent<SolverHandler>();
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_2;
		L_2 = Component_GetComponent_TisSolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_m1847059692008A57D71105CCAF27ED51915680F7(__this, Component_GetComponent_TisSolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_m1847059692008A57D71105CCAF27ED51915680F7_RuntimeMethod_var);
		__this->___SolverHandler_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SolverHandler_13), (void*)L_2);
	}

IL_001a:
	{
		// if (updateLinkedTransform && SolverHandler == null)
		bool L_3 = __this->___updateLinkedTransform_5;
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_4 = __this->___SolverHandler_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		// Debug.LogError("No SolverHandler component found on " + name + " when UpdateLinkedTransform was set to true! Disabling UpdateLinkedTransform.");
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral4FD09F0A748FACEE89654EC33115778AC9B649C5, L_6, _stringLiteral40725C381EA894578A0B93C4649F8531D3F9A7B5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_7, NULL);
		// updateLinkedTransform = false;
		__this->___updateLinkedTransform_5 = (bool)0;
	}

IL_0051:
	{
		// GoalScale = maintainScaleOnInitialization ? transform.localScale : Vector3.one;
		bool L_8 = __this->___maintainScaleOnInitialization_9;
		G_B6_0 = __this;
		if (L_8)
		{
			G_B7_0 = __this;
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		G_B8_0 = L_9;
		G_B8_1 = G_B6_0;
		goto IL_006c;
	}

IL_0061:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_10, NULL);
		G_B8_0 = L_11;
		G_B8_1 = G_B7_0;
	}

IL_006c:
	{
		NullCheck(G_B8_1);
		Solver_set_GoalScale_m1116EF375DC1694A51CF451C49E7700B43D6F649(G_B8_1, G_B8_0, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_OnEnable_mB77A0649926B883E53A7E73545B8F597905E1B78 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolverHandler != null)
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_0 = __this->___SolverHandler_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// SnapGoalTo(GoalPosition, GoalRotation, GoalScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Solver_get_GoalPosition_mF08100391BCB0E2597A67297051C69224D0E875F(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Solver_get_GoalRotation_m203C11A33069E62B914F969CFDC907DC6DDD2FBA(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Solver_get_GoalScale_m1A95E018BF1D6644B3157497DB90C46FA4B4B440(__this, NULL);
		VirtualActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(10 /* System.Void MixedReality.Toolkit.SpatialManipulation.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3) */, __this, L_2, L_3, L_4);
	}

IL_0026:
	{
		// currentLifetime = 0;
		__this->___currentLifetime_12 = (0.0f);
		// if (SolverHandler != null)
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_5 = __this->___SolverHandler_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		// SolverHandler.RegisterSolver(this);
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_7 = __this->___SolverHandler_13;
		NullCheck(L_7);
		SolverHandler_RegisterSolver_mB83CC7455E7B3B1691019AD59A1401C858F7EEAF(L_7, __this, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_OnDisable_m121C931E5C31898D9B7F8C10DE7CC389E4610242 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolverHandler != null)
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_0 = __this->___SolverHandler_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// SolverHandler.UnregisterSolver(this);
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_2 = __this->___SolverHandler_13;
		NullCheck(L_2);
		SolverHandler_UnregisterSolver_mC2F9D25C39AA0F20A3CC0906A229EA8D676F1645(L_2, __this, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_Start_m96B0F3C28A0EAD56022300ADDC07F7842F4E707F (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCache_1_FindFirstActiveInstance_mC8779F66BA148B9E11A33E628B0CED9744DEFD2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (controllerLookup == null)
		ControllerLookup_t546F69017B49B4DB24E47BF1551B5135DB20B7A3* L_0 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578_StaticFields*)il2cpp_codegen_static_fields_for(Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578_il2cpp_TypeInfo_var))->___controllerLookup_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// controllerLookup = ComponentCache<ControllerLookup>.FindFirstActiveInstance();
		ControllerLookup_t546F69017B49B4DB24E47BF1551B5135DB20B7A3* L_2;
		L_2 = ComponentCache_1_FindFirstActiveInstance_mC8779F66BA148B9E11A33E628B0CED9744DEFD2A(ComponentCache_1_FindFirstActiveInstance_mC8779F66BA148B9E11A33E628B0CED9744DEFD2A_RuntimeMethod_var);
		((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578_StaticFields*)il2cpp_codegen_static_fields_for(Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578_il2cpp_TypeInfo_var))->___controllerLookup_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578_StaticFields*)il2cpp_codegen_static_fields_for(Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578_il2cpp_TypeInfo_var))->___controllerLookup_4), (void*)L_2);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::SolverUpdateEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SolverUpdateEntry_mCC5F3BC199C9509A5922F619877850A632D54FF1 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	{
		// currentLifetime += SolverHandler.DeltaTime;
		float L_0 = __this->___currentLifetime_12;
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_1 = __this->___SolverHandler_13;
		NullCheck(L_1);
		float L_2;
		L_2 = SolverHandler_get_DeltaTime_m7BD6BFA0D56BAC2A6E37099975F31A5A2D79DE49_inline(L_1, NULL);
		__this->___currentLifetime_12 = ((float)il2cpp_codegen_add(L_0, L_2));
		// if (lifetime > 0 && currentLifetime >= lifetime)
		float L_3 = __this->___lifetime_11;
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_003b;
		}
	}
	{
		float L_4 = __this->___currentLifetime_12;
		float L_5 = __this->___lifetime_11;
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_003b:
	{
		// SolverUpdate();
		VirtualActionInvoker0::Invoke(8 /* System.Void MixedReality.Toolkit.SpatialManipulation.Solver::SolverUpdate() */, __this);
		// UpdateWorkingToGoal();
		Solver_UpdateWorkingToGoal_m4C770F0A8AD9CD95264624E20DC8807C8AF0350F(__this, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapTo_m047C907881755B4B9E62AFF0F87993160A4F90C1 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_scale, const RuntimeMethod* method) 
{
	{
		// SnapGoalTo(position, rotation, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___2_scale;
		VirtualActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(10 /* System.Void MixedReality.Toolkit.SpatialManipulation.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3) */, __this, L_0, L_1, L_2);
		// WorkingPosition = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_position;
		Solver_set_WorkingPosition_mA9747538E80E19A6C0D6A5BFAB14A99BF5E59FCB(__this, L_3, NULL);
		// WorkingRotation = rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___1_rotation;
		Solver_set_WorkingRotation_mB2B1C632B3E5D44D81801E1F50AAB41C9013529A(__this, L_4, NULL);
		// WorkingScale = scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___2_scale;
		Solver_set_WorkingScale_m48A655AB9C605F4F2DA8A1CB5297B3B691E72BBE(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapGoalTo_mC33055A28B8613C7BBA21B9CE8C3B6DE5F6D1340 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_scale, const RuntimeMethod* method) 
{
	{
		// GoalPosition = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_position;
		Solver_set_GoalPosition_m51BBA4824D71ABC8189A6A6661A09942E5A72F76(__this, L_0, NULL);
		// GoalRotation = rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_rotation;
		Solver_set_GoalRotation_m1223612AC25A7DCBBEBDECEB63E41E5425580A88(__this, L_1, NULL);
		// GoalScale = scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___2_scale;
		Solver_set_GoalScale_m1116EF375DC1694A51CF451C49E7700B43D6F649(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::AddOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_AddOffset_mF7447117FB477669F4B7EFE0BB84DEB6B6AD5393 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_offset, const RuntimeMethod* method) 
{
	{
		// GoalPosition += offset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Solver_get_GoalPosition_mF08100391BCB0E2597A67297051C69224D0E875F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_offset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_1, NULL);
		Solver_set_GoalPosition_m51BBA4824D71ABC8189A6A6661A09942E5A72F76(__this, L_2, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Solver::SmoothTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Solver_SmoothTo_m710C5080A5EE348ACDB30A2C93EB50B5A2A9242F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_goal, float ___2_deltaTime, float ___3_lerpTime, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// return Vector3.Lerp(source, goal, lerpTime.Equals(0.0f) ? 1f : deltaTime / lerpTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_goal;
		bool L_2;
		L_2 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&___3_lerpTime), (0.0f), NULL);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0015;
		}
	}
	{
		float L_3 = ___2_deltaTime;
		float L_4 = ___3_lerpTime;
		G_B3_0 = ((float)(L_3/L_4));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_5;
	}
}
// UnityEngine.Quaternion MixedReality.Toolkit.SpatialManipulation.Solver::SmoothTo(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Solver_SmoothTo_m83E851DB8BBAB536D599470D92A79EA49464121D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_source, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_goal, float ___2_deltaTime, float ___3_lerpTime, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// return Quaternion.Slerp(source, goal, lerpTime.Equals(0.0f) ? 1f : deltaTime / lerpTime);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_source;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_goal;
		bool L_2;
		L_2 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&___3_lerpTime), (0.0f), NULL);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0015;
		}
	}
	{
		float L_3 = ___2_deltaTime;
		float L_4 = ___3_lerpTime;
		G_B3_0 = ((float)(L_3/L_4));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001a:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_5;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::UpdateTransformToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateTransformToGoal_mF8DAAA986957A0F1C93351F2995731C1B4129E42 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (smoothing)
		bool L_0 = __this->___smoothing_10;
		if (!L_0)
		{
			goto IL_00a3;
		}
	}
	{
		// Vector3 pos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		// Quaternion rot = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		V_1 = L_4;
		// Vector3 scale = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		V_2 = L_6;
		// pos = SmoothTo(pos, GoalPosition, SolverHandler.DeltaTime, moveLerpTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Solver_get_GoalPosition_mF08100391BCB0E2597A67297051C69224D0E875F(__this, NULL);
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_9 = __this->___SolverHandler_13;
		NullCheck(L_9);
		float L_10;
		L_10 = SolverHandler_get_DeltaTime_m7BD6BFA0D56BAC2A6E37099975F31A5A2D79DE49_inline(L_9, NULL);
		float L_11 = __this->___moveLerpTime_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Solver_SmoothTo_m710C5080A5EE348ACDB30A2C93EB50B5A2A9242F(L_7, L_8, L_10, L_11, NULL);
		V_0 = L_12;
		// rot = SmoothTo(rot, GoalRotation, SolverHandler.DeltaTime, rotateLerpTime);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Solver_get_GoalRotation_m203C11A33069E62B914F969CFDC907DC6DDD2FBA(__this, NULL);
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_15 = __this->___SolverHandler_13;
		NullCheck(L_15);
		float L_16;
		L_16 = SolverHandler_get_DeltaTime_m7BD6BFA0D56BAC2A6E37099975F31A5A2D79DE49_inline(L_15, NULL);
		float L_17 = __this->___rotateLerpTime_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Solver_SmoothTo_m83E851DB8BBAB536D599470D92A79EA49464121D(L_13, L_14, L_16, L_17, NULL);
		V_1 = L_18;
		// scale = SmoothTo(scale, GoalScale, SolverHandler.DeltaTime, scaleLerpTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Solver_get_GoalScale_m1A95E018BF1D6644B3157497DB90C46FA4B4B440(__this, NULL);
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_21 = __this->___SolverHandler_13;
		NullCheck(L_21);
		float L_22;
		L_22 = SolverHandler_get_DeltaTime_m7BD6BFA0D56BAC2A6E37099975F31A5A2D79DE49_inline(L_21, NULL);
		float L_23 = __this->___scaleLerpTime_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Solver_SmoothTo_m710C5080A5EE348ACDB30A2C93EB50B5A2A9242F(L_19, L_20, L_22, L_23, NULL);
		V_2 = L_24;
		// transform.SetPositionAndRotation(pos, rot);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27 = V_1;
		NullCheck(L_25);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_25, L_26, L_27, NULL);
		// transform.localScale = scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		NullCheck(L_28);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_28, L_29, NULL);
		return;
	}

IL_00a3:
	{
		// transform.SetPositionAndRotation(GoalPosition, GoalRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Solver_get_GoalPosition_mF08100391BCB0E2597A67297051C69224D0E875F(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Solver_get_GoalRotation_m203C11A33069E62B914F969CFDC907DC6DDD2FBA(__this, NULL);
		NullCheck(L_30);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_30, L_31, L_32, NULL);
		// transform.localScale = GoalScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Solver_get_GoalScale_m1A95E018BF1D6644B3157497DB90C46FA4B4B440(__this, NULL);
		NullCheck(L_33);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_33, L_34, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::UpdateWorkingToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingToGoal_m4C770F0A8AD9CD95264624E20DC8807C8AF0350F (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	{
		// UpdateWorkingPositionToGoal();
		Solver_UpdateWorkingPositionToGoal_m01ACF1DD94623D91F84A8F696CA049F110BC5ABD(__this, NULL);
		// UpdateWorkingRotationToGoal();
		Solver_UpdateWorkingRotationToGoal_m8376A3A2B0FE07E816F612ADE67CEF311A41FC25(__this, NULL);
		// UpdateWorkingScaleToGoal();
		Solver_UpdateWorkingScaleToGoal_m17FDBD0E9938E255CE27314716A629EC6823957B(__this, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::UpdateWorkingPositionToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingPositionToGoal_m01ACF1DD94623D91F84A8F696CA049F110BC5ABD (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* G_B2_0 = NULL;
	Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* G_B1_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* G_B3_1 = NULL;
	{
		// WorkingPosition = smoothing ? SmoothTo(WorkingPosition, GoalPosition, SolverHandler.DeltaTime, moveLerpTime) : GoalPosition;
		bool L_0 = __this->___smoothing_10;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Solver_get_GoalPosition_mF08100391BCB0E2597A67297051C69224D0E875F(__this, NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_0011:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Solver_get_WorkingPosition_m0D0F18279AEB6922D9101850C66EDA1255C024BD(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Solver_get_GoalPosition_mF08100391BCB0E2597A67297051C69224D0E875F(__this, NULL);
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_4 = __this->___SolverHandler_13;
		NullCheck(L_4);
		float L_5;
		L_5 = SolverHandler_get_DeltaTime_m7BD6BFA0D56BAC2A6E37099975F31A5A2D79DE49_inline(L_4, NULL);
		float L_6 = __this->___moveLerpTime_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Solver_SmoothTo_m710C5080A5EE348ACDB30A2C93EB50B5A2A9242F(L_2, L_3, L_5, L_6, NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingPosition_mA9747538E80E19A6C0D6A5BFAB14A99BF5E59FCB(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::UpdateWorkingRotationToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingRotationToGoal_m8376A3A2B0FE07E816F612ADE67CEF311A41FC25 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* G_B2_0 = NULL;
	Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* G_B1_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* G_B3_1 = NULL;
	{
		// WorkingRotation = smoothing ? SmoothTo(WorkingRotation, GoalRotation, SolverHandler.DeltaTime, rotateLerpTime) : GoalRotation;
		bool L_0 = __this->___smoothing_10;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Solver_get_GoalRotation_m203C11A33069E62B914F969CFDC907DC6DDD2FBA(__this, NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_0011:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Solver_get_WorkingRotation_m900CAE5ECF091AA713B19FC04DF87ECD83EA1CF2(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Solver_get_GoalRotation_m203C11A33069E62B914F969CFDC907DC6DDD2FBA(__this, NULL);
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_4 = __this->___SolverHandler_13;
		NullCheck(L_4);
		float L_5;
		L_5 = SolverHandler_get_DeltaTime_m7BD6BFA0D56BAC2A6E37099975F31A5A2D79DE49_inline(L_4, NULL);
		float L_6 = __this->___rotateLerpTime_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Solver_SmoothTo_m83E851DB8BBAB536D599470D92A79EA49464121D(L_2, L_3, L_5, L_6, NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingRotation_mB2B1C632B3E5D44D81801E1F50AAB41C9013529A(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::UpdateWorkingScaleToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingScaleToGoal_m17FDBD0E9938E255CE27314716A629EC6823957B (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* G_B2_0 = NULL;
	Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* G_B1_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* G_B3_1 = NULL;
	{
		// WorkingScale = smoothing ? SmoothTo(WorkingScale, GoalScale, SolverHandler.DeltaTime, scaleLerpTime) : GoalScale;
		bool L_0 = __this->___smoothing_10;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Solver_get_GoalScale_m1A95E018BF1D6644B3157497DB90C46FA4B4B440(__this, NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_0011:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Solver_get_WorkingScale_mD8C6FA9E392BA79C01092B25EBC4905490736807(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Solver_get_GoalScale_m1A95E018BF1D6644B3157497DB90C46FA4B4B440(__this, NULL);
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_4 = __this->___SolverHandler_13;
		NullCheck(L_4);
		float L_5;
		L_5 = SolverHandler_get_DeltaTime_m7BD6BFA0D56BAC2A6E37099975F31A5A2D79DE49_inline(L_4, NULL);
		float L_6 = __this->___scaleLerpTime_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Solver_SmoothTo_m710C5080A5EE348ACDB30A2C93EB50B5A2A9242F(L_2, L_3, L_5, L_6, NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingScale_m48A655AB9C605F4F2DA8A1CB5297B3B691E72BBE(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Solver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver__ctor_m61553BCC86AA46B55E44C1999BA45487652A09D8 (Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* __this, const RuntimeMethod* method) 
{
	{
		// private float moveLerpTime = 0.1f;
		__this->___moveLerpTime_6 = (0.100000001f);
		// private float rotateLerpTime = 0.1f;
		__this->___rotateLerpTime_7 = (0.100000001f);
		// private bool maintainScaleOnInitialization = true;
		__this->___maintainScaleOnInitialization_9 = (bool)1;
		// private bool smoothing = true;
		__this->___smoothing_10 = (bool)1;
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
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_LeftInteractor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* SolverHandler_get_LeftInteractor_m8A69A7CB2BD8E2FC9AE8B60DE6A93E07F25C5BF6 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// get => leftInteractor;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = __this->___leftInteractor_4;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_LeftInteractor(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_LeftInteractor_mF74829A3E112CB6B7CD42E063D2F380D4AD64442 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => leftInteractor = value;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = ___0_value;
		__this->___leftInteractor_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftInteractor_4), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_RightInteractor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* SolverHandler_get_RightInteractor_m2F1B820636233A4CE88F6583D60C3FE21602BE81 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// get => rightInteractor;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = __this->___rightInteractor_5;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_RightInteractor(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_RightInteractor_m1DEC080447FBCCE7183D621EF9F5B799BCFE6DD0 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => rightInteractor = value;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = ___0_value;
		__this->___rightInteractor_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightInteractor_5), (void*)L_0);
		return;
	}
}
// MixedReality.Toolkit.SpatialManipulation.TrackedObjectType MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_TrackedTargetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_m583ECFD959097672CC7455FB1DD1B3D251BE3323 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// get => trackedTargetType;
		int32_t L_0 = __this->___trackedTargetType_6;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_TrackedTargetType(MixedReality.Toolkit.SpatialManipulation.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedTargetType_m97BDC3B2C2513071D91480E6E519C8C84EFC2EBE (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackedTargetType != value && IsValidTrackedObjectType(value))
		int32_t L_0 = __this->___trackedTargetType_6;
		int32_t L_1 = ___0_value;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SolverHandler_IsValidTrackedObjectType_m9121DAEEF7FACB9CE12D26AEDDAB8976AED4D891(L_2, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// trackedTargetType = value;
		int32_t L_4 = ___0_value;
		__this->___trackedTargetType_6 = L_4;
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mFD53674807FE67BE33A479FE7D79AAFC082D5040(__this, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// MixedReality.Toolkit.Handedness MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_TrackedHandedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandedness_m4029B860B4C9208FCA90FB26C6DF8741A9FE5FE9 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// get => trackedHandedness;
		int32_t L_0 = __this->___trackedHandedness_7;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_TrackedHandedness(MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandedness_m63A9D86B3453CE3A98244CDE48DCB4684C50BFE4 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackedHandedness != value && IsValidHandedness(value))
		int32_t L_0 = __this->___trackedHandedness_7;
		int32_t L_1 = ___0_value;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SolverHandler_IsValidHandedness_mCCB68596BD7190E5C15FFD306BEC50EDBF61492D(L_2, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// trackedHandedness = value;
		int32_t L_4 = ___0_value;
		__this->___trackedHandedness_7 = L_4;
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mFD53674807FE67BE33A479FE7D79AAFC082D5040(__this, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// MixedReality.Toolkit.TrackedHandJoint MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_TrackedHandJoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_m8067C11C9591B38CC0688525AD7EBBC868233695 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// get => trackedHandJoint;
		int32_t L_0 = __this->___trackedHandJoint_8;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_TrackedHandJoint(MixedReality.Toolkit.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandJoint_m889B659E1C424228CFA548B27AE2BBD0D0A8C333 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (trackedHandJoint != value)
		int32_t L_0 = __this->___trackedHandJoint_8;
		int32_t L_1 = ___0_value;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		// trackedHandJoint = value;
		int32_t L_2 = ___0_value;
		__this->___trackedHandJoint_8 = L_2;
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mFD53674807FE67BE33A479FE7D79AAFC082D5040(__this, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_TransformOverride(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TransformOverride_m137F229D8197E9B5CF9F335F480FCE473AE230FD (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != null && transformOverride != value)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___transformOverride_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// transformOverride = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_value;
		__this->___transformOverride_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transformOverride_9), (void*)L_5);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mFD53674807FE67BE33A479FE7D79AAFC082D5040(__this, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_AdditionalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_AdditionalOffset_m51F743045A482978DB4B6D238E7D37018815B10C (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// get => additionalOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___additionalOffset_10;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_AdditionalOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_AdditionalOffset_m58A4E6B58BCB3CF423EE3F55F654AD2DD5AAE905 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// if (additionalOffset != value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___additionalOffset_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		bool L_2;
		L_2 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// additionalOffset = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_value;
		__this->___additionalOffset_10 = L_3;
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mFD53674807FE67BE33A479FE7D79AAFC082D5040(__this, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_AdditionalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_AdditionalRotation_mB8AA3A862B467392D1132799EB01FDB2177F15A3 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// get => additionalRotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___additionalRotation_11;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_AdditionalRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_AdditionalRotation_m94FFFFC5DA6018E7BFCAF487E589A3D7EB11408B (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// if (additionalRotation != value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___additionalRotation_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		bool L_2;
		L_2 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// additionalRotation = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_value;
		__this->___additionalRotation_11 = L_3;
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mFD53674807FE67BE33A479FE7D79AAFC082D5040(__this, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_UpdateSolvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_mA03F997C40AD497AE7A8195F05CA4F51279AC40D (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// get => updateSolvers;
		bool L_0 = __this->___updateSolvers_12;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_UpdateSolvers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m01A77F690FEC55D269A36D8E8C5BEF54189E9360 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => updateSolvers = value;
		bool L_0 = ___0_value;
		__this->___updateSolvers_12 = L_0;
		return;
	}
}
// System.Collections.Generic.IReadOnlyCollection`1<MixedReality.Toolkit.SpatialManipulation.Solver> MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_Solvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_Solvers_m09CADAFD79AC9E401BEE5C6E36511501CF7FAF85 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AsReadOnly_m93E02464160F1A6096252B1331D9F3EF6CD1A68C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => solvers.AsReadOnly();
		List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* L_0 = __this->___solvers_13;
		NullCheck(L_0);
		ReadOnlyCollection_1_tE3D820D1F14A11D461658535E50B780007C484E3* L_1;
		L_1 = List_1_AsReadOnly_m93E02464160F1A6096252B1331D9F3EF6CD1A68C(L_0, List_1_AsReadOnly_m93E02464160F1A6096252B1331D9F3EF6CD1A68C_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_Solvers(System.Collections.Generic.IReadOnlyCollection`1<MixedReality.Toolkit.SpatialManipulation.Solver>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_Solvers_m2A25751E48C03BEE825AAD48A8D05B17833EB48E (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m4055A2B32D5AF6F6793124739C0ABF204BB81996_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7C7470B753AF4DA999567303ED3EF584F106717B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != null)
		RuntimeObject* L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// solvers.Clear();
		List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* L_1 = __this->___solvers_13;
		NullCheck(L_1);
		List_1_Clear_m7C7470B753AF4DA999567303ED3EF584F106717B_inline(L_1, List_1_Clear_m7C7470B753AF4DA999567303ED3EF584F106717B_RuntimeMethod_var);
		// solvers.AddRange(value);
		List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* L_2 = __this->___solvers_13;
		RuntimeObject* L_3 = ___0_value;
		NullCheck(L_2);
		List_1_AddRange_m4055A2B32D5AF6F6793124739C0ABF204BB81996(L_2, L_3, List_1_AddRange_m4055A2B32D5AF6F6793124739C0ABF204BB81996_RuntimeMethod_var);
	}

IL_001a:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_GoalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_GoalPosition_m287FC681D5DFB57264ADD5E9E994B7C87BB9E049 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CGoalPositionU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_m2D92641664852D4A576132EAA64A19D73BDCD2AA (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CGoalPositionU3Ek__BackingField_14 = L_0;
		return;
	}
}
// UnityEngine.Quaternion MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_GoalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SolverHandler_get_GoalRotation_mC0CEEB989A81193D184206C6B11624B75EB41B34 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CGoalRotationU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_mB10BEBDCB8E0EEF7105AAD9ABE32C75CC2476A9B (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_value;
		__this->___U3CGoalRotationU3Ek__BackingField_15 = L_0;
		return;
	}
}
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_GoalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_GoalScale_m8E037AF9B1B4E371A835086F59DAB2AE3A425E55 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CGoalScaleU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_m33FDA0F6759ABD82E20B9A95213AEE3D202CEF1D (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CGoalScaleU3Ek__BackingField_16 = L_0;
		return;
	}
}
// MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_AltScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B SolverHandler_get_AltScale_mD5130E55FEC78CDDC9F9818CDDF0AC6458ECB69E (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B L_0 = __this->___U3CAltScaleU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_AltScale(MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m8073F97C399A6562D9D035AA11BD07A9196B0F60 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B L_0 = ___0_value;
		__this->___U3CAltScaleU3Ek__BackingField_17 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_DeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_m7BD6BFA0D56BAC2A6E37099975F31A5A2D79DE49 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = __this->___U3CDeltaTimeU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_DeltaTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_mB20248550E0D32B895067C8D8BA3F23C7BC0C518 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = ___0_value;
		__this->___U3CDeltaTimeU3Ek__BackingField_18 = L_0;
		return;
	}
}
// UnityEngine.Transform MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_TransformTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsInvalidTracking())
		bool L_0;
		L_0 = SolverHandler_IsInvalidTracking_m1D1E423C8B18115B6695DF12AA2E55BE8203AFD3(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mFD53674807FE67BE33A479FE7D79AAFC082D5040(__this, NULL);
	}

IL_000e:
	{
		// return trackingTarget != null ? trackingTarget.transform : null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___trackingTarget_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
	}

IL_001e:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___trackingTarget_21;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		return L_4;
	}
}
// MixedReality.Toolkit.Handedness MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_CurrentTrackedHandedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_CurrentTrackedHandedness_mDFBED4508C9B867C09F391AE92DD23B778237964 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// public Handedness CurrentTrackedHandedness => currentTrackedHandedness;
		int32_t L_0 = __this->___currentTrackedHandedness_19;
		return L_0;
	}
}
// MixedReality.Toolkit.Handedness MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_PreferredTrackedHandedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_PreferredTrackedHandedness_m7610885EDC5E86909D61A996DABC9EEEEDEAE7F7 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// get => preferredTrackedHandedness;
		int32_t L_0 = __this->___preferredTrackedHandedness_20;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_PreferredTrackedHandedness(MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_PreferredTrackedHandedness_m37D4FFABF8A411E0B5FAD42DD761AA877AEFD790 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if ((value == Handedness.Left || value == Handedness.Right)
		//     && preferredTrackedHandedness != value)
		int32_t L_0 = ___0_value;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___0_value;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0018;
		}
	}

IL_0008:
	{
		int32_t L_2 = __this->___preferredTrackedHandedness_20;
		int32_t L_3 = ___0_value;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}
	{
		// preferredTrackedHandedness = value;
		int32_t L_4 = ___0_value;
		__this->___preferredTrackedHandedness_20 = L_4;
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_Awake_m66B283686BD57296C2BB52CECED949AC599F2364 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4069BFE2C10C7C96B347AFEE648D6F737B8E03B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral846C705B2B3B1C5DB9D011DAB1F52295B1617733);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GoalScale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		SolverHandler_set_GoalScale_m33FDA0F6759ABD82E20B9A95213AEE3D202CEF1D_inline(__this, L_0, NULL);
		// AltScale = new Vector3Smoothed(Vector3.one, 0.1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3Smoothed__ctor_m17114C9DA61DBC98B01130A697088551CE4F7BB8((&L_2), L_1, (0.100000001f), /*hidden argument*/NULL);
		SolverHandler_set_AltScale_m8073F97C399A6562D9D035AA11BD07A9196B0F60_inline(__this, L_2, NULL);
		// DeltaTime = Time.deltaTime;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		SolverHandler_set_DeltaTime_mB20248550E0D32B895067C8D8BA3F23C7BC0C518_inline(__this, L_3, NULL);
		// lastUpdateTime = Time.realtimeSinceStartup;
		float L_4;
		L_4 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___lastUpdateTime_23 = L_4;
		// if (!IsValidHandedness(trackedHandedness))
		int32_t L_5 = __this->___trackedHandedness_7;
		il2cpp_codegen_runtime_class_init_inline(SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = SolverHandler_IsValidHandedness_mCCB68596BD7190E5C15FFD306BEC50EDBF61492D(L_5, NULL);
		if (L_6)
		{
			goto IL_0054;
		}
	}
	{
		// Debug.LogError("Using invalid SolverHandler.TrackedHandedness value. Defaulting to Handedness.Both");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral846C705B2B3B1C5DB9D011DAB1F52295B1617733, NULL);
		// TrackedHandedness = Handedness.Both;
		SolverHandler_set_TrackedHandedness_m63A9D86B3453CE3A98244CDE48DCB4684C50BFE4(__this, 3, NULL);
	}

IL_0054:
	{
		// if (!IsValidTrackedObjectType(trackedTargetType))
		int32_t L_7 = __this->___trackedTargetType_6;
		il2cpp_codegen_runtime_class_init_inline(SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SolverHandler_IsValidTrackedObjectType_m9121DAEEF7FACB9CE12D26AEDDAB8976AED4D891(L_7, NULL);
		if (L_8)
		{
			goto IL_0072;
		}
	}
	{
		// Debug.LogError("Using an unsupported SolverHandler.TrackedTargetType. Defaulting to type Head");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral4069BFE2C10C7C96B347AFEE648D6F737B8E03B2, NULL);
		// TrackedTargetType = TrackedObjectType.Head;
		SolverHandler_set_TrackedTargetType_m97BDC3B2C2513071D91480E6E519C8C84EFC2EBE(__this, 0, NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_Start_m8661D79107C1CDBB41D9F57D65DE54109DE97272 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mFD53674807FE67BE33A479FE7D79AAFC082D5040(__this, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_Update_m86A36B119FE4F9CCEBD4A8CAF8F1EACD542FC9BD (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// if (IsInvalidTracking())
		bool L_0;
		L_0 = SolverHandler_IsInvalidTracking_m1D1E423C8B18115B6695DF12AA2E55BE8203AFD3(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mFD53674807FE67BE33A479FE7D79AAFC082D5040(__this, NULL);
	}

IL_000e:
	{
		// if (TrackedTargetType == TrackedObjectType.HandJoint)
		int32_t L_1;
		L_1 = SolverHandler_get_TrackedTargetType_m583ECFD959097672CC7455FB1DD1B3D251BE3323_inline(__this, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001e;
		}
	}
	{
		// UpdateCachedHandJointTransform();
		bool L_2;
		L_2 = SolverHandler_UpdateCachedHandJointTransform_mFB75B170E27D4F83B0D09EDD274C94C4CCA2E9C1(__this, NULL);
	}

IL_001e:
	{
		// DeltaTime = Time.realtimeSinceStartup - lastUpdateTime;
		float L_3;
		L_3 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_4 = __this->___lastUpdateTime_23;
		SolverHandler_set_DeltaTime_mB20248550E0D32B895067C8D8BA3F23C7BC0C518_inline(__this, ((float)il2cpp_codegen_subtract(L_3, L_4)), NULL);
		// lastUpdateTime = Time.realtimeSinceStartup;
		float L_5;
		L_5 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___lastUpdateTime_23 = L_5;
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_LateUpdate_mBC0D7DA329D1867CA5AB7F7F7CD8AC02FE19A235 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m15FD5FE5CFD518986DC6788827ADC5F8BDDA2466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC46E60A706165ED16D0D5CC5BAAA3EF71967138F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* V_1 = NULL;
	{
		// if (UpdateSolvers)
		bool L_0;
		L_0 = SolverHandler_get_UpdateSolvers_mA03F997C40AD497AE7A8195F05CA4F51279AC40D_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0075;
		}
	}
	{
		// GoalPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		SolverHandler_set_GoalPosition_m2D92641664852D4A576132EAA64A19D73BDCD2AA_inline(__this, L_2, NULL);
		// GoalRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		SolverHandler_set_GoalRotation_mB10BEBDCB8E0EEF7105AAD9ABE32C75CC2476A9B_inline(__this, L_4, NULL);
		// GoalScale = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		SolverHandler_set_GoalScale_m33FDA0F6759ABD82E20B9A95213AEE3D202CEF1D_inline(__this, L_6, NULL);
		// for (int i = 0; i < solvers.Count; ++i)
		V_0 = 0;
		goto IL_0067;
	}

IL_003f:
	{
		// Solver solver = solvers[i];
		List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* L_7 = __this->___solvers_13;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* L_9;
		L_9 = List_1_get_Item_mC46E60A706165ED16D0D5CC5BAAA3EF71967138F(L_7, L_8, List_1_get_Item_mC46E60A706165ED16D0D5CC5BAAA3EF71967138F_RuntimeMethod_var);
		V_1 = L_9;
		// if (solver != null && solver.enabled)
		Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* L_12 = V_1;
		NullCheck(L_12);
		bool L_13;
		L_13 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_12, NULL);
		if (!L_13)
		{
			goto IL_0063;
		}
	}
	{
		// solver.SolverUpdateEntry();
		Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* L_14 = V_1;
		NullCheck(L_14);
		Solver_SolverUpdateEntry_mCC5F3BC199C9509A5922F619877850A632D54FF1(L_14, NULL);
	}

IL_0063:
	{
		// for (int i = 0; i < solvers.Count; ++i)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0067:
	{
		// for (int i = 0; i < solvers.Count; ++i)
		int32_t L_16 = V_0;
		List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* L_17 = __this->___solvers_13;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m15FD5FE5CFD518986DC6788827ADC5F8BDDA2466_inline(L_17, List_1_get_Count_m15FD5FE5CFD518986DC6788827ADC5F8BDDA2466_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_003f;
		}
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_OnDestroy_m9C829E6F574AEE312BC67B3D3C5B40A3A089BDD1 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackingTarget != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___trackingTarget_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(trackingTarget);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___trackingTarget_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::RefreshTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RefreshTrackedObject_mFD53674807FE67BE33A479FE7D79AAFC082D5040 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// DetachFromCurrentTrackedObject();
		VirtualActionInvoker0::Invoke(6 /* System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::DetachFromCurrentTrackedObject() */, __this);
		// AttachToNewTrackedObject();
		VirtualActionInvoker0::Invoke(7 /* System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::AttachToNewTrackedObject() */, __this);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::RegisterSolver(MixedReality.Toolkit.SpatialManipulation.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RegisterSolver_mB83CC7455E7B3B1691019AD59A1401C858F7EEAF (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* ___0_solver, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisSolver_t5BF456842BD6B3971A6718B914DD8B3343C96578_mB80A9DDF8CE9AC8E8D3AC394D6E8260243C8B7E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Intersect_TisSolver_t5BF456842BD6B3971A6718B914DD8B3343C96578_m64CBA93CBF786C0797D12E19B49E386FB852EB21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisSolver_t5BF456842BD6B3971A6718B914DD8B3343C96578_mC48E5FA97422560A72EF94202F63B7523BDA37D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9AAE4C6F3E0D42B412DF0B5FF0E62CA990DCDD99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m65384599E5A8B4DFA1ED923BF8712E8B5525B5E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!solvers.Contains(solver))
		List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* L_0 = __this->___solvers_13;
		Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* L_1 = ___0_solver;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m65384599E5A8B4DFA1ED923BF8712E8B5525B5E8(L_0, L_1, List_1_Contains_m65384599E5A8B4DFA1ED923BF8712E8B5525B5E8_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0050;
		}
	}
	{
		// GetComponents(inspectorOrderedSolvers);
		List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* L_3 = __this->___inspectorOrderedSolvers_25;
		Component_GetComponents_TisSolver_t5BF456842BD6B3971A6718B914DD8B3343C96578_mB80A9DDF8CE9AC8E8D3AC394D6E8260243C8B7E3(__this, L_3, Component_GetComponents_TisSolver_t5BF456842BD6B3971A6718B914DD8B3343C96578_mB80A9DDF8CE9AC8E8D3AC394D6E8260243C8B7E3_RuntimeMethod_var);
		// if (inspectorOrderedSolvers.Contains(solver))
		List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* L_4 = __this->___inspectorOrderedSolvers_25;
		Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* L_5 = ___0_solver;
		NullCheck(L_4);
		bool L_6;
		L_6 = List_1_Contains_m65384599E5A8B4DFA1ED923BF8712E8B5525B5E8(L_4, L_5, List_1_Contains_m65384599E5A8B4DFA1ED923BF8712E8B5525B5E8_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		// solvers.Add(solver);
		List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* L_7 = __this->___solvers_13;
		Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* L_8 = ___0_solver;
		NullCheck(L_7);
		List_1_Add_m9AAE4C6F3E0D42B412DF0B5FF0E62CA990DCDD99_inline(L_7, L_8, List_1_Add_m9AAE4C6F3E0D42B412DF0B5FF0E62CA990DCDD99_RuntimeMethod_var);
		// solvers = inspectorOrderedSolvers.Intersect(solvers).ToList();
		List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* L_9 = __this->___inspectorOrderedSolvers_25;
		List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* L_10 = __this->___solvers_13;
		RuntimeObject* L_11;
		L_11 = Enumerable_Intersect_TisSolver_t5BF456842BD6B3971A6718B914DD8B3343C96578_m64CBA93CBF786C0797D12E19B49E386FB852EB21(L_9, L_10, Enumerable_Intersect_TisSolver_t5BF456842BD6B3971A6718B914DD8B3343C96578_m64CBA93CBF786C0797D12E19B49E386FB852EB21_RuntimeMethod_var);
		List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* L_12;
		L_12 = Enumerable_ToList_TisSolver_t5BF456842BD6B3971A6718B914DD8B3343C96578_mC48E5FA97422560A72EF94202F63B7523BDA37D9(L_11, Enumerable_ToList_TisSolver_t5BF456842BD6B3971A6718B914DD8B3343C96578_mC48E5FA97422560A72EF94202F63B7523BDA37D9_RuntimeMethod_var);
		__this->___solvers_13 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___solvers_13), (void*)L_12);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::UnregisterSolver(MixedReality.Toolkit.SpatialManipulation.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_UnregisterSolver_mC2F9D25C39AA0F20A3CC0906A229EA8D676F1645 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* ___0_solver, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m0FA645EB65EDC117F5781E1DEA6FBAAACC970B96_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// solvers.Remove(solver);
		List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* L_0 = __this->___solvers_13;
		Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578* L_1 = ___0_solver;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m0FA645EB65EDC117F5781E1DEA6FBAAACC970B96(L_0, L_1, List_1_Remove_m0FA645EB65EDC117F5781E1DEA6FBAAACC970B96_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::DetachFromCurrentTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_DetachFromCurrentTrackedObject_mEF052221C772F8CA4774E51A120359A94B6DA71A (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackingTarget != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___trackingTarget_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// trackingTarget.transform.parent = null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___trackingTarget_21;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_3, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::AttachToNewTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_AttachToNewTrackedObject_m341707E75D94D1AC7EC0065ACAA6D4613D8DAA13 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	{
		// using (AttachToNewTrackedObjectPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_StaticFields*)il2cpp_codegen_static_fields_for(SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_il2cpp_TypeInfo_var))->___AttachToNewTrackedObjectPerfMarker_27;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0195:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// currentTrackedHandedness = Handedness.None;
				__this->___currentTrackedHandedness_19 = 0;
				// controllerInteractor = null;
				__this->___controllerInteractor_22 = (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___controllerInteractor_22), (void*)(XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158*)NULL);
				// Transform target = null;
				V_2 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
				// if (TrackedTargetType == TrackedObjectType.Head)
				int32_t L_2;
				L_2 = SolverHandler_get_TrackedTargetType_m583ECFD959097672CC7455FB1DD1B3D251BE3323_inline(__this, NULL);
				if (L_2)
				{
					goto IL_0036_1;
				}
			}
			{
				// target = Camera.main.transform;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
				L_3 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
				NullCheck(L_3);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
				L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
				V_2 = L_4;
				goto IL_018c_1;
			}

IL_0036_1:
			{
				// else if (TrackedTargetType == TrackedObjectType.ControllerRay)
				int32_t L_5;
				L_5 = SolverHandler_get_TrackedTargetType_m583ECFD959097672CC7455FB1DD1B3D251BE3323_inline(__this, NULL);
				if ((!(((uint32_t)L_5) == ((uint32_t)1))))
				{
					goto IL_00f4_1;
				}
			}
			{
				// currentTrackedHandedness = TrackedHandedness;
				int32_t L_6;
				L_6 = SolverHandler_get_TrackedHandedness_m4029B860B4C9208FCA90FB26C6DF8741A9FE5FE9_inline(__this, NULL);
				__this->___currentTrackedHandedness_19 = L_6;
				// if ((currentTrackedHandedness & Handedness.Both) == Handedness.Both)
				int32_t L_7 = __this->___currentTrackedHandedness_19;
				if ((!(((uint32_t)((int32_t)((int32_t)L_7&3))) == ((uint32_t)3))))
				{
					goto IL_00b7_1;
				}
			}
			{
				// currentTrackedHandedness = PreferredTrackedHandedness;
				int32_t L_8;
				L_8 = SolverHandler_get_PreferredTrackedHandedness_m7610885EDC5E86909D61A996DABC9EEEEDEAE7F7_inline(__this, NULL);
				__this->___currentTrackedHandedness_19 = L_8;
				// controllerInteractor = GetControllerInteractor(currentTrackedHandedness);
				int32_t L_9 = __this->___currentTrackedHandedness_19;
				XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_10;
				L_10 = SolverHandler_GetControllerInteractor_m642CABE1672E8BC772078326F89B3B7AC370EB2F(__this, L_9, NULL);
				__this->___controllerInteractor_22 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___controllerInteractor_22), (void*)L_10);
				// if (controllerInteractor == null || !controllerInteractor.isHoverActive)
				XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_11 = __this->___controllerInteractor_22;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_12;
				L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_12)
				{
					goto IL_0092_1;
				}
			}
			{
				XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_13 = __this->___controllerInteractor_22;
				NullCheck(L_13);
				bool L_14;
				L_14 = VirtualFuncInvoker0< bool >::Invoke(58 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_isHoverActive() */, L_13);
				if (L_14)
				{
					goto IL_00c9_1;
				}
			}

IL_0092_1:
			{
				// currentTrackedHandedness = currentTrackedHandedness.GetOppositeHandedness();
				int32_t L_15 = __this->___currentTrackedHandedness_19;
				int32_t L_16;
				L_16 = HandednessExtensions_GetOppositeHandedness_m8AD005D4EA78BBB43C12111E4F072E920F5FD9C8(L_15, NULL);
				__this->___currentTrackedHandedness_19 = L_16;
				// controllerInteractor = GetControllerInteractor(currentTrackedHandedness);
				int32_t L_17 = __this->___currentTrackedHandedness_19;
				XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_18;
				L_18 = SolverHandler_GetControllerInteractor_m642CABE1672E8BC772078326F89B3B7AC370EB2F(__this, L_17, NULL);
				__this->___controllerInteractor_22 = L_18;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___controllerInteractor_22), (void*)L_18);
				goto IL_00c9_1;
			}

IL_00b7_1:
			{
				// controllerInteractor = GetControllerInteractor(currentTrackedHandedness);
				int32_t L_19 = __this->___currentTrackedHandedness_19;
				XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_20;
				L_20 = SolverHandler_GetControllerInteractor_m642CABE1672E8BC772078326F89B3B7AC370EB2F(__this, L_19, NULL);
				__this->___controllerInteractor_22 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___controllerInteractor_22), (void*)L_20);
			}

IL_00c9_1:
			{
				// if (controllerInteractor != null)
				XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_21 = __this->___controllerInteractor_22;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_22;
				L_22 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_22)
				{
					goto IL_00e8_1;
				}
			}
			{
				// target = controllerInteractor.transform;
				XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_23 = __this->___controllerInteractor_22;
				NullCheck(L_23);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
				L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
				V_2 = L_24;
				goto IL_018c_1;
			}

IL_00e8_1:
			{
				// currentTrackedHandedness = Handedness.None;
				__this->___currentTrackedHandedness_19 = 0;
				goto IL_018c_1;
			}

IL_00f4_1:
			{
				// else if (TrackedTargetType == TrackedObjectType.HandJoint)
				int32_t L_25;
				L_25 = SolverHandler_get_TrackedTargetType_m583ECFD959097672CC7455FB1DD1B3D251BE3323_inline(__this, NULL);
				if ((!(((uint32_t)L_25) == ((uint32_t)2))))
				{
					goto IL_0178_1;
				}
			}
			{
				// if (XRSubsystemHelpers.HandsAggregator != null)
				il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
				RuntimeObject* L_26;
				L_26 = XRSubsystemHelpers_get_HandsAggregator_m5E0D624F49E4F022C3066327FD3125D2968DCCE7(NULL);
				if (!L_26)
				{
					goto IL_018c_1;
				}
			}
			{
				// currentTrackedHandedness = TrackedHandedness;
				int32_t L_27;
				L_27 = SolverHandler_get_TrackedHandedness_m4029B860B4C9208FCA90FB26C6DF8741A9FE5FE9_inline(__this, NULL);
				__this->___currentTrackedHandedness_19 = L_27;
				// if ((currentTrackedHandedness & Handedness.Both) == Handedness.Both)
				int32_t L_28 = __this->___currentTrackedHandedness_19;
				if ((!(((uint32_t)((int32_t)((int32_t)L_28&3))) == ((uint32_t)3))))
				{
					goto IL_0167_1;
				}
			}
			{
				// if (IsHandTracked(PreferredTrackedHandedness))
				int32_t L_29;
				L_29 = SolverHandler_get_PreferredTrackedHandedness_m7610885EDC5E86909D61A996DABC9EEEEDEAE7F7_inline(__this, NULL);
				bool L_30;
				L_30 = SolverHandler_IsHandTracked_m60C07B44A0B8F718D0C24A889CDC16FD5522A113(__this, L_29, NULL);
				if (!L_30)
				{
					goto IL_013a_1;
				}
			}
			{
				// currentTrackedHandedness = PreferredTrackedHandedness;
				int32_t L_31;
				L_31 = SolverHandler_get_PreferredTrackedHandedness_m7610885EDC5E86909D61A996DABC9EEEEDEAE7F7_inline(__this, NULL);
				__this->___currentTrackedHandedness_19 = L_31;
				goto IL_0167_1;
			}

IL_013a_1:
			{
				// else if (IsHandTracked(PreferredTrackedHandedness.GetOppositeHandedness()))
				int32_t L_32;
				L_32 = SolverHandler_get_PreferredTrackedHandedness_m7610885EDC5E86909D61A996DABC9EEEEDEAE7F7_inline(__this, NULL);
				int32_t L_33;
				L_33 = HandednessExtensions_GetOppositeHandedness_m8AD005D4EA78BBB43C12111E4F072E920F5FD9C8(L_32, NULL);
				bool L_34;
				L_34 = SolverHandler_IsHandTracked_m60C07B44A0B8F718D0C24A889CDC16FD5522A113(__this, L_33, NULL);
				if (!L_34)
				{
					goto IL_0160_1;
				}
			}
			{
				// currentTrackedHandedness = PreferredTrackedHandedness.GetOppositeHandedness();
				int32_t L_35;
				L_35 = SolverHandler_get_PreferredTrackedHandedness_m7610885EDC5E86909D61A996DABC9EEEEDEAE7F7_inline(__this, NULL);
				int32_t L_36;
				L_36 = HandednessExtensions_GetOppositeHandedness_m8AD005D4EA78BBB43C12111E4F072E920F5FD9C8(L_35, NULL);
				__this->___currentTrackedHandedness_19 = L_36;
				goto IL_0167_1;
			}

IL_0160_1:
			{
				// currentTrackedHandedness = Handedness.None;
				__this->___currentTrackedHandedness_19 = 0;
			}

IL_0167_1:
			{
				// if (UpdateCachedHandJointTransform())
				bool L_37;
				L_37 = SolverHandler_UpdateCachedHandJointTransform_mFB75B170E27D4F83B0D09EDD274C94C4CCA2E9C1(__this, NULL);
				if (!L_37)
				{
					goto IL_018c_1;
				}
			}
			{
				// target = cachedHandJointTransform;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = __this->___cachedHandJointTransform_26;
				V_2 = L_38;
				goto IL_018c_1;
			}

IL_0178_1:
			{
				// else if (TrackedTargetType == TrackedObjectType.CustomOverride)
				int32_t L_39;
				L_39 = SolverHandler_get_TrackedTargetType_m583ECFD959097672CC7455FB1DD1B3D251BE3323_inline(__this, NULL);
				if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)2147483647LL)))))
				{
					goto IL_018c_1;
				}
			}
			{
				// target = this.transformOverride;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = __this->___transformOverride_9;
				V_2 = L_40;
			}

IL_018c_1:
			{
				// TrackTransform(target);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = V_2;
				SolverHandler_TrackTransform_m80F54A1DEBE56EEFD03171BA2197FC6C52202AE8(__this, L_41, NULL);
				// }
				goto IL_01a3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01a3:
	{
		// }
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SolverHandler::UpdateCachedHandJointTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_UpdateCachedHandJointTransform_mFB75B170E27D4F83B0D09EDD274C94C4CCA2E9C1 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandsAggregatorSubsystem_t34A0F2983150896D0971E529B96C0964F824B1A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DA576B330FF38E27262658AB85457F8F686E381);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 V_3;
	memset((&V_3), 0, sizeof(V_3));
	HandJointPose_tFE6CB46BC73D00546E034E74333892993FFF9FAD V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// bool updated = false;
		V_0 = (bool)0;
		// using (UpdateCachedHandJointTransformPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_StaticFields*)il2cpp_codegen_static_fields_for(SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_il2cpp_TypeInfo_var))->___UpdateCachedHandJointTransformPerfMarker_28;
		V_2 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_2), NULL);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0087:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// XRNode? handNode = currentTrackedHandedness.ToXRNode();
				int32_t L_2 = __this->___currentTrackedHandedness_19;
				Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 L_3;
				L_3 = HandednessExtensions_ToXRNode_m8069B1DE5E7097549941C8F2D7565FC7BC053572(L_2, NULL);
				V_3 = L_3;
				// if (handNode.HasValue &&
				//     XRSubsystemHelpers.HandsAggregator != null &&
				//     XRSubsystemHelpers.HandsAggregator.TryGetJoint(TrackedHandJoint, handNode.Value, out HandJointPose jointPos))
				bool L_4;
				L_4 = Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_inline((&V_3), Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_RuntimeMethod_var);
				if (!L_4)
				{
					goto IL_0085_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
				RuntimeObject* L_5;
				L_5 = XRSubsystemHelpers_get_HandsAggregator_m5E0D624F49E4F022C3066327FD3125D2968DCCE7(NULL);
				if (!L_5)
				{
					goto IL_0085_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
				RuntimeObject* L_6;
				L_6 = XRSubsystemHelpers_get_HandsAggregator_m5E0D624F49E4F022C3066327FD3125D2968DCCE7(NULL);
				int32_t L_7;
				L_7 = SolverHandler_get_TrackedHandJoint_m8067C11C9591B38CC0688525AD7EBBC868233695_inline(__this, NULL);
				int32_t L_8;
				L_8 = Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66((&V_3), Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66_RuntimeMethod_var);
				NullCheck(L_6);
				bool L_9;
				L_9 = InterfaceFuncInvoker3< bool, int32_t, int32_t, HandJointPose_tFE6CB46BC73D00546E034E74333892993FFF9FAD* >::Invoke(4 /* System.Boolean MixedReality.Toolkit.Subsystems.IHandsAggregatorSubsystem::TryGetJoint(MixedReality.Toolkit.TrackedHandJoint,UnityEngine.XR.XRNode,MixedReality.Toolkit.HandJointPose&) */, IHandsAggregatorSubsystem_t34A0F2983150896D0971E529B96C0964F824B1A9_il2cpp_TypeInfo_var, L_6, L_7, L_8, (&V_4));
				if (!L_9)
				{
					goto IL_0085_1;
				}
			}
			{
				// if (cachedHandJointTransform == null)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___cachedHandJointTransform_26;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_11;
				L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_11)
				{
					goto IL_006a_1;
				}
			}
			{
				// cachedHandJointTransform = new GameObject("SolverHandler HandJoint Tracker").transform;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
				NullCheck(L_12);
				GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_12, _stringLiteral3DA576B330FF38E27262658AB85457F8F686E381, NULL);
				NullCheck(L_12);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
				L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
				__this->___cachedHandJointTransform_26 = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___cachedHandJointTransform_26), (void*)L_13);
			}

IL_006a_1:
			{
				// cachedHandJointTransform.SetPositionAndRotation(jointPos.Position, jointPos.Rotation);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___cachedHandJointTransform_26;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
				L_15 = HandJointPose_get_Position_mB6388778B755280045EB610BBBB333BF66004D8A((&V_4), NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
				L_16 = HandJointPose_get_Rotation_m8BBB212DC1615D30784F688FC7DF8A3C5CD3946E((&V_4), NULL);
				NullCheck(L_14);
				Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_14, L_15, L_16, NULL);
				// updated = true;
				V_0 = (bool)1;
			}

IL_0085_1:
			{
				// }
				goto IL_0095;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0095:
	{
		// return updated;
		bool L_17 = V_0;
		return L_17;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::TrackTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_TrackTransform_m80F54A1DEBE56EEFD03171BA2197FC6C52202AE8 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD68B6932B839E25BF967C1D8E8D31E1CF6BF1CFB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackingTarget == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___trackingTarget_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// trackingTarget = new GameObject(TrackingTargetName);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteralD68B6932B839E25BF967C1D8E8D31E1CF6BF1CFB, NULL);
		__this->___trackingTarget_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trackingTarget_21), (void*)L_2);
		// trackingTarget.hideFlags = HideFlags.HideInHierarchy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___trackingTarget_21;
		NullCheck(L_3);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_3, 1, NULL);
	}

IL_002a:
	{
		// if (target != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___0_target;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_008a;
		}
	}
	{
		// trackingTarget.transform.parent = target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___trackingTarget_21;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___0_target;
		NullCheck(L_7);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_7, L_8, NULL);
		// trackingTarget.transform.localPosition = Vector3.Scale(AdditionalOffset, trackingTarget.transform.localScale);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___trackingTarget_21;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = SolverHandler_get_AdditionalOffset_m51F743045A482978DB4B6D238E7D37018815B10C_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___trackingTarget_21;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_11, L_14, NULL);
		NullCheck(L_10);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_15, NULL);
		// trackingTarget.transform.localRotation = Quaternion.Euler(AdditionalRotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___trackingTarget_21;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = SolverHandler_get_AdditionalRotation_mB8AA3A862B467392D1132799EB01FDB2177F15A3_inline(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_18, NULL);
		NullCheck(L_17);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_17, L_19, NULL);
	}

IL_008a:
	{
		// }
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor MixedReality.Toolkit.SpatialManipulation.SolverHandler::GetControllerInteractor(MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* SolverHandler_GetControllerInteractor_m642CABE1672E8BC772078326F89B3B7AC370EB2F (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, int32_t ___0_handedness, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handedness == Handedness.None || !IsValidHandedness(handedness)) { return null; }
		int32_t L_0 = ___0_handedness;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___0_handedness;
		il2cpp_codegen_runtime_class_init_inline(SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SolverHandler_IsValidHandedness_mCCB68596BD7190E5C15FFD306BEC50EDBF61492D(L_1, NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		// if (handedness == Handedness.None || !IsValidHandedness(handedness)) { return null; }
		return (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158*)NULL;
	}

IL_000d:
	{
		// return (handedness == Handedness.Left) ? LeftInteractor : RightInteractor;
		int32_t L_3 = ___0_handedness;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_4;
		L_4 = SolverHandler_get_RightInteractor_m2F1B820636233A4CE88F6583D60C3FE21602BE81_inline(__this, NULL);
		return L_4;
	}

IL_0018:
	{
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_5;
		L_5 = SolverHandler_get_LeftInteractor_m8A69A7CB2BD8E2FC9AE8B60DE6A93E07F25C5BF6_inline(__this, NULL);
		return L_5;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SolverHandler::IsInvalidTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsInvalidTracking_m1D1E423C8B18115B6695DF12AA2E55BE8203AFD3 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	{
		// if (trackingTarget == null || trackingTarget.transform.parent == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___trackingTarget_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___trackingTarget_21;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		// return true;
		return (bool)1;
	}

IL_0028:
	{
		// if (TrackedTargetType == TrackedObjectType.ControllerRay &&
		//     (controllerInteractor == null || !controllerInteractor.isHoverActive))
		int32_t L_6;
		L_6 = SolverHandler_get_TrackedTargetType_m583ECFD959097672CC7455FB1DD1B3D251BE3323_inline(__this, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_004e;
		}
	}
	{
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_7 = __this->___controllerInteractor_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_8)
		{
			goto IL_004c;
		}
	}
	{
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_9 = __this->___controllerInteractor_22;
		NullCheck(L_9);
		bool L_10;
		L_10 = VirtualFuncInvoker0< bool >::Invoke(58 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_isHoverActive() */, L_9);
		if (L_10)
		{
			goto IL_004e;
		}
	}

IL_004c:
	{
		// return true;
		return (bool)1;
	}

IL_004e:
	{
		// if (TrackedTargetType == TrackedObjectType.HandJoint && currentTrackedHandedness != Handedness.None)
		int32_t L_11;
		L_11 = SolverHandler_get_TrackedTargetType_m583ECFD959097672CC7455FB1DD1B3D251BE3323_inline(__this, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_12 = __this->___currentTrackedHandedness_19;
		if (!L_12)
		{
			goto IL_0099;
		}
	}
	{
		// bool trackingLeft = currentTrackedHandedness.IsMatch(Handedness.Left) && IsHandTracked(Handedness.Left);
		int32_t L_13 = __this->___currentTrackedHandedness_19;
		bool L_14;
		L_14 = HandednessExtensions_IsMatch_m697B9C1C2B0517F9E3C7DDBE515EC8927C67DA82(L_13, 1, NULL);
		if (!L_14)
		{
			goto IL_0076;
		}
	}
	{
		bool L_15;
		L_15 = SolverHandler_IsHandTracked_m60C07B44A0B8F718D0C24A889CDC16FD5522A113(__this, 1, NULL);
		G_B12_0 = ((int32_t)(L_15));
		goto IL_0077;
	}

IL_0076:
	{
		G_B12_0 = 0;
	}

IL_0077:
	{
		// bool trackingRight = currentTrackedHandedness.IsMatch(Handedness.Right) && IsHandTracked(Handedness.Right);
		int32_t L_16 = __this->___currentTrackedHandedness_19;
		bool L_17;
		L_17 = HandednessExtensions_IsMatch_m697B9C1C2B0517F9E3C7DDBE515EC8927C67DA82(L_16, 2, NULL);
		G_B13_0 = G_B12_0;
		if (!L_17)
		{
			G_B14_0 = G_B12_0;
			goto IL_008e;
		}
	}
	{
		bool L_18;
		L_18 = SolverHandler_IsHandTracked_m60C07B44A0B8F718D0C24A889CDC16FD5522A113(__this, 2, NULL);
		G_B15_0 = ((int32_t)(L_18));
		G_B15_1 = G_B13_0;
		goto IL_008f;
	}

IL_008e:
	{
		G_B15_0 = 0;
		G_B15_1 = G_B14_0;
	}

IL_008f:
	{
		V_0 = (bool)G_B15_0;
		// return !trackingLeft && !trackingRight;
		if (G_B15_1)
		{
			goto IL_0097;
		}
	}
	{
		bool L_19 = V_0;
		return (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
	}

IL_0097:
	{
		return (bool)0;
	}

IL_0099:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SolverHandler::IsHandTracked(MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsHandTracked_m60C07B44A0B8F718D0C24A889CDC16FD5522A113 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, int32_t ___0_hand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandsAggregatorSubsystem_t34A0F2983150896D0971E529B96C0964F824B1A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandJointPose_tFE6CB46BC73D00546E034E74333892993FFF9FAD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// XRNode? node = hand.ToXRNode();
		int32_t L_0 = ___0_hand;
		Nullable_1_tEC8F263BE70D6E8A7019A85EA809A9CFC7448F36 L_1;
		L_1 = HandednessExtensions_ToXRNode_m8069B1DE5E7097549941C8F2D7565FC7BC053572(L_0, NULL);
		V_0 = L_1;
		// if (!node.HasValue) { return false; }
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_inline((&V_0), Nullable_1_get_HasValue_m6EBB46D00BB60FC8F09A34060A4FF94C3437F2E2_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		// if (!node.HasValue) { return false; }
		return (bool)0;
	}

IL_0012:
	{
		// return XRSubsystemHelpers.HandsAggregator != null &&
		//        XRSubsystemHelpers.HandsAggregator.TryGetJoint(TrackedHandJoint.Palm, node.Value, out HandJointPose pose);
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = XRSubsystemHelpers_get_HandsAggregator_m5E0D624F49E4F022C3066327FD3125D2968DCCE7(NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_t45A7829EE68B01DAAC3E4509FC75A1D794423C7F_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = XRSubsystemHelpers_get_HandsAggregator_m5E0D624F49E4F022C3066327FD3125D2968DCCE7(NULL);
		int32_t L_5;
		L_5 = Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66((&V_0), Nullable_1_get_Value_mA46EC6593BFA5F9AAA5FD184D482A6ECF0485D66_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker3< bool, int32_t, int32_t, HandJointPose_tFE6CB46BC73D00546E034E74333892993FFF9FAD* >::Invoke(4 /* System.Boolean MixedReality.Toolkit.Subsystems.IHandsAggregatorSubsystem::TryGetJoint(MixedReality.Toolkit.TrackedHandJoint,UnityEngine.XR.XRNode,MixedReality.Toolkit.HandJointPose&) */, IHandsAggregatorSubsystem_t34A0F2983150896D0971E529B96C0964F824B1A9_il2cpp_TypeInfo_var, L_4, 0, L_5, (&V_1));
		return L_6;
	}

IL_002e:
	{
		return (bool)0;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SolverHandler::IsValidHandedness(MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidHandedness_mCCB68596BD7190E5C15FFD306BEC50EDBF61492D (int32_t ___0_hand, const RuntimeMethod* method) 
{
	{
		// return hand.IsMatch(Handedness.Both) || hand == Handedness.None;
		int32_t L_0 = ___0_hand;
		bool L_1;
		L_1 = HandednessExtensions_IsMatch_m697B9C1C2B0517F9E3C7DDBE515EC8927C67DA82(L_0, 3, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = ___0_hand;
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_000e:
	{
		return (bool)1;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SolverHandler::IsValidTrackedObjectType(MixedReality.Toolkit.SpatialManipulation.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidTrackedObjectType_m9121DAEEF7FACB9CE12D26AEDDAB8976AED4D891 (int32_t ___0_type, const RuntimeMethod* method) 
{
	{
		// return type == TrackedObjectType.Head || type >= TrackedObjectType.ControllerRay;
		int32_t L_0 = ___0_type;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___0_type;
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_000b:
	{
		return (bool)1;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler__ctor_m3E32D8BD413DC65C2781953180A7C82A456A2DE7 (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mED3BD63F0FDA10CD4EE1DC17EE6137994655F793_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Handedness trackedHandedness = Handedness.Both;
		__this->___trackedHandedness_7 = 3;
		// private bool updateSolvers = true;
		__this->___updateSolvers_12 = (bool)1;
		// private List<Solver> solvers = new List<Solver>();
		List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* L_0 = (List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC*)il2cpp_codegen_object_new(List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mED3BD63F0FDA10CD4EE1DC17EE6137994655F793(L_0, List_1__ctor_mED3BD63F0FDA10CD4EE1DC17EE6137994655F793_RuntimeMethod_var);
		__this->___solvers_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___solvers_13), (void*)L_0);
		// private Handedness preferredTrackedHandedness = Handedness.Left;
		__this->___preferredTrackedHandedness_20 = 1;
		// private List<Solver> inspectorOrderedSolvers = new List<Solver>();
		List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC* L_1 = (List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC*)il2cpp_codegen_object_new(List_1_t8FC266743D9045F822A3C1C149E1DAE9C80B16FC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mED3BD63F0FDA10CD4EE1DC17EE6137994655F793(L_1, List_1__ctor_mED3BD63F0FDA10CD4EE1DC17EE6137994655F793_RuntimeMethod_var);
		__this->___inspectorOrderedSolvers_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inspectorOrderedSolvers_25), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SolverHandler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler__cctor_m93081F3687A585FEA14F9E60EDEF38A2F8AA07DE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06620C4FFB77E4D531D0907F2C25F88CC2060A8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A465FF80F4FBEF13B6C41DD4A6D70DA1B682CCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker AttachToNewTrackedObjectPerfMarker =
		//     new ProfilerMarker("[MRTK] SolverHandler.AttachToNewTrackedObject");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral06620C4FFB77E4D531D0907F2C25F88CC2060A8D, /*hidden argument*/NULL);
		((SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_StaticFields*)il2cpp_codegen_static_fields_for(SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_il2cpp_TypeInfo_var))->___AttachToNewTrackedObjectPerfMarker_27 = L_0;
		// private static readonly ProfilerMarker UpdateCachedHandJointTransformPerfMarker =
		//     new ProfilerMarker("[MRTK] SolverHandler.UpdateCachedHandJointTransform");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_1), _stringLiteral4A465FF80F4FBEF13B6C41DD4A6D70DA1B682CCF, /*hidden argument*/NULL);
		((SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_StaticFields*)il2cpp_codegen_static_fields_for(SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2_il2cpp_TypeInfo_var))->___UpdateCachedHandJointTransformPerfMarker_28 = L_1;
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
// UnityEngine.LayerMask[] MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_MagneticSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* SurfaceMagnetism_get_MagneticSurfaces_mAAF5814E9004D2606DD5BF58419818E252D94EE5 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => magneticSurfaces;
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_0 = __this->___magneticSurfaces_14;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_MagneticSurfaces(UnityEngine.LayerMask[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MagneticSurfaces_mEE0B62326AAC3F16C4FCF5D3E4148ED6EDB9BE1C (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => magneticSurfaces = value;
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_0 = ___0_value;
		__this->___magneticSurfaces_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___magneticSurfaces_14), (void*)L_0);
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_MaxRaycastDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaxRaycastDistance_m82EFF0E5411227D583DB45305B029D39E692C5E0 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->___maxRaycastDistance_15;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_MaxRaycastDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaxRaycastDistance_mB2124655EEF58F7A7B10DDAFAE500DC11BF6B8BC (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => maxRaycastDistance = value;
		float L_0 = ___0_value;
		__this->___maxRaycastDistance_15 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_ClosestDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ClosestDistance_m6CDB220B47469F390275F9482AF6B9D320778373 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => closestDistance;
		float L_0 = __this->___closestDistance_16;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_ClosestDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_ClosestDistance_m858319E48216709BFC24A350EC13B7AADAC800A4 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => closestDistance = value;
		float L_0 = ___0_value;
		__this->___closestDistance_16 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_SurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SurfaceNormalOffset_m60EA8032D517587671FF052582C02E37A2718346 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => surfaceNormalOffset;
		float L_0 = __this->___surfaceNormalOffset_17;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_SurfaceNormalOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SurfaceNormalOffset_m2C99E5685D6D2089635280A9A9CEA70E1000E667 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => surfaceNormalOffset = value;
		float L_0 = ___0_value;
		__this->___surfaceNormalOffset_17 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_SurfaceRayOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SurfaceRayOffset_mD65FA3459F9B5658BA44E807DE55829209979642 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => surfaceRayOffset;
		float L_0 = __this->___surfaceRayOffset_18;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_SurfaceRayOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SurfaceRayOffset_m8BFD9579C726AA50C85CCCC6E5DBF7547FED5B6E (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => surfaceRayOffset = value;
		float L_0 = ___0_value;
		__this->___surfaceRayOffset_18 = L_0;
		return;
	}
}
// MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/SceneQueryType MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_mF3EF1F12779C1DEDBDF705A0FD0FB0CBFD94A658 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => raycastMode;
		int32_t L_0 = __this->___raycastMode_19;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_RaycastMode(MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/SceneQueryType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_RaycastMode_mAEB3650FD881CB4F39D218D74E5E10FCF42290D3 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => raycastMode = value;
		int32_t L_0 = ___0_value;
		__this->___raycastMode_19 = L_0;
		return;
	}
}
// System.Int32 MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_BoxRaysPerEdge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_BoxRaysPerEdge_m66B8715A53DE4BAE9EC0914F2E77EC2E296DC57D (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => boxRaysPerEdge;
		int32_t L_0 = __this->___boxRaysPerEdge_20;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_BoxRaysPerEdge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_BoxRaysPerEdge_m78E963AAA5E2622195E201DED0CECB525B542028 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => boxRaysPerEdge = value;
		int32_t L_0 = ___0_value;
		__this->___boxRaysPerEdge_20 = L_0;
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_OrthographicBoxCast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OrthographicBoxCast_m685082D80EA72EE6016AEE5FB21EC1CF22B31B7A (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => orthographicBoxCast;
		bool L_0 = __this->___orthographicBoxCast_21;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_OrthographicBoxCast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OrthographicBoxCast_mEA75D5F018EC166E7C3EC5276BC6ADAF376B1850 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => orthographicBoxCast = value;
		bool L_0 = ___0_value;
		__this->___orthographicBoxCast_21 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_MaximumNormalVariance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaximumNormalVariance_m64B09E081A918C804336DB4E807090138E07A835 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => maximumNormalVariance;
		float L_0 = __this->___maximumNormalVariance_22;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_MaximumNormalVariance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaximumNormalVariance_m6C31455DBC501991F1F957095892230F4A5F3112 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => maximumNormalVariance = value;
		float L_0 = ___0_value;
		__this->___maximumNormalVariance_22 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_SphereSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SphereSize_m3F512BAEF1FC93D0AC2DBD25995371E67ABB7DB4 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => sphereSize;
		float L_0 = __this->___sphereSize_23;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_SphereSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SphereSize_m90A211BD636D6DD96478BC4E965B44BB4F831E54 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => sphereSize = value;
		float L_0 = ___0_value;
		__this->___sphereSize_23 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_VolumeCastSizeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_VolumeCastSizeOverride_m1BEC575B6E308536228D816A2B940FDBAFB1F9E4 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => volumeCastSizeOverride;
		float L_0 = __this->___volumeCastSizeOverride_24;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_VolumeCastSizeOverride(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_VolumeCastSizeOverride_mC3C48F6ED30D103CF86216763037FB493A9B77A1 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => volumeCastSizeOverride = value;
		float L_0 = ___0_value;
		__this->___volumeCastSizeOverride_24 = L_0;
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_UseLinkedAltScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_UseLinkedAltScaleOverride_m165D48F62F005CE6A02B7B32705F5B0233BE25A0 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => useLinkedAltScaleOverride;
		bool L_0 = __this->___useLinkedAltScaleOverride_25;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_UseLinkedAltScaleOverride(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_UseLinkedAltScaleOverride_m3C460DC83FCEA01B07BA520944E6FAA92DACD488 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => useLinkedAltScaleOverride = value;
		bool L_0 = ___0_value;
		__this->___useLinkedAltScaleOverride_25 = L_0;
		return;
	}
}
// MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/RaycastDirectionMode MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_CurrentRaycastDirectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_m8BCB5B5A2347BDD96B904E8445B27694D5F277C6 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => currentRaycastDirectionMode;
		int32_t L_0 = __this->___currentRaycastDirectionMode_26;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_CurrentRaycastDirectionMode(MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/RaycastDirectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CurrentRaycastDirectionMode_mA370A2AF45E4373188091902BCEE8F6E8D522951 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => currentRaycastDirectionMode = value;
		int32_t L_0 = ___0_value;
		__this->___currentRaycastDirectionMode_26 = L_0;
		return;
	}
}
// MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/OrientationMode MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_CurrentOrientationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_mE8700DDC1932D3B5C5D6D4C89EC912267B36E2E2 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => orientationMode;
		int32_t L_0 = __this->___orientationMode_27;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_CurrentOrientationMode(MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/OrientationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CurrentOrientationMode_m139E5E2DA9CB6E7D3E2D56C708A00D648DC0DC9D (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => orientationMode = value;
		int32_t L_0 = ___0_value;
		__this->___orientationMode_27 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_OrientationBlend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_OrientationBlend_m14B3710B139CAE92F771D2BE7E5ED8BB17738AC3 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => orientationBlend;
		float L_0 = __this->___orientationBlend_28;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_OrientationBlend(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OrientationBlend_m41F7CED189FC5DB54FEAEA64BC39E0E04E691C11 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => orientationBlend = value;
		float L_0 = ___0_value;
		__this->___orientationBlend_28 = L_0;
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_KeepOrientationVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_m5963208050451A724A2FBF58BF36E6E4DA831322 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->___keepOrientationVertical_29;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_KeepOrientationVertical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_KeepOrientationVertical_mACFBE2B52A3B5E554A10784FFDAE69BB312D4586 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => keepOrientationVertical = value;
		bool L_0 = ___0_value;
		__this->___keepOrientationVertical_29 = L_0;
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_DebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m71A5F16EE5B4E33CA4F6CB88D27D32841FA62814 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => debugEnabled;
		bool L_0 = __this->___debugEnabled_30;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_DebugEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_DebugEnabled_m777FCFB238B1CE1961319583C5D7D06680688A26 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => debugEnabled = value;
		bool L_0 = ___0_value;
		__this->___debugEnabled_30 = L_0;
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_OnSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OnSurface_m32C1EC1EA0D9BB9B880A1B63065E764E9EF8908C (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = __this->___U3COnSurfaceU3Ek__BackingField_31;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_OnSurface(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_mF05D844CEE08BDAF4A939CFD42ECAAA3DE11791C (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3COnSurfaceU3Ek__BackingField_31 = L_0;
		return;
	}
}
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SurfaceMagnetism_get_RaycastOrigin_m69B4B988DFC27995C2198488E75775B4875C6E3F (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 RaycastOrigin => SolverHandler.TransformTarget == null ? Vector3.zero : SolverHandler.TransformTarget.position;
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_0 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_3 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		return L_5;
	}

IL_0024:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SurfaceMagnetism_get_RaycastEndPoint_m186E20DF24032E1EFFA0D239DCDB7378D2D2B6B1 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Vector3 origin = RaycastOrigin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = SurfaceMagnetism_get_RaycastOrigin_m69B4B988DFC27995C2198488E75775B4875C6E3F(__this, NULL);
		// Vector3 endPoint = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		V_0 = L_1;
		// switch (CurrentRaycastDirectionMode)
		int32_t L_2;
		L_2 = SurfaceMagnetism_get_CurrentRaycastDirectionMode_m8BCB5B5A2347BDD96B904E8445B27694D5F277C6_inline(__this, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_007f;
			}
		}
	}
	{
		goto IL_008b;
	}

IL_0028:
	{
		// if (SolverHandler != null && SolverHandler.TransformTarget != null)
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_4 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_008b;
		}
	}
	{
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_6 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_008b;
		}
	}
	{
		// endPoint = SolverHandler.TransformTarget.position + SolverHandler.TransformTarget.forward;
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_9 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_12 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_14, NULL);
		V_0 = L_15;
		// break;
		goto IL_008b;
	}

IL_0071:
	{
		// endPoint = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		V_0 = L_17;
		// break;
		goto IL_008b;
	}

IL_007f:
	{
		// endPoint = SolverHandler.GoalPosition;
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_18 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = SolverHandler_get_GoalPosition_m287FC681D5DFB57264ADD5E9E994B7C87BB9E049_inline(L_18, NULL);
		V_0 = L_19;
	}

IL_008b:
	{
		// return endPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_0;
		return L_20;
	}
}
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SurfaceMagnetism_get_RaycastDirection_m303A66E35976B766AC4771345F806679094A1B35 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 direction = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		V_0 = L_0;
		// if (CurrentRaycastDirectionMode == RaycastDirectionMode.TrackedTargetForward)
		int32_t L_1;
		L_1 = SurfaceMagnetism_get_CurrentRaycastDirectionMode_m8BCB5B5A2347BDD96B904E8445B27694D5F277C6_inline(__this, NULL);
		if (L_1)
		{
			goto IL_0034;
		}
	}
	{
		// if (SolverHandler.TransformTarget != null)
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_2 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// direction = SolverHandler.TransformTarget.forward;
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_5 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_6, NULL);
		V_0 = L_7;
		goto IL_004e;
	}

IL_0034:
	{
		// direction = (RaycastEndPoint - RaycastOrigin).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = SurfaceMagnetism_get_RaycastEndPoint_m186E20DF24032E1EFFA0D239DCDB7378D2D2B6B1(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = SurfaceMagnetism_get_RaycastOrigin_m69B4B988DFC27995C2198488E75775B4875C6E3F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_8, L_9, NULL);
		V_1 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		V_0 = L_11;
	}

IL_004e:
	{
		// return direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		return L_12;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_ScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ScaleOverride_m72E7BAF998B49FFCB69D0B036BBB29B4A2FB4B6E (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// private float ScaleOverride => useLinkedAltScaleOverride ? SolverHandler.AltScale.Current.magnitude : volumeCastSizeOverride;
		bool L_0 = __this->___useLinkedAltScaleOverride_25;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		float L_1 = __this->___volumeCastSizeOverride_24;
		return L_1;
	}

IL_000f:
	{
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_2 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_2);
		Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B L_3;
		L_3 = SolverHandler_get_AltScale_mD5130E55FEC78CDDC9F9818CDDF0AC6458ECB69E_inline(L_2, NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3Smoothed_get_Current_m09726493CD0732F10008C991EC37A77BC226BBEF_inline((&V_0), NULL);
		V_1 = L_4;
		float L_5;
		L_5 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		return L_5;
	}
}
// UnityEngine.Quaternion MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::CalculateMagnetismOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SurfaceMagnetism_CalculateMagnetismOrientation_m70E50B71406F36B49E76D7EC575A0F6419EFDCEE (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_surfaceNormal, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// Vector3 currentUpVector = WorkingRotation * Vector3.up;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Solver_get_WorkingRotation_m900CAE5ECF091AA713B19FC04DF87ECD83EA1CF2(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_0, L_1, NULL);
		V_0 = L_2;
		// Quaternion trackedReferenceRotation = Quaternion.LookRotation(-direction, currentUpVector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_4, L_5, NULL);
		V_1 = L_6;
		// Quaternion surfaceReferenceRotation = Quaternion.LookRotation(-surfaceNormal, currentUpVector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___1_surfaceNormal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_8, L_9, NULL);
		V_2 = L_10;
		// if (KeepOrientationVertical)
		bool L_11;
		L_11 = SurfaceMagnetism_get_KeepOrientationVertical_m5963208050451A724A2FBF58BF36E6E4DA831322_inline(__this, NULL);
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		// Vector3 trackedReferenceUp = trackedReferenceRotation * Vector3.up;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_12, L_13, NULL);
		// trackedReferenceRotation = Quaternion.FromToRotation(trackedReferenceUp, Vector3.up) * trackedReferenceRotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_14, L_15, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_16, L_17, NULL);
		V_1 = L_18;
		// Vector3 surfaceReferenceUp = surfaceReferenceRotation * Vector3.up;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_19, L_20, NULL);
		// surfaceReferenceRotation = Quaternion.FromToRotation(surfaceReferenceUp, Vector3.up) * surfaceReferenceRotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_21, L_22, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_23, L_24, NULL);
		V_2 = L_25;
	}

IL_006b:
	{
		// switch (CurrentOrientationMode)
		int32_t L_26;
		L_26 = SurfaceMagnetism_get_CurrentOrientationMode_mE8700DDC1932D3B5C5D6D4C89EC912267B36E2E2_inline(__this, NULL);
		V_3 = L_26;
		int32_t L_27 = V_3;
		switch (L_27)
		{
			case 0:
			{
				goto IL_008e;
			}
			case 1:
			{
				goto IL_009a;
			}
			case 2:
			{
				goto IL_009c;
			}
			case 3:
			{
				goto IL_009e;
			}
			case 4:
			{
				goto IL_00ac;
			}
		}
	}
	{
		goto IL_00b8;
	}

IL_008e:
	{
		// return SolverHandler.GoalRotation;
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_28 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_28);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = SolverHandler_get_GoalRotation_mC0CEEB989A81193D184206C6B11624B75EB41B34_inline(L_28, NULL);
		return L_29;
	}

IL_009a:
	{
		// return trackedReferenceRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = V_1;
		return L_30;
	}

IL_009c:
	{
		// return surfaceReferenceRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = V_2;
		return L_31;
	}

IL_009e:
	{
		// return Quaternion.Slerp(trackedReferenceRotation, surfaceReferenceRotation, orientationBlend);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = V_2;
		float L_34 = __this->___orientationBlend_28;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_32, L_33, L_34, NULL);
		return L_35;
	}

IL_00ac:
	{
		// return Quaternion.LookRotation(direction, Vector3.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = ___0_direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_36, L_37, NULL);
		return L_38;
	}

IL_00b8:
	{
		// return Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		return L_39;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SolverUpdate_m4F602FE324061ECF056F3A54708D96B7299D6F4A (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		// using (SolverUpdatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2_StaticFields*)il2cpp_codegen_static_fields_for(SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2_il2cpp_TypeInfo_var))->___SolverUpdatePerfMarker_35;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cb:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// GoalPosition = WorkingPosition;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
				L_2 = Solver_get_WorkingPosition_m0D0F18279AEB6922D9101850C66EDA1255C024BD(__this, NULL);
				Solver_set_GoalPosition_m51BBA4824D71ABC8189A6A6661A09942E5A72F76(__this, L_2, NULL);
				// GoalRotation = WorkingRotation;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
				L_3 = Solver_get_WorkingRotation_m900CAE5ECF091AA713B19FC04DF87ECD83EA1CF2(__this, NULL);
				Solver_set_GoalRotation_m1223612AC25A7DCBBEBDECEB63E41E5425580A88(__this, L_3, NULL);
				// Vector3 origin = RaycastOrigin;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
				L_4 = SurfaceMagnetism_get_RaycastOrigin_m69B4B988DFC27995C2198488E75775B4875C6E3F(__this, NULL);
				V_2 = L_4;
				// Vector3 endpoint = RaycastEndPoint;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
				L_5 = SurfaceMagnetism_get_RaycastEndPoint_m186E20DF24032E1EFFA0D239DCDB7378D2D2B6B1(__this, NULL);
				V_3 = L_5;
				// currentRayStep.UpdateRayStep(in origin, in endpoint);
				RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_6 = (RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5*)(&__this->___currentRayStep_33);
				RayStep_UpdateRayStep_m9B7B3E781E7C620B11DC90520AC285B8E5ED2305(L_6, (&V_2), (&V_3), NULL);
				// if (currentRayStep.Direction == Vector3.zero)
				RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_7 = (RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5*)(&__this->___currentRayStep_33);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
				L_8 = RayStep_get_Direction_mF8BC5AD55BB22ED4410C8F6F3FC072842D270171_inline(L_7, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
				bool L_10;
				L_10 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_8, L_9, NULL);
				if (!L_10)
				{
					goto IL_005c_1;
				}
			}
			{
				// return;
				goto IL_00d9;
			}

IL_005c_1:
			{
				// if (DebugEnabled)
				bool L_11;
				L_11 = SurfaceMagnetism_get_DebugEnabled_m71A5F16EE5B4E33CA4F6CB88D27D32841FA62814_inline(__this, NULL);
				if (!L_11)
				{
					goto IL_0084_1;
				}
			}
			{
				// Debug.DrawLine(currentRayStep.Origin, currentRayStep.Terminus, Color.magenta);
				RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_12 = (RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5*)(&__this->___currentRayStep_33);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
				L_13 = RayStep_get_Origin_mD824FD9C6E7BB961ECF68E811B60725D111E9D7D_inline(L_12, NULL);
				RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_14 = (RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5*)(&__this->___currentRayStep_33);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
				L_15 = RayStep_get_Terminus_m1146FE794571E9B89713DD4F135C34F162F9E6C6_inline(L_14, NULL);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
				L_16 = Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline(NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_13, L_15, L_16, NULL);
			}

IL_0084_1:
			{
				// switch (RaycastMode)
				int32_t L_17;
				L_17 = SurfaceMagnetism_get_RaycastMode_mF3EF1F12779C1DEDBDF705A0FD0FB0CBFD94A658_inline(__this, NULL);
				V_4 = L_17;
				int32_t L_18 = V_4;
				switch (L_18)
				{
					case 0:
					{
						goto IL_00a1_1;
					}
					case 1:
					{
						goto IL_00af_1;
					}
					case 2:
					{
						goto IL_00bd_1;
					}
				}
			}
			{
				goto IL_00d9;
			}

IL_00a1_1:
			{
				// SimpleRaycastStepUpdate(ref this.currentRayStep);
				RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_19 = (RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5*)(&__this->___currentRayStep_33);
				SurfaceMagnetism_SimpleRaycastStepUpdate_m317F62009471F6BABFD25C8A32311932B5AE5521(__this, L_19, NULL);
				// break;
				goto IL_00d9;
			}

IL_00af_1:
			{
				// BoxRaycastStepUpdate(ref this.currentRayStep);
				RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_20 = (RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5*)(&__this->___currentRayStep_33);
				SurfaceMagnetism_BoxRaycastStepUpdate_mA948A671639F59718C77C50BFE0AFB93F5BC66BD(__this, L_20, NULL);
				// break;
				goto IL_00d9;
			}

IL_00bd_1:
			{
				// SphereRaycastStepUpdate(ref this.currentRayStep);
				RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_21 = (RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5*)(&__this->___currentRayStep_33);
				SurfaceMagnetism_SphereRaycastStepUpdate_mDDED99CAEB3B6AB00BA0787F1751C75DCC3BF42F(__this, L_21, NULL);
				// break;
				goto IL_00d9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::SimpleRaycastStepUpdate(MixedReality.Toolkit.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SimpleRaycastStepUpdate_m317F62009471F6BABFD25C8A32311932B5AE5521 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* ___0_rayStep, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityRaycaster_t684278FB530FB57C502613442034953C1D139E83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// OnSurface = MixedRealityRaycaster.RaycastSimplePhysicsStep(
		//     rayStep,
		//     maxRaycastDistance,
		//     magneticSurfaces,
		//     false,
		//     out RaycastHit result);
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_0 = ___0_rayStep;
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5 L_1 = (*(RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5*)L_0);
		float L_2 = __this->___maxRaycastDistance_15;
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_3 = __this->___magneticSurfaces_14;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityRaycaster_t684278FB530FB57C502613442034953C1D139E83_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = MixedRealityRaycaster_RaycastSimplePhysicsStep_m0D79CB7C531904B99B02983EE18BC12D4DA625C8(L_1, L_2, L_3, (bool)0, (&V_0), NULL);
		SurfaceMagnetism_set_OnSurface_mF05D844CEE08BDAF4A939CFD42ECAAA3DE11791C_inline(__this, L_4, NULL);
		// Vector3 hitDelta = result.point - rayStep.Origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_6 = ___0_rayStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = RayStep_get_Origin_mD824FD9C6E7BB961ECF68E811B60725D111E9D7D_inline(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_7, NULL);
		V_1 = L_8;
		// float length = hitDelta.magnitude;
		float L_9;
		L_9 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		// if (length < closestDistance)
		float L_10 = __this->___closestDistance_16;
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0065;
		}
	}
	{
		// result.point = rayStep.Origin + rayStep.Direction * closestDistance;
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_11 = ___0_rayStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = RayStep_get_Origin_mD824FD9C6E7BB961ECF68E811B60725D111E9D7D_inline(L_11, NULL);
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_13 = ___0_rayStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = RayStep_get_Direction_mF8BC5AD55BB22ED4410C8F6F3FC072842D270171_inline(L_13, NULL);
		float L_15 = __this->___closestDistance_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_16, NULL);
		RaycastHit_set_point_m3B63BEB25A82BFCF9FBB300022D0362BC2CF9E11((&V_0), L_17, NULL);
	}

IL_0065:
	{
		// if (OnSurface)
		bool L_18;
		L_18 = SurfaceMagnetism_get_OnSurface_m32C1EC1EA0D9BB9B880A1B63065E764E9EF8908C_inline(__this, NULL);
		if (!L_18)
		{
			goto IL_00c0;
		}
	}
	{
		// GoalPosition = result.point + surfaceNormalOffset * result.normal + surfaceRayOffset * rayStep.Direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		float L_20 = __this->___surfaceNormalOffset_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_20, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_19, L_22, NULL);
		float L_24 = __this->___surfaceRayOffset_18;
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_25 = ___0_rayStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = RayStep_get_Direction_mF8BC5AD55BB22ED4410C8F6F3FC072842D270171_inline(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_24, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_23, L_27, NULL);
		Solver_set_GoalPosition_m51BBA4824D71ABC8189A6A6661A09942E5A72F76(__this, L_28, NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, result.normal);
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_29 = ___0_rayStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = RayStep_get_Direction_mF8BC5AD55BB22ED4410C8F6F3FC072842D270171_inline(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = SurfaceMagnetism_CalculateMagnetismOrientation_m70E50B71406F36B49E76D7EC575A0F6419EFDCEE(__this, L_30, L_31, NULL);
		Solver_set_GoalRotation_m1223612AC25A7DCBBEBDECEB63E41E5425580A88(__this, L_32, NULL);
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::SphereRaycastStepUpdate(MixedReality.Toolkit.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SphereRaycastStepUpdate_mDDED99CAEB3B6AB00BA0787F1751C75DCC3BF42F (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* ___0_rayStep, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityRaycaster_t684278FB530FB57C502613442034953C1D139E83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float G_B3_0 = 0.0f;
	{
		// float size = ScaleOverride > 0 ? ScaleOverride : transform.lossyScale.x * sphereSize;
		float L_0;
		L_0 = SurfaceMagnetism_get_ScaleOverride_m72E7BAF998B49FFCB69D0B036BBB29B4A2FB4B6E(__this, NULL);
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_0026;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_1, NULL);
		float L_3 = L_2.___x_2;
		float L_4 = __this->___sphereSize_23;
		G_B3_0 = ((float)il2cpp_codegen_multiply(L_3, L_4));
		goto IL_002c;
	}

IL_0026:
	{
		float L_5;
		L_5 = SurfaceMagnetism_get_ScaleOverride_m72E7BAF998B49FFCB69D0B036BBB29B4A2FB4B6E(__this, NULL);
		G_B3_0 = L_5;
	}

IL_002c:
	{
		V_0 = G_B3_0;
		// OnSurface = MixedRealityRaycaster.RaycastSpherePhysicsStep(rayStep, size, maxRaycastDistance, magneticSurfaces, false, out RaycastHit result);
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_6 = ___0_rayStep;
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5 L_7 = (*(RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5*)L_6);
		float L_8 = V_0;
		float L_9 = __this->___maxRaycastDistance_15;
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_10 = __this->___magneticSurfaces_14;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityRaycaster_t684278FB530FB57C502613442034953C1D139E83_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = MixedRealityRaycaster_RaycastSpherePhysicsStep_m5D27AE4350A6AAF070A83FF53C91F9AE5AB4845F(L_7, L_8, L_9, L_10, (bool)0, (&V_1), NULL);
		SurfaceMagnetism_set_OnSurface_mF05D844CEE08BDAF4A939CFD42ECAAA3DE11791C_inline(__this, L_11, NULL);
		// Vector3 hitDelta = result.point - rayStep.Origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_13 = ___0_rayStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = RayStep_get_Origin_mD824FD9C6E7BB961ECF68E811B60725D111E9D7D_inline(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_14, NULL);
		V_2 = L_15;
		// float length = hitDelta.magnitude;
		float L_16;
		L_16 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		// if (length < closestDistance)
		float L_17 = __this->___closestDistance_16;
		if ((!(((float)L_16) < ((float)L_17))))
		{
			goto IL_0093;
		}
	}
	{
		// result.point = rayStep.Origin + rayStep.Direction * closestDistance;
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_18 = ___0_rayStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = RayStep_get_Origin_mD824FD9C6E7BB961ECF68E811B60725D111E9D7D_inline(L_18, NULL);
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_20 = ___0_rayStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = RayStep_get_Direction_mF8BC5AD55BB22ED4410C8F6F3FC072842D270171_inline(L_20, NULL);
		float L_22 = __this->___closestDistance_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_19, L_23, NULL);
		RaycastHit_set_point_m3B63BEB25A82BFCF9FBB300022D0362BC2CF9E11((&V_1), L_24, NULL);
	}

IL_0093:
	{
		// if (OnSurface)
		bool L_25;
		L_25 = SurfaceMagnetism_get_OnSurface_m32C1EC1EA0D9BB9B880A1B63065E764E9EF8908C_inline(__this, NULL);
		if (!L_25)
		{
			goto IL_00ee;
		}
	}
	{
		// GoalPosition = result.point + surfaceNormalOffset * result.normal + surfaceRayOffset * rayStep.Direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		float L_27 = __this->___surfaceNormalOffset_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_29, NULL);
		float L_31 = __this->___surfaceRayOffset_18;
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_32 = ___0_rayStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = RayStep_get_Direction_mF8BC5AD55BB22ED4410C8F6F3FC072842D270171_inline(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_31, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_30, L_34, NULL);
		Solver_set_GoalPosition_m51BBA4824D71ABC8189A6A6661A09942E5A72F76(__this, L_35, NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, result.normal);
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_36 = ___0_rayStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = RayStep_get_Direction_mF8BC5AD55BB22ED4410C8F6F3FC072842D270171_inline(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_1), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = SurfaceMagnetism_CalculateMagnetismOrientation_m70E50B71406F36B49E76D7EC575A0F6419EFDCEE(__this, L_37, L_38, NULL);
		Solver_set_GoalRotation_m1223612AC25A7DCBBEBDECEB63E41E5425580A88(__this, L_39, NULL);
	}

IL_00ee:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::BoxRaycastStepUpdate(MixedReality.Toolkit.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_BoxRaycastStepUpdate_mA948A671639F59718C77C50BFE0AFB93F5BC66BD (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* ___0_rayStep, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityRaycaster_t684278FB530FB57C502613442034953C1D139E83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_4 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_5 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_6 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// Vector3 scale = ScaleOverride > 0 ? transform.lossyScale.normalized * ScaleOverride : transform.lossyScale;
		float L_0;
		L_0 = SurfaceMagnetism_get_ScaleOverride_m72E7BAF998B49FFCB69D0B036BBB29B4A2FB4B6E(__this, NULL);
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_001a;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0039;
	}

IL_001a:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_3, NULL);
		V_7 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_7), NULL);
		float L_6;
		L_6 = SurfaceMagnetism_get_ScaleOverride_m72E7BAF998B49FFCB69D0B036BBB29B4A2FB4B6E(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		G_B3_0 = L_7;
	}

IL_0039:
	{
		V_0 = G_B3_0;
		// Quaternion orientation = orientationMode == OrientationMode.None ?
		//     Quaternion.LookRotation(rayStep.Direction, Vector3.up) :
		//     CalculateMagnetismOrientation(rayStep.Direction, Vector3.up);
		int32_t L_8 = __this->___orientationMode_27;
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_9 = ___0_rayStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = RayStep_get_Direction_mF8BC5AD55BB22ED4410C8F6F3FC072842D270171_inline(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = SurfaceMagnetism_CalculateMagnetismOrientation_m70E50B71406F36B49E76D7EC575A0F6419EFDCEE(__this, L_10, L_11, NULL);
		G_B6_0 = L_12;
		goto IL_0065;
	}

IL_0055:
	{
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_13 = ___0_rayStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = RayStep_get_Direction_mF8BC5AD55BB22ED4410C8F6F3FC072842D270171_inline(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_14, L_15, NULL);
		G_B6_0 = L_16;
	}

IL_0065:
	{
		V_1 = G_B6_0;
		// Matrix4x4 targetMatrix = Matrix4x4.TRS(Vector3.zero, orientation, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_20;
		L_20 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_17, L_18, L_19, NULL);
		V_2 = L_20;
		// if (this.boxCollider == null)
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_21 = __this->___boxCollider_34;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_008d;
		}
	}
	{
		// this.boxCollider = GetComponent<BoxCollider>();
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_23;
		L_23 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(__this, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		__this->___boxCollider_34 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boxCollider_34), (void*)L_23);
	}

IL_008d:
	{
		// Vector3 extents = boxCollider.size;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_24 = __this->___boxCollider_34;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E(L_24, NULL);
		V_3 = L_25;
		// if (MixedRealityRaycaster.RaycastBoxPhysicsStep(rayStep, extents, transform.position, targetMatrix, maxRaycastDistance, magneticSurfaces, boxRaysPerEdge, orthographicBoxCast, false, out Vector3[] positions, out Vector3[] normals, out bool[] hits))
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_26 = ___0_rayStep;
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5 L_27 = (*(RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5*)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_31 = V_2;
		float L_32 = __this->___maxRaycastDistance_15;
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_33 = __this->___magneticSurfaces_14;
		int32_t L_34 = __this->___boxRaysPerEdge_20;
		bool L_35 = __this->___orthographicBoxCast_21;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityRaycaster_t684278FB530FB57C502613442034953C1D139E83_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = MixedRealityRaycaster_RaycastBoxPhysicsStep_m25153BC9656C12D65C9EFED4F130299687F2AF1E(L_27, L_28, L_30, L_31, L_32, L_33, L_34, L_35, (bool)0, (&V_4), (&V_5), (&V_6), NULL);
		if (!L_36)
		{
			goto IL_0233;
		}
	}
	{
		// FindPlacementPlane(rayStep.Origin, rayStep.Direction, positions,
		//     normals, hits, boxCollider.size.x, maximumNormalVariance, false,
		//     orientationMode == OrientationMode.None, out Plane plane, out float distance);
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_37 = ___0_rayStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = RayStep_get_Origin_mD824FD9C6E7BB961ECF68E811B60725D111E9D7D_inline(L_37, NULL);
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_39 = ___0_rayStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = RayStep_get_Direction_mF8BC5AD55BB22ED4410C8F6F3FC072842D270171_inline(L_39, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_41 = V_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_42 = V_5;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_43 = V_6;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_44 = __this->___boxCollider_34;
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E(L_44, NULL);
		float L_46 = L_45.___x_2;
		float L_47 = __this->___maximumNormalVariance_22;
		int32_t L_48 = __this->___orientationMode_27;
		SurfaceMagnetism_FindPlacementPlane_m55A44108B33B1BB3369B39F7D45E448FC2C94404(__this, L_38, L_40, L_41, L_42, L_43, L_46, L_47, (bool)0, (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0), (&V_8), (&V_9), NULL);
		// float verticalCorrectionOffset = 0;
		V_10 = (0.0f);
		// if (IsNormalVertical(plane.normal) && !Mathf.Approximately(rayStep.Direction.y, 0))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB((&V_8), NULL);
		il2cpp_codegen_runtime_class_init_inline(SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = SurfaceMagnetism_IsNormalVertical_m6F94E5DB20E80D14EFF2234B10AFA98E1CC2E207(L_49, NULL);
		if (!L_50)
		{
			goto IL_018f;
		}
	}
	{
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_51 = ___0_rayStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = RayStep_get_Direction_mF8BC5AD55BB22ED4410C8F6F3FC072842D270171_inline(L_51, NULL);
		float L_53 = L_52.___y_3;
		bool L_54;
		L_54 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_53, (0.0f), NULL);
		if (L_54)
		{
			goto IL_018f;
		}
	}
	{
		// float boxSurfaceVerticalOffset = targetMatrix.MultiplyVector(new Vector3(0, extents.y * 0.5f, 0)).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_3;
		float L_56 = L_55.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_57), (0.0f), ((float)il2cpp_codegen_multiply(L_56, (0.5f))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_2), L_57, NULL);
		V_7 = L_58;
		float L_59;
		L_59 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_7), NULL);
		// Vector3 correctionVector = boxSurfaceVerticalOffset * (rayStep.Direction / rayStep.Direction.y);
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_60 = ___0_rayStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = RayStep_get_Direction_mF8BC5AD55BB22ED4410C8F6F3FC072842D270171_inline(L_60, NULL);
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_62 = ___0_rayStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = RayStep_get_Direction_mF8BC5AD55BB22ED4410C8F6F3FC072842D270171_inline(L_62, NULL);
		float L_64 = L_63.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_61, L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_59, L_65, NULL);
		V_12 = L_66;
		// verticalCorrectionOffset = -correctionVector.magnitude;
		float L_67;
		L_67 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_12), NULL);
		V_10 = ((-L_67));
	}

IL_018f:
	{
		// float boxSurfaceOffset = targetMatrix.MultiplyVector(new Vector3(0, 0, extents.z * 0.5f)).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = V_3;
		float L_69 = L_68.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_70), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_69, (0.5f))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_2), L_70, NULL);
		V_7 = L_71;
		float L_72;
		L_72 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_7), NULL);
		V_11 = L_72;
		// GoalPosition = rayStep.Origin + rayStep.Direction * Mathf.Max(closestDistance, distance + surfaceRayOffset + boxSurfaceOffset + verticalCorrectionOffset) + plane.normal * (0 * boxSurfaceOffset + surfaceNormalOffset);
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_73 = ___0_rayStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = RayStep_get_Origin_mD824FD9C6E7BB961ECF68E811B60725D111E9D7D_inline(L_73, NULL);
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_75 = ___0_rayStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = RayStep_get_Direction_mF8BC5AD55BB22ED4410C8F6F3FC072842D270171_inline(L_75, NULL);
		float L_77 = __this->___closestDistance_16;
		float L_78 = V_9;
		float L_79 = __this->___surfaceRayOffset_18;
		float L_80 = V_11;
		float L_81 = V_10;
		float L_82;
		L_82 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_77, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_78, L_79)), L_80)), L_81)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_76, L_82, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_74, L_83, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB((&V_8), NULL);
		float L_86 = V_11;
		float L_87 = __this->___surfaceNormalOffset_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_85, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((0.0f), L_86)), L_87)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_84, L_88, NULL);
		Solver_set_GoalPosition_m51BBA4824D71ABC8189A6A6661A09942E5A72F76(__this, L_89, NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, plane.normal);
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_90 = ___0_rayStep;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = RayStep_get_Direction_mF8BC5AD55BB22ED4410C8F6F3FC072842D270171_inline(L_90, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB((&V_8), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_93;
		L_93 = SurfaceMagnetism_CalculateMagnetismOrientation_m70E50B71406F36B49E76D7EC575A0F6419EFDCEE(__this, L_91, L_92, NULL);
		Solver_set_GoalRotation_m1223612AC25A7DCBBEBDECEB63E41E5425580A88(__this, L_93, NULL);
		// OnSurface = true;
		SurfaceMagnetism_set_OnSurface_mF05D844CEE08BDAF4A939CFD42ECAAA3DE11791C_inline(__this, (bool)1, NULL);
		return;
	}

IL_0233:
	{
		// OnSurface = false;
		SurfaceMagnetism_set_OnSurface_mF05D844CEE08BDAF4A939CFD42ECAAA3DE11791C_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::FindPlacementPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Boolean[],System.Single,System.Single,System.Boolean,System.Boolean,UnityEngine.Plane&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_FindPlacementPlane_m55A44108B33B1BB3369B39F7D45E448FC2C94404 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___2_positions, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___3_normals, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___4_hits, float ___5_assetWidth, float ___6_maxNormalVariance, bool ___7_constrainVertical, bool ___8_useClosestDistance, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___9_plane, float* ___10_closestDistance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C5F77CBC6B48EEFA86CFC18E2E3A9CDF9071345);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_18;
	memset((&V_18), 0, sizeof(V_18));
	float V_19 = 0.0f;
	int32_t V_20 = 0;
	float V_21 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_22;
	memset((&V_22), 0, sizeof(V_22));
	float V_23 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B48_0;
	memset((&G_B48_0), 0, sizeof(G_B48_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B47_0;
	memset((&G_B47_0), 0, sizeof(G_B47_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B49_0;
	memset((&G_B49_0), 0, sizeof(G_B49_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B49_1;
	memset((&G_B49_1), 0, sizeof(G_B49_1));
	{
		// int rayCount = positions.Length;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___2_positions;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		// Vector3 originalDirection = direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_direction;
		V_1 = L_1;
		// if (constrainVertical)
		bool L_2 = ___7_constrainVertical;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// direction.y = 0.0f;
		(&___1_direction)->___y_3 = (0.0f);
		// direction = direction.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&___1_direction), NULL);
		___1_direction = L_3;
	}

IL_001f:
	{
		// closestDistance = float.PositiveInfinity;
		float* L_4 = ___10_closestDistance;
		*((float*)L_4) = (float)(std::numeric_limits<float>::infinity());
		// int numHits = 0;
		V_2 = 0;
		// int closestPointIdx = -1;
		V_3 = (-1);
		// float farthestDistance = 0f;
		V_4 = (0.0f);
		// var averageNormal = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_5 = L_5;
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_13 = 0;
		goto IL_0090;
	}

IL_003e:
	{
		// if (hits[hitIndex])
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = ___4_hits;
		int32_t L_7 = V_13;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (uint8_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if (!L_9)
		{
			goto IL_008a;
		}
	}
	{
		// float distance = Vector3.Dot(direction, positions[hitIndex] - origin);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_direction;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = ___2_positions;
		int32_t L_12 = V_13;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___0_origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_14, L_15, NULL);
		float L_17;
		L_17 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_10, L_16, NULL);
		V_14 = L_17;
		// if (distance < closestDistance)
		float L_18 = V_14;
		float* L_19 = ___10_closestDistance;
		float L_20 = *((float*)L_19);
		if ((!(((float)L_18) < ((float)L_20))))
		{
			goto IL_006a;
		}
	}
	{
		// closestPointIdx = hitIndex;
		int32_t L_21 = V_13;
		V_3 = L_21;
		// closestDistance = distance;
		float* L_22 = ___10_closestDistance;
		float L_23 = V_14;
		*((float*)L_22) = (float)L_23;
	}

IL_006a:
	{
		// if (distance > farthestDistance)
		float L_24 = V_14;
		float L_25 = V_4;
		if ((!(((float)L_24) > ((float)L_25))))
		{
			goto IL_0074;
		}
	}
	{
		// farthestDistance = distance;
		float L_26 = V_14;
		V_4 = L_26;
	}

IL_0074:
	{
		// averageNormal += normals[hitIndex];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_28 = ___3_normals;
		int32_t L_29 = V_13;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_27, L_31, NULL);
		V_5 = L_32;
		// ++numHits;
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_008a:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_34 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0090:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_35 = V_13;
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_003e;
		}
	}
	{
		// Vector3 closestPoint = positions[closestPointIdx];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_37 = ___2_positions;
		int32_t L_38 = V_3;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_6 = L_40;
		// averageNormal /= numHits;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_5;
		int32_t L_42 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_41, ((float)L_42), NULL);
		V_5 = L_43;
		// float variance = 0;
		V_7 = (0.0f);
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		V_15 = 0;
		goto IL_00e0;
	}

IL_00b5:
	{
		// if (hits[hitIndex])
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_44 = ___4_hits;
		int32_t L_45 = V_15;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		uint8_t L_47 = (uint8_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		if (!L_47)
		{
			goto IL_00da;
		}
	}
	{
		// variance += (normals[hitIndex] - averageNormal).magnitude;
		float L_48 = V_7;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_49 = ___3_normals;
		int32_t L_50 = V_15;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_52, L_53, NULL);
		V_16 = L_54;
		float L_55;
		L_55 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_16), NULL);
		V_7 = ((float)il2cpp_codegen_add(L_48, L_55));
	}

IL_00da:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		int32_t L_56 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_00e0:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		int32_t L_57 = V_15;
		int32_t L_58 = V_0;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_00b5;
		}
	}
	{
		// variance /= numHits;
		float L_59 = V_7;
		int32_t L_60 = V_2;
		V_7 = ((float)(L_59/((float)L_60)));
		// if (variance > maxNormalVariance || numHits < rayCount * 0.25f)
		float L_61 = V_7;
		float L_62 = ___6_maxNormalVariance;
		if ((((float)L_61) > ((float)L_62)))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_63 = V_2;
		int32_t L_64 = V_0;
		if ((!(((float)((float)L_63)) < ((float)((float)il2cpp_codegen_multiply(((float)L_64), (0.25f)))))))
		{
			goto IL_0113;
		}
	}

IL_00fe:
	{
		// plane = new Plane(-direction, closestPoint);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_65 = ___9_plane;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = ___1_direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_66, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = V_6;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_69;
		memset((&L_69), 0, sizeof(L_69));
		Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2((&L_69), L_67, L_68, /*hidden argument*/NULL);
		*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)L_65 = L_69;
		// return;
		return;
	}

IL_0113:
	{
		// var lowAngle = float.PositiveInfinity;
		V_8 = (std::numeric_limits<float>::infinity());
		// var highAngle = float.NegativeInfinity;
		V_9 = (-std::numeric_limits<float>::infinity());
		// int lowIndex = -1;
		V_10 = (-1);
		// int highIndex = -1;
		V_11 = (-1);
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_17 = 0;
		goto IL_0193;
	}

IL_012c:
	{
		// if (hits[hitIndex] == false || hitIndex == closestPointIdx)
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_70 = ___4_hits;
		int32_t L_71 = V_17;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		uint8_t L_73 = (uint8_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		if (!L_73)
		{
			goto IL_018d;
		}
	}
	{
		int32_t L_74 = V_17;
		int32_t L_75 = V_3;
		if ((((int32_t)L_74) == ((int32_t)L_75)))
		{
			goto IL_018d;
		}
	}
	{
		// Vector3 difference = positions[hitIndex] - closestPoint;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_76 = ___2_positions;
		int32_t L_77 = V_17;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_79, L_80, NULL);
		V_18 = L_81;
		// if (constrainVertical)
		bool L_82 = ___7_constrainVertical;
		if (!L_82)
		{
			goto IL_016e;
		}
	}
	{
		// difference.y = 0.0f;
		(&V_18)->___y_3 = (0.0f);
		// difference.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_18), NULL);
		// if (difference == Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = V_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_85;
		L_85 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_83, L_84, NULL);
		if (L_85)
		{
			goto IL_018d;
		}
	}

IL_016e:
	{
		// difference.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_18), NULL);
		// float angle = Vector3.Dot(direction, difference);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = ___1_direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87 = V_18;
		float L_88;
		L_88 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_86, L_87, NULL);
		V_19 = L_88;
		// if (angle < lowAngle)
		float L_89 = V_19;
		float L_90 = V_8;
		if ((!(((float)L_89) < ((float)L_90))))
		{
			goto IL_018d;
		}
	}
	{
		// lowAngle = angle;
		float L_91 = V_19;
		V_8 = L_91;
		// lowIndex = hitIndex;
		int32_t L_92 = V_17;
		V_10 = L_92;
	}

IL_018d:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_93 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_93, 1));
	}

IL_0193:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_94 = V_17;
		int32_t L_95 = V_0;
		if ((((int32_t)L_94) < ((int32_t)L_95)))
		{
			goto IL_012c;
		}
	}
	{
		// if (!constrainVertical && lowIndex != -1)
		bool L_96 = ___7_constrainVertical;
		if (L_96)
		{
			goto IL_0260;
		}
	}
	{
		int32_t L_97 = V_10;
		if ((((int32_t)L_97) == ((int32_t)(-1))))
		{
			goto IL_0260;
		}
	}
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_20 = 0;
		goto IL_0258;
	}

IL_01af:
	{
		// if (hits[hitIndex] == false || hitIndex == closestPointIdx || hitIndex == lowIndex)
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_98 = ___4_hits;
		int32_t L_99 = V_20;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		uint8_t L_101 = (uint8_t)(L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		if (!L_101)
		{
			goto IL_0252;
		}
	}
	{
		int32_t L_102 = V_20;
		int32_t L_103 = V_3;
		if ((((int32_t)L_102) == ((int32_t)L_103)))
		{
			goto IL_0252;
		}
	}
	{
		int32_t L_104 = V_20;
		int32_t L_105 = V_10;
		if ((((int32_t)L_104) == ((int32_t)L_105)))
		{
			goto IL_0252;
		}
	}
	{
		// float dot = Mathf.Abs(Vector3.Dot((positions[hitIndex] - closestPoint).normalized, (positions[lowIndex] - closestPoint).normalized));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_106 = ___2_positions;
		int32_t L_107 = V_20;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_109, L_110, NULL);
		V_16 = L_111;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_16), NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_113 = ___2_positions;
		int32_t L_114 = V_10;
		NullCheck(L_113);
		int32_t L_115 = L_114;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
		L_118 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_116, L_117, NULL);
		V_16 = L_118;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_16), NULL);
		float L_120;
		L_120 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_112, L_119, NULL);
		float L_121;
		L_121 = fabsf(L_120);
		// if (dot > MaxDot)
		if ((((float)L_121) > ((float)(0.970000029f))))
		{
			goto IL_0252;
		}
	}
	{
		// float nextAngle = Mathf.Abs(Vector3.Dot(direction, Vector3.Cross(positions[lowIndex] - closestPoint, positions[hitIndex] - closestPoint).normalized));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122 = ___1_direction;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_123 = ___2_positions;
		int32_t L_124 = V_10;
		NullCheck(L_123);
		int32_t L_125 = L_124;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128;
		L_128 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_126, L_127, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_129 = ___2_positions;
		int32_t L_130 = V_20;
		NullCheck(L_129);
		int32_t L_131 = L_130;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134;
		L_134 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_132, L_133, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
		L_135 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_128, L_134, NULL);
		V_16 = L_135;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136;
		L_136 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_16), NULL);
		float L_137;
		L_137 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_122, L_136, NULL);
		float L_138;
		L_138 = fabsf(L_137);
		V_21 = L_138;
		// if (nextAngle > highAngle)
		float L_139 = V_21;
		float L_140 = V_9;
		if ((!(((float)L_139) > ((float)L_140))))
		{
			goto IL_0252;
		}
	}
	{
		// highAngle = nextAngle;
		float L_141 = V_21;
		V_9 = L_141;
		// highIndex = hitIndex;
		int32_t L_142 = V_20;
		V_11 = L_142;
	}

IL_0252:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_143 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_0258:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_144 = V_20;
		int32_t L_145 = V_0;
		if ((((int32_t)L_144) < ((int32_t)L_145)))
		{
			goto IL_01af;
		}
	}

IL_0260:
	{
		// if (lowIndex != -1)
		int32_t L_146 = V_10;
		if ((((int32_t)L_146) == ((int32_t)(-1))))
		{
			goto IL_0337;
		}
	}
	{
		// if (debugEnabled)
		bool L_147 = __this->___debugEnabled_30;
		if (!L_147)
		{
			goto IL_0284;
		}
	}
	{
		// Debug.DrawLine(closestPoint, positions[lowIndex], Color.red);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_149 = ___2_positions;
		int32_t L_150 = V_10;
		NullCheck(L_149);
		int32_t L_151 = L_150;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_153;
		L_153 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_148, L_152, L_153, NULL);
	}

IL_0284:
	{
		// if (highIndex != -1)
		int32_t L_154 = V_11;
		if ((((int32_t)L_154) == ((int32_t)(-1))))
		{
			goto IL_02d5;
		}
	}
	{
		// if (debugEnabled)
		bool L_155 = __this->___debugEnabled_30;
		if (!L_155)
		{
			goto IL_02a5;
		}
	}
	{
		// Debug.DrawLine(closestPoint, positions[highIndex], Color.green);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_156 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_157 = ___2_positions;
		int32_t L_158 = V_11;
		NullCheck(L_157);
		int32_t L_159 = L_158;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_161;
		L_161 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_156, L_160, L_161, NULL);
	}

IL_02a5:
	{
		// placementNormal = Vector3.Cross(positions[lowIndex] - closestPoint, positions[highIndex] - closestPoint).normalized;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_162 = ___2_positions;
		int32_t L_163 = V_10;
		NullCheck(L_162);
		int32_t L_164 = L_163;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_166 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_167;
		L_167 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_165, L_166, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_168 = ___2_positions;
		int32_t L_169 = V_11;
		NullCheck(L_168);
		int32_t L_170 = L_169;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_172 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_173;
		L_173 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_171, L_172, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_174;
		L_174 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_167, L_173, NULL);
		V_16 = L_174;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_175;
		L_175 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_16), NULL);
		V_12 = L_175;
		goto IL_0318;
	}

IL_02d5:
	{
		// Vector3 planeUp = Vector3.Cross(positions[lowIndex] - closestPoint, direction);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_176 = ___2_positions;
		int32_t L_177 = V_10;
		NullCheck(L_176);
		int32_t L_178 = L_177;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_180 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_181;
		L_181 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_179, L_180, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_182 = ___1_direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_183;
		L_183 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_181, L_182, NULL);
		V_22 = L_183;
		// placementNormal = Vector3.Cross(positions[lowIndex] - closestPoint, constrainVertical ? Vector3.up : planeUp).normalized;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_184 = ___2_positions;
		int32_t L_185 = V_10;
		NullCheck(L_184);
		int32_t L_186 = L_185;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_187 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_188 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_189;
		L_189 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_187, L_188, NULL);
		bool L_190 = ___7_constrainVertical;
		G_B47_0 = L_189;
		if (L_190)
		{
			G_B48_0 = L_189;
			goto IL_0303;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_191 = V_22;
		G_B49_0 = L_191;
		G_B49_1 = G_B47_0;
		goto IL_0308;
	}

IL_0303:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_192;
		L_192 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		G_B49_0 = L_192;
		G_B49_1 = G_B48_0;
	}

IL_0308:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_193;
		L_193 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(G_B49_1, G_B49_0, NULL);
		V_16 = L_193;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_194;
		L_194 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_16), NULL);
		V_12 = L_194;
	}

IL_0318:
	{
		// if (debugEnabled)
		bool L_195 = __this->___debugEnabled_30;
		if (!L_195)
		{
			goto IL_0344;
		}
	}
	{
		// Debug.DrawLine(closestPoint, closestPoint + placementNormal, Color.blue);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_196 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_197 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_198 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_199;
		L_199 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_197, L_198, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_200;
		L_200 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_196, L_199, L_200, NULL);
		goto IL_0344;
	}

IL_0337:
	{
		// placementNormal = direction * -1.0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_201 = ___1_direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_202;
		L_202 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_201, (-1.0f), NULL);
		V_12 = L_202;
	}

IL_0344:
	{
		// if (Vector3.Dot(placementNormal, direction) > 0.0f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_203 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_204 = ___1_direction;
		float L_205;
		L_205 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_203, L_204, NULL);
		if ((!(((float)L_205) > ((float)(0.0f)))))
		{
			goto IL_0361;
		}
	}
	{
		// placementNormal *= -1.0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_206 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_207;
		L_207 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_206, (-1.0f), NULL);
		V_12 = L_207;
	}

IL_0361:
	{
		// plane = new Plane(placementNormal, closestPoint);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_208 = ___9_plane;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_209 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_210 = V_6;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_211;
		memset((&L_211), 0, sizeof(L_211));
		Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2((&L_211), L_209, L_210, /*hidden argument*/NULL);
		*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)L_208 = L_211;
		// if (debugEnabled)
		bool L_212 = __this->___debugEnabled_30;
		if (!L_212)
		{
			goto IL_0387;
		}
	}
	{
		// Debug.DrawRay(closestPoint, placementNormal, Color.cyan);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_213 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_214 = V_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_215;
		L_215 = Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53(L_213, L_214, L_215, NULL);
	}

IL_0387:
	{
		// if (!useClosestDistance && closestPointIdx >= 0)
		bool L_216 = ___8_useClosestDistance;
		if (L_216)
		{
			goto IL_03d2;
		}
	}
	{
		int32_t L_217 = V_3;
		if ((((int32_t)L_217) < ((int32_t)0)))
		{
			goto IL_03d2;
		}
	}
	{
		// if (plane.Raycast(new Ray(origin, originalDirection), out float centerPlaneDistance) || !centerPlaneDistance.Equals(0.0f))
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_218 = ___9_plane;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_219 = ___0_origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_220 = V_1;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_221;
		memset((&L_221), 0, sizeof(L_221));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_221), L_219, L_220, /*hidden argument*/NULL);
		bool L_222;
		L_222 = Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0(L_218, L_221, (&V_23), NULL);
		if (L_222)
		{
			goto IL_03af;
		}
	}
	{
		bool L_223;
		L_223 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_23), (0.0f), NULL);
		if (L_223)
		{
			goto IL_03c8;
		}
	}

IL_03af:
	{
		// closestDistance = Mathf.Clamp(centerPlaneDistance, closestDistance, farthestDistance + assetWidth * 0.5f);
		float* L_224 = ___10_closestDistance;
		float L_225 = V_23;
		float* L_226 = ___10_closestDistance;
		float L_227 = *((float*)L_226);
		float L_228 = V_4;
		float L_229 = ___5_assetWidth;
		float L_230;
		L_230 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_225, L_227, ((float)il2cpp_codegen_add(L_228, ((float)il2cpp_codegen_multiply(L_229, (0.5f))))), NULL);
		*((float*)L_224) = (float)L_230;
		return;
	}

IL_03c8:
	{
		// Debug.LogError("FindPlacementPlane: Not expected to have the center point not intersect the plane.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral0C5F77CBC6B48EEFA86CFC18E2E3A9CDF9071345, NULL);
	}

IL_03d2:
	{
		// }
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::IsNormalVertical(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_IsNormalVertical_m6F94E5DB20E80D14EFF2234B10AFA98E1CC2E207 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_normal, const RuntimeMethod* method) 
{
	{
		// private static bool IsNormalVertical(Vector3 normal) => 1f - Mathf.Abs(normal.y) < 0.01f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_normal;
		float L_1 = L_0.___y_3;
		float L_2;
		L_2 = fabsf(L_1);
		return (bool)((((float)((float)il2cpp_codegen_subtract((1.0f), L_2))) < ((float)(0.00999999978f)))? 1 : 0);
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism__ctor_m676E501A1DDFF09D470935D1F0A82D42281390D4 (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private LayerMask[] magneticSurfaces = { UnityEngine.Physics.DefaultRaycastLayers };
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_0 = (LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99*)(LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99*)SZArrayNew(LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99_il2cpp_TypeInfo_var, (uint32_t)1);
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_1 = L_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_2;
		L_2 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(((int32_t)-5), NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB)L_2);
		__this->___magneticSurfaces_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___magneticSurfaces_14), (void*)L_1);
		// private float maxRaycastDistance = 50.0f;
		__this->___maxRaycastDistance_15 = (50.0f);
		// private float closestDistance = 0.5f;
		__this->___closestDistance_16 = (0.5f);
		// private float surfaceNormalOffset = 0.5f;
		__this->___surfaceNormalOffset_17 = (0.5f);
		// private int boxRaysPerEdge = 3;
		__this->___boxRaysPerEdge_20 = 3;
		// private float maximumNormalVariance = 0.5f;
		__this->___maximumNormalVariance_22 = (0.5f);
		// private float sphereSize = 1.0f;
		__this->___sphereSize_23 = (1.0f);
		// private OrientationMode orientationMode = OrientationMode.TrackedTarget;
		__this->___orientationMode_27 = 1;
		// private float orientationBlend = 0.65f;
		__this->___orientationBlend_28 = (0.649999976f);
		// private bool keepOrientationVertical = true;
		__this->___keepOrientationVertical_29 = (bool)1;
		Solver__ctor_m61553BCC86AA46B55E44C1999BA45487652A09D8(__this, NULL);
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism__cctor_mCFB34DBF88C0C2E917FDAA1671C01FC46DB5EA34 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61DB809903C95AF153BB9D39E15FCAC1EFD46716);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker SolverUpdatePerfMarker =
		//     new ProfilerMarker("[MRTK] SurfaceMagnetism.SolverUpdate");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral61DB809903C95AF153BB9D39E15FCAC1EFD46716, /*hidden argument*/NULL);
		((SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2_StaticFields*)il2cpp_codegen_static_fields_for(SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2_il2cpp_TypeInfo_var))->___SolverUpdatePerfMarker_35 = L_0;
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
// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_AutoStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_AutoStart_m1A03C3E5A137B7254387C7368CE0667E22408234 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => autoStart;
		bool L_0 = __this->___autoStart_14;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_AutoStart(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_AutoStart_mB4A51DA7EF5E1D280A0890DBE660F5FF5309AED4 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => autoStart = value;
		bool L_0 = ___0_value;
		__this->___autoStart_14 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_DefaultPlacementDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultPlacementDistance_mECF30C634C0AA40353172B431457CB7920687D53 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => defaultPlacementDistance;
		float L_0 = __this->___defaultPlacementDistance_15;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_DefaultPlacementDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_DefaultPlacementDistance_mB3B52AE709C94B2C5527EA0F69E335764B0FBB24 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => defaultPlacementDistance = value;
		float L_0 = ___0_value;
		__this->___defaultPlacementDistance_15 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_MaxRaycastDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_MaxRaycastDistance_mC27CD8EB475448F094E31D70061C69B144F93D16 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->___maxRaycastDistance_16;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_MaxRaycastDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_MaxRaycastDistance_m9F437F942476CDB1C55E6828940EFC72C48F629C (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => maxRaycastDistance = value;
		float L_0 = ___0_value;
		__this->___maxRaycastDistance_16 = L_0;
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_IsBeingPlaced()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_IsBeingPlaced_m4C33C2667FE902E4F9512B3839222204EE91CAD0 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = __this->___U3CIsBeingPlacedU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_IsBeingPlaced(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_IsBeingPlaced_m8B793F411B97FC6A8743BD2F1AEE8E504EB02A86 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = ___0_value;
		__this->___U3CIsBeingPlacedU3Ek__BackingField_17 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_SurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_SurfaceNormalOffset_mFE57D19E104432E36782B616863941CE158BDD76 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => surfaceNormalOffset;
		float L_0 = __this->___surfaceNormalOffset_18;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_SurfaceNormalOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_SurfaceNormalOffset_mB070C46100A4A13254A787C9D9C45D3C93FEAAC7 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// surfaceNormalOffset = value;
		float L_0 = ___0_value;
		__this->___surfaceNormalOffset_18 = L_0;
		// }
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_UseDefaultSurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_UseDefaultSurfaceNormalOffset_m1F7D47BC0EF1D11D3430CE724483983F661DE50A (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => useDefaultSurfaceNormalOffset;
		bool L_0 = __this->___useDefaultSurfaceNormalOffset_19;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_UseDefaultSurfaceNormalOffset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_UseDefaultSurfaceNormalOffset_m6CD00CD03CC500D1D41874528712D3BD920B6B76 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => useDefaultSurfaceNormalOffset = value;
		bool L_0 = ___0_value;
		__this->___useDefaultSurfaceNormalOffset_19 = L_0;
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_KeepOrientationVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_KeepOrientationVertical_mFBC232E20AB6FCD31DAED7F156E342E122F08894 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->___keepOrientationVertical_20;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_KeepOrientationVertical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_KeepOrientationVertical_m036D4ED8C5B119320FDE5D2069F444518F2999B7 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => keepOrientationVertical = value;
		bool L_0 = ___0_value;
		__this->___keepOrientationVertical_20 = L_0;
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_RotateAccordingToSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_RotateAccordingToSurface_m6A8D4AD35DAC97180868A266579A28D42201A1DA (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => rotateAccordingToSurface;
		bool L_0 = __this->___rotateAccordingToSurface_21;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_RotateAccordingToSurface(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_RotateAccordingToSurface_mDD60A9EE4F961C585E1234421A27EF6A00658091 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => rotateAccordingToSurface = value;
		bool L_0 = ___0_value;
		__this->___rotateAccordingToSurface_21 = L_0;
		return;
	}
}
// UnityEngine.LayerMask[] MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_MagneticSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* TapToPlace_get_MagneticSurfaces_mFB0C350CB84615E279CF943AC322F881A1286ABD (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => magneticSurfaces;
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_0 = __this->___magneticSurfaces_22;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_MagneticSurfaces(UnityEngine.LayerMask[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_MagneticSurfaces_m58BBE5C3F4B0029F0E8446C88E87A3630C5BAFD4 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => magneticSurfaces = value;
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_0 = ___0_value;
		__this->___magneticSurfaces_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___magneticSurfaces_22), (void*)L_0);
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_DebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_DebugEnabled_mFDCD495BBF86FCE979CCA60DDFB321C2B245305B (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => debugEnabled;
		bool L_0 = __this->___debugEnabled_23;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_DebugEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_DebugEnabled_mBF8BEABEEC8CFEC3E162A6E67D9E68ADD0D2D1D8 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => debugEnabled = value;
		bool L_0 = ___0_value;
		__this->___debugEnabled_23 = L_0;
		return;
	}
}
// UnityEngine.Events.UnityEvent MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_OnPlacingStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* TapToPlace_get_OnPlacingStarted_m3D959E332A0FEB8C3B90205F82811D36E0923BCC (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => onPlacingStarted;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onPlacingStarted_24;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_OnPlacingStarted(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_OnPlacingStarted_m7442A999D075ADDE708589A52443479D2682DACF (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => onPlacingStarted = value;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = ___0_value;
		__this->___onPlacingStarted_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPlacingStarted_24), (void*)L_0);
		return;
	}
}
// UnityEngine.Events.UnityEvent MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_OnPlacingStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* TapToPlace_get_OnPlacingStopped_mFA06B5ADFCA9847AA6039A30B3969CE1F165193A (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => onPlacingStopped;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onPlacingStopped_25;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_OnPlacingStopped(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_OnPlacingStopped_m69676E4DFC966FEBF676A6AA992D12D503710565 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => onPlacingStopped = value;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = ___0_value;
		__this->___onPlacingStopped_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPlacingStopped_25), (void*)L_0);
		return;
	}
}
// System.Int32 MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_GameObjectLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TapToPlace_get_GameObjectLayer_mC6938A2AFB978A140AE7052B2DE0A5D04DBD4237 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = __this->___U3CGameObjectLayerU3Ek__BackingField_26;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_GameObjectLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_GameObjectLayer_mFF3C7D258D48762831B98E5C376E3FF935FABA56 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = ___0_value;
		__this->___U3CGameObjectLayerU3Ek__BackingField_26 = L_0;
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_IsColliderPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_IsColliderPresent_mD160BB8EA3CF43D6C7984C35D0CA8DC779F43AD3 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected internal bool IsColliderPresent => gameObject != null && gameObject.GetComponent<Collider>() != null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3;
		L_3 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_2, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_4;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_DefaultSurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultSurfaceNormalOffset_m1FEE88D8881AE0F4547CF5AAFBBE4715E2D77E00 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private float DefaultSurfaceNormalOffset => gameObject.GetComponent<Collider>().bounds.extents.z;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_0, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		NullCheck(L_1);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_2;
		L_2 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_0), NULL);
		float L_4 = L_3.___z_4;
		return L_4;
	}
}
// MixedReality.Toolkit.RayStep MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_CurrentRay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5 TapToPlace_get_CurrentRay_m276F438D59F7CB11D14FCDC51329E072B6ACB8EE (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => currentRay;
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5 L_0 = __this->___currentRay_28;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_CurrentRay(MixedReality.Toolkit.RayStep)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_CurrentRay_mE571A568B47689A03DC5D10BE2043104931EC98F (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5 ___0_value, const RuntimeMethod* method) 
{
	{
		// set => currentRay = value;
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5 L_0 = ___0_value;
		__this->___currentRay_28 = L_0;
		return;
	}
}
// System.Boolean MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_DidHitSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_DidHitSurface_m088E003F412A5DE739A0F446AE1E5C75A3F333E0 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// protected bool DidHitSurface { get; set; }
		bool L_0 = __this->___U3CDidHitSurfaceU3Ek__BackingField_29;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_DidHitSurface(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_DidHitSurface_m915248DD158C0A40BAD11DEDF82AA372E29C1F2E (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// protected bool DidHitSurface { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CDidHitSurfaceU3Ek__BackingField_29 = L_0;
		return;
	}
}
// UnityEngine.RaycastHit MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_CurrentHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 TapToPlace_get_CurrentHit_m65418F37B9540864F6045922E3AC9C5B411228F7 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => currentHit;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = __this->___currentHit_30;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_CurrentHit(UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_CurrentHit_m059109585CFA6CBFEEE5906832B179D529B7AF48 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_value, const RuntimeMethod* method) 
{
	{
		// set => currentHit = value;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = ___0_value;
		__this->___currentHit_30 = L_0;
		return;
	}
}
// System.Single MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_DoubleClickTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_DoubleClickTimeout_m952BEBD21C5A7AC2883B5FF4FCC619A7C2B635F8 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// protected float DoubleClickTimeout { get; set; }= 0.5f;
		float L_0 = __this->___U3CDoubleClickTimeoutU3Ek__BackingField_32;
		return L_0;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_DoubleClickTimeout(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_DoubleClickTimeout_mCF2F5B28B64519953A54D5A0FBE74C41829DD8F0 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// protected float DoubleClickTimeout { get; set; }= 0.5f;
		float L_0 = ___0_value;
		__this->___U3CDoubleClickTimeoutU3Ek__BackingField_32 = L_0;
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_Start_m893019C321D660F54600BA91E1B1F91A51764223 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral386364D784E9EBB79BC2A529A56F1826D1CD16F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		Solver_Start_m96B0F3C28A0EAD56022300ADDC07F7842F4E707F(__this, NULL);
		// UnityPhysics.SyncTransforms();
		Physics_SyncTransforms_mB88B6B27C24234D18846F614F9AE674976A5F1CA(NULL);
		// ignoreRaycastLayer = LayerMask.NameToLayer("Ignore Raycast");
		int32_t L_0;
		L_0 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral386364D784E9EBB79BC2A529A56F1826D1CD16F6, NULL);
		__this->___ignoreRaycastLayer_27 = L_0;
		// startCalled = true;
		__this->___startCalled_33 = (bool)1;
		// if (AutoStart || placementRequested)
		bool L_1;
		L_1 = TapToPlace_get_AutoStart_m1A03C3E5A137B7254387C7368CE0667E22408234_inline(__this, NULL);
		if (L_1)
		{
			goto IL_0032;
		}
	}
	{
		bool L_2 = __this->___placementRequested_34;
		if (!L_2)
		{
			goto IL_0039;
		}
	}

IL_0032:
	{
		// StartPlacement();
		TapToPlace_StartPlacement_mFBB44C28EBA05357BFAF3BE5C868C8469FCA6A26(__this, NULL);
		return;
	}

IL_0039:
	{
		// SolverHandler.UpdateSolvers = false;
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_3 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_3);
		SolverHandler_set_UpdateSolvers_m01A77F690FEC55D269A36D8E8C5BEF54189E9360_inline(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_OnDisable_m40069C0C5CC4A45EFE24A994976F4354C7A6D44D (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// StopPlacement();
		TapToPlace_StopPlacement_mA94190CFA33CE2B95FA3BB6F10BFDCD51EC8AAEF(__this, NULL);
		// base.OnDisable();
		Solver_OnDisable_m121C931E5C31898D9B7F8C10DE7CC389E4610242(__this, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::StartPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StartPlacement_mFBB44C28EBA05357BFAF3BE5C868C8469FCA6A26 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B9_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B8_0 = NULL;
	{
		// if (Time.time != 0 && (Time.time - lastTimeClicked) < DoubleClickTimeout)
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0021;
		}
	}
	{
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_2 = __this->___lastTimeClicked_31;
		float L_3;
		L_3 = TapToPlace_get_DoubleClickTimeout_m952BEBD21C5A7AC2883B5FF4FCC619A7C2B635F8_inline(__this, NULL);
		if ((!(((float)((float)il2cpp_codegen_subtract(L_1, L_2))) < ((float)L_3))))
		{
			goto IL_0021;
		}
	}
	{
		// return;
		return;
	}

IL_0021:
	{
		// lastTimeClicked = Time.time;
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastTimeClicked_31 = L_4;
		// using (StartPlacementPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_5 = ((TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_il2cpp_TypeInfo_var))->___StartPlacementPerfMarker_37;
		V_1 = L_5;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_6;
		L_6 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a1:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (!startCalled)
				bool L_7 = __this->___startCalled_33;
				if (L_7)
				{
					goto IL_004b_1;
				}
			}
			{
				// placementRequested = true;
				__this->___placementRequested_34 = (bool)1;
				// return;
				goto IL_00af;
			}

IL_004b_1:
			{
				// if (!IsBeingPlaced)
				bool L_8;
				L_8 = TapToPlace_get_IsBeingPlaced_m4C33C2667FE902E4F9512B3839222204EE91CAD0_inline(__this, NULL);
				if (L_8)
				{
					goto IL_009f_1;
				}
			}
			{
				// GameObjectLayer = gameObject.layer;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
				L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
				NullCheck(L_9);
				int32_t L_10;
				L_10 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_9, NULL);
				TapToPlace_set_GameObjectLayer_mFF3C7D258D48762831B98E5C376E3FF935FABA56_inline(__this, L_10, NULL);
				// gameObject.layer = ignoreRaycastLayer;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
				L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
				int32_t L_12 = __this->___ignoreRaycastLayer_27;
				NullCheck(L_11);
				GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_11, L_12, NULL);
				// SolverHandler.UpdateSolvers = true;
				SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_13 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
				NullCheck(L_13);
				SolverHandler_set_UpdateSolvers_m01A77F690FEC55D269A36D8E8C5BEF54189E9360_inline(L_13, (bool)1, NULL);
				// IsBeingPlaced = true;
				TapToPlace_set_IsBeingPlaced_m8B793F411B97FC6A8743BD2F1AEE8E504EB02A86_inline(__this, (bool)1, NULL);
				// OnPlacingStarted?.Invoke();
				UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_14;
				L_14 = TapToPlace_get_OnPlacingStarted_m3D959E332A0FEB8C3B90205F82811D36E0923BCC_inline(__this, NULL);
				UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_15 = L_14;
				G_B8_0 = L_15;
				if (L_15)
				{
					G_B9_0 = L_15;
					goto IL_0094_1;
				}
			}
			{
				goto IL_0099_1;
			}

IL_0094_1:
			{
				NullCheck(G_B9_0);
				UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B9_0, NULL);
			}

IL_0099_1:
			{
				// RegisterPlacementAction();
				TapToPlace_RegisterPlacementAction_mC2CAF6910FB98CE11EC368DC5E204961C8585D9F(__this, NULL);
			}

IL_009f_1:
			{
				// }
				goto IL_00af;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00af:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::StopPlacementViaPerformedAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StopPlacementViaPerformedAction_mEF8850E2A5B705BAF3B760BFB1151FAB57BA0943 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___0_context, const RuntimeMethod* method) 
{
	{
		// StopPlacement();
		TapToPlace_StopPlacement_mA94190CFA33CE2B95FA3BB6F10BFDCD51EC8AAEF(__this, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::StopPlacementViaSelect(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StopPlacementViaSelect_m2E8DFC996F04B9E81049717846E8C45582628969 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___0_args, const RuntimeMethod* method) 
{
	{
		// StopPlacement();
		TapToPlace_StopPlacement_mA94190CFA33CE2B95FA3BB6F10BFDCD51EC8AAEF(__this, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::StopPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StopPlacement_mA94190CFA33CE2B95FA3BB6F10BFDCD51EC8AAEF (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B6_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B5_0 = NULL;
	{
		// if ((Time.time - lastTimeClicked) < DoubleClickTimeout)
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___lastTimeClicked_31;
		float L_2;
		L_2 = TapToPlace_get_DoubleClickTimeout_m952BEBD21C5A7AC2883B5FF4FCC619A7C2B635F8_inline(__this, NULL);
		if ((!(((float)((float)il2cpp_codegen_subtract(L_0, L_1))) < ((float)L_2))))
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// lastTimeClicked = Time.time;
		float L_3;
		L_3 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastTimeClicked_31 = L_3;
		// using (StopPlacementPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_4 = ((TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_il2cpp_TypeInfo_var))->___StopPlacementPerfMarker_38;
		V_1 = L_4;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_5;
		L_5 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0073:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (IsBeingPlaced)
				bool L_6;
				L_6 = TapToPlace_get_IsBeingPlaced_m4C33C2667FE902E4F9512B3839222204EE91CAD0_inline(__this, NULL);
				if (!L_6)
				{
					goto IL_0071_1;
				}
			}
			{
				// gameObject.layer = GameObjectLayer;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
				int32_t L_8;
				L_8 = TapToPlace_get_GameObjectLayer_mC6938A2AFB978A140AE7052B2DE0A5D04DBD4237_inline(__this, NULL);
				NullCheck(L_7);
				GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_7, L_8, NULL);
				// SolverHandler.UpdateSolvers = false;
				SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_9 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
				NullCheck(L_9);
				SolverHandler_set_UpdateSolvers_m01A77F690FEC55D269A36D8E8C5BEF54189E9360_inline(L_9, (bool)0, NULL);
				// IsBeingPlaced = false;
				TapToPlace_set_IsBeingPlaced_m8B793F411B97FC6A8743BD2F1AEE8E504EB02A86_inline(__this, (bool)0, NULL);
				// OnPlacingStopped?.Invoke();
				UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_10;
				L_10 = TapToPlace_get_OnPlacingStopped_mFA06B5ADFCA9847AA6039A30B3969CE1F165193A_inline(__this, NULL);
				UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11 = L_10;
				G_B5_0 = L_11;
				if (L_11)
				{
					G_B6_0 = L_11;
					goto IL_0066_1;
				}
			}
			{
				goto IL_006b_1;
			}

IL_0066_1:
			{
				NullCheck(G_B6_0);
				UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B6_0, NULL);
			}

IL_006b_1:
			{
				// UnregisterPlacementAction();
				TapToPlace_UnregisterPlacementAction_m7357025B43A8F667E06F77D37654E23308441CF4(__this, NULL);
			}

IL_0071_1:
			{
				// }
				goto IL_0081;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_SolverUpdate_mBEECB23DB00348B2666A80F659EE70A328FCE265 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// using (SolverUpdatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_il2cpp_TypeInfo_var))->___SolverUpdatePerfMarker_39;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (SolverHandler.TransformTarget != null)
				SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_2 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
				NullCheck(L_2);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
				L_3 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_2, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_4;
				L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_4)
				{
					goto IL_0033_1;
				}
			}
			{
				// PerformRaycast();
				VirtualActionInvoker0::Invoke(12 /* System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::PerformRaycast() */, __this);
				// SetPosition();
				VirtualActionInvoker0::Invoke(13 /* System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::SetPosition() */, __this);
				// SetRotation();
				VirtualActionInvoker0::Invoke(14 /* System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::SetRotation() */, __this);
			}

IL_0033_1:
			{
				// }
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::PerformRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_PerformRaycast_m06BFA2E38E66AA062C11C3C22FD118C3FBFE3F68 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityRaycaster_t684278FB530FB57C502613442034953C1D139E83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// using (PerformRaycastPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_il2cpp_TypeInfo_var))->___PerformRaycastPerfMarker_40;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0069:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Transform transform = SolverHandler.TransformTarget;
			SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_2 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
			NullCheck(L_2);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
			L_3 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_2, NULL);
			V_2 = L_3;
			// Vector3 origin = transform.position;
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_2;
			NullCheck(L_4);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
			L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
			V_3 = L_5;
			// Vector3 endpoint = transform.position + transform.forward;
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_2;
			NullCheck(L_6);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
			L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_2;
			NullCheck(L_8);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
			L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
			L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_9, NULL);
			V_4 = L_10;
			// currentRay.UpdateRayStep(in origin, in endpoint);
			RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* L_11 = (RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5*)(&__this->___currentRay_28);
			RayStep_UpdateRayStep_m9B7B3E781E7C620B11DC90520AC285B8E5ED2305(L_11, (&V_3), (&V_4), NULL);
			// DidHitSurface = MixedRealityRaycaster.RaycastSimplePhysicsStep(CurrentRay, MaxRaycastDistance, MagneticSurfaces, false, out currentHit);
			RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5 L_12;
			L_12 = TapToPlace_get_CurrentRay_m276F438D59F7CB11D14FCDC51329E072B6ACB8EE_inline(__this, NULL);
			float L_13;
			L_13 = TapToPlace_get_MaxRaycastDistance_mC27CD8EB475448F094E31D70061C69B144F93D16_inline(__this, NULL);
			LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_14;
			L_14 = TapToPlace_get_MagneticSurfaces_mFB0C350CB84615E279CF943AC322F881A1286ABD_inline(__this, NULL);
			RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_15 = (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)(&__this->___currentHit_30);
			il2cpp_codegen_runtime_class_init_inline(MixedRealityRaycaster_t684278FB530FB57C502613442034953C1D139E83_il2cpp_TypeInfo_var);
			bool L_16;
			L_16 = MixedRealityRaycaster_RaycastSimplePhysicsStep_m0D79CB7C531904B99B02983EE18BC12D4DA625C8(L_12, L_13, L_14, (bool)0, L_15, NULL);
			TapToPlace_set_DidHitSurface_m915248DD158C0A40BAD11DEDF82AA372E29C1F2E_inline(__this, L_16, NULL);
			// }
			goto IL_0077;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::SetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_SetPosition_m72BE4170CC2C558314E4BD14DDF292F032AFD72F (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float G_B4_0 = 0.0f;
	{
		// if (DidHitSurface)
		bool L_0;
		L_0 = TapToPlace_get_DidHitSurface_m088E003F412A5DE739A0F446AE1E5C75A3F333E0_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		// GoalPosition = CurrentHit.point;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_1;
		L_1 = TapToPlace_get_CurrentHit_m65418F37B9540864F6045922E3AC9C5B411228F7_inline(__this, NULL);
		V_1 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		Solver_set_GoalPosition_m51BBA4824D71ABC8189A6A6661A09942E5A72F76(__this, L_2, NULL);
		// float currentSurfaceNormalOffset = UseDefaultSurfaceNormalOffset ? DefaultSurfaceNormalOffset : SurfaceNormalOffset;
		bool L_3;
		L_3 = TapToPlace_get_UseDefaultSurfaceNormalOffset_m1F7D47BC0EF1D11D3430CE724483983F661DE50A_inline(__this, NULL);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		float L_4;
		L_4 = TapToPlace_get_SurfaceNormalOffset_mFE57D19E104432E36782B616863941CE158BDD76_inline(__this, NULL);
		G_B4_0 = L_4;
		goto IL_0032;
	}

IL_002c:
	{
		float L_5;
		L_5 = TapToPlace_get_DefaultSurfaceNormalOffset_m1FEE88D8881AE0F4547CF5AAFBBE4715E2D77E00(__this, NULL);
		G_B4_0 = L_5;
	}

IL_0032:
	{
		V_0 = G_B4_0;
		// AddOffset(CurrentHit.normal * currentSurfaceNormalOffset);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_6;
		L_6 = TapToPlace_get_CurrentHit_m65418F37B9540864F6045922E3AC9C5B411228F7_inline(__this, NULL);
		V_1 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_1), NULL);
		float L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		VirtualActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(11 /* System.Void MixedReality.Toolkit.SpatialManipulation.Solver::AddOffset(UnityEngine.Vector3) */, __this, L_9);
		return;
	}

IL_004e:
	{
		// GoalPosition = SolverHandler.TransformTarget.position + (SolverHandler.TransformTarget.forward * DefaultPlacementDistance);
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_10 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* L_13 = ((Solver_t5BF456842BD6B3971A6718B914DD8B3343C96578*)__this)->___SolverHandler_13;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = SolverHandler_get_TransformTarget_m991C84C834FEBB9684D4970769104CEBA79E7F34(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_14, NULL);
		float L_16;
		L_16 = TapToPlace_get_DefaultPlacementDistance_mECF30C634C0AA40353172B431457CB7920687D53_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_17, NULL);
		Solver_set_GoalPosition_m51BBA4824D71ABC8189A6A6661A09942E5A72F76(__this, L_18, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::SetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_SetRotation_m2405BB63DCF7873646161F555F36732798AFF315 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 direction = CurrentRay.Direction;
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5 L_0;
		L_0 = TapToPlace_get_CurrentRay_m276F438D59F7CB11D14FCDC51329E072B6ACB8EE_inline(__this, NULL);
		V_2 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = RayStep_get_Direction_mF8BC5AD55BB22ED4410C8F6F3FC072842D270171_inline((&V_2), NULL);
		V_0 = L_1;
		// Vector3 surfaceNormal = CurrentHit.normal;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_2;
		L_2 = TapToPlace_get_CurrentHit_m65418F37B9540864F6045922E3AC9C5B411228F7_inline(__this, NULL);
		V_3 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_3), NULL);
		V_1 = L_3;
		// if (KeepOrientationVertical)
		bool L_4;
		L_4 = TapToPlace_get_KeepOrientationVertical_mFBC232E20AB6FCD31DAED7F156E342E122F08894_inline(__this, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// direction.y = 0;
		(&V_0)->___y_3 = (0.0f);
		// surfaceNormal.y = 0;
		(&V_1)->___y_3 = (0.0f);
	}

IL_003e:
	{
		// if (DidHitSurface && rotateAccordingToSurface)
		bool L_5;
		L_5 = TapToPlace_get_DidHitSurface_m088E003F412A5DE739A0F446AE1E5C75A3F333E0_inline(__this, NULL);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		bool L_6 = __this->___rotateAccordingToSurface_21;
		if (!L_6)
		{
			goto IL_0065;
		}
	}
	{
		// GoalRotation = Quaternion.LookRotation(-surfaceNormal, Vector3.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_8, L_9, NULL);
		Solver_set_GoalRotation_m1223612AC25A7DCBBEBDECEB63E41E5425580A88(__this, L_10, NULL);
		return;
	}

IL_0065:
	{
		// GoalRotation = Quaternion.LookRotation(direction, Vector3.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_11, L_12, NULL);
		Solver_set_GoalRotation_m1223612AC25A7DCBBEBDECEB63E41E5425580A88(__this, L_13, NULL);
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::RegisterPlacementAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_RegisterPlacementAction_mC2CAF6910FB98CE11EC368DC5E204961C8585D9F (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCache_1_FindFirstActiveInstance_mE59FFA961F15E3B3EC8A0DBED8A963491E47737C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7B6A479EF2BDF57F327EFB5AEC4285AE6F431D61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m47352F09D02E5FC7482850AD63DAD63051D03C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF79348DB8CECE372E5E3B0F7FAB741021D50B682_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB79B4BD45ADAE1FA30B5B09D09C7E9155C0A8F72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m256EFCAABB46D24687868F0C3836D3BB72B5952A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_StopPlacementViaPerformedAction_mEF8850E2A5B705BAF3B760BFB1151FAB57BA0943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_StopPlacementViaSelect_m2E8DFC996F04B9E81049717846E8C45582628969_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1811AA5C8D6DF915964E9D0E9CAFE3363BF78E4);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7FB3FB7F9BEBFAFD5D4A95FDE8494494B3C52A4C V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* V_2 = NULL;
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* V_3 = NULL;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	{
		// UnregisterPlacementAction();
		TapToPlace_UnregisterPlacementAction_m7357025B43A8F667E06F77D37654E23308441CF4(__this, NULL);
		// if (interactionManager == null)
		XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* L_0 = __this->___interactionManager_35;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// interactionManager = ComponentCache<XRInteractionManager>.FindFirstActiveInstance();
		XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* L_2;
		L_2 = ComponentCache_1_FindFirstActiveInstance_mE59FFA961F15E3B3EC8A0DBED8A963491E47737C(ComponentCache_1_FindFirstActiveInstance_mE59FFA961F15E3B3EC8A0DBED8A963491E47737C_RuntimeMethod_var);
		__this->___interactionManager_35 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactionManager_35), (void*)L_2);
		// if (interactionManager == null)
		XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* L_3 = __this->___interactionManager_35;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// Debug.LogError("No interaction manager found in scene. Please add an interaction manager to the scene.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralD1811AA5C8D6DF915964E9D0E9CAFE3363BF78E4, NULL);
	}

IL_0037:
	{
		// if (interactorsCache == null)
		List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35* L_5 = __this->___interactorsCache_36;
		if (L_5)
		{
			goto IL_004a;
		}
	}
	{
		// interactorsCache = new List<IXRInteractor>();
		List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35* L_6 = (List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35*)il2cpp_codegen_object_new(List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m256EFCAABB46D24687868F0C3836D3BB72B5952A(L_6, List_1__ctor_m256EFCAABB46D24687868F0C3836D3BB72B5952A_RuntimeMethod_var);
		__this->___interactorsCache_36 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactorsCache_36), (void*)L_6);
	}

IL_004a:
	{
		// interactionManager.GetRegisteredInteractors(interactorsCache);
		XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* L_7 = __this->___interactionManager_35;
		List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35* L_8 = __this->___interactorsCache_36;
		NullCheck(L_7);
		XRInteractionManager_GetRegisteredInteractors_m10AC6F729264FDD9B6323C7643C2744E08327613(L_7, L_8, NULL);
		// foreach (IXRInteractor interactor in interactorsCache)
		List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35* L_9 = __this->___interactorsCache_36;
		NullCheck(L_9);
		Enumerator_t7FB3FB7F9BEBFAFD5D4A95FDE8494494B3C52A4C L_10;
		L_10 = List_1_GetEnumerator_mB79B4BD45ADAE1FA30B5B09D09C7E9155C0A8F72(L_9, List_1_GetEnumerator_mB79B4BD45ADAE1FA30B5B09D09C7E9155C0A8F72_RuntimeMethod_var);
		V_0 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00db:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7B6A479EF2BDF57F327EFB5AEC4285AE6F431D61((&V_0), Enumerator_Dispose_m7B6A479EF2BDF57F327EFB5AEC4285AE6F431D61_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d0_1;
			}

IL_0069_1:
			{
				// foreach (IXRInteractor interactor in interactorsCache)
				RuntimeObject* L_11;
				L_11 = Enumerator_get_Current_mF79348DB8CECE372E5E3B0F7FAB741021D50B682_inline((&V_0), Enumerator_get_Current_mF79348DB8CECE372E5E3B0F7FAB741021D50B682_RuntimeMethod_var);
				V_1 = L_11;
				// if (interactor is XRBaseControllerInteractor controllerInteractor &&
				//     controllerInteractor.xrController is ActionBasedController actionController)
				RuntimeObject* L_12 = V_1;
				V_2 = ((XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E*)IsInstClass((RuntimeObject*)L_12, XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_il2cpp_TypeInfo_var));
				XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* L_13 = V_2;
				if (!L_13)
				{
					goto IL_00ac_1;
				}
			}
			{
				XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* L_14 = V_2;
				NullCheck(L_14);
				XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_15;
				L_15 = XRBaseControllerInteractor_get_xrController_m3BBC15462D296ED35A6F2E87D290B86BF9216650_inline(L_14, NULL);
				V_3 = ((ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68*)IsInstClass((RuntimeObject*)L_15, ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_il2cpp_TypeInfo_var));
				ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_16 = V_3;
				if (!L_16)
				{
					goto IL_00ac_1;
				}
			}
			{
				// actionController.selectAction.action.performed += StopPlacementViaPerformedAction;
				ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_17 = V_3;
				NullCheck(L_17);
				InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_18;
				L_18 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_17, NULL);
				V_4 = L_18;
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_19;
				L_19 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_4), NULL);
				Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_20 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
				NullCheck(L_20);
				Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_20, __this, (intptr_t)((void*)TapToPlace_StopPlacementViaPerformedAction_mEF8850E2A5B705BAF3B760BFB1151FAB57BA0943_RuntimeMethod_var), NULL);
				NullCheck(L_19);
				InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_19, L_20, NULL);
				goto IL_00d0_1;
			}

IL_00ac_1:
			{
				// else if (interactor is IXRSelectInteractor selectInteractor)
				RuntimeObject* L_21 = V_1;
				V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_21, IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1_il2cpp_TypeInfo_var));
				RuntimeObject* L_22 = V_5;
				if (!L_22)
				{
					goto IL_00d0_1;
				}
			}
			{
				// selectInteractor.selectEntered.AddListener(StopPlacementViaSelect);
				RuntimeObject* L_23 = V_5;
				NullCheck(L_23);
				SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_24;
				L_24 = InterfaceFuncInvoker0< SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* >::Invoke(0 /* UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor::get_selectEntered() */, IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1_il2cpp_TypeInfo_var, L_23);
				UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_25 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
				NullCheck(L_25);
				UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_25, __this, (intptr_t)((void*)TapToPlace_StopPlacementViaSelect_m2E8DFC996F04B9E81049717846E8C45582628969_RuntimeMethod_var), NULL);
				NullCheck(L_24);
				UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_24, L_25, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
			}

IL_00d0_1:
			{
				// foreach (IXRInteractor interactor in interactorsCache)
				bool L_26;
				L_26 = Enumerator_MoveNext_m47352F09D02E5FC7482850AD63DAD63051D03C67((&V_0), Enumerator_MoveNext_m47352F09D02E5FC7482850AD63DAD63051D03C67_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_0069_1;
				}
			}
			{
				goto IL_00e9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e9:
	{
		// }
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::UnregisterPlacementAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_UnregisterPlacementAction_m7357025B43A8F667E06F77D37654E23308441CF4 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7B6A479EF2BDF57F327EFB5AEC4285AE6F431D61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m47352F09D02E5FC7482850AD63DAD63051D03C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF79348DB8CECE372E5E3B0F7FAB741021D50B682_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m873F1F14F62CE615AB1F4C93B0C015E77D0AB760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB79B4BD45ADAE1FA30B5B09D09C7E9155C0A8F72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_StopPlacementViaPerformedAction_mEF8850E2A5B705BAF3B760BFB1151FAB57BA0943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_StopPlacementViaSelect_m2E8DFC996F04B9E81049717846E8C45582628969_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7FB3FB7F9BEBFAFD5D4A95FDE8494494B3C52A4C V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* V_2 = NULL;
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* V_3 = NULL;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	{
		// if (interactorsCache != null)
		List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35* L_0 = __this->___interactorsCache_36;
		if (!L_0)
		{
			goto IL_00a4;
		}
	}
	{
		// foreach (IXRInteractor interactor in interactorsCache)
		List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35* L_1 = __this->___interactorsCache_36;
		NullCheck(L_1);
		Enumerator_t7FB3FB7F9BEBFAFD5D4A95FDE8494494B3C52A4C L_2;
		L_2 = List_1_GetEnumerator_mB79B4BD45ADAE1FA30B5B09D09C7E9155C0A8F72(L_1, List_1_GetEnumerator_mB79B4BD45ADAE1FA30B5B09D09C7E9155C0A8F72_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7B6A479EF2BDF57F327EFB5AEC4285AE6F431D61((&V_0), Enumerator_Dispose_m7B6A479EF2BDF57F327EFB5AEC4285AE6F431D61_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0080_1;
			}

IL_0019_1:
			{
				// foreach (IXRInteractor interactor in interactorsCache)
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_mF79348DB8CECE372E5E3B0F7FAB741021D50B682_inline((&V_0), Enumerator_get_Current_mF79348DB8CECE372E5E3B0F7FAB741021D50B682_RuntimeMethod_var);
				V_1 = L_3;
				// if (interactor is XRBaseControllerInteractor controllerInteractor &&
				//     controllerInteractor.xrController is ActionBasedController actionController)
				RuntimeObject* L_4 = V_1;
				V_2 = ((XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E*)IsInstClass((RuntimeObject*)L_4, XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_il2cpp_TypeInfo_var));
				XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* L_5 = V_2;
				if (!L_5)
				{
					goto IL_005c_1;
				}
			}
			{
				XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* L_6 = V_2;
				NullCheck(L_6);
				XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_7;
				L_7 = XRBaseControllerInteractor_get_xrController_m3BBC15462D296ED35A6F2E87D290B86BF9216650_inline(L_6, NULL);
				V_3 = ((ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68*)IsInstClass((RuntimeObject*)L_7, ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_il2cpp_TypeInfo_var));
				ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_8 = V_3;
				if (!L_8)
				{
					goto IL_005c_1;
				}
			}
			{
				// actionController.selectAction.action.performed -= StopPlacementViaPerformedAction;
				ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_9 = V_3;
				NullCheck(L_9);
				InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_10;
				L_10 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_9, NULL);
				V_4 = L_10;
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_11;
				L_11 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_4), NULL);
				Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_12 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
				NullCheck(L_12);
				Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_12, __this, (intptr_t)((void*)TapToPlace_StopPlacementViaPerformedAction_mEF8850E2A5B705BAF3B760BFB1151FAB57BA0943_RuntimeMethod_var), NULL);
				NullCheck(L_11);
				InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_11, L_12, NULL);
				goto IL_0080_1;
			}

IL_005c_1:
			{
				// else if (interactor is IXRSelectInteractor selectInteractor)
				RuntimeObject* L_13 = V_1;
				V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1_il2cpp_TypeInfo_var));
				RuntimeObject* L_14 = V_5;
				if (!L_14)
				{
					goto IL_0080_1;
				}
			}
			{
				// selectInteractor.selectEntered.RemoveListener(StopPlacementViaSelect);
				RuntimeObject* L_15 = V_5;
				NullCheck(L_15);
				SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_16;
				L_16 = InterfaceFuncInvoker0< SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* >::Invoke(0 /* UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor::get_selectEntered() */, IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1_il2cpp_TypeInfo_var, L_15);
				UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_17 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_17, __this, (intptr_t)((void*)TapToPlace_StopPlacementViaSelect_m2E8DFC996F04B9E81049717846E8C45582628969_RuntimeMethod_var), NULL);
				NullCheck(L_16);
				UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_16, L_17, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
			}

IL_0080_1:
			{
				// foreach (IXRInteractor interactor in interactorsCache)
				bool L_18;
				L_18 = Enumerator_MoveNext_m47352F09D02E5FC7482850AD63DAD63051D03C67((&V_0), Enumerator_MoveNext_m47352F09D02E5FC7482850AD63DAD63051D03C67_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_0099;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0099:
	{
		// interactorsCache.Clear();
		List_1_t10713C6D866C9DFCF78A36627A67FD5752985A35* L_19 = __this->___interactorsCache_36;
		NullCheck(L_19);
		List_1_Clear_m873F1F14F62CE615AB1F4C93B0C015E77D0AB760_inline(L_19, List_1_Clear_m873F1F14F62CE615AB1F4C93B0C015E77D0AB760_RuntimeMethod_var);
	}

IL_00a4:
	{
		// }
		return;
	}
}
// UnityEngine.InputSystem.InputAction MixedReality.Toolkit.SpatialManipulation.TapToPlace::GetInputActionFromReference(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TapToPlace_GetInputActionFromReference_m357A55FF0AE65A688844E9764B97484A5D8326CF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___0_actionReference, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (actionReference == null) { return null; }
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___0_actionReference;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// if (actionReference == null) { return null; }
		return (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)NULL;
	}

IL_000b:
	{
		// return actionReference.action;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = ___0_actionReference;
		NullCheck(L_2);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_2, NULL);
		return L_3;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace__ctor_mEED74757B09989FAE1938D5BAD7F514780234E99 (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float defaultPlacementDistance = 1.5f;
		__this->___defaultPlacementDistance_15 = (1.5f);
		// private float maxRaycastDistance = 20.0f;
		__this->___maxRaycastDistance_16 = (20.0f);
		// private bool useDefaultSurfaceNormalOffset = true;
		__this->___useDefaultSurfaceNormalOffset_19 = (bool)1;
		// private LayerMask[] magneticSurfaces = { UnityEngine.Physics.DefaultRaycastLayers };
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_0 = (LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99*)(LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99*)SZArrayNew(LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99_il2cpp_TypeInfo_var, (uint32_t)1);
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_1 = L_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_2;
		L_2 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(((int32_t)-5), NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB)L_2);
		__this->___magneticSurfaces_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___magneticSurfaces_22), (void*)L_1);
		// private bool debugEnabled = true;
		__this->___debugEnabled_23 = (bool)1;
		// private UnityEvent onPlacingStarted = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_3, NULL);
		__this->___onPlacingStarted_24 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPlacingStarted_24), (void*)L_3);
		// private UnityEvent onPlacingStopped = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_4, NULL);
		__this->___onPlacingStopped_25 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPlacingStopped_25), (void*)L_4);
		// protected float DoubleClickTimeout { get; set; }= 0.5f;
		__this->___U3CDoubleClickTimeoutU3Ek__BackingField_32 = (0.5f);
		Solver__ctor_m61553BCC86AA46B55E44C1999BA45487652A09D8(__this, NULL);
		return;
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.TapToPlace::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace__cctor_mFFD90D0C209742D1F26815B3653056C01504A1B2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32E2B8232B2A08F835DCBBADA5F6DD4AC8F950D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5529465409870544CE39603F0D2335F17AE8D433);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral664DB4A50174C557D235A3CD5502B5C937DD54E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5D8D154E5D9B4EACA86B890F2045DDCA6D915C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker StartPlacementPerfMarker =
		//     new ProfilerMarker("[MRTK] TapToPlace.StartPlacement");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteralA5D8D154E5D9B4EACA86B890F2045DDCA6D915C5, /*hidden argument*/NULL);
		((TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_il2cpp_TypeInfo_var))->___StartPlacementPerfMarker_37 = L_0;
		// private static readonly ProfilerMarker StopPlacementPerfMarker =
		//     new ProfilerMarker("[MRTK] TapToPlace.StopPlacementViaPerformedAction");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_1), _stringLiteral664DB4A50174C557D235A3CD5502B5C937DD54E2, /*hidden argument*/NULL);
		((TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_il2cpp_TypeInfo_var))->___StopPlacementPerfMarker_38 = L_1;
		// private static readonly ProfilerMarker SolverUpdatePerfMarker =
		//     new ProfilerMarker("[MRTK] TapToPlace.SolverUpdate");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_2), _stringLiteral5529465409870544CE39603F0D2335F17AE8D433, /*hidden argument*/NULL);
		((TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_il2cpp_TypeInfo_var))->___SolverUpdatePerfMarker_39 = L_2;
		// private static readonly ProfilerMarker PerformRaycastPerfMarker =
		//     new ProfilerMarker("[MRTK] TapToPlace.PerformRaycast");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_3), _stringLiteral32E2B8232B2A08F835DCBBADA5F6DD4AC8F950D6, /*hidden argument*/NULL);
		((TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F_il2cpp_TypeInfo_var))->___PerformRaycastPerfMarker_40 = L_3;
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
// System.Int32 MixedReality.Toolkit.SpatialManipulation.ConstraintExecOrderComparer::Compare(MixedReality.Toolkit.SpatialManipulation.TransformConstraint,MixedReality.Toolkit.SpatialManipulation.TransformConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConstraintExecOrderComparer_Compare_m311F0C5C9772A0F2083BCB649593FD5C46E9036D (ConstraintExecOrderComparer_tBE3F1481D739EB9AEF1556BC3F06F5D56F472B67* __this, TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* ___0_x, TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* ___1_y, const RuntimeMethod* method) 
{
	{
		// return x.ExecutionPriority - y.ExecutionPriority;
		TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TransformConstraint_get_ExecutionPriority_m561DE63AA1068BD955E7217EA20826186D2E384F_inline(L_0, NULL);
		TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* L_2 = ___1_y;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TransformConstraint_get_ExecutionPriority_m561DE63AA1068BD955E7217EA20826186D2E384F_inline(L_2, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_1, L_3));
	}
}
// System.Void MixedReality.Toolkit.SpatialManipulation.ConstraintExecOrderComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstraintExecOrderComparer__ctor_m6882FC4CE45C378C5532639F5D03A6E9F4513CF1 (ConstraintExecOrderComparer_tBE3F1481D739EB9AEF1556BC3F06F5D56F472B67* __this, const RuntimeMethod* method) 
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
// System.Void MixedReality.Toolkit.SpatialManipulation.ConstraintUtils::AddWithPriority(System.Collections.Generic.List`1<MixedReality.Toolkit.SpatialManipulation.TransformConstraint>&,MixedReality.Toolkit.SpatialManipulation.TransformConstraint,MixedReality.Toolkit.SpatialManipulation.ConstraintExecOrderComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstraintUtils_AddWithPriority_m1206CF1E01F2FBF57E9612E57A54BADEBC2AF31B (List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B** ___0_constraintList, TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* ___1_constraint, ConstraintExecOrderComparer_tBE3F1481D739EB9AEF1556BC3F06F5D56F472B67* ___2_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC2AC6555E1F0B8D452B97C2BC2A55C1E9DEF674E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_BinarySearch_mC66C14467FD2F8F870B2B58AC64715AF79E268BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mA327316FB8027C5C066A0D7AC1350875AAC45D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m3B059906CFBF53F7673C207FC5DFD35F2460FDAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m50000F8D414BFBF142A42777CA34EC62736B728F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4507899389EBE7C487F76469818C2C9757CCBD26_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (constraintList.Contains(constraint))
		List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B** L_0 = ___0_constraintList;
		List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B* L_1 = *((List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B**)L_0);
		TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* L_2 = ___1_constraint;
		NullCheck(L_1);
		bool L_3;
		L_3 = List_1_Contains_mA327316FB8027C5C066A0D7AC1350875AAC45D8D(L_1, L_2, List_1_Contains_mA327316FB8027C5C066A0D7AC1350875AAC45D8D_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// if (constraintList.Count == 0 || comparer.Compare(constraintList[constraintList.Count - 1], constraint) < 0)
		List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B** L_4 = ___0_constraintList;
		List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B* L_5 = *((List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B**)L_4);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m50000F8D414BFBF142A42777CA34EC62736B728F_inline(L_5, List_1_get_Count_m50000F8D414BFBF142A42777CA34EC62736B728F_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		ConstraintExecOrderComparer_tBE3F1481D739EB9AEF1556BC3F06F5D56F472B67* L_7 = ___2_comparer;
		List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B** L_8 = ___0_constraintList;
		List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B* L_9 = *((List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B**)L_8);
		List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B** L_10 = ___0_constraintList;
		List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B* L_11 = *((List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B**)L_10);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m50000F8D414BFBF142A42777CA34EC62736B728F_inline(L_11, List_1_get_Count_m50000F8D414BFBF142A42777CA34EC62736B728F_RuntimeMethod_var);
		NullCheck(L_9);
		TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* L_13;
		L_13 = List_1_get_Item_m4507899389EBE7C487F76469818C2C9757CCBD26(L_9, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), List_1_get_Item_m4507899389EBE7C487F76469818C2C9757CCBD26_RuntimeMethod_var);
		TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* L_14 = ___1_constraint;
		NullCheck(L_7);
		int32_t L_15;
		L_15 = VirtualFuncInvoker2< int32_t, TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768*, TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* >::Invoke(5 /* System.Int32 MixedReality.Toolkit.SpatialManipulation.ConstraintExecOrderComparer::Compare(MixedReality.Toolkit.SpatialManipulation.TransformConstraint,MixedReality.Toolkit.SpatialManipulation.TransformConstraint) */, L_7, L_13, L_14);
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}

IL_002e:
	{
		// constraintList.Add(constraint);
		List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B** L_16 = ___0_constraintList;
		List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B* L_17 = *((List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B**)L_16);
		TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* L_18 = ___1_constraint;
		NullCheck(L_17);
		List_1_Add_mC2AC6555E1F0B8D452B97C2BC2A55C1E9DEF674E_inline(L_17, L_18, List_1_Add_mC2AC6555E1F0B8D452B97C2BC2A55C1E9DEF674E_RuntimeMethod_var);
		// return;
		return;
	}

IL_0037:
	{
		// else if (comparer.Compare(constraintList[0], constraint) > 0)
		ConstraintExecOrderComparer_tBE3F1481D739EB9AEF1556BC3F06F5D56F472B67* L_19 = ___2_comparer;
		List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B** L_20 = ___0_constraintList;
		List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B* L_21 = *((List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B**)L_20);
		NullCheck(L_21);
		TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* L_22;
		L_22 = List_1_get_Item_m4507899389EBE7C487F76469818C2C9757CCBD26(L_21, 0, List_1_get_Item_m4507899389EBE7C487F76469818C2C9757CCBD26_RuntimeMethod_var);
		TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* L_23 = ___1_constraint;
		NullCheck(L_19);
		int32_t L_24;
		L_24 = VirtualFuncInvoker2< int32_t, TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768*, TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* >::Invoke(5 /* System.Int32 MixedReality.Toolkit.SpatialManipulation.ConstraintExecOrderComparer::Compare(MixedReality.Toolkit.SpatialManipulation.TransformConstraint,MixedReality.Toolkit.SpatialManipulation.TransformConstraint) */, L_19, L_22, L_23);
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		// constraintList.Insert(0, constraint);
		List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B** L_25 = ___0_constraintList;
		List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B* L_26 = *((List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B**)L_25);
		TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* L_27 = ___1_constraint;
		NullCheck(L_26);
		List_1_Insert_m3B059906CFBF53F7673C207FC5DFD35F2460FDAE(L_26, 0, L_27, List_1_Insert_m3B059906CFBF53F7673C207FC5DFD35F2460FDAE_RuntimeMethod_var);
		// return;
		return;
	}

IL_0053:
	{
		// int idx = constraintList.BinarySearch(constraint, comparer);
		List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B** L_28 = ___0_constraintList;
		List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B* L_29 = *((List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B**)L_28);
		TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* L_30 = ___1_constraint;
		ConstraintExecOrderComparer_tBE3F1481D739EB9AEF1556BC3F06F5D56F472B67* L_31 = ___2_comparer;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = List_1_BinarySearch_mC66C14467FD2F8F870B2B58AC64715AF79E268BA(L_29, L_30, L_31, List_1_BinarySearch_mC66C14467FD2F8F870B2B58AC64715AF79E268BA_RuntimeMethod_var);
		V_0 = L_32;
		// if (idx < 0)
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) >= ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		// idx = ~idx;
		int32_t L_34 = V_0;
		V_0 = ((~L_34));
	}

IL_0064:
	{
		// constraintList.Insert(idx, constraint);
		List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B** L_35 = ___0_constraintList;
		List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B* L_36 = *((List_1_tFF5505C4A557641592A3A056FFEB5FF81EABE32B**)L_35);
		int32_t L_37 = V_0;
		TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* L_38 = ___1_constraint;
		NullCheck(L_36);
		List_1_Insert_m3B059906CFBF53F7673C207FC5DFD35F2460FDAE(L_36, L_37, L_38, List_1_Insert_m3B059906CFBF53F7673C207FC5DFD35F2460FDAE_RuntimeMethod_var);
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
// System.Boolean MixedReality.Toolkit.SpatialManipulation.InteractionFlagsExtensions::IsMaskSet(MixedReality.Toolkit.SpatialManipulation.InteractionFlags,MixedReality.Toolkit.SpatialManipulation.InteractionFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionFlagsExtensions_IsMaskSet_mD3774AE63156C67F9597F2FB5EF778FEFF9B0B17 (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	{
		// return ((a & b) == b);
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		int32_t L_2 = ___1_b;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) == ((int32_t)L_2))? 1 : 0);
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
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Current_m09726493CD0732F10008C991EC37A77BC226BBEF (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Current { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CCurrentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Current_m09726493CD0732F10008C991EC37A77BC226BBEF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Vector3Smoothed_get_Current_m09726493CD0732F10008C991EC37A77BC226BBEF_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::set_Current(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Current_m82AC5627F0CAFDCDCEF1C72380C65EEC1F620558 (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 Current { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed_set_Current_m82AC5627F0CAFDCDCEF1C72380C65EEC1F620558_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method)
{
	Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B*>(__this + _offset);
	Vector3Smoothed_set_Current_m82AC5627F0CAFDCDCEF1C72380C65EEC1F620558_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Vector3 MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::get_Goal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Goal_mB44436399BBD24B5F08EFC51FF6C1B924FDBDA5E (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Goal { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CGoalU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Goal_mB44436399BBD24B5F08EFC51FF6C1B924FDBDA5E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Vector3Smoothed_get_Goal_mB44436399BBD24B5F08EFC51FF6C1B924FDBDA5E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::set_Goal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Goal_mBE5158041F4C32A3B2CC48C7293055D8808B136D (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 Goal { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CGoalU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed_set_Goal_mBE5158041F4C32A3B2CC48C7293055D8808B136D_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method)
{
	Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B*>(__this + _offset);
	Vector3Smoothed_set_Goal_mBE5158041F4C32A3B2CC48C7293055D8808B136D_inline(_thisAdjusted, ___0_value, method);
}
// System.Single MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::get_SmoothTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3Smoothed_get_SmoothTime_mFB5035C20AA2CC5EB2B287BB8C716EF647D6CE9A (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, const RuntimeMethod* method) 
{
	{
		// public float SmoothTime { get; set; }
		float L_0 = __this->___U3CSmoothTimeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float Vector3Smoothed_get_SmoothTime_mFB5035C20AA2CC5EB2B287BB8C716EF647D6CE9A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B*>(__this + _offset);
	float _returnValue;
	_returnValue = Vector3Smoothed_get_SmoothTime_mFB5035C20AA2CC5EB2B287BB8C716EF647D6CE9A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::set_SmoothTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_set_SmoothTime_mBF92DBE9E89682A4CD4AE9D3002AC6B592B311D7 (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float SmoothTime { get; set; }
		float L_0 = ___0_value;
		__this->___U3CSmoothTimeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed_set_SmoothTime_mBF92DBE9E89682A4CD4AE9D3002AC6B592B311D7_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B*>(__this + _offset);
	Vector3Smoothed_set_SmoothTime_mBF92DBE9E89682A4CD4AE9D3002AC6B592B311D7_inline(_thisAdjusted, ___0_value, method);
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed__ctor_m17114C9DA61DBC98B01130A697088551CE4F7BB8 (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, float ___1_smoothingTime, const RuntimeMethod* method) 
{
	{
		// public Vector3Smoothed(Vector3 value, float smoothingTime) : this()
		il2cpp_codegen_initobj(__this, sizeof(Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B));
		// Current = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		Vector3Smoothed_set_Current_m82AC5627F0CAFDCDCEF1C72380C65EEC1F620558_inline(__this, L_0, NULL);
		// Goal = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		Vector3Smoothed_set_Goal_mBE5158041F4C32A3B2CC48C7293055D8808B136D_inline(__this, L_1, NULL);
		// SmoothTime = smoothingTime;
		float L_2 = ___1_smoothingTime;
		Vector3Smoothed_set_SmoothTime_mBF92DBE9E89682A4CD4AE9D3002AC6B592B311D7_inline(__this, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed__ctor_m17114C9DA61DBC98B01130A697088551CE4F7BB8_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, float ___1_smoothingTime, const RuntimeMethod* method)
{
	Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B*>(__this + _offset);
	Vector3Smoothed__ctor_m17114C9DA61DBC98B01130A697088551CE4F7BB8(_thisAdjusted, ___0_value, ___1_smoothingTime, method);
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::SetGoal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_SetGoal_mB36A7F9A684864332C02B5CD35D485BE651A8483 (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_goal, const RuntimeMethod* method) 
{
	{
		// Goal = goal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_goal;
		Vector3Smoothed_set_Goal_mBE5158041F4C32A3B2CC48C7293055D8808B136D_inline(__this, L_0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed_SetGoal_mB36A7F9A684864332C02B5CD35D485BE651A8483_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_goal, const RuntimeMethod* method)
{
	Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B*>(__this + _offset);
	Vector3Smoothed_SetGoal_mB36A7F9A684864332C02B5CD35D485BE651A8483(_thisAdjusted, ___0_goal, method);
}
// System.Void MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_Update_mDDB6248A10F53ADFEC9903B0CF0CDDD8842617A4 (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, float ___0_deltaTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* G_B2_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* G_B1_2 = NULL;
	float G_B3_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* G_B3_3 = NULL;
	{
		// Current = Vector3.Lerp(Current, Goal, (Math.Abs(SmoothTime) < Mathf.Epsilon) ? 1.0f : deltaTime / SmoothTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3Smoothed_get_Current_m09726493CD0732F10008C991EC37A77BC226BBEF_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3Smoothed_get_Goal_mB44436399BBD24B5F08EFC51FF6C1B924FDBDA5E_inline(__this, NULL);
		float L_2;
		L_2 = Vector3Smoothed_get_SmoothTime_mFB5035C20AA2CC5EB2B287BB8C716EF647D6CE9A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if ((((float)L_3) < ((float)L_4)))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0029;
		}
	}
	{
		float L_5 = ___0_deltaTime;
		float L_6;
		L_6 = Vector3Smoothed_get_SmoothTime_mFB5035C20AA2CC5EB2B287BB8C716EF647D6CE9A_inline(__this, NULL);
		G_B3_0 = ((float)(L_5/L_6));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_002e;
	}

IL_0029:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_002e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(G_B3_2, G_B3_1, G_B3_0, NULL);
		Vector3Smoothed_set_Current_m82AC5627F0CAFDCDCEF1C72380C65EEC1F620558_inline(G_B3_3, L_7, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed_Update_mDDB6248A10F53ADFEC9903B0CF0CDDD8842617A4_AdjustorThunk (RuntimeObject* __this, float ___0_deltaTime, const RuntimeMethod* method)
{
	Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B*>(__this + _offset);
	Vector3Smoothed_Update_mDDB6248A10F53ADFEC9903B0CF0CDDD8842617A4(_thisAdjusted, ___0_deltaTime, method);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) 
{
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		intptr_t L_4 = __this->___m_Ptr_0;
		ProfilerUnsafeUtility_EndSample_mFDB4EFB160A9CB817D2F8ED21B88693616B27409(L_4, NULL);
	}

IL_0021:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Orbital_get_LocalOffset_m989E02C0DD5DC176B45D27C6AE8BF61ECECBD568_inline (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, const RuntimeMethod* method) 
{
	{
		// get { return localOffset; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___localOffset_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Orbital_get_WorldOffset_mE36216EB5DE4F386298F6AB2B637DBBF7E79B693_inline (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, const RuntimeMethod* method) 
{
	{
		// get { return worldOffset; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___worldOffset_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Orbital_get_UseAngleStepping_m7F5D47E4BF024DCA83771458CDDD3F23C9B86508_inline (Orbital_t279FE44DC0F91D3E713D88864EF921F6FCF5CBBF* __this, const RuntimeMethod* method) 
{
	{
		// get { return useAngleStepping; }
		bool L_0 = __this->___useAngleStepping_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_mC5E1AAB8CC1F0342065DF85BA3334445ED754E64(L_0, (uint16_t)1, 0, 0, NULL);
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_m81028E564FC20AC640E0C1847972BDCF36347C25_inline (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) 
{
	{
		// get => useFixedVerticalPosition;
		bool L_0 = __this->___useFixedVerticalPosition_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_mFE1B74EDDD04F227AE40B77106A64BF46849EEC9_inline (RadialView_tFDD04D842EBF25BF2C718455C7F26BD1E732A55B* __this, const RuntimeMethod* method) 
{
	{
		// get => fixedVerticalPosition;
		float L_0 = __this->___fixedVerticalPosition_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_from), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___1_to), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_from;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_to;
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_GoalPosition_m287FC681D5DFB57264ADD5E9E994B7C87BB9E049_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CGoalPositionU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_m2D92641664852D4A576132EAA64A19D73BDCD2AA_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CGoalPositionU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SolverHandler_get_GoalRotation_mC0CEEB989A81193D184206C6B11624B75EB41B34_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CGoalRotationU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_mB10BEBDCB8E0EEF7105AAD9ABE32C75CC2476A9B_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_value;
		__this->___U3CGoalRotationU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_GoalScale_m8E037AF9B1B4E371A835086F59DAB2AE3A425E55_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CGoalScaleU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_m33FDA0F6759ABD82E20B9A95213AEE3D202CEF1D_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CGoalScaleU3Ek__BackingField_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_m7BD6BFA0D56BAC2A6E37099975F31A5A2D79DE49_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = __this->___U3CDeltaTimeU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m8073F97C399A6562D9D035AA11BD07A9196B0F60_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B L_0 = ___0_value;
		__this->___U3CAltScaleU3Ek__BackingField_17 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_mB20248550E0D32B895067C8D8BA3F23C7BC0C518_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = ___0_value;
		__this->___U3CDeltaTimeU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_m583ECFD959097672CC7455FB1DD1B3D251BE3323_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// get => trackedTargetType;
		int32_t L_0 = __this->___trackedTargetType_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_mA03F997C40AD497AE7A8195F05CA4F51279AC40D_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// get => updateSolvers;
		bool L_0 = __this->___updateSolvers_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandedness_m4029B860B4C9208FCA90FB26C6DF8741A9FE5FE9_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// get => trackedHandedness;
		int32_t L_0 = __this->___trackedHandedness_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SolverHandler_get_PreferredTrackedHandedness_m7610885EDC5E86909D61A996DABC9EEEEDEAE7F7_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// get => preferredTrackedHandedness;
		int32_t L_0 = __this->___preferredTrackedHandedness_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_m8067C11C9591B38CC0688525AD7EBBC868233695_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// get => trackedHandJoint;
		int32_t L_0 = __this->___trackedHandJoint_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_AdditionalOffset_m51F743045A482978DB4B6D238E7D37018815B10C_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// get => additionalOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___additionalOffset_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SolverHandler_get_AdditionalRotation_mB8AA3A862B467392D1132799EB01FDB2177F15A3_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// get => additionalRotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___additionalRotation_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* SolverHandler_get_RightInteractor_m2F1B820636233A4CE88F6583D60C3FE21602BE81_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// get => rightInteractor;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = __this->___rightInteractor_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* SolverHandler_get_LeftInteractor_m8A69A7CB2BD8E2FC9AE8B60DE6A93E07F25C5BF6_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// get => leftInteractor;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = __this->___leftInteractor_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_m8BCB5B5A2347BDD96B904E8445B27694D5F277C6_inline (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => currentRaycastDirectionMode;
		int32_t L_0 = __this->___currentRaycastDirectionMode_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B SolverHandler_get_AltScale_mD5130E55FEC78CDDC9F9818CDDF0AC6458ECB69E_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B L_0 = __this->___U3CAltScaleU3Ek__BackingField_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Current_m09726493CD0732F10008C991EC37A77BC226BBEF_inline (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Current { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CCurrentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_m5963208050451A724A2FBF58BF36E6E4DA831322_inline (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->___keepOrientationVertical_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_mE8700DDC1932D3B5C5D6D4C89EC912267B36E2E2_inline (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => orientationMode;
		int32_t L_0 = __this->___orientationMode_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RayStep_get_Direction_mF8BC5AD55BB22ED4410C8F6F3FC072842D270171_inline (RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Direction { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CDirectionU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m71A5F16EE5B4E33CA4F6CB88D27D32841FA62814_inline (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => debugEnabled;
		bool L_0 = __this->___debugEnabled_30;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RayStep_get_Origin_mD824FD9C6E7BB961ECF68E811B60725D111E9D7D_inline (RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Origin { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3COriginU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RayStep_get_Terminus_m1146FE794571E9B89713DD4F135C34F162F9E6C6_inline (RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Terminus { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CTerminusU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_mF3EF1F12779C1DEDBDF705A0FD0FB0CBFD94A658_inline (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// get => raycastMode;
		int32_t L_0 = __this->___raycastMode_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_mF05D844CEE08BDAF4A939CFD42ECAAA3DE11791C_inline (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3COnSurfaceU3Ek__BackingField_31 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OnSurface_m32C1EC1EA0D9BB9B880A1B63065E764E9EF8908C_inline (SurfaceMagnetism_t39C94AC682BEFC63C497F4B01C16A4A65E5526C2* __this, const RuntimeMethod* method) 
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = __this->___U3COnSurfaceU3Ek__BackingField_31;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___1_b;
		float L_1 = ___0_a;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___0_a;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___1_b;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_lhs;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_rhs;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_lhs;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_rhs;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_lhs;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___1_rhs;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_AutoStart_m1A03C3E5A137B7254387C7368CE0667E22408234_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => autoStart;
		bool L_0 = __this->___autoStart_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m01A77F690FEC55D269A36D8E8C5BEF54189E9360_inline (SolverHandler_t2FD5E9A299F3AAAD6AC321F9BEF532D07A102FA2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => updateSolvers = value;
		bool L_0 = ___0_value;
		__this->___updateSolvers_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapToPlace_get_DoubleClickTimeout_m952BEBD21C5A7AC2883B5FF4FCC619A7C2B635F8_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// protected float DoubleClickTimeout { get; set; }= 0.5f;
		float L_0 = __this->___U3CDoubleClickTimeoutU3Ek__BackingField_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_IsBeingPlaced_m4C33C2667FE902E4F9512B3839222204EE91CAD0_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = __this->___U3CIsBeingPlacedU3Ek__BackingField_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapToPlace_set_GameObjectLayer_mFF3C7D258D48762831B98E5C376E3FF935FABA56_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = ___0_value;
		__this->___U3CGameObjectLayerU3Ek__BackingField_26 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapToPlace_set_IsBeingPlaced_m8B793F411B97FC6A8743BD2F1AEE8E504EB02A86_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = ___0_value;
		__this->___U3CIsBeingPlacedU3Ek__BackingField_17 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* TapToPlace_get_OnPlacingStarted_m3D959E332A0FEB8C3B90205F82811D36E0923BCC_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => onPlacingStarted;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onPlacingStarted_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TapToPlace_get_GameObjectLayer_mC6938A2AFB978A140AE7052B2DE0A5D04DBD4237_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = __this->___U3CGameObjectLayerU3Ek__BackingField_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* TapToPlace_get_OnPlacingStopped_mFA06B5ADFCA9847AA6039A30B3969CE1F165193A_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => onPlacingStopped;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onPlacingStopped_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5 TapToPlace_get_CurrentRay_m276F438D59F7CB11D14FCDC51329E072B6ACB8EE_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => currentRay;
		RayStep_t91BE28EADC45E33BD243958CC2E3FAD3CC2D43C5 L_0 = __this->___currentRay_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapToPlace_get_MaxRaycastDistance_mC27CD8EB475448F094E31D70061C69B144F93D16_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->___maxRaycastDistance_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* TapToPlace_get_MagneticSurfaces_mFB0C350CB84615E279CF943AC322F881A1286ABD_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => magneticSurfaces;
		LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* L_0 = __this->___magneticSurfaces_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapToPlace_set_DidHitSurface_m915248DD158C0A40BAD11DEDF82AA372E29C1F2E_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// protected bool DidHitSurface { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CDidHitSurfaceU3Ek__BackingField_29 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_DidHitSurface_m088E003F412A5DE739A0F446AE1E5C75A3F333E0_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// protected bool DidHitSurface { get; set; }
		bool L_0 = __this->___U3CDidHitSurfaceU3Ek__BackingField_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 TapToPlace_get_CurrentHit_m65418F37B9540864F6045922E3AC9C5B411228F7_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => currentHit;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = __this->___currentHit_30;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_UseDefaultSurfaceNormalOffset_m1F7D47BC0EF1D11D3430CE724483983F661DE50A_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => useDefaultSurfaceNormalOffset;
		bool L_0 = __this->___useDefaultSurfaceNormalOffset_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapToPlace_get_SurfaceNormalOffset_mFE57D19E104432E36782B616863941CE158BDD76_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => surfaceNormalOffset;
		float L_0 = __this->___surfaceNormalOffset_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultPlacementDistance_mECF30C634C0AA40353172B431457CB7920687D53_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => defaultPlacementDistance;
		float L_0 = __this->___defaultPlacementDistance_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_KeepOrientationVertical_mFBC232E20AB6FCD31DAED7F156E342E122F08894_inline (TapToPlace_tE88A8CB2CFB80056F725355531643C859F25CF7F* __this, const RuntimeMethod* method) 
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->___keepOrientationVertical_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* XRBaseControllerInteractor_get_xrController_m3BBC15462D296ED35A6F2E87D290B86BF9216650_inline (XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Controller;
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_0 = __this->___m_Controller_98;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline (ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectAction;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_0 = __this->___m_SelectAction_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransformConstraint_get_ExecutionPriority_m561DE63AA1068BD955E7217EA20826186D2E384F_inline (TransformConstraint_tB185CFB46D7087D929E961F27B10C0F3B50EC768* __this, const RuntimeMethod* method) 
{
	{
		// get => executionOrder;
		int32_t L_0 = __this->___executionOrder_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Current_m82AC5627F0CAFDCDCEF1C72380C65EEC1F620558_inline (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 Current { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Smoothed_get_Goal_mB44436399BBD24B5F08EFC51FF6C1B924FDBDA5E_inline (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Goal { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CGoalU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Goal_mBE5158041F4C32A3B2CC48C7293055D8808B136D_inline (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 Goal { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CGoalU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3Smoothed_get_SmoothTime_mFB5035C20AA2CC5EB2B287BB8C716EF647D6CE9A_inline (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, const RuntimeMethod* method) 
{
	{
		// public float SmoothTime { get; set; }
		float L_0 = __this->___U3CSmoothTimeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_SmoothTime_mBF92DBE9E89682A4CD4AE9D3002AC6B592B311D7_inline (Vector3Smoothed_tE8E846D24DBD2FAF7B791D0046ADC4A508237E0B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float SmoothTime { get; set; }
		float L_0 = ___0_value;
		__this->___U3CSmoothTimeU3Ek__BackingField_2 = L_0;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___0_markerPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___0_markerPtr;
		__this->___m_Ptr_0 = L_0;
		intptr_t L_1 = __this->___m_Ptr_0;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		intptr_t L_5 = ___0_markerPtr;
		ProfilerUnsafeUtility_BeginSample_mB5106F4E7ECEF54906545665ED23928D14F5FCA7(L_5, NULL);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
