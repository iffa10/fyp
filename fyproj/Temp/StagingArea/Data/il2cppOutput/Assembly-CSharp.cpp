#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Bullet
struct Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059;
// CameraMovement
struct CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4;
// Enemy
struct Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6;
// EnemyHealth
struct EnemyHealth_t91A76AF6E61D8332F27A81B9566060F33FCA4490;
// Holder
struct Holder_tBC04476AC1BB69D8FAF7EF93B49402612407F571;
// Playerattack
struct Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A;
// Playercollision
struct Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70;
// Playercollision/<DamageAndRespawn>d__7
struct U3CDamageAndRespawnU3Ed__7_tFE5FE3A25F64F8CF61F9697B98F2ED3DACD43E0D;
// Playerhealth
struct Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D;
// Playerweapons
struct Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED;
// Score
struct Score_t72F7EE757BE7D4C7846803B3072753760AB6427F;
// SelfDestroy
struct SelfDestroy_t914E0DDB257662ECE11BA3AA2280DE94351400CB;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tBD8EC4B76F43452C94F917208E05C2D58675DF45;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Decimal[]
struct DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_t3716FACB20DDAEDCF9983923B863439DEBC48B26;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t3471517F295554C58A5696039A423587414FB73E;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tABE518DC1E2361D29583B0048AF69206C12C9E1C;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652;
// TMPro.TMP_Character
struct TMP_Character_t1875AACA978396521498D6A699052C187903553D;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487;
// TMPro.TMP_Style
struct TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505;
// TMPro.TMP_TextElement
struct TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_tFBA4A77A904C2C565B037C9DAD4364D042A8E642;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000;
// UnityEngine.Animator
struct Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.CapsuleCollider2D
struct CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612;
// UnityEngine.Collider2D
struct Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379;
// UnityEngine.Collision2D
struct Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Material[]
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// audiomanage
struct audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C;
// laddermovement
struct laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852;
// movingplatform
struct movingplatform_t0D588BFE0201AFB7B61C9145E7B9BA65425AE205;
// playermanage
struct playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED;
// playermovement
struct playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829;
// timer
struct timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF;

IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_tB21970F986016656D66D2922594F336E1EE7D5C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Score_t72F7EE757BE7D4C7846803B3072753760AB6427F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDamageAndRespawnU3Ed__7_tFE5FE3A25F64F8CF61F9697B98F2ED3DACD43E0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0BF3D1DE57B0E0D5550E4F198758D6FEE9204DC1;
IL2CPP_EXTERN_C String_t* _stringLiteral282E9F1EAF5A364D47C022D164E00BBA0C02400E;
IL2CPP_EXTERN_C String_t* _stringLiteral2BEF474E8ADD043EDABBCD740EBFE95A8DFC2AFA;
IL2CPP_EXTERN_C String_t* _stringLiteral39666B0975ECFACE1F6F3E4AE375286F14DD9C1D;
IL2CPP_EXTERN_C String_t* _stringLiteral48842D0B8FC7D20CBC2C208BFC566E8C1E94781E;
IL2CPP_EXTERN_C String_t* _stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5;
IL2CPP_EXTERN_C String_t* _stringLiteral4BACED13B23DF5B4880CE0A6307D2BFE0F1F1398;
IL2CPP_EXTERN_C String_t* _stringLiteral4CED366ED04E58AF33574DE99B99E30F4B58E9D0;
IL2CPP_EXTERN_C String_t* _stringLiteral4DD819B7801B7A76FD9F8FF96FD5B3F04726A5B7;
IL2CPP_EXTERN_C String_t* _stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C;
IL2CPP_EXTERN_C String_t* _stringLiteral658500433395E394FC3859014B67F67A842F229D;
IL2CPP_EXTERN_C String_t* _stringLiteral69C6FA8468D332A8338354A74CE92AA8DA8A642A;
IL2CPP_EXTERN_C String_t* _stringLiteral7E90B60025F1250542C8998FB53AB8D5B98CF53F;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C2B2DBD55587FBE09C934BA1E7C1336CFFDE50;
IL2CPP_EXTERN_C String_t* _stringLiteralACDAC205F5E24CB75113C4B281A2C13F08B75159;
IL2CPP_EXTERN_C String_t* _stringLiteralB55223C7BDC7651DC4282BA46FC1616DC273128B;
IL2CPP_EXTERN_C String_t* _stringLiteralB98DA0CCC81F4F734434572F19CCC66972AAE344;
IL2CPP_EXTERN_C String_t* _stringLiteralD6ADAF3EF20EFDCE82D4E7C605CE3B9477A493C8;
IL2CPP_EXTERN_C String_t* _stringLiteralD7D390BD9EBAC6BFA0B17AB10695FE73916EBCC2;
IL2CPP_EXTERN_C String_t* _stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8;
IL2CPP_EXTERN_C String_t* _stringLiteralEC65A740F5A00CAFE7C7FB6DE725FE369C87F0DE;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBullet_t1B228DBA3982FDB21DE04329BDC49915421B9059_mAED244333A256E7C1EE2291E7DF2D96A67CC0256_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612_m51F2595169CB099FA35B5DBFD9F9E056DF0324E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A_m81D6561DCA00F3E4A0B91496D90E5C2BB6BC15D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_Tisplayermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829_m5C8A19BDB5FB6D8F13E29A27B63B5A7AAFC4F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m9904EA7E80165F7771F8AB3967F417D7C2B09996_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBullet_t1B228DBA3982FDB21DE04329BDC49915421B9059_mC44AB386177196D8110F3E6D8F0E814D44438271_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612_m27D05C4F2D900E576EAD91DF736CF51F44A8B847_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6_m8BB5FCD3A37037A3C39DD740890AB53C64092BB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A_mEEA96AA4CD8350D27556234CD4946C9EFFA54F40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED_m2168DECB7048B3A3E06E3BD27EA62EBB74779633_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mDDB82F02C3053DCC0D60C420752A11EC11CBACC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mD25CEAAA219FA1235F8E88F914D2F8AC57303538_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisaudiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C_m07410B9FF809C92B8554B9C0A328C0EC4CC6930F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisplayermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829_mF35FD95F01588A91BF13DBA5D119A3B1405C6931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlayerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D_m7248AC8188BE8A91708094FADDDF6EDD55A2464D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_Tisaudiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C_m6B11E9D7150D09C76EAB555F0F095868B5B011D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_Tisplayermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829_mFC72C2A4AD0CF07310D2418E7A58AC9D9A87E987_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_Tistimer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF_mF0133F41F229C4867B0A5034DE2DEDD86D2EC208_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m6895A7A231540279E01A537649EB42814FD2671B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDamageAndRespawnU3Ed__7_System_Collections_IEnumerator_Reset_m438F1749ABDD38422B62D2275A8EDF47077AB0F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Bullet_OnCollisionEnter2D_m1B740B8F3B8F31AF86A1A1D403A187698A3849FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enemy_OnCollisionEnter2D_m14964A08E1C6434FCE554C2A77688314DDC56AEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enemy_Start_m0681B66D4522F045EB7A33A21467994960D1E435_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enemy_Update_mE957FE3BFB8CBB7C30E43D4A81C13E02B1C1FC32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Holder_NextLevel_mC3ECE13BD452E017C751CACDE1A25B6200DCE26A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Playerattack_DeflectBullet_mFA9ACFDE869B8314D5AEC74648E27F9D66414457_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Playerattack_OnTriggerEnter2D_m9C7B7D24B8D4082AC2533B217D6296BF7065E491_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Playerattack_ShootWithsorcerySword_mF180AFD3AF8CCC90B1F462F26612E43B01D15CF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Playerattack_Start_m9BAD0714FE4E6B31D2F37907A3CD08360DC2D507_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Playerattack_Update_mB025780DAFB267F59BA272240940126AED455124_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Playercollision_Awake_mD6CBE0E82E3686DF7B1094F9E0FFF1BA37308D03_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Playercollision_DamageAndRespawn_m7E00604E7AAEE3250DBC9147E6EB3147A177E3BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Playercollision_OnCollisionEnter2D_mFA0340B85BA0CC30CBC0A5734BE2562444FFDF0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Playercollision_Start_mD0437A0E315EBE84AD37451C401CC009116ED87D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Playerweapons_Start_m451F427EA6BBA74A40B7C407729F842A06A85E41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Playerweapons_UpdateWeaponVisibility_m778A1D154C5B17E5ED53B757445E5848BB71863D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Score_AddScore_mDFF2FB349F9539FB9F2772AFAC327700A70D43CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Score_Awake_m481CF8ED9C2A4383D06EEEEE40EA8A0D6D4E85AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Score_OnTriggerEnter2D_mCFBE9F1449DFEEA7B69D473560A240656540463C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Score_PlayCollectSound_m3699BDFD7E77CADB8668AE43359AB89F98DCE8A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Score_Start_m1821AC2C6C0505E9EEFA5DD52733BE5C3037AD9E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Score_UpdateEndGameScores_m1B675FAE0931AC435A86FE1887E92DA4A1BF9CC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SelfDestroy_OnStateEnter_m0EDED9979791F6C8AD3AAEB1A4620A78F3A05450_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDamageAndRespawnU3Ed__7_MoveNext_mB3CA9C95956A52D7F7321AA01B2C64B776E3ABA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDamageAndRespawnU3Ed__7_System_Collections_IEnumerator_Reset_m438F1749ABDD38422B62D2275A8EDF47077AB0F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t laddermovement_OnTriggerEnter2D_m599E69D19D04D26EA14027F581B60501896C0C02_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t laddermovement_OnTriggerExit2D_m913897E85A3F385F3568CEC5B49C67410D2A0A72_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t laddermovement_Update_m189D6B40E44307FE2A6C88FCF5BCF04F155D08CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t movingplatform_OnCollisionEnter2D_m506A36D0370A1DC931E4E20E6EFE17CC374D94A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t movingplatform_OnCollisionExit2D_mEC19D6772A3569181F2C532C8A3F272C4C9F49FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t movingplatform_Start_mB4EABA0E833C19C2F3BBB164106A43A439715EC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t movingplatform_Update_m5A1878222C61CB5A8E294C0F952518CFF0DE7F4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t playermanage_Awake_m39560A109DAD81D069B6E705BA7D2EE3DDC17FC5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t playermanage_RestartLevel_mA14727685E6D2480A3601A07B1ABB8E9B37BA084_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t playermanage_StartGame_m009A898100E232677CF4F0FA8ACA446D86C43148_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t playermanage_Update_mFA7138DD3BEAF8D3FF314ADBA76385D8499E2F01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t playermovement_Awake_m5B11967F50279D1D39EEE8A9D1349DBA643CC231_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t playermovement_IsOnGround_mDC56B6676D61908A1036EE3DF9477B8F3E72D931_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t playermovement_OnTriggerEnter2D_m00389DB6B6A0FBBCCC1983794B9027D4861CF5AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t playermovement_Start_m95A22B0B4999AA2DEC4456D872C8EF5BAE26DD12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t playermovement_Update_m271A4FC276CB56C7888E86E831030A2AA0EE49B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t timer_ResetTimer_m6EB5E593C5DE43CB2E87A613B6BDBC465B26DD3B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t timer_Start_m25648FFD8B94129AF357194D3B35624B5C20F990_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t timer_UpdateTimerDisplay_m22FBD1123F734EEE851E7ACACA637D9A8CFA6EA0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t timer_Update_mDE49AA4A3DA13A34454D3315B0FD169C05E1E544_MetadataUsageId;
struct ContactPoint2D_t7DE4097DD62E4240F4629EBB41F4BF089141E2C0 ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
struct SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7;
struct ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object


// Playercollision/<DamageAndRespawn>d__7
struct U3CDamageAndRespawnU3Ed__7_tFE5FE3A25F64F8CF61F9697B98F2ED3DACD43E0D  : public RuntimeObject
{
public:
	// System.Int32 Playercollision/<DamageAndRespawn>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Playercollision/<DamageAndRespawn>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Playercollision Playercollision/<DamageAndRespawn>d__7::<>4__this
	Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDamageAndRespawnU3Ed__7_tFE5FE3A25F64F8CF61F9697B98F2ED3DACD43E0D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDamageAndRespawnU3Ed__7_tFE5FE3A25F64F8CF61F9697B98F2ED3DACD43E0D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDamageAndRespawnU3Ed__7_tFE5FE3A25F64F8CF61F9697B98F2ED3DACD43E0D, ___U3CU3E4__this_2)); }
	inline Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fontAsset_1)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___material_3)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_3() const { return ___material_3; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fallbackMaterial_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 
{
public:
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

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_Offset
struct TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};

struct TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  value)
	{
		___k_ZeroOffset_4 = value;
	}
};


// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF 
{
public:
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF, ___character_0)); }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D * get_character_0() const { return ___character_0; }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D ** get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(TMP_Character_t1875AACA978396521498D6A699052C187903553D * value)
	{
		___character_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_0), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF, ___fontAsset_1)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF, ___material_2)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_2() const { return ___material_2; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_2), (void*)value);
	}

	inline static int32_t get_offset_of_materialIndex_3() { return static_cast<int32_t>(offsetof(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF, ___materialIndex_3)); }
	inline int32_t get_materialIndex_3() const { return ___materialIndex_3; }
	inline int32_t* get_address_of_materialIndex_3() { return &___materialIndex_3; }
	inline void set_materialIndex_3(int32_t value)
	{
		___materialIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF_marshaled_pinvoke
{
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___character_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF_marshaled_com
{
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___character_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA 
{
public:
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA, ___m_Array_0)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_m_Array_0() const { return ___m_Array_0; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Count_1() { return static_cast<int32_t>(offsetof(TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA, ___m_Count_1)); }
	inline int32_t get_m_Count_1() const { return ___m_Count_1; }
	inline int32_t* get_address_of_m_Count_1() { return &___m_Count_1; }
	inline void set_m_Count_1(int32_t value)
	{
		___m_Count_1 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___itemStack_0;
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

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4, ___itemStack_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___itemStack_0;
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

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A, ___itemStack_0)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A, ___m_DefaultItem_2)); }
	inline float get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline float* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(float value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___m_DefaultItem_2)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};


// UnityEngine.Color
struct Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
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

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// TMPro.ColorMode
struct ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.Extents
struct Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___max_3;

public:
	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___min_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_min_2() const { return ___min_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___max_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_max_3() const { return ___max_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___max_3 = value;
	}
};

struct Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_StaticFields
{
public:
	// TMPro.Extents TMPro.Extents::zero
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___uninitialized_1;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_StaticFields, ___zero_0)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_zero_0() const { return ___zero_0; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___zero_0 = value;
	}

	inline static int32_t get_offset_of_uninitialized_1() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_StaticFields, ___uninitialized_1)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_uninitialized_1() const { return ___uninitialized_1; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_uninitialized_1() { return &___uninitialized_1; }
	inline void set_uninitialized_1(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___uninitialized_1 = value;
	}
};


// TMPro.FontStyles
struct FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.HighlightState
struct HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601, ___color_0)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_color_0() const { return ___color_0; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601, ___padding_1)); }
	inline TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  value)
	{
		___padding_1 = value;
	}
};


// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tC75AF4FA369C73A4CDEF3AA5C313BA8576DB516F 
{
public:
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalAlignmentOptions_tC75AF4FA369C73A4CDEF3AA5C313BA8576DB516F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4 
{
public:
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextElementType
struct TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___m_DefaultItem_2)); }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___itemStack_0)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___m_DefaultItem_2)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topLeft_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topRight_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topRight_1() const { return ___topRight_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomLeft_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomRight_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_t52EA4E859AFA2147B9B1433C87D5CE5FE568FFB6 
{
public:
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalAlignmentOptions_t52EA4E859AFA2147B9B1433C87D5CE5FE568FFB6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Collision2D
struct Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_RelativeVelocity_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t7DE4097DD62E4240F4629EBB41F4BF089141E2C0 * ___m_ReusedContacts_7;
	ContactPoint2D_t7DE4097DD62E4240F4629EBB41F4BF089141E2C0 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t7DE4097DD62E4240F4629EBB41F4BF089141E2C0 * ___m_ReusedContacts_7;
	ContactPoint2D_t7DE4097DD62E4240F4629EBB41F4BF089141E2C0 * ___m_LegacyContacts_8;
};

// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WeaponType
struct WeaponType_t18D78839A412436998D988A551CA4640823B2B4D 
{
public:
	// System.Int32 WeaponType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WeaponType_t18D78839A412436998D988A551CA4640823B2B4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// TMPro.TMP_LineInfo
struct TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 
{
public:
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
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineExtents_19)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___lineExtents_19 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* ___itemStack_0;
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

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___itemStack_0)); }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* get_itemStack_0() const { return ___itemStack_0; }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___itemStack_0)); }
	inline HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE* get_itemStack_0() const { return ___itemStack_0; }
	inline HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___m_DefaultItem_2)); }
	inline HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB* ___itemStack_0;
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

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___itemStack_0)); }
	inline HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB* get_itemStack_0() const { return ___itemStack_0; }
	inline HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 
{
public:
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
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_startOfLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___startOfLineAscender_13)); }
	inline float get_startOfLineAscender_13() const { return ___startOfLineAscender_13; }
	inline float* get_address_of_startOfLineAscender_13() { return &___startOfLineAscender_13; }
	inline void set_startOfLineAscender_13(float value)
	{
		___startOfLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineAscender_14)); }
	inline float get_maxLineAscender_14() const { return ___maxLineAscender_14; }
	inline float* get_address_of_maxLineAscender_14() { return &___maxLineAscender_14; }
	inline void set_maxLineAscender_14(float value)
	{
		___maxLineAscender_14 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineDescender_15)); }
	inline float get_maxLineDescender_15() const { return ___maxLineDescender_15; }
	inline float* get_address_of_maxLineDescender_15() { return &___maxLineDescender_15; }
	inline void set_maxLineDescender_15(float value)
	{
		___maxLineDescender_15 = value;
	}

	inline static int32_t get_offset_of_pageAscender_16() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___pageAscender_16)); }
	inline float get_pageAscender_16() const { return ___pageAscender_16; }
	inline float* get_address_of_pageAscender_16() { return &___pageAscender_16; }
	inline void set_pageAscender_16(float value)
	{
		___pageAscender_16 = value;
	}

	inline static int32_t get_offset_of_horizontalAlignment_17() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___horizontalAlignment_17)); }
	inline int32_t get_horizontalAlignment_17() const { return ___horizontalAlignment_17; }
	inline int32_t* get_address_of_horizontalAlignment_17() { return &___horizontalAlignment_17; }
	inline void set_horizontalAlignment_17(int32_t value)
	{
		___horizontalAlignment_17 = value;
	}

	inline static int32_t get_offset_of_marginLeft_18() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___marginLeft_18)); }
	inline float get_marginLeft_18() const { return ___marginLeft_18; }
	inline float* get_address_of_marginLeft_18() { return &___marginLeft_18; }
	inline void set_marginLeft_18(float value)
	{
		___marginLeft_18 = value;
	}

	inline static int32_t get_offset_of_marginRight_19() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___marginRight_19)); }
	inline float get_marginRight_19() const { return ___marginRight_19; }
	inline float* get_address_of_marginRight_19() { return &___marginRight_19; }
	inline void set_marginRight_19(float value)
	{
		___marginRight_19 = value;
	}

	inline static int32_t get_offset_of_xAdvance_20() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___xAdvance_20)); }
	inline float get_xAdvance_20() const { return ___xAdvance_20; }
	inline float* get_address_of_xAdvance_20() { return &___xAdvance_20; }
	inline void set_xAdvance_20(float value)
	{
		___xAdvance_20 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_21() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredWidth_21)); }
	inline float get_preferredWidth_21() const { return ___preferredWidth_21; }
	inline float* get_address_of_preferredWidth_21() { return &___preferredWidth_21; }
	inline void set_preferredWidth_21(float value)
	{
		___preferredWidth_21 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_22() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredHeight_22)); }
	inline float get_preferredHeight_22() const { return ___preferredHeight_22; }
	inline float* get_address_of_preferredHeight_22() { return &___preferredHeight_22; }
	inline void set_preferredHeight_22(float value)
	{
		___preferredHeight_22 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_23() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previousLineScale_23)); }
	inline float get_previousLineScale_23() const { return ___previousLineScale_23; }
	inline float* get_address_of_previousLineScale_23() { return &___previousLineScale_23; }
	inline void set_previousLineScale_23(float value)
	{
		___previousLineScale_23 = value;
	}

	inline static int32_t get_offset_of_wordCount_24() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___wordCount_24)); }
	inline int32_t get_wordCount_24() const { return ___wordCount_24; }
	inline int32_t* get_address_of_wordCount_24() { return &___wordCount_24; }
	inline void set_wordCount_24(int32_t value)
	{
		___wordCount_24 = value;
	}

	inline static int32_t get_offset_of_fontStyle_25() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontStyle_25)); }
	inline int32_t get_fontStyle_25() const { return ___fontStyle_25; }
	inline int32_t* get_address_of_fontStyle_25() { return &___fontStyle_25; }
	inline void set_fontStyle_25(int32_t value)
	{
		___fontStyle_25 = value;
	}

	inline static int32_t get_offset_of_italicAngle_26() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___italicAngle_26)); }
	inline int32_t get_italicAngle_26() const { return ___italicAngle_26; }
	inline int32_t* get_address_of_italicAngle_26() { return &___italicAngle_26; }
	inline void set_italicAngle_26(int32_t value)
	{
		___italicAngle_26 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_27() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontScaleMultiplier_27)); }
	inline float get_fontScaleMultiplier_27() const { return ___fontScaleMultiplier_27; }
	inline float* get_address_of_fontScaleMultiplier_27() { return &___fontScaleMultiplier_27; }
	inline void set_fontScaleMultiplier_27(float value)
	{
		___fontScaleMultiplier_27 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_28() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontSize_28)); }
	inline float get_currentFontSize_28() const { return ___currentFontSize_28; }
	inline float* get_address_of_currentFontSize_28() { return &___currentFontSize_28; }
	inline void set_currentFontSize_28(float value)
	{
		___currentFontSize_28 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_29() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineOffset_29)); }
	inline float get_baselineOffset_29() const { return ___baselineOffset_29; }
	inline float* get_address_of_baselineOffset_29() { return &___baselineOffset_29; }
	inline void set_baselineOffset_29(float value)
	{
		___baselineOffset_29 = value;
	}

	inline static int32_t get_offset_of_lineOffset_30() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineOffset_30)); }
	inline float get_lineOffset_30() const { return ___lineOffset_30; }
	inline float* get_address_of_lineOffset_30() { return &___lineOffset_30; }
	inline void set_lineOffset_30(float value)
	{
		___lineOffset_30 = value;
	}

	inline static int32_t get_offset_of_isDrivenLineSpacing_31() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___isDrivenLineSpacing_31)); }
	inline bool get_isDrivenLineSpacing_31() const { return ___isDrivenLineSpacing_31; }
	inline bool* get_address_of_isDrivenLineSpacing_31() { return &___isDrivenLineSpacing_31; }
	inline void set_isDrivenLineSpacing_31(bool value)
	{
		___isDrivenLineSpacing_31 = value;
	}

	inline static int32_t get_offset_of_glyphHorizontalAdvanceAdjustment_32() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___glyphHorizontalAdvanceAdjustment_32)); }
	inline float get_glyphHorizontalAdvanceAdjustment_32() const { return ___glyphHorizontalAdvanceAdjustment_32; }
	inline float* get_address_of_glyphHorizontalAdvanceAdjustment_32() { return &___glyphHorizontalAdvanceAdjustment_32; }
	inline void set_glyphHorizontalAdvanceAdjustment_32(float value)
	{
		___glyphHorizontalAdvanceAdjustment_32 = value;
	}

	inline static int32_t get_offset_of_cSpace_33() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___cSpace_33)); }
	inline float get_cSpace_33() const { return ___cSpace_33; }
	inline float* get_address_of_cSpace_33() { return &___cSpace_33; }
	inline void set_cSpace_33(float value)
	{
		___cSpace_33 = value;
	}

	inline static int32_t get_offset_of_mSpace_34() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___mSpace_34)); }
	inline float get_mSpace_34() const { return ___mSpace_34; }
	inline float* get_address_of_mSpace_34() { return &___mSpace_34; }
	inline void set_mSpace_34(float value)
	{
		___mSpace_34 = value;
	}

	inline static int32_t get_offset_of_textInfo_35() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___textInfo_35)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_textInfo_35() const { return ___textInfo_35; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_textInfo_35() { return &___textInfo_35; }
	inline void set_textInfo_35(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___textInfo_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_35), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_36() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineInfo_36)); }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  get_lineInfo_36() const { return ___lineInfo_36; }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 * get_address_of_lineInfo_36() { return &___lineInfo_36; }
	inline void set_lineInfo_36(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  value)
	{
		___lineInfo_36 = value;
	}

	inline static int32_t get_offset_of_vertexColor_37() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___vertexColor_37)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_vertexColor_37() const { return ___vertexColor_37; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_vertexColor_37() { return &___vertexColor_37; }
	inline void set_vertexColor_37(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___vertexColor_37 = value;
	}

	inline static int32_t get_offset_of_underlineColor_38() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColor_38)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_underlineColor_38() const { return ___underlineColor_38; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_underlineColor_38() { return &___underlineColor_38; }
	inline void set_underlineColor_38(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___underlineColor_38 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_39() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColor_39)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_strikethroughColor_39() const { return ___strikethroughColor_39; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_strikethroughColor_39() { return &___strikethroughColor_39; }
	inline void set_strikethroughColor_39(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___strikethroughColor_39 = value;
	}

	inline static int32_t get_offset_of_highlightColor_40() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColor_40)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_highlightColor_40() const { return ___highlightColor_40; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_highlightColor_40() { return &___highlightColor_40; }
	inline void set_highlightColor_40(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___highlightColor_40 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___basicStyleStack_41)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_basicStyleStack_41() const { return ___basicStyleStack_41; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_basicStyleStack_41() { return &___basicStyleStack_41; }
	inline void set_basicStyleStack_41(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___basicStyleStack_41 = value;
	}

	inline static int32_t get_offset_of_italicAngleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___italicAngleStack_42)); }
	inline TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  get_italicAngleStack_42() const { return ___italicAngleStack_42; }
	inline TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4 * get_address_of_italicAngleStack_42() { return &___italicAngleStack_42; }
	inline void set_italicAngleStack_42(TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  value)
	{
		___italicAngleStack_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___italicAngleStack_42))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorStack_43)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_colorStack_43() const { return ___colorStack_43; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_colorStack_43() { return &___colorStack_43; }
	inline void set_colorStack_43(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___colorStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_43))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColorStack_44)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_underlineColorStack_44() const { return ___underlineColorStack_44; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_underlineColorStack_44() { return &___underlineColorStack_44; }
	inline void set_underlineColorStack_44(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___underlineColorStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_44))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColorStack_45)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_strikethroughColorStack_45() const { return ___strikethroughColorStack_45; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_strikethroughColorStack_45() { return &___strikethroughColorStack_45; }
	inline void set_strikethroughColorStack_45(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___strikethroughColorStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColorStack_46)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_highlightColorStack_46() const { return ___highlightColorStack_46; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_highlightColorStack_46() { return &___highlightColorStack_46; }
	inline void set_highlightColorStack_46(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___highlightColorStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_46))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightStateStack_47() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightStateStack_47)); }
	inline TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  get_highlightStateStack_47() const { return ___highlightStateStack_47; }
	inline TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2 * get_address_of_highlightStateStack_47() { return &___highlightStateStack_47; }
	inline void set_highlightStateStack_47(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  value)
	{
		___highlightStateStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightStateStack_47))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_48() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorGradientStack_48)); }
	inline TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  get_colorGradientStack_48() const { return ___colorGradientStack_48; }
	inline TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C * get_address_of_colorGradientStack_48() { return &___colorGradientStack_48; }
	inline void set_colorGradientStack_48(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  value)
	{
		___colorGradientStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_49() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___sizeStack_49)); }
	inline TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  get_sizeStack_49() const { return ___sizeStack_49; }
	inline TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A * get_address_of_sizeStack_49() { return &___sizeStack_49; }
	inline void set_sizeStack_49(TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  value)
	{
		___sizeStack_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_49))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_50() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___indentStack_50)); }
	inline TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  get_indentStack_50() const { return ___indentStack_50; }
	inline TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A * get_address_of_indentStack_50() { return &___indentStack_50; }
	inline void set_indentStack_50(TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  value)
	{
		___indentStack_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_50))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_51() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontWeightStack_51)); }
	inline TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  get_fontWeightStack_51() const { return ___fontWeightStack_51; }
	inline TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285 * get_address_of_fontWeightStack_51() { return &___fontWeightStack_51; }
	inline void set_fontWeightStack_51(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  value)
	{
		___fontWeightStack_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_51))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_52() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___styleStack_52)); }
	inline TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  get_styleStack_52() const { return ___styleStack_52; }
	inline TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4 * get_address_of_styleStack_52() { return &___styleStack_52; }
	inline void set_styleStack_52(TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  value)
	{
		___styleStack_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_52))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_53() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineStack_53)); }
	inline TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  get_baselineStack_53() const { return ___baselineStack_53; }
	inline TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A * get_address_of_baselineStack_53() { return &___baselineStack_53; }
	inline void set_baselineStack_53(TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  value)
	{
		___baselineStack_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_53))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_54() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___actionStack_54)); }
	inline TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  get_actionStack_54() const { return ___actionStack_54; }
	inline TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4 * get_address_of_actionStack_54() { return &___actionStack_54; }
	inline void set_actionStack_54(TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  value)
	{
		___actionStack_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_54))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_55() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___materialReferenceStack_55)); }
	inline TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  get_materialReferenceStack_55() const { return ___materialReferenceStack_55; }
	inline TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A * get_address_of_materialReferenceStack_55() { return &___materialReferenceStack_55; }
	inline void set_materialReferenceStack_55(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  value)
	{
		___materialReferenceStack_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_56() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineJustificationStack_56)); }
	inline TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  get_lineJustificationStack_56() const { return ___lineJustificationStack_56; }
	inline TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7 * get_address_of_lineJustificationStack_56() { return &___lineJustificationStack_56; }
	inline void set_lineJustificationStack_56(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  value)
	{
		___lineJustificationStack_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_57() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___spriteAnimationID_57)); }
	inline int32_t get_spriteAnimationID_57() const { return ___spriteAnimationID_57; }
	inline int32_t* get_address_of_spriteAnimationID_57() { return &___spriteAnimationID_57; }
	inline void set_spriteAnimationID_57(int32_t value)
	{
		___spriteAnimationID_57 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_58() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontAsset_58)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_currentFontAsset_58() const { return ___currentFontAsset_58; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_currentFontAsset_58() { return &___currentFontAsset_58; }
	inline void set_currentFontAsset_58(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___currentFontAsset_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_58), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_59() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentSpriteAsset_59)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_currentSpriteAsset_59() const { return ___currentSpriteAsset_59; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_currentSpriteAsset_59() { return &___currentSpriteAsset_59; }
	inline void set_currentSpriteAsset_59(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___currentSpriteAsset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_59), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_60() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterial_60)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_currentMaterial_60() const { return ___currentMaterial_60; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_currentMaterial_60() { return &___currentMaterial_60; }
	inline void set_currentMaterial_60(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___currentMaterial_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_60), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_61() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterialIndex_61)); }
	inline int32_t get_currentMaterialIndex_61() const { return ___currentMaterialIndex_61; }
	inline int32_t* get_address_of_currentMaterialIndex_61() { return &___currentMaterialIndex_61; }
	inline void set_currentMaterialIndex_61(int32_t value)
	{
		___currentMaterialIndex_61 = value;
	}

	inline static int32_t get_offset_of_meshExtents_62() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___meshExtents_62)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_meshExtents_62() const { return ___meshExtents_62; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_meshExtents_62() { return &___meshExtents_62; }
	inline void set_meshExtents_62(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___meshExtents_62 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_63() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___tagNoParsing_63)); }
	inline bool get_tagNoParsing_63() const { return ___tagNoParsing_63; }
	inline bool* get_address_of_tagNoParsing_63() { return &___tagNoParsing_63; }
	inline void set_tagNoParsing_63(bool value)
	{
		___tagNoParsing_63 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_64() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___isNonBreakingSpace_64)); }
	inline bool get_isNonBreakingSpace_64() const { return ___isNonBreakingSpace_64; }
	inline bool* get_address_of_isNonBreakingSpace_64() { return &___isNonBreakingSpace_64; }
	inline void set_isNonBreakingSpace_64(bool value)
	{
		___isNonBreakingSpace_64 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_pinvoke
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
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_35;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_36;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_37;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_38;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_39;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_40;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  ___italicAngleStack_42;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___colorStack_43;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___underlineColorStack_44;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  ___highlightStateStack_47;
	TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  ___sizeStack_49;
	TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  ___indentStack_50;
	TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  ___styleStack_52;
	TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  ___baselineStack_53;
	TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  ___actionStack_54;
	TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_58;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_59;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_com
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
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_35;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_36;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_37;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_38;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_39;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_40;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  ___italicAngleStack_42;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___colorStack_43;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___underlineColorStack_44;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  ___highlightStateStack_47;
	TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  ___sizeStack_49;
	TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  ___indentStack_50;
	TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  ___styleStack_52;
	TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  ___baselineStack_53;
	TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  ___actionStack_54;
	TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_58;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_59;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// SelfDestroy
struct SelfDestroy_t914E0DDB257662ECE11BA3AA2280DE94351400CB  : public StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C
{
public:

public:
};


// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___itemStack_0)); }
	inline WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000* get_itemStack_0() const { return ___itemStack_0; }
	inline WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___m_DefaultItem_2)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Animator
struct Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// Bullet
struct Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Vector3 Bullet::direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction_4;

public:
	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059, ___direction_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_direction_4() const { return ___direction_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___direction_4 = value;
	}
};


// CameraMovement
struct CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform CameraMovement::player
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___player_4;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4, ___player_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_player_4() const { return ___player_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}
};


// Enemy
struct Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject Enemy::player
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___player_4;
	// UnityEngine.GameObject Enemy::pointA
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___pointA_5;
	// UnityEngine.GameObject Enemy::pointB
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___pointB_6;
	// UnityEngine.Rigidbody2D Enemy::enemyRb
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___enemyRb_7;
	// UnityEngine.Animator Enemy::animator
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator_8;
	// UnityEngine.Transform Enemy::pointNow
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___pointNow_9;
	// System.Single Enemy::speed
	float ___speed_10;
	// EnemyHealth Enemy::enemyHealth
	EnemyHealth_t91A76AF6E61D8332F27A81B9566060F33FCA4490 * ___enemyHealth_11;
	// Score Enemy::score
	Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * ___score_12;
	// System.Single Enemy::castTime
	float ___castTime_13;
	// System.Boolean Enemy::fire
	bool ___fire_14;
	// UnityEngine.GameObject Enemy::bulletPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___bulletPrefab_15;
	// UnityEngine.GameObject Enemy::bullet
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___bullet_16;
	// System.Single Enemy::fireRate
	float ___fireRate_17;
	// UnityEngine.Color Enemy::bulletColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bulletColor_18;
	// System.Single Enemy::bulletSpeed
	float ___bulletSpeed_19;
	// audiomanage Enemy::audiomanage
	audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * ___audiomanage_20;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___player_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_player_4() const { return ___player_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_pointA_5() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___pointA_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_pointA_5() const { return ___pointA_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_pointA_5() { return &___pointA_5; }
	inline void set_pointA_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___pointA_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointA_5), (void*)value);
	}

	inline static int32_t get_offset_of_pointB_6() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___pointB_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_pointB_6() const { return ___pointB_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_pointB_6() { return &___pointB_6; }
	inline void set_pointB_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___pointB_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointB_6), (void*)value);
	}

	inline static int32_t get_offset_of_enemyRb_7() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___enemyRb_7)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_enemyRb_7() const { return ___enemyRb_7; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_enemyRb_7() { return &___enemyRb_7; }
	inline void set_enemyRb_7(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___enemyRb_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyRb_7), (void*)value);
	}

	inline static int32_t get_offset_of_animator_8() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___animator_8)); }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * get_animator_8() const { return ___animator_8; }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A ** get_address_of_animator_8() { return &___animator_8; }
	inline void set_animator_8(Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * value)
	{
		___animator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_8), (void*)value);
	}

	inline static int32_t get_offset_of_pointNow_9() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___pointNow_9)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_pointNow_9() const { return ___pointNow_9; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_pointNow_9() { return &___pointNow_9; }
	inline void set_pointNow_9(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___pointNow_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointNow_9), (void*)value);
	}

	inline static int32_t get_offset_of_speed_10() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___speed_10)); }
	inline float get_speed_10() const { return ___speed_10; }
	inline float* get_address_of_speed_10() { return &___speed_10; }
	inline void set_speed_10(float value)
	{
		___speed_10 = value;
	}

	inline static int32_t get_offset_of_enemyHealth_11() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___enemyHealth_11)); }
	inline EnemyHealth_t91A76AF6E61D8332F27A81B9566060F33FCA4490 * get_enemyHealth_11() const { return ___enemyHealth_11; }
	inline EnemyHealth_t91A76AF6E61D8332F27A81B9566060F33FCA4490 ** get_address_of_enemyHealth_11() { return &___enemyHealth_11; }
	inline void set_enemyHealth_11(EnemyHealth_t91A76AF6E61D8332F27A81B9566060F33FCA4490 * value)
	{
		___enemyHealth_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyHealth_11), (void*)value);
	}

	inline static int32_t get_offset_of_score_12() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___score_12)); }
	inline Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * get_score_12() const { return ___score_12; }
	inline Score_t72F7EE757BE7D4C7846803B3072753760AB6427F ** get_address_of_score_12() { return &___score_12; }
	inline void set_score_12(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * value)
	{
		___score_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___score_12), (void*)value);
	}

	inline static int32_t get_offset_of_castTime_13() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___castTime_13)); }
	inline float get_castTime_13() const { return ___castTime_13; }
	inline float* get_address_of_castTime_13() { return &___castTime_13; }
	inline void set_castTime_13(float value)
	{
		___castTime_13 = value;
	}

	inline static int32_t get_offset_of_fire_14() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___fire_14)); }
	inline bool get_fire_14() const { return ___fire_14; }
	inline bool* get_address_of_fire_14() { return &___fire_14; }
	inline void set_fire_14(bool value)
	{
		___fire_14 = value;
	}

	inline static int32_t get_offset_of_bulletPrefab_15() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___bulletPrefab_15)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_bulletPrefab_15() const { return ___bulletPrefab_15; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_bulletPrefab_15() { return &___bulletPrefab_15; }
	inline void set_bulletPrefab_15(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___bulletPrefab_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_15), (void*)value);
	}

	inline static int32_t get_offset_of_bullet_16() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___bullet_16)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_bullet_16() const { return ___bullet_16; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_bullet_16() { return &___bullet_16; }
	inline void set_bullet_16(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___bullet_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullet_16), (void*)value);
	}

	inline static int32_t get_offset_of_fireRate_17() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___fireRate_17)); }
	inline float get_fireRate_17() const { return ___fireRate_17; }
	inline float* get_address_of_fireRate_17() { return &___fireRate_17; }
	inline void set_fireRate_17(float value)
	{
		___fireRate_17 = value;
	}

	inline static int32_t get_offset_of_bulletColor_18() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___bulletColor_18)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bulletColor_18() const { return ___bulletColor_18; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bulletColor_18() { return &___bulletColor_18; }
	inline void set_bulletColor_18(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bulletColor_18 = value;
	}

	inline static int32_t get_offset_of_bulletSpeed_19() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___bulletSpeed_19)); }
	inline float get_bulletSpeed_19() const { return ___bulletSpeed_19; }
	inline float* get_address_of_bulletSpeed_19() { return &___bulletSpeed_19; }
	inline void set_bulletSpeed_19(float value)
	{
		___bulletSpeed_19 = value;
	}

	inline static int32_t get_offset_of_audiomanage_20() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___audiomanage_20)); }
	inline audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * get_audiomanage_20() const { return ___audiomanage_20; }
	inline audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C ** get_address_of_audiomanage_20() { return &___audiomanage_20; }
	inline void set_audiomanage_20(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * value)
	{
		___audiomanage_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audiomanage_20), (void*)value);
	}
};


// EnemyHealth
struct EnemyHealth_t91A76AF6E61D8332F27A81B9566060F33FCA4490  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 EnemyHealth::health
	int32_t ___health_4;
	// UnityEngine.GameObject[] EnemyHealth::bar
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___bar_5;

public:
	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(EnemyHealth_t91A76AF6E61D8332F27A81B9566060F33FCA4490, ___health_4)); }
	inline int32_t get_health_4() const { return ___health_4; }
	inline int32_t* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(int32_t value)
	{
		___health_4 = value;
	}

	inline static int32_t get_offset_of_bar_5() { return static_cast<int32_t>(offsetof(EnemyHealth_t91A76AF6E61D8332F27A81B9566060F33FCA4490, ___bar_5)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_bar_5() const { return ___bar_5; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_bar_5() { return &___bar_5; }
	inline void set_bar_5(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___bar_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bar_5), (void*)value);
	}
};


// Holder
struct Holder_tBC04476AC1BB69D8FAF7EF93B49402612407F571  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Sprite[] Holder::bgSprites
	SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* ___bgSprites_4;
	// UnityEngine.SpriteRenderer Holder::bg
	SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * ___bg_5;

public:
	inline static int32_t get_offset_of_bgSprites_4() { return static_cast<int32_t>(offsetof(Holder_tBC04476AC1BB69D8FAF7EF93B49402612407F571, ___bgSprites_4)); }
	inline SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* get_bgSprites_4() const { return ___bgSprites_4; }
	inline SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7** get_address_of_bgSprites_4() { return &___bgSprites_4; }
	inline void set_bgSprites_4(SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* value)
	{
		___bgSprites_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bgSprites_4), (void*)value);
	}

	inline static int32_t get_offset_of_bg_5() { return static_cast<int32_t>(offsetof(Holder_tBC04476AC1BB69D8FAF7EF93B49402612407F571, ___bg_5)); }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * get_bg_5() const { return ___bg_5; }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F ** get_address_of_bg_5() { return &___bg_5; }
	inline void set_bg_5(SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * value)
	{
		___bg_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bg_5), (void*)value);
	}
};


// Playerattack
struct Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject Playerattack::sword
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___sword_4;
	// UnityEngine.GameObject Playerattack::sorcerySword
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___sorcerySword_5;
	// UnityEngine.GameObject Playerattack::bulletPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___bulletPrefab_6;
	// System.Single Playerattack::sorcerySwordShootInterval
	float ___sorcerySwordShootInterval_7;
	// System.Single Playerattack::sorcerySwordShootTimer
	float ___sorcerySwordShootTimer_8;
	// Playerweapons Playerattack::weaponsManager
	Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * ___weaponsManager_9;
	// audiomanage Playerattack::audiomanage
	audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * ___audiomanage_10;
	// playermovement Playerattack::playermovement
	playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * ___playermovement_11;
	// System.Boolean Playerattack::isPlayerDead
	bool ___isPlayerDead_12;

public:
	inline static int32_t get_offset_of_sword_4() { return static_cast<int32_t>(offsetof(Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A, ___sword_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_sword_4() const { return ___sword_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_sword_4() { return &___sword_4; }
	inline void set_sword_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___sword_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sword_4), (void*)value);
	}

	inline static int32_t get_offset_of_sorcerySword_5() { return static_cast<int32_t>(offsetof(Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A, ___sorcerySword_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_sorcerySword_5() const { return ___sorcerySword_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_sorcerySword_5() { return &___sorcerySword_5; }
	inline void set_sorcerySword_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___sorcerySword_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sorcerySword_5), (void*)value);
	}

	inline static int32_t get_offset_of_bulletPrefab_6() { return static_cast<int32_t>(offsetof(Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A, ___bulletPrefab_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_bulletPrefab_6() const { return ___bulletPrefab_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_bulletPrefab_6() { return &___bulletPrefab_6; }
	inline void set_bulletPrefab_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___bulletPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_sorcerySwordShootInterval_7() { return static_cast<int32_t>(offsetof(Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A, ___sorcerySwordShootInterval_7)); }
	inline float get_sorcerySwordShootInterval_7() const { return ___sorcerySwordShootInterval_7; }
	inline float* get_address_of_sorcerySwordShootInterval_7() { return &___sorcerySwordShootInterval_7; }
	inline void set_sorcerySwordShootInterval_7(float value)
	{
		___sorcerySwordShootInterval_7 = value;
	}

	inline static int32_t get_offset_of_sorcerySwordShootTimer_8() { return static_cast<int32_t>(offsetof(Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A, ___sorcerySwordShootTimer_8)); }
	inline float get_sorcerySwordShootTimer_8() const { return ___sorcerySwordShootTimer_8; }
	inline float* get_address_of_sorcerySwordShootTimer_8() { return &___sorcerySwordShootTimer_8; }
	inline void set_sorcerySwordShootTimer_8(float value)
	{
		___sorcerySwordShootTimer_8 = value;
	}

	inline static int32_t get_offset_of_weaponsManager_9() { return static_cast<int32_t>(offsetof(Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A, ___weaponsManager_9)); }
	inline Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * get_weaponsManager_9() const { return ___weaponsManager_9; }
	inline Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED ** get_address_of_weaponsManager_9() { return &___weaponsManager_9; }
	inline void set_weaponsManager_9(Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * value)
	{
		___weaponsManager_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weaponsManager_9), (void*)value);
	}

	inline static int32_t get_offset_of_audiomanage_10() { return static_cast<int32_t>(offsetof(Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A, ___audiomanage_10)); }
	inline audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * get_audiomanage_10() const { return ___audiomanage_10; }
	inline audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C ** get_address_of_audiomanage_10() { return &___audiomanage_10; }
	inline void set_audiomanage_10(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * value)
	{
		___audiomanage_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audiomanage_10), (void*)value);
	}

	inline static int32_t get_offset_of_playermovement_11() { return static_cast<int32_t>(offsetof(Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A, ___playermovement_11)); }
	inline playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * get_playermovement_11() const { return ___playermovement_11; }
	inline playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 ** get_address_of_playermovement_11() { return &___playermovement_11; }
	inline void set_playermovement_11(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * value)
	{
		___playermovement_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playermovement_11), (void*)value);
	}

	inline static int32_t get_offset_of_isPlayerDead_12() { return static_cast<int32_t>(offsetof(Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A, ___isPlayerDead_12)); }
	inline bool get_isPlayerDead_12() const { return ___isPlayerDead_12; }
	inline bool* get_address_of_isPlayerDead_12() { return &___isPlayerDead_12; }
	inline void set_isPlayerDead_12(bool value)
	{
		___isPlayerDead_12 = value;
	}
};


// Playercollision
struct Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// timer Playercollision::timerScript
	timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * ___timerScript_4;
	// playermovement Playercollision::movement
	playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * ___movement_5;
	// Playerhealth Playercollision::healthScript
	Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D * ___healthScript_6;
	// audiomanage Playercollision::audiomanage
	audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * ___audiomanage_7;

public:
	inline static int32_t get_offset_of_timerScript_4() { return static_cast<int32_t>(offsetof(Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70, ___timerScript_4)); }
	inline timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * get_timerScript_4() const { return ___timerScript_4; }
	inline timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF ** get_address_of_timerScript_4() { return &___timerScript_4; }
	inline void set_timerScript_4(timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * value)
	{
		___timerScript_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerScript_4), (void*)value);
	}

	inline static int32_t get_offset_of_movement_5() { return static_cast<int32_t>(offsetof(Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70, ___movement_5)); }
	inline playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * get_movement_5() const { return ___movement_5; }
	inline playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 ** get_address_of_movement_5() { return &___movement_5; }
	inline void set_movement_5(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * value)
	{
		___movement_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___movement_5), (void*)value);
	}

	inline static int32_t get_offset_of_healthScript_6() { return static_cast<int32_t>(offsetof(Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70, ___healthScript_6)); }
	inline Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D * get_healthScript_6() const { return ___healthScript_6; }
	inline Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D ** get_address_of_healthScript_6() { return &___healthScript_6; }
	inline void set_healthScript_6(Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D * value)
	{
		___healthScript_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthScript_6), (void*)value);
	}

	inline static int32_t get_offset_of_audiomanage_7() { return static_cast<int32_t>(offsetof(Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70, ___audiomanage_7)); }
	inline audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * get_audiomanage_7() const { return ___audiomanage_7; }
	inline audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C ** get_address_of_audiomanage_7() { return &___audiomanage_7; }
	inline void set_audiomanage_7(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * value)
	{
		___audiomanage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audiomanage_7), (void*)value);
	}
};


// Playerhealth
struct Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 Playerhealth::health
	int32_t ___health_4;
	// UnityEngine.UI.Image[] Playerhealth::hearts
	ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* ___hearts_5;

public:
	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D, ___health_4)); }
	inline int32_t get_health_4() const { return ___health_4; }
	inline int32_t* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(int32_t value)
	{
		___health_4 = value;
	}

	inline static int32_t get_offset_of_hearts_5() { return static_cast<int32_t>(offsetof(Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D, ___hearts_5)); }
	inline ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* get_hearts_5() const { return ___hearts_5; }
	inline ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D** get_address_of_hearts_5() { return &___hearts_5; }
	inline void set_hearts_5(ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* value)
	{
		___hearts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hearts_5), (void*)value);
	}
};


// Playerweapons
struct Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// WeaponType Playerweapons::currentWeapon
	int32_t ___currentWeapon_4;
	// Playerattack Playerweapons::attackScript
	Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * ___attackScript_5;

public:
	inline static int32_t get_offset_of_currentWeapon_4() { return static_cast<int32_t>(offsetof(Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED, ___currentWeapon_4)); }
	inline int32_t get_currentWeapon_4() const { return ___currentWeapon_4; }
	inline int32_t* get_address_of_currentWeapon_4() { return &___currentWeapon_4; }
	inline void set_currentWeapon_4(int32_t value)
	{
		___currentWeapon_4 = value;
	}

	inline static int32_t get_offset_of_attackScript_5() { return static_cast<int32_t>(offsetof(Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED, ___attackScript_5)); }
	inline Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * get_attackScript_5() const { return ___attackScript_5; }
	inline Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A ** get_address_of_attackScript_5() { return &___attackScript_5; }
	inline void set_attackScript_5(Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * value)
	{
		___attackScript_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attackScript_5), (void*)value);
	}
};


// Score
struct Score_t72F7EE757BE7D4C7846803B3072753760AB6427F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// TMPro.TextMeshProUGUI Score::CurrentScoreText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___CurrentScoreText_5;
	// TMPro.TextMeshProUGUI Score::HighScoreText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___HighScoreText_6;
	// TMPro.TextMeshProUGUI Score::EndGameScoreText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___EndGameScoreText_7;
	// TMPro.TextMeshProUGUI Score::EndGameHighScoreText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___EndGameHighScoreText_8;
	// TMPro.TextMeshProUGUI Score::GameOverScoreText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___GameOverScoreText_9;
	// TMPro.TextMeshProUGUI Score::GameOverHighScoreText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___GameOverHighScoreText_10;
	// System.Int32 Score::<ScoreNumber>k__BackingField
	int32_t ___U3CScoreNumberU3Ek__BackingField_11;
	// System.Int32 Score::HighScoreNumber
	int32_t ___HighScoreNumber_12;
	// audiomanage Score::audiomanage
	audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * ___audiomanage_13;

public:
	inline static int32_t get_offset_of_CurrentScoreText_5() { return static_cast<int32_t>(offsetof(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F, ___CurrentScoreText_5)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_CurrentScoreText_5() const { return ___CurrentScoreText_5; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_CurrentScoreText_5() { return &___CurrentScoreText_5; }
	inline void set_CurrentScoreText_5(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___CurrentScoreText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurrentScoreText_5), (void*)value);
	}

	inline static int32_t get_offset_of_HighScoreText_6() { return static_cast<int32_t>(offsetof(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F, ___HighScoreText_6)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_HighScoreText_6() const { return ___HighScoreText_6; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_HighScoreText_6() { return &___HighScoreText_6; }
	inline void set_HighScoreText_6(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___HighScoreText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HighScoreText_6), (void*)value);
	}

	inline static int32_t get_offset_of_EndGameScoreText_7() { return static_cast<int32_t>(offsetof(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F, ___EndGameScoreText_7)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_EndGameScoreText_7() const { return ___EndGameScoreText_7; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_EndGameScoreText_7() { return &___EndGameScoreText_7; }
	inline void set_EndGameScoreText_7(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___EndGameScoreText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EndGameScoreText_7), (void*)value);
	}

	inline static int32_t get_offset_of_EndGameHighScoreText_8() { return static_cast<int32_t>(offsetof(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F, ___EndGameHighScoreText_8)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_EndGameHighScoreText_8() const { return ___EndGameHighScoreText_8; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_EndGameHighScoreText_8() { return &___EndGameHighScoreText_8; }
	inline void set_EndGameHighScoreText_8(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___EndGameHighScoreText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EndGameHighScoreText_8), (void*)value);
	}

	inline static int32_t get_offset_of_GameOverScoreText_9() { return static_cast<int32_t>(offsetof(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F, ___GameOverScoreText_9)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_GameOverScoreText_9() const { return ___GameOverScoreText_9; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_GameOverScoreText_9() { return &___GameOverScoreText_9; }
	inline void set_GameOverScoreText_9(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___GameOverScoreText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOverScoreText_9), (void*)value);
	}

	inline static int32_t get_offset_of_GameOverHighScoreText_10() { return static_cast<int32_t>(offsetof(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F, ___GameOverHighScoreText_10)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_GameOverHighScoreText_10() const { return ___GameOverHighScoreText_10; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_GameOverHighScoreText_10() { return &___GameOverHighScoreText_10; }
	inline void set_GameOverHighScoreText_10(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___GameOverHighScoreText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOverHighScoreText_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CScoreNumberU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F, ___U3CScoreNumberU3Ek__BackingField_11)); }
	inline int32_t get_U3CScoreNumberU3Ek__BackingField_11() const { return ___U3CScoreNumberU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CScoreNumberU3Ek__BackingField_11() { return &___U3CScoreNumberU3Ek__BackingField_11; }
	inline void set_U3CScoreNumberU3Ek__BackingField_11(int32_t value)
	{
		___U3CScoreNumberU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_HighScoreNumber_12() { return static_cast<int32_t>(offsetof(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F, ___HighScoreNumber_12)); }
	inline int32_t get_HighScoreNumber_12() const { return ___HighScoreNumber_12; }
	inline int32_t* get_address_of_HighScoreNumber_12() { return &___HighScoreNumber_12; }
	inline void set_HighScoreNumber_12(int32_t value)
	{
		___HighScoreNumber_12 = value;
	}

	inline static int32_t get_offset_of_audiomanage_13() { return static_cast<int32_t>(offsetof(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F, ___audiomanage_13)); }
	inline audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * get_audiomanage_13() const { return ___audiomanage_13; }
	inline audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C ** get_address_of_audiomanage_13() { return &___audiomanage_13; }
	inline void set_audiomanage_13(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * value)
	{
		___audiomanage_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audiomanage_13), (void*)value);
	}
};

struct Score_t72F7EE757BE7D4C7846803B3072753760AB6427F_StaticFields
{
public:
	// Score Score::instance
	Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F_StaticFields, ___instance_4)); }
	inline Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * get_instance_4() const { return ___instance_4; }
	inline Score_t72F7EE757BE7D4C7846803B3072753760AB6427F ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};


// UnityEngine.CapsuleCollider2D
struct CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612  : public Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// audiomanage
struct audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.AudioSource audiomanage::musicSource
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___musicSource_4;
	// UnityEngine.AudioSource audiomanage::SFXSource
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___SFXSource_5;
	// UnityEngine.AudioClip audiomanage::background
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___background_6;
	// UnityEngine.AudioClip audiomanage::playerJump
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___playerJump_7;
	// UnityEngine.AudioClip audiomanage::playerClimb
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___playerClimb_8;
	// UnityEngine.AudioClip audiomanage::playerCollect
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___playerCollect_9;
	// UnityEngine.AudioClip audiomanage::playerDeflect
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___playerDeflect_10;
	// UnityEngine.AudioClip audiomanage::playerShoot
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___playerShoot_11;
	// UnityEngine.AudioClip audiomanage::playerDamage
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___playerDamage_12;
	// UnityEngine.AudioClip audiomanage::playerDie
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___playerDie_13;
	// UnityEngine.AudioClip audiomanage::enemyShoot
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___enemyShoot_14;
	// UnityEngine.AudioClip audiomanage::enemyDamage
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___enemyDamage_15;
	// UnityEngine.AudioClip audiomanage::enemyDie
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___enemyDie_16;
	// UnityEngine.AudioClip audiomanage::levelComplete
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___levelComplete_17;
	// UnityEngine.AudioClip audiomanage::gameComplete
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___gameComplete_18;
	// System.Boolean audiomanage::gameStarted
	bool ___gameStarted_19;

public:
	inline static int32_t get_offset_of_musicSource_4() { return static_cast<int32_t>(offsetof(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C, ___musicSource_4)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_musicSource_4() const { return ___musicSource_4; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_musicSource_4() { return &___musicSource_4; }
	inline void set_musicSource_4(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___musicSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_SFXSource_5() { return static_cast<int32_t>(offsetof(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C, ___SFXSource_5)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_SFXSource_5() const { return ___SFXSource_5; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_SFXSource_5() { return &___SFXSource_5; }
	inline void set_SFXSource_5(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___SFXSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SFXSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_background_6() { return static_cast<int32_t>(offsetof(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C, ___background_6)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_background_6() const { return ___background_6; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_background_6() { return &___background_6; }
	inline void set_background_6(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___background_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___background_6), (void*)value);
	}

	inline static int32_t get_offset_of_playerJump_7() { return static_cast<int32_t>(offsetof(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C, ___playerJump_7)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_playerJump_7() const { return ___playerJump_7; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_playerJump_7() { return &___playerJump_7; }
	inline void set_playerJump_7(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___playerJump_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerJump_7), (void*)value);
	}

	inline static int32_t get_offset_of_playerClimb_8() { return static_cast<int32_t>(offsetof(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C, ___playerClimb_8)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_playerClimb_8() const { return ___playerClimb_8; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_playerClimb_8() { return &___playerClimb_8; }
	inline void set_playerClimb_8(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___playerClimb_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerClimb_8), (void*)value);
	}

	inline static int32_t get_offset_of_playerCollect_9() { return static_cast<int32_t>(offsetof(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C, ___playerCollect_9)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_playerCollect_9() const { return ___playerCollect_9; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_playerCollect_9() { return &___playerCollect_9; }
	inline void set_playerCollect_9(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___playerCollect_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerCollect_9), (void*)value);
	}

	inline static int32_t get_offset_of_playerDeflect_10() { return static_cast<int32_t>(offsetof(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C, ___playerDeflect_10)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_playerDeflect_10() const { return ___playerDeflect_10; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_playerDeflect_10() { return &___playerDeflect_10; }
	inline void set_playerDeflect_10(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___playerDeflect_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerDeflect_10), (void*)value);
	}

	inline static int32_t get_offset_of_playerShoot_11() { return static_cast<int32_t>(offsetof(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C, ___playerShoot_11)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_playerShoot_11() const { return ___playerShoot_11; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_playerShoot_11() { return &___playerShoot_11; }
	inline void set_playerShoot_11(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___playerShoot_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerShoot_11), (void*)value);
	}

	inline static int32_t get_offset_of_playerDamage_12() { return static_cast<int32_t>(offsetof(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C, ___playerDamage_12)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_playerDamage_12() const { return ___playerDamage_12; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_playerDamage_12() { return &___playerDamage_12; }
	inline void set_playerDamage_12(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___playerDamage_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerDamage_12), (void*)value);
	}

	inline static int32_t get_offset_of_playerDie_13() { return static_cast<int32_t>(offsetof(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C, ___playerDie_13)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_playerDie_13() const { return ___playerDie_13; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_playerDie_13() { return &___playerDie_13; }
	inline void set_playerDie_13(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___playerDie_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerDie_13), (void*)value);
	}

	inline static int32_t get_offset_of_enemyShoot_14() { return static_cast<int32_t>(offsetof(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C, ___enemyShoot_14)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_enemyShoot_14() const { return ___enemyShoot_14; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_enemyShoot_14() { return &___enemyShoot_14; }
	inline void set_enemyShoot_14(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___enemyShoot_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyShoot_14), (void*)value);
	}

	inline static int32_t get_offset_of_enemyDamage_15() { return static_cast<int32_t>(offsetof(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C, ___enemyDamage_15)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_enemyDamage_15() const { return ___enemyDamage_15; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_enemyDamage_15() { return &___enemyDamage_15; }
	inline void set_enemyDamage_15(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___enemyDamage_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyDamage_15), (void*)value);
	}

	inline static int32_t get_offset_of_enemyDie_16() { return static_cast<int32_t>(offsetof(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C, ___enemyDie_16)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_enemyDie_16() const { return ___enemyDie_16; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_enemyDie_16() { return &___enemyDie_16; }
	inline void set_enemyDie_16(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___enemyDie_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyDie_16), (void*)value);
	}

	inline static int32_t get_offset_of_levelComplete_17() { return static_cast<int32_t>(offsetof(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C, ___levelComplete_17)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_levelComplete_17() const { return ___levelComplete_17; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_levelComplete_17() { return &___levelComplete_17; }
	inline void set_levelComplete_17(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___levelComplete_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelComplete_17), (void*)value);
	}

	inline static int32_t get_offset_of_gameComplete_18() { return static_cast<int32_t>(offsetof(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C, ___gameComplete_18)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_gameComplete_18() const { return ___gameComplete_18; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_gameComplete_18() { return &___gameComplete_18; }
	inline void set_gameComplete_18(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___gameComplete_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameComplete_18), (void*)value);
	}

	inline static int32_t get_offset_of_gameStarted_19() { return static_cast<int32_t>(offsetof(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C, ___gameStarted_19)); }
	inline bool get_gameStarted_19() const { return ___gameStarted_19; }
	inline bool* get_address_of_gameStarted_19() { return &___gameStarted_19; }
	inline void set_gameStarted_19(bool value)
	{
		___gameStarted_19 = value;
	}
};


// laddermovement
struct laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single laddermovement::verticalInput
	float ___verticalInput_4;
	// System.Single laddermovement::climbSpeed
	float ___climbSpeed_5;
	// System.Boolean laddermovement::nearLadder
	bool ___nearLadder_6;
	// System.Boolean laddermovement::<playerClimbing>k__BackingField
	bool ___U3CplayerClimbingU3Ek__BackingField_7;
	// UnityEngine.Rigidbody2D laddermovement::playerRb
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___playerRb_8;

public:
	inline static int32_t get_offset_of_verticalInput_4() { return static_cast<int32_t>(offsetof(laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852, ___verticalInput_4)); }
	inline float get_verticalInput_4() const { return ___verticalInput_4; }
	inline float* get_address_of_verticalInput_4() { return &___verticalInput_4; }
	inline void set_verticalInput_4(float value)
	{
		___verticalInput_4 = value;
	}

	inline static int32_t get_offset_of_climbSpeed_5() { return static_cast<int32_t>(offsetof(laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852, ___climbSpeed_5)); }
	inline float get_climbSpeed_5() const { return ___climbSpeed_5; }
	inline float* get_address_of_climbSpeed_5() { return &___climbSpeed_5; }
	inline void set_climbSpeed_5(float value)
	{
		___climbSpeed_5 = value;
	}

	inline static int32_t get_offset_of_nearLadder_6() { return static_cast<int32_t>(offsetof(laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852, ___nearLadder_6)); }
	inline bool get_nearLadder_6() const { return ___nearLadder_6; }
	inline bool* get_address_of_nearLadder_6() { return &___nearLadder_6; }
	inline void set_nearLadder_6(bool value)
	{
		___nearLadder_6 = value;
	}

	inline static int32_t get_offset_of_U3CplayerClimbingU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852, ___U3CplayerClimbingU3Ek__BackingField_7)); }
	inline bool get_U3CplayerClimbingU3Ek__BackingField_7() const { return ___U3CplayerClimbingU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CplayerClimbingU3Ek__BackingField_7() { return &___U3CplayerClimbingU3Ek__BackingField_7; }
	inline void set_U3CplayerClimbingU3Ek__BackingField_7(bool value)
	{
		___U3CplayerClimbingU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_playerRb_8() { return static_cast<int32_t>(offsetof(laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852, ___playerRb_8)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_playerRb_8() const { return ___playerRb_8; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_playerRb_8() { return &___playerRb_8; }
	inline void set_playerRb_8(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___playerRb_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerRb_8), (void*)value);
	}
};


// movingplatform
struct movingplatform_t0D588BFE0201AFB7B61C9145E7B9BA65425AE205  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single movingplatform::speed
	float ___speed_4;
	// UnityEngine.Vector3 movingplatform::destination
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___destination_5;
	// UnityEngine.Vector3 movingplatform::positionA
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positionA_6;
	// UnityEngine.Vector3 movingplatform::positionB
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positionB_7;
	// UnityEngine.Vector2 movingplatform::targetPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___targetPosition_8;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(movingplatform_t0D588BFE0201AFB7B61C9145E7B9BA65425AE205, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_destination_5() { return static_cast<int32_t>(offsetof(movingplatform_t0D588BFE0201AFB7B61C9145E7B9BA65425AE205, ___destination_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_destination_5() const { return ___destination_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_destination_5() { return &___destination_5; }
	inline void set_destination_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___destination_5 = value;
	}

	inline static int32_t get_offset_of_positionA_6() { return static_cast<int32_t>(offsetof(movingplatform_t0D588BFE0201AFB7B61C9145E7B9BA65425AE205, ___positionA_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positionA_6() const { return ___positionA_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positionA_6() { return &___positionA_6; }
	inline void set_positionA_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positionA_6 = value;
	}

	inline static int32_t get_offset_of_positionB_7() { return static_cast<int32_t>(offsetof(movingplatform_t0D588BFE0201AFB7B61C9145E7B9BA65425AE205, ___positionB_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positionB_7() const { return ___positionB_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positionB_7() { return &___positionB_7; }
	inline void set_positionB_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positionB_7 = value;
	}

	inline static int32_t get_offset_of_targetPosition_8() { return static_cast<int32_t>(offsetof(movingplatform_t0D588BFE0201AFB7B61C9145E7B9BA65425AE205, ___targetPosition_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_targetPosition_8() const { return ___targetPosition_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_targetPosition_8() { return &___targetPosition_8; }
	inline void set_targetPosition_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___targetPosition_8 = value;
	}
};


// playermanage
struct playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject playermanage::GameOverPanel
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___GameOverPanel_5;
	// UnityEngine.GameObject playermanage::GameStartPanel
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___GameStartPanel_6;
	// Playerhealth playermanage::player
	Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D * ___player_7;
	// timer playermanage::timer
	timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * ___timer_8;
	// Score playermanage::score
	Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * ___score_9;

public:
	inline static int32_t get_offset_of_GameOverPanel_5() { return static_cast<int32_t>(offsetof(playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED, ___GameOverPanel_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_GameOverPanel_5() const { return ___GameOverPanel_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_GameOverPanel_5() { return &___GameOverPanel_5; }
	inline void set_GameOverPanel_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___GameOverPanel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOverPanel_5), (void*)value);
	}

	inline static int32_t get_offset_of_GameStartPanel_6() { return static_cast<int32_t>(offsetof(playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED, ___GameStartPanel_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_GameStartPanel_6() const { return ___GameStartPanel_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_GameStartPanel_6() { return &___GameStartPanel_6; }
	inline void set_GameStartPanel_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___GameStartPanel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameStartPanel_6), (void*)value);
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED, ___player_7)); }
	inline Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D * get_player_7() const { return ___player_7; }
	inline Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_7), (void*)value);
	}

	inline static int32_t get_offset_of_timer_8() { return static_cast<int32_t>(offsetof(playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED, ___timer_8)); }
	inline timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * get_timer_8() const { return ___timer_8; }
	inline timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF ** get_address_of_timer_8() { return &___timer_8; }
	inline void set_timer_8(timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * value)
	{
		___timer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timer_8), (void*)value);
	}

	inline static int32_t get_offset_of_score_9() { return static_cast<int32_t>(offsetof(playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED, ___score_9)); }
	inline Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * get_score_9() const { return ___score_9; }
	inline Score_t72F7EE757BE7D4C7846803B3072753760AB6427F ** get_address_of_score_9() { return &___score_9; }
	inline void set_score_9(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * value)
	{
		___score_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___score_9), (void*)value);
	}
};

struct playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED_StaticFields
{
public:
	// System.Boolean playermanage::isGameOver
	bool ___isGameOver_4;

public:
	inline static int32_t get_offset_of_isGameOver_4() { return static_cast<int32_t>(offsetof(playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED_StaticFields, ___isGameOver_4)); }
	inline bool get_isGameOver_4() const { return ___isGameOver_4; }
	inline bool* get_address_of_isGameOver_4() { return &___isGameOver_4; }
	inline void set_isGameOver_4(bool value)
	{
		___isGameOver_4 = value;
	}
};


// playermovement
struct playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single playermovement::movementInputX
	float ___movementInputX_4;
	// System.Single playermovement::movementInputY
	float ___movementInputY_5;
	// System.Single playermovement::movementSpeed
	float ___movementSpeed_6;
	// System.Single playermovement::jumpForce
	float ___jumpForce_7;
	// System.Boolean playermovement::facingRightDirection
	bool ___facingRightDirection_8;
	// System.Boolean playermovement::canMove
	bool ___canMove_9;
	// UnityEngine.Rigidbody2D playermovement::playerRb
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___playerRb_10;
	// UnityEngine.LayerMask playermovement::groundLayer
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___groundLayer_11;
	// laddermovement playermovement::laddermovementScript
	laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852 * ___laddermovementScript_12;
	// System.Int32 playermovement::currentLevel
	int32_t ___currentLevel_13;
	// UnityEngine.GameObject[] playermovement::levels
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___levels_14;
	// UnityEngine.GameObject playermovement::levelEnd
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___levelEnd_15;
	// System.Boolean playermovement::levelEnded
	bool ___levelEnded_16;
	// System.Single playermovement::levelTimer
	float ___levelTimer_17;
	// UnityEngine.GameObject playermovement::gameEnd
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameEnd_18;
	// System.Boolean playermovement::gameEnded
	bool ___gameEnded_19;
	// Holder playermovement::camBG
	Holder_tBC04476AC1BB69D8FAF7EF93B49402612407F571 * ___camBG_20;
	// timer playermovement::timerScript
	timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * ___timerScript_21;
	// Playerattack playermovement::attackScript
	Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * ___attackScript_22;
	// Playerweapons playermovement::weaponsScript
	Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * ___weaponsScript_23;
	// audiomanage playermovement::audiomanage
	audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * ___audiomanage_24;
	// UnityEngine.GameObject playermovement::ManageWeapons
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___ManageWeapons_25;

public:
	inline static int32_t get_offset_of_movementInputX_4() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___movementInputX_4)); }
	inline float get_movementInputX_4() const { return ___movementInputX_4; }
	inline float* get_address_of_movementInputX_4() { return &___movementInputX_4; }
	inline void set_movementInputX_4(float value)
	{
		___movementInputX_4 = value;
	}

	inline static int32_t get_offset_of_movementInputY_5() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___movementInputY_5)); }
	inline float get_movementInputY_5() const { return ___movementInputY_5; }
	inline float* get_address_of_movementInputY_5() { return &___movementInputY_5; }
	inline void set_movementInputY_5(float value)
	{
		___movementInputY_5 = value;
	}

	inline static int32_t get_offset_of_movementSpeed_6() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___movementSpeed_6)); }
	inline float get_movementSpeed_6() const { return ___movementSpeed_6; }
	inline float* get_address_of_movementSpeed_6() { return &___movementSpeed_6; }
	inline void set_movementSpeed_6(float value)
	{
		___movementSpeed_6 = value;
	}

	inline static int32_t get_offset_of_jumpForce_7() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___jumpForce_7)); }
	inline float get_jumpForce_7() const { return ___jumpForce_7; }
	inline float* get_address_of_jumpForce_7() { return &___jumpForce_7; }
	inline void set_jumpForce_7(float value)
	{
		___jumpForce_7 = value;
	}

	inline static int32_t get_offset_of_facingRightDirection_8() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___facingRightDirection_8)); }
	inline bool get_facingRightDirection_8() const { return ___facingRightDirection_8; }
	inline bool* get_address_of_facingRightDirection_8() { return &___facingRightDirection_8; }
	inline void set_facingRightDirection_8(bool value)
	{
		___facingRightDirection_8 = value;
	}

	inline static int32_t get_offset_of_canMove_9() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___canMove_9)); }
	inline bool get_canMove_9() const { return ___canMove_9; }
	inline bool* get_address_of_canMove_9() { return &___canMove_9; }
	inline void set_canMove_9(bool value)
	{
		___canMove_9 = value;
	}

	inline static int32_t get_offset_of_playerRb_10() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___playerRb_10)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_playerRb_10() const { return ___playerRb_10; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_playerRb_10() { return &___playerRb_10; }
	inline void set_playerRb_10(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___playerRb_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerRb_10), (void*)value);
	}

	inline static int32_t get_offset_of_groundLayer_11() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___groundLayer_11)); }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  get_groundLayer_11() const { return ___groundLayer_11; }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * get_address_of_groundLayer_11() { return &___groundLayer_11; }
	inline void set_groundLayer_11(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		___groundLayer_11 = value;
	}

	inline static int32_t get_offset_of_laddermovementScript_12() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___laddermovementScript_12)); }
	inline laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852 * get_laddermovementScript_12() const { return ___laddermovementScript_12; }
	inline laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852 ** get_address_of_laddermovementScript_12() { return &___laddermovementScript_12; }
	inline void set_laddermovementScript_12(laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852 * value)
	{
		___laddermovementScript_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laddermovementScript_12), (void*)value);
	}

	inline static int32_t get_offset_of_currentLevel_13() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___currentLevel_13)); }
	inline int32_t get_currentLevel_13() const { return ___currentLevel_13; }
	inline int32_t* get_address_of_currentLevel_13() { return &___currentLevel_13; }
	inline void set_currentLevel_13(int32_t value)
	{
		___currentLevel_13 = value;
	}

	inline static int32_t get_offset_of_levels_14() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___levels_14)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_levels_14() const { return ___levels_14; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_levels_14() { return &___levels_14; }
	inline void set_levels_14(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___levels_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levels_14), (void*)value);
	}

	inline static int32_t get_offset_of_levelEnd_15() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___levelEnd_15)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_levelEnd_15() const { return ___levelEnd_15; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_levelEnd_15() { return &___levelEnd_15; }
	inline void set_levelEnd_15(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___levelEnd_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelEnd_15), (void*)value);
	}

	inline static int32_t get_offset_of_levelEnded_16() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___levelEnded_16)); }
	inline bool get_levelEnded_16() const { return ___levelEnded_16; }
	inline bool* get_address_of_levelEnded_16() { return &___levelEnded_16; }
	inline void set_levelEnded_16(bool value)
	{
		___levelEnded_16 = value;
	}

	inline static int32_t get_offset_of_levelTimer_17() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___levelTimer_17)); }
	inline float get_levelTimer_17() const { return ___levelTimer_17; }
	inline float* get_address_of_levelTimer_17() { return &___levelTimer_17; }
	inline void set_levelTimer_17(float value)
	{
		___levelTimer_17 = value;
	}

	inline static int32_t get_offset_of_gameEnd_18() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___gameEnd_18)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_gameEnd_18() const { return ___gameEnd_18; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_gameEnd_18() { return &___gameEnd_18; }
	inline void set_gameEnd_18(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___gameEnd_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameEnd_18), (void*)value);
	}

	inline static int32_t get_offset_of_gameEnded_19() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___gameEnded_19)); }
	inline bool get_gameEnded_19() const { return ___gameEnded_19; }
	inline bool* get_address_of_gameEnded_19() { return &___gameEnded_19; }
	inline void set_gameEnded_19(bool value)
	{
		___gameEnded_19 = value;
	}

	inline static int32_t get_offset_of_camBG_20() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___camBG_20)); }
	inline Holder_tBC04476AC1BB69D8FAF7EF93B49402612407F571 * get_camBG_20() const { return ___camBG_20; }
	inline Holder_tBC04476AC1BB69D8FAF7EF93B49402612407F571 ** get_address_of_camBG_20() { return &___camBG_20; }
	inline void set_camBG_20(Holder_tBC04476AC1BB69D8FAF7EF93B49402612407F571 * value)
	{
		___camBG_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camBG_20), (void*)value);
	}

	inline static int32_t get_offset_of_timerScript_21() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___timerScript_21)); }
	inline timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * get_timerScript_21() const { return ___timerScript_21; }
	inline timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF ** get_address_of_timerScript_21() { return &___timerScript_21; }
	inline void set_timerScript_21(timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * value)
	{
		___timerScript_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerScript_21), (void*)value);
	}

	inline static int32_t get_offset_of_attackScript_22() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___attackScript_22)); }
	inline Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * get_attackScript_22() const { return ___attackScript_22; }
	inline Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A ** get_address_of_attackScript_22() { return &___attackScript_22; }
	inline void set_attackScript_22(Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * value)
	{
		___attackScript_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attackScript_22), (void*)value);
	}

	inline static int32_t get_offset_of_weaponsScript_23() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___weaponsScript_23)); }
	inline Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * get_weaponsScript_23() const { return ___weaponsScript_23; }
	inline Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED ** get_address_of_weaponsScript_23() { return &___weaponsScript_23; }
	inline void set_weaponsScript_23(Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * value)
	{
		___weaponsScript_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weaponsScript_23), (void*)value);
	}

	inline static int32_t get_offset_of_audiomanage_24() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___audiomanage_24)); }
	inline audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * get_audiomanage_24() const { return ___audiomanage_24; }
	inline audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C ** get_address_of_audiomanage_24() { return &___audiomanage_24; }
	inline void set_audiomanage_24(audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * value)
	{
		___audiomanage_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audiomanage_24), (void*)value);
	}

	inline static int32_t get_offset_of_ManageWeapons_25() { return static_cast<int32_t>(offsetof(playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829, ___ManageWeapons_25)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_ManageWeapons_25() const { return ___ManageWeapons_25; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_ManageWeapons_25() { return &___ManageWeapons_25; }
	inline void set_ManageWeapons_25(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___ManageWeapons_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManageWeapons_25), (void*)value);
	}
};


// timer
struct timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// TMPro.TextMeshProUGUI timer::timerDisplay
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___timerDisplay_4;
	// System.Single timer::timeLeft
	float ___timeLeft_5;

public:
	inline static int32_t get_offset_of_timerDisplay_4() { return static_cast<int32_t>(offsetof(timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF, ___timerDisplay_4)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_timerDisplay_4() const { return ___timerDisplay_4; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_timerDisplay_4() { return &___timerDisplay_4; }
	inline void set_timerDisplay_4(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___timerDisplay_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerDisplay_4), (void*)value);
	}

	inline static int32_t get_offset_of_timeLeft_5() { return static_cast<int32_t>(offsetof(timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF, ___timeLeft_5)); }
	inline float get_timeLeft_5() const { return ___timeLeft_5; }
	inline float* get_address_of_timeLeft_5() { return &___timeLeft_5; }
	inline void set_timeLeft_5(float value)
	{
		___timeLeft_5 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// TMPro.TMP_Text
struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_35;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_36;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_37;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_38;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_fontAsset_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_currentFontAsset_40;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_41;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_sharedMaterial_42;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_currentMaterial_43;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_47;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontSharedMaterials_48;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_fontMaterial_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontMaterials_50;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_51;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_fontColor32_52;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_fontColor_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_underlineColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_strikethroughColor_56;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_57;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_58;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  ___m_fontColorGradient_59;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_fontColorGradientPreset_60;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_spriteAsset_61;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_62;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_63;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_spriteColor_64;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04 * ___m_StyleSheet_65;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD * ___m_TextStyle_66;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_67;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_68;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_faceColor_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_outlineColor_70;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_71;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_72;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_73;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_74;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  ___m_sizeStack_75;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_77;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  ___m_FontWeightStack_78;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_79;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_80;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_81;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_83;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_84;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_86;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_88;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___m_fontStyleStack_89;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_90;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_91;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_92;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_93;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_94;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  ___m_lineJustificationStack_95;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_textContainerLocalCorners_96;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_97;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_98;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_99;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_100;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_102;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_103;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_104;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_105;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_106;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_107;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_108;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_109;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_110;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_111;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_112;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_113;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_114;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_115;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___m_linkedTextComponent_116;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___parentLinkedComponent_117;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_118;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_119;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_120;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_121;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_122;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_123;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_124;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_125;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_126;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_127;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_128;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_129;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_130;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_132;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_133;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_134;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_135;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_136;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_137;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_138;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_141;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_142;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_143;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_144;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_margin_145;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_146;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_147;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_148;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_149;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_150;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___m_textInfo_151;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_152;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_153;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_transform_154;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_rectTransform_155;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PreviousRectTransformSize_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PreviousPivotPosition_157;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_158;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_159;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_mesh_160;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_161;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tBD8EC4B76F43452C94F917208E05C2D58675DF45 * ___OnPreRenderText_164;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * ___m_spriteAnimator_165;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_166;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_167;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_168;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_169;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_170;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_171;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * ___m_LayoutElement_172;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_173;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_174;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_175;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_176;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_177;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_178;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_179;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_180;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_181;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_182;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_183;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_184;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_185;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_189;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_190;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  ___m_indentStack_191;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_192;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_193;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_FXMatrix_194;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_195;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* ___m_TextProcessingArray_196;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_197;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* ___m_internalCharacterInfo_198;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_199;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_206;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_207;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_211;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_212;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_213;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_214;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_215;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_216;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_217;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_218;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_219;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_220;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_222;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_223;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___m_meshExtents_224;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_htmlColor_225;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___m_colorStack_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___m_underlineColorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___m_strikethroughColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  ___m_HighlightStateStack_229;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_colorGradientPreset_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  ___m_colorGradientStack_231;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_232;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_233;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_234;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_tFBA4A77A904C2C565B037C9DAD4364D042A8E642* ___m_TextStyleStacks_235;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  ___m_ItalicAngleStack_237;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  ___m_actionStack_239;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_240;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_241;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  ___m_baselineOffsetStack_242;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_243;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_244;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * ___m_cached_TextElement_245;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  ___m_Ellipsis_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  ___m_Underline_247;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_defaultSpriteAsset_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_currentSpriteAsset_249;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_250;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_251;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_252;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_255;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA  ___m_TextBackingArray_256;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* ___k_Power_257;

public:
	inline static int32_t get_offset_of_m_text_35() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_text_35)); }
	inline String_t* get_m_text_35() const { return ___m_text_35; }
	inline String_t** get_address_of_m_text_35() { return &___m_text_35; }
	inline void set_m_text_35(String_t* value)
	{
		___m_text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsTextBackingStringDirty_36() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_IsTextBackingStringDirty_36)); }
	inline bool get_m_IsTextBackingStringDirty_36() const { return ___m_IsTextBackingStringDirty_36; }
	inline bool* get_address_of_m_IsTextBackingStringDirty_36() { return &___m_IsTextBackingStringDirty_36; }
	inline void set_m_IsTextBackingStringDirty_36(bool value)
	{
		___m_IsTextBackingStringDirty_36 = value;
	}

	inline static int32_t get_offset_of_m_TextPreprocessor_37() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextPreprocessor_37)); }
	inline RuntimeObject* get_m_TextPreprocessor_37() const { return ___m_TextPreprocessor_37; }
	inline RuntimeObject** get_address_of_m_TextPreprocessor_37() { return &___m_TextPreprocessor_37; }
	inline void set_m_TextPreprocessor_37(RuntimeObject* value)
	{
		___m_TextPreprocessor_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextPreprocessor_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_38() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRightToLeft_38)); }
	inline bool get_m_isRightToLeft_38() const { return ___m_isRightToLeft_38; }
	inline bool* get_address_of_m_isRightToLeft_38() { return &___m_isRightToLeft_38; }
	inline void set_m_isRightToLeft_38(bool value)
	{
		___m_isRightToLeft_38 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_39() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontAsset_39)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_fontAsset_39() const { return ___m_fontAsset_39; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_fontAsset_39() { return &___m_fontAsset_39; }
	inline void set_m_fontAsset_39(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_fontAsset_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_40() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontAsset_40)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_currentFontAsset_40() const { return ___m_currentFontAsset_40; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_currentFontAsset_40() { return &___m_currentFontAsset_40; }
	inline void set_m_currentFontAsset_40(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_currentFontAsset_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_41() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isSDFShader_41)); }
	inline bool get_m_isSDFShader_41() const { return ___m_isSDFShader_41; }
	inline bool* get_address_of_m_isSDFShader_41() { return &___m_isSDFShader_41; }
	inline void set_m_isSDFShader_41(bool value)
	{
		___m_isSDFShader_41 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_42() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sharedMaterial_42)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_sharedMaterial_42() const { return ___m_sharedMaterial_42; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_sharedMaterial_42() { return &___m_sharedMaterial_42; }
	inline void set_m_sharedMaterial_42(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_sharedMaterial_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_43() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterial_43)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_currentMaterial_43() const { return ___m_currentMaterial_43; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_currentMaterial_43() { return &___m_currentMaterial_43; }
	inline void set_m_currentMaterial_43(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_currentMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_47() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterialIndex_47)); }
	inline int32_t get_m_currentMaterialIndex_47() const { return ___m_currentMaterialIndex_47; }
	inline int32_t* get_address_of_m_currentMaterialIndex_47() { return &___m_currentMaterialIndex_47; }
	inline void set_m_currentMaterialIndex_47(int32_t value)
	{
		___m_currentMaterialIndex_47 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_48() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSharedMaterials_48)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontSharedMaterials_48() const { return ___m_fontSharedMaterials_48; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontSharedMaterials_48() { return &___m_fontSharedMaterials_48; }
	inline void set_m_fontSharedMaterials_48(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontSharedMaterials_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_49() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterial_49)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_fontMaterial_49() const { return ___m_fontMaterial_49; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_fontMaterial_49() { return &___m_fontMaterial_49; }
	inline void set_m_fontMaterial_49(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_fontMaterial_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_50() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterials_50)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontMaterials_50() const { return ___m_fontMaterials_50; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontMaterials_50() { return &___m_fontMaterials_50; }
	inline void set_m_fontMaterials_50(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontMaterials_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_51() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isMaterialDirty_51)); }
	inline bool get_m_isMaterialDirty_51() const { return ___m_isMaterialDirty_51; }
	inline bool* get_address_of_m_isMaterialDirty_51() { return &___m_isMaterialDirty_51; }
	inline void set_m_isMaterialDirty_51(bool value)
	{
		___m_isMaterialDirty_51 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_52() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor32_52)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_fontColor32_52() const { return ___m_fontColor32_52; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_fontColor32_52() { return &___m_fontColor32_52; }
	inline void set_m_fontColor32_52(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_fontColor32_52 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_53() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor_53)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_fontColor_53() const { return ___m_fontColor_53; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_fontColor_53() { return &___m_fontColor_53; }
	inline void set_m_fontColor_53(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_fontColor_53 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_55() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColor_55)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_underlineColor_55() const { return ___m_underlineColor_55; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_underlineColor_55() { return &___m_underlineColor_55; }
	inline void set_m_underlineColor_55(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_underlineColor_55 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_56() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColor_56)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_strikethroughColor_56() const { return ___m_strikethroughColor_56; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_strikethroughColor_56() { return &___m_strikethroughColor_56; }
	inline void set_m_strikethroughColor_56(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_strikethroughColor_56 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_57() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableVertexGradient_57)); }
	inline bool get_m_enableVertexGradient_57() const { return ___m_enableVertexGradient_57; }
	inline bool* get_address_of_m_enableVertexGradient_57() { return &___m_enableVertexGradient_57; }
	inline void set_m_enableVertexGradient_57(bool value)
	{
		___m_enableVertexGradient_57 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_58() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorMode_58)); }
	inline int32_t get_m_colorMode_58() const { return ___m_colorMode_58; }
	inline int32_t* get_address_of_m_colorMode_58() { return &___m_colorMode_58; }
	inline void set_m_colorMode_58(int32_t value)
	{
		___m_colorMode_58 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_59() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradient_59)); }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  get_m_fontColorGradient_59() const { return ___m_fontColorGradient_59; }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A * get_address_of_m_fontColorGradient_59() { return &___m_fontColorGradient_59; }
	inline void set_m_fontColorGradient_59(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  value)
	{
		___m_fontColorGradient_59 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_60() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradientPreset_60)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_fontColorGradientPreset_60() const { return ___m_fontColorGradientPreset_60; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_fontColorGradientPreset_60() { return &___m_fontColorGradientPreset_60; }
	inline void set_m_fontColorGradientPreset_60(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_fontColorGradientPreset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_60), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_61() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAsset_61)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_spriteAsset_61() const { return ___m_spriteAsset_61; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_spriteAsset_61() { return &___m_spriteAsset_61; }
	inline void set_m_spriteAsset_61(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_spriteAsset_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_61), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_62() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintAllSprites_62)); }
	inline bool get_m_tintAllSprites_62() const { return ___m_tintAllSprites_62; }
	inline bool* get_address_of_m_tintAllSprites_62() { return &___m_tintAllSprites_62; }
	inline void set_m_tintAllSprites_62(bool value)
	{
		___m_tintAllSprites_62 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_63() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintSprite_63)); }
	inline bool get_m_tintSprite_63() const { return ___m_tintSprite_63; }
	inline bool* get_address_of_m_tintSprite_63() { return &___m_tintSprite_63; }
	inline void set_m_tintSprite_63(bool value)
	{
		___m_tintSprite_63 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_64() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteColor_64)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_spriteColor_64() const { return ___m_spriteColor_64; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_spriteColor_64() { return &___m_spriteColor_64; }
	inline void set_m_spriteColor_64(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_spriteColor_64 = value;
	}

	inline static int32_t get_offset_of_m_StyleSheet_65() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_StyleSheet_65)); }
	inline TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04 * get_m_StyleSheet_65() const { return ___m_StyleSheet_65; }
	inline TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04 ** get_address_of_m_StyleSheet_65() { return &___m_StyleSheet_65; }
	inline void set_m_StyleSheet_65(TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04 * value)
	{
		___m_StyleSheet_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleSheet_65), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyle_66() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextStyle_66)); }
	inline TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD * get_m_TextStyle_66() const { return ___m_TextStyle_66; }
	inline TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD ** get_address_of_m_TextStyle_66() { return &___m_TextStyle_66; }
	inline void set_m_TextStyle_66(TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD * value)
	{
		___m_TextStyle_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyle_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleHashCode_67() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextStyleHashCode_67)); }
	inline int32_t get_m_TextStyleHashCode_67() const { return ___m_TextStyleHashCode_67; }
	inline int32_t* get_address_of_m_TextStyleHashCode_67() { return &___m_TextStyleHashCode_67; }
	inline void set_m_TextStyleHashCode_67(int32_t value)
	{
		___m_TextStyleHashCode_67 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_68() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overrideHtmlColors_68)); }
	inline bool get_m_overrideHtmlColors_68() const { return ___m_overrideHtmlColors_68; }
	inline bool* get_address_of_m_overrideHtmlColors_68() { return &___m_overrideHtmlColors_68; }
	inline void set_m_overrideHtmlColors_68(bool value)
	{
		___m_overrideHtmlColors_68 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_69() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_faceColor_69)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_faceColor_69() const { return ___m_faceColor_69; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_faceColor_69() { return &___m_faceColor_69; }
	inline void set_m_faceColor_69(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_faceColor_69 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_70() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineColor_70)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_outlineColor_70() const { return ___m_outlineColor_70; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_outlineColor_70() { return &___m_outlineColor_70; }
	inline void set_m_outlineColor_70(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_outlineColor_70 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_71() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineWidth_71)); }
	inline float get_m_outlineWidth_71() const { return ___m_outlineWidth_71; }
	inline float* get_address_of_m_outlineWidth_71() { return &___m_outlineWidth_71; }
	inline void set_m_outlineWidth_71(float value)
	{
		___m_outlineWidth_71 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_72() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSize_72)); }
	inline float get_m_fontSize_72() const { return ___m_fontSize_72; }
	inline float* get_address_of_m_fontSize_72() { return &___m_fontSize_72; }
	inline void set_m_fontSize_72(float value)
	{
		___m_fontSize_72 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_73() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontSize_73)); }
	inline float get_m_currentFontSize_73() const { return ___m_currentFontSize_73; }
	inline float* get_address_of_m_currentFontSize_73() { return &___m_currentFontSize_73; }
	inline void set_m_currentFontSize_73(float value)
	{
		___m_currentFontSize_73 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_74() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeBase_74)); }
	inline float get_m_fontSizeBase_74() const { return ___m_fontSizeBase_74; }
	inline float* get_address_of_m_fontSizeBase_74() { return &___m_fontSizeBase_74; }
	inline void set_m_fontSizeBase_74(float value)
	{
		___m_fontSizeBase_74 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_75() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sizeStack_75)); }
	inline TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  get_m_sizeStack_75() const { return ___m_sizeStack_75; }
	inline TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A * get_address_of_m_sizeStack_75() { return &___m_sizeStack_75; }
	inline void set_m_sizeStack_75(TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  value)
	{
		___m_sizeStack_75 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_75))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_76() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontWeight_76)); }
	inline int32_t get_m_fontWeight_76() const { return ___m_fontWeight_76; }
	inline int32_t* get_address_of_m_fontWeight_76() { return &___m_fontWeight_76; }
	inline void set_m_fontWeight_76(int32_t value)
	{
		___m_fontWeight_76 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_77() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightInternal_77)); }
	inline int32_t get_m_FontWeightInternal_77() const { return ___m_FontWeightInternal_77; }
	inline int32_t* get_address_of_m_FontWeightInternal_77() { return &___m_FontWeightInternal_77; }
	inline void set_m_FontWeightInternal_77(int32_t value)
	{
		___m_FontWeightInternal_77 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_78() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightStack_78)); }
	inline TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  get_m_FontWeightStack_78() const { return ___m_FontWeightStack_78; }
	inline TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285 * get_address_of_m_FontWeightStack_78() { return &___m_FontWeightStack_78; }
	inline void set_m_FontWeightStack_78(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  value)
	{
		___m_FontWeightStack_78 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_78))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_79() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableAutoSizing_79)); }
	inline bool get_m_enableAutoSizing_79() const { return ___m_enableAutoSizing_79; }
	inline bool* get_address_of_m_enableAutoSizing_79() { return &___m_enableAutoSizing_79; }
	inline void set_m_enableAutoSizing_79(bool value)
	{
		___m_enableAutoSizing_79 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_80() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxFontSize_80)); }
	inline float get_m_maxFontSize_80() const { return ___m_maxFontSize_80; }
	inline float* get_address_of_m_maxFontSize_80() { return &___m_maxFontSize_80; }
	inline void set_m_maxFontSize_80(float value)
	{
		___m_maxFontSize_80 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_81() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minFontSize_81)); }
	inline float get_m_minFontSize_81() const { return ___m_minFontSize_81; }
	inline float* get_address_of_m_minFontSize_81() { return &___m_minFontSize_81; }
	inline void set_m_minFontSize_81(float value)
	{
		___m_minFontSize_81 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeIterationCount_82() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_AutoSizeIterationCount_82)); }
	inline int32_t get_m_AutoSizeIterationCount_82() const { return ___m_AutoSizeIterationCount_82; }
	inline int32_t* get_address_of_m_AutoSizeIterationCount_82() { return &___m_AutoSizeIterationCount_82; }
	inline void set_m_AutoSizeIterationCount_82(int32_t value)
	{
		___m_AutoSizeIterationCount_82 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeMaxIterationCount_83() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_AutoSizeMaxIterationCount_83)); }
	inline int32_t get_m_AutoSizeMaxIterationCount_83() const { return ___m_AutoSizeMaxIterationCount_83; }
	inline int32_t* get_address_of_m_AutoSizeMaxIterationCount_83() { return &___m_AutoSizeMaxIterationCount_83; }
	inline void set_m_AutoSizeMaxIterationCount_83(int32_t value)
	{
		___m_AutoSizeMaxIterationCount_83 = value;
	}

	inline static int32_t get_offset_of_m_IsAutoSizePointSizeSet_84() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_IsAutoSizePointSizeSet_84)); }
	inline bool get_m_IsAutoSizePointSizeSet_84() const { return ___m_IsAutoSizePointSizeSet_84; }
	inline bool* get_address_of_m_IsAutoSizePointSizeSet_84() { return &___m_IsAutoSizePointSizeSet_84; }
	inline void set_m_IsAutoSizePointSizeSet_84(bool value)
	{
		___m_IsAutoSizePointSizeSet_84 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_85() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMin_85)); }
	inline float get_m_fontSizeMin_85() const { return ___m_fontSizeMin_85; }
	inline float* get_address_of_m_fontSizeMin_85() { return &___m_fontSizeMin_85; }
	inline void set_m_fontSizeMin_85(float value)
	{
		___m_fontSizeMin_85 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_86() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMax_86)); }
	inline float get_m_fontSizeMax_86() const { return ___m_fontSizeMax_86; }
	inline float* get_address_of_m_fontSizeMax_86() { return &___m_fontSizeMax_86; }
	inline void set_m_fontSizeMax_86(float value)
	{
		___m_fontSizeMax_86 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_87() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyle_87)); }
	inline int32_t get_m_fontStyle_87() const { return ___m_fontStyle_87; }
	inline int32_t* get_address_of_m_fontStyle_87() { return &___m_fontStyle_87; }
	inline void set_m_fontStyle_87(int32_t value)
	{
		___m_fontStyle_87 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_88() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontStyleInternal_88)); }
	inline int32_t get_m_FontStyleInternal_88() const { return ___m_FontStyleInternal_88; }
	inline int32_t* get_address_of_m_FontStyleInternal_88() { return &___m_FontStyleInternal_88; }
	inline void set_m_FontStyleInternal_88(int32_t value)
	{
		___m_FontStyleInternal_88 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_89() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyleStack_89)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_m_fontStyleStack_89() const { return ___m_fontStyleStack_89; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_m_fontStyleStack_89() { return &___m_fontStyleStack_89; }
	inline void set_m_fontStyleStack_89(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___m_fontStyleStack_89 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_90() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingBold_90)); }
	inline bool get_m_isUsingBold_90() const { return ___m_isUsingBold_90; }
	inline bool* get_address_of_m_isUsingBold_90() { return &___m_isUsingBold_90; }
	inline void set_m_isUsingBold_90(bool value)
	{
		___m_isUsingBold_90 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAlignment_91() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_HorizontalAlignment_91)); }
	inline int32_t get_m_HorizontalAlignment_91() const { return ___m_HorizontalAlignment_91; }
	inline int32_t* get_address_of_m_HorizontalAlignment_91() { return &___m_HorizontalAlignment_91; }
	inline void set_m_HorizontalAlignment_91(int32_t value)
	{
		___m_HorizontalAlignment_91 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAlignment_92() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_VerticalAlignment_92)); }
	inline int32_t get_m_VerticalAlignment_92() const { return ___m_VerticalAlignment_92; }
	inline int32_t* get_address_of_m_VerticalAlignment_92() { return &___m_VerticalAlignment_92; }
	inline void set_m_VerticalAlignment_92(int32_t value)
	{
		___m_VerticalAlignment_92 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_93() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textAlignment_93)); }
	inline int32_t get_m_textAlignment_93() const { return ___m_textAlignment_93; }
	inline int32_t* get_address_of_m_textAlignment_93() { return &___m_textAlignment_93; }
	inline void set_m_textAlignment_93(int32_t value)
	{
		___m_textAlignment_93 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_94() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustification_94)); }
	inline int32_t get_m_lineJustification_94() const { return ___m_lineJustification_94; }
	inline int32_t* get_address_of_m_lineJustification_94() { return &___m_lineJustification_94; }
	inline void set_m_lineJustification_94(int32_t value)
	{
		___m_lineJustification_94 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_95() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustificationStack_95)); }
	inline TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  get_m_lineJustificationStack_95() const { return ___m_lineJustificationStack_95; }
	inline TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7 * get_address_of_m_lineJustificationStack_95() { return &___m_lineJustificationStack_95; }
	inline void set_m_lineJustificationStack_95(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  value)
	{
		___m_lineJustificationStack_95 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_95))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_96() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textContainerLocalCorners_96)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_textContainerLocalCorners_96() const { return ___m_textContainerLocalCorners_96; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_textContainerLocalCorners_96() { return &___m_textContainerLocalCorners_96; }
	inline void set_m_textContainerLocalCorners_96(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_textContainerLocalCorners_96 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_96), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_97() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterSpacing_97)); }
	inline float get_m_characterSpacing_97() const { return ___m_characterSpacing_97; }
	inline float* get_address_of_m_characterSpacing_97() { return &___m_characterSpacing_97; }
	inline void set_m_characterSpacing_97(float value)
	{
		___m_characterSpacing_97 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_98() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cSpacing_98)); }
	inline float get_m_cSpacing_98() const { return ___m_cSpacing_98; }
	inline float* get_address_of_m_cSpacing_98() { return &___m_cSpacing_98; }
	inline void set_m_cSpacing_98(float value)
	{
		___m_cSpacing_98 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_99() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_monoSpacing_99)); }
	inline float get_m_monoSpacing_99() const { return ___m_monoSpacing_99; }
	inline float* get_address_of_m_monoSpacing_99() { return &___m_monoSpacing_99; }
	inline void set_m_monoSpacing_99(float value)
	{
		___m_monoSpacing_99 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_100() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordSpacing_100)); }
	inline float get_m_wordSpacing_100() const { return ___m_wordSpacing_100; }
	inline float* get_address_of_m_wordSpacing_100() { return &___m_wordSpacing_100; }
	inline void set_m_wordSpacing_100(float value)
	{
		___m_wordSpacing_100 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_101() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacing_101)); }
	inline float get_m_lineSpacing_101() const { return ___m_lineSpacing_101; }
	inline float* get_address_of_m_lineSpacing_101() { return &___m_lineSpacing_101; }
	inline void set_m_lineSpacing_101(float value)
	{
		___m_lineSpacing_101 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_102() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingDelta_102)); }
	inline float get_m_lineSpacingDelta_102() const { return ___m_lineSpacingDelta_102; }
	inline float* get_address_of_m_lineSpacingDelta_102() { return &___m_lineSpacingDelta_102; }
	inline void set_m_lineSpacingDelta_102(float value)
	{
		___m_lineSpacingDelta_102 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_103() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineHeight_103)); }
	inline float get_m_lineHeight_103() const { return ___m_lineHeight_103; }
	inline float* get_address_of_m_lineHeight_103() { return &___m_lineHeight_103; }
	inline void set_m_lineHeight_103(float value)
	{
		___m_lineHeight_103 = value;
	}

	inline static int32_t get_offset_of_m_IsDrivenLineSpacing_104() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_IsDrivenLineSpacing_104)); }
	inline bool get_m_IsDrivenLineSpacing_104() const { return ___m_IsDrivenLineSpacing_104; }
	inline bool* get_address_of_m_IsDrivenLineSpacing_104() { return &___m_IsDrivenLineSpacing_104; }
	inline void set_m_IsDrivenLineSpacing_104(bool value)
	{
		___m_IsDrivenLineSpacing_104 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_105() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingMax_105)); }
	inline float get_m_lineSpacingMax_105() const { return ___m_lineSpacingMax_105; }
	inline float* get_address_of_m_lineSpacingMax_105() { return &___m_lineSpacingMax_105; }
	inline void set_m_lineSpacingMax_105(float value)
	{
		___m_lineSpacingMax_105 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_106() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_paragraphSpacing_106)); }
	inline float get_m_paragraphSpacing_106() const { return ___m_paragraphSpacing_106; }
	inline float* get_address_of_m_paragraphSpacing_106() { return &___m_paragraphSpacing_106; }
	inline void set_m_paragraphSpacing_106(float value)
	{
		___m_paragraphSpacing_106 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_107() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthMaxAdj_107)); }
	inline float get_m_charWidthMaxAdj_107() const { return ___m_charWidthMaxAdj_107; }
	inline float* get_address_of_m_charWidthMaxAdj_107() { return &___m_charWidthMaxAdj_107; }
	inline void set_m_charWidthMaxAdj_107(float value)
	{
		___m_charWidthMaxAdj_107 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_108() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthAdjDelta_108)); }
	inline float get_m_charWidthAdjDelta_108() const { return ___m_charWidthAdjDelta_108; }
	inline float* get_address_of_m_charWidthAdjDelta_108() { return &___m_charWidthAdjDelta_108; }
	inline void set_m_charWidthAdjDelta_108(float value)
	{
		___m_charWidthAdjDelta_108 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_109() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableWordWrapping_109)); }
	inline bool get_m_enableWordWrapping_109() const { return ___m_enableWordWrapping_109; }
	inline bool* get_address_of_m_enableWordWrapping_109() { return &___m_enableWordWrapping_109; }
	inline void set_m_enableWordWrapping_109(bool value)
	{
		___m_enableWordWrapping_109 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_110() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCharacterWrappingEnabled_110)); }
	inline bool get_m_isCharacterWrappingEnabled_110() const { return ___m_isCharacterWrappingEnabled_110; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_110() { return &___m_isCharacterWrappingEnabled_110; }
	inline void set_m_isCharacterWrappingEnabled_110(bool value)
	{
		___m_isCharacterWrappingEnabled_110 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_111() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNonBreakingSpace_111)); }
	inline bool get_m_isNonBreakingSpace_111() const { return ___m_isNonBreakingSpace_111; }
	inline bool* get_address_of_m_isNonBreakingSpace_111() { return &___m_isNonBreakingSpace_111; }
	inline void set_m_isNonBreakingSpace_111(bool value)
	{
		___m_isNonBreakingSpace_111 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_112() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isIgnoringAlignment_112)); }
	inline bool get_m_isIgnoringAlignment_112() const { return ___m_isIgnoringAlignment_112; }
	inline bool* get_address_of_m_isIgnoringAlignment_112() { return &___m_isIgnoringAlignment_112; }
	inline void set_m_isIgnoringAlignment_112(bool value)
	{
		___m_isIgnoringAlignment_112 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_113() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordWrappingRatios_113)); }
	inline float get_m_wordWrappingRatios_113() const { return ___m_wordWrappingRatios_113; }
	inline float* get_address_of_m_wordWrappingRatios_113() { return &___m_wordWrappingRatios_113; }
	inline void set_m_wordWrappingRatios_113(float value)
	{
		___m_wordWrappingRatios_113 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_114() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overflowMode_114)); }
	inline int32_t get_m_overflowMode_114() const { return ___m_overflowMode_114; }
	inline int32_t* get_address_of_m_overflowMode_114() { return &___m_overflowMode_114; }
	inline void set_m_overflowMode_114(int32_t value)
	{
		___m_overflowMode_114 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_115() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstOverflowCharacterIndex_115)); }
	inline int32_t get_m_firstOverflowCharacterIndex_115() const { return ___m_firstOverflowCharacterIndex_115; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_115() { return &___m_firstOverflowCharacterIndex_115; }
	inline void set_m_firstOverflowCharacterIndex_115(int32_t value)
	{
		___m_firstOverflowCharacterIndex_115 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_116() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_linkedTextComponent_116)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_m_linkedTextComponent_116() const { return ___m_linkedTextComponent_116; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_m_linkedTextComponent_116() { return &___m_linkedTextComponent_116; }
	inline void set_m_linkedTextComponent_116(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___m_linkedTextComponent_116 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_116), (void*)value);
	}

	inline static int32_t get_offset_of_parentLinkedComponent_117() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___parentLinkedComponent_117)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_parentLinkedComponent_117() const { return ___parentLinkedComponent_117; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_parentLinkedComponent_117() { return &___parentLinkedComponent_117; }
	inline void set_parentLinkedComponent_117(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___parentLinkedComponent_117 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentLinkedComponent_117), (void*)value);
	}

	inline static int32_t get_offset_of_m_isTextTruncated_118() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isTextTruncated_118)); }
	inline bool get_m_isTextTruncated_118() const { return ___m_isTextTruncated_118; }
	inline bool* get_address_of_m_isTextTruncated_118() { return &___m_isTextTruncated_118; }
	inline void set_m_isTextTruncated_118(bool value)
	{
		___m_isTextTruncated_118 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_119() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableKerning_119)); }
	inline bool get_m_enableKerning_119() const { return ___m_enableKerning_119; }
	inline bool* get_address_of_m_enableKerning_119() { return &___m_enableKerning_119; }
	inline void set_m_enableKerning_119(bool value)
	{
		___m_enableKerning_119 = value;
	}

	inline static int32_t get_offset_of_m_GlyphHorizontalAdvanceAdjustment_120() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_GlyphHorizontalAdvanceAdjustment_120)); }
	inline float get_m_GlyphHorizontalAdvanceAdjustment_120() const { return ___m_GlyphHorizontalAdvanceAdjustment_120; }
	inline float* get_address_of_m_GlyphHorizontalAdvanceAdjustment_120() { return &___m_GlyphHorizontalAdvanceAdjustment_120; }
	inline void set_m_GlyphHorizontalAdvanceAdjustment_120(float value)
	{
		___m_GlyphHorizontalAdvanceAdjustment_120 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_121() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableExtraPadding_121)); }
	inline bool get_m_enableExtraPadding_121() const { return ___m_enableExtraPadding_121; }
	inline bool* get_address_of_m_enableExtraPadding_121() { return &___m_enableExtraPadding_121; }
	inline void set_m_enableExtraPadding_121(bool value)
	{
		___m_enableExtraPadding_121 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_122() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___checkPaddingRequired_122)); }
	inline bool get_checkPaddingRequired_122() const { return ___checkPaddingRequired_122; }
	inline bool* get_address_of_checkPaddingRequired_122() { return &___checkPaddingRequired_122; }
	inline void set_checkPaddingRequired_122(bool value)
	{
		___checkPaddingRequired_122 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_123() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRichText_123)); }
	inline bool get_m_isRichText_123() const { return ___m_isRichText_123; }
	inline bool* get_address_of_m_isRichText_123() { return &___m_isRichText_123; }
	inline void set_m_isRichText_123(bool value)
	{
		___m_isRichText_123 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_124() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_parseCtrlCharacters_124)); }
	inline bool get_m_parseCtrlCharacters_124() const { return ___m_parseCtrlCharacters_124; }
	inline bool* get_address_of_m_parseCtrlCharacters_124() { return &___m_parseCtrlCharacters_124; }
	inline void set_m_parseCtrlCharacters_124(bool value)
	{
		___m_parseCtrlCharacters_124 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_125() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOverlay_125)); }
	inline bool get_m_isOverlay_125() const { return ___m_isOverlay_125; }
	inline bool* get_address_of_m_isOverlay_125() { return &___m_isOverlay_125; }
	inline void set_m_isOverlay_125(bool value)
	{
		___m_isOverlay_125 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_126() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOrthographic_126)); }
	inline bool get_m_isOrthographic_126() const { return ___m_isOrthographic_126; }
	inline bool* get_address_of_m_isOrthographic_126() { return &___m_isOrthographic_126; }
	inline void set_m_isOrthographic_126(bool value)
	{
		___m_isOrthographic_126 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_127() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCullingEnabled_127)); }
	inline bool get_m_isCullingEnabled_127() const { return ___m_isCullingEnabled_127; }
	inline bool* get_address_of_m_isCullingEnabled_127() { return &___m_isCullingEnabled_127; }
	inline void set_m_isCullingEnabled_127(bool value)
	{
		___m_isCullingEnabled_127 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_128() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isMaskingEnabled_128)); }
	inline bool get_m_isMaskingEnabled_128() const { return ___m_isMaskingEnabled_128; }
	inline bool* get_address_of_m_isMaskingEnabled_128() { return &___m_isMaskingEnabled_128; }
	inline void set_m_isMaskingEnabled_128(bool value)
	{
		___m_isMaskingEnabled_128 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_129() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___isMaskUpdateRequired_129)); }
	inline bool get_isMaskUpdateRequired_129() const { return ___isMaskUpdateRequired_129; }
	inline bool* get_address_of_isMaskUpdateRequired_129() { return &___isMaskUpdateRequired_129; }
	inline void set_isMaskUpdateRequired_129(bool value)
	{
		___isMaskUpdateRequired_129 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_130() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreCulling_130)); }
	inline bool get_m_ignoreCulling_130() const { return ___m_ignoreCulling_130; }
	inline bool* get_address_of_m_ignoreCulling_130() { return &___m_ignoreCulling_130; }
	inline void set_m_ignoreCulling_130(bool value)
	{
		___m_ignoreCulling_130 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_131() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_horizontalMapping_131)); }
	inline int32_t get_m_horizontalMapping_131() const { return ___m_horizontalMapping_131; }
	inline int32_t* get_address_of_m_horizontalMapping_131() { return &___m_horizontalMapping_131; }
	inline void set_m_horizontalMapping_131(int32_t value)
	{
		___m_horizontalMapping_131 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_132() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_verticalMapping_132)); }
	inline int32_t get_m_verticalMapping_132() const { return ___m_verticalMapping_132; }
	inline int32_t* get_address_of_m_verticalMapping_132() { return &___m_verticalMapping_132; }
	inline void set_m_verticalMapping_132(int32_t value)
	{
		___m_verticalMapping_132 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_133() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_uvLineOffset_133)); }
	inline float get_m_uvLineOffset_133() const { return ___m_uvLineOffset_133; }
	inline float* get_address_of_m_uvLineOffset_133() { return &___m_uvLineOffset_133; }
	inline void set_m_uvLineOffset_133(float value)
	{
		___m_uvLineOffset_133 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_134() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderMode_134)); }
	inline int32_t get_m_renderMode_134() const { return ___m_renderMode_134; }
	inline int32_t* get_address_of_m_renderMode_134() { return &___m_renderMode_134; }
	inline void set_m_renderMode_134(int32_t value)
	{
		___m_renderMode_134 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_135() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_geometrySortingOrder_135)); }
	inline int32_t get_m_geometrySortingOrder_135() const { return ___m_geometrySortingOrder_135; }
	inline int32_t* get_address_of_m_geometrySortingOrder_135() { return &___m_geometrySortingOrder_135; }
	inline void set_m_geometrySortingOrder_135(int32_t value)
	{
		___m_geometrySortingOrder_135 = value;
	}

	inline static int32_t get_offset_of_m_IsTextObjectScaleStatic_136() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_IsTextObjectScaleStatic_136)); }
	inline bool get_m_IsTextObjectScaleStatic_136() const { return ___m_IsTextObjectScaleStatic_136; }
	inline bool* get_address_of_m_IsTextObjectScaleStatic_136() { return &___m_IsTextObjectScaleStatic_136; }
	inline void set_m_IsTextObjectScaleStatic_136(bool value)
	{
		___m_IsTextObjectScaleStatic_136 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_137() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_VertexBufferAutoSizeReduction_137)); }
	inline bool get_m_VertexBufferAutoSizeReduction_137() const { return ___m_VertexBufferAutoSizeReduction_137; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_137() { return &___m_VertexBufferAutoSizeReduction_137; }
	inline void set_m_VertexBufferAutoSizeReduction_137(bool value)
	{
		___m_VertexBufferAutoSizeReduction_137 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_138() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacter_138)); }
	inline int32_t get_m_firstVisibleCharacter_138() const { return ___m_firstVisibleCharacter_138; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_138() { return &___m_firstVisibleCharacter_138; }
	inline void set_m_firstVisibleCharacter_138(int32_t value)
	{
		___m_firstVisibleCharacter_138 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_139() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleCharacters_139)); }
	inline int32_t get_m_maxVisibleCharacters_139() const { return ___m_maxVisibleCharacters_139; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_139() { return &___m_maxVisibleCharacters_139; }
	inline void set_m_maxVisibleCharacters_139(int32_t value)
	{
		___m_maxVisibleCharacters_139 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_140() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleWords_140)); }
	inline int32_t get_m_maxVisibleWords_140() const { return ___m_maxVisibleWords_140; }
	inline int32_t* get_address_of_m_maxVisibleWords_140() { return &___m_maxVisibleWords_140; }
	inline void set_m_maxVisibleWords_140(int32_t value)
	{
		___m_maxVisibleWords_140 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_141() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleLines_141)); }
	inline int32_t get_m_maxVisibleLines_141() const { return ___m_maxVisibleLines_141; }
	inline int32_t* get_address_of_m_maxVisibleLines_141() { return &___m_maxVisibleLines_141; }
	inline void set_m_maxVisibleLines_141(int32_t value)
	{
		___m_maxVisibleLines_141 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_142() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_useMaxVisibleDescender_142)); }
	inline bool get_m_useMaxVisibleDescender_142() const { return ___m_useMaxVisibleDescender_142; }
	inline bool* get_address_of_m_useMaxVisibleDescender_142() { return &___m_useMaxVisibleDescender_142; }
	inline void set_m_useMaxVisibleDescender_142(bool value)
	{
		___m_useMaxVisibleDescender_142 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_143() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageToDisplay_143)); }
	inline int32_t get_m_pageToDisplay_143() const { return ___m_pageToDisplay_143; }
	inline int32_t* get_address_of_m_pageToDisplay_143() { return &___m_pageToDisplay_143; }
	inline void set_m_pageToDisplay_143(int32_t value)
	{
		___m_pageToDisplay_143 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_144() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNewPage_144)); }
	inline bool get_m_isNewPage_144() const { return ___m_isNewPage_144; }
	inline bool* get_address_of_m_isNewPage_144() { return &___m_isNewPage_144; }
	inline void set_m_isNewPage_144(bool value)
	{
		___m_isNewPage_144 = value;
	}

	inline static int32_t get_offset_of_m_margin_145() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_margin_145)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_margin_145() const { return ___m_margin_145; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_margin_145() { return &___m_margin_145; }
	inline void set_m_margin_145(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_margin_145 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_146() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginLeft_146)); }
	inline float get_m_marginLeft_146() const { return ___m_marginLeft_146; }
	inline float* get_address_of_m_marginLeft_146() { return &___m_marginLeft_146; }
	inline void set_m_marginLeft_146(float value)
	{
		___m_marginLeft_146 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_147() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginRight_147)); }
	inline float get_m_marginRight_147() const { return ___m_marginRight_147; }
	inline float* get_address_of_m_marginRight_147() { return &___m_marginRight_147; }
	inline void set_m_marginRight_147(float value)
	{
		___m_marginRight_147 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_148() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginWidth_148)); }
	inline float get_m_marginWidth_148() const { return ___m_marginWidth_148; }
	inline float* get_address_of_m_marginWidth_148() { return &___m_marginWidth_148; }
	inline void set_m_marginWidth_148(float value)
	{
		___m_marginWidth_148 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_149() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginHeight_149)); }
	inline float get_m_marginHeight_149() const { return ___m_marginHeight_149; }
	inline float* get_address_of_m_marginHeight_149() { return &___m_marginHeight_149; }
	inline void set_m_marginHeight_149(float value)
	{
		___m_marginHeight_149 = value;
	}

	inline static int32_t get_offset_of_m_width_150() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_width_150)); }
	inline float get_m_width_150() const { return ___m_width_150; }
	inline float* get_address_of_m_width_150() { return &___m_width_150; }
	inline void set_m_width_150(float value)
	{
		___m_width_150 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_151() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textInfo_151)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_m_textInfo_151() const { return ___m_textInfo_151; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_m_textInfo_151() { return &___m_textInfo_151; }
	inline void set_m_textInfo_151(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___m_textInfo_151 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_151), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_152() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_havePropertiesChanged_152)); }
	inline bool get_m_havePropertiesChanged_152() const { return ___m_havePropertiesChanged_152; }
	inline bool* get_address_of_m_havePropertiesChanged_152() { return &___m_havePropertiesChanged_152; }
	inline void set_m_havePropertiesChanged_152(bool value)
	{
		___m_havePropertiesChanged_152 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_153() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingLegacyAnimationComponent_153)); }
	inline bool get_m_isUsingLegacyAnimationComponent_153() const { return ___m_isUsingLegacyAnimationComponent_153; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_153() { return &___m_isUsingLegacyAnimationComponent_153; }
	inline void set_m_isUsingLegacyAnimationComponent_153(bool value)
	{
		___m_isUsingLegacyAnimationComponent_153 = value;
	}

	inline static int32_t get_offset_of_m_transform_154() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_transform_154)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_transform_154() const { return ___m_transform_154; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_transform_154() { return &___m_transform_154; }
	inline void set_m_transform_154(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_transform_154 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_154), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_155() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_rectTransform_155)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_rectTransform_155() const { return ___m_rectTransform_155; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_rectTransform_155() { return &___m_rectTransform_155; }
	inline void set_m_rectTransform_155(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_rectTransform_155 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_155), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousRectTransformSize_156() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_PreviousRectTransformSize_156)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PreviousRectTransformSize_156() const { return ___m_PreviousRectTransformSize_156; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PreviousRectTransformSize_156() { return &___m_PreviousRectTransformSize_156; }
	inline void set_m_PreviousRectTransformSize_156(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PreviousRectTransformSize_156 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPivotPosition_157() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_PreviousPivotPosition_157)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PreviousPivotPosition_157() const { return ___m_PreviousPivotPosition_157; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PreviousPivotPosition_157() { return &___m_PreviousPivotPosition_157; }
	inline void set_m_PreviousPivotPosition_157(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PreviousPivotPosition_157 = value;
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_158() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___U3CautoSizeTextContainerU3Ek__BackingField_158)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_158() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_158; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_158() { return &___U3CautoSizeTextContainerU3Ek__BackingField_158; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_158(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_158 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_159() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_autoSizeTextContainer_159)); }
	inline bool get_m_autoSizeTextContainer_159() const { return ___m_autoSizeTextContainer_159; }
	inline bool* get_address_of_m_autoSizeTextContainer_159() { return &___m_autoSizeTextContainer_159; }
	inline void set_m_autoSizeTextContainer_159(bool value)
	{
		___m_autoSizeTextContainer_159 = value;
	}

	inline static int32_t get_offset_of_m_mesh_160() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_mesh_160)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_mesh_160() const { return ___m_mesh_160; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_mesh_160() { return &___m_mesh_160; }
	inline void set_m_mesh_160(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_mesh_160 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_160), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_161() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isVolumetricText_161)); }
	inline bool get_m_isVolumetricText_161() const { return ___m_isVolumetricText_161; }
	inline bool* get_address_of_m_isVolumetricText_161() { return &___m_isVolumetricText_161; }
	inline void set_m_isVolumetricText_161(bool value)
	{
		___m_isVolumetricText_161 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_164() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___OnPreRenderText_164)); }
	inline Action_1_tBD8EC4B76F43452C94F917208E05C2D58675DF45 * get_OnPreRenderText_164() const { return ___OnPreRenderText_164; }
	inline Action_1_tBD8EC4B76F43452C94F917208E05C2D58675DF45 ** get_address_of_OnPreRenderText_164() { return &___OnPreRenderText_164; }
	inline void set_OnPreRenderText_164(Action_1_tBD8EC4B76F43452C94F917208E05C2D58675DF45 * value)
	{
		___OnPreRenderText_164 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_164), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAnimator_165() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimator_165)); }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * get_m_spriteAnimator_165() const { return ___m_spriteAnimator_165; }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 ** get_address_of_m_spriteAnimator_165() { return &___m_spriteAnimator_165; }
	inline void set_m_spriteAnimator_165(TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * value)
	{
		___m_spriteAnimator_165 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_165), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_166() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleHeight_166)); }
	inline float get_m_flexibleHeight_166() const { return ___m_flexibleHeight_166; }
	inline float* get_address_of_m_flexibleHeight_166() { return &___m_flexibleHeight_166; }
	inline void set_m_flexibleHeight_166(float value)
	{
		___m_flexibleHeight_166 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_167() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleWidth_167)); }
	inline float get_m_flexibleWidth_167() const { return ___m_flexibleWidth_167; }
	inline float* get_address_of_m_flexibleWidth_167() { return &___m_flexibleWidth_167; }
	inline void set_m_flexibleWidth_167(float value)
	{
		___m_flexibleWidth_167 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_168() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minWidth_168)); }
	inline float get_m_minWidth_168() const { return ___m_minWidth_168; }
	inline float* get_address_of_m_minWidth_168() { return &___m_minWidth_168; }
	inline void set_m_minWidth_168(float value)
	{
		___m_minWidth_168 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_169() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minHeight_169)); }
	inline float get_m_minHeight_169() const { return ___m_minHeight_169; }
	inline float* get_address_of_m_minHeight_169() { return &___m_minHeight_169; }
	inline void set_m_minHeight_169(float value)
	{
		___m_minHeight_169 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_170() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxWidth_170)); }
	inline float get_m_maxWidth_170() const { return ___m_maxWidth_170; }
	inline float* get_address_of_m_maxWidth_170() { return &___m_maxWidth_170; }
	inline void set_m_maxWidth_170(float value)
	{
		___m_maxWidth_170 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_171() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxHeight_171)); }
	inline float get_m_maxHeight_171() const { return ___m_maxHeight_171; }
	inline float* get_address_of_m_maxHeight_171() { return &___m_maxHeight_171; }
	inline void set_m_maxHeight_171(float value)
	{
		___m_maxHeight_171 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_172() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_LayoutElement_172)); }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * get_m_LayoutElement_172() const { return ___m_LayoutElement_172; }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B ** get_address_of_m_LayoutElement_172() { return &___m_LayoutElement_172; }
	inline void set_m_LayoutElement_172(LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * value)
	{
		___m_LayoutElement_172 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_172), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_173() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredWidth_173)); }
	inline float get_m_preferredWidth_173() const { return ___m_preferredWidth_173; }
	inline float* get_address_of_m_preferredWidth_173() { return &___m_preferredWidth_173; }
	inline void set_m_preferredWidth_173(float value)
	{
		___m_preferredWidth_173 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_174() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedWidth_174)); }
	inline float get_m_renderedWidth_174() const { return ___m_renderedWidth_174; }
	inline float* get_address_of_m_renderedWidth_174() { return &___m_renderedWidth_174; }
	inline void set_m_renderedWidth_174(float value)
	{
		___m_renderedWidth_174 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_175() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredWidthDirty_175)); }
	inline bool get_m_isPreferredWidthDirty_175() const { return ___m_isPreferredWidthDirty_175; }
	inline bool* get_address_of_m_isPreferredWidthDirty_175() { return &___m_isPreferredWidthDirty_175; }
	inline void set_m_isPreferredWidthDirty_175(bool value)
	{
		___m_isPreferredWidthDirty_175 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_176() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredHeight_176)); }
	inline float get_m_preferredHeight_176() const { return ___m_preferredHeight_176; }
	inline float* get_address_of_m_preferredHeight_176() { return &___m_preferredHeight_176; }
	inline void set_m_preferredHeight_176(float value)
	{
		___m_preferredHeight_176 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_177() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedHeight_177)); }
	inline float get_m_renderedHeight_177() const { return ___m_renderedHeight_177; }
	inline float* get_address_of_m_renderedHeight_177() { return &___m_renderedHeight_177; }
	inline void set_m_renderedHeight_177(float value)
	{
		___m_renderedHeight_177 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_178() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredHeightDirty_178)); }
	inline bool get_m_isPreferredHeightDirty_178() const { return ___m_isPreferredHeightDirty_178; }
	inline bool* get_address_of_m_isPreferredHeightDirty_178() { return &___m_isPreferredHeightDirty_178; }
	inline void set_m_isPreferredHeightDirty_178(bool value)
	{
		___m_isPreferredHeightDirty_178 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_179() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCalculatingPreferredValues_179)); }
	inline bool get_m_isCalculatingPreferredValues_179() const { return ___m_isCalculatingPreferredValues_179; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_179() { return &___m_isCalculatingPreferredValues_179; }
	inline void set_m_isCalculatingPreferredValues_179(bool value)
	{
		___m_isCalculatingPreferredValues_179 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_180() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_layoutPriority_180)); }
	inline int32_t get_m_layoutPriority_180() const { return ___m_layoutPriority_180; }
	inline int32_t* get_address_of_m_layoutPriority_180() { return &___m_layoutPriority_180; }
	inline void set_m_layoutPriority_180(int32_t value)
	{
		___m_layoutPriority_180 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_181() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isLayoutDirty_181)); }
	inline bool get_m_isLayoutDirty_181() const { return ___m_isLayoutDirty_181; }
	inline bool* get_address_of_m_isLayoutDirty_181() { return &___m_isLayoutDirty_181; }
	inline void set_m_isLayoutDirty_181(bool value)
	{
		___m_isLayoutDirty_181 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_182() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isAwake_182)); }
	inline bool get_m_isAwake_182() const { return ___m_isAwake_182; }
	inline bool* get_address_of_m_isAwake_182() { return &___m_isAwake_182; }
	inline void set_m_isAwake_182(bool value)
	{
		___m_isAwake_182 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_183() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isWaitingOnResourceLoad_183)); }
	inline bool get_m_isWaitingOnResourceLoad_183() const { return ___m_isWaitingOnResourceLoad_183; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_183() { return &___m_isWaitingOnResourceLoad_183; }
	inline void set_m_isWaitingOnResourceLoad_183(bool value)
	{
		___m_isWaitingOnResourceLoad_183 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_184() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_inputSource_184)); }
	inline int32_t get_m_inputSource_184() const { return ___m_inputSource_184; }
	inline int32_t* get_address_of_m_inputSource_184() { return &___m_inputSource_184; }
	inline void set_m_inputSource_184(int32_t value)
	{
		___m_inputSource_184 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_185() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontScaleMultiplier_185)); }
	inline float get_m_fontScaleMultiplier_185() const { return ___m_fontScaleMultiplier_185; }
	inline float* get_address_of_m_fontScaleMultiplier_185() { return &___m_fontScaleMultiplier_185; }
	inline void set_m_fontScaleMultiplier_185(float value)
	{
		___m_fontScaleMultiplier_185 = value;
	}

	inline static int32_t get_offset_of_tag_LineIndent_189() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_LineIndent_189)); }
	inline float get_tag_LineIndent_189() const { return ___tag_LineIndent_189; }
	inline float* get_address_of_tag_LineIndent_189() { return &___tag_LineIndent_189; }
	inline void set_tag_LineIndent_189(float value)
	{
		___tag_LineIndent_189 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_190() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_Indent_190)); }
	inline float get_tag_Indent_190() const { return ___tag_Indent_190; }
	inline float* get_address_of_tag_Indent_190() { return &___tag_Indent_190; }
	inline void set_tag_Indent_190(float value)
	{
		___tag_Indent_190 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_191() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_indentStack_191)); }
	inline TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  get_m_indentStack_191() const { return ___m_indentStack_191; }
	inline TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A * get_address_of_m_indentStack_191() { return &___m_indentStack_191; }
	inline void set_m_indentStack_191(TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  value)
	{
		___m_indentStack_191 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_191))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_192() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_NoParsing_192)); }
	inline bool get_tag_NoParsing_192() const { return ___tag_NoParsing_192; }
	inline bool* get_address_of_tag_NoParsing_192() { return &___tag_NoParsing_192; }
	inline void set_tag_NoParsing_192(bool value)
	{
		___tag_NoParsing_192 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_193() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isParsingText_193)); }
	inline bool get_m_isParsingText_193() const { return ___m_isParsingText_193; }
	inline bool* get_address_of_m_isParsingText_193() { return &___m_isParsingText_193; }
	inline void set_m_isParsingText_193(bool value)
	{
		___m_isParsingText_193 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_194() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FXMatrix_194)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_FXMatrix_194() const { return ___m_FXMatrix_194; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_FXMatrix_194() { return &___m_FXMatrix_194; }
	inline void set_m_FXMatrix_194(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_FXMatrix_194 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_195() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isFXMatrixSet_195)); }
	inline bool get_m_isFXMatrixSet_195() const { return ___m_isFXMatrixSet_195; }
	inline bool* get_address_of_m_isFXMatrixSet_195() { return &___m_isFXMatrixSet_195; }
	inline void set_m_isFXMatrixSet_195(bool value)
	{
		___m_isFXMatrixSet_195 = value;
	}

	inline static int32_t get_offset_of_m_TextProcessingArray_196() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextProcessingArray_196)); }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* get_m_TextProcessingArray_196() const { return ___m_TextProcessingArray_196; }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505** get_address_of_m_TextProcessingArray_196() { return &___m_TextProcessingArray_196; }
	inline void set_m_TextProcessingArray_196(UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* value)
	{
		___m_TextProcessingArray_196 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextProcessingArray_196), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalTextProcessingArraySize_197() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_InternalTextProcessingArraySize_197)); }
	inline int32_t get_m_InternalTextProcessingArraySize_197() const { return ___m_InternalTextProcessingArraySize_197; }
	inline int32_t* get_address_of_m_InternalTextProcessingArraySize_197() { return &___m_InternalTextProcessingArraySize_197; }
	inline void set_m_InternalTextProcessingArraySize_197(int32_t value)
	{
		___m_InternalTextProcessingArraySize_197 = value;
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_198() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_internalCharacterInfo_198)); }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* get_m_internalCharacterInfo_198() const { return ___m_internalCharacterInfo_198; }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604** get_address_of_m_internalCharacterInfo_198() { return &___m_internalCharacterInfo_198; }
	inline void set_m_internalCharacterInfo_198(TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* value)
	{
		___m_internalCharacterInfo_198 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_198), (void*)value);
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_199() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_totalCharacterCount_199)); }
	inline int32_t get_m_totalCharacterCount_199() const { return ___m_totalCharacterCount_199; }
	inline int32_t* get_address_of_m_totalCharacterCount_199() { return &___m_totalCharacterCount_199; }
	inline void set_m_totalCharacterCount_199(int32_t value)
	{
		___m_totalCharacterCount_199 = value;
	}

	inline static int32_t get_offset_of_m_characterCount_206() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterCount_206)); }
	inline int32_t get_m_characterCount_206() const { return ___m_characterCount_206; }
	inline int32_t* get_address_of_m_characterCount_206() { return &___m_characterCount_206; }
	inline void set_m_characterCount_206(int32_t value)
	{
		___m_characterCount_206 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_207() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstCharacterOfLine_207)); }
	inline int32_t get_m_firstCharacterOfLine_207() const { return ___m_firstCharacterOfLine_207; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_207() { return &___m_firstCharacterOfLine_207; }
	inline void set_m_firstCharacterOfLine_207(int32_t value)
	{
		___m_firstCharacterOfLine_207 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_208() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacterOfLine_208)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_208() const { return ___m_firstVisibleCharacterOfLine_208; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_208() { return &___m_firstVisibleCharacterOfLine_208; }
	inline void set_m_firstVisibleCharacterOfLine_208(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_208 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_209() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastCharacterOfLine_209)); }
	inline int32_t get_m_lastCharacterOfLine_209() const { return ___m_lastCharacterOfLine_209; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_209() { return &___m_lastCharacterOfLine_209; }
	inline void set_m_lastCharacterOfLine_209(int32_t value)
	{
		___m_lastCharacterOfLine_209 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_210() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastVisibleCharacterOfLine_210)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_210() const { return ___m_lastVisibleCharacterOfLine_210; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_210() { return &___m_lastVisibleCharacterOfLine_210; }
	inline void set_m_lastVisibleCharacterOfLine_210(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_210 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_211() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineNumber_211)); }
	inline int32_t get_m_lineNumber_211() const { return ___m_lineNumber_211; }
	inline int32_t* get_address_of_m_lineNumber_211() { return &___m_lineNumber_211; }
	inline void set_m_lineNumber_211(int32_t value)
	{
		___m_lineNumber_211 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_212() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineVisibleCharacterCount_212)); }
	inline int32_t get_m_lineVisibleCharacterCount_212() const { return ___m_lineVisibleCharacterCount_212; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_212() { return &___m_lineVisibleCharacterCount_212; }
	inline void set_m_lineVisibleCharacterCount_212(int32_t value)
	{
		___m_lineVisibleCharacterCount_212 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_213() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageNumber_213)); }
	inline int32_t get_m_pageNumber_213() const { return ___m_pageNumber_213; }
	inline int32_t* get_address_of_m_pageNumber_213() { return &___m_pageNumber_213; }
	inline void set_m_pageNumber_213(int32_t value)
	{
		___m_pageNumber_213 = value;
	}

	inline static int32_t get_offset_of_m_PageAscender_214() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_PageAscender_214)); }
	inline float get_m_PageAscender_214() const { return ___m_PageAscender_214; }
	inline float* get_address_of_m_PageAscender_214() { return &___m_PageAscender_214; }
	inline void set_m_PageAscender_214(float value)
	{
		___m_PageAscender_214 = value;
	}

	inline static int32_t get_offset_of_m_maxTextAscender_215() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxTextAscender_215)); }
	inline float get_m_maxTextAscender_215() const { return ___m_maxTextAscender_215; }
	inline float* get_address_of_m_maxTextAscender_215() { return &___m_maxTextAscender_215; }
	inline void set_m_maxTextAscender_215(float value)
	{
		___m_maxTextAscender_215 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_216() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxCapHeight_216)); }
	inline float get_m_maxCapHeight_216() const { return ___m_maxCapHeight_216; }
	inline float* get_address_of_m_maxCapHeight_216() { return &___m_maxCapHeight_216; }
	inline void set_m_maxCapHeight_216(float value)
	{
		___m_maxCapHeight_216 = value;
	}

	inline static int32_t get_offset_of_m_ElementAscender_217() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ElementAscender_217)); }
	inline float get_m_ElementAscender_217() const { return ___m_ElementAscender_217; }
	inline float* get_address_of_m_ElementAscender_217() { return &___m_ElementAscender_217; }
	inline void set_m_ElementAscender_217(float value)
	{
		___m_ElementAscender_217 = value;
	}

	inline static int32_t get_offset_of_m_ElementDescender_218() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ElementDescender_218)); }
	inline float get_m_ElementDescender_218() const { return ___m_ElementDescender_218; }
	inline float* get_address_of_m_ElementDescender_218() { return &___m_ElementDescender_218; }
	inline void set_m_ElementDescender_218(float value)
	{
		___m_ElementDescender_218 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_219() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineAscender_219)); }
	inline float get_m_maxLineAscender_219() const { return ___m_maxLineAscender_219; }
	inline float* get_address_of_m_maxLineAscender_219() { return &___m_maxLineAscender_219; }
	inline void set_m_maxLineAscender_219(float value)
	{
		___m_maxLineAscender_219 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_220() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineDescender_220)); }
	inline float get_m_maxLineDescender_220() const { return ___m_maxLineDescender_220; }
	inline float* get_address_of_m_maxLineDescender_220() { return &___m_maxLineDescender_220; }
	inline void set_m_maxLineDescender_220(float value)
	{
		___m_maxLineDescender_220 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_221() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_startOfLineAscender_221)); }
	inline float get_m_startOfLineAscender_221() const { return ___m_startOfLineAscender_221; }
	inline float* get_address_of_m_startOfLineAscender_221() { return &___m_startOfLineAscender_221; }
	inline void set_m_startOfLineAscender_221(float value)
	{
		___m_startOfLineAscender_221 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineDescender_222() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_startOfLineDescender_222)); }
	inline float get_m_startOfLineDescender_222() const { return ___m_startOfLineDescender_222; }
	inline float* get_address_of_m_startOfLineDescender_222() { return &___m_startOfLineDescender_222; }
	inline void set_m_startOfLineDescender_222(float value)
	{
		___m_startOfLineDescender_222 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_223() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineOffset_223)); }
	inline float get_m_lineOffset_223() const { return ___m_lineOffset_223; }
	inline float* get_address_of_m_lineOffset_223() { return &___m_lineOffset_223; }
	inline void set_m_lineOffset_223(float value)
	{
		___m_lineOffset_223 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_224() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_meshExtents_224)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_m_meshExtents_224() const { return ___m_meshExtents_224; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_m_meshExtents_224() { return &___m_meshExtents_224; }
	inline void set_m_meshExtents_224(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___m_meshExtents_224 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_225() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_htmlColor_225)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_htmlColor_225() const { return ___m_htmlColor_225; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_htmlColor_225() { return &___m_htmlColor_225; }
	inline void set_m_htmlColor_225(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_htmlColor_225 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_226() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorStack_226)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_m_colorStack_226() const { return ___m_colorStack_226; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_m_colorStack_226() { return &___m_colorStack_226; }
	inline void set_m_colorStack_226(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___m_colorStack_226 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_226))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_227() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColorStack_227)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_m_underlineColorStack_227() const { return ___m_underlineColorStack_227; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_m_underlineColorStack_227() { return &___m_underlineColorStack_227; }
	inline void set_m_underlineColorStack_227(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___m_underlineColorStack_227 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_227))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_228() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColorStack_228)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_m_strikethroughColorStack_228() const { return ___m_strikethroughColorStack_228; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_m_strikethroughColorStack_228() { return &___m_strikethroughColorStack_228; }
	inline void set_m_strikethroughColorStack_228(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___m_strikethroughColorStack_228 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_228))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HighlightStateStack_229() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_HighlightStateStack_229)); }
	inline TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  get_m_HighlightStateStack_229() const { return ___m_HighlightStateStack_229; }
	inline TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2 * get_address_of_m_HighlightStateStack_229() { return &___m_HighlightStateStack_229; }
	inline void set_m_HighlightStateStack_229(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  value)
	{
		___m_HighlightStateStack_229 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HighlightStateStack_229))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_230() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientPreset_230)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_colorGradientPreset_230() const { return ___m_colorGradientPreset_230; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_colorGradientPreset_230() { return &___m_colorGradientPreset_230; }
	inline void set_m_colorGradientPreset_230(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_colorGradientPreset_230 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_230), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_231() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientStack_231)); }
	inline TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  get_m_colorGradientStack_231() const { return ___m_colorGradientStack_231; }
	inline TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C * get_address_of_m_colorGradientStack_231() { return &___m_colorGradientStack_231; }
	inline void set_m_colorGradientStack_231(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  value)
	{
		___m_colorGradientStack_231 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_231))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_231))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_colorGradientPresetIsTinted_232() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientPresetIsTinted_232)); }
	inline bool get_m_colorGradientPresetIsTinted_232() const { return ___m_colorGradientPresetIsTinted_232; }
	inline bool* get_address_of_m_colorGradientPresetIsTinted_232() { return &___m_colorGradientPresetIsTinted_232; }
	inline void set_m_colorGradientPresetIsTinted_232(bool value)
	{
		___m_colorGradientPresetIsTinted_232 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_233() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tabSpacing_233)); }
	inline float get_m_tabSpacing_233() const { return ___m_tabSpacing_233; }
	inline float* get_address_of_m_tabSpacing_233() { return &___m_tabSpacing_233; }
	inline void set_m_tabSpacing_233(float value)
	{
		___m_tabSpacing_233 = value;
	}

	inline static int32_t get_offset_of_m_spacing_234() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spacing_234)); }
	inline float get_m_spacing_234() const { return ___m_spacing_234; }
	inline float* get_address_of_m_spacing_234() { return &___m_spacing_234; }
	inline void set_m_spacing_234(float value)
	{
		___m_spacing_234 = value;
	}

	inline static int32_t get_offset_of_m_TextStyleStacks_235() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextStyleStacks_235)); }
	inline TMP_TextProcessingStack_1U5BU5D_tFBA4A77A904C2C565B037C9DAD4364D042A8E642* get_m_TextStyleStacks_235() const { return ___m_TextStyleStacks_235; }
	inline TMP_TextProcessingStack_1U5BU5D_tFBA4A77A904C2C565B037C9DAD4364D042A8E642** get_address_of_m_TextStyleStacks_235() { return &___m_TextStyleStacks_235; }
	inline void set_m_TextStyleStacks_235(TMP_TextProcessingStack_1U5BU5D_tFBA4A77A904C2C565B037C9DAD4364D042A8E642* value)
	{
		___m_TextStyleStacks_235 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyleStacks_235), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleStackDepth_236() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextStyleStackDepth_236)); }
	inline int32_t get_m_TextStyleStackDepth_236() const { return ___m_TextStyleStackDepth_236; }
	inline int32_t* get_address_of_m_TextStyleStackDepth_236() { return &___m_TextStyleStackDepth_236; }
	inline void set_m_TextStyleStackDepth_236(int32_t value)
	{
		___m_TextStyleStackDepth_236 = value;
	}

	inline static int32_t get_offset_of_m_ItalicAngleStack_237() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ItalicAngleStack_237)); }
	inline TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  get_m_ItalicAngleStack_237() const { return ___m_ItalicAngleStack_237; }
	inline TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4 * get_address_of_m_ItalicAngleStack_237() { return &___m_ItalicAngleStack_237; }
	inline void set_m_ItalicAngleStack_237(TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  value)
	{
		___m_ItalicAngleStack_237 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ItalicAngleStack_237))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ItalicAngle_238() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ItalicAngle_238)); }
	inline int32_t get_m_ItalicAngle_238() const { return ___m_ItalicAngle_238; }
	inline int32_t* get_address_of_m_ItalicAngle_238() { return &___m_ItalicAngle_238; }
	inline void set_m_ItalicAngle_238(int32_t value)
	{
		___m_ItalicAngle_238 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_239() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_actionStack_239)); }
	inline TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  get_m_actionStack_239() const { return ___m_actionStack_239; }
	inline TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4 * get_address_of_m_actionStack_239() { return &___m_actionStack_239; }
	inline void set_m_actionStack_239(TMP_TextProcessingStack_1_tF6DC85075F92C0C65A8E48556BAA7972079889D4  value)
	{
		___m_actionStack_239 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_239))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_240() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_padding_240)); }
	inline float get_m_padding_240() const { return ___m_padding_240; }
	inline float* get_address_of_m_padding_240() { return &___m_padding_240; }
	inline void set_m_padding_240(float value)
	{
		___m_padding_240 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_241() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffset_241)); }
	inline float get_m_baselineOffset_241() const { return ___m_baselineOffset_241; }
	inline float* get_address_of_m_baselineOffset_241() { return &___m_baselineOffset_241; }
	inline void set_m_baselineOffset_241(float value)
	{
		___m_baselineOffset_241 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_242() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffsetStack_242)); }
	inline TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  get_m_baselineOffsetStack_242() const { return ___m_baselineOffsetStack_242; }
	inline TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A * get_address_of_m_baselineOffsetStack_242() { return &___m_baselineOffsetStack_242; }
	inline void set_m_baselineOffsetStack_242(TMP_TextProcessingStack_1_t74F45474C95EB54EBBD64354BE71CDFC386B1D8A  value)
	{
		___m_baselineOffsetStack_242 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_242))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_243() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_xAdvance_243)); }
	inline float get_m_xAdvance_243() const { return ___m_xAdvance_243; }
	inline float* get_address_of_m_xAdvance_243() { return &___m_xAdvance_243; }
	inline void set_m_xAdvance_243(float value)
	{
		___m_xAdvance_243 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_244() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textElementType_244)); }
	inline int32_t get_m_textElementType_244() const { return ___m_textElementType_244; }
	inline int32_t* get_address_of_m_textElementType_244() { return &___m_textElementType_244; }
	inline void set_m_textElementType_244(int32_t value)
	{
		___m_textElementType_244 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_245() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_TextElement_245)); }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * get_m_cached_TextElement_245() const { return ___m_cached_TextElement_245; }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 ** get_address_of_m_cached_TextElement_245() { return &___m_cached_TextElement_245; }
	inline void set_m_cached_TextElement_245(TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * value)
	{
		___m_cached_TextElement_245 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_245), (void*)value);
	}

	inline static int32_t get_offset_of_m_Ellipsis_246() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_Ellipsis_246)); }
	inline SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  get_m_Ellipsis_246() const { return ___m_Ellipsis_246; }
	inline SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF * get_address_of_m_Ellipsis_246() { return &___m_Ellipsis_246; }
	inline void set_m_Ellipsis_246(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  value)
	{
		___m_Ellipsis_246 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_246))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_246))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_246))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Underline_247() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_Underline_247)); }
	inline SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  get_m_Underline_247() const { return ___m_Underline_247; }
	inline SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF * get_address_of_m_Underline_247() { return &___m_Underline_247; }
	inline void set_m_Underline_247(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  value)
	{
		___m_Underline_247 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_247))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_247))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_247))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_248() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_defaultSpriteAsset_248)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_defaultSpriteAsset_248() const { return ___m_defaultSpriteAsset_248; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_defaultSpriteAsset_248() { return &___m_defaultSpriteAsset_248; }
	inline void set_m_defaultSpriteAsset_248(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_defaultSpriteAsset_248 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_248), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_249() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentSpriteAsset_249)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_currentSpriteAsset_249() const { return ___m_currentSpriteAsset_249; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_currentSpriteAsset_249() { return &___m_currentSpriteAsset_249; }
	inline void set_m_currentSpriteAsset_249(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_currentSpriteAsset_249 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_249), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_250() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteCount_250)); }
	inline int32_t get_m_spriteCount_250() const { return ___m_spriteCount_250; }
	inline int32_t* get_address_of_m_spriteCount_250() { return &___m_spriteCount_250; }
	inline void set_m_spriteCount_250(int32_t value)
	{
		___m_spriteCount_250 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_251() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteIndex_251)); }
	inline int32_t get_m_spriteIndex_251() const { return ___m_spriteIndex_251; }
	inline int32_t* get_address_of_m_spriteIndex_251() { return &___m_spriteIndex_251; }
	inline void set_m_spriteIndex_251(int32_t value)
	{
		___m_spriteIndex_251 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_252() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimationID_252)); }
	inline int32_t get_m_spriteAnimationID_252() const { return ___m_spriteAnimationID_252; }
	inline int32_t* get_address_of_m_spriteAnimationID_252() { return &___m_spriteAnimationID_252; }
	inline void set_m_spriteAnimationID_252(int32_t value)
	{
		___m_spriteAnimationID_252 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_255() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreActiveState_255)); }
	inline bool get_m_ignoreActiveState_255() const { return ___m_ignoreActiveState_255; }
	inline bool* get_address_of_m_ignoreActiveState_255() { return &___m_ignoreActiveState_255; }
	inline void set_m_ignoreActiveState_255(bool value)
	{
		___m_ignoreActiveState_255 = value;
	}

	inline static int32_t get_offset_of_m_TextBackingArray_256() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextBackingArray_256)); }
	inline TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA  get_m_TextBackingArray_256() const { return ___m_TextBackingArray_256; }
	inline TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA * get_address_of_m_TextBackingArray_256() { return &___m_TextBackingArray_256; }
	inline void set_m_TextBackingArray_256(TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA  value)
	{
		___m_TextBackingArray_256 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TextBackingArray_256))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_k_Power_257() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___k_Power_257)); }
	inline DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* get_k_Power_257() const { return ___k_Power_257; }
	inline DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F** get_address_of_k_Power_257() { return &___k_Power_257; }
	inline void set_k_Power_257(DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* value)
	{
		___k_Power_257 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_257), (void*)value);
	}
};

struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields
{
public:
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___m_materialReferences_44;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8 * ___m_materialReferenceIndexLookup_45;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  ___m_materialReferenceStack_46;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___s_colorWhite_54;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_t3716FACB20DDAEDCF9983923B863439DEBC48B26 * ___OnFontAssetRequest_162;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t3471517F295554C58A5696039A423587414FB73E * ___OnSpriteAssetRequest_163;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_htmlTag_186;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* ___m_xmlAttribute_187;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_attributeParameterValues_188;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedWordWrapState_200;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedLineState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedEllipsisState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedLastValidState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedSoftLineBreakState_204;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E  ___m_EllipsisInsertionCandidateStack_205;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_ParseTextMarker_253;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_InsertNewLineMarker_254;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargePositiveVector2_258;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargeNegativeVector2_259;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_260;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_261;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_262;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_263;

public:
	inline static int32_t get_offset_of_m_materialReferences_44() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_materialReferences_44)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_m_materialReferences_44() const { return ___m_materialReferences_44; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_m_materialReferences_44() { return &___m_materialReferences_44; }
	inline void set_m_materialReferences_44(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___m_materialReferences_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_45() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_materialReferenceIndexLookup_45)); }
	inline Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8 * get_m_materialReferenceIndexLookup_45() const { return ___m_materialReferenceIndexLookup_45; }
	inline Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8 ** get_address_of_m_materialReferenceIndexLookup_45() { return &___m_materialReferenceIndexLookup_45; }
	inline void set_m_materialReferenceIndexLookup_45(Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8 * value)
	{
		___m_materialReferenceIndexLookup_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_46() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_materialReferenceStack_46)); }
	inline TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  get_m_materialReferenceStack_46() const { return ___m_materialReferenceStack_46; }
	inline TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A * get_address_of_m_materialReferenceStack_46() { return &___m_materialReferenceStack_46; }
	inline void set_m_materialReferenceStack_46(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  value)
	{
		___m_materialReferenceStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_46))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_colorWhite_54() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___s_colorWhite_54)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_s_colorWhite_54() const { return ___s_colorWhite_54; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_s_colorWhite_54() { return &___s_colorWhite_54; }
	inline void set_s_colorWhite_54(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___s_colorWhite_54 = value;
	}

	inline static int32_t get_offset_of_OnFontAssetRequest_162() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___OnFontAssetRequest_162)); }
	inline Func_3_t3716FACB20DDAEDCF9983923B863439DEBC48B26 * get_OnFontAssetRequest_162() const { return ___OnFontAssetRequest_162; }
	inline Func_3_t3716FACB20DDAEDCF9983923B863439DEBC48B26 ** get_address_of_OnFontAssetRequest_162() { return &___OnFontAssetRequest_162; }
	inline void set_OnFontAssetRequest_162(Func_3_t3716FACB20DDAEDCF9983923B863439DEBC48B26 * value)
	{
		___OnFontAssetRequest_162 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFontAssetRequest_162), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpriteAssetRequest_163() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___OnSpriteAssetRequest_163)); }
	inline Func_3_t3471517F295554C58A5696039A423587414FB73E * get_OnSpriteAssetRequest_163() const { return ___OnSpriteAssetRequest_163; }
	inline Func_3_t3471517F295554C58A5696039A423587414FB73E ** get_address_of_OnSpriteAssetRequest_163() { return &___OnSpriteAssetRequest_163; }
	inline void set_OnSpriteAssetRequest_163(Func_3_t3471517F295554C58A5696039A423587414FB73E * value)
	{
		___OnSpriteAssetRequest_163 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpriteAssetRequest_163), (void*)value);
	}

	inline static int32_t get_offset_of_m_htmlTag_186() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_htmlTag_186)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_htmlTag_186() const { return ___m_htmlTag_186; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_htmlTag_186() { return &___m_htmlTag_186; }
	inline void set_m_htmlTag_186(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_htmlTag_186 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_186), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_187() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_xmlAttribute_187)); }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* get_m_xmlAttribute_187() const { return ___m_xmlAttribute_187; }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652** get_address_of_m_xmlAttribute_187() { return &___m_xmlAttribute_187; }
	inline void set_m_xmlAttribute_187(RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* value)
	{
		___m_xmlAttribute_187 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_187), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_188() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_attributeParameterValues_188)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_attributeParameterValues_188() const { return ___m_attributeParameterValues_188; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_attributeParameterValues_188() { return &___m_attributeParameterValues_188; }
	inline void set_m_attributeParameterValues_188(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_attributeParameterValues_188 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_188), (void*)value);
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_200() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_SavedWordWrapState_200)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedWordWrapState_200() const { return ___m_SavedWordWrapState_200; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedWordWrapState_200() { return &___m_SavedWordWrapState_200; }
	inline void set_m_SavedWordWrapState_200(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedWordWrapState_200 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_200))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_200))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_200))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_200))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_200))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_200))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_200))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_200))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_201() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_SavedLineState_201)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedLineState_201() const { return ___m_SavedLineState_201; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedLineState_201() { return &___m_SavedLineState_201; }
	inline void set_m_SavedLineState_201(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedLineState_201 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_201))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_201))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_201))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_201))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedEllipsisState_202() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_SavedEllipsisState_202)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedEllipsisState_202() const { return ___m_SavedEllipsisState_202; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedEllipsisState_202() { return &___m_SavedEllipsisState_202; }
	inline void set_m_SavedEllipsisState_202(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedEllipsisState_202 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_202))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_202))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_202))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_202))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLastValidState_203() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_SavedLastValidState_203)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedLastValidState_203() const { return ___m_SavedLastValidState_203; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedLastValidState_203() { return &___m_SavedLastValidState_203; }
	inline void set_m_SavedLastValidState_203(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedLastValidState_203 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_203))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_203))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_203))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_203))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedSoftLineBreakState_204() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_SavedSoftLineBreakState_204)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedSoftLineBreakState_204() const { return ___m_SavedSoftLineBreakState_204; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedSoftLineBreakState_204() { return &___m_SavedSoftLineBreakState_204; }
	inline void set_m_SavedSoftLineBreakState_204(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedSoftLineBreakState_204 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_204))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_204))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_204))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_204))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_EllipsisInsertionCandidateStack_205() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_EllipsisInsertionCandidateStack_205)); }
	inline TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E  get_m_EllipsisInsertionCandidateStack_205() const { return ___m_EllipsisInsertionCandidateStack_205; }
	inline TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E * get_address_of_m_EllipsisInsertionCandidateStack_205() { return &___m_EllipsisInsertionCandidateStack_205; }
	inline void set_m_EllipsisInsertionCandidateStack_205(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E  value)
	{
		___m_EllipsisInsertionCandidateStack_205 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_EllipsisInsertionCandidateStack_205))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___textInfo_35), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_k_ParseTextMarker_253() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_ParseTextMarker_253)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_ParseTextMarker_253() const { return ___k_ParseTextMarker_253; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_ParseTextMarker_253() { return &___k_ParseTextMarker_253; }
	inline void set_k_ParseTextMarker_253(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_ParseTextMarker_253 = value;
	}

	inline static int32_t get_offset_of_k_InsertNewLineMarker_254() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_InsertNewLineMarker_254)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_InsertNewLineMarker_254() const { return ___k_InsertNewLineMarker_254; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_InsertNewLineMarker_254() { return &___k_InsertNewLineMarker_254; }
	inline void set_k_InsertNewLineMarker_254(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_InsertNewLineMarker_254 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_258() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveVector2_258)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargePositiveVector2_258() const { return ___k_LargePositiveVector2_258; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargePositiveVector2_258() { return &___k_LargePositiveVector2_258; }
	inline void set_k_LargePositiveVector2_258(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargePositiveVector2_258 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_259() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeVector2_259)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargeNegativeVector2_259() const { return ___k_LargeNegativeVector2_259; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargeNegativeVector2_259() { return &___k_LargeNegativeVector2_259; }
	inline void set_k_LargeNegativeVector2_259(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargeNegativeVector2_259 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_260() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveFloat_260)); }
	inline float get_k_LargePositiveFloat_260() const { return ___k_LargePositiveFloat_260; }
	inline float* get_address_of_k_LargePositiveFloat_260() { return &___k_LargePositiveFloat_260; }
	inline void set_k_LargePositiveFloat_260(float value)
	{
		___k_LargePositiveFloat_260 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_261() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeFloat_261)); }
	inline float get_k_LargeNegativeFloat_261() const { return ___k_LargeNegativeFloat_261; }
	inline float* get_address_of_k_LargeNegativeFloat_261() { return &___k_LargeNegativeFloat_261; }
	inline void set_k_LargeNegativeFloat_261(float value)
	{
		___k_LargeNegativeFloat_261 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_262() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveInt_262)); }
	inline int32_t get_k_LargePositiveInt_262() const { return ___k_LargePositiveInt_262; }
	inline int32_t* get_address_of_k_LargePositiveInt_262() { return &___k_LargePositiveInt_262; }
	inline void set_k_LargePositiveInt_262(int32_t value)
	{
		___k_LargePositiveInt_262 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_263() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeInt_263)); }
	inline int32_t get_k_LargeNegativeInt_263() const { return ___k_LargeNegativeInt_263; }
	inline int32_t* get_address_of_k_LargeNegativeInt_263() { return &___k_LargeNegativeInt_263; }
	inline void set_k_LargeNegativeInt_263(int32_t value)
	{
		___k_LargeNegativeInt_263 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_Sprite_36;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_OverrideSprite_37;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_38;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_39;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_40;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_41;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_42;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_43;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_44;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_45;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_46;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_47;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_48;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_49;

public:
	inline static int32_t get_offset_of_m_Sprite_36() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Sprite_36)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_Sprite_36() const { return ___m_Sprite_36; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_Sprite_36() { return &___m_Sprite_36; }
	inline void set_m_Sprite_36(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_Sprite_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_37() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_OverrideSprite_37)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_OverrideSprite_37() const { return ___m_OverrideSprite_37; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_OverrideSprite_37() { return &___m_OverrideSprite_37; }
	inline void set_m_OverrideSprite_37(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_OverrideSprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_38() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Type_38)); }
	inline int32_t get_m_Type_38() const { return ___m_Type_38; }
	inline int32_t* get_address_of_m_Type_38() { return &___m_Type_38; }
	inline void set_m_Type_38(int32_t value)
	{
		___m_Type_38 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_39() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PreserveAspect_39)); }
	inline bool get_m_PreserveAspect_39() const { return ___m_PreserveAspect_39; }
	inline bool* get_address_of_m_PreserveAspect_39() { return &___m_PreserveAspect_39; }
	inline void set_m_PreserveAspect_39(bool value)
	{
		___m_PreserveAspect_39 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_40() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillCenter_40)); }
	inline bool get_m_FillCenter_40() const { return ___m_FillCenter_40; }
	inline bool* get_address_of_m_FillCenter_40() { return &___m_FillCenter_40; }
	inline void set_m_FillCenter_40(bool value)
	{
		___m_FillCenter_40 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_41() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillMethod_41)); }
	inline int32_t get_m_FillMethod_41() const { return ___m_FillMethod_41; }
	inline int32_t* get_address_of_m_FillMethod_41() { return &___m_FillMethod_41; }
	inline void set_m_FillMethod_41(int32_t value)
	{
		___m_FillMethod_41 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_42() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillAmount_42)); }
	inline float get_m_FillAmount_42() const { return ___m_FillAmount_42; }
	inline float* get_address_of_m_FillAmount_42() { return &___m_FillAmount_42; }
	inline void set_m_FillAmount_42(float value)
	{
		___m_FillAmount_42 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_43() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillClockwise_43)); }
	inline bool get_m_FillClockwise_43() const { return ___m_FillClockwise_43; }
	inline bool* get_address_of_m_FillClockwise_43() { return &___m_FillClockwise_43; }
	inline void set_m_FillClockwise_43(bool value)
	{
		___m_FillClockwise_43 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_44() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillOrigin_44)); }
	inline int32_t get_m_FillOrigin_44() const { return ___m_FillOrigin_44; }
	inline int32_t* get_address_of_m_FillOrigin_44() { return &___m_FillOrigin_44; }
	inline void set_m_FillOrigin_44(int32_t value)
	{
		___m_FillOrigin_44 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_45() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_AlphaHitTestMinimumThreshold_45)); }
	inline float get_m_AlphaHitTestMinimumThreshold_45() const { return ___m_AlphaHitTestMinimumThreshold_45; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_45() { return &___m_AlphaHitTestMinimumThreshold_45; }
	inline void set_m_AlphaHitTestMinimumThreshold_45(float value)
	{
		___m_AlphaHitTestMinimumThreshold_45 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_46() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Tracked_46)); }
	inline bool get_m_Tracked_46() const { return ___m_Tracked_46; }
	inline bool* get_address_of_m_Tracked_46() { return &___m_Tracked_46; }
	inline void set_m_Tracked_46(bool value)
	{
		___m_Tracked_46 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_47() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_UseSpriteMesh_47)); }
	inline bool get_m_UseSpriteMesh_47() const { return ___m_UseSpriteMesh_47; }
	inline bool* get_address_of_m_UseSpriteMesh_47() { return &___m_UseSpriteMesh_47; }
	inline void set_m_UseSpriteMesh_47(bool value)
	{
		___m_UseSpriteMesh_47 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_48() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PixelsPerUnitMultiplier_48)); }
	inline float get_m_PixelsPerUnitMultiplier_48() const { return ___m_PixelsPerUnitMultiplier_48; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_48() { return &___m_PixelsPerUnitMultiplier_48; }
	inline void set_m_PixelsPerUnitMultiplier_48(float value)
	{
		___m_PixelsPerUnitMultiplier_48 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_49() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_CachedReferencePixelsPerUnit_49)); }
	inline float get_m_CachedReferencePixelsPerUnit_49() const { return ___m_CachedReferencePixelsPerUnit_49; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_49() { return &___m_CachedReferencePixelsPerUnit_49; }
	inline void set_m_CachedReferencePixelsPerUnit_49(float value)
	{
		___m_CachedReferencePixelsPerUnit_49 = value;
	}
};

struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_ETC1DefaultUI_35;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_VertScratch_50;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_UVScratch_51;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Xy_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Uv_53;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * ___m_TrackedTexturelessImages_54;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_55;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_35() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_ETC1DefaultUI_35)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_ETC1DefaultUI_35() const { return ___s_ETC1DefaultUI_35; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_ETC1DefaultUI_35() { return &___s_ETC1DefaultUI_35; }
	inline void set_s_ETC1DefaultUI_35(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_ETC1DefaultUI_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_50() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_VertScratch_50)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_VertScratch_50() const { return ___s_VertScratch_50; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_VertScratch_50() { return &___s_VertScratch_50; }
	inline void set_s_VertScratch_50(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_VertScratch_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_50), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_51() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_UVScratch_51)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_UVScratch_51() const { return ___s_UVScratch_51; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_UVScratch_51() { return &___s_UVScratch_51; }
	inline void set_s_UVScratch_51(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_UVScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_52() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Xy_52)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Xy_52() const { return ___s_Xy_52; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Xy_52() { return &___s_Xy_52; }
	inline void set_s_Xy_52(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Xy_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_53() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Uv_53)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Uv_53() const { return ___s_Uv_53; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Uv_53() { return &___s_Uv_53; }
	inline void set_s_Uv_53(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Uv_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_53), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_54() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___m_TrackedTexturelessImages_54)); }
	inline List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * get_m_TrackedTexturelessImages_54() const { return ___m_TrackedTexturelessImages_54; }
	inline List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA ** get_address_of_m_TrackedTexturelessImages_54() { return &___m_TrackedTexturelessImages_54; }
	inline void set_m_TrackedTexturelessImages_54(List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * value)
	{
		___m_TrackedTexturelessImages_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_54), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_55() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Initialized_55)); }
	inline bool get_s_Initialized_55() const { return ___s_Initialized_55; }
	inline bool* get_address_of_s_Initialized_55() { return &___s_Initialized_55; }
	inline void set_s_Initialized_55(bool value)
	{
		___s_Initialized_55 = value;
	}
};


// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438  : public TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7
{
public:
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_264;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* ___m_subTextObjects_265;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_266;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_RectTransformCorners_267;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_canvasRenderer_268;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_canvas_269;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_271;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_272;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_baseMaterial_273;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_274;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_maskOffset_275;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_EnvMapMatrix_276;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_298;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_DelayedGraphicRebuild_299;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_DelayedMaterialRebuild_300;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_ClipRect_301;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_302;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tBD8EC4B76F43452C94F917208E05C2D58675DF45 * ___OnPreRenderText_303;

public:
	inline static int32_t get_offset_of_m_hasFontAssetChanged_264() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_hasFontAssetChanged_264)); }
	inline bool get_m_hasFontAssetChanged_264() const { return ___m_hasFontAssetChanged_264; }
	inline bool* get_address_of_m_hasFontAssetChanged_264() { return &___m_hasFontAssetChanged_264; }
	inline void set_m_hasFontAssetChanged_264(bool value)
	{
		___m_hasFontAssetChanged_264 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_265() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_subTextObjects_265)); }
	inline TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* get_m_subTextObjects_265() const { return ___m_subTextObjects_265; }
	inline TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E** get_address_of_m_subTextObjects_265() { return &___m_subTextObjects_265; }
	inline void set_m_subTextObjects_265(TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* value)
	{
		___m_subTextObjects_265 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subTextObjects_265), (void*)value);
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_266() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_previousLossyScaleY_266)); }
	inline float get_m_previousLossyScaleY_266() const { return ___m_previousLossyScaleY_266; }
	inline float* get_address_of_m_previousLossyScaleY_266() { return &___m_previousLossyScaleY_266; }
	inline void set_m_previousLossyScaleY_266(float value)
	{
		___m_previousLossyScaleY_266 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_267() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_RectTransformCorners_267)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_RectTransformCorners_267() const { return ___m_RectTransformCorners_267; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_RectTransformCorners_267() { return &___m_RectTransformCorners_267; }
	inline void set_m_RectTransformCorners_267(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_RectTransformCorners_267 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransformCorners_267), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvasRenderer_268() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_canvasRenderer_268)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_canvasRenderer_268() const { return ___m_canvasRenderer_268; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_canvasRenderer_268() { return &___m_canvasRenderer_268; }
	inline void set_m_canvasRenderer_268(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_canvasRenderer_268 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvasRenderer_268), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvas_269() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_canvas_269)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_canvas_269() const { return ___m_canvas_269; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_canvas_269() { return &___m_canvas_269; }
	inline void set_m_canvas_269(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_canvas_269 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvas_269), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasScaleFactor_270() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_CanvasScaleFactor_270)); }
	inline float get_m_CanvasScaleFactor_270() const { return ___m_CanvasScaleFactor_270; }
	inline float* get_address_of_m_CanvasScaleFactor_270() { return &___m_CanvasScaleFactor_270; }
	inline void set_m_CanvasScaleFactor_270(float value)
	{
		___m_CanvasScaleFactor_270 = value;
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_271() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isFirstAllocation_271)); }
	inline bool get_m_isFirstAllocation_271() const { return ___m_isFirstAllocation_271; }
	inline bool* get_address_of_m_isFirstAllocation_271() { return &___m_isFirstAllocation_271; }
	inline void set_m_isFirstAllocation_271(bool value)
	{
		___m_isFirstAllocation_271 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_272() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_max_characters_272)); }
	inline int32_t get_m_max_characters_272() const { return ___m_max_characters_272; }
	inline int32_t* get_address_of_m_max_characters_272() { return &___m_max_characters_272; }
	inline void set_m_max_characters_272(int32_t value)
	{
		___m_max_characters_272 = value;
	}

	inline static int32_t get_offset_of_m_baseMaterial_273() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_baseMaterial_273)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_baseMaterial_273() const { return ___m_baseMaterial_273; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_baseMaterial_273() { return &___m_baseMaterial_273; }
	inline void set_m_baseMaterial_273(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_baseMaterial_273 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_baseMaterial_273), (void*)value);
	}

	inline static int32_t get_offset_of_m_isScrollRegionSet_274() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isScrollRegionSet_274)); }
	inline bool get_m_isScrollRegionSet_274() const { return ___m_isScrollRegionSet_274; }
	inline bool* get_address_of_m_isScrollRegionSet_274() { return &___m_isScrollRegionSet_274; }
	inline void set_m_isScrollRegionSet_274(bool value)
	{
		___m_isScrollRegionSet_274 = value;
	}

	inline static int32_t get_offset_of_m_maskOffset_275() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_maskOffset_275)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_maskOffset_275() const { return ___m_maskOffset_275; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_maskOffset_275() { return &___m_maskOffset_275; }
	inline void set_m_maskOffset_275(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_maskOffset_275 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_276() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_EnvMapMatrix_276)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_EnvMapMatrix_276() const { return ___m_EnvMapMatrix_276; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_EnvMapMatrix_276() { return &___m_EnvMapMatrix_276; }
	inline void set_m_EnvMapMatrix_276(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_EnvMapMatrix_276 = value;
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_277() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isRegisteredForEvents_277)); }
	inline bool get_m_isRegisteredForEvents_277() const { return ___m_isRegisteredForEvents_277; }
	inline bool* get_address_of_m_isRegisteredForEvents_277() { return &___m_isRegisteredForEvents_277; }
	inline void set_m_isRegisteredForEvents_277(bool value)
	{
		___m_isRegisteredForEvents_277 = value;
	}

	inline static int32_t get_offset_of_m_isRebuildingLayout_298() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isRebuildingLayout_298)); }
	inline bool get_m_isRebuildingLayout_298() const { return ___m_isRebuildingLayout_298; }
	inline bool* get_address_of_m_isRebuildingLayout_298() { return &___m_isRebuildingLayout_298; }
	inline void set_m_isRebuildingLayout_298(bool value)
	{
		___m_isRebuildingLayout_298 = value;
	}

	inline static int32_t get_offset_of_m_DelayedGraphicRebuild_299() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_DelayedGraphicRebuild_299)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_DelayedGraphicRebuild_299() const { return ___m_DelayedGraphicRebuild_299; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_DelayedGraphicRebuild_299() { return &___m_DelayedGraphicRebuild_299; }
	inline void set_m_DelayedGraphicRebuild_299(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_DelayedGraphicRebuild_299 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelayedGraphicRebuild_299), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelayedMaterialRebuild_300() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_DelayedMaterialRebuild_300)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_DelayedMaterialRebuild_300() const { return ___m_DelayedMaterialRebuild_300; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_DelayedMaterialRebuild_300() { return &___m_DelayedMaterialRebuild_300; }
	inline void set_m_DelayedMaterialRebuild_300(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_DelayedMaterialRebuild_300 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelayedMaterialRebuild_300), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClipRect_301() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_ClipRect_301)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_ClipRect_301() const { return ___m_ClipRect_301; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_ClipRect_301() { return &___m_ClipRect_301; }
	inline void set_m_ClipRect_301(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_ClipRect_301 = value;
	}

	inline static int32_t get_offset_of_m_ValidRect_302() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_ValidRect_302)); }
	inline bool get_m_ValidRect_302() const { return ___m_ValidRect_302; }
	inline bool* get_address_of_m_ValidRect_302() { return &___m_ValidRect_302; }
	inline void set_m_ValidRect_302(bool value)
	{
		___m_ValidRect_302 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_303() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___OnPreRenderText_303)); }
	inline Action_1_tBD8EC4B76F43452C94F917208E05C2D58675DF45 * get_OnPreRenderText_303() const { return ___OnPreRenderText_303; }
	inline Action_1_tBD8EC4B76F43452C94F917208E05C2D58675DF45 ** get_address_of_OnPreRenderText_303() { return &___OnPreRenderText_303; }
	inline void set_OnPreRenderText_303(Action_1_tBD8EC4B76F43452C94F917208E05C2D58675DF45 * value)
	{
		___OnPreRenderText_303 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_303), (void*)value);
	}
};

struct TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_GenerateTextMarker_278;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_SetArraySizesMarker_279;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_GenerateTextPhaseIMarker_280;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_ParseMarkupTextMarker_281;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_CharacterLookupMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_HandleGPOSFeaturesMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_CalculateVerticesPositionMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_ComputeTextMetricsMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_HandleVisibleCharacterMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_HandleWhiteSpacesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_HandleHorizontalLineBreakingMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_HandleVerticalLineBreakingMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_SaveGlyphVertexDataMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_ComputeCharacterAdvanceMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_HandleCarriageReturnMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_HandleLineTerminationMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_SavePageInfoMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_SaveProcessingStatesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_GenerateTextPhaseIIMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_GenerateTextPhaseIIIMarker_297;

public:
	inline static int32_t get_offset_of_k_GenerateTextMarker_278() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields, ___k_GenerateTextMarker_278)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_GenerateTextMarker_278() const { return ___k_GenerateTextMarker_278; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_GenerateTextMarker_278() { return &___k_GenerateTextMarker_278; }
	inline void set_k_GenerateTextMarker_278(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_GenerateTextMarker_278 = value;
	}

	inline static int32_t get_offset_of_k_SetArraySizesMarker_279() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields, ___k_SetArraySizesMarker_279)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_SetArraySizesMarker_279() const { return ___k_SetArraySizesMarker_279; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_SetArraySizesMarker_279() { return &___k_SetArraySizesMarker_279; }
	inline void set_k_SetArraySizesMarker_279(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_SetArraySizesMarker_279 = value;
	}

	inline static int32_t get_offset_of_k_GenerateTextPhaseIMarker_280() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields, ___k_GenerateTextPhaseIMarker_280)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_GenerateTextPhaseIMarker_280() const { return ___k_GenerateTextPhaseIMarker_280; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_GenerateTextPhaseIMarker_280() { return &___k_GenerateTextPhaseIMarker_280; }
	inline void set_k_GenerateTextPhaseIMarker_280(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_GenerateTextPhaseIMarker_280 = value;
	}

	inline static int32_t get_offset_of_k_ParseMarkupTextMarker_281() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields, ___k_ParseMarkupTextMarker_281)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_ParseMarkupTextMarker_281() const { return ___k_ParseMarkupTextMarker_281; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_ParseMarkupTextMarker_281() { return &___k_ParseMarkupTextMarker_281; }
	inline void set_k_ParseMarkupTextMarker_281(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_ParseMarkupTextMarker_281 = value;
	}

	inline static int32_t get_offset_of_k_CharacterLookupMarker_282() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields, ___k_CharacterLookupMarker_282)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_CharacterLookupMarker_282() const { return ___k_CharacterLookupMarker_282; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_CharacterLookupMarker_282() { return &___k_CharacterLookupMarker_282; }
	inline void set_k_CharacterLookupMarker_282(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_CharacterLookupMarker_282 = value;
	}

	inline static int32_t get_offset_of_k_HandleGPOSFeaturesMarker_283() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields, ___k_HandleGPOSFeaturesMarker_283)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_HandleGPOSFeaturesMarker_283() const { return ___k_HandleGPOSFeaturesMarker_283; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_HandleGPOSFeaturesMarker_283() { return &___k_HandleGPOSFeaturesMarker_283; }
	inline void set_k_HandleGPOSFeaturesMarker_283(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_HandleGPOSFeaturesMarker_283 = value;
	}

	inline static int32_t get_offset_of_k_CalculateVerticesPositionMarker_284() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields, ___k_CalculateVerticesPositionMarker_284)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_CalculateVerticesPositionMarker_284() const { return ___k_CalculateVerticesPositionMarker_284; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_CalculateVerticesPositionMarker_284() { return &___k_CalculateVerticesPositionMarker_284; }
	inline void set_k_CalculateVerticesPositionMarker_284(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_CalculateVerticesPositionMarker_284 = value;
	}

	inline static int32_t get_offset_of_k_ComputeTextMetricsMarker_285() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields, ___k_ComputeTextMetricsMarker_285)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_ComputeTextMetricsMarker_285() const { return ___k_ComputeTextMetricsMarker_285; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_ComputeTextMetricsMarker_285() { return &___k_ComputeTextMetricsMarker_285; }
	inline void set_k_ComputeTextMetricsMarker_285(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_ComputeTextMetricsMarker_285 = value;
	}

	inline static int32_t get_offset_of_k_HandleVisibleCharacterMarker_286() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields, ___k_HandleVisibleCharacterMarker_286)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_HandleVisibleCharacterMarker_286() const { return ___k_HandleVisibleCharacterMarker_286; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_HandleVisibleCharacterMarker_286() { return &___k_HandleVisibleCharacterMarker_286; }
	inline void set_k_HandleVisibleCharacterMarker_286(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_HandleVisibleCharacterMarker_286 = value;
	}

	inline static int32_t get_offset_of_k_HandleWhiteSpacesMarker_287() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields, ___k_HandleWhiteSpacesMarker_287)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_HandleWhiteSpacesMarker_287() const { return ___k_HandleWhiteSpacesMarker_287; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_HandleWhiteSpacesMarker_287() { return &___k_HandleWhiteSpacesMarker_287; }
	inline void set_k_HandleWhiteSpacesMarker_287(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_HandleWhiteSpacesMarker_287 = value;
	}

	inline static int32_t get_offset_of_k_HandleHorizontalLineBreakingMarker_288() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields, ___k_HandleHorizontalLineBreakingMarker_288)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_HandleHorizontalLineBreakingMarker_288() const { return ___k_HandleHorizontalLineBreakingMarker_288; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_HandleHorizontalLineBreakingMarker_288() { return &___k_HandleHorizontalLineBreakingMarker_288; }
	inline void set_k_HandleHorizontalLineBreakingMarker_288(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_HandleHorizontalLineBreakingMarker_288 = value;
	}

	inline static int32_t get_offset_of_k_HandleVerticalLineBreakingMarker_289() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields, ___k_HandleVerticalLineBreakingMarker_289)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_HandleVerticalLineBreakingMarker_289() const { return ___k_HandleVerticalLineBreakingMarker_289; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_HandleVerticalLineBreakingMarker_289() { return &___k_HandleVerticalLineBreakingMarker_289; }
	inline void set_k_HandleVerticalLineBreakingMarker_289(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_HandleVerticalLineBreakingMarker_289 = value;
	}

	inline static int32_t get_offset_of_k_SaveGlyphVertexDataMarker_290() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields, ___k_SaveGlyphVertexDataMarker_290)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_SaveGlyphVertexDataMarker_290() const { return ___k_SaveGlyphVertexDataMarker_290; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_SaveGlyphVertexDataMarker_290() { return &___k_SaveGlyphVertexDataMarker_290; }
	inline void set_k_SaveGlyphVertexDataMarker_290(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_SaveGlyphVertexDataMarker_290 = value;
	}

	inline static int32_t get_offset_of_k_ComputeCharacterAdvanceMarker_291() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields, ___k_ComputeCharacterAdvanceMarker_291)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_ComputeCharacterAdvanceMarker_291() const { return ___k_ComputeCharacterAdvanceMarker_291; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_ComputeCharacterAdvanceMarker_291() { return &___k_ComputeCharacterAdvanceMarker_291; }
	inline void set_k_ComputeCharacterAdvanceMarker_291(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_ComputeCharacterAdvanceMarker_291 = value;
	}

	inline static int32_t get_offset_of_k_HandleCarriageReturnMarker_292() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields, ___k_HandleCarriageReturnMarker_292)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_HandleCarriageReturnMarker_292() const { return ___k_HandleCarriageReturnMarker_292; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_HandleCarriageReturnMarker_292() { return &___k_HandleCarriageReturnMarker_292; }
	inline void set_k_HandleCarriageReturnMarker_292(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_HandleCarriageReturnMarker_292 = value;
	}

	inline static int32_t get_offset_of_k_HandleLineTerminationMarker_293() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields, ___k_HandleLineTerminationMarker_293)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_HandleLineTerminationMarker_293() const { return ___k_HandleLineTerminationMarker_293; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_HandleLineTerminationMarker_293() { return &___k_HandleLineTerminationMarker_293; }
	inline void set_k_HandleLineTerminationMarker_293(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_HandleLineTerminationMarker_293 = value;
	}

	inline static int32_t get_offset_of_k_SavePageInfoMarker_294() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields, ___k_SavePageInfoMarker_294)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_SavePageInfoMarker_294() const { return ___k_SavePageInfoMarker_294; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_SavePageInfoMarker_294() { return &___k_SavePageInfoMarker_294; }
	inline void set_k_SavePageInfoMarker_294(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_SavePageInfoMarker_294 = value;
	}

	inline static int32_t get_offset_of_k_SaveProcessingStatesMarker_295() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields, ___k_SaveProcessingStatesMarker_295)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_SaveProcessingStatesMarker_295() const { return ___k_SaveProcessingStatesMarker_295; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_SaveProcessingStatesMarker_295() { return &___k_SaveProcessingStatesMarker_295; }
	inline void set_k_SaveProcessingStatesMarker_295(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_SaveProcessingStatesMarker_295 = value;
	}

	inline static int32_t get_offset_of_k_GenerateTextPhaseIIMarker_296() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields, ___k_GenerateTextPhaseIIMarker_296)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_GenerateTextPhaseIIMarker_296() const { return ___k_GenerateTextPhaseIIMarker_296; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_GenerateTextPhaseIIMarker_296() { return &___k_GenerateTextPhaseIIMarker_296; }
	inline void set_k_GenerateTextPhaseIIMarker_296(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_GenerateTextPhaseIIMarker_296 = value;
	}

	inline static int32_t get_offset_of_k_GenerateTextPhaseIIIMarker_297() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438_StaticFields, ___k_GenerateTextPhaseIIIMarker_297)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_GenerateTextPhaseIIIMarker_297() const { return ___k_GenerateTextPhaseIIIMarker_297; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_GenerateTextPhaseIIIMarker_297() { return &___k_GenerateTextPhaseIIIMarker_297; }
	inline void set_k_GenerateTextPhaseIIIMarker_297(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_GenerateTextPhaseIIIMarker_297 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * m_Items[1];

public:
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * m_Items[1];

public:
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * m_Items[1];

public:
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mDDC28234680BE7088AC6F12DC1C7617E26360C85_gshared (RuntimeObject * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent3, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_mE3957366B74863C807E6E8A23D239A0CB079BB9C_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared (RuntimeObject * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider2D>()
inline CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612 * Component_GetComponent_TisCapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612_m51F2595169CB099FA35B5DBFD9F9E056DF0324E9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<audiomanage>()
inline audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * GameObject_GetComponent_Tisaudiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C_m07410B9FF809C92B8554B9C0A328C0EC4CC6930F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mE316E10B9B319A5C2A29F86E028740FD528149E7 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void Enemy::ChangeDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_ChangeDirection_m1971C4F983F2A52D127F9B90FF20EB588D1E49DC (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m6895A7A231540279E01A537649EB42814FD2671B (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mDDC28234680BE7088AC6F12DC1C7617E26360C85_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mD25CEAAA219FA1235F8E88F914D2F8AC57303538 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_m0729526C86891ADD11611CD13A7A18B851355580 (SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// System.Void audiomanage::PlaySFX(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void audiomanage_PlaySFX_m1C970184FFE7A7D5BD271F11EE17CBF0C65E6911 (audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * GameObject_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mDDB82F02C3053DCC0D60C420752A11EC11CBACC0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_isKinematic_mA7711684E1E1E25FA7C1A1FF297B6E45DFD03BEE (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Bullet>()
inline Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * GameObject_GetComponent_TisBullet_t1B228DBA3982FDB21DE04329BDC49915421B9059_mC44AB386177196D8110F3E6D8F0E814D44438271 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_mB07492BC42EC582754AD11554BE5B7F8D0E93CF4 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F (Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_mF66519C9DAE4CC8873C36A04C3CAF7DDEC3C7EFE (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.CapsuleCollider2D>()
inline CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612 * GameObject_GetComponent_TisCapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612_m27D05C4F2D900E576EAD91DF736CF51F44A8B847 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void EnemyHealth::UpdateEnemyHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_UpdateEnemyHealth_m0FA4ACA2DA6E03FF9B1C8D72C9498C2D31F91656 (EnemyHealth_t91A76AF6E61D8332F27A81B9566060F33FCA4490 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * GameObject_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m9904EA7E80165F7771F8AB3967F417D7C2B09996 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Enemy>()
inline Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * GameObject_GetComponent_TisEnemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6_m8BB5FCD3A37037A3C39DD740890AB53C64092BB4 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void Score::AddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_AddScore_mDFF2FB349F9539FB9F2772AFAC327700A70D43CC (Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * __this, int32_t ___points0, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m09F51D8BDECFD2E8C618498EF7377029B669030D (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, float ___t1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611 (SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * __this, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<playermovement>()
inline playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * Object_FindObjectOfType_Tisplayermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829_mFC72C2A4AD0CF07310D2418E7A58AC9D9A87E987 (const RuntimeMethod* method)
{
	return ((  playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_mE3957366B74863C807E6E8A23D239A0CB079BB9C_gshared)(method);
}
// System.Boolean playermovement::IsGameEnded()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool playermovement_IsGameEnded_m0CB9DBBD7874076A9D48D7E042E2EB93FCF27BEC_inline (playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * __this, const RuntimeMethod* method);
// WeaponType Playerweapons::GetCurrentWeapon()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Playerweapons_GetCurrentWeapon_mEAAEE69175A295F19C507CDF6ADF215D1A85683D_inline (Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * __this, const RuntimeMethod* method);
// System.Void Playerattack::ShootWithsorcerySword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playerattack_ShootWithsorcerySword_mF180AFD3AF8CCC90B1F462F26612E43B01D15CF1 (Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_left_m74B52D8CFD8C62138067B2EB6846B6E9E51B7C20 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mD074608D7FEC96A53C57A456BA613EE01C31D4B7 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Bullet>()
inline Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * Component_GetComponent_TisBullet_t1B228DBA3982FDB21DE04329BDC49915421B9059_mAED244333A256E7C1EE2291E7DF2D96A67CC0256 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Void Playerattack::DeflectBullet(Bullet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playerattack_DeflectBullet_mFA9ACFDE869B8314D5AEC74648E27F9D66414457 (Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * __this, Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * ___bullet0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_UnaryNegation_m3FA0AE2F9B031765EFA566B25F5453C3B001FF4D (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901 (String_t* ___layerName0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<timer>()
inline timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * Object_FindObjectOfType_Tistimer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF_mF0133F41F229C4867B0A5034DE2DEDD86D2EC208 (const RuntimeMethod* method)
{
	return ((  timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_mE3957366B74863C807E6E8A23D239A0CB079BB9C_gshared)(method);
}
// !!0 UnityEngine.Component::GetComponent<playermovement>()
inline playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * Component_GetComponent_Tisplayermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829_m5C8A19BDB5FB6D8F13E29A27B63B5A7AAFC4F93F (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<Playerhealth>()
inline Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D * Object_FindObjectOfType_TisPlayerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D_m7248AC8188BE8A91708094FADDDF6EDD55A2464D (const RuntimeMethod* method)
{
	return ((  Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_mE3957366B74863C807E6E8A23D239A0CB079BB9C_gshared)(method);
}
// System.Void Playerhealth::UpdateHeartsUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playerhealth_UpdateHeartsUI_mF408B6260B30ABD4AC891DCAF3783A1D73006762 (Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<playermovement>()
inline playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * GameObject_GetComponent_Tisplayermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829_mF35FD95F01588A91BF13DBA5D119A3B1405C6931 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m488F7AA7F7067DE3EC92CEE3413E86C2E5940200 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Int32 Score::get_ScoreNumber()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Score_get_ScoreNumber_m71F008399D5FB50B3D6C39DF34E42DCD9146ACBB_inline (Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m1CBBA4989F15BA668EE24950D3C6B56E2ED20BD6 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Playerattack>()
inline Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * GameObject_GetComponent_TisPlayerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A_mEEA96AA4CD8350D27556234CD4946C9EFFA54F40 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void Playerattack::SetPlayerDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playerattack_SetPlayerDead_m80225A41AD4BF420C053A622556C096A40AB59EB (Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Playercollision::DamageAndRespawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Playercollision_DamageAndRespawn_m7E00604E7AAEE3250DBC9147E6EB3147A177E3BB (Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Playercollision/<DamageAndRespawn>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDamageAndRespawnU3Ed__7__ctor_m59BF92ECD7C1242F09E88E1F6DE8D94BF033489E (U3CDamageAndRespawnU3Ed__7_tFE5FE3A25F64F8CF61F9697B98F2ED3DACD43E0D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Physics2D::IgnoreLayerCollision(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics2D_IgnoreLayerCollision_m9DACD8881E14C00A9F02244C01BBEDA62AFCF985 (int32_t ___layer10, int32_t ___layer21, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void timer::ResetTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void timer_ResetTimer_m6EB5E593C5DE43CB2E87A613B6BDBC465B26DD3B (timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Physics2D::IgnoreLayerCollision(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics2D_IgnoreLayerCollision_m6F9410A4C90DFF37FF10FBD5E2A8D623F1020820 (int32_t ___layer10, int32_t ___layer21, bool ___ignore2, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Playerattack>()
inline Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * Component_GetComponent_TisPlayerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A_m81D6561DCA00F3E4A0B91496D90E5C2BB6BC15D4 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Void Playerweapons::UpdateWeaponVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playerweapons_UpdateWeaponVisibility_m778A1D154C5B17E5ED53B757445E5848BB71863D (Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * __this, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Score::PlayCollectSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_PlayCollectSound_m3699BDFD7E77CADB8668AE43359AB89F98DCE8A5 (Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * __this, const RuntimeMethod* method);
// System.Void Score::set_ScoreNumber(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Score_set_ScoreNumber_m4ABC6271CC121A581E84E5201A8E3890375D2C23_inline (Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorStateInfo::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_length_mBEC06803962C9F4E60611516424CD43D7155A56D (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour__ctor_m60289315ADCB494227D881EEFA6C4458BACA79DB (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m4DEE785C31213E964D7014B633F0FFC7E98B79F4 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, const RuntimeMethod* method);
// System.Void laddermovement::set_playerClimbing(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void laddermovement_set_playerClimbing_m2363A0972D6CA46D42D8502754EA4B3CBE94150A_inline (laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Boolean laddermovement::get_playerClimbing()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool laddermovement_get_playerClimbing_m09EBC9C7D0150AEE39E1ADA0BA621B268C2C3877_inline (laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_gravityScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_gravityScale_m4593B8D87314F00947B795AA442B90F1598B1104 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_MoveTowards_m5CE85293E9619514164A685D1D4673E2A6E43DFA (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___current0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Collision2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Collision2D_get_transform_m7008F633C99CE8A2694F88230713913244F5D262 (Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<audiomanage>()
inline audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * Object_FindObjectOfType_Tisaudiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C_m6B11E9D7150D09C76EAB555F0F095868B5B011D8 (const RuntimeMethod* method)
{
	return ((  audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_mE3957366B74863C807E6E8A23D239A0CB079BB9C_gshared)(method);
}
// System.Void audiomanage::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void audiomanage_StartGame_m6118077CD1387FA0B02E3E5BF355479B05034296 (audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  SceneManager_GetActiveScene_mD583193D329EBF540D8AB8A062681B1C2AB5EA51 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m764659943B7357F5D6C9165F68EDCFBBDDD6C3C2 (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Playerweapons>()
inline Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * GameObject_GetComponent_TisPlayerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED_m2168DECB7048B3A3E06E3BD27EA62EBB74779633 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void playermovement::StartLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playermovement_StartLevel_m9CE8F096A1C4288750FB2DC7707DA651EF8B5BA0 (playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * __this, int32_t ___levelIndex0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC68301A9D93702F0C393E45C6337348062EACE21 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m1E80BAC5CCBE9E0151491B8F8F5FFD6AB050BBF0 (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Boolean playermovement::IsOnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool playermovement_IsOnGround_mDC56B6676D61908A1036EE3DF9477B8F3E72D931 (playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m7AA360E8D19CAA86BF5623089968D2D63CFF74BB (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Void playermovement::FlipPlayerDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playermovement_FlipPlayerDirection_m268C76E5DEBB494753026F20758FB65081CAF1D6 (playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * __this, const RuntimeMethod* method);
// System.Void Holder::NextLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Holder_NextLevel_mC3ECE13BD452E017C751CACDE1A25B6200DCE26A (Holder_tBC04476AC1BB69D8FAF7EF93B49402612407F571 * __this, int32_t ___level0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5 (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___mask0, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * Physics2D_OverlapCircle_m627FB9EE641A74B942877F57DD2FED656FDA5DC9 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method);
// System.Void Playerweapons::SetWeapon(WeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playerweapons_SetWeapon_mB7F0C930A8078AA1B85376C1A98F359BC4B2A803 (Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * __this, int32_t ___weaponType0, const RuntimeMethod* method);
// System.Void Score::UpdateEndGameScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_UpdateEndGameScores_m1B675FAE0931AC435A86FE1887E92DA4A1BF9CC8 (Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void timer::UpdateTimerDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void timer_UpdateTimerDisplay_m22FBD1123F734EEE851E7ACACA637D9A8CFA6EA0 (timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C (float ___f0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
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
// System.Void Bullet::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_OnCollisionEnter2D_m1B740B8F3B8F31AF86A1A1D403A187698A3849FA (Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * __this, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * ___collider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bullet_OnCollisionEnter2D_m1B740B8F3B8F31AF86A1A1D403A187698A3849FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Animator>().SetBool("hit", true);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_0 = Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719(__this, /*hidden argument*/Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719_RuntimeMethod_var);
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_0, _stringLiteralD7D390BD9EBAC6BFA0B17AB10695FE73916EBCC2, (bool)1, /*hidden argument*/NULL);
		// Destroy(GetComponent<CapsuleCollider2D>());
		CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612 * L_1 = Component_GetComponent_TisCapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612_m51F2595169CB099FA35B5DBFD9F9E056DF0324E9(__this, /*hidden argument*/Component_GetComponent_TisCapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612_m51F2595169CB099FA35B5DBFD9F9E056DF0324E9_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Bullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet__ctor_mFBA1E7297C133AE06ADA2EF2BA04567AD213A9D4 (Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void CameraMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_FixedUpdate_m5CB22EAB6F0595C618B1C9354360E740C1E150CA (CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// float yPos = player.position.y > 0 ? player.position.y : 0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_player_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		if ((((float)L_2) > ((float)(0.0f))))
		{
			goto IL_001e;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_002e;
	}

IL_001e:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = __this->get_player_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		G_B3_0 = L_5;
	}

IL_002e:
	{
		V_0 = G_B3_0;
		// transform.position = new Vector3(player.position.x, yPos, 0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = __this->get_player_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		float L_10 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_11), L_9, L_10, (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_6, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement__ctor_m45453F6979B712D3D03BC25516BC35BEB97E048B (CameraMovement_t20ED5C3DA8B48B3D044213B5BFB0A101154F96E4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m0681B66D4522F045EB7A33A21467994960D1E435 (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Start_m0681B66D4522F045EB7A33A21467994960D1E435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.Find("Player");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		__this->set_player_4(L_0);
		// enemyRb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_1 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		__this->set_enemyRb_7(L_1);
		// animator = GetComponent<Animator>();
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_2 = Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719(__this, /*hidden argument*/Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719_RuntimeMethod_var);
		__this->set_animator_8(L_2);
		// audiomanage = GameObject.FindGameObjectWithTag("Audio").GetComponent<audiomanage>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D(_stringLiteralACDAC205F5E24CB75113C4B281A2C13F08B75159, /*hidden argument*/NULL);
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_4 = GameObject_GetComponent_Tisaudiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C_m07410B9FF809C92B8554B9C0A328C0EC4CC6930F(L_3, /*hidden argument*/GameObject_GetComponent_Tisaudiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C_m07410B9FF809C92B8554B9C0A328C0EC4CC6930F_RuntimeMethod_var);
		__this->set_audiomanage_20(L_4);
		// if(pointB)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_pointB_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		// pointNow = pointB.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_pointB_6();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_7, /*hidden argument*/NULL);
		__this->set_pointNow_9(L_8);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_mE957FE3BFB8CBB7C30E43D4A81C13E02B1C1FC32 (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Update_mE957FE3BFB8CBB7C30E43D4A81C13E02B1C1FC32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B5_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B4_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B6_1 = NULL;
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * G_B26_0 = NULL;
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * G_B25_0 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  G_B27_0;
	memset((&G_B27_0), 0, sizeof(G_B27_0));
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * G_B27_1 = NULL;
	Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * G_B30_0 = NULL;
	Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * G_B29_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B31_0 = NULL;
	Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * G_B31_1 = NULL;
	{
		// if (playermanage.isGameOver)
		bool L_0 = ((playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED_StaticFields*)il2cpp_codegen_static_fields_for(playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED_il2cpp_TypeInfo_var))->get_isGameOver_4();
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if(Vector3.Distance(player.transform.position, transform.position) < 6f)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_player_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_6 = Vector3_Distance_mE316E10B9B319A5C2A29F86E028740FD528149E7(L_3, L_5, /*hidden argument*/NULL);
		if ((!(((float)L_6) < ((float)(6.0f)))))
		{
			goto IL_00bd;
		}
	}
	{
		// transform.localScale = player.transform.position.x > transform.position.x ? new Vector3(1, 1, 1) : new Vector3(-1, 1, 1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_player_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_x_2();
		G_B4_0 = L_7;
		if ((((float)L_11) > ((float)L_14)))
		{
			G_B5_0 = L_7;
			goto IL_0075;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_15), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		G_B6_0 = L_15;
		G_B6_1 = G_B4_0;
		goto IL_0089;
	}

IL_0075:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_16), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		G_B6_0 = L_16;
		G_B6_1 = G_B5_0;
	}

IL_0089:
	{
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(G_B6_1, G_B6_0, /*hidden argument*/NULL);
		// if(!fire && fireRate < 0)
		bool L_17 = __this->get_fire_14();
		if (L_17)
		{
			goto IL_012f;
		}
	}
	{
		float L_18 = __this->get_fireRate_17();
		if ((!(((float)L_18) < ((float)(0.0f)))))
		{
			goto IL_012f;
		}
	}
	{
		// fireRate = 3f;
		__this->set_fireRate_17((3.0f));
		// fire = true;
		__this->set_fire_14((bool)1);
		// }
		goto IL_012f;
	}

IL_00bd:
	{
		// else if(pointA != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = __this->get_pointA_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_19, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_012f;
		}
	}
	{
		// if (transform.localScale.x < 0 && pointNow == pointA.transform ||
		//     transform.localScale.x > 0 && pointNow == pointB.transform)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_x_2();
		if ((!(((float)L_23) < ((float)(0.0f)))))
		{
			goto IL_00fa;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = __this->get_pointNow_9();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = __this->get_pointA_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_27 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_24, L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_0129;
		}
	}

IL_00fa:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_28, /*hidden argument*/NULL);
		float L_30 = L_29.get_x_2();
		if ((!(((float)L_30) > ((float)(0.0f)))))
		{
			goto IL_012f;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = __this->get_pointNow_9();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_32 = __this->get_pointB_6();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_34 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_31, L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_012f;
		}
	}

IL_0129:
	{
		// ChangeDirection();
		Enemy_ChangeDirection_m1971C4F983F2A52D127F9B90FF20EB588D1E49DC(__this, /*hidden argument*/NULL);
	}

IL_012f:
	{
		// if(fire)
		bool L_35 = __this->get_fire_14();
		if (!L_35)
		{
			goto IL_030f;
		}
	}
	{
		// if(castTime > 0.999f)
		float L_36 = __this->get_castTime_13();
		if ((!(((float)L_36) > ((float)(0.999f)))))
		{
			goto IL_01f4;
		}
	}
	{
		// bullet = Instantiate(bulletPrefab, transform.position + new Vector3(0.6f * transform.localScale.x, 0.2f, 0), Quaternion.identity, transform);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_37 = __this->get_bulletPrefab_15();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_38, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_40, /*hidden argument*/NULL);
		float L_42 = L_41.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_43), ((float)il2cpp_codegen_multiply((float)(0.6f), (float)L_42)), (0.2f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_39, L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_45 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_46 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_47 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m6895A7A231540279E01A537649EB42814FD2671B(L_37, L_44, L_45, L_46, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m6895A7A231540279E01A537649EB42814FD2671B_RuntimeMethod_var);
		__this->set_bullet_16(L_47);
		// bullet.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_48 = __this->get_bullet_16();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_48, (bool)1, /*hidden argument*/NULL);
		// bullet.GetComponent<SpriteRenderer>().color = bulletColor;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_49 = __this->get_bullet_16();
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_50 = GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mD25CEAAA219FA1235F8E88F914D2F8AC57303538(L_49, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mD25CEAAA219FA1235F8E88F914D2F8AC57303538_RuntimeMethod_var);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_51 = __this->get_bulletColor_18();
		SpriteRenderer_set_color_m0729526C86891ADD11611CD13A7A18B851355580(L_50, L_51, /*hidden argument*/NULL);
		// if (audiomanage != null && audiomanage.enemyShoot != null)
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_52 = __this->get_audiomanage_20();
		bool L_53 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_52, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_01f4;
		}
	}
	{
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_54 = __this->get_audiomanage_20();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_55 = L_54->get_enemyShoot_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_56 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_55, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_01f4;
		}
	}
	{
		// audiomanage.PlaySFX(audiomanage.enemyShoot);
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_57 = __this->get_audiomanage_20();
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_58 = __this->get_audiomanage_20();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_59 = L_58->get_enemyShoot_14();
		audiomanage_PlaySFX_m1C970184FFE7A7D5BD271F11EE17CBF0C65E6911(L_57, L_59, /*hidden argument*/NULL);
	}

IL_01f4:
	{
		// castTime -= Time.deltaTime;
		float L_60 = __this->get_castTime_13();
		float L_61 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_castTime_13(((float)il2cpp_codegen_subtract((float)L_60, (float)L_61)));
		// if(castTime < 0)
		float L_62 = __this->get_castTime_13();
		if ((!(((float)L_62) < ((float)(0.0f)))))
		{
			goto IL_0321;
		}
	}
	{
		// fire = false;
		__this->set_fire_14((bool)0);
		// castTime = 1f;
		__this->set_castTime_13((1.0f));
		// Vector3 diff = player.transform.position - transform.position;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_63 = __this->get_player_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_64 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_63, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_64, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_66 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_67 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_66, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_68 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_65, L_67, /*hidden argument*/NULL);
		V_0 = L_68;
		// bullet.GetComponent<Rigidbody2D>().velocity = (diff).normalized * bulletSpeed;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_69 = __this->get_bullet_16();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_70 = GameObject_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mDDB82F02C3053DCC0D60C420752A11EC11CBACC0(L_69, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mDDB82F02C3053DCC0D60C420752A11EC11CBACC0_RuntimeMethod_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		float L_72 = __this->get_bulletSpeed_19();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_73 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_71, L_72, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_74 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_73, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83(L_70, L_74, /*hidden argument*/NULL);
		// bullet.GetComponent<Rigidbody2D>().isKinematic = false;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_75 = __this->get_bullet_16();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_76 = GameObject_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mDDB82F02C3053DCC0D60C420752A11EC11CBACC0(L_75, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mDDB82F02C3053DCC0D60C420752A11EC11CBACC0_RuntimeMethod_var);
		Rigidbody2D_set_isKinematic_mA7711684E1E1E25FA7C1A1FF297B6E45DFD03BEE(L_76, (bool)0, /*hidden argument*/NULL);
		// bullet.GetComponent<Bullet>().direction = (diff).normalized;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_77 = __this->get_bullet_16();
		Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * L_78 = GameObject_GetComponent_TisBullet_t1B228DBA3982FDB21DE04329BDC49915421B9059_mC44AB386177196D8110F3E6D8F0E814D44438271(L_77, /*hidden argument*/GameObject_GetComponent_TisBullet_t1B228DBA3982FDB21DE04329BDC49915421B9059_mC44AB386177196D8110F3E6D8F0E814D44438271_RuntimeMethod_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_79 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		L_78->set_direction_4(L_79);
		// bullet.transform.rotation = Quaternion.Euler(0f, 0f, Mathf.Atan2(diff.y, diff.x) * Mathf.Rad2Deg);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_80 = __this->get_bullet_16();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_81 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_80, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_82 = V_0;
		float L_83 = L_82.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_84 = V_0;
		float L_85 = L_84.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_86 = atan2f(L_83, L_85);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_87 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_86, (float)(57.29578f))), /*hidden argument*/NULL);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_81, L_87, /*hidden argument*/NULL);
		// bullet.transform.SetParent(null);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_88 = __this->get_bullet_16();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_89 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_88, /*hidden argument*/NULL);
		Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979(L_89, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL, /*hidden argument*/NULL);
		// Vector3 localScale = bullet.transform.localScale;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_90 = __this->get_bullet_16();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_91 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_90, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_92 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_91, /*hidden argument*/NULL);
		V_1 = L_92;
		// localScale.x = 1;
		(&V_1)->set_x_2((1.0f));
		// bullet.transform.localScale = localScale;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_93 = __this->get_bullet_16();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_94 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_93, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_95 = V_1;
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_94, L_95, /*hidden argument*/NULL);
		// }
		goto IL_0321;
	}

IL_030f:
	{
		// fireRate -= Time.deltaTime;
		float L_96 = __this->get_fireRate_17();
		float L_97 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_fireRate_17(((float)il2cpp_codegen_subtract((float)L_96, (float)L_97)));
	}

IL_0321:
	{
		// if (pointB != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_98 = __this->get_pointB_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_99 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_98, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_99)
		{
			goto IL_0401;
		}
	}
	{
		// Vector2 direction = pointNow.position - transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_100 = __this->get_pointNow_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_101 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_100, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_102 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_103 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_102, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_104 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_101, L_103, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_104, /*hidden argument*/NULL);
		// enemyRb.velocity = pointNow == pointB.transform ? new Vector2(-speed, 0) : new Vector2(speed, 0);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_105 = __this->get_enemyRb_7();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_106 = __this->get_pointNow_9();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_107 = __this->get_pointB_6();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_108 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_107, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_109 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_106, L_108, /*hidden argument*/NULL);
		G_B25_0 = L_105;
		if (L_109)
		{
			G_B26_0 = L_105;
			goto IL_0383;
		}
	}
	{
		float L_110 = __this->get_speed_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_111;
		memset((&L_111), 0, sizeof(L_111));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_111), L_110, (0.0f), /*hidden argument*/NULL);
		G_B27_0 = L_111;
		G_B27_1 = G_B25_0;
		goto IL_0394;
	}

IL_0383:
	{
		float L_112 = __this->get_speed_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_113;
		memset((&L_113), 0, sizeof(L_113));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_113), ((-L_112)), (0.0f), /*hidden argument*/NULL);
		G_B27_0 = L_113;
		G_B27_1 = G_B26_0;
	}

IL_0394:
	{
		Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83(G_B27_1, G_B27_0, /*hidden argument*/NULL);
		// if (Vector2.Distance(transform.position, pointNow.position) < 0.5f)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_114 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_115 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_114, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_116 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_115, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_117 = __this->get_pointNow_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_118 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_117, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_119 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_118, /*hidden argument*/NULL);
		float L_120 = Vector2_Distance_mB07492BC42EC582754AD11554BE5B7F8D0E93CF4(L_116, L_119, /*hidden argument*/NULL);
		if ((!(((float)L_120) < ((float)(0.5f)))))
		{
			goto IL_0401;
		}
	}
	{
		// ChangeDirection();
		Enemy_ChangeDirection_m1971C4F983F2A52D127F9B90FF20EB588D1E49DC(__this, /*hidden argument*/NULL);
		// pointNow = pointNow == pointB.transform ? pointA.transform : pointB.transform;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_121 = __this->get_pointNow_9();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_122 = __this->get_pointB_6();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_123 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_122, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_124 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_121, L_123, /*hidden argument*/NULL);
		G_B29_0 = __this;
		if (L_124)
		{
			G_B30_0 = __this;
			goto IL_03f1;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_125 = __this->get_pointB_6();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_126 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_125, /*hidden argument*/NULL);
		G_B31_0 = L_126;
		G_B31_1 = G_B29_0;
		goto IL_03fc;
	}

IL_03f1:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_127 = __this->get_pointA_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_128 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_127, /*hidden argument*/NULL);
		G_B31_0 = L_128;
		G_B31_1 = G_B30_0;
	}

IL_03fc:
	{
		G_B31_1->set_pointNow_9(G_B31_0);
	}

IL_0401:
	{
		// }
		return;
	}
}
// System.Void Enemy::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnCollisionEnter2D_m14964A08E1C6434FCE554C2A77688314DDC56AEB (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_OnCollisionEnter2D_m14964A08E1C6434FCE554C2A77688314DDC56AEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (collision.gameObject.CompareTag("Bullet"))
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_0 = ___collision0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_0, /*hidden argument*/NULL);
		bool L_2 = GameObject_CompareTag_mF66519C9DAE4CC8873C36A04C3CAF7DDEC3C7EFE(L_1, _stringLiteralB98DA0CCC81F4F734434572F19CCC66972AAE344, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0165;
		}
	}
	{
		// collision.gameObject.GetComponent<CapsuleCollider2D>().enabled = false;
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_3 = ___collision0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_3, /*hidden argument*/NULL);
		CapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612 * L_5 = GameObject_GetComponent_TisCapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612_m27D05C4F2D900E576EAD91DF736CF51F44A8B847(L_4, /*hidden argument*/GameObject_GetComponent_TisCapsuleCollider2D_tB8175A15AD97D5A6AA56D02F83A7068527046612_m27D05C4F2D900E576EAD91DF736CF51F44A8B847_RuntimeMethod_var);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_5, (bool)0, /*hidden argument*/NULL);
		// enemyHealth.health--;
		EnemyHealth_t91A76AF6E61D8332F27A81B9566060F33FCA4490 * L_6 = __this->get_enemyHealth_11();
		EnemyHealth_t91A76AF6E61D8332F27A81B9566060F33FCA4490 * L_7 = L_6;
		int32_t L_8 = L_7->get_health_4();
		L_7->set_health_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)));
		// if (audiomanage != null && audiomanage.enemyDamage != null)
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_9 = __this->get_audiomanage_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0070;
		}
	}
	{
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_11 = __this->get_audiomanage_20();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_12 = L_11->get_enemyDamage_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_12, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		// audiomanage.PlaySFX(audiomanage.enemyDamage);
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_14 = __this->get_audiomanage_20();
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_15 = __this->get_audiomanage_20();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_16 = L_15->get_enemyDamage_15();
		audiomanage_PlaySFX_m1C970184FFE7A7D5BD271F11EE17CBF0C65E6911(L_14, L_16, /*hidden argument*/NULL);
	}

IL_0070:
	{
		// if (enemyHealth != null)
		EnemyHealth_t91A76AF6E61D8332F27A81B9566060F33FCA4490 * L_17 = __this->get_enemyHealth_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_17, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0089;
		}
	}
	{
		// enemyHealth.UpdateEnemyHealth();
		EnemyHealth_t91A76AF6E61D8332F27A81B9566060F33FCA4490 * L_19 = __this->get_enemyHealth_11();
		EnemyHealth_UpdateEnemyHealth_m0FA4ACA2DA6E03FF9B1C8D72C9498C2D31F91656(L_19, /*hidden argument*/NULL);
	}

IL_0089:
	{
		// if (enemyHealth.health <= 0)
		EnemyHealth_t91A76AF6E61D8332F27A81B9566060F33FCA4490 * L_20 = __this->get_enemyHealth_11();
		int32_t L_21 = L_20->get_health_4();
		if ((((int32_t)L_21) > ((int32_t)0)))
		{
			goto IL_0165;
		}
	}
	{
		// gameObject.GetComponent<Animator>().SetBool("isDead", true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_23 = GameObject_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m9904EA7E80165F7771F8AB3967F417D7C2B09996(L_22, /*hidden argument*/GameObject_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m9904EA7E80165F7771F8AB3967F417D7C2B09996_RuntimeMethod_var);
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_23, _stringLiteral658500433395E394FC3859014B67F67A842F229D, (bool)1, /*hidden argument*/NULL);
		// gameObject.GetComponent<Enemy>().enabled = false;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * L_25 = GameObject_GetComponent_TisEnemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6_m8BB5FCD3A37037A3C39DD740890AB53C64092BB4(L_24, /*hidden argument*/GameObject_GetComponent_TisEnemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6_m8BB5FCD3A37037A3C39DD740890AB53C64092BB4_RuntimeMethod_var);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_25, (bool)0, /*hidden argument*/NULL);
		// if (audiomanage != null && audiomanage.enemyDie != null)
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_26 = __this->get_audiomanage_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_27 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_26, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00f8;
		}
	}
	{
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_28 = __this->get_audiomanage_20();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_29 = L_28->get_enemyDie_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_30 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_29, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00f8;
		}
	}
	{
		// audiomanage.PlaySFX(audiomanage.enemyDie);
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_31 = __this->get_audiomanage_20();
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_32 = __this->get_audiomanage_20();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_33 = L_32->get_enemyDie_16();
		audiomanage_PlaySFX_m1C970184FFE7A7D5BD271F11EE17CBF0C65E6911(L_31, L_33, /*hidden argument*/NULL);
	}

IL_00f8:
	{
		// if (score != null)
		Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * L_34 = __this->get_score_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_35 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_34, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0116;
		}
	}
	{
		// score.AddScore(600);
		Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * L_36 = __this->get_score_12();
		Score_AddScore_mDFF2FB349F9539FB9F2772AFAC327700A70D43CC(L_36, ((int32_t)600), /*hidden argument*/NULL);
	}

IL_0116:
	{
		// foreach (Transform child in transform)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_37 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		RuntimeObject* L_38 = Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC(L_37, /*hidden argument*/NULL);
		V_0 = L_38;
	}

IL_0122:
	try
	{ // begin try (depth: 1)
		{
			goto IL_013a;
		}

IL_0124:
		{
			// foreach (Transform child in transform)
			RuntimeObject* L_39 = V_0;
			RuntimeObject * L_40 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_39);
			// child.gameObject.SetActive(false);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_41 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)CastclassClass((RuntimeObject*)L_40, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_41, (bool)0, /*hidden argument*/NULL);
		}

IL_013a:
		{
			// foreach (Transform child in transform)
			RuntimeObject* L_42 = V_0;
			bool L_43 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_42);
			if (L_43)
			{
				goto IL_0124;
			}
		}

IL_0142:
		{
			IL2CPP_LEAVE(0x155, FINALLY_0144);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0144;
	}

FINALLY_0144:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_44 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_44, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_45 = V_1;
			if (!L_45)
			{
				goto IL_0154;
			}
		}

IL_014e:
		{
			RuntimeObject* L_46 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_46);
		}

IL_0154:
		{
			IL2CPP_END_FINALLY(324)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(324)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x155, IL_0155)
	}

IL_0155:
	{
		// Destroy(gameObject, 2f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_47 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m09F51D8BDECFD2E8C618498EF7377029B669030D(L_47, (2.0f), /*hidden argument*/NULL);
	}

IL_0165:
	{
		// }
		return;
	}
}
// System.Void Enemy::ChangeDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_ChangeDirection_m1971C4F983F2A52D127F9B90FF20EB588D1E49DC (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 localScale = transform.localScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// localScale.x *= -1;
		float* L_2 = (&V_0)->get_address_of_x_2();
		float* L_3 = L_2;
		float L_4 = *((float*)L_3);
		*((float*)L_3) = (float)((float)il2cpp_codegen_multiply((float)L_4, (float)(-1.0f)));
		// transform.localScale = localScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mCD4E016A02FE662E339AA011EBA74D77B09556C5 (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, const RuntimeMethod* method)
{
	{
		// float castTime = 1f;
		__this->set_castTime_13((1.0f));
		// float fireRate = 3f;
		__this->set_fireRate_17((3.0f));
		// public Color bulletColor = Color.white;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		__this->set_bulletColor_18(L_0);
		// public float bulletSpeed = 3;
		__this->set_bulletSpeed_19((3.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void EnemyHealth::UpdateEnemyHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_UpdateEnemyHealth_m0FA4ACA2DA6E03FF9B1C8D72C9498C2D31F91656 (EnemyHealth_t91A76AF6E61D8332F27A81B9566060F33FCA4490 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for(int i = 0; i < bar.Length; i++){
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// if(i >= health)
		int32_t L_0 = V_0;
		int32_t L_1 = __this->get_health_4();
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_001d;
		}
	}
	{
		// bar[i].SetActive(false);
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_2 = __this->get_bar_5();
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)0, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_001d:
	{
		// bar[i].SetActive(true);
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_6 = __this->get_bar_5();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_9, (bool)1, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// for(int i = 0; i < bar.Length; i++){
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002f:
	{
		// for(int i = 0; i < bar.Length; i++){
		int32_t L_11 = V_0;
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_12 = __this->get_bar_5();
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void EnemyHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth__ctor_m96068A280C9C4869AD1D763880D735F31909A132 (EnemyHealth_t91A76AF6E61D8332F27A81B9566060F33FCA4490 * __this, const RuntimeMethod* method)
{
	{
		// public int health = 3;
		__this->set_health_4(3);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Holder::NextLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Holder_NextLevel_mC3ECE13BD452E017C751CACDE1A25B6200DCE26A (Holder_tBC04476AC1BB69D8FAF7EF93B49402612407F571 * __this, int32_t ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Holder_NextLevel_mC3ECE13BD452E017C751CACDE1A25B6200DCE26A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bgSprites.Length > level && bgSprites[level] != null)
		SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* L_0 = __this->get_bgSprites_4();
		int32_t L_1 = ___level0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) <= ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* L_2 = __this->get_bgSprites_4();
		int32_t L_3 = ___level0;
		int32_t L_4 = L_3;
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		// bg.sprite = bgSprites[level];
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_7 = __this->get_bg_5();
		SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* L_8 = __this->get_bgSprites_4();
		int32_t L_9 = ___level0;
		int32_t L_10 = L_9;
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611(L_7, L_11, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002f:
	{
		// bg.sprite = null;
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_12 = __this->get_bg_5();
		SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611(L_12, (Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Holder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Holder__ctor_mC780AD05E995223DA0345BC101BBBD3E835362A7 (Holder_tBC04476AC1BB69D8FAF7EF93B49402612407F571 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Playerattack::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playerattack_Start_m9BAD0714FE4E6B31D2F37907A3CD08360DC2D507 (Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Playerattack_Start_m9BAD0714FE4E6B31D2F37907A3CD08360DC2D507_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sorcerySwordShootTimer = sorcerySwordShootInterval;
		float L_0 = __this->get_sorcerySwordShootInterval_7();
		__this->set_sorcerySwordShootTimer_8(L_0);
		// audiomanage = GameObject.FindGameObjectWithTag("Audio").GetComponent<audiomanage>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D(_stringLiteralACDAC205F5E24CB75113C4B281A2C13F08B75159, /*hidden argument*/NULL);
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_2 = GameObject_GetComponent_Tisaudiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C_m07410B9FF809C92B8554B9C0A328C0EC4CC6930F(L_1, /*hidden argument*/GameObject_GetComponent_Tisaudiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C_m07410B9FF809C92B8554B9C0A328C0EC4CC6930F_RuntimeMethod_var);
		__this->set_audiomanage_10(L_2);
		// playermovement = GameObject.FindObjectOfType<playermovement>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * L_3 = Object_FindObjectOfType_Tisplayermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829_mFC72C2A4AD0CF07310D2418E7A58AC9D9A87E987(/*hidden argument*/Object_FindObjectOfType_Tisplayermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829_mFC72C2A4AD0CF07310D2418E7A58AC9D9A87E987_RuntimeMethod_var);
		__this->set_playermovement_11(L_3);
		// }
		return;
	}
}
// System.Void Playerattack::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playerattack_Update_mB025780DAFB267F59BA272240940126AED455124 (Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Playerattack_Update_mB025780DAFB267F59BA272240940126AED455124_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (playermovement != null && playermovement.IsGameEnded())
		playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * L_0 = __this->get_playermovement_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * L_2 = __this->get_playermovement_11();
		bool L_3 = playermovement_IsGameEnded_m0CB9DBBD7874076A9D48D7E042E2EB93FCF27BEC_inline(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		return;
	}

IL_001c:
	{
		// if (weaponsManager == null)
		Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * L_4 = __this->get_weaponsManager_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		// return;
		return;
	}

IL_002b:
	{
		// WeaponType currentWeapon = weaponsManager.GetCurrentWeapon();
		Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * L_6 = __this->get_weaponsManager_9();
		int32_t L_7 = Playerweapons_GetCurrentWeapon_mEAAEE69175A295F19C507CDF6ADF215D1A85683D_inline(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// switch (currentWeapon)
		int32_t L_8 = V_0;
		switch (L_8)
		{
			case 0:
			{
				goto IL_004a;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_007c;
			}
		}
	}
	{
		return;
	}

IL_004a:
	{
		// sword.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_sword_4();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_9, (bool)0, /*hidden argument*/NULL);
		// sorcerySword.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = __this->get_sorcerySword_5();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_10, (bool)0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0063:
	{
		// sword.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_sword_4();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_11, (bool)1, /*hidden argument*/NULL);
		// sorcerySword.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = __this->get_sorcerySword_5();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_12, (bool)0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_007c:
	{
		// sword.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = __this->get_sword_4();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_13, (bool)0, /*hidden argument*/NULL);
		// sorcerySword.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = __this->get_sorcerySword_5();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_14, (bool)1, /*hidden argument*/NULL);
		// sorcerySwordShootTimer -= Time.deltaTime;
		float L_15 = __this->get_sorcerySwordShootTimer_8();
		float L_16 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_sorcerySwordShootTimer_8(((float)il2cpp_codegen_subtract((float)L_15, (float)L_16)));
		// if (sorcerySwordShootTimer <= 0f)
		float L_17 = __this->get_sorcerySwordShootTimer_8();
		if ((!(((float)L_17) <= ((float)(0.0f)))))
		{
			goto IL_00c5;
		}
	}
	{
		// ShootWithsorcerySword();
		Playerattack_ShootWithsorcerySword_mF180AFD3AF8CCC90B1F462F26612E43B01D15CF1(__this, /*hidden argument*/NULL);
		// sorcerySwordShootTimer = sorcerySwordShootInterval;
		float L_18 = __this->get_sorcerySwordShootInterval_7();
		__this->set_sorcerySwordShootTimer_8(L_18);
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void Playerattack::ShootWithsorcerySword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playerattack_ShootWithsorcerySword_mF180AFD3AF8CCC90B1F462F26612E43B01D15CF1 (Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Playerattack_ShootWithsorcerySword_mF180AFD3AF8CCC90B1F462F26612E43B01D15CF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * V_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * G_B8_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * G_B4_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * G_B6_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * G_B5_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * G_B7_1 = NULL;
	{
		// if (isPlayerDead)
		bool L_0 = __this->get_isPlayerDead_12();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (bulletPrefab != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_bulletPrefab_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00c8;
		}
	}
	{
		// GameObject bullet = Instantiate(bulletPrefab, transform.position, Quaternion.identity);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_bulletPrefab_6();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_3, L_5, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		// Rigidbody2D bulletRb = bullet.GetComponent<Rigidbody2D>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = L_7;
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_9 = GameObject_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mDDB82F02C3053DCC0D60C420752A11EC11CBACC0(L_8, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mDDB82F02C3053DCC0D60C420752A11EC11CBACC0_RuntimeMethod_var);
		V_0 = L_9;
		// if (bulletRb != null)
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_10 = V_0;
		bool L_11 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B4_0 = L_8;
		if (!L_11)
		{
			G_B8_0 = L_8;
			goto IL_0087;
		}
	}
	{
		// Vector3 direction = (transform.localScale.x > 0 ? Vector3.right : Vector3.left).normalized;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_x_2();
		G_B5_0 = G_B4_0;
		if ((((float)L_14) > ((float)(0.0f))))
		{
			G_B6_0 = G_B4_0;
			goto IL_0063;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_get_left_m74B52D8CFD8C62138067B2EB6846B6E9E51B7C20(/*hidden argument*/NULL);
		G_B7_0 = L_15;
		G_B7_1 = G_B5_0;
		goto IL_0068;
	}

IL_0063:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		G_B7_0 = L_16;
		G_B7_1 = G_B6_0;
	}

IL_0068:
	{
		V_2 = G_B7_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		V_1 = L_17;
		// bulletRb.velocity = direction * 6f;
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_18 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_19, (6.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_21 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_20, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83(L_18, L_21, /*hidden argument*/NULL);
		G_B8_0 = G_B7_1;
	}

IL_0087:
	{
		// Destroy(bullet, 5f); // Destroy bullet after 5 seconds
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m09F51D8BDECFD2E8C618498EF7377029B669030D(G_B8_0, (5.0f), /*hidden argument*/NULL);
		// if (audiomanage != null && audiomanage.playerShoot != null)
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_22 = __this->get_audiomanage_10();
		bool L_23 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_22, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_24 = __this->get_audiomanage_10();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_25 = L_24->get_playerShoot_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_25, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00c8;
		}
	}
	{
		// audiomanage.PlaySFX(audiomanage.playerShoot);
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_27 = __this->get_audiomanage_10();
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_28 = __this->get_audiomanage_10();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_29 = L_28->get_playerShoot_11();
		audiomanage_PlaySFX_m1C970184FFE7A7D5BD271F11EE17CBF0C65E6911(L_27, L_29, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		// }
		return;
	}
}
// System.Void Playerattack::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playerattack_OnTriggerEnter2D_m9C7B7D24B8D4082AC2533B217D6296BF7065E491 (Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Playerattack_OnTriggerEnter2D_m9C7B7D24B8D4082AC2533B217D6296BF7065E491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * V_0 = NULL;
	{
		// if (other.CompareTag("Bullet"))
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___other0;
		bool L_1 = Component_CompareTag_mD074608D7FEC96A53C57A456BA613EE01C31D4B7(L_0, _stringLiteralB98DA0CCC81F4F734434572F19CCC66972AAE344, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// Bullet bullet = other.GetComponent<Bullet>();
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_2 = ___other0;
		Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * L_3 = Component_GetComponent_TisBullet_t1B228DBA3982FDB21DE04329BDC49915421B9059_mAED244333A256E7C1EE2291E7DF2D96A67CC0256(L_2, /*hidden argument*/Component_GetComponent_TisBullet_t1B228DBA3982FDB21DE04329BDC49915421B9059_mAED244333A256E7C1EE2291E7DF2D96A67CC0256_RuntimeMethod_var);
		V_0 = L_3;
		// if (bullet != null && weaponsManager.GetCurrentWeapon() == WeaponType.Sword)
		Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * L_6 = __this->get_weaponsManager_9();
		int32_t L_7 = Playerweapons_GetCurrentWeapon_mEAAEE69175A295F19C507CDF6ADF215D1A85683D_inline(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		// DeflectBullet(bullet);
		Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * L_8 = V_0;
		Playerattack_DeflectBullet_mFA9ACFDE869B8314D5AEC74648E27F9D66414457(__this, L_8, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Playerattack::DeflectBullet(Bullet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playerattack_DeflectBullet_mFA9ACFDE869B8314D5AEC74648E27F9D66414457 (Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * __this, Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * ___bullet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Playerattack_DeflectBullet_mFA9ACFDE869B8314D5AEC74648E27F9D66414457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * V_0 = NULL;
	{
		// Rigidbody2D bulletRb = bullet.GetComponent<Rigidbody2D>();
		Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * L_0 = ___bullet0;
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_1 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(L_0, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		V_0 = L_1;
		// if (bulletRb != null)
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_006d;
		}
	}
	{
		// bulletRb.velocity = -bulletRb.velocity; // Reverse bullet's velocity
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_4 = V_0;
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_5 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = Vector2_op_UnaryNegation_m3FA0AE2F9B031765EFA566B25F5453C3B001FF4D(L_6, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83(L_4, L_7, /*hidden argument*/NULL);
		// bullet.gameObject.layer = LayerMask.NameToLayer("playerbullet");
		Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * L_8 = ___bullet0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_8, /*hidden argument*/NULL);
		int32_t L_10 = LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901(_stringLiteral4BACED13B23DF5B4880CE0A6307D2BFE0F1F1398, /*hidden argument*/NULL);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_9, L_10, /*hidden argument*/NULL);
		// if (audiomanage != null && audiomanage.playerDeflect != null)
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_11 = __this->get_audiomanage_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006d;
		}
	}
	{
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_13 = __this->get_audiomanage_10();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_14 = L_13->get_playerDeflect_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_14, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		// audiomanage.PlaySFX(audiomanage.playerDeflect);
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_16 = __this->get_audiomanage_10();
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_17 = __this->get_audiomanage_10();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_18 = L_17->get_playerDeflect_10();
		audiomanage_PlaySFX_m1C970184FFE7A7D5BD271F11EE17CBF0C65E6911(L_16, L_18, /*hidden argument*/NULL);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void Playerattack::SetPlayerDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playerattack_SetPlayerDead_m80225A41AD4BF420C053A622556C096A40AB59EB (Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * __this, const RuntimeMethod* method)
{
	{
		// isPlayerDead = true;
		__this->set_isPlayerDead_12((bool)1);
		// }
		return;
	}
}
// System.Void Playerattack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playerattack__ctor_m285EBA72BFDB8A02E30AF325B9F9CCAD74847268 (Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * __this, const RuntimeMethod* method)
{
	{
		// float sorcerySwordShootInterval = 5f;
		__this->set_sorcerySwordShootInterval_7((5.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Playercollision::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playercollision_Awake_mD6CBE0E82E3686DF7B1094F9E0FFF1BA37308D03 (Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Playercollision_Awake_mD6CBE0E82E3686DF7B1094F9E0FFF1BA37308D03_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audiomanage = GameObject.FindGameObjectWithTag("Audio").GetComponent<audiomanage>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D(_stringLiteralACDAC205F5E24CB75113C4B281A2C13F08B75159, /*hidden argument*/NULL);
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_1 = GameObject_GetComponent_Tisaudiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C_m07410B9FF809C92B8554B9C0A328C0EC4CC6930F(L_0, /*hidden argument*/GameObject_GetComponent_Tisaudiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C_m07410B9FF809C92B8554B9C0A328C0EC4CC6930F_RuntimeMethod_var);
		__this->set_audiomanage_7(L_1);
		// }
		return;
	}
}
// System.Void Playercollision::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playercollision_Start_mD0437A0E315EBE84AD37451C401CC009116ED87D (Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Playercollision_Start_mD0437A0E315EBE84AD37451C401CC009116ED87D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timerScript = FindObjectOfType<timer>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * L_0 = Object_FindObjectOfType_Tistimer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF_mF0133F41F229C4867B0A5034DE2DEDD86D2EC208(/*hidden argument*/Object_FindObjectOfType_Tistimer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF_mF0133F41F229C4867B0A5034DE2DEDD86D2EC208_RuntimeMethod_var);
		__this->set_timerScript_4(L_0);
		// movement = GetComponent<playermovement>();
		playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * L_1 = Component_GetComponent_Tisplayermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829_m5C8A19BDB5FB6D8F13E29A27B63B5A7AAFC4F93F(__this, /*hidden argument*/Component_GetComponent_Tisplayermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829_m5C8A19BDB5FB6D8F13E29A27B63B5A7AAFC4F93F_RuntimeMethod_var);
		__this->set_movement_5(L_1);
		// healthScript = FindObjectOfType<Playerhealth>();
		Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D * L_2 = Object_FindObjectOfType_TisPlayerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D_m7248AC8188BE8A91708094FADDDF6EDD55A2464D(/*hidden argument*/Object_FindObjectOfType_TisPlayerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D_m7248AC8188BE8A91708094FADDDF6EDD55A2464D_RuntimeMethod_var);
		__this->set_healthScript_6(L_2);
		// }
		return;
	}
}
// System.Void Playercollision::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playercollision_OnCollisionEnter2D_mFA0340B85BA0CC30CBC0A5734BE2562444FFDF0C (Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70 * __this, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Playercollision_OnCollisionEnter2D_mFA0340B85BA0CC30CBC0A5734BE2562444FFDF0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if(collision.gameObject.CompareTag("Spikes") || collision.gameObject.CompareTag("Bullet"))
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_0 = ___collision0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_0, /*hidden argument*/NULL);
		bool L_2 = GameObject_CompareTag_mF66519C9DAE4CC8873C36A04C3CAF7DDEC3C7EFE(L_1, _stringLiteralD6ADAF3EF20EFDCE82D4E7C605CE3B9477A493C8, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_3 = ___collision0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_3, /*hidden argument*/NULL);
		bool L_5 = GameObject_CompareTag_mF66519C9DAE4CC8873C36A04C3CAF7DDEC3C7EFE(L_4, _stringLiteralB98DA0CCC81F4F734434572F19CCC66972AAE344, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_01d3;
		}
	}

IL_0027:
	{
		// healthScript.health--;
		Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D * L_6 = __this->get_healthScript_6();
		Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D * L_7 = L_6;
		int32_t L_8 = L_7->get_health_4();
		L_7->set_health_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)));
		// if (audiomanage != null && audiomanage.playerDamage != null)
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_9 = __this->get_audiomanage_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0071;
		}
	}
	{
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_11 = __this->get_audiomanage_7();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_12 = L_11->get_playerDamage_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_12, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0071;
		}
	}
	{
		// audiomanage.PlaySFX(audiomanage.playerDamage);
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_14 = __this->get_audiomanage_7();
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_15 = __this->get_audiomanage_7();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_16 = L_15->get_playerDamage_12();
		audiomanage_PlaySFX_m1C970184FFE7A7D5BD271F11EE17CBF0C65E6911(L_14, L_16, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// if (healthScript != null)
		Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D * L_17 = __this->get_healthScript_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_17, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_008a;
		}
	}
	{
		// healthScript.UpdateHeartsUI();
		Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D * L_19 = __this->get_healthScript_6();
		Playerhealth_UpdateHeartsUI_mF408B6260B30ABD4AC891DCAF3783A1D73006762(L_19, /*hidden argument*/NULL);
	}

IL_008a:
	{
		// if (healthScript.health <= 0)
		Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D * L_20 = __this->get_healthScript_6();
		int32_t L_21 = L_20->get_health_4();
		if ((((int32_t)L_21) > ((int32_t)0)))
		{
			goto IL_018f;
		}
	}
	{
		// gameObject.GetComponent<Animator>().SetBool("isDead", true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_23 = GameObject_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m9904EA7E80165F7771F8AB3967F417D7C2B09996(L_22, /*hidden argument*/GameObject_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m9904EA7E80165F7771F8AB3967F417D7C2B09996_RuntimeMethod_var);
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_23, _stringLiteral658500433395E394FC3859014B67F67A842F229D, (bool)1, /*hidden argument*/NULL);
		// playermanage.isGameOver = true;
		((playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED_StaticFields*)il2cpp_codegen_static_fields_for(playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED_il2cpp_TypeInfo_var))->set_isGameOver_4((bool)1);
		// gameObject.GetComponent<playermovement>().enabled = false;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * L_25 = GameObject_GetComponent_Tisplayermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829_mF35FD95F01588A91BF13DBA5D119A3B1405C6931(L_24, /*hidden argument*/GameObject_GetComponent_Tisplayermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829_mF35FD95F01588A91BF13DBA5D119A3B1405C6931_RuntimeMethod_var);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_25, (bool)0, /*hidden argument*/NULL);
		// if (audiomanage != null)
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_26 = __this->get_audiomanage_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_27 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_26, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_010f;
		}
	}
	{
		// audiomanage.musicSource.Stop();
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_28 = __this->get_audiomanage_7();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_29 = L_28->get_musicSource_4();
		AudioSource_Stop_m488F7AA7F7067DE3EC92CEE3413E86C2E5940200(L_29, /*hidden argument*/NULL);
		// if (audiomanage.playerDie != null)
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_30 = __this->get_audiomanage_7();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_31 = L_30->get_playerDie_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_32 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_31, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_010f;
		}
	}
	{
		// audiomanage.PlaySFX(audiomanage.playerDie);
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_33 = __this->get_audiomanage_7();
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_34 = __this->get_audiomanage_7();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_35 = L_34->get_playerDie_13();
		audiomanage_PlaySFX_m1C970184FFE7A7D5BD271F11EE17CBF0C65E6911(L_33, L_35, /*hidden argument*/NULL);
	}

IL_010f:
	{
		// if (Score.instance != null)
		Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * L_36 = ((Score_t72F7EE757BE7D4C7846803B3072753760AB6427F_StaticFields*)il2cpp_codegen_static_fields_for(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_37 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_36, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0173;
		}
	}
	{
		// Score.instance.GameOverScoreText.text = "YOUR SCORE: " + Score.instance.ScoreNumber.ToString();
		Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * L_38 = ((Score_t72F7EE757BE7D4C7846803B3072753760AB6427F_StaticFields*)il2cpp_codegen_static_fields_for(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F_il2cpp_TypeInfo_var))->get_instance_4();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_39 = L_38->get_GameOverScoreText_9();
		Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * L_40 = ((Score_t72F7EE757BE7D4C7846803B3072753760AB6427F_StaticFields*)il2cpp_codegen_static_fields_for(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_41 = Score_get_ScoreNumber_m71F008399D5FB50B3D6C39DF34E42DCD9146ACBB_inline(L_40, /*hidden argument*/NULL);
		V_1 = L_41;
		String_t* L_42 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_43 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral282E9F1EAF5A364D47C022D164E00BBA0C02400E, L_42, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_39, L_43);
		// Score.instance.GameOverHighScoreText.text = "HIGH SCORE: " + PlayerPrefs.GetInt("highscore", 0).ToString();
		Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * L_44 = ((Score_t72F7EE757BE7D4C7846803B3072753760AB6427F_StaticFields*)il2cpp_codegen_static_fields_for(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F_il2cpp_TypeInfo_var))->get_instance_4();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_45 = L_44->get_GameOverHighScoreText_10();
		int32_t L_46 = PlayerPrefs_GetInt_m1CBBA4989F15BA668EE24950D3C6B56E2ED20BD6(_stringLiteral4DD819B7801B7A76FD9F8FF96FD5B3F04726A5B7, 0, /*hidden argument*/NULL);
		V_1 = L_46;
		String_t* L_47 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_48 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral7E90B60025F1250542C8998FB53AB8D5B98CF53F, L_47, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_45, L_48);
	}

IL_0173:
	{
		// Playerattack playerAttack = gameObject.GetComponent<Playerattack>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_49 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * L_50 = GameObject_GetComponent_TisPlayerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A_mEEA96AA4CD8350D27556234CD4946C9EFFA54F40(L_49, /*hidden argument*/GameObject_GetComponent_TisPlayerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A_mEEA96AA4CD8350D27556234CD4946C9EFFA54F40_RuntimeMethod_var);
		V_0 = L_50;
		// if (playerAttack != null)
		Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * L_51 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_52 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_51, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_01d3;
		}
	}
	{
		// playerAttack.SetPlayerDead();
		Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * L_53 = V_0;
		Playerattack_SetPlayerDead_m80225A41AD4BF420C053A622556C096A40AB59EB(L_53, /*hidden argument*/NULL);
		// }
		return;
	}

IL_018f:
	{
		// if (audiomanage != null && audiomanage.playerDamage != null)
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_54 = __this->get_audiomanage_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_55 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_54, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_01c6;
		}
	}
	{
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_56 = __this->get_audiomanage_7();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_57 = L_56->get_playerDamage_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_58 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_57, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_01c6;
		}
	}
	{
		// audiomanage.PlaySFX(audiomanage.playerDamage);
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_59 = __this->get_audiomanage_7();
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_60 = __this->get_audiomanage_7();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_61 = L_60->get_playerDamage_12();
		audiomanage_PlaySFX_m1C970184FFE7A7D5BD271F11EE17CBF0C65E6911(L_59, L_61, /*hidden argument*/NULL);
	}

IL_01c6:
	{
		// StartCoroutine(DamageAndRespawn());
		RuntimeObject* L_62 = Playercollision_DamageAndRespawn_m7E00604E7AAEE3250DBC9147E6EB3147A177E3BB(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_62, /*hidden argument*/NULL);
	}

IL_01d3:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Playercollision::DamageAndRespawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Playercollision_DamageAndRespawn_m7E00604E7AAEE3250DBC9147E6EB3147A177E3BB (Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Playercollision_DamageAndRespawn_m7E00604E7AAEE3250DBC9147E6EB3147A177E3BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDamageAndRespawnU3Ed__7_tFE5FE3A25F64F8CF61F9697B98F2ED3DACD43E0D * L_0 = (U3CDamageAndRespawnU3Ed__7_tFE5FE3A25F64F8CF61F9697B98F2ED3DACD43E0D *)il2cpp_codegen_object_new(U3CDamageAndRespawnU3Ed__7_tFE5FE3A25F64F8CF61F9697B98F2ED3DACD43E0D_il2cpp_TypeInfo_var);
		U3CDamageAndRespawnU3Ed__7__ctor_m59BF92ECD7C1242F09E88E1F6DE8D94BF033489E(L_0, 0, /*hidden argument*/NULL);
		U3CDamageAndRespawnU3Ed__7_tFE5FE3A25F64F8CF61F9697B98F2ED3DACD43E0D * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Playercollision::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playercollision__ctor_m01196B4AC97D4289956A5A81AC1B526BD7D42B91 (Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Playercollision/<DamageAndRespawn>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDamageAndRespawnU3Ed__7__ctor_m59BF92ECD7C1242F09E88E1F6DE8D94BF033489E (U3CDamageAndRespawnU3Ed__7_tFE5FE3A25F64F8CF61F9697B98F2ED3DACD43E0D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Playercollision/<DamageAndRespawn>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDamageAndRespawnU3Ed__7_System_IDisposable_Dispose_mAFB985730AB19F2CDF7F42C98F5BC76D14C95C16 (U3CDamageAndRespawnU3Ed__7_tFE5FE3A25F64F8CF61F9697B98F2ED3DACD43E0D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Playercollision/<DamageAndRespawn>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDamageAndRespawnU3Ed__7_MoveNext_mB3CA9C95956A52D7F7321AA01B2C64B776E3ABA8 (U3CDamageAndRespawnU3Ed__7_tFE5FE3A25F64F8CF61F9697B98F2ED3DACD43E0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDamageAndRespawnU3Ed__7_MoveNext_mB3CA9C95956A52D7F7321AA01B2C64B776E3ABA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Physics2D.IgnoreLayerCollision(11, 12);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_tB21970F986016656D66D2922594F336E1EE7D5C7_il2cpp_TypeInfo_var);
		Physics2D_IgnoreLayerCollision_m9DACD8881E14C00A9F02244C01BBEDA62AFCF985(((int32_t)11), ((int32_t)12), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(2);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_4 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_4, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0040:
	{
		__this->set_U3CU3E1__state_0((-1));
		// timerScript.ResetTimer();
		Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70 * L_5 = V_1;
		timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * L_6 = L_5->get_timerScript_4();
		timer_ResetTimer_m6EB5E593C5DE43CB2E87A613B6BDBC465B26DD3B(L_6, /*hidden argument*/NULL);
		// transform.position = movement.levels[movement.currentLevel].transform.GetChild(movement.levels[movement.currentLevel].transform.childCount - 1).position;
		Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70 * L_7 = V_1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_7, /*hidden argument*/NULL);
		Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70 * L_9 = V_1;
		playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * L_10 = L_9->get_movement_5();
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_11 = L_10->get_levels_14();
		Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70 * L_12 = V_1;
		playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * L_13 = L_12->get_movement_5();
		int32_t L_14 = L_13->get_currentLevel_13();
		int32_t L_15 = L_14;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_16, /*hidden argument*/NULL);
		Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70 * L_18 = V_1;
		playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * L_19 = L_18->get_movement_5();
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_20 = L_19->get_levels_14();
		Playercollision_t2867EBEA2602B9C26800BAE0A51E23F1DD91FE70 * L_21 = V_1;
		playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * L_22 = L_21->get_movement_5();
		int32_t L_23 = L_22->get_currentLevel_13();
		int32_t L_24 = L_23;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_25, /*hidden argument*/NULL);
		int32_t L_27 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_26, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_28, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_8, L_29, /*hidden argument*/NULL);
		// Physics2D.IgnoreLayerCollision(11, 12, false);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_tB21970F986016656D66D2922594F336E1EE7D5C7_il2cpp_TypeInfo_var);
		Physics2D_IgnoreLayerCollision_m6F9410A4C90DFF37FF10FBD5E2A8D623F1020820(((int32_t)11), ((int32_t)12), (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Playercollision/<DamageAndRespawn>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDamageAndRespawnU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC96F5593CC2FD2211B04D1526BFE309006F9FB7D (U3CDamageAndRespawnU3Ed__7_tFE5FE3A25F64F8CF61F9697B98F2ED3DACD43E0D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Playercollision/<DamageAndRespawn>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDamageAndRespawnU3Ed__7_System_Collections_IEnumerator_Reset_m438F1749ABDD38422B62D2275A8EDF47077AB0F4 (U3CDamageAndRespawnU3Ed__7_tFE5FE3A25F64F8CF61F9697B98F2ED3DACD43E0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDamageAndRespawnU3Ed__7_System_Collections_IEnumerator_Reset_m438F1749ABDD38422B62D2275A8EDF47077AB0F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CDamageAndRespawnU3Ed__7_System_Collections_IEnumerator_Reset_m438F1749ABDD38422B62D2275A8EDF47077AB0F4_RuntimeMethod_var);
	}
}
// System.Object Playercollision/<DamageAndRespawn>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDamageAndRespawnU3Ed__7_System_Collections_IEnumerator_get_Current_m77C66A9496943212B232B36868284615BC8049FC (U3CDamageAndRespawnU3Ed__7_tFE5FE3A25F64F8CF61F9697B98F2ED3DACD43E0D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Playerhealth::UpdateHeartsUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playerhealth_UpdateHeartsUI_mF408B6260B30ABD4AC891DCAF3783A1D73006762 (Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for(int i = 0; i < hearts.Length; i++)
		V_0 = 0;
		goto IL_00b0;
	}

IL_0007:
	{
		// if(i >= health)
		int32_t L_0 = V_0;
		int32_t L_1 = __this->get_health_4();
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_005f;
		}
	}
	{
		// hearts[i].color = new Color(hearts[i].color.r, hearts[i].color.g, hearts[i].color.b, 0.25f);
		ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* L_2 = __this->get_hearts_5();
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* L_6 = __this->get_hearts_5();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_10 = VirtFuncInvoker0< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_9);
		float L_11 = L_10.get_r_0();
		ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* L_12 = __this->get_hearts_5();
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_16 = VirtFuncInvoker0< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_15);
		float L_17 = L_16.get_g_1();
		ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* L_18 = __this->get_hearts_5();
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_22 = VirtFuncInvoker0< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_21);
		float L_23 = L_22.get_b_2();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_24), L_11, L_17, L_23, (0.25f), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_24);
		// }
		goto IL_00ac;
	}

IL_005f:
	{
		// hearts[i].color = new Color(hearts[i].color.r, hearts[i].color.g, hearts[i].color.b, 1f);
		ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* L_25 = __this->get_hearts_5();
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* L_29 = __this->get_hearts_5();
		int32_t L_30 = V_0;
		int32_t L_31 = L_30;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_33 = VirtFuncInvoker0< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_32);
		float L_34 = L_33.get_r_0();
		ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* L_35 = __this->get_hearts_5();
		int32_t L_36 = V_0;
		int32_t L_37 = L_36;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_38 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_39 = VirtFuncInvoker0< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_38);
		float L_40 = L_39.get_g_1();
		ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* L_41 = __this->get_hearts_5();
		int32_t L_42 = V_0;
		int32_t L_43 = L_42;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_45 = VirtFuncInvoker0< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_44);
		float L_46 = L_45.get_b_2();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_47;
		memset((&L_47), 0, sizeof(L_47));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_47), L_34, L_40, L_46, (1.0f), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_28, L_47);
	}

IL_00ac:
	{
		// for(int i = 0; i < hearts.Length; i++)
		int32_t L_48 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_00b0:
	{
		// for(int i = 0; i < hearts.Length; i++)
		int32_t L_49 = V_0;
		ImageU5BU5D_t3FC2D3F5D777CA546CA2314E6F5DC78FE8E3A37D* L_50 = __this->get_hearts_5();
		if ((((int32_t)L_49) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Playerhealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playerhealth__ctor_mB869C3A295CC07ACF230F12647B9D4733AFA4E6E (Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D * __this, const RuntimeMethod* method)
{
	{
		// public int health = 3;
		__this->set_health_4(3);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Playerweapons::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playerweapons_Start_m451F427EA6BBA74A40B7C407729F842A06A85E41 (Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Playerweapons_Start_m451F427EA6BBA74A40B7C407729F842A06A85E41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// attackScript = GetComponent<Playerattack>();
		Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * L_0 = Component_GetComponent_TisPlayerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A_m81D6561DCA00F3E4A0B91496D90E5C2BB6BC15D4(__this, /*hidden argument*/Component_GetComponent_TisPlayerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A_m81D6561DCA00F3E4A0B91496D90E5C2BB6BC15D4_RuntimeMethod_var);
		__this->set_attackScript_5(L_0);
		// UpdateWeaponVisibility();
		Playerweapons_UpdateWeaponVisibility_m778A1D154C5B17E5ED53B757445E5848BB71863D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Playerweapons::SetWeapon(WeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playerweapons_SetWeapon_mB7F0C930A8078AA1B85376C1A98F359BC4B2A803 (Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * __this, int32_t ___weaponType0, const RuntimeMethod* method)
{
	{
		// currentWeapon = weaponType;
		int32_t L_0 = ___weaponType0;
		__this->set_currentWeapon_4(L_0);
		// UpdateWeaponVisibility();
		Playerweapons_UpdateWeaponVisibility_m778A1D154C5B17E5ED53B757445E5848BB71863D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// WeaponType Playerweapons::GetCurrentWeapon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Playerweapons_GetCurrentWeapon_mEAAEE69175A295F19C507CDF6ADF215D1A85683D (Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * __this, const RuntimeMethod* method)
{
	{
		// return currentWeapon;
		int32_t L_0 = __this->get_currentWeapon_4();
		return L_0;
	}
}
// System.Void Playerweapons::UpdateWeaponVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playerweapons_UpdateWeaponVisibility_m778A1D154C5B17E5ED53B757445E5848BB71863D (Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Playerweapons_UpdateWeaponVisibility_m778A1D154C5B17E5ED53B757445E5848BB71863D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (attackScript == null)
		Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * L_0 = __this->get_attackScript_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// switch (currentWeapon)
		int32_t L_2 = __this->get_currentWeapon_4();
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_006f;
			}
		}
	}
	{
		return;
	}

IL_0029:
	{
		// attackScript.sword.SetActive(false);
		Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * L_4 = __this->get_attackScript_5();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = L_4->get_sword_4();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)0, /*hidden argument*/NULL);
		// attackScript.sorcerySword.SetActive(false);
		Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * L_6 = __this->get_attackScript_5();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = L_6->get_sorcerySword_5();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_004c:
	{
		// attackScript.sword.SetActive(true);
		Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * L_8 = __this->get_attackScript_5();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = L_8->get_sword_4();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_9, (bool)1, /*hidden argument*/NULL);
		// attackScript.sorcerySword.SetActive(false);
		Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * L_10 = __this->get_attackScript_5();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = L_10->get_sorcerySword_5();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_11, (bool)0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_006f:
	{
		// attackScript.sword.SetActive(false);
		Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * L_12 = __this->get_attackScript_5();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = L_12->get_sword_4();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_13, (bool)0, /*hidden argument*/NULL);
		// attackScript.sorcerySword.SetActive(true);
		Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * L_14 = __this->get_attackScript_5();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = L_14->get_sorcerySword_5();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_15, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Playerweapons::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playerweapons__ctor_m11BED057F09155412073E9789323F425B661B701 (Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Int32 Score::get_ScoreNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Score_get_ScoreNumber_m71F008399D5FB50B3D6C39DF34E42DCD9146ACBB (Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * __this, const RuntimeMethod* method)
{
	{
		// public int ScoreNumber { get; private set; }
		int32_t L_0 = __this->get_U3CScoreNumberU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void Score::set_ScoreNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_set_ScoreNumber_m4ABC6271CC121A581E84E5201A8E3890375D2C23 (Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ScoreNumber { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CScoreNumberU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Void Score::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Awake_m481CF8ED9C2A4383D06EEEEE40EA8A0D6D4E85AA (Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Score_Awake_m481CF8ED9C2A4383D06EEEEE40EA8A0D6D4E85AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((Score_t72F7EE757BE7D4C7846803B3072753760AB6427F_StaticFields*)il2cpp_codegen_static_fields_for(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// audiomanage = GameObject.FindGameObjectWithTag("Audio").GetComponent<audiomanage>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D(_stringLiteralACDAC205F5E24CB75113C4B281A2C13F08B75159, /*hidden argument*/NULL);
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_1 = GameObject_GetComponent_Tisaudiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C_m07410B9FF809C92B8554B9C0A328C0EC4CC6930F(L_0, /*hidden argument*/GameObject_GetComponent_Tisaudiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C_m07410B9FF809C92B8554B9C0A328C0EC4CC6930F_RuntimeMethod_var);
		__this->set_audiomanage_13(L_1);
		// }
		return;
	}
}
// System.Void Score::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Start_m1821AC2C6C0505E9EEFA5DD52733BE5C3037AD9E (Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Score_Start_m1821AC2C6C0505E9EEFA5DD52733BE5C3037AD9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// HighScoreNumber = PlayerPrefs.GetInt("highscore", 0);
		int32_t L_0 = PlayerPrefs_GetInt_m1CBBA4989F15BA668EE24950D3C6B56E2ED20BD6(_stringLiteral4DD819B7801B7A76FD9F8FF96FD5B3F04726A5B7, 0, /*hidden argument*/NULL);
		__this->set_HighScoreNumber_12(L_0);
		// if (CurrentScoreText != null)
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_1 = __this->get_CurrentScoreText_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// CurrentScoreText.gameObject.SetActive(false);
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_3 = __this->get_CurrentScoreText_5();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, (bool)0, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// if (HighScoreText != null)
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_5 = __this->get_HighScoreText_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		// HighScoreText.gameObject.SetActive(false);
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_7 = __this->get_HighScoreText_6();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_7, /*hidden argument*/NULL);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_8, (bool)0, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// CurrentScoreText.text = ScoreNumber.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_9 = __this->get_CurrentScoreText_5();
		int32_t L_10 = Score_get_ScoreNumber_m71F008399D5FB50B3D6C39DF34E42DCD9146ACBB_inline(__this, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_0), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_9, L_11);
		// HighScoreText.text = "HIGH SCORE " + HighScoreNumber.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_12 = __this->get_HighScoreText_6();
		int32_t* L_13 = __this->get_address_of_HighScoreNumber_12();
		String_t* L_14 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_13, /*hidden argument*/NULL);
		String_t* L_15 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral39666B0975ECFACE1F6F3E4AE375286F14DD9C1D, L_14, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_15);
		// }
		return;
	}
}
// System.Void Score::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_OnTriggerEnter2D_mCFBE9F1449DFEEA7B69D473560A240656540463C (Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Score_OnTriggerEnter2D_mCFBE9F1449DFEEA7B69D473560A240656540463C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Coins")
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___other0;
		String_t* L_1 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_0, /*hidden argument*/NULL);
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, _stringLiteral2BEF474E8ADD043EDABBCD740EBFE95A8DFC2AFA, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// AddScore(200);
		Score_AddScore_mDFF2FB349F9539FB9F2772AFAC327700A70D43CC(__this, ((int32_t)200), /*hidden argument*/NULL);
		// Destroy(other.gameObject);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_3 = ___other0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_4, /*hidden argument*/NULL);
		// PlayCollectSound();
		Score_PlayCollectSound_m3699BDFD7E77CADB8668AE43359AB89F98DCE8A5(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002f:
	{
		// else if (other.tag == "Crystals")
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_5 = ___other0;
		String_t* L_6 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_5, /*hidden argument*/NULL);
		bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_6, _stringLiteralA3C2B2DBD55587FBE09C934BA1E7C1336CFFDE50, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		// AddScore(300);
		Score_AddScore_mDFF2FB349F9539FB9F2772AFAC327700A70D43CC(__this, ((int32_t)300), /*hidden argument*/NULL);
		// Destroy(other.gameObject);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_8 = ___other0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_9, /*hidden argument*/NULL);
		// PlayCollectSound();
		Score_PlayCollectSound_m3699BDFD7E77CADB8668AE43359AB89F98DCE8A5(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_005e:
	{
		// else if (other.tag == "waterOrb")
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_10 = ___other0;
		String_t* L_11 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_10, /*hidden argument*/NULL);
		bool L_12 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_11, _stringLiteral4CED366ED04E58AF33574DE99B99E30F4B58E9D0, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_008c;
		}
	}
	{
		// AddScore(400);
		Score_AddScore_mDFF2FB349F9539FB9F2772AFAC327700A70D43CC(__this, ((int32_t)400), /*hidden argument*/NULL);
		// Destroy(other.gameObject);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_13 = ___other0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_14, /*hidden argument*/NULL);
		// PlayCollectSound();
		Score_PlayCollectSound_m3699BDFD7E77CADB8668AE43359AB89F98DCE8A5(__this, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void Score::AddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_AddScore_mDFF2FB349F9539FB9F2772AFAC327700A70D43CC (Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * __this, int32_t ___points0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Score_AddScore_mDFF2FB349F9539FB9F2772AFAC327700A70D43CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// ScoreNumber += points;
		int32_t L_0 = Score_get_ScoreNumber_m71F008399D5FB50B3D6C39DF34E42DCD9146ACBB_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___points0;
		Score_set_ScoreNumber_m4ABC6271CC121A581E84E5201A8E3890375D2C23_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		// CurrentScoreText.text = ScoreNumber.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_2 = __this->get_CurrentScoreText_5();
		int32_t L_3 = Score_get_ScoreNumber_m71F008399D5FB50B3D6C39DF34E42DCD9146ACBB_inline(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_0), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_4);
		// if (ScoreNumber > HighScoreNumber)
		int32_t L_5 = Score_get_ScoreNumber_m71F008399D5FB50B3D6C39DF34E42DCD9146ACBB_inline(__this, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_HighScoreNumber_12();
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_0071;
		}
	}
	{
		// HighScoreNumber = ScoreNumber;
		int32_t L_7 = Score_get_ScoreNumber_m71F008399D5FB50B3D6C39DF34E42DCD9146ACBB_inline(__this, /*hidden argument*/NULL);
		__this->set_HighScoreNumber_12(L_7);
		// HighScoreText.text = "HIGH SCORE " + HighScoreNumber.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_8 = __this->get_HighScoreText_6();
		int32_t* L_9 = __this->get_address_of_HighScoreNumber_12();
		String_t* L_10 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_9, /*hidden argument*/NULL);
		String_t* L_11 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral39666B0975ECFACE1F6F3E4AE375286F14DD9C1D, L_10, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_11);
		// PlayerPrefs.SetInt("highscore", HighScoreNumber);
		int32_t L_12 = __this->get_HighScoreNumber_12();
		PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62(_stringLiteral4DD819B7801B7A76FD9F8FF96FD5B3F04726A5B7, L_12, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void Score::PlayCollectSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_PlayCollectSound_m3699BDFD7E77CADB8668AE43359AB89F98DCE8A5 (Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Score_PlayCollectSound_m3699BDFD7E77CADB8668AE43359AB89F98DCE8A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (audiomanage != null && audiomanage.playerCollect != null)
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_0 = __this->get_audiomanage_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_2 = __this->get_audiomanage_13();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_3 = L_2->get_playerCollect_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// audiomanage.PlaySFX(audiomanage.playerCollect);
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_5 = __this->get_audiomanage_13();
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_6 = __this->get_audiomanage_13();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_7 = L_6->get_playerCollect_9();
		audiomanage_PlaySFX_m1C970184FFE7A7D5BD271F11EE17CBF0C65E6911(L_5, L_7, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void Score::UpdateEndGameScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_UpdateEndGameScores_m1B675FAE0931AC435A86FE1887E92DA4A1BF9CC8 (Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Score_UpdateEndGameScores_m1B675FAE0931AC435A86FE1887E92DA4A1BF9CC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (EndGameScoreText != null)
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_0 = __this->get_EndGameScoreText_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		// EndGameScoreText.text = "YOUR SCORE: " + ScoreNumber.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_2 = __this->get_EndGameScoreText_7();
		int32_t L_3 = Score_get_ScoreNumber_m71F008399D5FB50B3D6C39DF34E42DCD9146ACBB_inline(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_5 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral282E9F1EAF5A364D47C022D164E00BBA0C02400E, L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_5);
	}

IL_0031:
	{
		// if (EndGameHighScoreText != null)
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_6 = __this->get_EndGameHighScoreText_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005f;
		}
	}
	{
		// EndGameHighScoreText.text = "HIGH SCORE: " + HighScoreNumber.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_8 = __this->get_EndGameHighScoreText_8();
		int32_t* L_9 = __this->get_address_of_HighScoreNumber_12();
		String_t* L_10 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_9, /*hidden argument*/NULL);
		String_t* L_11 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral7E90B60025F1250542C8998FB53AB8D5B98CF53F, L_10, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_11);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void Score::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mE2F9D741565800994F2DFAF0C4036F5E7ADA4D1F (Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void SelfDestroy::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelfDestroy_OnStateEnter_m0EDED9979791F6C8AD3AAEB1A4620A78F3A05450 (SelfDestroy_t914E0DDB257662ECE11BA3AA2280DE94351400CB * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SelfDestroy_OnStateEnter_m0EDED9979791F6C8AD3AAEB1A4620A78F3A05450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(animator.gameObject, stateInfo.length);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_0 = ___animator0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		float L_2 = AnimatorStateInfo_get_length_mBEC06803962C9F4E60611516424CD43D7155A56D((AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *)(&___stateInfo1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m09F51D8BDECFD2E8C618498EF7377029B669030D(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SelfDestroy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelfDestroy__ctor_mA2963A1A1A5A9D1D11BCB7CB0AF35046236540E7 (SelfDestroy_t914E0DDB257662ECE11BA3AA2280DE94351400CB * __this, const RuntimeMethod* method)
{
	{
		StateMachineBehaviour__ctor_m60289315ADCB494227D881EEFA6C4458BACA79DB(__this, /*hidden argument*/NULL);
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
// System.Void audiomanage::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void audiomanage_Update_m203CEB19E775A3DA917AAE56785A920EB21040F8 (audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * __this, const RuntimeMethod* method)
{
	{
		// if (gameStarted && !musicSource.isPlaying)
		bool L_0 = __this->get_gameStarted_19();
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_1 = __this->get_musicSource_4();
		bool L_2 = AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_003d;
		}
	}
	{
		// musicSource.clip = background;
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_3 = __this->get_musicSource_4();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_4 = __this->get_background_6();
		AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B(L_3, L_4, /*hidden argument*/NULL);
		// musicSource.loop = true;
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_5 = __this->get_musicSource_4();
		AudioSource_set_loop_m4DEE785C31213E964D7014B633F0FFC7E98B79F4(L_5, (bool)1, /*hidden argument*/NULL);
		// musicSource.Play();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_6 = __this->get_musicSource_4();
		AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164(L_6, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void audiomanage::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void audiomanage_StartGame_m6118077CD1387FA0B02E3E5BF355479B05034296 (audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * __this, const RuntimeMethod* method)
{
	{
		// gameStarted = true;
		__this->set_gameStarted_19((bool)1);
		// }
		return;
	}
}
// System.Void audiomanage::PlaySFX(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void audiomanage_PlaySFX_m1C970184FFE7A7D5BD271F11EE17CBF0C65E6911 (audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, const RuntimeMethod* method)
{
	{
		// SFXSource.PlayOneShot(clip);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = __this->get_SFXSource_5();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_1 = ___clip0;
		AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void audiomanage::StopSFX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void audiomanage_StopSFX_mBB8B2EFAD16F7FD27A6A93467FCAF4B71C769169 (audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * __this, const RuntimeMethod* method)
{
	{
		// SFXSource.Stop();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = __this->get_SFXSource_5();
		AudioSource_Stop_m488F7AA7F7067DE3EC92CEE3413E86C2E5940200(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void audiomanage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void audiomanage__ctor_m09745EFC05EB147C0CEF6B190A655D8C55F842A1 (audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Boolean laddermovement::get_playerClimbing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool laddermovement_get_playerClimbing_m09EBC9C7D0150AEE39E1ADA0BA621B268C2C3877 (laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852 * __this, const RuntimeMethod* method)
{
	{
		// public bool playerClimbing { get; private set; }
		bool L_0 = __this->get_U3CplayerClimbingU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void laddermovement::set_playerClimbing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void laddermovement_set_playerClimbing_m2363A0972D6CA46D42D8502754EA4B3CBE94150A (laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool playerClimbing { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CplayerClimbingU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void laddermovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void laddermovement_Start_mAFFD04FF4E2FD225BA82206CCE130F930CDB86DD (laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852 * __this, const RuntimeMethod* method)
{
	{
		// playerClimbing = false;
		laddermovement_set_playerClimbing_m2363A0972D6CA46D42D8502754EA4B3CBE94150A_inline(__this, (bool)0, /*hidden argument*/NULL);
		// nearLadder = false;
		__this->set_nearLadder_6((bool)0);
		// }
		return;
	}
}
// System.Void laddermovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void laddermovement_Update_m189D6B40E44307FE2A6C88FCF5BCF04F155D08CF (laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (laddermovement_Update_m189D6B40E44307FE2A6C88FCF5BCF04F155D08CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (nearLadder)
		bool L_0 = __this->get_nearLadder_6();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		// verticalInput = Input.GetAxis("Vertical");
		float L_1 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5, /*hidden argument*/NULL);
		__this->set_verticalInput_4(L_1);
		// if(Mathf.Abs(verticalInput) > 0f)
		float L_2 = __this->get_verticalInput_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_3 = fabsf(L_2);
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		// playerClimbing = true;
		laddermovement_set_playerClimbing_m2363A0972D6CA46D42D8502754EA4B3CBE94150A_inline(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void laddermovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void laddermovement_FixedUpdate_mBEA2440744D419925B9E653DDEBF6AF515907A30 (laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852 * __this, const RuntimeMethod* method)
{
	{
		// if (playerClimbing)
		bool L_0 = laddermovement_get_playerClimbing_m09EBC9C7D0150AEE39E1ADA0BA621B268C2C3877_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		// playerRb.velocity = new Vector2(playerRb.velocity.x, verticalInput * climbSpeed);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_1 = __this->get_playerRb_8();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_2 = __this->get_playerRb_8();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_0();
		float L_5 = __this->get_verticalInput_4();
		float L_6 = __this->get_climbSpeed_5();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_7), L_4, ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83(L_1, L_7, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void laddermovement::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void laddermovement_OnTriggerEnter2D_m599E69D19D04D26EA14027F581B60501896C0C02 (laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (laddermovement_OnTriggerEnter2D_m599E69D19D04D26EA14027F581B60501896C0C02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.CompareTag("Ladder"))
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___collision0;
		bool L_1 = Component_CompareTag_mD074608D7FEC96A53C57A456BA613EE01C31D4B7(L_0, _stringLiteral0BF3D1DE57B0E0D5550E4F198758D6FEE9204DC1, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// playerRb.gravityScale = 0f;
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_2 = __this->get_playerRb_8();
		Rigidbody2D_set_gravityScale_m4593B8D87314F00947B795AA442B90F1598B1104(L_2, (0.0f), /*hidden argument*/NULL);
		// nearLadder = true;
		__this->set_nearLadder_6((bool)1);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void laddermovement::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void laddermovement_OnTriggerExit2D_m913897E85A3F385F3568CEC5B49C67410D2A0A72 (laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (laddermovement_OnTriggerExit2D_m913897E85A3F385F3568CEC5B49C67410D2A0A72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.CompareTag("Ladder"))
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___collision0;
		bool L_1 = Component_CompareTag_mD074608D7FEC96A53C57A456BA613EE01C31D4B7(L_0, _stringLiteral0BF3D1DE57B0E0D5550E4F198758D6FEE9204DC1, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// nearLadder = false;
		__this->set_nearLadder_6((bool)0);
		// playerClimbing = false;
		laddermovement_set_playerClimbing_m2363A0972D6CA46D42D8502754EA4B3CBE94150A_inline(__this, (bool)0, /*hidden argument*/NULL);
		// playerRb.gravityScale = 3f;
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_2 = __this->get_playerRb_8();
		Rigidbody2D_set_gravityScale_m4593B8D87314F00947B795AA442B90F1598B1104(L_2, (3.0f), /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void laddermovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void laddermovement__ctor_mAFFF6DA801AC30DB2DE244074DCE4F68EB641B85 (laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852 * __this, const RuntimeMethod* method)
{
	{
		// public float climbSpeed = 6f;
		__this->set_climbSpeed_5((6.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void movingplatform::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movingplatform_Start_mB4EABA0E833C19C2F3BBB164106A43A439715EC9 (movingplatform_t0D588BFE0201AFB7B61C9145E7B9BA65425AE205 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (movingplatform_Start_mB4EABA0E833C19C2F3BBB164106A43A439715EC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// positionA = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		__this->set_positionA_6(L_1);
		// positionB = transform.position + destination;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = __this->get_destination_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_3, L_4, /*hidden argument*/NULL);
		__this->set_positionB_7(L_5);
		// targetPosition = positionB;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = __this->get_positionB_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_6, /*hidden argument*/NULL);
		__this->set_targetPosition_8(L_7);
		// }
		return;
	}
}
// System.Void movingplatform::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movingplatform_Update_m5A1878222C61CB5A8E294C0F952518CFF0DE7F4F (movingplatform_t0D588BFE0201AFB7B61C9145E7B9BA65425AE205 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (movingplatform_Update_m5A1878222C61CB5A8E294C0F952518CFF0DE7F4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Vector2.Distance(transform.position, positionA) < .1f)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = __this->get_positionA_6();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_3, /*hidden argument*/NULL);
		float L_5 = Vector2_Distance_mB07492BC42EC582754AD11554BE5B7F8D0E93CF4(L_2, L_4, /*hidden argument*/NULL);
		if ((!(((float)L_5) < ((float)(0.1f)))))
		{
			goto IL_0038;
		}
	}
	{
		// targetPosition = positionB;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = __this->get_positionB_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_6, /*hidden argument*/NULL);
		__this->set_targetPosition_8(L_7);
	}

IL_0038:
	{
		// if (Vector2.Distance(transform.position, positionB) < .1f)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = __this->get_positionB_7();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_11, /*hidden argument*/NULL);
		float L_13 = Vector2_Distance_mB07492BC42EC582754AD11554BE5B7F8D0E93CF4(L_10, L_12, /*hidden argument*/NULL);
		if ((!(((float)L_13) < ((float)(0.1f)))))
		{
			goto IL_0070;
		}
	}
	{
		// targetPosition = positionA;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = __this->get_positionA_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_14, /*hidden argument*/NULL);
		__this->set_targetPosition_8(L_15);
	}

IL_0070:
	{
		// transform.position = Vector2.MoveTowards(transform.position, targetPosition, speed * Time.deltaTime);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_18, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = __this->get_targetPosition_8();
		float L_21 = __this->get_speed_4();
		float L_22 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = Vector2_MoveTowards_m5CE85293E9619514164A685D1D4673E2A6E43DFA(L_19, L_20, ((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_23, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_16, L_24, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void movingplatform::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movingplatform_OnCollisionEnter2D_m506A36D0370A1DC931E4E20E6EFE17CC374D94A6 (movingplatform_t0D588BFE0201AFB7B61C9145E7B9BA65425AE205 * __this, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (movingplatform_OnCollisionEnter2D_m506A36D0370A1DC931E4E20E6EFE17CC374D94A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("Player"))
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_0 = ___collision0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_0, /*hidden argument*/NULL);
		bool L_2 = GameObject_CompareTag_mF66519C9DAE4CC8873C36A04C3CAF7DDEC3C7EFE(L_1, _stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// collision.transform.SetParent(this.transform);
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_3 = ___collision0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Collision2D_get_transform_m7008F633C99CE8A2694F88230713913244F5D262(L_3, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void movingplatform::OnCollisionExit2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movingplatform_OnCollisionExit2D_mEC19D6772A3569181F2C532C8A3F272C4C9F49FF (movingplatform_t0D588BFE0201AFB7B61C9145E7B9BA65425AE205 * __this, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (movingplatform_OnCollisionExit2D_mEC19D6772A3569181F2C532C8A3F272C4C9F49FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("Player"))
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_0 = ___collision0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_0, /*hidden argument*/NULL);
		bool L_2 = GameObject_CompareTag_mF66519C9DAE4CC8873C36A04C3CAF7DDEC3C7EFE(L_1, _stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// collision.transform.SetParent(null);
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_3 = ___collision0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Collision2D_get_transform_m7008F633C99CE8A2694F88230713913244F5D262(L_3, /*hidden argument*/NULL);
		Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979(L_4, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void movingplatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movingplatform__ctor_m9DE2AE405DA420ED6D475D59770BEFC8BB5ABCFF (movingplatform_t0D588BFE0201AFB7B61C9145E7B9BA65425AE205 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void playermanage::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playermanage_Awake_m39560A109DAD81D069B6E705BA7D2EE3DDC17FC5 (playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (playermanage_Awake_m39560A109DAD81D069B6E705BA7D2EE3DDC17FC5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isGameOver = false;
		((playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED_StaticFields*)il2cpp_codegen_static_fields_for(playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED_il2cpp_TypeInfo_var))->set_isGameOver_4((bool)0);
		// }
		return;
	}
}
// System.Void playermanage::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playermanage_Update_mFA7138DD3BEAF8D3FF314ADBA76385D8499E2F01 (playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (playermanage_Update_mFA7138DD3BEAF8D3FF314ADBA76385D8499E2F01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isGameOver && GameOverPanel != null)
		bool L_0 = ((playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED_StaticFields*)il2cpp_codegen_static_fields_for(playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED_il2cpp_TypeInfo_var))->get_isGameOver_4();
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_GameOverPanel_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// GameOverPanel.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_GameOverPanel_5();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0022:
	{
		// else if (isGameOver && GameStartPanel != null)
		bool L_4 = ((playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED_StaticFields*)il2cpp_codegen_static_fields_for(playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED_il2cpp_TypeInfo_var))->get_isGameOver_4();
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_GameStartPanel_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		// GameStartPanel.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_GameStartPanel_6();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)0, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void playermanage::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playermanage_StartGame_m009A898100E232677CF4F0FA8ACA446D86C43148 (playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (playermanage_StartGame_m009A898100E232677CF4F0FA8ACA446D86C43148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * V_0 = NULL;
	{
		// if (GameStartPanel != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_GameStartPanel_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// GameStartPanel.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_GameStartPanel_6();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// if (timer != null)
		timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * L_3 = __this->get_timer_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		// timer.gameObject.SetActive(true);
		timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * L_5 = __this->get_timer_8();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_6, (bool)1, /*hidden argument*/NULL);
		// timer.ResetTimer(); // Reset the timer
		timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * L_7 = __this->get_timer_8();
		timer_ResetTimer_m6EB5E593C5DE43CB2E87A613B6BDBC465B26DD3B(L_7, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// if (score != null)
		Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * L_8 = __this->get_score_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_007e;
		}
	}
	{
		// score.CurrentScoreText.gameObject.SetActive(true);
		Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * L_10 = __this->get_score_9();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_11 = L_10->get_CurrentScoreText_5();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_11, /*hidden argument*/NULL);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_12, (bool)1, /*hidden argument*/NULL);
		// score.HighScoreText.gameObject.SetActive(true);
		Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * L_13 = __this->get_score_9();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_14 = L_13->get_HighScoreText_6();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_14, /*hidden argument*/NULL);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_15, (bool)1, /*hidden argument*/NULL);
	}

IL_007e:
	{
		// isGameOver = false;
		((playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED_StaticFields*)il2cpp_codegen_static_fields_for(playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED_il2cpp_TypeInfo_var))->set_isGameOver_4((bool)0);
		// audiomanage instance = FindObjectOfType<audiomanage>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_16 = Object_FindObjectOfType_Tisaudiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C_m6B11E9D7150D09C76EAB555F0F095868B5B011D8(/*hidden argument*/Object_FindObjectOfType_Tisaudiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C_m6B11E9D7150D09C76EAB555F0F095868B5B011D8_RuntimeMethod_var);
		V_0 = L_16;
		// if (instance != null)
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_17 = V_0;
		bool L_18 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_17, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0099;
		}
	}
	{
		// instance.StartGame();
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_19 = V_0;
		audiomanage_StartGame_m6118077CD1387FA0B02E3E5BF355479B05034296(L_19, /*hidden argument*/NULL);
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void playermanage::RestartLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playermanage_RestartLevel_mA14727685E6D2480A3601A07B1ABB8E9B37BA084 (playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (playermanage_RestartLevel_mA14727685E6D2480A3601A07B1ABB8E9B37BA084_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// player.health = 3;
		Playerhealth_tB809B7DD44F2A3CBAF4090AB98F3858250A7592D * L_0 = __this->get_player_7();
		L_0->set_health_4(3);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var);
		Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  L_1 = SceneManager_GetActiveScene_mD583193D329EBF540D8AB8A062681B1C2AB5EA51(/*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = Scene_get_buildIndex_m764659943B7357F5D6C9165F68EDCFBBDDD6C3C2((Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void playermanage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playermanage__ctor_m141979D323F32342C240B1B70349EF53FC40A360 (playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void playermovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playermovement_Awake_m5B11967F50279D1D39EEE8A9D1349DBA643CC231 (playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (playermovement_Awake_m5B11967F50279D1D39EEE8A9D1349DBA643CC231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audiomanage = GameObject.FindGameObjectWithTag("Audio").GetComponent<audiomanage>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D(_stringLiteralACDAC205F5E24CB75113C4B281A2C13F08B75159, /*hidden argument*/NULL);
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_1 = GameObject_GetComponent_Tisaudiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C_m07410B9FF809C92B8554B9C0A328C0EC4CC6930F(L_0, /*hidden argument*/GameObject_GetComponent_Tisaudiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C_m07410B9FF809C92B8554B9C0A328C0EC4CC6930F_RuntimeMethod_var);
		__this->set_audiomanage_24(L_1);
		// }
		return;
	}
}
// System.Void playermovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playermovement_Start_m95A22B0B4999AA2DEC4456D872C8EF5BAE26DD12 (playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (playermovement_Start_m95A22B0B4999AA2DEC4456D872C8EF5BAE26DD12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerRb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_0 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		__this->set_playerRb_10(L_0);
		// timerScript = FindObjectOfType<timer>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * L_1 = Object_FindObjectOfType_Tistimer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF_mF0133F41F229C4867B0A5034DE2DEDD86D2EC208(/*hidden argument*/Object_FindObjectOfType_Tistimer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF_mF0133F41F229C4867B0A5034DE2DEDD86D2EC208_RuntimeMethod_var);
		__this->set_timerScript_21(L_1);
		// weaponsScript = ManageWeapons.GetComponent<Playerweapons>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_ManageWeapons_25();
		Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * L_3 = GameObject_GetComponent_TisPlayerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED_m2168DECB7048B3A3E06E3BD27EA62EBB74779633(L_2, /*hidden argument*/GameObject_GetComponent_TisPlayerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED_m2168DECB7048B3A3E06E3BD27EA62EBB74779633_RuntimeMethod_var);
		__this->set_weaponsScript_23(L_3);
		// attackScript = ManageWeapons.GetComponent<Playerattack>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_ManageWeapons_25();
		Playerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A * L_5 = GameObject_GetComponent_TisPlayerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A_mEEA96AA4CD8350D27556234CD4946C9EFFA54F40(L_4, /*hidden argument*/GameObject_GetComponent_TisPlayerattack_tF4D71CF6671804773854BA39CF9CD0BBC818844A_mEEA96AA4CD8350D27556234CD4946C9EFFA54F40_RuntimeMethod_var);
		__this->set_attackScript_22(L_5);
		// StartLevel(currentLevel);
		int32_t L_6 = __this->get_currentLevel_13();
		playermovement_StartLevel_m9CE8F096A1C4288750FB2DC7707DA651EF8B5BA0(__this, L_6, /*hidden argument*/NULL);
		// canMove = false;
		__this->set_canMove_9((bool)0);
		// }
		return;
	}
}
// System.Void playermovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playermovement_Update_m271A4FC276CB56C7888E86E831030A2AA0EE49B4 (playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (playermovement_Update_m271A4FC276CB56C7888E86E831030A2AA0EE49B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (audiomanage != null && audiomanage.gameStarted)
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_0 = __this->get_audiomanage_24();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_2 = __this->get_audiomanage_24();
		bool L_3 = L_2->get_gameStarted_19();
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// canMove = true;
		__this->set_canMove_9((bool)1);
	}

IL_0022:
	{
		// if (canMove)
		bool L_4 = __this->get_canMove_9();
		if (!L_4)
		{
			goto IL_0300;
		}
	}
	{
		// movementInputX = Input.GetAxisRaw("Horizontal");
		float L_5 = Input_GetAxisRaw_mC68301A9D93702F0C393E45C6337348062EACE21(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C, /*hidden argument*/NULL);
		__this->set_movementInputX_4(L_5);
		// movementInputY = Input.GetAxisRaw("Vertical");
		float L_6 = Input_GetAxisRaw_mC68301A9D93702F0C393E45C6337348062EACE21(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5, /*hidden argument*/NULL);
		__this->set_movementInputY_5(L_6);
		// if (movementInputX == 0)
		float L_7 = __this->get_movementInputX_4();
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_006d;
		}
	}
	{
		// GetComponent<Animator>().SetBool("isWalking", false);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_8 = Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719(__this, /*hidden argument*/Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719_RuntimeMethod_var);
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_8, _stringLiteral48842D0B8FC7D20CBC2C208BFC566E8C1E94781E, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_007e;
	}

IL_006d:
	{
		// GetComponent<Animator>().SetBool("isWalking", true);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_9 = Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719(__this, /*hidden argument*/Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719_RuntimeMethod_var);
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_9, _stringLiteral48842D0B8FC7D20CBC2C208BFC566E8C1E94781E, (bool)1, /*hidden argument*/NULL);
	}

IL_007e:
	{
		// if (!laddermovementScript.playerClimbing)
		laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852 * L_10 = __this->get_laddermovementScript_12();
		bool L_11 = laddermovement_get_playerClimbing_m09EBC9C7D0150AEE39E1ADA0BA621B268C2C3877_inline(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0160;
		}
	}
	{
		// if (Input.GetButtonDown("Vertical") && IsOnGround())
		bool L_12 = Input_GetButtonDown_m1E80BAC5CCBE9E0151491B8F8F5FFD6AB050BBF0(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00ff;
		}
	}
	{
		bool L_13 = playermovement_IsOnGround_mDC56B6676D61908A1036EE3DF9477B8F3E72D931(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00ff;
		}
	}
	{
		// playerRb.velocity = new Vector2(playerRb.velocity.x, jumpForce);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_14 = __this->get_playerRb_10();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_15 = __this->get_playerRb_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_x_0();
		float L_18 = __this->get_jumpForce_7();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_19), L_17, L_18, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83(L_14, L_19, /*hidden argument*/NULL);
		// if (audiomanage != null && audiomanage.playerJump != null)
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_20 = __this->get_audiomanage_24();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_20, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00ff;
		}
	}
	{
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_22 = __this->get_audiomanage_24();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_23 = L_22->get_playerJump_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_23, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00ff;
		}
	}
	{
		// audiomanage.PlaySFX(audiomanage.playerJump);
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_25 = __this->get_audiomanage_24();
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_26 = __this->get_audiomanage_24();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_27 = L_26->get_playerJump_7();
		audiomanage_PlaySFX_m1C970184FFE7A7D5BD271F11EE17CBF0C65E6911(L_25, L_27, /*hidden argument*/NULL);
	}

IL_00ff:
	{
		// if (Input.GetButtonUp("Vertical") && playerRb.velocity.y > 0f)
		bool L_28 = Input_GetButtonUp_m7AA360E8D19CAA86BF5623089968D2D63CFF74BB(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_01c6;
		}
	}
	{
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_29 = __this->get_playerRb_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_30 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_y_1();
		if ((!(((float)L_31) > ((float)(0.0f)))))
		{
			goto IL_01c6;
		}
	}
	{
		// playerRb.velocity = new Vector2(playerRb.velocity.x, playerRb.velocity.y * 0.5f);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_32 = __this->get_playerRb_10();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_33 = __this->get_playerRb_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_34 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_x_0();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_36 = __this->get_playerRb_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_37 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_36, /*hidden argument*/NULL);
		float L_38 = L_37.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_39), L_35, ((float)il2cpp_codegen_multiply((float)L_38, (float)(0.5f))), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83(L_32, L_39, /*hidden argument*/NULL);
		// }
		goto IL_01c6;
	}

IL_0160:
	{
		// playerRb.velocity = new Vector2(movementInputX * movementSpeed, movementInputY * laddermovementScript.climbSpeed);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_40 = __this->get_playerRb_10();
		float L_41 = __this->get_movementInputX_4();
		float L_42 = __this->get_movementSpeed_6();
		float L_43 = __this->get_movementInputY_5();
		laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852 * L_44 = __this->get_laddermovementScript_12();
		float L_45 = L_44->get_climbSpeed_5();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_46), ((float)il2cpp_codegen_multiply((float)L_41, (float)L_42)), ((float)il2cpp_codegen_multiply((float)L_43, (float)L_45)), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83(L_40, L_46, /*hidden argument*/NULL);
		// if (audiomanage != null && audiomanage.playerClimb != null)
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_47 = __this->get_audiomanage_24();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_48 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_47, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_01c6;
		}
	}
	{
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_49 = __this->get_audiomanage_24();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_50 = L_49->get_playerClimb_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_51 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_50, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_01c6;
		}
	}
	{
		// audiomanage.PlaySFX(audiomanage.playerClimb);
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_52 = __this->get_audiomanage_24();
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_53 = __this->get_audiomanage_24();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_54 = L_53->get_playerClimb_8();
		audiomanage_PlaySFX_m1C970184FFE7A7D5BD271F11EE17CBF0C65E6911(L_52, L_54, /*hidden argument*/NULL);
	}

IL_01c6:
	{
		// playerRb.velocity = new Vector2(movementInputX * movementSpeed, playerRb.velocity.y);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_55 = __this->get_playerRb_10();
		float L_56 = __this->get_movementInputX_4();
		float L_57 = __this->get_movementSpeed_6();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_58 = __this->get_playerRb_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_59 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_58, /*hidden argument*/NULL);
		float L_60 = L_59.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_61), ((float)il2cpp_codegen_multiply((float)L_56, (float)L_57)), L_60, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83(L_55, L_61, /*hidden argument*/NULL);
		// FlipPlayerDirection();
		playermovement_FlipPlayerDirection_m268C76E5DEBB494753026F20758FB65081CAF1D6(__this, /*hidden argument*/NULL);
		// if(levelEnded)
		bool L_62 = __this->get_levelEnded_16();
		if (!L_62)
		{
			goto IL_02f8;
		}
	}
	{
		// levelTimer -= Time.deltaTime;
		float L_63 = __this->get_levelTimer_17();
		float L_64 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_levelTimer_17(((float)il2cpp_codegen_subtract((float)L_63, (float)L_64)));
		// if(levelTimer < 0)
		float L_65 = __this->get_levelTimer_17();
		if ((!(((float)L_65) < ((float)(0.0f)))))
		{
			goto IL_02f8;
		}
	}
	{
		// levelEnded = false;
		__this->set_levelEnded_16((bool)0);
		// levelTimer = 2f;
		__this->set_levelTimer_17((2.0f));
		// ++currentLevel;
		int32_t L_66 = __this->get_currentLevel_13();
		__this->set_currentLevel_13(((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1)));
		// for(int i = 0; i < levels.Length; i++)
		V_0 = 0;
		goto IL_02ab;
	}

IL_024a:
	{
		// if(currentLevel == i)
		int32_t L_67 = __this->get_currentLevel_13();
		int32_t L_68 = V_0;
		if ((!(((uint32_t)L_67) == ((uint32_t)L_68))))
		{
			goto IL_0299;
		}
	}
	{
		// levels[i].SetActive(true);
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_69 = __this->get_levels_14();
		int32_t L_70 = V_0;
		int32_t L_71 = L_70;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_72 = (L_69)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_71));
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_72, (bool)1, /*hidden argument*/NULL);
		// transform.position = levels[i].transform.GetChild(levels[i].transform.childCount - 1).position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_73 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_74 = __this->get_levels_14();
		int32_t L_75 = V_0;
		int32_t L_76 = L_75;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_77 = (L_74)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_78 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_77, /*hidden argument*/NULL);
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_79 = __this->get_levels_14();
		int32_t L_80 = V_0;
		int32_t L_81 = L_80;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_82 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_83 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_82, /*hidden argument*/NULL);
		int32_t L_84 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_83, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_85 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_78, ((int32_t)il2cpp_codegen_subtract((int32_t)L_84, (int32_t)1)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_86 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_85, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_73, L_86, /*hidden argument*/NULL);
		// }
		goto IL_02a7;
	}

IL_0299:
	{
		// levels[i].SetActive(false);
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_87 = __this->get_levels_14();
		int32_t L_88 = V_0;
		int32_t L_89 = L_88;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_90 = (L_87)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_89));
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_90, (bool)0, /*hidden argument*/NULL);
	}

IL_02a7:
	{
		// for(int i = 0; i < levels.Length; i++)
		int32_t L_91 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1));
	}

IL_02ab:
	{
		// for(int i = 0; i < levels.Length; i++)
		int32_t L_92 = V_0;
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_93 = __this->get_levels_14();
		if ((((int32_t)L_92) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_93)->max_length)))))))
		{
			goto IL_024a;
		}
	}
	{
		// camBG.NextLevel(currentLevel);
		Holder_tBC04476AC1BB69D8FAF7EF93B49402612407F571 * L_94 = __this->get_camBG_20();
		int32_t L_95 = __this->get_currentLevel_13();
		Holder_NextLevel_mC3ECE13BD452E017C751CACDE1A25B6200DCE26A(L_94, L_95, /*hidden argument*/NULL);
		// levelEnd.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_96 = __this->get_levelEnd_15();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_96, (bool)0, /*hidden argument*/NULL);
		// if (timerScript != null)
		timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * L_97 = __this->get_timerScript_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_98 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_97, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_98)
		{
			goto IL_02ec;
		}
	}
	{
		// timerScript.ResetTimer();
		timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * L_99 = __this->get_timerScript_21();
		timer_ResetTimer_m6EB5E593C5DE43CB2E87A613B6BDBC465B26DD3B(L_99, /*hidden argument*/NULL);
	}

IL_02ec:
	{
		// StartLevel(currentLevel);
		int32_t L_100 = __this->get_currentLevel_13();
		playermovement_StartLevel_m9CE8F096A1C4288750FB2DC7707DA651EF8B5BA0(__this, L_100, /*hidden argument*/NULL);
	}

IL_02f8:
	{
		// if (gameEnded)
		bool L_101 = __this->get_gameEnded_19();
		// return;
		return;
	}

IL_0300:
	{
		// }
		return;
	}
}
// System.Boolean playermovement::IsOnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool playermovement_IsOnGround_mDC56B6676D61908A1036EE3DF9477B8F3E72D931 (playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (playermovement_IsOnGround_mDC56B6676D61908A1036EE3DF9477B8F3E72D931_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Physics2D.OverlapCircle(transform.position - transform.up * 0.5f, 0.2f, groundLayer);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_3, (0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_1, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_5, /*hidden argument*/NULL);
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_7 = __this->get_groundLayer_11();
		int32_t L_8 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_tB21970F986016656D66D2922594F336E1EE7D5C7_il2cpp_TypeInfo_var);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_9 = Physics2D_OverlapCircle_m627FB9EE641A74B942877F57DD2FED656FDA5DC9(L_6, (0.2f), L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void playermovement::FlipPlayerDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playermovement_FlipPlayerDirection_m268C76E5DEBB494753026F20758FB65081CAF1D6 (playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (facingRightDirection && movementInputX < 0f || !facingRightDirection && movementInputX > 0f)
		bool L_0 = __this->get_facingRightDirection_8();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		float L_1 = __this->get_movementInputX_4();
		if ((((float)L_1) < ((float)(0.0f))))
		{
			goto IL_002a;
		}
	}

IL_0015:
	{
		bool L_2 = __this->get_facingRightDirection_8();
		if (L_2)
		{
			goto IL_0061;
		}
	}
	{
		float L_3 = __this->get_movementInputX_4();
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0061;
		}
	}

IL_002a:
	{
		// facingRightDirection = !facingRightDirection;
		bool L_4 = __this->get_facingRightDirection_8();
		__this->set_facingRightDirection_8((bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0));
		// Vector3 localScale = transform.localScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// localScale.x *= -1f;
		float* L_7 = (&V_0)->get_address_of_x_2();
		float* L_8 = L_7;
		float L_9 = *((float*)L_8);
		*((float*)L_8) = (float)((float)il2cpp_codegen_multiply((float)L_9, (float)(-1.0f)));
		// transform.localScale = localScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_10, L_11, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void playermovement::StartLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playermovement_StartLevel_m9CE8F096A1C4288750FB2DC7707DA651EF8B5BA0 (playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * __this, int32_t ___levelIndex0, const RuntimeMethod* method)
{
	{
		// switch (levelIndex)
		int32_t L_0 = ___levelIndex0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___levelIndex0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0024;
	}

IL_000a:
	{
		// weaponsScript.SetWeapon(WeaponType.Sword);
		Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * L_2 = __this->get_weaponsScript_23();
		Playerweapons_SetWeapon_mB7F0C930A8078AA1B85376C1A98F359BC4B2A803(L_2, 1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0017:
	{
		// weaponsScript.SetWeapon(WeaponType.sorcerySword);
		Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * L_3 = __this->get_weaponsScript_23();
		Playerweapons_SetWeapon_mB7F0C930A8078AA1B85376C1A98F359BC4B2A803(L_3, 2, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0024:
	{
		// weaponsScript.SetWeapon(WeaponType.None);
		Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * L_4 = __this->get_weaponsScript_23();
		Playerweapons_SetWeapon_mB7F0C930A8078AA1B85376C1A98F359BC4B2A803(L_4, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void playermovement::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playermovement_OnTriggerEnter2D_m00389DB6B6A0FBBCCC1983794B9027D4861CF5AC (playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collide0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (playermovement_OnTriggerEnter2D_m00389DB6B6A0FBBCCC1983794B9027D4861CF5AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameEnded) return;
		bool L_0 = __this->get_gameEnded_19();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (gameEnded) return;
		return;
	}

IL_0009:
	{
		// if (collide.gameObject.CompareTag("Portal"))
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_1 = ___collide0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_1, /*hidden argument*/NULL);
		bool L_3 = GameObject_CompareTag_mF66519C9DAE4CC8873C36A04C3CAF7DDEC3C7EFE(L_2, _stringLiteralB55223C7BDC7651DC4282BA46FC1616DC273128B, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_006c;
		}
	}
	{
		// levelEnd.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_levelEnd_15();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, (bool)1, /*hidden argument*/NULL);
		// levelEnded = true;
		__this->set_levelEnded_16((bool)1);
		// if (audiomanage != null && audiomanage.levelComplete != null)
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_5 = __this->get_audiomanage_24();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_012d;
		}
	}
	{
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_7 = __this->get_audiomanage_24();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_8 = L_7->get_levelComplete_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_012d;
		}
	}
	{
		// audiomanage.PlaySFX(audiomanage.levelComplete);
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_10 = __this->get_audiomanage_24();
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_11 = __this->get_audiomanage_24();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_12 = L_11->get_levelComplete_17();
		audiomanage_PlaySFX_m1C970184FFE7A7D5BD271F11EE17CBF0C65E6911(L_10, L_12, /*hidden argument*/NULL);
		// }
		return;
	}

IL_006c:
	{
		// else if (collide.gameObject.CompareTag("Princess"))
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_13 = ___collide0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_13, /*hidden argument*/NULL);
		bool L_15 = GameObject_CompareTag_mF66519C9DAE4CC8873C36A04C3CAF7DDEC3C7EFE(L_14, _stringLiteralEC65A740F5A00CAFE7C7FB6DE725FE369C87F0DE, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_012d;
		}
	}
	{
		// gameEnd.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = __this->get_gameEnd_18();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_16, (bool)1, /*hidden argument*/NULL);
		// gameEnded = true;
		__this->set_gameEnded_19((bool)1);
		// if (timerScript != null)
		timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * L_17 = __this->get_timerScript_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_17, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00ae;
		}
	}
	{
		// timerScript.enabled = false;
		timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * L_19 = __this->get_timerScript_21();
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_19, (bool)0, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		// if (audiomanage != null && audiomanage.musicSource != null)
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_20 = __this->get_audiomanage_24();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_20, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00df;
		}
	}
	{
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_22 = __this->get_audiomanage_24();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_23 = L_22->get_musicSource_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_23, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00df;
		}
	}
	{
		// audiomanage.musicSource.Stop();
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_25 = __this->get_audiomanage_24();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_26 = L_25->get_musicSource_4();
		AudioSource_Stop_m488F7AA7F7067DE3EC92CEE3413E86C2E5940200(L_26, /*hidden argument*/NULL);
	}

IL_00df:
	{
		// if (audiomanage != null && audiomanage.gameComplete != null)
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_27 = __this->get_audiomanage_24();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_28 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_27, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0116;
		}
	}
	{
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_29 = __this->get_audiomanage_24();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_30 = L_29->get_gameComplete_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_31 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_30, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0116;
		}
	}
	{
		// audiomanage.PlaySFX(audiomanage.gameComplete);
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_32 = __this->get_audiomanage_24();
		audiomanage_t7E3CF4F8EFEE8FBCC7639490542C95B1EC751D2C * L_33 = __this->get_audiomanage_24();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_34 = L_33->get_gameComplete_18();
		audiomanage_PlaySFX_m1C970184FFE7A7D5BD271F11EE17CBF0C65E6911(L_32, L_34, /*hidden argument*/NULL);
	}

IL_0116:
	{
		// if (Score.instance != null)
		Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * L_35 = ((Score_t72F7EE757BE7D4C7846803B3072753760AB6427F_StaticFields*)il2cpp_codegen_static_fields_for(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_36 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_35, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_012d;
		}
	}
	{
		// Score.instance.UpdateEndGameScores();
		Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * L_37 = ((Score_t72F7EE757BE7D4C7846803B3072753760AB6427F_StaticFields*)il2cpp_codegen_static_fields_for(Score_t72F7EE757BE7D4C7846803B3072753760AB6427F_il2cpp_TypeInfo_var))->get_instance_4();
		Score_UpdateEndGameScores_m1B675FAE0931AC435A86FE1887E92DA4A1BF9CC8(L_37, /*hidden argument*/NULL);
	}

IL_012d:
	{
		// }
		return;
	}
}
// System.Boolean playermovement::IsGameEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool playermovement_IsGameEnded_m0CB9DBBD7874076A9D48D7E042E2EB93FCF27BEC (playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * __this, const RuntimeMethod* method)
{
	{
		// return gameEnded;
		bool L_0 = __this->get_gameEnded_19();
		return L_0;
	}
}
// System.Void playermovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playermovement__ctor_mA3DDC018664E9B312BC1D858F589E373AAFF1814 (playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * __this, const RuntimeMethod* method)
{
	{
		// private float movementSpeed = 8f;
		__this->set_movementSpeed_6((8.0f));
		// private float jumpForce = 14f;
		__this->set_jumpForce_7((14.0f));
		// private bool facingRightDirection = true;
		__this->set_facingRightDirection_8((bool)1);
		// float levelTimer = 2f;
		__this->set_levelTimer_17((2.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void timer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void timer_Start_m25648FFD8B94129AF357194D3B35624B5C20F990 (timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (timer_Start_m25648FFD8B94129AF357194D3B35624B5C20F990_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timerDisplay != null)
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_0 = __this->get_timerDisplay_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// timerDisplay.gameObject.SetActive(false);
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_2 = __this->get_timerDisplay_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void timer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void timer_Update_mDE49AA4A3DA13A34454D3315B0FD169C05E1E544 (timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (timer_Update_mDE49AA4A3DA13A34454D3315B0FD169C05E1E544_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (playermanage.isGameOver)
		bool L_0 = ((playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED_StaticFields*)il2cpp_codegen_static_fields_for(playermanage_tE52C060B2CF3EA178EAA07BA89AEB45038C9C9ED_il2cpp_TypeInfo_var))->get_isGameOver_4();
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if (timerDisplay.gameObject.activeSelf)
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_1 = __this->get_timerDisplay_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_1, /*hidden argument*/NULL);
		bool L_3 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		// if (timeLeft > 0)
		float L_4 = __this->get_timeLeft_5();
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		// timeLeft -= Time.deltaTime;
		float L_5 = __this->get_timeLeft_5();
		float L_6 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_timeLeft_5(((float)il2cpp_codegen_subtract((float)L_5, (float)L_6)));
		// UpdateTimerDisplay();
		timer_UpdateTimerDisplay_m22FBD1123F734EEE851E7ACACA637D9A8CFA6EA0(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0040:
	{
		// timeLeft = 0;
		__this->set_timeLeft_5((0.0f));
		// UpdateTimerDisplay();
		timer_UpdateTimerDisplay_m22FBD1123F734EEE851E7ACACA637D9A8CFA6EA0(__this, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void timer::ResetTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void timer_ResetTimer_m6EB5E593C5DE43CB2E87A613B6BDBC465B26DD3B (timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (timer_ResetTimer_m6EB5E593C5DE43CB2E87A613B6BDBC465B26DD3B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timeLeft = 120f;
		__this->set_timeLeft_5((120.0f));
		// UpdateTimerDisplay();
		timer_UpdateTimerDisplay_m22FBD1123F734EEE851E7ACACA637D9A8CFA6EA0(__this, /*hidden argument*/NULL);
		// if (timerDisplay != null)
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_0 = __this->get_timerDisplay_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// timerDisplay.gameObject.SetActive(true);
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_2 = __this->get_timerDisplay_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, (bool)1, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void timer::UpdateTimerDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void timer_UpdateTimerDisplay_m22FBD1123F734EEE851E7ACACA637D9A8CFA6EA0 (timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (timer_UpdateTimerDisplay_m22FBD1123F734EEE851E7ACACA637D9A8CFA6EA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (timerDisplay != null)
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_0 = __this->get_timerDisplay_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		// int mins = Mathf.FloorToInt(timeLeft / 60);
		float L_2 = __this->get_timeLeft_5();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_3 = Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C(((float)((float)L_2/(float)(60.0f))), /*hidden argument*/NULL);
		V_0 = L_3;
		// int secs = Mathf.FloorToInt(timeLeft % 60);
		float L_4 = __this->get_timeLeft_5();
		int32_t L_5 = Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C((fmodf(L_4, (60.0f))), /*hidden argument*/NULL);
		V_1 = L_5;
		// timerDisplay.text = string.Format("{0:00}:{1:00}", mins, secs);
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_6 = __this->get_timerDisplay_4();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral69C6FA8468D332A8338354A74CE92AA8DA8A642A, L_9, L_12, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_13);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void timer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void timer__ctor_m8A6521D83B4DCC8D41955FB81F7A63FD19A96571 (timer_tF26553EC754CCA46BA3CF7769ED04AE038A9FBAF * __this, const RuntimeMethod* method)
{
	{
		// private float timeLeft = 120f;
		__this->set_timeLeft_5((120.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool playermovement_IsGameEnded_m0CB9DBBD7874076A9D48D7E042E2EB93FCF27BEC_inline (playermovement_tC753A50BD05E0B2390D633EB245C42D0C1348829 * __this, const RuntimeMethod* method)
{
	{
		// return gameEnded;
		bool L_0 = __this->get_gameEnded_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Playerweapons_GetCurrentWeapon_mEAAEE69175A295F19C507CDF6ADF215D1A85683D_inline (Playerweapons_t4C90A70545E7E982FA6E3B08AB62D1EC29F974ED * __this, const RuntimeMethod* method)
{
	{
		// return currentWeapon;
		int32_t L_0 = __this->get_currentWeapon_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Score_get_ScoreNumber_m71F008399D5FB50B3D6C39DF34E42DCD9146ACBB_inline (Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * __this, const RuntimeMethod* method)
{
	{
		// public int ScoreNumber { get; private set; }
		int32_t L_0 = __this->get_U3CScoreNumberU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Score_set_ScoreNumber_m4ABC6271CC121A581E84E5201A8E3890375D2C23_inline (Score_t72F7EE757BE7D4C7846803B3072753760AB6427F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ScoreNumber { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CScoreNumberU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void laddermovement_set_playerClimbing_m2363A0972D6CA46D42D8502754EA4B3CBE94150A_inline (laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool playerClimbing { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CplayerClimbingU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool laddermovement_get_playerClimbing_m09EBC9C7D0150AEE39E1ADA0BA621B268C2C3877_inline (laddermovement_tA8C300DD5294C2B98A118622FEC098D8EAC9B852 * __this, const RuntimeMethod* method)
{
	{
		// public bool playerClimbing { get; private set; }
		bool L_0 = __this->get_U3CplayerClimbingU3Ek__BackingField_7();
		return L_0;
	}
}
