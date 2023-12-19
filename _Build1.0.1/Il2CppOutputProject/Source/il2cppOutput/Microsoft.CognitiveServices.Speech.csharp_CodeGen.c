#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* Recognizer_FireEvent_SetSessionStarted_m641F7510BE5E1426DD4EE2765007FCA37E86E0F7_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_FireEvent_SetSessionStopped_mA727407C3AAB48CD19521F3FFF7E163A0E63455C_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_FireEvent_SpeechEndDetected_m21C1A7D4CCC4E33EC2EA05B48E44CC604E36C705_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_FireEvent_SpeechStartDetected_m94DA4231F52F17425D472988B350E23C2A574C88_RuntimeMethod_var;
extern const RuntimeMethod* SpeechRecognizer_FireEvent_Canceled_mF0152E00B21076D0AA20D551D4659ED141BA2A87_RuntimeMethod_var;
extern const RuntimeMethod* SpeechRecognizer_FireEvent_Recognized_m1F3199AAADDAAAD62E3A93985B2668A9A23E8205_RuntimeMethod_var;
extern const RuntimeMethod* SpeechRecognizer_FireEvent_Recognizing_mC85B8A7E5FC2E2D4FC053DBD8AC419F17468EB4F_RuntimeMethod_var;
extern const RuntimeMethod* TranslationRecognizer_FireEvent_Canceled_mFD1B32ACF0B0EE83DE442139C160899879A51E46_RuntimeMethod_var;
extern const RuntimeMethod* TranslationRecognizer_FireEvent_Recognized_m1A40021BFA25C2FB66E2E204DD020C3711F00B22_RuntimeMethod_var;
extern const RuntimeMethod* TranslationRecognizer_FireEvent_Recognizing_m17C8B5DC53375C671FD8E9F158A49378C62BD3D3_RuntimeMethod_var;
extern const RuntimeMethod* TranslationRecognizer_FireEvent_SynthesisResult_m8821CF5132DBD863346A36837637C0723E46F6E8_RuntimeMethod_var;



// 0x00000001 System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::.ctor(System.IntPtr)
extern void PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7 (void);
// 0x00000002 System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close()
extern void PropertyCollection_Close_mD3C12EE3FDB07C2A9D8C5E7C35C968E5A299BD9F (void);
// 0x00000003 System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId)
extern void PropertyCollection_GetProperty_mC3CEE491F6DF720BDAE92D54A47E6420DCF146B5 (void);
// 0x00000004 System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(Microsoft.CognitiveServices.Speech.PropertyId,System.String)
extern void PropertyCollection_SetProperty_mA4F3EDF9EE715D7F2C052E11948FCF36A4400024 (void);
// 0x00000005 System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(System.String,System.String)
extern void PropertyCollection_SetProperty_m32FCC0FEE788D8E7BC18427D47C37535F389EC94 (void);
// 0x00000006 System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetPropertyString(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.String,System.String)
extern void PropertyCollection_GetPropertyString_mE4586EBDDDD6EAAC938A0717F3ED064BF55EB83A (void);
// 0x00000007 System.Void Microsoft.CognitiveServices.Speech.RecognitionEventArgs::.ctor(System.IntPtr)
extern void RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34 (void);
// 0x00000008 System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::get_Offset()
extern void RecognitionEventArgs_get_Offset_m7518854BD1D37BB220A79F81301A0A07E7D791A9 (void);
// 0x00000009 System.String Microsoft.CognitiveServices.Speech.RecognitionEventArgs::ToString()
extern void RecognitionEventArgs_ToString_mF2E5686250B94CC3327CD6EB9EC1F89F365E8788 (void);
// 0x0000000A System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::.ctor(System.IntPtr)
extern void RecognitionResult__ctor_mF52685BDF0D0D81056CF4F2D7929B837D3E4504E (void);
// 0x0000000B System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId()
extern void RecognitionResult_get_ResultId_m9CF0F0A305756122CEFD17C636900B33C167A973 (void);
// 0x0000000C Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason()
extern void RecognitionResult_get_Reason_m066811BCC260ED5344D289BE7930228203781E67 (void);
// 0x0000000D System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text()
extern void RecognitionResult_get_Text_mDC9F2CE6BE9519B218C81FECCC1BC35CA7274836 (void);
// 0x0000000E Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties()
extern void RecognitionResult_get_Properties_mBC89268B2B6560AC90F7EE6837AB6E3657B212D3 (void);
// 0x0000000F System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
extern void RecognitionResult_set_Properties_m4882E5F4FF2BD9889CA0D982BA14CB48E6936468 (void);
// 0x00000010 System.String Microsoft.CognitiveServices.Speech.RecognitionResult::ToString()
extern void RecognitionResult_ToString_m7C6EE65B05B5F984DB102F9041EFDA7403547F95 (void);
// 0x00000011 Microsoft.CognitiveServices.Speech.CancellationDetails Microsoft.CognitiveServices.Speech.CancellationDetails::FromResult(Microsoft.CognitiveServices.Speech.RecognitionResult)
extern void CancellationDetails_FromResult_m601E12548DEFE4F1D895C4E927442D35FEE17541 (void);
// 0x00000012 System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::.ctor(Microsoft.CognitiveServices.Speech.RecognitionResult)
extern void CancellationDetails__ctor_m5ECA54A2F0D76D1BF8E39C7AEF5DCC99D8672E26 (void);
// 0x00000013 Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::get_Reason()
extern void CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180 (void);
// 0x00000014 System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_Reason(Microsoft.CognitiveServices.Speech.CancellationReason)
extern void CancellationDetails_set_Reason_m12D27884D7BBCF9EC1908A1DFF49066DEF4EF2B5 (void);
// 0x00000015 Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorCode()
extern void CancellationDetails_get_ErrorCode_m01B8889CC68F1443F822B1E8082F6B8378C723AF (void);
// 0x00000016 System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorCode(Microsoft.CognitiveServices.Speech.CancellationErrorCode)
extern void CancellationDetails_set_ErrorCode_m78B75A1457D448E18D427A192E95A964218C8A74 (void);
// 0x00000017 System.String Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorDetails()
extern void CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636 (void);
// 0x00000018 System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorDetails(System.String)
extern void CancellationDetails_set_ErrorDetails_m22095079546C7E7DC32D28BB7D2271B3E68ACE93 (void);
// 0x00000019 System.String Microsoft.CognitiveServices.Speech.CancellationDetails::ToString()
extern void CancellationDetails_ToString_m5E209DF29443488B64A6A0635234FD138DA3853B (void);
// 0x0000001A System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_add__SessionStarted_m631F4CB4BF55A534C3A8CB8EAEC57EE7139BE4CD (void);
// 0x0000001B System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_remove__SessionStarted_m1FB4C79584D375A664EFB1916F4127D741FBA016 (void);
// 0x0000001C System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_add__SessionStopped_mC531DA001A86C34512638EC7AD42682AD216D32E (void);
// 0x0000001D System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_remove__SessionStopped_m75B4EAF7FE72A73C707DD5AD1CD02D2A82F48AAA (void);
// 0x0000001E System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_add__SpeechStartDetected_mC7B7A06E0F81282B1A983A1B99887C9E558BB750 (void);
// 0x0000001F System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_remove__SpeechStartDetected_m3DB6ED1521289E1BCB5BF3032F68C2452A2F8830 (void);
// 0x00000020 System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_add__SpeechEndDetected_m22831739B45057F6783CF4C784E8829A1A7D27A3 (void);
// 0x00000021 System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_remove__SpeechEndDetected_m335107F7B597E13480CF0F21EB83795CFFC9B4D8 (void);
// 0x00000022 System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_add_SessionStarted_mB7176B7EFAA7EF6CC237B3D46C760A7C309968BD (void);
// 0x00000023 System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_remove_SessionStarted_m80E3AA294063F4AC3B94DFC9268FB59E4ACEE3AC (void);
// 0x00000024 System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_add_SessionStopped_mE532CD715B13EE7A206285576688D2F091B716AA (void);
// 0x00000025 System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_remove_SessionStopped_m07F4261BD9721CA3EBEB2322AF5887A3089D04B7 (void);
// 0x00000026 System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_add_SpeechStartDetected_mA70F8631EF165EC1924C86E7DE622BAEC1A84EC6 (void);
// 0x00000027 System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_remove_SpeechStartDetected_m36A954D8D9CEA2A39057AE2D3E23FB0BA262B8C1 (void);
// 0x00000028 System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_add_SpeechEndDetected_mD340F4717F391593D8DB5A538E983F114F9079F7 (void);
// 0x00000029 System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_remove_SpeechEndDetected_mAC602E23E1C084A837A4068BB933C82A6329EBA4 (void);
// 0x0000002A System.Void Microsoft.CognitiveServices.Speech.Recognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void Recognizer__ctor_mB448C82F7106784983B2332E0C35FAC613A10A05 (void);
// 0x0000002B System.Void Microsoft.CognitiveServices.Speech.Recognizer::Finalize()
extern void Recognizer_Finalize_m65C041518559BC7332B58EC3BD23603D6FAEA7F5 (void);
// 0x0000002C System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose()
extern void Recognizer_Dispose_m53C30ACE1A7745127F79CB19F92894F67407E7CF (void);
// 0x0000002D System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean)
extern void Recognizer_Dispose_m41B4467C6470F75AD4C81138860A38D98B55E31B (void);
// 0x0000002E System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStarted(System.IntPtr,System.IntPtr,System.IntPtr)
extern void Recognizer_FireEvent_SetSessionStarted_m641F7510BE5E1426DD4EE2765007FCA37E86E0F7 (void);
// 0x0000002F System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStopped(System.IntPtr,System.IntPtr,System.IntPtr)
extern void Recognizer_FireEvent_SetSessionStopped_mA727407C3AAB48CD19521F3FFF7E163A0E63455C (void);
// 0x00000030 System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechStartDetected(System.IntPtr,System.IntPtr,System.IntPtr)
extern void Recognizer_FireEvent_SpeechStartDetected_m94DA4231F52F17425D472988B350E23C2A574C88 (void);
// 0x00000031 System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechEndDetected(System.IntPtr,System.IntPtr,System.IntPtr)
extern void Recognizer_FireEvent_SpeechEndDetected_m21C1A7D4CCC4E33EC2EA05B48E44CC604E36C705 (void);
// 0x00000032 System.Void Microsoft.CognitiveServices.Speech.Recognizer::DoAsyncRecognitionAction(System.Action)
extern void Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84 (void);
// 0x00000033 System.Void Microsoft.CognitiveServices.Speech.Recognizer::StartContinuousRecognition()
extern void Recognizer_StartContinuousRecognition_mB8E850543B3369010BFDC121ADC45B7F4D3EB0C2 (void);
// 0x00000034 System.Void Microsoft.CognitiveServices.Speech.Recognizer::StopContinuousRecognition()
extern void Recognizer_StopContinuousRecognition_mAB43FB36FA7F893031EE6EF33D7E980474FAE6D8 (void);
// 0x00000035 Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::FromConfig(Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate,Microsoft.CognitiveServices.Speech.SpeechConfig)
extern void Recognizer_FromConfig_m4175FC1D5C82C82271CA7D9D2DDC89DE92321C66 (void);
// 0x00000036 System.Void Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::.ctor(System.Object,System.IntPtr)
extern void GetRecognizerFromConfigDelegate__ctor_m8225A337DC771AF4368C036689A77F76D48D4567 (void);
// 0x00000037 System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::Invoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD (void);
// 0x00000038 System.Void Microsoft.CognitiveServices.Speech.SessionEventArgs::.ctor(System.IntPtr)
extern void SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA (void);
// 0x00000039 System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::get_SessionId()
extern void SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33 (void);
// 0x0000003A System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::ToString()
extern void SessionEventArgs_ToString_m7F7FB7E1EC6F286538A7AC9B79D9354A0C57938C (void);
// 0x0000003B System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::.ctor(System.IntPtr)
extern void SpeechConfig__ctor_m586768B4614A1778822601DF07F0319758E1BBE9 (void);
// 0x0000003C Microsoft.CognitiveServices.Speech.SpeechConfig Microsoft.CognitiveServices.Speech.SpeechConfig::FromSubscription(System.String,System.String)
extern void SpeechConfig_FromSubscription_m5CBC02A0591FF4C81402782CEE8E0770F5A359D2 (void);
// 0x0000003D System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::set_SpeechRecognitionLanguage(System.String)
extern void SpeechConfig_set_SpeechRecognitionLanguage_mD940965AA416B034AFFF01838B52C9E4A751AF41 (void);
// 0x0000003E System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::SetProperty(System.String,System.String)
extern void SpeechConfig_SetProperty_m9E79AA2A21F823E849F29921DA476988C2C4DF1C (void);
// 0x0000003F System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionResult::.ctor(System.IntPtr)
extern void SpeechRecognitionResult__ctor_mCCFDE1F4008AF5CEDAF8D163E8475887565BD056 (void);
// 0x00000040 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::.ctor(System.IntPtr)
extern void SpeechRecognitionEventArgs__ctor_mA12E8F0CEF640C514871ED1481C46B54CE92EE64 (void);
// 0x00000041 Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::get_Result()
extern void SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9 (void);
// 0x00000042 System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::ToString()
extern void SpeechRecognitionEventArgs_ToString_m16F0AE8AF18D2C923DA643953109C5012CB3306D (void);
// 0x00000043 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::.ctor(System.IntPtr)
extern void SpeechRecognitionCanceledEventArgs__ctor_mE27E61BE7835AF73A8C25DD3FA2205632C9DC107 (void);
// 0x00000044 Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_Reason()
extern void SpeechRecognitionCanceledEventArgs_get_Reason_m43CDCCC1311B234FB9F7C31BF966478DEB156815 (void);
// 0x00000045 Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_ErrorCode()
extern void SpeechRecognitionCanceledEventArgs_get_ErrorCode_m54BF697777056D1E09CEDB6E005095970A48B5D2 (void);
// 0x00000046 System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::ToString()
extern void SpeechRecognitionCanceledEventArgs_ToString_m4254A5E0769BEA2D983E83418E6F2645DC371EFF (void);
// 0x00000047 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_add__Recognizing_m16447A0416973172AB4D0CBAF6A8FC554B1E9294 (void);
// 0x00000048 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_remove__Recognizing_m5C73B8CE847979E6475EAC3240E7357FCA1F3E5F (void);
// 0x00000049 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_add__Recognized_mD50B625785C24BEBFF41F06CEB5D10434F934B83 (void);
// 0x0000004A System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_remove__Recognized_mD722671640B2B0B316AF08C40613843C781E17C0 (void);
// 0x0000004B System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern void SpeechRecognizer_add__Canceled_mCCA4C9985A5482241673E5F9DFAF8669412BA14B (void);
// 0x0000004C System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern void SpeechRecognizer_remove__Canceled_m7AA55C10EEAE710C0581D5B235852FB30D142CB9 (void);
// 0x0000004D System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_add_Recognizing_m889A7D105299CCC15B4C3D692703D12319E8AE2E (void);
// 0x0000004E System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_remove_Recognizing_mF69D0A164312B4697C2E10348F5AD94E4900032F (void);
// 0x0000004F System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_add_Recognized_mB6FFEF74D120F94577CEC4D793A63E77E571D3BE (void);
// 0x00000050 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_remove_Recognized_m1AC5A080571B5A7CD4032CFCC5334FF9129C6FFD (void);
// 0x00000051 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern void SpeechRecognizer_add_Canceled_m714F909F5101C0292E0FA4814214E31F8AA6A216 (void);
// 0x00000052 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern void SpeechRecognizer_remove_Canceled_m434BFE60418B882CEDA616FA1CADCD2F8C6DD962 (void);
// 0x00000053 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechConfig)
extern void SpeechRecognizer__ctor_m305BDA5F9788FBA4F444E31437F6C67589A11488 (void);
// 0x00000054 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void SpeechRecognizer__ctor_m8136931FE9EB168C0F793BDF081194CEED40BE0A (void);
// 0x00000055 Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::get_Properties()
extern void SpeechRecognizer_get_Properties_m1C0886BAAE462E98012C7EF3CED1E0314E341024 (void);
// 0x00000056 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
extern void SpeechRecognizer_set_Properties_mCEEEDD714A579195CF49B0F9E4609DFD1EE2C7FC (void);
// 0x00000057 System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.SpeechRecognizer::StartContinuousRecognitionAsync()
extern void SpeechRecognizer_StartContinuousRecognitionAsync_m1A15C93FACB936A88F8CF23F44FDEE3DE801AE09 (void);
// 0x00000058 System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.SpeechRecognizer::StopContinuousRecognitionAsync()
extern void SpeechRecognizer_StopContinuousRecognitionAsync_m470900781885522C896DF9884EDBCFB8990B5864 (void);
// 0x00000059 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Finalize()
extern void SpeechRecognizer_Finalize_m0DFC88D31A9612EB8E79AEFC3CAEACEDDF014C50 (void);
// 0x0000005A System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Dispose(System.Boolean)
extern void SpeechRecognizer_Dispose_mC62D82CBFB64A864B774FD0D2E3067C1428B7999 (void);
// 0x0000005B System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
extern void SpeechRecognizer_FireEvent_Recognizing_mC85B8A7E5FC2E2D4FC053DBD8AC419F17468EB4F (void);
// 0x0000005C System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
extern void SpeechRecognizer_FireEvent_Recognized_m1F3199AAADDAAAD62E3A93985B2668A9A23E8205 (void);
// 0x0000005D System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
extern void SpeechRecognizer_FireEvent_Canceled_mF0152E00B21076D0AA20D551D4659ED141BA2A87 (void);
// 0x0000005E System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::<StartContinuousRecognitionAsync>b__52_0()
extern void SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__52_0_m07A75A12B255723087B6E3627346D512EEF5C42C (void);
// 0x0000005F System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::<StopContinuousRecognitionAsync>b__53_0()
extern void SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__53_0_m53D17EDA2DC76DFA26F6D482A43710EDE49BD4B3 (void);
// 0x00000060 System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::.ctor(System.IntPtr)
extern void SpeechTranslationConfig__ctor_m49EEA16B549465C7EB65801FC0687EA30E6F7D5E (void);
// 0x00000061 Microsoft.CognitiveServices.Speech.SpeechTranslationConfig Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::FromSubscription(System.String,System.String)
extern void SpeechTranslationConfig_FromSubscription_mC29FB55004DF58DF535FA6337AA19861D03EA07C (void);
// 0x00000062 System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::AddTargetLanguage(System.String)
extern void SpeechTranslationConfig_AddTargetLanguage_m3A3E70E5FC18C24A5BA78D4AA646AD9294550713 (void);
// 0x00000063 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::.ctor(System.IntPtr)
extern void TranslationRecognitionResult__ctor_mEC410E2929DA5612330E8C4521CD1363E7105CA1 (void);
// 0x00000064 System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::get_Translations()
extern void TranslationRecognitionResult_get_Translations_mF40040BB24857FB1E87A6ACAEE7901DA628709F3 (void);
// 0x00000065 System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::ToString()
extern void TranslationRecognitionResult_ToString_m8B3AEE6468E0C7285288A622C0F0CA53307F45C8 (void);
// 0x00000066 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::GetTranslationTexts()
extern void TranslationRecognitionResult_GetTranslationTexts_m080C1A8E4A40D60797BC62D07B58E27AAB1A6687 (void);
// 0x00000067 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_add__Recognizing_m7F06A14055F7EA343EDB417019887749F95204BD (void);
// 0x00000068 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_remove__Recognizing_mDFCC6818686A988C4401D429A450539CDEAA1653 (void);
// 0x00000069 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_add__Recognized_mC948CE4C633F0B3989AB538E48CED770EAA2AB24 (void);
// 0x0000006A System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_remove__Recognized_mFA887E35EAAE84E06620A043A51B69403DDF9288 (void);
// 0x0000006B System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
extern void TranslationRecognizer_add__Canceled_mBC507ED133CE7C79ED21D94FCBDD56491F8DC04F (void);
// 0x0000006C System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
extern void TranslationRecognizer_remove__Canceled_m9764030E5C9EFF7B4C48AE21DD87E5BBC5E0640F (void);
// 0x0000006D System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_add_Recognizing_m5BAB5839D879D81073F27CA53AE6CB8337885B76 (void);
// 0x0000006E System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_remove_Recognizing_m932338A39761F4AC1E5F2928F029A33922DE2183 (void);
// 0x0000006F System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_add_Recognized_m1437E58C0813C018974685E579477BE1D1333BC9 (void);
// 0x00000070 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_remove_Recognized_mB68B184148E7F584F9B332A3576FC8C43678D082 (void);
// 0x00000071 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
extern void TranslationRecognizer_add_Canceled_mEE6EEF70DDDFD5CE94781584D40C4B5644068EC0 (void);
// 0x00000072 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
extern void TranslationRecognizer_remove_Canceled_mDE5EE8C9CA497FA63C4FED58130FCE8D4F840BA6 (void);
// 0x00000073 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechTranslationConfig)
extern void TranslationRecognizer__ctor_mE8AE805843C9D9A8663E4BA1AD18BE52928173DF (void);
// 0x00000074 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void TranslationRecognizer__ctor_m9474B62F13778D537B18BB26C58D7CD4DD2B13D6 (void);
// 0x00000075 Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::get_Properties()
extern void TranslationRecognizer_get_Properties_m041ED0EC39816383C2789C9784B00B7F50589ABF (void);
// 0x00000076 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
extern void TranslationRecognizer_set_Properties_m5576585D06ED00C702202DE79DA2E1DE600CA8C0 (void);
// 0x00000077 System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::StartContinuousRecognitionAsync()
extern void TranslationRecognizer_StartContinuousRecognitionAsync_m55412EFDF34D83FA6C1137AEACBF4971C98B3281 (void);
// 0x00000078 System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::StopContinuousRecognitionAsync()
extern void TranslationRecognizer_StopContinuousRecognitionAsync_m49E04468A3D122A341D532A8CEA61B770251AB13 (void);
// 0x00000079 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::Finalize()
extern void TranslationRecognizer_Finalize_mBD2AC4D93AB98B81003D56FC50214FF0531461D4 (void);
// 0x0000007A System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::Dispose(System.Boolean)
extern void TranslationRecognizer_Dispose_m319D91F26DCDA18C518359CA919A4B7D453F43F1 (void);
// 0x0000007B System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
extern void TranslationRecognizer_FireEvent_Recognizing_m17C8B5DC53375C671FD8E9F158A49378C62BD3D3 (void);
// 0x0000007C System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
extern void TranslationRecognizer_FireEvent_Recognized_m1A40021BFA25C2FB66E2E204DD020C3711F00B22 (void);
// 0x0000007D System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
extern void TranslationRecognizer_FireEvent_Canceled_mFD1B32ACF0B0EE83DE442139C160899879A51E46 (void);
// 0x0000007E System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_SynthesisResult(System.IntPtr,System.IntPtr,System.IntPtr)
extern void TranslationRecognizer_FireEvent_SynthesisResult_m8821CF5132DBD863346A36837637C0723E46F6E8 (void);
// 0x0000007F System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<StartContinuousRecognitionAsync>b__49_0()
extern void TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__49_0_mB7614A16ABF329DFEA2297D085D6D7BE15A54833 (void);
// 0x00000080 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<StopContinuousRecognitionAsync>b__50_0()
extern void TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__50_0_m43D1354FBDF91D1CD85A7F0A3AC13D804DADD4B3 (void);
// 0x00000081 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::.ctor(System.IntPtr)
extern void TranslationSynthesisResult__ctor_m5504E3A57CC4B725D64C1981A97FB918F653847F (void);
// 0x00000082 Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::get_Reason()
extern void TranslationSynthesisResult_get_Reason_mA851E1881441C4F278FA28AF75BE94B21DFC327F (void);
// 0x00000083 System.String Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::ToString()
extern void TranslationSynthesisResult_ToString_mC7A69F16165D4A7BB5622414AEA7CA34418E2CF4 (void);
// 0x00000084 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::GetAudioData(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void TranslationSynthesisResult_GetAudioData_mC7C4FABC68E4574F59A8D91513C4B4F560226DED (void);
// 0x00000085 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::.ctor(System.IntPtr)
extern void TranslationSynthesisEventArgs__ctor_m0A5A5BCAA5952B55D937B2971ED4AB6F46AFA100 (void);
// 0x00000086 Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::get_Result()
extern void TranslationSynthesisEventArgs_get_Result_mCA8BD226299930517C948A066CB4B247A304C515 (void);
// 0x00000087 System.String Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::ToString()
extern void TranslationSynthesisEventArgs_ToString_mE16282A6E080C3529B776C47B3DDF7C4501CD096 (void);
// 0x00000088 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::.ctor(System.IntPtr)
extern void TranslationRecognitionEventArgs__ctor_m8AF9A74DEA81084992DC783C79D2DFC81A1230A7 (void);
// 0x00000089 Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::get_Result()
extern void TranslationRecognitionEventArgs_get_Result_m047C28B1FF5C9231EF5D9CE4957C05CD2E4B5CDD (void);
// 0x0000008A System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::ToString()
extern void TranslationRecognitionEventArgs_ToString_mA6B067D8D6C5D0DAB3C26670987B1BE548B6827A (void);
// 0x0000008B System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::.ctor(System.IntPtr)
extern void TranslationRecognitionCanceledEventArgs__ctor_mC0DAD5191F911E2119197BF1876B9DFD46B7E630 (void);
// 0x0000008C Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_Reason()
extern void TranslationRecognitionCanceledEventArgs_get_Reason_m93D03951586AFFFF3DF9AD531E90A6A6AC5A2809 (void);
// 0x0000008D Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_ErrorCode()
extern void TranslationRecognitionCanceledEventArgs_get_ErrorCode_mCD275DF83031DDBD93498938B45A578946631D24 (void);
// 0x0000008E System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::ToString()
extern void TranslationRecognitionCanceledEventArgs_ToString_m9DCCAC9E91B16CE2A22B213F823A0A32EDE8DFA9 (void);
// 0x0000008F System.Object[] Microsoft.CognitiveServices.Speech.Internal.Diagnostics::Args(System.Object[])
extern void Diagnostics_Args_mDCDEA6887D47370C68291C5097A9E602B0B572B5 (void);
// 0x00000090 System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Int32,System.String,System.String)
extern void Diagnostics_SPX_TRACE_VERBOSE_m461DD416BC0A2D9A142D0B9F4C664D18143B96FF (void);
// 0x00000091 System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Object[],System.Int32,System.String,System.String)
extern void Diagnostics_SPX_TRACE_VERBOSE_mCE40F2444CF745BDF2E551F36C2065AC9FFFC5F9 (void);
// 0x00000092 System.Void Microsoft.CognitiveServices.Speech.Internal.DotNetFrameworkAnyCpuSupport::Initialize()
extern void DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332 (void);
// 0x00000093 System.Void Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::.cctor()
extern void CancellationDetails__cctor_mBEB7D958D2D09294C4BBD616934A9A42D6292E3E (void);
// 0x00000094 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_reason_canceled(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationReason&)
extern void CancellationDetails_result_get_reason_canceled_m2409DAC9A1FF682EDB03314E16DCBA148314D6B3 (void);
// 0x00000095 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_canceled_error_code(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationErrorCode&)
extern void CancellationDetails_result_get_canceled_error_code_mCDE21F5EDFB5BA60E964C0CE460F74BF4EC55A74 (void);
// 0x00000096 System.Void Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::.cctor()
extern void SpeechConfig__cctor_m7122FDABA765CCAE9E9844545B7AA07E65A9243F (void);
// 0x00000097 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_from_subscription(System.IntPtr&,System.String,System.String)
extern void SpeechConfig_speech_config_from_subscription_m3DEB42078EDD7746FD487010903FEA00D90900D3 (void);
// 0x00000098 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_release(System.IntPtr)
extern void SpeechConfig_speech_config_release_mA9578DF67E5F130B18A3B8B7FB8567B28D802BA4 (void);
// 0x00000099 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void SpeechConfig_speech_config_get_property_bag_mC63C86FC0B561E654C02E74E5FA2422401E4BCAA (void);
// 0x0000009A System.Void Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::.cctor()
extern void SpeechTranslationConfig__cctor_mC704B77892C75D9DEF9A15D823AC351DC910872D (void);
// 0x0000009B System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_from_subscription(System.IntPtr&,System.String,System.String)
extern void SpeechTranslationConfig_speech_translation_config_from_subscription_m4C0F48066FF2492F9E8F47507F3BACD51ACDE0EB (void);
// 0x0000009C System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_add_target_language(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.String)
extern void SpeechTranslationConfig_speech_translation_config_add_target_language_m0AD094DCDB4706C83B0F3C8839B077191D925B8A (void);
// 0x0000009D System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::.cctor()
extern void DiagnosticsInterop__cctor_m8B3A8BAC343F54DA27CED74A94A75ED4D27A7537 (void);
// 0x0000009E System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::diagnostics_log_trace_string(System.Int32,System.String,System.String,System.Int32,System.String)
extern void DiagnosticsInterop_diagnostics_log_trace_string_mC082C4D355C2E875686E6FA011052567BC208E5B (void);
// 0x0000009F System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::.cctor()
extern void SpxError__cctor_m26F27A784D2DFA07811AB4A6376066A85B12CC44 (void);
// 0x000000A0 System.String Microsoft.CognitiveServices.Speech.Internal.SpxError::GetMessage(System.IntPtr)
extern void SpxError_GetMessage_mE9B98B4B6AB48FDC221BBB8A8ABF51CCD7B45864 (void);
// 0x000000A1 System.Int32 Microsoft.CognitiveServices.Speech.Internal.SpxError::GetErrorCode(System.IntPtr)
extern void SpxError_GetErrorCode_m4B6341D56629F25358D246B76DD650A8E1974BB6 (void);
// 0x000000A2 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::Release(System.IntPtr)
extern void SpxError_Release_mB9B1180BC0AD85536AE68C00A6320204E3D8812A (void);
// 0x000000A3 System.Boolean Microsoft.CognitiveServices.Speech.Internal.SpxError::ReleaseNoThrow(System.IntPtr)
extern void SpxError_ReleaseNoThrow_m5FB663A7041D968F8339C0C5891DD79A01755754 (void);
// 0x000000A4 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_message(System.IntPtr)
extern void SpxError_error_get_message_m2EB925EDBB9C1747CC78CFA9C3887DB63E1121FF (void);
// 0x000000A5 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_error_code(System.IntPtr)
extern void SpxError_error_get_error_code_m275D112661979DFB5BBF7AFA6EAB0DA45CE8C7D5 (void);
// 0x000000A6 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_release(System.IntPtr)
extern void SpxError_error_release_m8E082C5F6552726FA2BD8031657DC4942AE702AC (void);
// 0x000000A7 System.Void Microsoft.CognitiveServices.Speech.Internal.EventArgs::.cctor()
extern void EventArgs__cctor_m302E0D6CEEDB9BDC8D1D38604F8D285B1DD954F8 (void);
// 0x000000A8 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.EventArgs::recognizer_event_handle_release(System.IntPtr)
extern void EventArgs_recognizer_event_handle_release_mDA02276B5C17D15AAC40D012354B19C2036BE6FE (void);
// 0x000000A9 System.Void Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern void MonoPInvokeCallbackAttribute__ctor_mCD6247FB473E269B565E8D2DFF089C409A664062 (void);
// 0x000000AA System.Void Microsoft.CognitiveServices.Speech.Internal.HandleRelease::.ctor(System.Object,System.IntPtr)
extern void HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7 (void);
// 0x000000AB System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::Invoke(System.IntPtr)
extern void HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB (void);
// 0x000000AC System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.HandleRelease)
extern void InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62 (void);
// 0x000000AD System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::get_IsInvalid()
extern void InteropSafeHandle_get_IsInvalid_m0C613C6DFCD587AC5C04CE6F23DCECFB223233EA (void);
// 0x000000AE System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ReleaseHandle()
extern void InteropSafeHandle_ReleaseHandle_m2F321C7B0B2E77403444A781A5279CC74038AE3E (void);
// 0x000000AF System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Dispose(System.Boolean)
extern void InteropSafeHandle_Dispose_mC58913907DC7D23E82426AC45B50333CD885BDFC (void);
// 0x000000B0 T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle(System.IntPtr)
// 0x000000B1 System.String Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ToString()
extern void InteropSafeHandle_ToString_m1A7805107A6C1BB682B234E53FDCBC8C06604CC9 (void);
// 0x000000B2 System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Finalize()
extern void InteropSafeHandle_Finalize_m83ABB6C2604BB75B5BB1A007DEF8ED9D78620503 (void);
// 0x000000B3 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory::.cctor()
extern void SpxFactory__cctor_m4BB68A04E62A96852C374DEE4D7D751167B02E57 (void);
// 0x000000B4 System.String Microsoft.CognitiveServices.Speech.Internal.SpxFactory::GetDataFromHandleUsingDelegate(Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32)
extern void SpxFactory_GetDataFromHandleUsingDelegate_mA284C8A162A111BE768AF9E347B6D74753AD238D (void);
// 0x000000B5 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::recognizer_create_speech_recognizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void SpxFactory_recognizer_create_speech_recognizer_from_config_m4EE9A793506E319CF430427772F4F1494543A067 (void);
// 0x000000B6 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::recognizer_create_translation_recognizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void SpxFactory_recognizer_create_translation_recognizer_from_config_m3729F9507E6B0659297532B1296142F59AC9E16B (void);
// 0x000000B7 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::.ctor(System.Object,System.IntPtr)
extern void GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314 (void);
// 0x000000B8 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::Invoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern void GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280 (void);
// 0x000000B9 System.Void Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::.cctor()
extern void PropertyCollection__cctor_mD5B1A5034EA0352927781A90400CE9F536E5623A (void);
// 0x000000BA System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_set_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
extern void PropertyCollection_property_bag_set_string_m560E9C1D207F12D2F29289986814E739D7D5F5AC (void);
// 0x000000BB System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_get_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
extern void PropertyCollection_property_bag_get_string_m85C22CC8AADAD49A93EBEAC06E243F29F897BE1D (void);
// 0x000000BC System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_free_string(System.IntPtr)
extern void PropertyCollection_property_bag_free_string_m800EB31CCD2E85E0DFCA2F1355B137D919CC83F9 (void);
// 0x000000BD System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_release(System.IntPtr)
extern void PropertyCollection_property_bag_release_mEE19009AAC5E2984AD636297392382E086A42E9A (void);
// 0x000000BE System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_reason(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.ResultReason&)
extern void RecognitionResult_result_get_reason_mB22E2CCDD110DEC44AD292325BAF8CBCBD77089C (void);
// 0x000000BF System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_result_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern void RecognitionResult_result_get_result_id_m9502FF6B24BD822E33C9C8453CB7EE06F510035D (void);
// 0x000000C0 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_text(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern void RecognitionResult_result_get_text_mA7F1307B026F922E2CD4B260F686F45FA661844D (void);
// 0x000000C1 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void RecognitionResult_result_get_property_bag_m821908DAA6239D92C4DDA591D92F3BA6770A0EBF (void);
// 0x000000C2 System.Boolean Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_is_valid(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void RecognitionResult_recognizer_result_handle_is_valid_m8353972B72D31F49BB55ACE8F797DD4F92DBC440 (void);
// 0x000000C3 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_release(System.IntPtr)
extern void RecognitionResult_recognizer_result_handle_release_m9FC496DA00E94757F730641DFF06C371E45644D7 (void);
// 0x000000C4 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_text_result_get_translation_count(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UIntPtr&)
extern void RecognitionResult_translation_text_result_get_translation_count_m0E9FF9C675F4E98324B160D60512B7440FA7B561 (void);
// 0x000000C5 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_text_result_get_translation(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UIntPtr,Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle,Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle,System.UIntPtr&,System.UIntPtr&)
extern void RecognitionResult_translation_text_result_get_translation_mF003C3EB7A62C13EAF79EC3D4E1A73FB920AE809 (void);
// 0x000000C6 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_synthesis_result_get_audio_data(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
extern void RecognitionResult_translation_synthesis_result_get_audio_data_m8C4437638C590C15AB7071D1589E4B8BEE3CCD2A (void);
// 0x000000C7 System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::.ctor(System.Object,System.IntPtr)
extern void CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6 (void);
// 0x000000C8 System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7 (void);
// 0x000000C9 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void Recognizer_recognizer_get_property_bag_mBABDBA1B6D8FBA89AA8F7EE89A3696B2260107F9 (void);
// 0x000000CA System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_handle_release(System.IntPtr)
extern void Recognizer_recognizer_handle_release_mF92E200D447EA3683E5F7BB0C161C0234D6DBA18 (void);
// 0x000000CB System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void Recognizer_recognizer_start_continuous_recognition_async_mFE3B06A762EE00FF838458427E2F952FB5407BCF (void);
// 0x000000CC System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
extern void Recognizer_recognizer_start_continuous_recognition_async_wait_for_m268ED182DC8D366E209F9F1AB84BE422EC684FC9 (void);
// 0x000000CD System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void Recognizer_recognizer_stop_continuous_recognition_async_m69D0B06E76D75CF53DE02D6A404B05D6FBA22755 (void);
// 0x000000CE System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
extern void Recognizer_recognizer_stop_continuous_recognition_async_wait_for_m09E1A2510DDB56EB568761E56CCFF6338FEDF50E (void);
// 0x000000CF System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_async_handle_release(System.IntPtr)
extern void Recognizer_recognizer_async_handle_release_mD1E72A888C8A7F733BBCA13265EE0FCCC57CBE7B (void);
// 0x000000D0 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_offset(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&)
extern void Recognizer_recognizer_recognition_event_get_offset_m3353D90846CA1D744E0F1EEB82A52320F767AD68 (void);
// 0x000000D1 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_event_get_session_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern void Recognizer_recognizer_session_event_get_session_id_m19AEE7F994037064C324319645D814B64D14E165 (void);
// 0x000000D2 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_result(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void Recognizer_recognizer_recognition_event_get_result_mF0E0E2260FB3AE5D58E7F828258F477B17C30E2B (void);
// 0x000000D3 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_started_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_session_started_set_callback_mF7269B2257F45837CCEC187E3EF7E0688CC445D7 (void);
// 0x000000D4 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_stopped_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_session_stopped_set_callback_m949170C5C61445F50B9C5480550D2AD4F7CE97D0 (void);
// 0x000000D5 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_start_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_speech_start_detected_set_callback_m0EC66A25005B9C859A5897F59611FB88272A8F4A (void);
// 0x000000D6 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_end_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_speech_end_detected_set_callback_mCD9730AB877903CBAC9CE3FE89EC42975EEE9883 (void);
// 0x000000D7 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognizing_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_recognizing_set_callback_m191FB76BFA8D594D949CCA2F0D8780C001ADFEEE (void);
// 0x000000D8 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognized_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_recognized_set_callback_mF0B30872D6EAAE2A0DC15E02D87FE13A15C5EABB (void);
// 0x000000D9 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_canceled_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_canceled_set_callback_m67781166E6D72910FC2767718B4667615A9CAD95 (void);
// 0x000000DA System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::translator_synthesizing_audio_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_translator_synthesizing_audio_set_callback_m0FD523ED521FB94BE327B95BE9876568D6FF8CF5 (void);
// 0x000000DB System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.IntPtr)
extern void SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33 (void);
// 0x000000DC System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.Object,System.String)
extern void SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66 (void);
// 0x000000DD System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.IntPtr,System.String)
extern void SpxExceptionThrower_ThrowIfNull_m8BD4674A12DCA98CDD6818FD8F3D4721ADD38308 (void);
// 0x000000DE System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogErrorIfFail(System.IntPtr)
extern void SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F (void);
// 0x000000DF System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogError(System.String)
extern void SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562 (void);
// 0x000000E0 System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr)
extern void Utf8StringMarshaler_MarshalNativeToManaged_m1880DC13C87D09223E562FF88DBFB188219203E1 (void);
// 0x000000E1 System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr,System.Int32)
extern void Utf8StringMarshaler_MarshalNativeToManaged_m70188DCC0BBF343875B0FC908360B3A2D62BA41C (void);
// 0x000000E2 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String)
extern void Utf8StringMarshaler_MarshalManagedToNative_mA2A5D5D755F5CBDC9B03E312EF298838134D8B1A (void);
// 0x000000E3 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String,System.Int32&)
extern void Utf8StringMarshaler_MarshalManagedToNative_m3E540F085F553C8ED22C810E96FD1B920DE847C5 (void);
// 0x000000E4 System.Void Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::.ctor(System.UInt32)
extern void Utf8StringHandle__ctor_mD34C2052B76C3D83A0F720690F1C70E50743232A (void);
// 0x000000E5 System.Void Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::.ctor()
extern void Utf8StringHandle__ctor_m88DFF0E652E83213BD6D93F3CE066760916F0AEA (void);
// 0x000000E6 System.UInt32 Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::get_Length()
extern void Utf8StringHandle_get_Length_mDD8F79BC55C56CE25DAFB5D7264D884E44FA5724 (void);
// 0x000000E7 System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::ToString()
extern void Utf8StringHandle_ToString_mFA4E763D1DB7E2BA29BC48ADDF7834F12A0C023F (void);
// 0x000000E8 System.Boolean Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::get_IsInvalid()
extern void Utf8StringHandle_get_IsInvalid_m3C21504F73E486815724CAED602554563AD78A2F (void);
// 0x000000E9 System.Boolean Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::ReleaseHandle()
extern void Utf8StringHandle_ReleaseHandle_mAABAE993E9459FF588988AEEFE2C27F48D2A48F6 (void);
// 0x000000EA System.Void Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::.cctor()
extern void Utf8StringHandle__cctor_mF21B1F89E7660DC9F2E862450A9505B27D673B8D (void);
static Il2CppMethodPointer s_methodPointers[234] = 
{
	PropertyCollection__ctor_m8F53EB9B9655888D9E2B7AEBB9460B49265618B7,
	PropertyCollection_Close_mD3C12EE3FDB07C2A9D8C5E7C35C968E5A299BD9F,
	PropertyCollection_GetProperty_mC3CEE491F6DF720BDAE92D54A47E6420DCF146B5,
	PropertyCollection_SetProperty_mA4F3EDF9EE715D7F2C052E11948FCF36A4400024,
	PropertyCollection_SetProperty_m32FCC0FEE788D8E7BC18427D47C37535F389EC94,
	PropertyCollection_GetPropertyString_mE4586EBDDDD6EAAC938A0717F3ED064BF55EB83A,
	RecognitionEventArgs__ctor_m16B7E8B089A37C27BC87BEA572A1E4B2EA9E7B34,
	RecognitionEventArgs_get_Offset_m7518854BD1D37BB220A79F81301A0A07E7D791A9,
	RecognitionEventArgs_ToString_mF2E5686250B94CC3327CD6EB9EC1F89F365E8788,
	RecognitionResult__ctor_mF52685BDF0D0D81056CF4F2D7929B837D3E4504E,
	RecognitionResult_get_ResultId_m9CF0F0A305756122CEFD17C636900B33C167A973,
	RecognitionResult_get_Reason_m066811BCC260ED5344D289BE7930228203781E67,
	RecognitionResult_get_Text_mDC9F2CE6BE9519B218C81FECCC1BC35CA7274836,
	RecognitionResult_get_Properties_mBC89268B2B6560AC90F7EE6837AB6E3657B212D3,
	RecognitionResult_set_Properties_m4882E5F4FF2BD9889CA0D982BA14CB48E6936468,
	RecognitionResult_ToString_m7C6EE65B05B5F984DB102F9041EFDA7403547F95,
	CancellationDetails_FromResult_m601E12548DEFE4F1D895C4E927442D35FEE17541,
	CancellationDetails__ctor_m5ECA54A2F0D76D1BF8E39C7AEF5DCC99D8672E26,
	CancellationDetails_get_Reason_m353778943984FF273C594BBB7D83D519C0B58180,
	CancellationDetails_set_Reason_m12D27884D7BBCF9EC1908A1DFF49066DEF4EF2B5,
	CancellationDetails_get_ErrorCode_m01B8889CC68F1443F822B1E8082F6B8378C723AF,
	CancellationDetails_set_ErrorCode_m78B75A1457D448E18D427A192E95A964218C8A74,
	CancellationDetails_get_ErrorDetails_mB3C4D6386464A3C5168B7EEFAAE45EC62EF95636,
	CancellationDetails_set_ErrorDetails_m22095079546C7E7DC32D28BB7D2271B3E68ACE93,
	CancellationDetails_ToString_m5E209DF29443488B64A6A0635234FD138DA3853B,
	Recognizer_add__SessionStarted_m631F4CB4BF55A534C3A8CB8EAEC57EE7139BE4CD,
	Recognizer_remove__SessionStarted_m1FB4C79584D375A664EFB1916F4127D741FBA016,
	Recognizer_add__SessionStopped_mC531DA001A86C34512638EC7AD42682AD216D32E,
	Recognizer_remove__SessionStopped_m75B4EAF7FE72A73C707DD5AD1CD02D2A82F48AAA,
	Recognizer_add__SpeechStartDetected_mC7B7A06E0F81282B1A983A1B99887C9E558BB750,
	Recognizer_remove__SpeechStartDetected_m3DB6ED1521289E1BCB5BF3032F68C2452A2F8830,
	Recognizer_add__SpeechEndDetected_m22831739B45057F6783CF4C784E8829A1A7D27A3,
	Recognizer_remove__SpeechEndDetected_m335107F7B597E13480CF0F21EB83795CFFC9B4D8,
	Recognizer_add_SessionStarted_mB7176B7EFAA7EF6CC237B3D46C760A7C309968BD,
	Recognizer_remove_SessionStarted_m80E3AA294063F4AC3B94DFC9268FB59E4ACEE3AC,
	Recognizer_add_SessionStopped_mE532CD715B13EE7A206285576688D2F091B716AA,
	Recognizer_remove_SessionStopped_m07F4261BD9721CA3EBEB2322AF5887A3089D04B7,
	Recognizer_add_SpeechStartDetected_mA70F8631EF165EC1924C86E7DE622BAEC1A84EC6,
	Recognizer_remove_SpeechStartDetected_m36A954D8D9CEA2A39057AE2D3E23FB0BA262B8C1,
	Recognizer_add_SpeechEndDetected_mD340F4717F391593D8DB5A538E983F114F9079F7,
	Recognizer_remove_SpeechEndDetected_mAC602E23E1C084A837A4068BB933C82A6329EBA4,
	Recognizer__ctor_mB448C82F7106784983B2332E0C35FAC613A10A05,
	Recognizer_Finalize_m65C041518559BC7332B58EC3BD23603D6FAEA7F5,
	Recognizer_Dispose_m53C30ACE1A7745127F79CB19F92894F67407E7CF,
	Recognizer_Dispose_m41B4467C6470F75AD4C81138860A38D98B55E31B,
	Recognizer_FireEvent_SetSessionStarted_m641F7510BE5E1426DD4EE2765007FCA37E86E0F7,
	Recognizer_FireEvent_SetSessionStopped_mA727407C3AAB48CD19521F3FFF7E163A0E63455C,
	Recognizer_FireEvent_SpeechStartDetected_m94DA4231F52F17425D472988B350E23C2A574C88,
	Recognizer_FireEvent_SpeechEndDetected_m21C1A7D4CCC4E33EC2EA05B48E44CC604E36C705,
	Recognizer_DoAsyncRecognitionAction_m83046B03472BABA6160D5C56198373502725FE84,
	Recognizer_StartContinuousRecognition_mB8E850543B3369010BFDC121ADC45B7F4D3EB0C2,
	Recognizer_StopContinuousRecognition_mAB43FB36FA7F893031EE6EF33D7E980474FAE6D8,
	Recognizer_FromConfig_m4175FC1D5C82C82271CA7D9D2DDC89DE92321C66,
	GetRecognizerFromConfigDelegate__ctor_m8225A337DC771AF4368C036689A77F76D48D4567,
	GetRecognizerFromConfigDelegate_Invoke_m186F198255E0AFC6B9A20C2689202A1BFF62C4FD,
	SessionEventArgs__ctor_m240C60ECA28570ED5A8FF624C62BAE2EBA25A5AA,
	SessionEventArgs_get_SessionId_m8963B1EBE96E2EC946789DE47BBC4A17292FDF33,
	SessionEventArgs_ToString_m7F7FB7E1EC6F286538A7AC9B79D9354A0C57938C,
	SpeechConfig__ctor_m586768B4614A1778822601DF07F0319758E1BBE9,
	SpeechConfig_FromSubscription_m5CBC02A0591FF4C81402782CEE8E0770F5A359D2,
	SpeechConfig_set_SpeechRecognitionLanguage_mD940965AA416B034AFFF01838B52C9E4A751AF41,
	SpeechConfig_SetProperty_m9E79AA2A21F823E849F29921DA476988C2C4DF1C,
	SpeechRecognitionResult__ctor_mCCFDE1F4008AF5CEDAF8D163E8475887565BD056,
	SpeechRecognitionEventArgs__ctor_mA12E8F0CEF640C514871ED1481C46B54CE92EE64,
	SpeechRecognitionEventArgs_get_Result_m775B21D1681EC803EE52F6FA345D0B5AB14D40D9,
	SpeechRecognitionEventArgs_ToString_m16F0AE8AF18D2C923DA643953109C5012CB3306D,
	SpeechRecognitionCanceledEventArgs__ctor_mE27E61BE7835AF73A8C25DD3FA2205632C9DC107,
	SpeechRecognitionCanceledEventArgs_get_Reason_m43CDCCC1311B234FB9F7C31BF966478DEB156815,
	SpeechRecognitionCanceledEventArgs_get_ErrorCode_m54BF697777056D1E09CEDB6E005095970A48B5D2,
	SpeechRecognitionCanceledEventArgs_ToString_m4254A5E0769BEA2D983E83418E6F2645DC371EFF,
	SpeechRecognizer_add__Recognizing_m16447A0416973172AB4D0CBAF6A8FC554B1E9294,
	SpeechRecognizer_remove__Recognizing_m5C73B8CE847979E6475EAC3240E7357FCA1F3E5F,
	SpeechRecognizer_add__Recognized_mD50B625785C24BEBFF41F06CEB5D10434F934B83,
	SpeechRecognizer_remove__Recognized_mD722671640B2B0B316AF08C40613843C781E17C0,
	SpeechRecognizer_add__Canceled_mCCA4C9985A5482241673E5F9DFAF8669412BA14B,
	SpeechRecognizer_remove__Canceled_m7AA55C10EEAE710C0581D5B235852FB30D142CB9,
	SpeechRecognizer_add_Recognizing_m889A7D105299CCC15B4C3D692703D12319E8AE2E,
	SpeechRecognizer_remove_Recognizing_mF69D0A164312B4697C2E10348F5AD94E4900032F,
	SpeechRecognizer_add_Recognized_mB6FFEF74D120F94577CEC4D793A63E77E571D3BE,
	SpeechRecognizer_remove_Recognized_m1AC5A080571B5A7CD4032CFCC5334FF9129C6FFD,
	SpeechRecognizer_add_Canceled_m714F909F5101C0292E0FA4814214E31F8AA6A216,
	SpeechRecognizer_remove_Canceled_m434BFE60418B882CEDA616FA1CADCD2F8C6DD962,
	SpeechRecognizer__ctor_m305BDA5F9788FBA4F444E31437F6C67589A11488,
	SpeechRecognizer__ctor_m8136931FE9EB168C0F793BDF081194CEED40BE0A,
	SpeechRecognizer_get_Properties_m1C0886BAAE462E98012C7EF3CED1E0314E341024,
	SpeechRecognizer_set_Properties_mCEEEDD714A579195CF49B0F9E4609DFD1EE2C7FC,
	SpeechRecognizer_StartContinuousRecognitionAsync_m1A15C93FACB936A88F8CF23F44FDEE3DE801AE09,
	SpeechRecognizer_StopContinuousRecognitionAsync_m470900781885522C896DF9884EDBCFB8990B5864,
	SpeechRecognizer_Finalize_m0DFC88D31A9612EB8E79AEFC3CAEACEDDF014C50,
	SpeechRecognizer_Dispose_mC62D82CBFB64A864B774FD0D2E3067C1428B7999,
	SpeechRecognizer_FireEvent_Recognizing_mC85B8A7E5FC2E2D4FC053DBD8AC419F17468EB4F,
	SpeechRecognizer_FireEvent_Recognized_m1F3199AAADDAAAD62E3A93985B2668A9A23E8205,
	SpeechRecognizer_FireEvent_Canceled_mF0152E00B21076D0AA20D551D4659ED141BA2A87,
	SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__52_0_m07A75A12B255723087B6E3627346D512EEF5C42C,
	SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__53_0_m53D17EDA2DC76DFA26F6D482A43710EDE49BD4B3,
	SpeechTranslationConfig__ctor_m49EEA16B549465C7EB65801FC0687EA30E6F7D5E,
	SpeechTranslationConfig_FromSubscription_mC29FB55004DF58DF535FA6337AA19861D03EA07C,
	SpeechTranslationConfig_AddTargetLanguage_m3A3E70E5FC18C24A5BA78D4AA646AD9294550713,
	TranslationRecognitionResult__ctor_mEC410E2929DA5612330E8C4521CD1363E7105CA1,
	TranslationRecognitionResult_get_Translations_mF40040BB24857FB1E87A6ACAEE7901DA628709F3,
	TranslationRecognitionResult_ToString_m8B3AEE6468E0C7285288A622C0F0CA53307F45C8,
	TranslationRecognitionResult_GetTranslationTexts_m080C1A8E4A40D60797BC62D07B58E27AAB1A6687,
	TranslationRecognizer_add__Recognizing_m7F06A14055F7EA343EDB417019887749F95204BD,
	TranslationRecognizer_remove__Recognizing_mDFCC6818686A988C4401D429A450539CDEAA1653,
	TranslationRecognizer_add__Recognized_mC948CE4C633F0B3989AB538E48CED770EAA2AB24,
	TranslationRecognizer_remove__Recognized_mFA887E35EAAE84E06620A043A51B69403DDF9288,
	TranslationRecognizer_add__Canceled_mBC507ED133CE7C79ED21D94FCBDD56491F8DC04F,
	TranslationRecognizer_remove__Canceled_m9764030E5C9EFF7B4C48AE21DD87E5BBC5E0640F,
	TranslationRecognizer_add_Recognizing_m5BAB5839D879D81073F27CA53AE6CB8337885B76,
	TranslationRecognizer_remove_Recognizing_m932338A39761F4AC1E5F2928F029A33922DE2183,
	TranslationRecognizer_add_Recognized_m1437E58C0813C018974685E579477BE1D1333BC9,
	TranslationRecognizer_remove_Recognized_mB68B184148E7F584F9B332A3576FC8C43678D082,
	TranslationRecognizer_add_Canceled_mEE6EEF70DDDFD5CE94781584D40C4B5644068EC0,
	TranslationRecognizer_remove_Canceled_mDE5EE8C9CA497FA63C4FED58130FCE8D4F840BA6,
	TranslationRecognizer__ctor_mE8AE805843C9D9A8663E4BA1AD18BE52928173DF,
	TranslationRecognizer__ctor_m9474B62F13778D537B18BB26C58D7CD4DD2B13D6,
	TranslationRecognizer_get_Properties_m041ED0EC39816383C2789C9784B00B7F50589ABF,
	TranslationRecognizer_set_Properties_m5576585D06ED00C702202DE79DA2E1DE600CA8C0,
	TranslationRecognizer_StartContinuousRecognitionAsync_m55412EFDF34D83FA6C1137AEACBF4971C98B3281,
	TranslationRecognizer_StopContinuousRecognitionAsync_m49E04468A3D122A341D532A8CEA61B770251AB13,
	TranslationRecognizer_Finalize_mBD2AC4D93AB98B81003D56FC50214FF0531461D4,
	TranslationRecognizer_Dispose_m319D91F26DCDA18C518359CA919A4B7D453F43F1,
	TranslationRecognizer_FireEvent_Recognizing_m17C8B5DC53375C671FD8E9F158A49378C62BD3D3,
	TranslationRecognizer_FireEvent_Recognized_m1A40021BFA25C2FB66E2E204DD020C3711F00B22,
	TranslationRecognizer_FireEvent_Canceled_mFD1B32ACF0B0EE83DE442139C160899879A51E46,
	TranslationRecognizer_FireEvent_SynthesisResult_m8821CF5132DBD863346A36837637C0723E46F6E8,
	TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__49_0_mB7614A16ABF329DFEA2297D085D6D7BE15A54833,
	TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__50_0_m43D1354FBDF91D1CD85A7F0A3AC13D804DADD4B3,
	TranslationSynthesisResult__ctor_m5504E3A57CC4B725D64C1981A97FB918F653847F,
	TranslationSynthesisResult_get_Reason_mA851E1881441C4F278FA28AF75BE94B21DFC327F,
	TranslationSynthesisResult_ToString_mC7A69F16165D4A7BB5622414AEA7CA34418E2CF4,
	TranslationSynthesisResult_GetAudioData_mC7C4FABC68E4574F59A8D91513C4B4F560226DED,
	TranslationSynthesisEventArgs__ctor_m0A5A5BCAA5952B55D937B2971ED4AB6F46AFA100,
	TranslationSynthesisEventArgs_get_Result_mCA8BD226299930517C948A066CB4B247A304C515,
	TranslationSynthesisEventArgs_ToString_mE16282A6E080C3529B776C47B3DDF7C4501CD096,
	TranslationRecognitionEventArgs__ctor_m8AF9A74DEA81084992DC783C79D2DFC81A1230A7,
	TranslationRecognitionEventArgs_get_Result_m047C28B1FF5C9231EF5D9CE4957C05CD2E4B5CDD,
	TranslationRecognitionEventArgs_ToString_mA6B067D8D6C5D0DAB3C26670987B1BE548B6827A,
	TranslationRecognitionCanceledEventArgs__ctor_mC0DAD5191F911E2119197BF1876B9DFD46B7E630,
	TranslationRecognitionCanceledEventArgs_get_Reason_m93D03951586AFFFF3DF9AD531E90A6A6AC5A2809,
	TranslationRecognitionCanceledEventArgs_get_ErrorCode_mCD275DF83031DDBD93498938B45A578946631D24,
	TranslationRecognitionCanceledEventArgs_ToString_m9DCCAC9E91B16CE2A22B213F823A0A32EDE8DFA9,
	Diagnostics_Args_mDCDEA6887D47370C68291C5097A9E602B0B572B5,
	Diagnostics_SPX_TRACE_VERBOSE_m461DD416BC0A2D9A142D0B9F4C664D18143B96FF,
	Diagnostics_SPX_TRACE_VERBOSE_mCE40F2444CF745BDF2E551F36C2065AC9FFFC5F9,
	DotNetFrameworkAnyCpuSupport_Initialize_mC77F1BBB8B7C245B755C2E6649E18DA59943A332,
	CancellationDetails__cctor_mBEB7D958D2D09294C4BBD616934A9A42D6292E3E,
	CancellationDetails_result_get_reason_canceled_m2409DAC9A1FF682EDB03314E16DCBA148314D6B3,
	CancellationDetails_result_get_canceled_error_code_mCDE21F5EDFB5BA60E964C0CE460F74BF4EC55A74,
	SpeechConfig__cctor_m7122FDABA765CCAE9E9844545B7AA07E65A9243F,
	SpeechConfig_speech_config_from_subscription_m3DEB42078EDD7746FD487010903FEA00D90900D3,
	SpeechConfig_speech_config_release_mA9578DF67E5F130B18A3B8B7FB8567B28D802BA4,
	SpeechConfig_speech_config_get_property_bag_mC63C86FC0B561E654C02E74E5FA2422401E4BCAA,
	SpeechTranslationConfig__cctor_mC704B77892C75D9DEF9A15D823AC351DC910872D,
	SpeechTranslationConfig_speech_translation_config_from_subscription_m4C0F48066FF2492F9E8F47507F3BACD51ACDE0EB,
	SpeechTranslationConfig_speech_translation_config_add_target_language_m0AD094DCDB4706C83B0F3C8839B077191D925B8A,
	DiagnosticsInterop__cctor_m8B3A8BAC343F54DA27CED74A94A75ED4D27A7537,
	DiagnosticsInterop_diagnostics_log_trace_string_mC082C4D355C2E875686E6FA011052567BC208E5B,
	SpxError__cctor_m26F27A784D2DFA07811AB4A6376066A85B12CC44,
	SpxError_GetMessage_mE9B98B4B6AB48FDC221BBB8A8ABF51CCD7B45864,
	SpxError_GetErrorCode_m4B6341D56629F25358D246B76DD650A8E1974BB6,
	SpxError_Release_mB9B1180BC0AD85536AE68C00A6320204E3D8812A,
	SpxError_ReleaseNoThrow_m5FB663A7041D968F8339C0C5891DD79A01755754,
	SpxError_error_get_message_m2EB925EDBB9C1747CC78CFA9C3887DB63E1121FF,
	SpxError_error_get_error_code_m275D112661979DFB5BBF7AFA6EAB0DA45CE8C7D5,
	SpxError_error_release_m8E082C5F6552726FA2BD8031657DC4942AE702AC,
	EventArgs__cctor_m302E0D6CEEDB9BDC8D1D38604F8D285B1DD954F8,
	EventArgs_recognizer_event_handle_release_mDA02276B5C17D15AAC40D012354B19C2036BE6FE,
	MonoPInvokeCallbackAttribute__ctor_mCD6247FB473E269B565E8D2DFF089C409A664062,
	HandleRelease__ctor_m5265A47915D90FC04F512F3D1BC68A711343A4E7,
	HandleRelease_Invoke_m5A6CE4A6071A868B9695E55991957B8C520128EB,
	InteropSafeHandle__ctor_mC37ECE3504FFCF1C3A565E45B1659808FD310B62,
	InteropSafeHandle_get_IsInvalid_m0C613C6DFCD587AC5C04CE6F23DCECFB223233EA,
	InteropSafeHandle_ReleaseHandle_m2F321C7B0B2E77403444A781A5279CC74038AE3E,
	InteropSafeHandle_Dispose_mC58913907DC7D23E82426AC45B50333CD885BDFC,
	NULL,
	InteropSafeHandle_ToString_m1A7805107A6C1BB682B234E53FDCBC8C06604CC9,
	InteropSafeHandle_Finalize_m83ABB6C2604BB75B5BB1A007DEF8ED9D78620503,
	SpxFactory__cctor_m4BB68A04E62A96852C374DEE4D7D751167B02E57,
	SpxFactory_GetDataFromHandleUsingDelegate_mA284C8A162A111BE768AF9E347B6D74753AD238D,
	SpxFactory_recognizer_create_speech_recognizer_from_config_m4EE9A793506E319CF430427772F4F1494543A067,
	SpxFactory_recognizer_create_translation_recognizer_from_config_m3729F9507E6B0659297532B1296142F59AC9E16B,
	GetResultDelegate__ctor_mE4D38F6D4B3F9FBE85FE26118D690DD00A195314,
	GetResultDelegate_Invoke_mB1E1810F9B48533717B0A387D1AEEDE06AFDD280,
	PropertyCollection__cctor_mD5B1A5034EA0352927781A90400CE9F536E5623A,
	PropertyCollection_property_bag_set_string_m560E9C1D207F12D2F29289986814E739D7D5F5AC,
	PropertyCollection_property_bag_get_string_m85C22CC8AADAD49A93EBEAC06E243F29F897BE1D,
	PropertyCollection_property_bag_free_string_m800EB31CCD2E85E0DFCA2F1355B137D919CC83F9,
	PropertyCollection_property_bag_release_mEE19009AAC5E2984AD636297392382E086A42E9A,
	RecognitionResult_result_get_reason_mB22E2CCDD110DEC44AD292325BAF8CBCBD77089C,
	RecognitionResult_result_get_result_id_m9502FF6B24BD822E33C9C8453CB7EE06F510035D,
	RecognitionResult_result_get_text_mA7F1307B026F922E2CD4B260F686F45FA661844D,
	RecognitionResult_result_get_property_bag_m821908DAA6239D92C4DDA591D92F3BA6770A0EBF,
	RecognitionResult_recognizer_result_handle_is_valid_m8353972B72D31F49BB55ACE8F797DD4F92DBC440,
	RecognitionResult_recognizer_result_handle_release_m9FC496DA00E94757F730641DFF06C371E45644D7,
	RecognitionResult_translation_text_result_get_translation_count_m0E9FF9C675F4E98324B160D60512B7440FA7B561,
	RecognitionResult_translation_text_result_get_translation_mF003C3EB7A62C13EAF79EC3D4E1A73FB920AE809,
	RecognitionResult_translation_synthesis_result_get_audio_data_m8C4437638C590C15AB7071D1589E4B8BEE3CCD2A,
	CallbackFunctionDelegate__ctor_m242A4949B6999B19FDCBCCB89CBBD60A2D8AB7A6,
	CallbackFunctionDelegate_Invoke_m2DB00DC2A53AF471906D80BFF8EC4378B6F81EE7,
	Recognizer_recognizer_get_property_bag_mBABDBA1B6D8FBA89AA8F7EE89A3696B2260107F9,
	Recognizer_recognizer_handle_release_mF92E200D447EA3683E5F7BB0C161C0234D6DBA18,
	Recognizer_recognizer_start_continuous_recognition_async_mFE3B06A762EE00FF838458427E2F952FB5407BCF,
	Recognizer_recognizer_start_continuous_recognition_async_wait_for_m268ED182DC8D366E209F9F1AB84BE422EC684FC9,
	Recognizer_recognizer_stop_continuous_recognition_async_m69D0B06E76D75CF53DE02D6A404B05D6FBA22755,
	Recognizer_recognizer_stop_continuous_recognition_async_wait_for_m09E1A2510DDB56EB568761E56CCFF6338FEDF50E,
	Recognizer_recognizer_async_handle_release_mD1E72A888C8A7F733BBCA13265EE0FCCC57CBE7B,
	Recognizer_recognizer_recognition_event_get_offset_m3353D90846CA1D744E0F1EEB82A52320F767AD68,
	Recognizer_recognizer_session_event_get_session_id_m19AEE7F994037064C324319645D814B64D14E165,
	Recognizer_recognizer_recognition_event_get_result_mF0E0E2260FB3AE5D58E7F828258F477B17C30E2B,
	Recognizer_recognizer_session_started_set_callback_mF7269B2257F45837CCEC187E3EF7E0688CC445D7,
	Recognizer_recognizer_session_stopped_set_callback_m949170C5C61445F50B9C5480550D2AD4F7CE97D0,
	Recognizer_recognizer_speech_start_detected_set_callback_m0EC66A25005B9C859A5897F59611FB88272A8F4A,
	Recognizer_recognizer_speech_end_detected_set_callback_mCD9730AB877903CBAC9CE3FE89EC42975EEE9883,
	Recognizer_recognizer_recognizing_set_callback_m191FB76BFA8D594D949CCA2F0D8780C001ADFEEE,
	Recognizer_recognizer_recognized_set_callback_mF0B30872D6EAAE2A0DC15E02D87FE13A15C5EABB,
	Recognizer_recognizer_canceled_set_callback_m67781166E6D72910FC2767718B4667615A9CAD95,
	Recognizer_translator_synthesizing_audio_set_callback_m0FD523ED521FB94BE327B95BE9876568D6FF8CF5,
	SpxExceptionThrower_ThrowIfFail_mE86256DABDB6706C506978D7B81EE11C20D5DB33,
	SpxExceptionThrower_ThrowIfNull_m0D23C67E817692823A62659D3F71E34F9B25BE66,
	SpxExceptionThrower_ThrowIfNull_m8BD4674A12DCA98CDD6818FD8F3D4721ADD38308,
	SpxExceptionThrower_LogErrorIfFail_m4A22EFCACC33298D747D98C5FB4879F1B079629F,
	SpxExceptionThrower_LogError_m346EFBD748FC0E065531268CBF4CABE4B12FA562,
	Utf8StringMarshaler_MarshalNativeToManaged_m1880DC13C87D09223E562FF88DBFB188219203E1,
	Utf8StringMarshaler_MarshalNativeToManaged_m70188DCC0BBF343875B0FC908360B3A2D62BA41C,
	Utf8StringMarshaler_MarshalManagedToNative_mA2A5D5D755F5CBDC9B03E312EF298838134D8B1A,
	Utf8StringMarshaler_MarshalManagedToNative_m3E540F085F553C8ED22C810E96FD1B920DE847C5,
	Utf8StringHandle__ctor_mD34C2052B76C3D83A0F720690F1C70E50743232A,
	Utf8StringHandle__ctor_m88DFF0E652E83213BD6D93F3CE066760916F0AEA,
	Utf8StringHandle_get_Length_mDD8F79BC55C56CE25DAFB5D7264D884E44FA5724,
	Utf8StringHandle_ToString_mFA4E763D1DB7E2BA29BC48ADDF7834F12A0C023F,
	Utf8StringHandle_get_IsInvalid_m3C21504F73E486815724CAED602554563AD78A2F,
	Utf8StringHandle_ReleaseHandle_mAABAE993E9459FF588988AEEFE2C27F48D2A48F6,
	Utf8StringHandle__cctor_mF21B1F89E7660DC9F2E862450A9505B27D673B8D,
};
static const int32_t s_InvokerIndices[234] = 
{
	7014,
	8767,
	6275,
	3805,
	4095,
	1393,
	7014,
	8748,
	8617,
	7014,
	8617,
	8573,
	8617,
	8617,
	7051,
	8617,
	12507,
	7051,
	8573,
	7012,
	8573,
	7012,
	8617,
	7051,
	8617,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	8767,
	8767,
	6926,
	11028,
	11028,
	11028,
	11028,
	7051,
	8767,
	8767,
	11595,
	4090,
	1906,
	7014,
	8617,
	8617,
	7014,
	11595,
	7051,
	4095,
	7014,
	7014,
	8617,
	8617,
	7014,
	8573,
	8573,
	8617,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	8617,
	7051,
	8617,
	8617,
	8767,
	6926,
	11028,
	11028,
	11028,
	8767,
	8767,
	7014,
	11595,
	7051,
	7014,
	8617,
	8617,
	8767,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	7051,
	8617,
	7051,
	8617,
	8617,
	8767,
	6926,
	11028,
	11028,
	11028,
	11028,
	8767,
	8767,
	7014,
	8573,
	8617,
	7051,
	7014,
	8617,
	8617,
	7014,
	8617,
	8617,
	7014,
	8573,
	8573,
	8617,
	12507,
	10387,
	9852,
	13018,
	13018,
	11519,
	11519,
	13018,
	10710,
	12389,
	11519,
	13018,
	10710,
	11522,
	13018,
	9786,
	13018,
	12505,
	12352,
	12751,
	12211,
	12389,
	12389,
	12389,
	13018,
	12389,
	7051,
	4090,
	6175,
	4049,
	8486,
	8486,
	6926,
	0,
	8617,
	8767,
	13018,
	10787,
	10710,
	10710,
	4090,
	1909,
	13018,
	10201,
	10201,
	12389,
	12389,
	11519,
	10727,
	10727,
	11519,
	12214,
	12389,
	11519,
	9231,
	10724,
	4090,
	2159,
	11519,
	12389,
	11519,
	11518,
	11519,
	11518,
	12389,
	11519,
	10727,
	11519,
	10729,
	10729,
	10729,
	10729,
	10729,
	10729,
	10729,
	10729,
	12751,
	11947,
	11886,
	12751,
	12754,
	12505,
	11574,
	12390,
	11519,
	7167,
	8767,
	8747,
	8617,
	8486,
	8486,
	13018,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[11] = 
{
	{ 0x0600002E, 31,  (void**)&Recognizer_FireEvent_SetSessionStarted_m641F7510BE5E1426DD4EE2765007FCA37E86E0F7_RuntimeMethod_var, 0 },
	{ 0x0600002F, 32,  (void**)&Recognizer_FireEvent_SetSessionStopped_mA727407C3AAB48CD19521F3FFF7E163A0E63455C_RuntimeMethod_var, 0 },
	{ 0x06000030, 34,  (void**)&Recognizer_FireEvent_SpeechStartDetected_m94DA4231F52F17425D472988B350E23C2A574C88_RuntimeMethod_var, 0 },
	{ 0x06000031, 33,  (void**)&Recognizer_FireEvent_SpeechEndDetected_m21C1A7D4CCC4E33EC2EA05B48E44CC604E36C705_RuntimeMethod_var, 0 },
	{ 0x0600005B, 37,  (void**)&SpeechRecognizer_FireEvent_Recognizing_mC85B8A7E5FC2E2D4FC053DBD8AC419F17468EB4F_RuntimeMethod_var, 0 },
	{ 0x0600005C, 36,  (void**)&SpeechRecognizer_FireEvent_Recognized_m1F3199AAADDAAAD62E3A93985B2668A9A23E8205_RuntimeMethod_var, 0 },
	{ 0x0600005D, 35,  (void**)&SpeechRecognizer_FireEvent_Canceled_mF0152E00B21076D0AA20D551D4659ED141BA2A87_RuntimeMethod_var, 0 },
	{ 0x0600007B, 40,  (void**)&TranslationRecognizer_FireEvent_Recognizing_m17C8B5DC53375C671FD8E9F158A49378C62BD3D3_RuntimeMethod_var, 0 },
	{ 0x0600007C, 39,  (void**)&TranslationRecognizer_FireEvent_Recognized_m1A40021BFA25C2FB66E2E204DD020C3711F00B22_RuntimeMethod_var, 0 },
	{ 0x0600007D, 38,  (void**)&TranslationRecognizer_FireEvent_Canceled_mFD1B32ACF0B0EE83DE442139C160899879A51E46_RuntimeMethod_var, 0 },
	{ 0x0600007E, 41,  (void**)&TranslationRecognizer_FireEvent_SynthesisResult_m8821CF5132DBD863346A36837637C0723E46F6E8_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x060000B0, { 0, 1 } },
};
extern const uint32_t g_rgctx_T_t4FCC6C9595A3F0001E00F53DC40396D113AF1138;
static const Il2CppRGCTXDefinition s_rgctxValues[1] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t4FCC6C9595A3F0001E00F53DC40396D113AF1138 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Microsoft_CognitiveServices_Speech_csharp_CodeGenModule;
const Il2CppCodeGenModule g_Microsoft_CognitiveServices_Speech_csharp_CodeGenModule = 
{
	"Microsoft.CognitiveServices.Speech.csharp.dll",
	234,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	11,
	s_reversePInvokeIndices,
	1,
	s_rgctxIndices,
	1,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
