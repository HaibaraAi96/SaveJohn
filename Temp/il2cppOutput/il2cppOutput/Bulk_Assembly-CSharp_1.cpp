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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// UnityEngine.PostProcessing.RenderTextureFactory
struct RenderTextureFactory_t1946967824;
// System.Collections.Generic.HashSet`1<UnityEngine.RenderTexture>
struct HashSet_1_t673836907;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t1645055638;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.Texture
struct Texture_t3661962703;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t631007953;
// System.ArgumentException
struct ArgumentException_t132251570;
// UnityEngine.PostProcessing.ScreenSpaceReflectionComponent
struct ScreenSpaceReflectionComponent_t856094247;
// UnityEngine.PostProcessing.PostProcessingComponentCommandBuffer`1<UnityEngine.PostProcessing.ScreenSpaceReflectionModel>
struct PostProcessingComponentCommandBuffer_1_t6679325;
// UnityEngine.PostProcessing.PostProcessingComponentCommandBuffer`1<System.Object>
struct PostProcessingComponentCommandBuffer_1_t60440757;
// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.ScreenSpaceReflectionModel>
struct PostProcessingComponent_1_t2319520934;
// UnityEngine.PostProcessing.ScreenSpaceReflectionModel
struct ScreenSpaceReflectionModel_t3026344732;
// UnityEngine.PostProcessing.PostProcessingComponent`1<System.Object>
struct PostProcessingComponent_1_t2373282366;
// UnityEngine.PostProcessing.PostProcessingModel
struct PostProcessingModel_t540111976;
// UnityEngine.PostProcessing.PostProcessingContext
struct PostProcessingContext_t2014408948;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t2206337031;
// UnityEngine.PostProcessing.MaterialFactory
struct MaterialFactory_t2445948724;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings
struct ReflectionSettings_t282755190;
// UnityEngine.PostProcessing.TaaComponent
struct TaaComponent_t3791749658;
// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.AntialiasingModel>
struct PostProcessingComponentRenderTexture_1_t3089424429;
// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<System.Object>
struct PostProcessingComponentRenderTexture_1_t353423909;
// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.AntialiasingModel>
struct PostProcessingComponent_1_t814315590;
// UnityEngine.PostProcessing.AntialiasingModel
struct AntialiasingModel_t1521139388;
// System.Func`2<UnityEngine.Vector2,UnityEngine.Matrix4x4>
struct Func_2_t4093140010;
// System.String[]
struct StringU5BU5D_t1281789340;
// UnityEngine.RenderBuffer[]
struct RenderBufferU5BU5D_t1615831949;
// UnityEngine.PostProcessing.TrackballAttribute
struct TrackballAttribute_t219960417;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t3677895545;
// UnityEngine.PostProcessing.TrackballGroupAttribute
struct TrackballGroupAttribute_t624107828;
// UnityEngine.PostProcessing.UserLutComponent
struct UserLutComponent_t2843161776;
// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.UserLutModel>
struct PostProcessingComponentRenderTexture_1_t3238393121;
// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.UserLutModel>
struct PostProcessingComponent_1_t963284282;
// UnityEngine.PostProcessing.UserLutModel
struct UserLutModel_t1670108080;
// UnityEngine.PostProcessing.VignetteComponent
struct VignetteComponent_t3243642943;
// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.VignetteModel>
struct PostProcessingComponentRenderTexture_1_t118834922;
// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.VignetteModel>
struct PostProcessingComponent_1_t2138693379;
// UnityEngine.PostProcessing.VignetteModel
struct VignetteModel_t2845517177;
// UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t1877793759;
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t1347148391;
// UnitySampleAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_t4247650776;
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t3490362950;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// UnitySampleAssets.CrossPlatformInput.MobileControlRig
struct MobileControlRig_t2085015456;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct MobileInput_t3295884756;
// System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_t1132404690;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_t3275619249;
// System.Exception
struct Exception_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// UnityStandardAssets.Utility.FPSCounter
struct FPSCounter_t2351221284;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UserGUI
struct UserGUI_t1425096078;
// UnityEngine.WindZone
struct WindZone_t1835817526;
// VirtualJoystick
struct VirtualJoystick_t1105065689;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t2439009922;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3807901092;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// VolumeHandler
struct VolumeHandler_t704224452;
// UnityEngine.UI.Slider
struct Slider_t3903728902;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t3180273144;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t1982102915;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t2278926278;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material>
struct Dictionary_2_t125631422;
// UnityEngine.PostProcessing.PostProcessingProfile
struct PostProcessingProfile_t724195375;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis[]
struct VirtualAxisU5BU5D_t1034880030;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis,System.Collections.DictionaryEntry>
struct Transform_1_t4180259042;
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton[]
struct VirtualButtonU5BU5D_t1759394275;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton,System.Collections.DictionaryEntry>
struct Transform_1_t609805991;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// System.Collections.Generic.HashSet`1/Link<UnityEngine.RenderTexture>[]
struct LinkU5BU5D_t2504560647;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t4111643188;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.RenderTexture>
struct IEqualityComparer_1_t4216219451;
// System.Char[]
struct CharU5BU5D_t3528271667;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.Void
struct Void_t1185182177;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t4150874583;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* HashSet_1_t673836907_il2cpp_TypeInfo_var;
extern const RuntimeMethod* HashSet_1__ctor_m1993572700_RuntimeMethod_var;
extern const uint32_t RenderTextureFactory__ctor_m1345809438_MetadataUsageId;
extern String_t* _stringLiteral3857694337;
extern const uint32_t RenderTextureFactory_Get_m169036867_MetadataUsageId;
extern const RuntimeMethod* HashSet_1_Add_m2910627594_RuntimeMethod_var;
extern const uint32_t RenderTextureFactory_Get_m1772850884_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern const RuntimeMethod* HashSet_1_Contains_m3753409409_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Remove_m467255894_RuntimeMethod_var;
extern String_t* _stringLiteral1950092709;
extern const uint32_t RenderTextureFactory_Release_m717800481_MetadataUsageId;
extern const RuntimeMethod* HashSet_1_GetEnumerator_m4157320476_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3525666044_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m519760291_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Clear_m552370813_RuntimeMethod_var;
extern const uint32_t RenderTextureFactory_ReleaseAll_m3329667721_MetadataUsageId;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern const RuntimeMethod* PostProcessingComponentCommandBuffer_1__ctor_m1811253078_RuntimeMethod_var;
extern const uint32_t ScreenSpaceReflectionComponent__ctor_m2879296341_MetadataUsageId;
extern const RuntimeMethod* PostProcessingComponent_1_get_model_m3701723778_RuntimeMethod_var;
extern const uint32_t ScreenSpaceReflectionComponent_get_active_m243829711_MetadataUsageId;
extern String_t* _stringLiteral3996654635;
extern String_t* _stringLiteral1267771280;
extern String_t* _stringLiteral864486753;
extern String_t* _stringLiteral2430570694;
extern String_t* _stringLiteral2027286167;
extern const uint32_t ScreenSpaceReflectionComponent_OnEnable_m346974116_MetadataUsageId;
extern String_t* _stringLiteral2578318749;
extern const uint32_t ScreenSpaceReflectionComponent_GetName_m2112635201_MetadataUsageId;
extern RuntimeClass* Uniforms_t2970573890_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4_t3319028937_il2cpp_TypeInfo_var;
extern RuntimeClass* Matrix4x4_t1817901843_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3225738970;
extern const uint32_t ScreenSpaceReflectionComponent_PopulateCommandBuffer_m3120254331_MetadataUsageId;
extern String_t* _stringLiteral1292081225;
extern String_t* _stringLiteral3590979936;
extern String_t* _stringLiteral3812922687;
extern String_t* _stringLiteral3220650816;
extern String_t* _stringLiteral550721294;
extern String_t* _stringLiteral591083681;
extern String_t* _stringLiteral4226617077;
extern String_t* _stringLiteral2380614554;
extern String_t* _stringLiteral2030135646;
extern String_t* _stringLiteral2271957017;
extern String_t* _stringLiteral2534592956;
extern String_t* _stringLiteral3503710369;
extern String_t* _stringLiteral4081118877;
extern String_t* _stringLiteral3535566692;
extern String_t* _stringLiteral1464815389;
extern String_t* _stringLiteral3054324692;
extern String_t* _stringLiteral4044860599;
extern String_t* _stringLiteral2857999720;
extern String_t* _stringLiteral2381300568;
extern String_t* _stringLiteral1469005573;
extern String_t* _stringLiteral2262278099;
extern String_t* _stringLiteral601799897;
extern String_t* _stringLiteral3142184566;
extern String_t* _stringLiteral1562959127;
extern String_t* _stringLiteral2920707233;
extern String_t* _stringLiteral2060163631;
extern String_t* _stringLiteral3346007495;
extern String_t* _stringLiteral4055059096;
extern String_t* _stringLiteral1923191447;
extern String_t* _stringLiteral735047140;
extern String_t* _stringLiteral4037140854;
extern String_t* _stringLiteral2224716414;
extern String_t* _stringLiteral782944872;
extern String_t* _stringLiteral3700046144;
extern String_t* _stringLiteral1660455728;
extern const uint32_t Uniforms__cctor_m2613778490_MetadataUsageId;
struct ReflectionSettings_t282755190_marshaled_pinvoke;
struct ReflectionSettings_t282755190;;
struct ReflectionSettings_t282755190_marshaled_pinvoke;;
struct ReflectionSettings_t282755190_marshaled_com;
struct ReflectionSettings_t282755190_marshaled_com;;
extern RuntimeClass* RenderBufferU5BU5D_t1615831949_il2cpp_TypeInfo_var;
extern const RuntimeMethod* PostProcessingComponentRenderTexture_1__ctor_m1485528837_RuntimeMethod_var;
extern const uint32_t TaaComponent__ctor_m675959233_MetadataUsageId;
extern const RuntimeMethod* PostProcessingComponent_1_get_model_m3744888901_RuntimeMethod_var;
extern const uint32_t TaaComponent_get_active_m3051132930_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Uniforms_t3024963833_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Func_2_Invoke_m886748628_RuntimeMethod_var;
extern String_t* _stringLiteral1950142242;
extern const uint32_t TaaComponent_SetProjectionMatrix_m2316589171_MetadataUsageId;
extern RuntimeClass* Graphics_t783367614_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral504576554;
extern const uint32_t TaaComponent_Render_m2638556758_MetadataUsageId;
extern const uint32_t TaaComponent_GetPerspectiveProjectionMatrix_m2335334281_MetadataUsageId;
extern const uint32_t TaaComponent_GetOrthographicProjectionMatrix_m3494165154_MetadataUsageId;
extern const uint32_t TaaComponent_OnDisable_m1137752543_MetadataUsageId;
extern String_t* _stringLiteral108671656;
extern String_t* _stringLiteral1815697245;
extern String_t* _stringLiteral2390542409;
extern String_t* _stringLiteral3181956072;
extern String_t* _stringLiteral3184621405;
extern const uint32_t Uniforms__cctor_m1642638623_MetadataUsageId;
extern const RuntimeMethod* PostProcessingComponentRenderTexture_1__ctor_m3643001101_RuntimeMethod_var;
extern const uint32_t UserLutComponent__ctor_m3557887131_MetadataUsageId;
extern const RuntimeMethod* PostProcessingComponent_1_get_model_m2956985483_RuntimeMethod_var;
extern const uint32_t UserLutComponent_get_active_m1788341588_MetadataUsageId;
extern RuntimeClass* Uniforms_t1046717683_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3293862872;
extern const uint32_t UserLutComponent_Prepare_m1158977240_MetadataUsageId;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern const uint32_t UserLutComponent_OnGUI_m2614562252_MetadataUsageId;
extern String_t* _stringLiteral3922522743;
extern String_t* _stringLiteral2045738677;
extern const uint32_t Uniforms__cctor_m521797190_MetadataUsageId;
extern const RuntimeMethod* PostProcessingComponentRenderTexture_1__ctor_m2651217025_RuntimeMethod_var;
extern const uint32_t VignetteComponent__ctor_m3640704423_MetadataUsageId;
extern const RuntimeMethod* PostProcessingComponent_1_get_model_m2875105431_RuntimeMethod_var;
extern const uint32_t VignetteComponent_get_active_m4124729355_MetadataUsageId;
extern RuntimeClass* Uniforms_t2205824134_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3727145709;
extern String_t* _stringLiteral3652629709;
extern const uint32_t VignetteComponent_Prepare_m3452838302_MetadataUsageId;
extern String_t* _stringLiteral1569778134;
extern String_t* _stringLiteral1253245767;
extern String_t* _stringLiteral1478126650;
extern String_t* _stringLiteral4174543017;
extern String_t* _stringLiteral629754547;
extern const uint32_t Uniforms__cctor_m4093978548_MetadataUsageId;
extern RuntimeClass* StandaloneInput_t1877793759_il2cpp_TypeInfo_var;
extern RuntimeClass* CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var;
extern const uint32_t CrossPlatformInputManager__cctor_m3618134741_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_RegisterVirtualAxis_m3729018904_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_RegisterVirtualButton_m1038377797_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2730274217;
extern const uint32_t CrossPlatformInputManager_UnRegisterVirtualAxis_m2747492094_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_UnRegisterVirtualButton_m3381002917_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_VirtualAxisReference_m2488295043_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetAxis_m4045467026_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetAxisRaw_m3829676626_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetAxis_m3244021904_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetButton_m3105922025_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetButtonDown_m4159945301_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetButtonUp_m2950373926_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetButtonDown_m1084881269_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetButtonUp_m1215372893_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetAxisPositive_m758253539_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetAxisNegative_m4255594822_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetAxisZero_m691309370_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetAxis_m990722195_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_get_mousePosition_m1763278742_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetVirtualMousePositionX_m549431750_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetVirtualMousePositionY_m1873444571_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetVirtualMousePositionZ_m1931710842_MetadataUsageId;
extern const uint32_t VirtualAxis__ctor_m615583067_MetadataUsageId;
extern const uint32_t VirtualAxis_Remove_m969104513_MetadataUsageId;
extern const uint32_t VirtualButton_Remove_m189601859_MetadataUsageId;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Transform_t3600365921_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t MobileControlRig_EnableControlRig_m730570031_MetadataUsageId;
extern RuntimeClass* VirtualButton_t3490362950_il2cpp_TypeInfo_var;
extern const uint32_t MobileInput_AddButton_m1546634226_MetadataUsageId;
extern RuntimeClass* VirtualAxis_t1347148391_il2cpp_TypeInfo_var;
extern const uint32_t MobileInput_AddAxes_m882771614_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m623971441_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m3767727970_RuntimeMethod_var;
extern const uint32_t MobileInput_GetAxis_m2377156865_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m3713610116_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m670004451_RuntimeMethod_var;
extern const uint32_t MobileInput_SetButtonDown_m549868324_MetadataUsageId;
extern const uint32_t MobileInput_SetButtonUp_m2277393409_MetadataUsageId;
extern const uint32_t MobileInput_SetAxisPositive_m575333630_MetadataUsageId;
extern const uint32_t MobileInput_SetAxisNegative_m3582032963_MetadataUsageId;
extern const uint32_t MobileInput_SetAxisZero_m2564297357_MetadataUsageId;
extern const uint32_t MobileInput_SetAxis_m2576160133_MetadataUsageId;
extern const uint32_t MobileInput_GetButtonDown_m2362171045_MetadataUsageId;
extern const uint32_t MobileInput_GetButtonUp_m540826956_MetadataUsageId;
extern const uint32_t MobileInput_GetButton_m367691380_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t StandaloneInput_GetAxis_m3751418588_MetadataUsageId;
extern const uint32_t StandaloneInput_GetButton_m391408301_MetadataUsageId;
extern const uint32_t StandaloneInput_GetButtonDown_m4175847824_MetadataUsageId;
extern const uint32_t StandaloneInput_GetButtonUp_m3007880528_MetadataUsageId;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1111251549;
extern const uint32_t StandaloneInput_SetButtonDown_m1675172227_MetadataUsageId;
extern const uint32_t StandaloneInput_SetButtonUp_m999497337_MetadataUsageId;
extern const uint32_t StandaloneInput_SetAxisPositive_m3167045619_MetadataUsageId;
extern const uint32_t StandaloneInput_SetAxisNegative_m20802039_MetadataUsageId;
extern const uint32_t StandaloneInput_SetAxisZero_m2388999529_MetadataUsageId;
extern const uint32_t StandaloneInput_SetAxis_m1137062756_MetadataUsageId;
extern const uint32_t StandaloneInput_MousePosition_m3640947727_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t1132404690_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3275619249_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1598708476_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2884814283_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const uint32_t VirtualInput__ctor_m1053376383_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_Add_m1208951171_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1685793073_RuntimeMethod_var;
extern String_t* _stringLiteral1316003440;
extern String_t* _stringLiteral499939329;
extern const uint32_t VirtualInput_RegisterVirtualAxis_m4061627445_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Add_m943624655_RuntimeMethod_var;
extern String_t* _stringLiteral341380797;
extern const uint32_t VirtualInput_RegisterVirtualButton_m539054427_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Remove_m913603837_RuntimeMethod_var;
extern const uint32_t VirtualInput_UnRegisterVirtualAxis_m2615886023_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Remove_m3912794030_RuntimeMethod_var;
extern const uint32_t VirtualInput_UnRegisterVirtualButton_m1331827656_MetadataUsageId;
extern const uint32_t VirtualInput_VirtualAxisReference_m265738861_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var;
extern const uint32_t FPSCounter_Start_m2312014145_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3326640515;
extern const uint32_t FPSCounter_Update_m1910513279_MetadataUsageId;
extern String_t* _stringLiteral3987835886;
extern const uint32_t UserGUI__ctor_m4242641296_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisWindZone_t1835817526_m2382653558_RuntimeMethod_var;
extern const uint32_t UserGUI_Start_m1572715066_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisTransform_t3600365921_m3348034436_RuntimeMethod_var;
extern String_t* _stringLiteral3100627678;
extern const uint32_t UserGUI_Update_m2313764192_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisImage_t2670269651_m3171623875_RuntimeMethod_var;
extern const uint32_t VirtualJoystick_Start_m3963006704_MetadataUsageId;
extern RuntimeClass* RectTransformUtility_t1743242446_il2cpp_TypeInfo_var;
extern const uint32_t VirtualJoystick_OnDrag_m16569480_MetadataUsageId;
extern const uint32_t VirtualJoystick_OnPointerUp_m886126199_MetadataUsageId;
extern RuntimeClass* UnityAction_1_t1982102915_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisSlider_t3903728902_m865256018_RuntimeMethod_var;
extern const RuntimeMethod* VolumeHandler_SetVolume_m1972732037_RuntimeMethod_var;
extern const RuntimeMethod* UnityAction_1__ctor_m336053009_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_1_AddListener_m3008008915_RuntimeMethod_var;
extern String_t* _stringLiteral1151771902;
extern const uint32_t VolumeHandler_Start_m1555305517_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var;
extern const uint32_t VolumeHandler_SetVolume_m1972732037_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_1_RemoveListener_m4190968495_RuntimeMethod_var;
extern const uint32_t VolumeHandler_OnDestroy_m3857069918_MetadataUsageId;

struct Int32U5BU5D_t385246372;
struct RenderBufferU5BU5D_t1615831949;
struct StringU5BU5D_t1281789340;
struct ImageU5BU5D_t2439009922;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef UNIFORMS_T2970573890_H
#define UNIFORMS_T2970573890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms
struct  Uniforms_t2970573890  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t2970573890_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_RayStepSize
	int32_t ____RayStepSize_0;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_AdditiveReflection
	int32_t ____AdditiveReflection_1;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_BilateralUpsampling
	int32_t ____BilateralUpsampling_2;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_TreatBackfaceHitAsMiss
	int32_t ____TreatBackfaceHitAsMiss_3;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_AllowBackwardsRays
	int32_t ____AllowBackwardsRays_4;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_TraceBehindObjects
	int32_t ____TraceBehindObjects_5;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_MaxSteps
	int32_t ____MaxSteps_6;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FullResolutionFiltering
	int32_t ____FullResolutionFiltering_7;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_HalfResolution
	int32_t ____HalfResolution_8;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_HighlightSuppression
	int32_t ____HighlightSuppression_9;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_PixelsPerMeterAtOneMeter
	int32_t ____PixelsPerMeterAtOneMeter_10;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ScreenEdgeFading
	int32_t ____ScreenEdgeFading_11;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ReflectionBlur
	int32_t ____ReflectionBlur_12;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_MaxRayTraceDistance
	int32_t ____MaxRayTraceDistance_13;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FadeDistance
	int32_t ____FadeDistance_14;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_LayerThickness
	int32_t ____LayerThickness_15;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_SSRMultiplier
	int32_t ____SSRMultiplier_16;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FresnelFade
	int32_t ____FresnelFade_17;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FresnelFadePower
	int32_t ____FresnelFadePower_18;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ReflectionBufferSize
	int32_t ____ReflectionBufferSize_19;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ScreenSize
	int32_t ____ScreenSize_20;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_InvScreenSize
	int32_t ____InvScreenSize_21;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ProjInfo
	int32_t ____ProjInfo_22;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_CameraClipInfo
	int32_t ____CameraClipInfo_23;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ProjectToPixelMatrix
	int32_t ____ProjectToPixelMatrix_24;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_WorldToCameraMatrix
	int32_t ____WorldToCameraMatrix_25;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_CameraToWorldMatrix
	int32_t ____CameraToWorldMatrix_26;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_Axis
	int32_t ____Axis_27;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_CurrentMipLevel
	int32_t ____CurrentMipLevel_28;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_NormalAndRoughnessTexture
	int32_t ____NormalAndRoughnessTexture_29;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_HitPointTexture
	int32_t ____HitPointTexture_30;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_BlurTexture
	int32_t ____BlurTexture_31;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FilteredReflections
	int32_t ____FilteredReflections_32;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FinalReflectionTexture
	int32_t ____FinalReflectionTexture_33;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_TempTexture
	int32_t ____TempTexture_34;

public:
	inline static int32_t get_offset_of__RayStepSize_0() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____RayStepSize_0)); }
	inline int32_t get__RayStepSize_0() const { return ____RayStepSize_0; }
	inline int32_t* get_address_of__RayStepSize_0() { return &____RayStepSize_0; }
	inline void set__RayStepSize_0(int32_t value)
	{
		____RayStepSize_0 = value;
	}

	inline static int32_t get_offset_of__AdditiveReflection_1() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____AdditiveReflection_1)); }
	inline int32_t get__AdditiveReflection_1() const { return ____AdditiveReflection_1; }
	inline int32_t* get_address_of__AdditiveReflection_1() { return &____AdditiveReflection_1; }
	inline void set__AdditiveReflection_1(int32_t value)
	{
		____AdditiveReflection_1 = value;
	}

	inline static int32_t get_offset_of__BilateralUpsampling_2() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____BilateralUpsampling_2)); }
	inline int32_t get__BilateralUpsampling_2() const { return ____BilateralUpsampling_2; }
	inline int32_t* get_address_of__BilateralUpsampling_2() { return &____BilateralUpsampling_2; }
	inline void set__BilateralUpsampling_2(int32_t value)
	{
		____BilateralUpsampling_2 = value;
	}

	inline static int32_t get_offset_of__TreatBackfaceHitAsMiss_3() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____TreatBackfaceHitAsMiss_3)); }
	inline int32_t get__TreatBackfaceHitAsMiss_3() const { return ____TreatBackfaceHitAsMiss_3; }
	inline int32_t* get_address_of__TreatBackfaceHitAsMiss_3() { return &____TreatBackfaceHitAsMiss_3; }
	inline void set__TreatBackfaceHitAsMiss_3(int32_t value)
	{
		____TreatBackfaceHitAsMiss_3 = value;
	}

	inline static int32_t get_offset_of__AllowBackwardsRays_4() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____AllowBackwardsRays_4)); }
	inline int32_t get__AllowBackwardsRays_4() const { return ____AllowBackwardsRays_4; }
	inline int32_t* get_address_of__AllowBackwardsRays_4() { return &____AllowBackwardsRays_4; }
	inline void set__AllowBackwardsRays_4(int32_t value)
	{
		____AllowBackwardsRays_4 = value;
	}

	inline static int32_t get_offset_of__TraceBehindObjects_5() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____TraceBehindObjects_5)); }
	inline int32_t get__TraceBehindObjects_5() const { return ____TraceBehindObjects_5; }
	inline int32_t* get_address_of__TraceBehindObjects_5() { return &____TraceBehindObjects_5; }
	inline void set__TraceBehindObjects_5(int32_t value)
	{
		____TraceBehindObjects_5 = value;
	}

	inline static int32_t get_offset_of__MaxSteps_6() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____MaxSteps_6)); }
	inline int32_t get__MaxSteps_6() const { return ____MaxSteps_6; }
	inline int32_t* get_address_of__MaxSteps_6() { return &____MaxSteps_6; }
	inline void set__MaxSteps_6(int32_t value)
	{
		____MaxSteps_6 = value;
	}

	inline static int32_t get_offset_of__FullResolutionFiltering_7() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____FullResolutionFiltering_7)); }
	inline int32_t get__FullResolutionFiltering_7() const { return ____FullResolutionFiltering_7; }
	inline int32_t* get_address_of__FullResolutionFiltering_7() { return &____FullResolutionFiltering_7; }
	inline void set__FullResolutionFiltering_7(int32_t value)
	{
		____FullResolutionFiltering_7 = value;
	}

	inline static int32_t get_offset_of__HalfResolution_8() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____HalfResolution_8)); }
	inline int32_t get__HalfResolution_8() const { return ____HalfResolution_8; }
	inline int32_t* get_address_of__HalfResolution_8() { return &____HalfResolution_8; }
	inline void set__HalfResolution_8(int32_t value)
	{
		____HalfResolution_8 = value;
	}

	inline static int32_t get_offset_of__HighlightSuppression_9() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____HighlightSuppression_9)); }
	inline int32_t get__HighlightSuppression_9() const { return ____HighlightSuppression_9; }
	inline int32_t* get_address_of__HighlightSuppression_9() { return &____HighlightSuppression_9; }
	inline void set__HighlightSuppression_9(int32_t value)
	{
		____HighlightSuppression_9 = value;
	}

	inline static int32_t get_offset_of__PixelsPerMeterAtOneMeter_10() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____PixelsPerMeterAtOneMeter_10)); }
	inline int32_t get__PixelsPerMeterAtOneMeter_10() const { return ____PixelsPerMeterAtOneMeter_10; }
	inline int32_t* get_address_of__PixelsPerMeterAtOneMeter_10() { return &____PixelsPerMeterAtOneMeter_10; }
	inline void set__PixelsPerMeterAtOneMeter_10(int32_t value)
	{
		____PixelsPerMeterAtOneMeter_10 = value;
	}

	inline static int32_t get_offset_of__ScreenEdgeFading_11() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____ScreenEdgeFading_11)); }
	inline int32_t get__ScreenEdgeFading_11() const { return ____ScreenEdgeFading_11; }
	inline int32_t* get_address_of__ScreenEdgeFading_11() { return &____ScreenEdgeFading_11; }
	inline void set__ScreenEdgeFading_11(int32_t value)
	{
		____ScreenEdgeFading_11 = value;
	}

	inline static int32_t get_offset_of__ReflectionBlur_12() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____ReflectionBlur_12)); }
	inline int32_t get__ReflectionBlur_12() const { return ____ReflectionBlur_12; }
	inline int32_t* get_address_of__ReflectionBlur_12() { return &____ReflectionBlur_12; }
	inline void set__ReflectionBlur_12(int32_t value)
	{
		____ReflectionBlur_12 = value;
	}

	inline static int32_t get_offset_of__MaxRayTraceDistance_13() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____MaxRayTraceDistance_13)); }
	inline int32_t get__MaxRayTraceDistance_13() const { return ____MaxRayTraceDistance_13; }
	inline int32_t* get_address_of__MaxRayTraceDistance_13() { return &____MaxRayTraceDistance_13; }
	inline void set__MaxRayTraceDistance_13(int32_t value)
	{
		____MaxRayTraceDistance_13 = value;
	}

	inline static int32_t get_offset_of__FadeDistance_14() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____FadeDistance_14)); }
	inline int32_t get__FadeDistance_14() const { return ____FadeDistance_14; }
	inline int32_t* get_address_of__FadeDistance_14() { return &____FadeDistance_14; }
	inline void set__FadeDistance_14(int32_t value)
	{
		____FadeDistance_14 = value;
	}

	inline static int32_t get_offset_of__LayerThickness_15() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____LayerThickness_15)); }
	inline int32_t get__LayerThickness_15() const { return ____LayerThickness_15; }
	inline int32_t* get_address_of__LayerThickness_15() { return &____LayerThickness_15; }
	inline void set__LayerThickness_15(int32_t value)
	{
		____LayerThickness_15 = value;
	}

	inline static int32_t get_offset_of__SSRMultiplier_16() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____SSRMultiplier_16)); }
	inline int32_t get__SSRMultiplier_16() const { return ____SSRMultiplier_16; }
	inline int32_t* get_address_of__SSRMultiplier_16() { return &____SSRMultiplier_16; }
	inline void set__SSRMultiplier_16(int32_t value)
	{
		____SSRMultiplier_16 = value;
	}

	inline static int32_t get_offset_of__FresnelFade_17() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____FresnelFade_17)); }
	inline int32_t get__FresnelFade_17() const { return ____FresnelFade_17; }
	inline int32_t* get_address_of__FresnelFade_17() { return &____FresnelFade_17; }
	inline void set__FresnelFade_17(int32_t value)
	{
		____FresnelFade_17 = value;
	}

	inline static int32_t get_offset_of__FresnelFadePower_18() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____FresnelFadePower_18)); }
	inline int32_t get__FresnelFadePower_18() const { return ____FresnelFadePower_18; }
	inline int32_t* get_address_of__FresnelFadePower_18() { return &____FresnelFadePower_18; }
	inline void set__FresnelFadePower_18(int32_t value)
	{
		____FresnelFadePower_18 = value;
	}

	inline static int32_t get_offset_of__ReflectionBufferSize_19() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____ReflectionBufferSize_19)); }
	inline int32_t get__ReflectionBufferSize_19() const { return ____ReflectionBufferSize_19; }
	inline int32_t* get_address_of__ReflectionBufferSize_19() { return &____ReflectionBufferSize_19; }
	inline void set__ReflectionBufferSize_19(int32_t value)
	{
		____ReflectionBufferSize_19 = value;
	}

	inline static int32_t get_offset_of__ScreenSize_20() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____ScreenSize_20)); }
	inline int32_t get__ScreenSize_20() const { return ____ScreenSize_20; }
	inline int32_t* get_address_of__ScreenSize_20() { return &____ScreenSize_20; }
	inline void set__ScreenSize_20(int32_t value)
	{
		____ScreenSize_20 = value;
	}

	inline static int32_t get_offset_of__InvScreenSize_21() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____InvScreenSize_21)); }
	inline int32_t get__InvScreenSize_21() const { return ____InvScreenSize_21; }
	inline int32_t* get_address_of__InvScreenSize_21() { return &____InvScreenSize_21; }
	inline void set__InvScreenSize_21(int32_t value)
	{
		____InvScreenSize_21 = value;
	}

	inline static int32_t get_offset_of__ProjInfo_22() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____ProjInfo_22)); }
	inline int32_t get__ProjInfo_22() const { return ____ProjInfo_22; }
	inline int32_t* get_address_of__ProjInfo_22() { return &____ProjInfo_22; }
	inline void set__ProjInfo_22(int32_t value)
	{
		____ProjInfo_22 = value;
	}

	inline static int32_t get_offset_of__CameraClipInfo_23() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____CameraClipInfo_23)); }
	inline int32_t get__CameraClipInfo_23() const { return ____CameraClipInfo_23; }
	inline int32_t* get_address_of__CameraClipInfo_23() { return &____CameraClipInfo_23; }
	inline void set__CameraClipInfo_23(int32_t value)
	{
		____CameraClipInfo_23 = value;
	}

	inline static int32_t get_offset_of__ProjectToPixelMatrix_24() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____ProjectToPixelMatrix_24)); }
	inline int32_t get__ProjectToPixelMatrix_24() const { return ____ProjectToPixelMatrix_24; }
	inline int32_t* get_address_of__ProjectToPixelMatrix_24() { return &____ProjectToPixelMatrix_24; }
	inline void set__ProjectToPixelMatrix_24(int32_t value)
	{
		____ProjectToPixelMatrix_24 = value;
	}

	inline static int32_t get_offset_of__WorldToCameraMatrix_25() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____WorldToCameraMatrix_25)); }
	inline int32_t get__WorldToCameraMatrix_25() const { return ____WorldToCameraMatrix_25; }
	inline int32_t* get_address_of__WorldToCameraMatrix_25() { return &____WorldToCameraMatrix_25; }
	inline void set__WorldToCameraMatrix_25(int32_t value)
	{
		____WorldToCameraMatrix_25 = value;
	}

	inline static int32_t get_offset_of__CameraToWorldMatrix_26() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____CameraToWorldMatrix_26)); }
	inline int32_t get__CameraToWorldMatrix_26() const { return ____CameraToWorldMatrix_26; }
	inline int32_t* get_address_of__CameraToWorldMatrix_26() { return &____CameraToWorldMatrix_26; }
	inline void set__CameraToWorldMatrix_26(int32_t value)
	{
		____CameraToWorldMatrix_26 = value;
	}

	inline static int32_t get_offset_of__Axis_27() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____Axis_27)); }
	inline int32_t get__Axis_27() const { return ____Axis_27; }
	inline int32_t* get_address_of__Axis_27() { return &____Axis_27; }
	inline void set__Axis_27(int32_t value)
	{
		____Axis_27 = value;
	}

	inline static int32_t get_offset_of__CurrentMipLevel_28() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____CurrentMipLevel_28)); }
	inline int32_t get__CurrentMipLevel_28() const { return ____CurrentMipLevel_28; }
	inline int32_t* get_address_of__CurrentMipLevel_28() { return &____CurrentMipLevel_28; }
	inline void set__CurrentMipLevel_28(int32_t value)
	{
		____CurrentMipLevel_28 = value;
	}

	inline static int32_t get_offset_of__NormalAndRoughnessTexture_29() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____NormalAndRoughnessTexture_29)); }
	inline int32_t get__NormalAndRoughnessTexture_29() const { return ____NormalAndRoughnessTexture_29; }
	inline int32_t* get_address_of__NormalAndRoughnessTexture_29() { return &____NormalAndRoughnessTexture_29; }
	inline void set__NormalAndRoughnessTexture_29(int32_t value)
	{
		____NormalAndRoughnessTexture_29 = value;
	}

	inline static int32_t get_offset_of__HitPointTexture_30() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____HitPointTexture_30)); }
	inline int32_t get__HitPointTexture_30() const { return ____HitPointTexture_30; }
	inline int32_t* get_address_of__HitPointTexture_30() { return &____HitPointTexture_30; }
	inline void set__HitPointTexture_30(int32_t value)
	{
		____HitPointTexture_30 = value;
	}

	inline static int32_t get_offset_of__BlurTexture_31() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____BlurTexture_31)); }
	inline int32_t get__BlurTexture_31() const { return ____BlurTexture_31; }
	inline int32_t* get_address_of__BlurTexture_31() { return &____BlurTexture_31; }
	inline void set__BlurTexture_31(int32_t value)
	{
		____BlurTexture_31 = value;
	}

	inline static int32_t get_offset_of__FilteredReflections_32() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____FilteredReflections_32)); }
	inline int32_t get__FilteredReflections_32() const { return ____FilteredReflections_32; }
	inline int32_t* get_address_of__FilteredReflections_32() { return &____FilteredReflections_32; }
	inline void set__FilteredReflections_32(int32_t value)
	{
		____FilteredReflections_32 = value;
	}

	inline static int32_t get_offset_of__FinalReflectionTexture_33() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____FinalReflectionTexture_33)); }
	inline int32_t get__FinalReflectionTexture_33() const { return ____FinalReflectionTexture_33; }
	inline int32_t* get_address_of__FinalReflectionTexture_33() { return &____FinalReflectionTexture_33; }
	inline void set__FinalReflectionTexture_33(int32_t value)
	{
		____FinalReflectionTexture_33 = value;
	}

	inline static int32_t get_offset_of__TempTexture_34() { return static_cast<int32_t>(offsetof(Uniforms_t2970573890_StaticFields, ____TempTexture_34)); }
	inline int32_t get__TempTexture_34() const { return ____TempTexture_34; }
	inline int32_t* get_address_of__TempTexture_34() { return &____TempTexture_34; }
	inline void set__TempTexture_34(int32_t value)
	{
		____TempTexture_34 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T2970573890_H
#ifndef MATERIALFACTORY_T2445948724_H
#define MATERIALFACTORY_T2445948724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MaterialFactory
struct  MaterialFactory_t2445948724  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material> UnityEngine.PostProcessing.MaterialFactory::m_Materials
	Dictionary_2_t125631422 * ___m_Materials_0;

public:
	inline static int32_t get_offset_of_m_Materials_0() { return static_cast<int32_t>(offsetof(MaterialFactory_t2445948724, ___m_Materials_0)); }
	inline Dictionary_2_t125631422 * get_m_Materials_0() const { return ___m_Materials_0; }
	inline Dictionary_2_t125631422 ** get_address_of_m_Materials_0() { return &___m_Materials_0; }
	inline void set_m_Materials_0(Dictionary_2_t125631422 * value)
	{
		___m_Materials_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Materials_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALFACTORY_T2445948724_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef POSTPROCESSINGCONTEXT_T2014408948_H
#define POSTPROCESSINGCONTEXT_T2014408948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingContext
struct  PostProcessingContext_t2014408948  : public RuntimeObject
{
public:
	// UnityEngine.PostProcessing.PostProcessingProfile UnityEngine.PostProcessing.PostProcessingContext::profile
	PostProcessingProfile_t724195375 * ___profile_0;
	// UnityEngine.Camera UnityEngine.PostProcessing.PostProcessingContext::camera
	Camera_t4157153871 * ___camera_1;
	// UnityEngine.PostProcessing.MaterialFactory UnityEngine.PostProcessing.PostProcessingContext::materialFactory
	MaterialFactory_t2445948724 * ___materialFactory_2;
	// UnityEngine.PostProcessing.RenderTextureFactory UnityEngine.PostProcessing.PostProcessingContext::renderTextureFactory
	RenderTextureFactory_t1946967824 * ___renderTextureFactory_3;
	// System.Boolean UnityEngine.PostProcessing.PostProcessingContext::<interrupted>k__BackingField
	bool ___U3CinterruptedU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_profile_0() { return static_cast<int32_t>(offsetof(PostProcessingContext_t2014408948, ___profile_0)); }
	inline PostProcessingProfile_t724195375 * get_profile_0() const { return ___profile_0; }
	inline PostProcessingProfile_t724195375 ** get_address_of_profile_0() { return &___profile_0; }
	inline void set_profile_0(PostProcessingProfile_t724195375 * value)
	{
		___profile_0 = value;
		Il2CppCodeGenWriteBarrier((&___profile_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(PostProcessingContext_t2014408948, ___camera_1)); }
	inline Camera_t4157153871 * get_camera_1() const { return ___camera_1; }
	inline Camera_t4157153871 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t4157153871 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}

	inline static int32_t get_offset_of_materialFactory_2() { return static_cast<int32_t>(offsetof(PostProcessingContext_t2014408948, ___materialFactory_2)); }
	inline MaterialFactory_t2445948724 * get_materialFactory_2() const { return ___materialFactory_2; }
	inline MaterialFactory_t2445948724 ** get_address_of_materialFactory_2() { return &___materialFactory_2; }
	inline void set_materialFactory_2(MaterialFactory_t2445948724 * value)
	{
		___materialFactory_2 = value;
		Il2CppCodeGenWriteBarrier((&___materialFactory_2), value);
	}

	inline static int32_t get_offset_of_renderTextureFactory_3() { return static_cast<int32_t>(offsetof(PostProcessingContext_t2014408948, ___renderTextureFactory_3)); }
	inline RenderTextureFactory_t1946967824 * get_renderTextureFactory_3() const { return ___renderTextureFactory_3; }
	inline RenderTextureFactory_t1946967824 ** get_address_of_renderTextureFactory_3() { return &___renderTextureFactory_3; }
	inline void set_renderTextureFactory_3(RenderTextureFactory_t1946967824 * value)
	{
		___renderTextureFactory_3 = value;
		Il2CppCodeGenWriteBarrier((&___renderTextureFactory_3), value);
	}

	inline static int32_t get_offset_of_U3CinterruptedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PostProcessingContext_t2014408948, ___U3CinterruptedU3Ek__BackingField_4)); }
	inline bool get_U3CinterruptedU3Ek__BackingField_4() const { return ___U3CinterruptedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CinterruptedU3Ek__BackingField_4() { return &___U3CinterruptedU3Ek__BackingField_4; }
	inline void set_U3CinterruptedU3Ek__BackingField_4(bool value)
	{
		___U3CinterruptedU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCONTEXT_T2014408948_H
#ifndef POSTPROCESSINGCOMPONENTBASE_T2731103827_H
#define POSTPROCESSINGCOMPONENTBASE_T2731103827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentBase
struct  PostProcessingComponentBase_t2731103827  : public RuntimeObject
{
public:
	// UnityEngine.PostProcessing.PostProcessingContext UnityEngine.PostProcessing.PostProcessingComponentBase::context
	PostProcessingContext_t2014408948 * ___context_0;

public:
	inline static int32_t get_offset_of_context_0() { return static_cast<int32_t>(offsetof(PostProcessingComponentBase_t2731103827, ___context_0)); }
	inline PostProcessingContext_t2014408948 * get_context_0() const { return ___context_0; }
	inline PostProcessingContext_t2014408948 ** get_address_of_context_0() { return &___context_0; }
	inline void set_context_0(PostProcessingContext_t2014408948 * value)
	{
		___context_0 = value;
		Il2CppCodeGenWriteBarrier((&___context_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTBASE_T2731103827_H
#ifndef POSTPROCESSINGMODEL_T540111976_H
#define POSTPROCESSINGMODEL_T540111976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingModel
struct  PostProcessingModel_t540111976  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.PostProcessing.PostProcessingModel::m_Enabled
	bool ___m_Enabled_0;

public:
	inline static int32_t get_offset_of_m_Enabled_0() { return static_cast<int32_t>(offsetof(PostProcessingModel_t540111976, ___m_Enabled_0)); }
	inline bool get_m_Enabled_0() const { return ___m_Enabled_0; }
	inline bool* get_address_of_m_Enabled_0() { return &___m_Enabled_0; }
	inline void set_m_Enabled_0(bool value)
	{
		___m_Enabled_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGMODEL_T540111976_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef UNIFORMS_T1046717683_H
#define UNIFORMS_T1046717683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.UserLutComponent/Uniforms
struct  Uniforms_t1046717683  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t1046717683_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.UserLutComponent/Uniforms::_UserLut
	int32_t ____UserLut_0;
	// System.Int32 UnityEngine.PostProcessing.UserLutComponent/Uniforms::_UserLut_Params
	int32_t ____UserLut_Params_1;

public:
	inline static int32_t get_offset_of__UserLut_0() { return static_cast<int32_t>(offsetof(Uniforms_t1046717683_StaticFields, ____UserLut_0)); }
	inline int32_t get__UserLut_0() const { return ____UserLut_0; }
	inline int32_t* get_address_of__UserLut_0() { return &____UserLut_0; }
	inline void set__UserLut_0(int32_t value)
	{
		____UserLut_0 = value;
	}

	inline static int32_t get_offset_of__UserLut_Params_1() { return static_cast<int32_t>(offsetof(Uniforms_t1046717683_StaticFields, ____UserLut_Params_1)); }
	inline int32_t get__UserLut_Params_1() const { return ____UserLut_Params_1; }
	inline int32_t* get_address_of__UserLut_Params_1() { return &____UserLut_Params_1; }
	inline void set__UserLut_Params_1(int32_t value)
	{
		____UserLut_Params_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T1046717683_H
#ifndef UNIFORMS_T2205824134_H
#define UNIFORMS_T2205824134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.VignetteComponent/Uniforms
struct  Uniforms_t2205824134  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t2205824134_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.VignetteComponent/Uniforms::_Vignette_Color
	int32_t ____Vignette_Color_0;
	// System.Int32 UnityEngine.PostProcessing.VignetteComponent/Uniforms::_Vignette_Center
	int32_t ____Vignette_Center_1;
	// System.Int32 UnityEngine.PostProcessing.VignetteComponent/Uniforms::_Vignette_Settings
	int32_t ____Vignette_Settings_2;
	// System.Int32 UnityEngine.PostProcessing.VignetteComponent/Uniforms::_Vignette_Mask
	int32_t ____Vignette_Mask_3;
	// System.Int32 UnityEngine.PostProcessing.VignetteComponent/Uniforms::_Vignette_Opacity
	int32_t ____Vignette_Opacity_4;

public:
	inline static int32_t get_offset_of__Vignette_Color_0() { return static_cast<int32_t>(offsetof(Uniforms_t2205824134_StaticFields, ____Vignette_Color_0)); }
	inline int32_t get__Vignette_Color_0() const { return ____Vignette_Color_0; }
	inline int32_t* get_address_of__Vignette_Color_0() { return &____Vignette_Color_0; }
	inline void set__Vignette_Color_0(int32_t value)
	{
		____Vignette_Color_0 = value;
	}

	inline static int32_t get_offset_of__Vignette_Center_1() { return static_cast<int32_t>(offsetof(Uniforms_t2205824134_StaticFields, ____Vignette_Center_1)); }
	inline int32_t get__Vignette_Center_1() const { return ____Vignette_Center_1; }
	inline int32_t* get_address_of__Vignette_Center_1() { return &____Vignette_Center_1; }
	inline void set__Vignette_Center_1(int32_t value)
	{
		____Vignette_Center_1 = value;
	}

	inline static int32_t get_offset_of__Vignette_Settings_2() { return static_cast<int32_t>(offsetof(Uniforms_t2205824134_StaticFields, ____Vignette_Settings_2)); }
	inline int32_t get__Vignette_Settings_2() const { return ____Vignette_Settings_2; }
	inline int32_t* get_address_of__Vignette_Settings_2() { return &____Vignette_Settings_2; }
	inline void set__Vignette_Settings_2(int32_t value)
	{
		____Vignette_Settings_2 = value;
	}

	inline static int32_t get_offset_of__Vignette_Mask_3() { return static_cast<int32_t>(offsetof(Uniforms_t2205824134_StaticFields, ____Vignette_Mask_3)); }
	inline int32_t get__Vignette_Mask_3() const { return ____Vignette_Mask_3; }
	inline int32_t* get_address_of__Vignette_Mask_3() { return &____Vignette_Mask_3; }
	inline void set__Vignette_Mask_3(int32_t value)
	{
		____Vignette_Mask_3 = value;
	}

	inline static int32_t get_offset_of__Vignette_Opacity_4() { return static_cast<int32_t>(offsetof(Uniforms_t2205824134_StaticFields, ____Vignette_Opacity_4)); }
	inline int32_t get__Vignette_Opacity_4() const { return ____Vignette_Opacity_4; }
	inline int32_t* get_address_of__Vignette_Opacity_4() { return &____Vignette_Opacity_4; }
	inline void set__Vignette_Opacity_4(int32_t value)
	{
		____Vignette_Opacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T2205824134_H
#ifndef CROSSPLATFORMINPUTMANAGER_T1518791927_H
#define CROSSPLATFORMINPUTMANAGER_T1518791927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager
struct  CrossPlatformInputManager_t1518791927  : public RuntimeObject
{
public:

public:
};

struct CrossPlatformInputManager_t1518791927_StaticFields
{
public:
	// UnitySampleAssets.CrossPlatformInput.VirtualInput UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::virtualInput
	VirtualInput_t4247650776 * ___virtualInput_0;

public:
	inline static int32_t get_offset_of_virtualInput_0() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t1518791927_StaticFields, ___virtualInput_0)); }
	inline VirtualInput_t4247650776 * get_virtualInput_0() const { return ___virtualInput_0; }
	inline VirtualInput_t4247650776 ** get_address_of_virtualInput_0() { return &___virtualInput_0; }
	inline void set_virtualInput_0(VirtualInput_t4247650776 * value)
	{
		___virtualInput_0 = value;
		Il2CppCodeGenWriteBarrier((&___virtualInput_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSPLATFORMINPUTMANAGER_T1518791927_H
#ifndef UNIFORMS_T3024963833_H
#define UNIFORMS_T3024963833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.TaaComponent/Uniforms
struct  Uniforms_t3024963833  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t3024963833_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.TaaComponent/Uniforms::_Jitter
	int32_t ____Jitter_0;
	// System.Int32 UnityEngine.PostProcessing.TaaComponent/Uniforms::_SharpenParameters
	int32_t ____SharpenParameters_1;
	// System.Int32 UnityEngine.PostProcessing.TaaComponent/Uniforms::_FinalBlendParameters
	int32_t ____FinalBlendParameters_2;
	// System.Int32 UnityEngine.PostProcessing.TaaComponent/Uniforms::_HistoryTex
	int32_t ____HistoryTex_3;
	// System.Int32 UnityEngine.PostProcessing.TaaComponent/Uniforms::_MainTex
	int32_t ____MainTex_4;

public:
	inline static int32_t get_offset_of__Jitter_0() { return static_cast<int32_t>(offsetof(Uniforms_t3024963833_StaticFields, ____Jitter_0)); }
	inline int32_t get__Jitter_0() const { return ____Jitter_0; }
	inline int32_t* get_address_of__Jitter_0() { return &____Jitter_0; }
	inline void set__Jitter_0(int32_t value)
	{
		____Jitter_0 = value;
	}

	inline static int32_t get_offset_of__SharpenParameters_1() { return static_cast<int32_t>(offsetof(Uniforms_t3024963833_StaticFields, ____SharpenParameters_1)); }
	inline int32_t get__SharpenParameters_1() const { return ____SharpenParameters_1; }
	inline int32_t* get_address_of__SharpenParameters_1() { return &____SharpenParameters_1; }
	inline void set__SharpenParameters_1(int32_t value)
	{
		____SharpenParameters_1 = value;
	}

	inline static int32_t get_offset_of__FinalBlendParameters_2() { return static_cast<int32_t>(offsetof(Uniforms_t3024963833_StaticFields, ____FinalBlendParameters_2)); }
	inline int32_t get__FinalBlendParameters_2() const { return ____FinalBlendParameters_2; }
	inline int32_t* get_address_of__FinalBlendParameters_2() { return &____FinalBlendParameters_2; }
	inline void set__FinalBlendParameters_2(int32_t value)
	{
		____FinalBlendParameters_2 = value;
	}

	inline static int32_t get_offset_of__HistoryTex_3() { return static_cast<int32_t>(offsetof(Uniforms_t3024963833_StaticFields, ____HistoryTex_3)); }
	inline int32_t get__HistoryTex_3() const { return ____HistoryTex_3; }
	inline int32_t* get_address_of__HistoryTex_3() { return &____HistoryTex_3; }
	inline void set__HistoryTex_3(int32_t value)
	{
		____HistoryTex_3 = value;
	}

	inline static int32_t get_offset_of__MainTex_4() { return static_cast<int32_t>(offsetof(Uniforms_t3024963833_StaticFields, ____MainTex_4)); }
	inline int32_t get__MainTex_4() const { return ____MainTex_4; }
	inline int32_t* get_address_of__MainTex_4() { return &____MainTex_4; }
	inline void set__MainTex_4(int32_t value)
	{
		____MainTex_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T3024963833_H
#ifndef VIRTUALAXIS_T1347148391_H
#define VIRTUALAXIS_T1347148391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct  VirtualAxis_t1347148391  : public RuntimeObject
{
public:
	// System.String UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Single UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::m_Value
	float ___m_Value_1;
	// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualAxis_t1347148391, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(VirtualAxis_t1347148391, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VirtualAxis_t1347148391, ___U3CmatchWithInputManagerU3Ek__BackingField_2)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_2() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return &___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_2(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALAXIS_T1347148391_H
#ifndef VIRTUALBUTTON_T3490362950_H
#define VIRTUALBUTTON_T3490362950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct  VirtualButton_t3490362950  : public RuntimeObject
{
public:
	// System.String UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Int32 UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::lastPressedFrame
	int32_t ___lastPressedFrame_1;
	// System.Int32 UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::releasedFrame
	int32_t ___releasedFrame_2;
	// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::pressed
	bool ___pressed_3;
	// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualButton_t3490362950, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_lastPressedFrame_1() { return static_cast<int32_t>(offsetof(VirtualButton_t3490362950, ___lastPressedFrame_1)); }
	inline int32_t get_lastPressedFrame_1() const { return ___lastPressedFrame_1; }
	inline int32_t* get_address_of_lastPressedFrame_1() { return &___lastPressedFrame_1; }
	inline void set_lastPressedFrame_1(int32_t value)
	{
		___lastPressedFrame_1 = value;
	}

	inline static int32_t get_offset_of_releasedFrame_2() { return static_cast<int32_t>(offsetof(VirtualButton_t3490362950, ___releasedFrame_2)); }
	inline int32_t get_releasedFrame_2() const { return ___releasedFrame_2; }
	inline int32_t* get_address_of_releasedFrame_2() { return &___releasedFrame_2; }
	inline void set_releasedFrame_2(int32_t value)
	{
		___releasedFrame_2 = value;
	}

	inline static int32_t get_offset_of_pressed_3() { return static_cast<int32_t>(offsetof(VirtualButton_t3490362950, ___pressed_3)); }
	inline bool get_pressed_3() const { return ___pressed_3; }
	inline bool* get_address_of_pressed_3() { return &___pressed_3; }
	inline void set_pressed_3(bool value)
	{
		___pressed_3 = value;
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VirtualButton_t3490362950, ___U3CmatchWithInputManagerU3Ek__BackingField_4)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_4() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_4() { return &___U3CmatchWithInputManagerU3Ek__BackingField_4; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_4(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALBUTTON_T3490362950_H
#ifndef DICTIONARY_2_T1132404690_H
#define DICTIONARY_2_T1132404690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct  Dictionary_2_t1132404690  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	VirtualAxisU5BU5D_t1034880030* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___valueSlots_7)); }
	inline VirtualAxisU5BU5D_t1034880030* get_valueSlots_7() const { return ___valueSlots_7; }
	inline VirtualAxisU5BU5D_t1034880030** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(VirtualAxisU5BU5D_t1034880030* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1132404690_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t4180259042 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1132404690_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t4180259042 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t4180259042 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t4180259042 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1132404690_H
#ifndef DICTIONARY_2_T3275619249_H
#define DICTIONARY_2_T3275619249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct  Dictionary_2_t3275619249  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	VirtualButtonU5BU5D_t1759394275* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___valueSlots_7)); }
	inline VirtualButtonU5BU5D_t1759394275* get_valueSlots_7() const { return ___valueSlots_7; }
	inline VirtualButtonU5BU5D_t1759394275** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(VirtualButtonU5BU5D_t1759394275* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3275619249_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t609805991 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3275619249_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t609805991 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t609805991 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t609805991 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3275619249_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef RENDERTEXTUREFACTORY_T1946967824_H
#define RENDERTEXTUREFACTORY_T1946967824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.RenderTextureFactory
struct  RenderTextureFactory_t1946967824  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<UnityEngine.RenderTexture> UnityEngine.PostProcessing.RenderTextureFactory::m_TemporaryRTs
	HashSet_1_t673836907 * ___m_TemporaryRTs_0;

public:
	inline static int32_t get_offset_of_m_TemporaryRTs_0() { return static_cast<int32_t>(offsetof(RenderTextureFactory_t1946967824, ___m_TemporaryRTs_0)); }
	inline HashSet_1_t673836907 * get_m_TemporaryRTs_0() const { return ___m_TemporaryRTs_0; }
	inline HashSet_1_t673836907 ** get_address_of_m_TemporaryRTs_0() { return &___m_TemporaryRTs_0; }
	inline void set_m_TemporaryRTs_0(HashSet_1_t673836907 * value)
	{
		___m_TemporaryRTs_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_TemporaryRTs_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREFACTORY_T1946967824_H
#ifndef HASHSET_1_T673836907_H
#define HASHSET_1_T673836907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<UnityEngine.RenderTexture>
struct  HashSet_1_t673836907  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1::links
	LinkU5BU5D_t2504560647* ___links_5;
	// T[] System.Collections.Generic.HashSet`1::slots
	RenderTextureU5BU5D_t4111643188* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::comparer
	RuntimeObject* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::si
	SerializationInfo_t950877179 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1::generation
	int32_t ___generation_13;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(HashSet_1_t673836907, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_links_5() { return static_cast<int32_t>(offsetof(HashSet_1_t673836907, ___links_5)); }
	inline LinkU5BU5D_t2504560647* get_links_5() const { return ___links_5; }
	inline LinkU5BU5D_t2504560647** get_address_of_links_5() { return &___links_5; }
	inline void set_links_5(LinkU5BU5D_t2504560647* value)
	{
		___links_5 = value;
		Il2CppCodeGenWriteBarrier((&___links_5), value);
	}

	inline static int32_t get_offset_of_slots_6() { return static_cast<int32_t>(offsetof(HashSet_1_t673836907, ___slots_6)); }
	inline RenderTextureU5BU5D_t4111643188* get_slots_6() const { return ___slots_6; }
	inline RenderTextureU5BU5D_t4111643188** get_address_of_slots_6() { return &___slots_6; }
	inline void set_slots_6(RenderTextureU5BU5D_t4111643188* value)
	{
		___slots_6 = value;
		Il2CppCodeGenWriteBarrier((&___slots_6), value);
	}

	inline static int32_t get_offset_of_touched_7() { return static_cast<int32_t>(offsetof(HashSet_1_t673836907, ___touched_7)); }
	inline int32_t get_touched_7() const { return ___touched_7; }
	inline int32_t* get_address_of_touched_7() { return &___touched_7; }
	inline void set_touched_7(int32_t value)
	{
		___touched_7 = value;
	}

	inline static int32_t get_offset_of_empty_slot_8() { return static_cast<int32_t>(offsetof(HashSet_1_t673836907, ___empty_slot_8)); }
	inline int32_t get_empty_slot_8() const { return ___empty_slot_8; }
	inline int32_t* get_address_of_empty_slot_8() { return &___empty_slot_8; }
	inline void set_empty_slot_8(int32_t value)
	{
		___empty_slot_8 = value;
	}

	inline static int32_t get_offset_of_count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t673836907, ___count_9)); }
	inline int32_t get_count_9() const { return ___count_9; }
	inline int32_t* get_address_of_count_9() { return &___count_9; }
	inline void set_count_9(int32_t value)
	{
		___count_9 = value;
	}

	inline static int32_t get_offset_of_threshold_10() { return static_cast<int32_t>(offsetof(HashSet_1_t673836907, ___threshold_10)); }
	inline int32_t get_threshold_10() const { return ___threshold_10; }
	inline int32_t* get_address_of_threshold_10() { return &___threshold_10; }
	inline void set_threshold_10(int32_t value)
	{
		___threshold_10 = value;
	}

	inline static int32_t get_offset_of_comparer_11() { return static_cast<int32_t>(offsetof(HashSet_1_t673836907, ___comparer_11)); }
	inline RuntimeObject* get_comparer_11() const { return ___comparer_11; }
	inline RuntimeObject** get_address_of_comparer_11() { return &___comparer_11; }
	inline void set_comparer_11(RuntimeObject* value)
	{
		___comparer_11 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_11), value);
	}

	inline static int32_t get_offset_of_si_12() { return static_cast<int32_t>(offsetof(HashSet_1_t673836907, ___si_12)); }
	inline SerializationInfo_t950877179 * get_si_12() const { return ___si_12; }
	inline SerializationInfo_t950877179 ** get_address_of_si_12() { return &___si_12; }
	inline void set_si_12(SerializationInfo_t950877179 * value)
	{
		___si_12 = value;
		Il2CppCodeGenWriteBarrier((&___si_12), value);
	}

	inline static int32_t get_offset_of_generation_13() { return static_cast<int32_t>(offsetof(HashSet_1_t673836907, ___generation_13)); }
	inline int32_t get_generation_13() const { return ___generation_13; }
	inline int32_t* get_address_of_generation_13() { return &___generation_13; }
	inline void set_generation_13(int32_t value)
	{
		___generation_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHSET_1_T673836907_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef SCREENEDGEMASK_T4063288584_H
#define SCREENEDGEMASK_T4063288584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ScreenEdgeMask
struct  ScreenEdgeMask_t4063288584 
{
public:
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ScreenEdgeMask::intensity
	float ___intensity_0;

public:
	inline static int32_t get_offset_of_intensity_0() { return static_cast<int32_t>(offsetof(ScreenEdgeMask_t4063288584, ___intensity_0)); }
	inline float get_intensity_0() const { return ___intensity_0; }
	inline float* get_address_of_intensity_0() { return &___intensity_0; }
	inline void set_intensity_0(float value)
	{
		___intensity_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENEDGEMASK_T4063288584_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef UNITYEVENT_1_T2278926278_H
#define UNITYEVENT_1_T2278926278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Single>
struct  UnityEvent_1_t2278926278  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t2278926278, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T2278926278_H
#ifndef SETTINGS_T3006579223_H
#define SETTINGS_T3006579223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.UserLutModel/Settings
struct  Settings_t3006579223 
{
public:
	// UnityEngine.Texture2D UnityEngine.PostProcessing.UserLutModel/Settings::lut
	Texture2D_t3840446185 * ___lut_0;
	// System.Single UnityEngine.PostProcessing.UserLutModel/Settings::contribution
	float ___contribution_1;

public:
	inline static int32_t get_offset_of_lut_0() { return static_cast<int32_t>(offsetof(Settings_t3006579223, ___lut_0)); }
	inline Texture2D_t3840446185 * get_lut_0() const { return ___lut_0; }
	inline Texture2D_t3840446185 ** get_address_of_lut_0() { return &___lut_0; }
	inline void set_lut_0(Texture2D_t3840446185 * value)
	{
		___lut_0 = value;
		Il2CppCodeGenWriteBarrier((&___lut_0), value);
	}

	inline static int32_t get_offset_of_contribution_1() { return static_cast<int32_t>(offsetof(Settings_t3006579223, ___contribution_1)); }
	inline float get_contribution_1() const { return ___contribution_1; }
	inline float* get_address_of_contribution_1() { return &___contribution_1; }
	inline void set_contribution_1(float value)
	{
		___contribution_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.UserLutModel/Settings
struct Settings_t3006579223_marshaled_pinvoke
{
	Texture2D_t3840446185 * ___lut_0;
	float ___contribution_1;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.UserLutModel/Settings
struct Settings_t3006579223_marshaled_com
{
	Texture2D_t3840446185 * ___lut_0;
	float ___contribution_1;
};
#endif // SETTINGS_T3006579223_H
#ifndef INTENSITYSETTINGS_T1721872184_H
#define INTENSITYSETTINGS_T1721872184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/IntensitySettings
struct  IntensitySettings_t1721872184 
{
public:
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/IntensitySettings::reflectionMultiplier
	float ___reflectionMultiplier_0;
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/IntensitySettings::fadeDistance
	float ___fadeDistance_1;
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/IntensitySettings::fresnelFade
	float ___fresnelFade_2;
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/IntensitySettings::fresnelFadePower
	float ___fresnelFadePower_3;

public:
	inline static int32_t get_offset_of_reflectionMultiplier_0() { return static_cast<int32_t>(offsetof(IntensitySettings_t1721872184, ___reflectionMultiplier_0)); }
	inline float get_reflectionMultiplier_0() const { return ___reflectionMultiplier_0; }
	inline float* get_address_of_reflectionMultiplier_0() { return &___reflectionMultiplier_0; }
	inline void set_reflectionMultiplier_0(float value)
	{
		___reflectionMultiplier_0 = value;
	}

	inline static int32_t get_offset_of_fadeDistance_1() { return static_cast<int32_t>(offsetof(IntensitySettings_t1721872184, ___fadeDistance_1)); }
	inline float get_fadeDistance_1() const { return ___fadeDistance_1; }
	inline float* get_address_of_fadeDistance_1() { return &___fadeDistance_1; }
	inline void set_fadeDistance_1(float value)
	{
		___fadeDistance_1 = value;
	}

	inline static int32_t get_offset_of_fresnelFade_2() { return static_cast<int32_t>(offsetof(IntensitySettings_t1721872184, ___fresnelFade_2)); }
	inline float get_fresnelFade_2() const { return ___fresnelFade_2; }
	inline float* get_address_of_fresnelFade_2() { return &___fresnelFade_2; }
	inline void set_fresnelFade_2(float value)
	{
		___fresnelFade_2 = value;
	}

	inline static int32_t get_offset_of_fresnelFadePower_3() { return static_cast<int32_t>(offsetof(IntensitySettings_t1721872184, ___fresnelFadePower_3)); }
	inline float get_fresnelFadePower_3() const { return ___fresnelFadePower_3; }
	inline float* get_address_of_fresnelFadePower_3() { return &___fresnelFadePower_3; }
	inline void set_fresnelFadePower_3(float value)
	{
		___fresnelFadePower_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTENSITYSETTINGS_T1721872184_H
#ifndef TAASETTINGS_T2709374970_H
#define TAASETTINGS_T2709374970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/TaaSettings
struct  TaaSettings_t2709374970 
{
public:
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::jitterSpread
	float ___jitterSpread_0;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::sharpen
	float ___sharpen_1;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::stationaryBlending
	float ___stationaryBlending_2;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::motionBlending
	float ___motionBlending_3;

public:
	inline static int32_t get_offset_of_jitterSpread_0() { return static_cast<int32_t>(offsetof(TaaSettings_t2709374970, ___jitterSpread_0)); }
	inline float get_jitterSpread_0() const { return ___jitterSpread_0; }
	inline float* get_address_of_jitterSpread_0() { return &___jitterSpread_0; }
	inline void set_jitterSpread_0(float value)
	{
		___jitterSpread_0 = value;
	}

	inline static int32_t get_offset_of_sharpen_1() { return static_cast<int32_t>(offsetof(TaaSettings_t2709374970, ___sharpen_1)); }
	inline float get_sharpen_1() const { return ___sharpen_1; }
	inline float* get_address_of_sharpen_1() { return &___sharpen_1; }
	inline void set_sharpen_1(float value)
	{
		___sharpen_1 = value;
	}

	inline static int32_t get_offset_of_stationaryBlending_2() { return static_cast<int32_t>(offsetof(TaaSettings_t2709374970, ___stationaryBlending_2)); }
	inline float get_stationaryBlending_2() const { return ___stationaryBlending_2; }
	inline float* get_address_of_stationaryBlending_2() { return &___stationaryBlending_2; }
	inline void set_stationaryBlending_2(float value)
	{
		___stationaryBlending_2 = value;
	}

	inline static int32_t get_offset_of_motionBlending_3() { return static_cast<int32_t>(offsetof(TaaSettings_t2709374970, ___motionBlending_3)); }
	inline float get_motionBlending_3() const { return ___motionBlending_3; }
	inline float* get_address_of_motionBlending_3() { return &___motionBlending_3; }
	inline void set_motionBlending_3(float value)
	{
		___motionBlending_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAASETTINGS_T2709374970_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef POSTPROCESSINGCOMPONENT_1_T814315590_H
#define POSTPROCESSINGCOMPONENT_1_T814315590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.AntialiasingModel>
struct  PostProcessingComponent_1_t814315590  : public PostProcessingComponentBase_t2731103827
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	AntialiasingModel_t1521139388 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t814315590, ___U3CmodelU3Ek__BackingField_1)); }
	inline AntialiasingModel_t1521139388 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline AntialiasingModel_t1521139388 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(AntialiasingModel_t1521139388 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T814315590_H
#ifndef PROPERTYATTRIBUTE_T3677895545_H
#define PROPERTYATTRIBUTE_T3677895545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t3677895545  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T3677895545_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef POSTPROCESSINGCOMPONENT_1_T2138693379_H
#define POSTPROCESSINGCOMPONENT_1_T2138693379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.VignetteModel>
struct  PostProcessingComponent_1_t2138693379  : public PostProcessingComponentBase_t2731103827
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	VignetteModel_t2845517177 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t2138693379, ___U3CmodelU3Ek__BackingField_1)); }
	inline VignetteModel_t2845517177 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline VignetteModel_t2845517177 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(VignetteModel_t2845517177 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T2138693379_H
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
#ifndef ENUMERATOR_T2379014178_H
#define ENUMERATOR_T2379014178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.RenderTexture>
struct  Enumerator_t2379014178 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::hashset
	HashSet_1_t673836907 * ___hashset_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::stamp
	int32_t ___stamp_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::current
	RenderTexture_t2108887433 * ___current_3;

public:
	inline static int32_t get_offset_of_hashset_0() { return static_cast<int32_t>(offsetof(Enumerator_t2379014178, ___hashset_0)); }
	inline HashSet_1_t673836907 * get_hashset_0() const { return ___hashset_0; }
	inline HashSet_1_t673836907 ** get_address_of_hashset_0() { return &___hashset_0; }
	inline void set_hashset_0(HashSet_1_t673836907 * value)
	{
		___hashset_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashset_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2379014178, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2379014178, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2379014178, ___current_3)); }
	inline RenderTexture_t2108887433 * get_current_3() const { return ___current_3; }
	inline RenderTexture_t2108887433 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RenderTexture_t2108887433 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2379014178_H
#ifndef ENUMERATOR_T3350232909_H
#define ENUMERATOR_T3350232909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct  Enumerator_t3350232909 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::hashset
	HashSet_1_t1645055638 * ___hashset_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::stamp
	int32_t ___stamp_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_hashset_0() { return static_cast<int32_t>(offsetof(Enumerator_t3350232909, ___hashset_0)); }
	inline HashSet_1_t1645055638 * get_hashset_0() const { return ___hashset_0; }
	inline HashSet_1_t1645055638 ** get_address_of_hashset_0() { return &___hashset_0; }
	inline void set_hashset_0(HashSet_1_t1645055638 * value)
	{
		___hashset_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashset_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3350232909, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t3350232909, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3350232909, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3350232909_H
#ifndef DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#define DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t2562230146 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifndef POSTPROCESSINGCOMPONENT_1_T2319520934_H
#define POSTPROCESSINGCOMPONENT_1_T2319520934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.ScreenSpaceReflectionModel>
struct  PostProcessingComponent_1_t2319520934  : public PostProcessingComponentBase_t2731103827
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	ScreenSpaceReflectionModel_t3026344732 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t2319520934, ___U3CmodelU3Ek__BackingField_1)); }
	inline ScreenSpaceReflectionModel_t3026344732 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline ScreenSpaceReflectionModel_t3026344732 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(ScreenSpaceReflectionModel_t3026344732 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T2319520934_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef POSTPROCESSINGCOMPONENT_1_T963284282_H
#define POSTPROCESSINGCOMPONENT_1_T963284282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.UserLutModel>
struct  PostProcessingComponent_1_t963284282  : public PostProcessingComponentBase_t2731103827
{
public:
	// T UnityEngine.PostProcessing.PostProcessingComponent`1::<model>k__BackingField
	UserLutModel_t1670108080 * ___U3CmodelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmodelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PostProcessingComponent_1_t963284282, ___U3CmodelU3Ek__BackingField_1)); }
	inline UserLutModel_t1670108080 * get_U3CmodelU3Ek__BackingField_1() const { return ___U3CmodelU3Ek__BackingField_1; }
	inline UserLutModel_t1670108080 ** get_address_of_U3CmodelU3Ek__BackingField_1() { return &___U3CmodelU3Ek__BackingField_1; }
	inline void set_U3CmodelU3Ek__BackingField_1(UserLutModel_t1670108080 * value)
	{
		___U3CmodelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmodelU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENT_1_T963284282_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef MODE_T3936508933_H
#define MODE_T3936508933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.VignetteModel/Mode
struct  Mode_t3936508933 
{
public:
	// System.Int32 UnityEngine.PostProcessing.VignetteModel/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t3936508933, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T3936508933_H
#ifndef VIRTUALINPUT_T4247650776_H
#define VIRTUALINPUT_T4247650776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.CrossPlatformInput.VirtualInput
struct  VirtualInput_t4247650776  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis> UnitySampleAssets.CrossPlatformInput.VirtualInput::virtualAxes
	Dictionary_2_t1132404690 * ___virtualAxes_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton> UnitySampleAssets.CrossPlatformInput.VirtualInput::virtualButtons
	Dictionary_2_t3275619249 * ___virtualButtons_1;
	// System.Collections.Generic.List`1<System.String> UnitySampleAssets.CrossPlatformInput.VirtualInput::alwaysUseVirtual
	List_1_t3319525431 * ___alwaysUseVirtual_2;
	// UnityEngine.Vector3 UnitySampleAssets.CrossPlatformInput.VirtualInput::<virtualMousePosition>k__BackingField
	Vector3_t3722313464  ___U3CvirtualMousePositionU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_virtualAxes_0() { return static_cast<int32_t>(offsetof(VirtualInput_t4247650776, ___virtualAxes_0)); }
	inline Dictionary_2_t1132404690 * get_virtualAxes_0() const { return ___virtualAxes_0; }
	inline Dictionary_2_t1132404690 ** get_address_of_virtualAxes_0() { return &___virtualAxes_0; }
	inline void set_virtualAxes_0(Dictionary_2_t1132404690 * value)
	{
		___virtualAxes_0 = value;
		Il2CppCodeGenWriteBarrier((&___virtualAxes_0), value);
	}

	inline static int32_t get_offset_of_virtualButtons_1() { return static_cast<int32_t>(offsetof(VirtualInput_t4247650776, ___virtualButtons_1)); }
	inline Dictionary_2_t3275619249 * get_virtualButtons_1() const { return ___virtualButtons_1; }
	inline Dictionary_2_t3275619249 ** get_address_of_virtualButtons_1() { return &___virtualButtons_1; }
	inline void set_virtualButtons_1(Dictionary_2_t3275619249 * value)
	{
		___virtualButtons_1 = value;
		Il2CppCodeGenWriteBarrier((&___virtualButtons_1), value);
	}

	inline static int32_t get_offset_of_alwaysUseVirtual_2() { return static_cast<int32_t>(offsetof(VirtualInput_t4247650776, ___alwaysUseVirtual_2)); }
	inline List_1_t3319525431 * get_alwaysUseVirtual_2() const { return ___alwaysUseVirtual_2; }
	inline List_1_t3319525431 ** get_address_of_alwaysUseVirtual_2() { return &___alwaysUseVirtual_2; }
	inline void set_alwaysUseVirtual_2(List_1_t3319525431 * value)
	{
		___alwaysUseVirtual_2 = value;
		Il2CppCodeGenWriteBarrier((&___alwaysUseVirtual_2), value);
	}

	inline static int32_t get_offset_of_U3CvirtualMousePositionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VirtualInput_t4247650776, ___U3CvirtualMousePositionU3Ek__BackingField_3)); }
	inline Vector3_t3722313464  get_U3CvirtualMousePositionU3Ek__BackingField_3() const { return ___U3CvirtualMousePositionU3Ek__BackingField_3; }
	inline Vector3_t3722313464 * get_address_of_U3CvirtualMousePositionU3Ek__BackingField_3() { return &___U3CvirtualMousePositionU3Ek__BackingField_3; }
	inline void set_U3CvirtualMousePositionU3Ek__BackingField_3(Vector3_t3722313464  value)
	{
		___U3CvirtualMousePositionU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALINPUT_T4247650776_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef INPUTBUTTON_T3704011348_H
#define INPUTBUTTON_T3704011348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_t3704011348 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputButton_t3704011348, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTBUTTON_T3704011348_H
#ifndef RAYCASTRESULT_T3360306849_H
#define RAYCASTRESULT_T3360306849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t3360306849 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1113636619 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t4150874583 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t3722313464  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t3722313464  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2156229523  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___m_GameObject_0)); }
	inline GameObject_t1113636619 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1113636619 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___module_1)); }
	inline BaseRaycaster_t4150874583 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t4150874583 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t4150874583 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldPosition_7)); }
	inline Vector3_t3722313464  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t3722313464 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t3722313464  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldNormal_8)); }
	inline Vector3_t3722313464  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t3722313464 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t3722313464  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___screenPosition_9)); }
	inline Vector2_t2156229523  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2156229523 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2156229523  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_com
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T3360306849_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILLMETHOD_T1167457570_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T1152881528_H
#ifndef CUBEMAPFACE_T1358225318_H
#define CUBEMAPFACE_T1358225318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CubemapFace
struct  CubemapFace_t1358225318 
{
public:
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CubemapFace_t1358225318, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUBEMAPFACE_T1358225318_H
#ifndef FXAAPRESET_T2149486832_H
#define FXAAPRESET_T2149486832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/FxaaPreset
struct  FxaaPreset_t2149486832 
{
public:
	// System.Int32 UnityEngine.PostProcessing.AntialiasingModel/FxaaPreset::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FxaaPreset_t2149486832, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FXAAPRESET_T2149486832_H
#ifndef SLIDEREVENT_T3180273144_H
#define SLIDEREVENT_T3180273144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider/SliderEvent
struct  SliderEvent_t3180273144  : public UnityEvent_1_t2278926278
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLIDEREVENT_T3180273144_H
#ifndef DIRECTION_T337909235_H
#define DIRECTION_T337909235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider/Direction
struct  Direction_t337909235 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Direction_t337909235, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTION_T337909235_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T118834922_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T118834922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.VignetteModel>
struct  PostProcessingComponentRenderTexture_1_t118834922  : public PostProcessingComponent_1_t2138693379
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T118834922_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T6679325_H
#define POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T6679325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentCommandBuffer`1<UnityEngine.PostProcessing.ScreenSpaceReflectionModel>
struct  PostProcessingComponentCommandBuffer_1_t6679325  : public PostProcessingComponent_1_t2319520934
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTCOMMANDBUFFER_1_T6679325_H
#ifndef DEPTHTEXTUREMODE_T4161834719_H
#define DEPTHTEXTUREMODE_T4161834719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DepthTextureMode
struct  DepthTextureMode_t4161834719 
{
public:
	// System.Int32 UnityEngine.DepthTextureMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DepthTextureMode_t4161834719, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPTHTEXTUREMODE_T4161834719_H
#ifndef CAMERAEVENT_T2033959522_H
#define CAMERAEVENT_T2033959522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CameraEvent
struct  CameraEvent_t2033959522 
{
public:
	// System.Int32 UnityEngine.Rendering.CameraEvent::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraEvent_t2033959522, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAEVENT_T2033959522_H
#ifndef COMMANDBUFFER_T2206337031_H
#define COMMANDBUFFER_T2206337031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CommandBuffer
struct  CommandBuffer_t2206337031  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CommandBuffer_t2206337031, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMANDBUFFER_T2206337031_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T3089424429_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T3089424429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.AntialiasingModel>
struct  PostProcessingComponentRenderTexture_1_t3089424429  : public PostProcessingComponent_1_t814315590
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T3089424429_H
#ifndef RENDERBUFFER_T586150500_H
#define RENDERBUFFER_T586150500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderBuffer
struct  RenderBuffer_t586150500 
{
public:
	// System.Int32 UnityEngine.RenderBuffer::m_RenderTextureInstanceID
	int32_t ___m_RenderTextureInstanceID_0;
	// System.IntPtr UnityEngine.RenderBuffer::m_BufferPtr
	intptr_t ___m_BufferPtr_1;

public:
	inline static int32_t get_offset_of_m_RenderTextureInstanceID_0() { return static_cast<int32_t>(offsetof(RenderBuffer_t586150500, ___m_RenderTextureInstanceID_0)); }
	inline int32_t get_m_RenderTextureInstanceID_0() const { return ___m_RenderTextureInstanceID_0; }
	inline int32_t* get_address_of_m_RenderTextureInstanceID_0() { return &___m_RenderTextureInstanceID_0; }
	inline void set_m_RenderTextureInstanceID_0(int32_t value)
	{
		___m_RenderTextureInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_BufferPtr_1() { return static_cast<int32_t>(offsetof(RenderBuffer_t586150500, ___m_BufferPtr_1)); }
	inline intptr_t get_m_BufferPtr_1() const { return ___m_BufferPtr_1; }
	inline intptr_t* get_address_of_m_BufferPtr_1() { return &___m_BufferPtr_1; }
	inline void set_m_BufferPtr_1(intptr_t value)
	{
		___m_BufferPtr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERBUFFER_T586150500_H
#ifndef BUILTINRENDERTEXTURETYPE_T2399837169_H
#define BUILTINRENDERTEXTURETYPE_T2399837169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.BuiltinRenderTextureType
struct  BuiltinRenderTextureType_t2399837169 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t2399837169, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILTINRENDERTEXTURETYPE_T2399837169_H
#ifndef SSRRESOLUTION_T161222554_H
#define SSRRESOLUTION_T161222554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/SSRResolution
struct  SSRResolution_t161222554 
{
public:
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionModel/SSRResolution::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SSRResolution_t161222554, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSRRESOLUTION_T161222554_H
#ifndef SSRREFLECTIONBLENDTYPE_T3026770880_H
#define SSRREFLECTIONBLENDTYPE_T3026770880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/SSRReflectionBlendType
struct  SSRReflectionBlendType_t3026770880 
{
public:
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionModel/SSRReflectionBlendType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SSRReflectionBlendType_t3026770880, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSRREFLECTIONBLENDTYPE_T3026770880_H
#ifndef PASSINDEX_T1642913883_H
#define PASSINDEX_T1642913883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/PassIndex
struct  PassIndex_t1642913883 
{
public:
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/PassIndex::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PassIndex_t1642913883, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PASSINDEX_T1642913883_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T3238393121_H
#define POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T3238393121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.UserLutModel>
struct  PostProcessingComponentRenderTexture_1_t3238393121  : public PostProcessingComponent_1_t963284282
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSTPROCESSINGCOMPONENTRENDERTEXTURE_1_T3238393121_H
#ifndef USERLUTMODEL_T1670108080_H
#define USERLUTMODEL_T1670108080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.UserLutModel
struct  UserLutModel_t1670108080  : public PostProcessingModel_t540111976
{
public:
	// UnityEngine.PostProcessing.UserLutModel/Settings UnityEngine.PostProcessing.UserLutModel::m_Settings
	Settings_t3006579223  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(UserLutModel_t1670108080, ___m_Settings_1)); }
	inline Settings_t3006579223  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t3006579223 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t3006579223  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERLUTMODEL_T1670108080_H
#ifndef TEXTUREWRAPMODE_T584250749_H
#define TEXTUREWRAPMODE_T584250749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t584250749 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureWrapMode_t584250749, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREWRAPMODE_T584250749_H
#ifndef FILTERMODE_T3761284007_H
#define FILTERMODE_T3761284007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FilterMode
struct  FilterMode_t3761284007 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FilterMode_t3761284007, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILTERMODE_T3761284007_H
#ifndef RENDERTEXTUREFORMAT_T962350765_H
#define RENDERTEXTUREFORMAT_T962350765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t962350765 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t962350765, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREFORMAT_T962350765_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef TRACKBALLATTRIBUTE_T219960417_H
#define TRACKBALLATTRIBUTE_T219960417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.TrackballAttribute
struct  TrackballAttribute_t219960417  : public PropertyAttribute_t3677895545
{
public:
	// System.String UnityEngine.PostProcessing.TrackballAttribute::method
	String_t* ___method_0;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(TrackballAttribute_t219960417, ___method_0)); }
	inline String_t* get_method_0() const { return ___method_0; }
	inline String_t** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(String_t* value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((&___method_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKBALLATTRIBUTE_T219960417_H
#ifndef RENDERTEXTUREREADWRITE_T1793271918_H
#define RENDERTEXTUREREADWRITE_T1793271918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureReadWrite
struct  RenderTextureReadWrite_t1793271918 
{
public:
	// System.Int32 UnityEngine.RenderTextureReadWrite::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureReadWrite_t1793271918, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREREADWRITE_T1793271918_H
#ifndef TRACKBALLGROUPATTRIBUTE_T624107828_H
#define TRACKBALLGROUPATTRIBUTE_T624107828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.TrackballGroupAttribute
struct  TrackballGroupAttribute_t624107828  : public PropertyAttribute_t3677895545
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKBALLGROUPATTRIBUTE_T624107828_H
#ifndef METHOD_T287042102_H
#define METHOD_T287042102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/Method
struct  Method_t287042102 
{
public:
	// System.Int32 UnityEngine.PostProcessing.AntialiasingModel/Method::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Method_t287042102, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHOD_T287042102_H
#ifndef VIGNETTECOMPONENT_T3243642943_H
#define VIGNETTECOMPONENT_T3243642943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.VignetteComponent
struct  VignetteComponent_t3243642943  : public PostProcessingComponentRenderTexture_1_t118834922
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIGNETTECOMPONENT_T3243642943_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef SCREENSPACEREFLECTIONCOMPONENT_T856094247_H
#define SCREENSPACEREFLECTIONCOMPONENT_T856094247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionComponent
struct  ScreenSpaceReflectionComponent_t856094247  : public PostProcessingComponentCommandBuffer_1_t6679325
{
public:
	// System.Boolean UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::k_HighlightSuppression
	bool ___k_HighlightSuppression_2;
	// System.Boolean UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::k_TraceBehindObjects
	bool ___k_TraceBehindObjects_3;
	// System.Boolean UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::k_TreatBackfaceHitAsMiss
	bool ___k_TreatBackfaceHitAsMiss_4;
	// System.Boolean UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::k_BilateralUpsample
	bool ___k_BilateralUpsample_5;
	// System.Int32[] UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::m_ReflectionTextures
	Int32U5BU5D_t385246372* ___m_ReflectionTextures_6;

public:
	inline static int32_t get_offset_of_k_HighlightSuppression_2() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionComponent_t856094247, ___k_HighlightSuppression_2)); }
	inline bool get_k_HighlightSuppression_2() const { return ___k_HighlightSuppression_2; }
	inline bool* get_address_of_k_HighlightSuppression_2() { return &___k_HighlightSuppression_2; }
	inline void set_k_HighlightSuppression_2(bool value)
	{
		___k_HighlightSuppression_2 = value;
	}

	inline static int32_t get_offset_of_k_TraceBehindObjects_3() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionComponent_t856094247, ___k_TraceBehindObjects_3)); }
	inline bool get_k_TraceBehindObjects_3() const { return ___k_TraceBehindObjects_3; }
	inline bool* get_address_of_k_TraceBehindObjects_3() { return &___k_TraceBehindObjects_3; }
	inline void set_k_TraceBehindObjects_3(bool value)
	{
		___k_TraceBehindObjects_3 = value;
	}

	inline static int32_t get_offset_of_k_TreatBackfaceHitAsMiss_4() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionComponent_t856094247, ___k_TreatBackfaceHitAsMiss_4)); }
	inline bool get_k_TreatBackfaceHitAsMiss_4() const { return ___k_TreatBackfaceHitAsMiss_4; }
	inline bool* get_address_of_k_TreatBackfaceHitAsMiss_4() { return &___k_TreatBackfaceHitAsMiss_4; }
	inline void set_k_TreatBackfaceHitAsMiss_4(bool value)
	{
		___k_TreatBackfaceHitAsMiss_4 = value;
	}

	inline static int32_t get_offset_of_k_BilateralUpsample_5() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionComponent_t856094247, ___k_BilateralUpsample_5)); }
	inline bool get_k_BilateralUpsample_5() const { return ___k_BilateralUpsample_5; }
	inline bool* get_address_of_k_BilateralUpsample_5() { return &___k_BilateralUpsample_5; }
	inline void set_k_BilateralUpsample_5(bool value)
	{
		___k_BilateralUpsample_5 = value;
	}

	inline static int32_t get_offset_of_m_ReflectionTextures_6() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionComponent_t856094247, ___m_ReflectionTextures_6)); }
	inline Int32U5BU5D_t385246372* get_m_ReflectionTextures_6() const { return ___m_ReflectionTextures_6; }
	inline Int32U5BU5D_t385246372** get_address_of_m_ReflectionTextures_6() { return &___m_ReflectionTextures_6; }
	inline void set_m_ReflectionTextures_6(Int32U5BU5D_t385246372* value)
	{
		___m_ReflectionTextures_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_ReflectionTextures_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENSPACEREFLECTIONCOMPONENT_T856094247_H
#ifndef REFLECTIONSETTINGS_T282755190_H
#define REFLECTIONSETTINGS_T282755190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings
struct  ReflectionSettings_t282755190 
{
public:
	// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/SSRReflectionBlendType UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::blendType
	int32_t ___blendType_0;
	// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/SSRResolution UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::reflectionQuality
	int32_t ___reflectionQuality_1;
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::maxDistance
	float ___maxDistance_2;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::iterationCount
	int32_t ___iterationCount_3;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::stepSize
	int32_t ___stepSize_4;
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::widthModifier
	float ___widthModifier_5;
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::reflectionBlur
	float ___reflectionBlur_6;
	// System.Boolean UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::reflectBackfaces
	bool ___reflectBackfaces_7;

public:
	inline static int32_t get_offset_of_blendType_0() { return static_cast<int32_t>(offsetof(ReflectionSettings_t282755190, ___blendType_0)); }
	inline int32_t get_blendType_0() const { return ___blendType_0; }
	inline int32_t* get_address_of_blendType_0() { return &___blendType_0; }
	inline void set_blendType_0(int32_t value)
	{
		___blendType_0 = value;
	}

	inline static int32_t get_offset_of_reflectionQuality_1() { return static_cast<int32_t>(offsetof(ReflectionSettings_t282755190, ___reflectionQuality_1)); }
	inline int32_t get_reflectionQuality_1() const { return ___reflectionQuality_1; }
	inline int32_t* get_address_of_reflectionQuality_1() { return &___reflectionQuality_1; }
	inline void set_reflectionQuality_1(int32_t value)
	{
		___reflectionQuality_1 = value;
	}

	inline static int32_t get_offset_of_maxDistance_2() { return static_cast<int32_t>(offsetof(ReflectionSettings_t282755190, ___maxDistance_2)); }
	inline float get_maxDistance_2() const { return ___maxDistance_2; }
	inline float* get_address_of_maxDistance_2() { return &___maxDistance_2; }
	inline void set_maxDistance_2(float value)
	{
		___maxDistance_2 = value;
	}

	inline static int32_t get_offset_of_iterationCount_3() { return static_cast<int32_t>(offsetof(ReflectionSettings_t282755190, ___iterationCount_3)); }
	inline int32_t get_iterationCount_3() const { return ___iterationCount_3; }
	inline int32_t* get_address_of_iterationCount_3() { return &___iterationCount_3; }
	inline void set_iterationCount_3(int32_t value)
	{
		___iterationCount_3 = value;
	}

	inline static int32_t get_offset_of_stepSize_4() { return static_cast<int32_t>(offsetof(ReflectionSettings_t282755190, ___stepSize_4)); }
	inline int32_t get_stepSize_4() const { return ___stepSize_4; }
	inline int32_t* get_address_of_stepSize_4() { return &___stepSize_4; }
	inline void set_stepSize_4(int32_t value)
	{
		___stepSize_4 = value;
	}

	inline static int32_t get_offset_of_widthModifier_5() { return static_cast<int32_t>(offsetof(ReflectionSettings_t282755190, ___widthModifier_5)); }
	inline float get_widthModifier_5() const { return ___widthModifier_5; }
	inline float* get_address_of_widthModifier_5() { return &___widthModifier_5; }
	inline void set_widthModifier_5(float value)
	{
		___widthModifier_5 = value;
	}

	inline static int32_t get_offset_of_reflectionBlur_6() { return static_cast<int32_t>(offsetof(ReflectionSettings_t282755190, ___reflectionBlur_6)); }
	inline float get_reflectionBlur_6() const { return ___reflectionBlur_6; }
	inline float* get_address_of_reflectionBlur_6() { return &___reflectionBlur_6; }
	inline void set_reflectionBlur_6(float value)
	{
		___reflectionBlur_6 = value;
	}

	inline static int32_t get_offset_of_reflectBackfaces_7() { return static_cast<int32_t>(offsetof(ReflectionSettings_t282755190, ___reflectBackfaces_7)); }
	inline bool get_reflectBackfaces_7() const { return ___reflectBackfaces_7; }
	inline bool* get_address_of_reflectBackfaces_7() { return &___reflectBackfaces_7; }
	inline void set_reflectBackfaces_7(bool value)
	{
		___reflectBackfaces_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings
struct ReflectionSettings_t282755190_marshaled_pinvoke
{
	int32_t ___blendType_0;
	int32_t ___reflectionQuality_1;
	float ___maxDistance_2;
	int32_t ___iterationCount_3;
	int32_t ___stepSize_4;
	float ___widthModifier_5;
	float ___reflectionBlur_6;
	int32_t ___reflectBackfaces_7;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings
struct ReflectionSettings_t282755190_marshaled_com
{
	int32_t ___blendType_0;
	int32_t ___reflectionQuality_1;
	float ___maxDistance_2;
	int32_t ___iterationCount_3;
	int32_t ___stepSize_4;
	float ___widthModifier_5;
	float ___reflectionBlur_6;
	int32_t ___reflectBackfaces_7;
};
#endif // REFLECTIONSETTINGS_T282755190_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef FXAASETTINGS_T1280675075_H
#define FXAASETTINGS_T1280675075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/FxaaSettings
struct  FxaaSettings_t1280675075 
{
public:
	// UnityEngine.PostProcessing.AntialiasingModel/FxaaPreset UnityEngine.PostProcessing.AntialiasingModel/FxaaSettings::preset
	int32_t ___preset_0;

public:
	inline static int32_t get_offset_of_preset_0() { return static_cast<int32_t>(offsetof(FxaaSettings_t1280675075, ___preset_0)); }
	inline int32_t get_preset_0() const { return ___preset_0; }
	inline int32_t* get_address_of_preset_0() { return &___preset_0; }
	inline void set_preset_0(int32_t value)
	{
		___preset_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FXAASETTINGS_T1280675075_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef RENDERTARGETIDENTIFIER_T2079184500_H
#define RENDERTARGETIDENTIFIER_T2079184500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.RenderTargetIdentifier
struct  RenderTargetIdentifier_t2079184500 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_0;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_2;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_3;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_4;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_5;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_6;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_NameID_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_NameID_1)); }
	inline int32_t get_m_NameID_1() const { return ___m_NameID_1; }
	inline int32_t* get_address_of_m_NameID_1() { return &___m_NameID_1; }
	inline void set_m_NameID_1(int32_t value)
	{
		___m_NameID_1 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_InstanceID_2)); }
	inline int32_t get_m_InstanceID_2() const { return ___m_InstanceID_2; }
	inline int32_t* get_address_of_m_InstanceID_2() { return &___m_InstanceID_2; }
	inline void set_m_InstanceID_2(int32_t value)
	{
		___m_InstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_BufferPointer_3() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_BufferPointer_3)); }
	inline intptr_t get_m_BufferPointer_3() const { return ___m_BufferPointer_3; }
	inline intptr_t* get_address_of_m_BufferPointer_3() { return &___m_BufferPointer_3; }
	inline void set_m_BufferPointer_3(intptr_t value)
	{
		___m_BufferPointer_3 = value;
	}

	inline static int32_t get_offset_of_m_MipLevel_4() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_MipLevel_4)); }
	inline int32_t get_m_MipLevel_4() const { return ___m_MipLevel_4; }
	inline int32_t* get_address_of_m_MipLevel_4() { return &___m_MipLevel_4; }
	inline void set_m_MipLevel_4(int32_t value)
	{
		___m_MipLevel_4 = value;
	}

	inline static int32_t get_offset_of_m_CubeFace_5() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_CubeFace_5)); }
	inline int32_t get_m_CubeFace_5() const { return ___m_CubeFace_5; }
	inline int32_t* get_address_of_m_CubeFace_5() { return &___m_CubeFace_5; }
	inline void set_m_CubeFace_5(int32_t value)
	{
		___m_CubeFace_5 = value;
	}

	inline static int32_t get_offset_of_m_DepthSlice_6() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t2079184500, ___m_DepthSlice_6)); }
	inline int32_t get_m_DepthSlice_6() const { return ___m_DepthSlice_6; }
	inline int32_t* get_address_of_m_DepthSlice_6() { return &___m_DepthSlice_6; }
	inline void set_m_DepthSlice_6(int32_t value)
	{
		___m_DepthSlice_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTARGETIDENTIFIER_T2079184500_H
#ifndef POINTEREVENTDATA_T3807901092_H
#define POINTEREVENTDATA_T3807901092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_t3807901092  : public BaseEventData_t3903027533
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t1113636619 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t1113636619 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t1113636619 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t1113636619 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t1113636619 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t2585711361 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t2156229523  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t2156229523  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t2156229523  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t3722313464  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t3722313464  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t2156229523  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_t1113636619 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_t1113636619 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerEnterU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___m_PointerPress_3)); }
	inline GameObject_t1113636619 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_t1113636619 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_t1113636619 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerPress_3), value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_t1113636619 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_t1113636619 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_t1113636619 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClastPressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_t1113636619 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_t1113636619 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_t1113636619 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrawPointerPressU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_t1113636619 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_t1113636619 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerDragU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t3360306849  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t3360306849  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t3360306849  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t3360306849  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___hovered_9)); }
	inline List_1_t2585711361 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t2585711361 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t2585711361 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((&___hovered_9), value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_t2156229523  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_t2156229523 * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_t2156229523  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_t2156229523  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_t2156229523 * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_t2156229523  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_t2156229523  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_t2156229523 * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_t2156229523  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_t3722313464  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_t3722313464 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_t3722313464  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_t3722313464  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_t3722313464 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_t3722313464  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_t2156229523  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_t2156229523 * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_t2156229523  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTDATA_T3807901092_H
#ifndef TAACOMPONENT_T3791749658_H
#define TAACOMPONENT_T3791749658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.TaaComponent
struct  TaaComponent_t3791749658  : public PostProcessingComponentRenderTexture_1_t3089424429
{
public:
	// UnityEngine.RenderBuffer[] UnityEngine.PostProcessing.TaaComponent::m_MRT
	RenderBufferU5BU5D_t1615831949* ___m_MRT_4;
	// System.Int32 UnityEngine.PostProcessing.TaaComponent::m_SampleIndex
	int32_t ___m_SampleIndex_5;
	// System.Boolean UnityEngine.PostProcessing.TaaComponent::m_ResetHistory
	bool ___m_ResetHistory_6;
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.TaaComponent::m_HistoryTexture
	RenderTexture_t2108887433 * ___m_HistoryTexture_7;

public:
	inline static int32_t get_offset_of_m_MRT_4() { return static_cast<int32_t>(offsetof(TaaComponent_t3791749658, ___m_MRT_4)); }
	inline RenderBufferU5BU5D_t1615831949* get_m_MRT_4() const { return ___m_MRT_4; }
	inline RenderBufferU5BU5D_t1615831949** get_address_of_m_MRT_4() { return &___m_MRT_4; }
	inline void set_m_MRT_4(RenderBufferU5BU5D_t1615831949* value)
	{
		___m_MRT_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_MRT_4), value);
	}

	inline static int32_t get_offset_of_m_SampleIndex_5() { return static_cast<int32_t>(offsetof(TaaComponent_t3791749658, ___m_SampleIndex_5)); }
	inline int32_t get_m_SampleIndex_5() const { return ___m_SampleIndex_5; }
	inline int32_t* get_address_of_m_SampleIndex_5() { return &___m_SampleIndex_5; }
	inline void set_m_SampleIndex_5(int32_t value)
	{
		___m_SampleIndex_5 = value;
	}

	inline static int32_t get_offset_of_m_ResetHistory_6() { return static_cast<int32_t>(offsetof(TaaComponent_t3791749658, ___m_ResetHistory_6)); }
	inline bool get_m_ResetHistory_6() const { return ___m_ResetHistory_6; }
	inline bool* get_address_of_m_ResetHistory_6() { return &___m_ResetHistory_6; }
	inline void set_m_ResetHistory_6(bool value)
	{
		___m_ResetHistory_6 = value;
	}

	inline static int32_t get_offset_of_m_HistoryTexture_7() { return static_cast<int32_t>(offsetof(TaaComponent_t3791749658, ___m_HistoryTexture_7)); }
	inline RenderTexture_t2108887433 * get_m_HistoryTexture_7() const { return ___m_HistoryTexture_7; }
	inline RenderTexture_t2108887433 ** get_address_of_m_HistoryTexture_7() { return &___m_HistoryTexture_7; }
	inline void set_m_HistoryTexture_7(RenderTexture_t2108887433 * value)
	{
		___m_HistoryTexture_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_HistoryTexture_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAACOMPONENT_T3791749658_H
#ifndef USERLUTCOMPONENT_T2843161776_H
#define USERLUTCOMPONENT_T2843161776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.UserLutComponent
struct  UserLutComponent_t2843161776  : public PostProcessingComponentRenderTexture_1_t3238393121
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERLUTCOMPONENT_T2843161776_H
#ifndef STANDALONEINPUT_T1877793759_H
#define STANDALONEINPUT_T1877793759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct  StandaloneInput_t1877793759  : public VirtualInput_t4247650776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDALONEINPUT_T1877793759_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef MOBILEINPUT_T3295884756_H
#define MOBILEINPUT_T3295884756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct  MobileInput_t3295884756  : public VirtualInput_t4247650776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOBILEINPUT_T3295884756_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef SETTINGS_T1354494600_H
#define SETTINGS_T1354494600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.VignetteModel/Settings
struct  Settings_t1354494600 
{
public:
	// UnityEngine.PostProcessing.VignetteModel/Mode UnityEngine.PostProcessing.VignetteModel/Settings::mode
	int32_t ___mode_0;
	// UnityEngine.Color UnityEngine.PostProcessing.VignetteModel/Settings::color
	Color_t2555686324  ___color_1;
	// UnityEngine.Vector2 UnityEngine.PostProcessing.VignetteModel/Settings::center
	Vector2_t2156229523  ___center_2;
	// System.Single UnityEngine.PostProcessing.VignetteModel/Settings::intensity
	float ___intensity_3;
	// System.Single UnityEngine.PostProcessing.VignetteModel/Settings::smoothness
	float ___smoothness_4;
	// System.Single UnityEngine.PostProcessing.VignetteModel/Settings::roundness
	float ___roundness_5;
	// UnityEngine.Texture UnityEngine.PostProcessing.VignetteModel/Settings::mask
	Texture_t3661962703 * ___mask_6;
	// System.Single UnityEngine.PostProcessing.VignetteModel/Settings::opacity
	float ___opacity_7;
	// System.Boolean UnityEngine.PostProcessing.VignetteModel/Settings::rounded
	bool ___rounded_8;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(Settings_t1354494600, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(Settings_t1354494600, ___color_1)); }
	inline Color_t2555686324  get_color_1() const { return ___color_1; }
	inline Color_t2555686324 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_t2555686324  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_center_2() { return static_cast<int32_t>(offsetof(Settings_t1354494600, ___center_2)); }
	inline Vector2_t2156229523  get_center_2() const { return ___center_2; }
	inline Vector2_t2156229523 * get_address_of_center_2() { return &___center_2; }
	inline void set_center_2(Vector2_t2156229523  value)
	{
		___center_2 = value;
	}

	inline static int32_t get_offset_of_intensity_3() { return static_cast<int32_t>(offsetof(Settings_t1354494600, ___intensity_3)); }
	inline float get_intensity_3() const { return ___intensity_3; }
	inline float* get_address_of_intensity_3() { return &___intensity_3; }
	inline void set_intensity_3(float value)
	{
		___intensity_3 = value;
	}

	inline static int32_t get_offset_of_smoothness_4() { return static_cast<int32_t>(offsetof(Settings_t1354494600, ___smoothness_4)); }
	inline float get_smoothness_4() const { return ___smoothness_4; }
	inline float* get_address_of_smoothness_4() { return &___smoothness_4; }
	inline void set_smoothness_4(float value)
	{
		___smoothness_4 = value;
	}

	inline static int32_t get_offset_of_roundness_5() { return static_cast<int32_t>(offsetof(Settings_t1354494600, ___roundness_5)); }
	inline float get_roundness_5() const { return ___roundness_5; }
	inline float* get_address_of_roundness_5() { return &___roundness_5; }
	inline void set_roundness_5(float value)
	{
		___roundness_5 = value;
	}

	inline static int32_t get_offset_of_mask_6() { return static_cast<int32_t>(offsetof(Settings_t1354494600, ___mask_6)); }
	inline Texture_t3661962703 * get_mask_6() const { return ___mask_6; }
	inline Texture_t3661962703 ** get_address_of_mask_6() { return &___mask_6; }
	inline void set_mask_6(Texture_t3661962703 * value)
	{
		___mask_6 = value;
		Il2CppCodeGenWriteBarrier((&___mask_6), value);
	}

	inline static int32_t get_offset_of_opacity_7() { return static_cast<int32_t>(offsetof(Settings_t1354494600, ___opacity_7)); }
	inline float get_opacity_7() const { return ___opacity_7; }
	inline float* get_address_of_opacity_7() { return &___opacity_7; }
	inline void set_opacity_7(float value)
	{
		___opacity_7 = value;
	}

	inline static int32_t get_offset_of_rounded_8() { return static_cast<int32_t>(offsetof(Settings_t1354494600, ___rounded_8)); }
	inline bool get_rounded_8() const { return ___rounded_8; }
	inline bool* get_address_of_rounded_8() { return &___rounded_8; }
	inline void set_rounded_8(bool value)
	{
		___rounded_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.VignetteModel/Settings
struct Settings_t1354494600_marshaled_pinvoke
{
	int32_t ___mode_0;
	Color_t2555686324  ___color_1;
	Vector2_t2156229523  ___center_2;
	float ___intensity_3;
	float ___smoothness_4;
	float ___roundness_5;
	Texture_t3661962703 * ___mask_6;
	float ___opacity_7;
	int32_t ___rounded_8;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.VignetteModel/Settings
struct Settings_t1354494600_marshaled_com
{
	int32_t ___mode_0;
	Color_t2555686324  ___color_1;
	Vector2_t2156229523  ___center_2;
	float ___intensity_3;
	float ___smoothness_4;
	float ___roundness_5;
	Texture_t3661962703 * ___mask_6;
	float ___opacity_7;
	int32_t ___rounded_8;
};
#endif // SETTINGS_T1354494600_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef VIGNETTEMODEL_T2845517177_H
#define VIGNETTEMODEL_T2845517177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.VignetteModel
struct  VignetteModel_t2845517177  : public PostProcessingModel_t540111976
{
public:
	// UnityEngine.PostProcessing.VignetteModel/Settings UnityEngine.PostProcessing.VignetteModel::m_Settings
	Settings_t1354494600  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(VignetteModel_t2845517177, ___m_Settings_1)); }
	inline Settings_t1354494600  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t1354494600 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t1354494600  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIGNETTEMODEL_T2845517177_H
#ifndef SETTINGS_T1995791524_H
#define SETTINGS_T1995791524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings
struct  Settings_t1995791524 
{
public:
	// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings::reflection
	ReflectionSettings_t282755190  ___reflection_0;
	// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/IntensitySettings UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings::intensity
	IntensitySettings_t1721872184  ___intensity_1;
	// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ScreenEdgeMask UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings::screenEdgeMask
	ScreenEdgeMask_t4063288584  ___screenEdgeMask_2;

public:
	inline static int32_t get_offset_of_reflection_0() { return static_cast<int32_t>(offsetof(Settings_t1995791524, ___reflection_0)); }
	inline ReflectionSettings_t282755190  get_reflection_0() const { return ___reflection_0; }
	inline ReflectionSettings_t282755190 * get_address_of_reflection_0() { return &___reflection_0; }
	inline void set_reflection_0(ReflectionSettings_t282755190  value)
	{
		___reflection_0 = value;
	}

	inline static int32_t get_offset_of_intensity_1() { return static_cast<int32_t>(offsetof(Settings_t1995791524, ___intensity_1)); }
	inline IntensitySettings_t1721872184  get_intensity_1() const { return ___intensity_1; }
	inline IntensitySettings_t1721872184 * get_address_of_intensity_1() { return &___intensity_1; }
	inline void set_intensity_1(IntensitySettings_t1721872184  value)
	{
		___intensity_1 = value;
	}

	inline static int32_t get_offset_of_screenEdgeMask_2() { return static_cast<int32_t>(offsetof(Settings_t1995791524, ___screenEdgeMask_2)); }
	inline ScreenEdgeMask_t4063288584  get_screenEdgeMask_2() const { return ___screenEdgeMask_2; }
	inline ScreenEdgeMask_t4063288584 * get_address_of_screenEdgeMask_2() { return &___screenEdgeMask_2; }
	inline void set_screenEdgeMask_2(ScreenEdgeMask_t4063288584  value)
	{
		___screenEdgeMask_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings
struct Settings_t1995791524_marshaled_pinvoke
{
	ReflectionSettings_t282755190_marshaled_pinvoke ___reflection_0;
	IntensitySettings_t1721872184  ___intensity_1;
	ScreenEdgeMask_t4063288584  ___screenEdgeMask_2;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings
struct Settings_t1995791524_marshaled_com
{
	ReflectionSettings_t282755190_marshaled_com ___reflection_0;
	IntensitySettings_t1721872184  ___intensity_1;
	ScreenEdgeMask_t4063288584  ___screenEdgeMask_2;
};
#endif // SETTINGS_T1995791524_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef SETTINGS_T4292431647_H
#define SETTINGS_T4292431647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/Settings
struct  Settings_t4292431647 
{
public:
	// UnityEngine.PostProcessing.AntialiasingModel/Method UnityEngine.PostProcessing.AntialiasingModel/Settings::method
	int32_t ___method_0;
	// UnityEngine.PostProcessing.AntialiasingModel/FxaaSettings UnityEngine.PostProcessing.AntialiasingModel/Settings::fxaaSettings
	FxaaSettings_t1280675075  ___fxaaSettings_1;
	// UnityEngine.PostProcessing.AntialiasingModel/TaaSettings UnityEngine.PostProcessing.AntialiasingModel/Settings::taaSettings
	TaaSettings_t2709374970  ___taaSettings_2;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(Settings_t4292431647, ___method_0)); }
	inline int32_t get_method_0() const { return ___method_0; }
	inline int32_t* get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(int32_t value)
	{
		___method_0 = value;
	}

	inline static int32_t get_offset_of_fxaaSettings_1() { return static_cast<int32_t>(offsetof(Settings_t4292431647, ___fxaaSettings_1)); }
	inline FxaaSettings_t1280675075  get_fxaaSettings_1() const { return ___fxaaSettings_1; }
	inline FxaaSettings_t1280675075 * get_address_of_fxaaSettings_1() { return &___fxaaSettings_1; }
	inline void set_fxaaSettings_1(FxaaSettings_t1280675075  value)
	{
		___fxaaSettings_1 = value;
	}

	inline static int32_t get_offset_of_taaSettings_2() { return static_cast<int32_t>(offsetof(Settings_t4292431647, ___taaSettings_2)); }
	inline TaaSettings_t2709374970  get_taaSettings_2() const { return ___taaSettings_2; }
	inline TaaSettings_t2709374970 * get_address_of_taaSettings_2() { return &___taaSettings_2; }
	inline void set_taaSettings_2(TaaSettings_t2709374970  value)
	{
		___taaSettings_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGS_T4292431647_H
#ifndef FUNC_2_T4093140010_H
#define FUNC_2_T4093140010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<UnityEngine.Vector2,UnityEngine.Matrix4x4>
struct  Func_2_t4093140010  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T4093140010_H
#ifndef WINDZONE_T1835817526_H
#define WINDZONE_T1835817526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WindZone
struct  WindZone_t1835817526  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDZONE_T1835817526_H
#ifndef UNITYACTION_1_T1982102915_H
#define UNITYACTION_1_T1982102915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Single>
struct  UnityAction_1_t1982102915  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T1982102915_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef SCREENSPACEREFLECTIONMODEL_T3026344732_H
#define SCREENSPACEREFLECTIONMODEL_T3026344732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionModel
struct  ScreenSpaceReflectionModel_t3026344732  : public PostProcessingModel_t540111976
{
public:
	// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings UnityEngine.PostProcessing.ScreenSpaceReflectionModel::m_Settings
	Settings_t1995791524  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionModel_t3026344732, ___m_Settings_1)); }
	inline Settings_t1995791524  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t1995791524 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t1995791524  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENSPACEREFLECTIONMODEL_T3026344732_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public Behaviour_t1437897464
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef ANTIALIASINGMODEL_T1521139388_H
#define ANTIALIASINGMODEL_T1521139388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel
struct  AntialiasingModel_t1521139388  : public PostProcessingModel_t540111976
{
public:
	// UnityEngine.PostProcessing.AntialiasingModel/Settings UnityEngine.PostProcessing.AntialiasingModel::m_Settings
	Settings_t4292431647  ___m_Settings_1;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(AntialiasingModel_t1521139388, ___m_Settings_1)); }
	inline Settings_t4292431647  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t4292431647 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t4292431647  value)
	{
		___m_Settings_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANTIALIASINGMODEL_T1521139388_H
#ifndef MOBILECONTROLRIG_T2085015456_H
#define MOBILECONTROLRIG_T2085015456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySampleAssets.CrossPlatformInput.MobileControlRig
struct  MobileControlRig_t2085015456  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOBILECONTROLRIG_T2085015456_H
#ifndef VIRTUALJOYSTICK_T1105065689_H
#define VIRTUALJOYSTICK_T1105065689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VirtualJoystick
struct  VirtualJoystick_t1105065689  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Image VirtualJoystick::bgImg
	Image_t2670269651 * ___bgImg_2;
	// UnityEngine.UI.Image VirtualJoystick::joystickImg
	Image_t2670269651 * ___joystickImg_3;
	// UnityEngine.Vector3 VirtualJoystick::<InputDirection>k__BackingField
	Vector3_t3722313464  ___U3CInputDirectionU3Ek__BackingField_4;
	// System.Boolean VirtualJoystick::IsDown
	bool ___IsDown_5;

public:
	inline static int32_t get_offset_of_bgImg_2() { return static_cast<int32_t>(offsetof(VirtualJoystick_t1105065689, ___bgImg_2)); }
	inline Image_t2670269651 * get_bgImg_2() const { return ___bgImg_2; }
	inline Image_t2670269651 ** get_address_of_bgImg_2() { return &___bgImg_2; }
	inline void set_bgImg_2(Image_t2670269651 * value)
	{
		___bgImg_2 = value;
		Il2CppCodeGenWriteBarrier((&___bgImg_2), value);
	}

	inline static int32_t get_offset_of_joystickImg_3() { return static_cast<int32_t>(offsetof(VirtualJoystick_t1105065689, ___joystickImg_3)); }
	inline Image_t2670269651 * get_joystickImg_3() const { return ___joystickImg_3; }
	inline Image_t2670269651 ** get_address_of_joystickImg_3() { return &___joystickImg_3; }
	inline void set_joystickImg_3(Image_t2670269651 * value)
	{
		___joystickImg_3 = value;
		Il2CppCodeGenWriteBarrier((&___joystickImg_3), value);
	}

	inline static int32_t get_offset_of_U3CInputDirectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VirtualJoystick_t1105065689, ___U3CInputDirectionU3Ek__BackingField_4)); }
	inline Vector3_t3722313464  get_U3CInputDirectionU3Ek__BackingField_4() const { return ___U3CInputDirectionU3Ek__BackingField_4; }
	inline Vector3_t3722313464 * get_address_of_U3CInputDirectionU3Ek__BackingField_4() { return &___U3CInputDirectionU3Ek__BackingField_4; }
	inline void set_U3CInputDirectionU3Ek__BackingField_4(Vector3_t3722313464  value)
	{
		___U3CInputDirectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_IsDown_5() { return static_cast<int32_t>(offsetof(VirtualJoystick_t1105065689, ___IsDown_5)); }
	inline bool get_IsDown_5() const { return ___IsDown_5; }
	inline bool* get_address_of_IsDown_5() { return &___IsDown_5; }
	inline void set_IsDown_5(bool value)
	{
		___IsDown_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALJOYSTICK_T1105065689_H
#ifndef USERGUI_T1425096078_H
#define USERGUI_T1425096078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UserGUI
struct  UserGUI_t1425096078  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject UserGUI::m_gameObject
	GameObject_t1113636619 * ___m_gameObject_2;
	// System.String UserGUI::m_display
	String_t* ___m_display_3;
	// System.Boolean UserGUI::m_updateText
	bool ___m_updateText_5;
	// UnityEngine.Quaternion UserGUI::m_rotation
	Quaternion_t2301928331  ___m_rotation_6;
	// UnityEngine.UI.Text UserGUI::m_Text
	Text_t1901882714 * ___m_Text_7;

public:
	inline static int32_t get_offset_of_m_gameObject_2() { return static_cast<int32_t>(offsetof(UserGUI_t1425096078, ___m_gameObject_2)); }
	inline GameObject_t1113636619 * get_m_gameObject_2() const { return ___m_gameObject_2; }
	inline GameObject_t1113636619 ** get_address_of_m_gameObject_2() { return &___m_gameObject_2; }
	inline void set_m_gameObject_2(GameObject_t1113636619 * value)
	{
		___m_gameObject_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_gameObject_2), value);
	}

	inline static int32_t get_offset_of_m_display_3() { return static_cast<int32_t>(offsetof(UserGUI_t1425096078, ___m_display_3)); }
	inline String_t* get_m_display_3() const { return ___m_display_3; }
	inline String_t** get_address_of_m_display_3() { return &___m_display_3; }
	inline void set_m_display_3(String_t* value)
	{
		___m_display_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_display_3), value);
	}

	inline static int32_t get_offset_of_m_updateText_5() { return static_cast<int32_t>(offsetof(UserGUI_t1425096078, ___m_updateText_5)); }
	inline bool get_m_updateText_5() const { return ___m_updateText_5; }
	inline bool* get_address_of_m_updateText_5() { return &___m_updateText_5; }
	inline void set_m_updateText_5(bool value)
	{
		___m_updateText_5 = value;
	}

	inline static int32_t get_offset_of_m_rotation_6() { return static_cast<int32_t>(offsetof(UserGUI_t1425096078, ___m_rotation_6)); }
	inline Quaternion_t2301928331  get_m_rotation_6() const { return ___m_rotation_6; }
	inline Quaternion_t2301928331 * get_address_of_m_rotation_6() { return &___m_rotation_6; }
	inline void set_m_rotation_6(Quaternion_t2301928331  value)
	{
		___m_rotation_6 = value;
	}

	inline static int32_t get_offset_of_m_Text_7() { return static_cast<int32_t>(offsetof(UserGUI_t1425096078, ___m_Text_7)); }
	inline Text_t1901882714 * get_m_Text_7() const { return ___m_Text_7; }
	inline Text_t1901882714 ** get_address_of_m_Text_7() { return &___m_Text_7; }
	inline void set_m_Text_7(Text_t1901882714 * value)
	{
		___m_Text_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERGUI_T1425096078_H
#ifndef VOLUMEHANDLER_T704224452_H
#define VOLUMEHANDLER_T704224452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VolumeHandler
struct  VolumeHandler_t704224452  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOLUMEHANDLER_T704224452_H
#ifndef FPSCOUNTER_T2351221284_H
#define FPSCOUNTER_T2351221284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.FPSCounter
struct  FPSCounter_t2351221284  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 UnityStandardAssets.Utility.FPSCounter::m_FpsAccumulator
	int32_t ___m_FpsAccumulator_3;
	// System.Single UnityStandardAssets.Utility.FPSCounter::m_FpsNextPeriod
	float ___m_FpsNextPeriod_4;
	// System.Int32 UnityStandardAssets.Utility.FPSCounter::m_CurrentFps
	int32_t ___m_CurrentFps_5;
	// UnityEngine.UI.Text UnityStandardAssets.Utility.FPSCounter::m_Text
	Text_t1901882714 * ___m_Text_7;

public:
	inline static int32_t get_offset_of_m_FpsAccumulator_3() { return static_cast<int32_t>(offsetof(FPSCounter_t2351221284, ___m_FpsAccumulator_3)); }
	inline int32_t get_m_FpsAccumulator_3() const { return ___m_FpsAccumulator_3; }
	inline int32_t* get_address_of_m_FpsAccumulator_3() { return &___m_FpsAccumulator_3; }
	inline void set_m_FpsAccumulator_3(int32_t value)
	{
		___m_FpsAccumulator_3 = value;
	}

	inline static int32_t get_offset_of_m_FpsNextPeriod_4() { return static_cast<int32_t>(offsetof(FPSCounter_t2351221284, ___m_FpsNextPeriod_4)); }
	inline float get_m_FpsNextPeriod_4() const { return ___m_FpsNextPeriod_4; }
	inline float* get_address_of_m_FpsNextPeriod_4() { return &___m_FpsNextPeriod_4; }
	inline void set_m_FpsNextPeriod_4(float value)
	{
		___m_FpsNextPeriod_4 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFps_5() { return static_cast<int32_t>(offsetof(FPSCounter_t2351221284, ___m_CurrentFps_5)); }
	inline int32_t get_m_CurrentFps_5() const { return ___m_CurrentFps_5; }
	inline int32_t* get_address_of_m_CurrentFps_5() { return &___m_CurrentFps_5; }
	inline void set_m_CurrentFps_5(int32_t value)
	{
		___m_CurrentFps_5 = value;
	}

	inline static int32_t get_offset_of_m_Text_7() { return static_cast<int32_t>(offsetof(FPSCounter_t2351221284, ___m_Text_7)); }
	inline Text_t1901882714 * get_m_Text_7() const { return ___m_Text_7; }
	inline Text_t1901882714 ** get_address_of_m_Text_7() { return &___m_Text_7; }
	inline void set_m_Text_7(Text_t1901882714 * value)
	{
		___m_Text_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FPSCOUNTER_T2351221284_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef SLIDER_T3903728902_H
#define SLIDER_T3903728902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider
struct  Slider_t3903728902  : public Selectable_t3250028441
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t3704657025 * ___m_FillRect_16;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t3704657025 * ___m_HandleRect_17;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_18;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_19;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_20;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_21;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_22;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t3180273144 * ___m_OnValueChanged_23;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t2670269651 * ___m_FillImage_24;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_t3600365921 * ___m_FillTransform_25;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t3704657025 * ___m_FillContainerRect_26;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_t3600365921 * ___m_HandleTransform_27;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t3704657025 * ___m_HandleContainerRect_28;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t2156229523  ___m_Offset_29;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_30;

public:
	inline static int32_t get_offset_of_m_FillRect_16() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillRect_16)); }
	inline RectTransform_t3704657025 * get_m_FillRect_16() const { return ___m_FillRect_16; }
	inline RectTransform_t3704657025 ** get_address_of_m_FillRect_16() { return &___m_FillRect_16; }
	inline void set_m_FillRect_16(RectTransform_t3704657025 * value)
	{
		___m_FillRect_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillRect_16), value);
	}

	inline static int32_t get_offset_of_m_HandleRect_17() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleRect_17)); }
	inline RectTransform_t3704657025 * get_m_HandleRect_17() const { return ___m_HandleRect_17; }
	inline RectTransform_t3704657025 ** get_address_of_m_HandleRect_17() { return &___m_HandleRect_17; }
	inline void set_m_HandleRect_17(RectTransform_t3704657025 * value)
	{
		___m_HandleRect_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleRect_17), value);
	}

	inline static int32_t get_offset_of_m_Direction_18() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Direction_18)); }
	inline int32_t get_m_Direction_18() const { return ___m_Direction_18; }
	inline int32_t* get_address_of_m_Direction_18() { return &___m_Direction_18; }
	inline void set_m_Direction_18(int32_t value)
	{
		___m_Direction_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_MinValue_19)); }
	inline float get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline float* get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(float value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_MaxValue_20)); }
	inline float get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline float* get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(float value)
	{
		___m_MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_21() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_WholeNumbers_21)); }
	inline bool get_m_WholeNumbers_21() const { return ___m_WholeNumbers_21; }
	inline bool* get_address_of_m_WholeNumbers_21() { return &___m_WholeNumbers_21; }
	inline void set_m_WholeNumbers_21(bool value)
	{
		___m_WholeNumbers_21 = value;
	}

	inline static int32_t get_offset_of_m_Value_22() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Value_22)); }
	inline float get_m_Value_22() const { return ___m_Value_22; }
	inline float* get_address_of_m_Value_22() { return &___m_Value_22; }
	inline void set_m_Value_22(float value)
	{
		___m_Value_22 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_23() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_OnValueChanged_23)); }
	inline SliderEvent_t3180273144 * get_m_OnValueChanged_23() const { return ___m_OnValueChanged_23; }
	inline SliderEvent_t3180273144 ** get_address_of_m_OnValueChanged_23() { return &___m_OnValueChanged_23; }
	inline void set_m_OnValueChanged_23(SliderEvent_t3180273144 * value)
	{
		___m_OnValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_23), value);
	}

	inline static int32_t get_offset_of_m_FillImage_24() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillImage_24)); }
	inline Image_t2670269651 * get_m_FillImage_24() const { return ___m_FillImage_24; }
	inline Image_t2670269651 ** get_address_of_m_FillImage_24() { return &___m_FillImage_24; }
	inline void set_m_FillImage_24(Image_t2670269651 * value)
	{
		___m_FillImage_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillImage_24), value);
	}

	inline static int32_t get_offset_of_m_FillTransform_25() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillTransform_25)); }
	inline Transform_t3600365921 * get_m_FillTransform_25() const { return ___m_FillTransform_25; }
	inline Transform_t3600365921 ** get_address_of_m_FillTransform_25() { return &___m_FillTransform_25; }
	inline void set_m_FillTransform_25(Transform_t3600365921 * value)
	{
		___m_FillTransform_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillTransform_25), value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_26() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillContainerRect_26)); }
	inline RectTransform_t3704657025 * get_m_FillContainerRect_26() const { return ___m_FillContainerRect_26; }
	inline RectTransform_t3704657025 ** get_address_of_m_FillContainerRect_26() { return &___m_FillContainerRect_26; }
	inline void set_m_FillContainerRect_26(RectTransform_t3704657025 * value)
	{
		___m_FillContainerRect_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillContainerRect_26), value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_27() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleTransform_27)); }
	inline Transform_t3600365921 * get_m_HandleTransform_27() const { return ___m_HandleTransform_27; }
	inline Transform_t3600365921 ** get_address_of_m_HandleTransform_27() { return &___m_HandleTransform_27; }
	inline void set_m_HandleTransform_27(Transform_t3600365921 * value)
	{
		___m_HandleTransform_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleTransform_27), value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_28() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleContainerRect_28)); }
	inline RectTransform_t3704657025 * get_m_HandleContainerRect_28() const { return ___m_HandleContainerRect_28; }
	inline RectTransform_t3704657025 ** get_address_of_m_HandleContainerRect_28() { return &___m_HandleContainerRect_28; }
	inline void set_m_HandleContainerRect_28(RectTransform_t3704657025 * value)
	{
		___m_HandleContainerRect_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleContainerRect_28), value);
	}

	inline static int32_t get_offset_of_m_Offset_29() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Offset_29)); }
	inline Vector2_t2156229523  get_m_Offset_29() const { return ___m_Offset_29; }
	inline Vector2_t2156229523 * get_address_of_m_Offset_29() { return &___m_Offset_29; }
	inline void set_m_Offset_29(Vector2_t2156229523  value)
	{
		___m_Offset_29 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_30() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Tracker_30)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_30() const { return ___m_Tracker_30; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_30() { return &___m_Tracker_30; }
	inline void set_m_Tracker_30(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLIDER_T3903728902_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_29;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_30;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_31;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_32;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_33;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_34;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_35;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_36;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_37;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_38;

public:
	inline static int32_t get_offset_of_m_Sprite_29() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_29)); }
	inline Sprite_t280657092 * get_m_Sprite_29() const { return ___m_Sprite_29; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_29() { return &___m_Sprite_29; }
	inline void set_m_Sprite_29(Sprite_t280657092 * value)
	{
		___m_Sprite_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_29), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_30() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_30)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_30() const { return ___m_OverrideSprite_30; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_30() { return &___m_OverrideSprite_30; }
	inline void set_m_OverrideSprite_30(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_30), value);
	}

	inline static int32_t get_offset_of_m_Type_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_31)); }
	inline int32_t get_m_Type_31() const { return ___m_Type_31; }
	inline int32_t* get_address_of_m_Type_31() { return &___m_Type_31; }
	inline void set_m_Type_31(int32_t value)
	{
		___m_Type_31 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_32)); }
	inline bool get_m_PreserveAspect_32() const { return ___m_PreserveAspect_32; }
	inline bool* get_address_of_m_PreserveAspect_32() { return &___m_PreserveAspect_32; }
	inline void set_m_PreserveAspect_32(bool value)
	{
		___m_PreserveAspect_32 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_33)); }
	inline bool get_m_FillCenter_33() const { return ___m_FillCenter_33; }
	inline bool* get_address_of_m_FillCenter_33() { return &___m_FillCenter_33; }
	inline void set_m_FillCenter_33(bool value)
	{
		___m_FillCenter_33 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_34)); }
	inline int32_t get_m_FillMethod_34() const { return ___m_FillMethod_34; }
	inline int32_t* get_address_of_m_FillMethod_34() { return &___m_FillMethod_34; }
	inline void set_m_FillMethod_34(int32_t value)
	{
		___m_FillMethod_34 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_35)); }
	inline float get_m_FillAmount_35() const { return ___m_FillAmount_35; }
	inline float* get_address_of_m_FillAmount_35() { return &___m_FillAmount_35; }
	inline void set_m_FillAmount_35(float value)
	{
		___m_FillAmount_35 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_36)); }
	inline bool get_m_FillClockwise_36() const { return ___m_FillClockwise_36; }
	inline bool* get_address_of_m_FillClockwise_36() { return &___m_FillClockwise_36; }
	inline void set_m_FillClockwise_36(bool value)
	{
		___m_FillClockwise_36 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_37)); }
	inline int32_t get_m_FillOrigin_37() const { return ___m_FillOrigin_37; }
	inline int32_t* get_address_of_m_FillOrigin_37() { return &___m_FillOrigin_37; }
	inline void set_m_FillOrigin_37(int32_t value)
	{
		___m_FillOrigin_37 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_38)); }
	inline float get_m_AlphaHitTestMinimumThreshold_38() const { return ___m_AlphaHitTestMinimumThreshold_38; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_38() { return &___m_AlphaHitTestMinimumThreshold_38; }
	inline void set_m_AlphaHitTestMinimumThreshold_38(float value)
	{
		___m_AlphaHitTestMinimumThreshold_38 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_28;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_39;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_40;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_41;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_42;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_28() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_28)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_28() const { return ___s_ETC1DefaultUI_28; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_28() { return &___s_ETC1DefaultUI_28; }
	inline void set_s_ETC1DefaultUI_28(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_28 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_28), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_39() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_39)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_39() const { return ___s_VertScratch_39; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_39() { return &___s_VertScratch_39; }
	inline void set_s_VertScratch_39(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_39 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_39), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_40() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_40)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_40() const { return ___s_UVScratch_40; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_40() { return &___s_UVScratch_40; }
	inline void set_s_UVScratch_40(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_40 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_40), value);
	}

	inline static int32_t get_offset_of_s_Xy_41() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_41)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_41() const { return ___s_Xy_41; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_41() { return &___s_Xy_41; }
	inline void set_s_Xy_41(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_41), value);
	}

	inline static int32_t get_offset_of_s_Uv_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_42)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_42() const { return ___s_Uv_42; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_42() { return &___s_Uv_42; }
	inline void set_s_Uv_42(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RenderBuffer[]
struct RenderBufferU5BU5D_t1615831949  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RenderBuffer_t586150500  m_Items[1];

public:
	inline RenderBuffer_t586150500  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderBuffer_t586150500 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderBuffer_t586150500  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RenderBuffer_t586150500  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderBuffer_t586150500 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderBuffer_t586150500  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t2439009922  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Image_t2670269651 * m_Items[1];

public:
	inline Image_t2670269651 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t2670269651 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t2670269651 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Image_t2670269651 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t2670269651 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t2670269651 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

extern "C" void ReflectionSettings_t282755190_marshal_pinvoke(const ReflectionSettings_t282755190& unmarshaled, ReflectionSettings_t282755190_marshaled_pinvoke& marshaled);
extern "C" void ReflectionSettings_t282755190_marshal_pinvoke_back(const ReflectionSettings_t282755190_marshaled_pinvoke& marshaled, ReflectionSettings_t282755190& unmarshaled);
extern "C" void ReflectionSettings_t282755190_marshal_pinvoke_cleanup(ReflectionSettings_t282755190_marshaled_pinvoke& marshaled);
extern "C" void ReflectionSettings_t282755190_marshal_com(const ReflectionSettings_t282755190& unmarshaled, ReflectionSettings_t282755190_marshaled_com& marshaled);
extern "C" void ReflectionSettings_t282755190_marshal_com_back(const ReflectionSettings_t282755190_marshaled_com& marshaled, ReflectionSettings_t282755190& unmarshaled);
extern "C" void ReflectionSettings_t282755190_marshal_com_cleanup(ReflectionSettings_t282755190_marshaled_com& marshaled);

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C"  void HashSet_1__ctor_m4231804131_gshared (HashSet_1_t1645055638 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
extern "C"  bool HashSet_1_Add_m1971460364_gshared (HashSet_1_t1645055638 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(!0)
extern "C"  bool HashSet_1_Contains_m3173358704_gshared (HashSet_1_t1645055638 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
extern "C"  bool HashSet_1_Remove_m709044238_gshared (HashSet_1_t1645055638 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t3350232909  HashSet_1_GetEnumerator_m3346268098_gshared (HashSet_1_t1645055638 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m4213278602_gshared (Enumerator_t3350232909 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m3714175425_gshared (Enumerator_t3350232909 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C"  void HashSet_1_Clear_m507835370_gshared (HashSet_1_t1645055638 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PostProcessing.PostProcessingComponentCommandBuffer`1<System.Object>::.ctor()
extern "C"  void PostProcessingComponentCommandBuffer_1__ctor_m120899638_gshared (PostProcessingComponentCommandBuffer_1_t60440757 * __this, const RuntimeMethod* method);
// T UnityEngine.PostProcessing.PostProcessingComponent`1<System.Object>::get_model()
extern "C"  RuntimeObject * PostProcessingComponent_1_get_model_m1119990137_gshared (PostProcessingComponent_1_t2373282366 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<System.Object>::.ctor()
extern "C"  void PostProcessingComponentRenderTexture_1__ctor_m2869702566_gshared (PostProcessingComponentRenderTexture_1_t353423909 * __this, const RuntimeMethod* method);
// !1 System.Func`2<UnityEngine.Vector2,UnityEngine.Matrix4x4>::Invoke(!0)
extern "C"  Matrix4x4_t1817901843  Func_2_Invoke_m886748628_gshared (Func_2_t4093140010 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C"  bool Dictionary_2_Remove_m1786738978_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m1308288322_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m336053009_gshared (UnityAction_1_t1982102915 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
extern "C"  void UnityEvent_1_AddListener_m3008008915_gshared (UnityEvent_1_t2278926278 * __this, UnityAction_1_t1982102915 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
extern "C"  void UnityEvent_1_RemoveListener_m4190968495_gshared (UnityEvent_1_t2278926278 * __this, UnityAction_1_t1982102915 * p0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.RenderTexture>::.ctor()
#define HashSet_1__ctor_m1993572700(__this, method) ((  void (*) (HashSet_1_t673836907 *, const RuntimeMethod*))HashSet_1__ctor_m4231804131_gshared)(__this, method)
// System.Int32 UnityEngine.RenderTexture::get_depth()
extern "C"  int32_t RenderTexture_get_depth_m3825994142 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
extern "C"  int32_t RenderTexture_get_format_m3846871418 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RenderTexture::get_sRGB()
extern "C"  bool RenderTexture_get_sRGB_m300498885 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FilterMode UnityEngine.Texture::get_filterMode()
extern "C"  int32_t Texture_get_filterMode_m3474837873 (Texture_t3661962703 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextureWrapMode UnityEngine.Texture::get_wrapMode()
extern "C"  int32_t Texture_get_wrapMode_m2187367613 (Texture_t3661962703 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.PostProcessing.RenderTextureFactory::Get(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,UnityEngine.FilterMode,UnityEngine.TextureWrapMode,System.String)
extern "C"  RenderTexture_t2108887433 * RenderTextureFactory_Get_m1772850884 (RenderTextureFactory_t1946967824 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, int32_t ___rw4, int32_t ___filterMode5, int32_t ___wrapMode6, String_t* ___name7, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C"  RenderTexture_t2108887433 * RenderTexture_GetTemporary_m3378328322 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
extern "C"  void Texture_set_filterMode_m3078068058 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
extern "C"  void Texture_set_wrapMode_m587872754 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C"  void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.RenderTexture>::Add(!0)
#define HashSet_1_Add_m2910627594(__this, p0, method) ((  bool (*) (HashSet_1_t673836907 *, RenderTexture_t2108887433 *, const RuntimeMethod*))HashSet_1_Add_m1971460364_gshared)(__this, p0, method)
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.RenderTexture>::Contains(!0)
#define HashSet_1_Contains_m3753409409(__this, p0, method) ((  bool (*) (HashSet_1_t673836907 *, RenderTexture_t2108887433 *, const RuntimeMethod*))HashSet_1_Contains_m3173358704_gshared)(__this, p0, method)
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.RenderTexture>::Remove(!0)
#define HashSet_1_Remove_m467255894(__this, p0, method) ((  bool (*) (HashSet_1_t673836907 *, RenderTexture_t2108887433 *, const RuntimeMethod*))HashSet_1_Remove_m709044238_gshared)(__this, p0, method)
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_ReleaseTemporary_m2400081536 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<UnityEngine.RenderTexture>::GetEnumerator()
#define HashSet_1_GetEnumerator_m4157320476(__this, method) ((  Enumerator_t2379014178  (*) (HashSet_1_t673836907 *, const RuntimeMethod*))HashSet_1_GetEnumerator_m3346268098_gshared)(__this, method)
// !0 System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.RenderTexture>::get_Current()
#define Enumerator_get_Current_m3525666044(__this, method) ((  RenderTexture_t2108887433 * (*) (Enumerator_t2379014178 *, const RuntimeMethod*))Enumerator_get_Current_m4213278602_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.RenderTexture>::MoveNext()
#define Enumerator_MoveNext_m519760291(__this, method) ((  bool (*) (Enumerator_t2379014178 *, const RuntimeMethod*))Enumerator_MoveNext_m3714175425_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.RenderTexture>::Clear()
#define HashSet_1_Clear_m552370813(__this, method) ((  void (*) (HashSet_1_t673836907 *, const RuntimeMethod*))HashSet_1_Clear_m507835370_gshared)(__this, method)
// System.Void UnityEngine.PostProcessing.RenderTextureFactory::ReleaseAll()
extern "C"  void RenderTextureFactory_ReleaseAll_m3329667721 (RenderTextureFactory_t1946967824 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PostProcessing.PostProcessingComponentCommandBuffer`1<UnityEngine.PostProcessing.ScreenSpaceReflectionModel>::.ctor()
#define PostProcessingComponentCommandBuffer_1__ctor_m1811253078(__this, method) ((  void (*) (PostProcessingComponentCommandBuffer_1_t6679325 *, const RuntimeMethod*))PostProcessingComponentCommandBuffer_1__ctor_m120899638_gshared)(__this, method)
// T UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.ScreenSpaceReflectionModel>::get_model()
#define PostProcessingComponent_1_get_model_m3701723778(__this, method) ((  ScreenSpaceReflectionModel_t3026344732 * (*) (PostProcessingComponent_1_t2319520934 *, const RuntimeMethod*))PostProcessingComponent_1_get_model_m1119990137_gshared)(__this, method)
// System.Boolean UnityEngine.PostProcessing.PostProcessingModel::get_enabled()
extern "C"  bool PostProcessingModel_get_enabled_m2892084724 (PostProcessingModel_t540111976 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.PostProcessing.PostProcessingContext::get_isGBufferAvailable()
extern "C"  bool PostProcessingContext_get_isGBufferAvailable_m949646721 (PostProcessingContext_t2014408948 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.PostProcessing.PostProcessingContext::get_interrupted()
extern "C"  bool PostProcessingContext_get_interrupted_m1809095682 (PostProcessingContext_t2014408948 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C"  int32_t Shader_PropertyToID_m1030499873 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings UnityEngine.PostProcessing.ScreenSpaceReflectionModel::get_settings()
extern "C"  Settings_t1995791524  ScreenSpaceReflectionModel_get_settings_m3165114047 (ScreenSpaceReflectionModel_t3026344732 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.PostProcessing.PostProcessingContext::get_width()
extern "C"  int32_t PostProcessingContext_get_width_m2658937703 (PostProcessingContext_t2014408948 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.PostProcessing.PostProcessingContext::get_height()
extern "C"  int32_t PostProcessingContext_get_height_m4218042885 (PostProcessingContext_t2014408948 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.PostProcessing.MaterialFactory::Get(System.String)
extern "C"  Material_t340375123 * MaterialFactory_Get_m4113232693 (MaterialFactory_t2445948724 * __this, String_t* ___shaderName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.Int32,System.Int32)
extern "C"  void Material_SetInt_m475299667 (Material_t340375123 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_fieldOfView()
extern "C"  float Camera_get_fieldOfView_m1018585504 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C"  void Material_SetFloat_m1688718093 (Material_t340375123 * __this, int32_t p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern "C"  Matrix4x4_t1817901843  Camera_get_projectionMatrix_m667780853 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern "C"  float Matrix4x4_get_Item_m567451091 (Matrix4x4_t1817901843 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m2498754347 (Vector4_t3319028937 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C"  float Camera_get_farClipPlane_m538536689 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::IsPositiveInfinity(System.Single)
extern "C"  bool Single_IsPositiveInfinity_m1411272350 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C"  float Camera_get_nearClipPlane_m837839537 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector4_t3319028937  Vector4_op_Implicit_m237151757 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetVector(System.Int32,UnityEngine.Vector4)
extern "C"  void Material_SetVector_m2633010038 (Material_t340375123 * __this, int32_t p0, Vector4_t3319028937  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector4_t3319028937  Vector4_op_Implicit_m2966035112 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
extern "C"  void Matrix4x4_SetRow_m2327530647 (Matrix4x4_t1817901843 * __this, int32_t p0, Vector4_t3319028937  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C"  Matrix4x4_t1817901843  Matrix4x4_op_Multiply_m1876492807 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  p0, Matrix4x4_t1817901843  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
extern "C"  void Material_SetMatrix_m751249077 (Material_t340375123 * __this, int32_t p0, Matrix4x4_t1817901843  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
extern "C"  Matrix4x4_t1817901843  Camera_get_worldToCameraMatrix_m22661425 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
extern "C"  Matrix4x4_t1817901843  Matrix4x4_get_inverse_m1870592360 (Matrix4x4_t1817901843 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.PostProcessing.PostProcessingContext::get_isHdr()
extern "C"  bool PostProcessingContext_get_isHdr_m3057655858 (PostProcessingContext_t2014408948 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRT(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.FilterMode,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite)
extern "C"  void CommandBuffer_GetTemporaryRT_m2948653747 (CommandBuffer_t2206337031 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRT(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.FilterMode,UnityEngine.RenderTextureFormat)
extern "C"  void CommandBuffer_GetTemporaryRT_m2252457381 (CommandBuffer_t2206337031 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(UnityEngine.Rendering.BuiltinRenderTextureType)
extern "C"  RenderTargetIdentifier_t2079184500  RenderTargetIdentifier_op_Implicit_m2644497587 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(System.Int32)
extern "C"  RenderTargetIdentifier_t2079184500  RenderTargetIdentifier_op_Implicit_m1310414951 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::Blit(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material,System.Int32)
extern "C"  void CommandBuffer_Blit_m1867893672 (CommandBuffer_t2206337031 * __this, RenderTargetIdentifier_t2079184500  p0, RenderTargetIdentifier_t2079184500  p1, Material_t340375123 * p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalVector(System.Int32,UnityEngine.Vector4)
extern "C"  void CommandBuffer_SetGlobalVector_m2474181847 (CommandBuffer_t2206337031 * __this, int32_t p0, Vector4_t3319028937  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalFloat(System.Int32,System.Single)
extern "C"  void CommandBuffer_SetGlobalFloat_m4256468291 (CommandBuffer_t2206337031 * __this, int32_t p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::ReleaseTemporaryRT(System.Int32)
extern "C"  void CommandBuffer_ReleaseTemporaryRT_m2627662573 (CommandBuffer_t2206337031 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_pixelWidth()
extern "C"  int32_t Camera_get_pixelWidth_m1110053668 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_pixelHeight()
extern "C"  int32_t Camera_get_pixelHeight_m722276884 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::Blit(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier)
extern "C"  void CommandBuffer_Blit_m1393847922 (CommandBuffer_t2206337031 * __this, RenderTargetIdentifier_t2079184500  p0, RenderTargetIdentifier_t2079184500  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings::get_defaultSettings()
extern "C"  Settings_t1995791524  Settings_get_defaultSettings_m3330699527 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PostProcessing.PostProcessingModel::.ctor()
extern "C"  void PostProcessingModel__ctor_m4158388095 (PostProcessingModel_t540111976 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.AntialiasingModel>::.ctor()
#define PostProcessingComponentRenderTexture_1__ctor_m1485528837(__this, method) ((  void (*) (PostProcessingComponentRenderTexture_1_t3089424429 *, const RuntimeMethod*))PostProcessingComponentRenderTexture_1__ctor_m2869702566_gshared)(__this, method)
// T UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.AntialiasingModel>::get_model()
#define PostProcessingComponent_1_get_model_m3744888901(__this, method) ((  AntialiasingModel_t1521139388 * (*) (PostProcessingComponent_1_t814315590 *, const RuntimeMethod*))PostProcessingComponent_1_get_model_m1119990137_gshared)(__this, method)
// UnityEngine.PostProcessing.AntialiasingModel/Settings UnityEngine.PostProcessing.AntialiasingModel::get_settings()
extern "C"  Settings_t4292431647  AntialiasingModel_get_settings_m675444796 (AntialiasingModel_t1521139388 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
extern "C"  bool SystemInfo_SupportsRenderTextureFormat_m1663449629 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SystemInfo::get_supportsMotionVectors()
extern "C"  bool SystemInfo_get_supportsMotionVectors_m46965105 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.PostProcessing.TaaComponent::GenerateRandomOffset()
extern "C"  Vector2_t2156229523  TaaComponent_GenerateRandomOffset_m1416894136 (TaaComponent_t3791749658 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_nonJitteredProjectionMatrix(UnityEngine.Matrix4x4)
extern "C"  void Camera_set_nonJitteredProjectionMatrix_m3492270478 (Camera_t4157153871 * __this, Matrix4x4_t1817901843  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Func`2<UnityEngine.Vector2,UnityEngine.Matrix4x4>::Invoke(!0)
#define Func_2_Invoke_m886748628(__this, p0, method) ((  Matrix4x4_t1817901843  (*) (Func_2_t4093140010 *, Vector2_t2156229523 , const RuntimeMethod*))Func_2_Invoke_m886748628_gshared)(__this, p0, method)
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
extern "C"  void Camera_set_projectionMatrix_m3293177686 (Camera_t4157153871 * __this, Matrix4x4_t1817901843  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Camera::get_orthographic()
extern "C"  bool Camera_get_orthographic_m2831464531 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.PostProcessing.TaaComponent::GetOrthographicProjectionMatrix(UnityEngine.Vector2)
extern "C"  Matrix4x4_t1817901843  TaaComponent_GetOrthographicProjectionMatrix_m3494165154 (TaaComponent_t3791749658 * __this, Vector2_t2156229523  ___offset0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.PostProcessing.TaaComponent::GetPerspectiveProjectionMatrix(UnityEngine.Vector2)
extern "C"  Matrix4x4_t1817901843  TaaComponent_GetPerspectiveProjectionMatrix_m2335334281 (TaaComponent_t3791749658 * __this, Vector2_t2156229523  ___offset0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_useJitteredProjectionMatrixForTransparentRendering(System.Boolean)
extern "C"  void Camera_set_useJitteredProjectionMatrixForTransparentRendering_m1059913304 (Camera_t4157153871 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_shaderKeywords(System.String[])
extern "C"  void Material_set_shaderKeywords_m4017377042 (Material_t340375123 * __this, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C"  void Graphics_Blit_m4126770912 (RuntimeObject * __this /* static, unused */, Texture_t3661962703 * p0, RenderTexture_t2108887433 * p1, Material_t340375123 * p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
extern "C"  void Material_SetTexture_m3009528825 (Material_t340375123 * __this, int32_t p0, Texture_t3661962703 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderBuffer UnityEngine.RenderTexture::get_colorBuffer()
extern "C"  RenderBuffer_t586150500  RenderTexture_get_colorBuffer_m2062927451 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderBuffer UnityEngine.RenderTexture::get_depthBuffer()
extern "C"  RenderBuffer_t586150500  RenderTexture_get_depthBuffer_m1409937006 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderBuffer[],UnityEngine.RenderBuffer)
extern "C"  void Graphics_SetRenderTarget_m191444692 (RuntimeObject * __this /* static, unused */, RenderBufferU5BU5D_t1615831949* p0, RenderBuffer_t586150500  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PostProcessing.GraphicsUtils::Blit(UnityEngine.Material,System.Int32)
extern "C"  void GraphicsUtils_Blit_m1958513870 (RuntimeObject * __this /* static, unused */, Material_t340375123 * ___material0, int32_t ___pass1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.PostProcessing.TaaComponent::GetHaltonValue(System.Int32,System.Int32)
extern "C"  float TaaComponent_GetHaltonValue_m3411042843 (TaaComponent_t3791749658 * __this, int32_t ___index0, int32_t ___radix1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_aspect()
extern "C"  float Camera_get_aspect_m862507514 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
extern "C"  void Matrix4x4_set_Item_m4102745984 (Matrix4x4_t1817901843 * __this, int32_t p0, int32_t p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C"  float Camera_get_orthographicSize_m3903216845 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  Matrix4x4_t1817901843  Matrix4x4_Ortho_m1994183957 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, float p3, float p4, float p5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PostProcessing.TaaComponent::ResetHistory()
extern "C"  void TaaComponent_ResetHistory_m3846253241 (TaaComponent_t3791749658 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PropertyAttribute::.ctor()
extern "C"  void PropertyAttribute__ctor_m1017741868 (PropertyAttribute_t3677895545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.UserLutModel>::.ctor()
#define PostProcessingComponentRenderTexture_1__ctor_m3643001101(__this, method) ((  void (*) (PostProcessingComponentRenderTexture_1_t3238393121 *, const RuntimeMethod*))PostProcessingComponentRenderTexture_1__ctor_m2869702566_gshared)(__this, method)
// T UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.UserLutModel>::get_model()
#define PostProcessingComponent_1_get_model_m2956985483(__this, method) ((  UserLutModel_t1670108080 * (*) (PostProcessingComponent_1_t963284282 *, const RuntimeMethod*))PostProcessingComponent_1_get_model_m1119990137_gshared)(__this, method)
// UnityEngine.PostProcessing.UserLutModel/Settings UnityEngine.PostProcessing.UserLutModel::get_settings()
extern "C"  Settings_t3006579223  UserLutModel_get_settings_m1799133964 (UserLutModel_t1670108080 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
extern "C"  void Material_EnableKeyword_m329692301 (Material_t340375123 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.PostProcessing.PostProcessingContext::get_viewport()
extern "C"  Rect_t2360479859  PostProcessingContext_get_viewport_m2647794360 (PostProcessingContext_t2014408948 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_x()
extern "C"  float Rect_get_x_m3839990490 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
extern "C"  void GUI_DrawTexture_m3124770796 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, Texture_t3661962703 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PostProcessing.UserLutModel/Settings UnityEngine.PostProcessing.UserLutModel/Settings::get_defaultSettings()
extern "C"  Settings_t3006579223  Settings_get_defaultSettings_m1988709150 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PostProcessing.PostProcessingComponentRenderTexture`1<UnityEngine.PostProcessing.VignetteModel>::.ctor()
#define PostProcessingComponentRenderTexture_1__ctor_m2651217025(__this, method) ((  void (*) (PostProcessingComponentRenderTexture_1_t118834922 *, const RuntimeMethod*))PostProcessingComponentRenderTexture_1__ctor_m2869702566_gshared)(__this, method)
// T UnityEngine.PostProcessing.PostProcessingComponent`1<UnityEngine.PostProcessing.VignetteModel>::get_model()
#define PostProcessingComponent_1_get_model_m2875105431(__this, method) ((  VignetteModel_t2845517177 * (*) (PostProcessingComponent_1_t2138693379 *, const RuntimeMethod*))PostProcessingComponent_1_get_model_m1119990137_gshared)(__this, method)
// UnityEngine.PostProcessing.VignetteModel/Settings UnityEngine.PostProcessing.VignetteModel::get_settings()
extern "C"  Settings_t1354494600  VignetteModel_get_settings_m3633002454 (VignetteModel_t2845517177 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C"  void Material_SetColor_m355160541 (Material_t340375123 * __this, int32_t p0, Color_t2555686324  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PostProcessing.VignetteModel/Settings UnityEngine.PostProcessing.VignetteModel/Settings::get_defaultSettings()
extern "C"  Settings_t1354494600  Settings_get_defaultSettings_m3086602550 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
extern "C"  void StandaloneInput__ctor_m1552585626 (StandaloneInput_t1877793759 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C"  void VirtualInput_RegisterVirtualAxis_m4061627445 (VirtualInput_t4247650776 * __this, VirtualAxis_t1347148391 * ___axis0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C"  void VirtualInput_RegisterVirtualButton_m539054427 (VirtualInput_t4247650776 * __this, VirtualButton_t3490362950 * ___button0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
extern "C"  void VirtualInput_UnRegisterVirtualAxis_m2615886023 (VirtualInput_t4247650776 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
extern "C"  void VirtualInput_UnRegisterVirtualButton_m1331827656 (VirtualInput_t4247650776 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnitySampleAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
extern "C"  VirtualAxis_t1347148391 * VirtualInput_VirtualAxisReference_m265738861 (VirtualInput_t4247650776 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
extern "C"  float CrossPlatformInputManager_GetAxis_m3244021904 (RuntimeObject * __this /* static, unused */, String_t* ___name0, bool ___raw1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionX_m1317694797 (VirtualInput_t4247650776 * __this, float ___f0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionY_m1463317316 (VirtualInput_t4247650776 * __this, float ___f0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionZ_m337793731 (VirtualInput_t4247650776 * __this, float ___f0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
extern "C"  void VirtualAxis__ctor_m615583067 (VirtualAxis_t1347148391 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
extern "C"  void VirtualAxis_set_name_m2759368997 (VirtualAxis_t1347148391 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
extern "C"  void VirtualAxis_set_matchWithInputManager_m4167991802 (VirtualAxis_t1347148391 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C"  void CrossPlatformInputManager_RegisterVirtualAxis_m3729018904 (RuntimeObject * __this /* static, unused */, VirtualAxis_t1347148391 * ___axis0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
extern "C"  String_t* VirtualAxis_get_name_m4062747206 (VirtualAxis_t1347148391 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
extern "C"  void CrossPlatformInputManager_UnRegisterVirtualAxis_m2747492094 (RuntimeObject * __this /* static, unused */, String_t* ____name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
extern "C"  void VirtualButton__ctor_m594979356 (VirtualButton_t3490362950 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
extern "C"  void VirtualButton_set_name_m3816690259 (VirtualButton_t3490362950 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
extern "C"  void VirtualButton_set_matchWithInputManager_m100546256 (VirtualButton_t3490362950 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Time::get_frameCount()
extern "C"  int32_t Time_get_frameCount_m1220035214 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
extern "C"  String_t* VirtualButton_get_name_m3713304515 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
extern "C"  void CrossPlatformInputManager_UnRegisterVirtualButton_m3381002917 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
extern "C"  void MobileControlRig_CheckEnableControlRig_m514886151 (MobileControlRig_t2085015456 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
extern "C"  void MobileControlRig_EnableControlRig_m730570031 (MobileControlRig_t2085015456 * __this, bool ___enabled0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C"  RuntimeObject* Transform_GetEnumerator_m2717073726 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::.ctor()
extern "C"  void VirtualInput__ctor_m1053376383 (VirtualInput_t4247650776 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
extern "C"  void VirtualButton__ctor_m2590712265 (VirtualButton_t3490362950 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C"  void CrossPlatformInputManager_RegisterVirtualButton_m1038377797 (RuntimeObject * __this /* static, unused */, VirtualButton_t3490362950 * ___button0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
extern "C"  void VirtualAxis__ctor_m117427821 (VirtualAxis_t1347148391 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m623971441(__this, p0, method) ((  bool (*) (Dictionary_2_t1132404690 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(!0)
#define Dictionary_2_get_Item_m3767727970(__this, p0, method) ((  VirtualAxis_t1347148391 * (*) (Dictionary_2_t1132404690 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Single UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
extern "C"  float VirtualAxis_get_GetValue_m3308232588 (VirtualAxis_t1347148391 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m3713610116(__this, p0, method) ((  bool (*) (Dictionary_2_t3275619249 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
extern "C"  void MobileInput_AddButton_m1546634226 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0)
#define Dictionary_2_get_Item_m670004451(__this, p0, method) ((  VirtualButton_t3490362950 * (*) (Dictionary_2_t3275619249 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
extern "C"  void VirtualButton_Pressed_m2534678636 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
extern "C"  void VirtualButton_Released_m3958507687 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
extern "C"  void MobileInput_AddAxes_m882771614 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
extern "C"  void VirtualAxis_Update_m3060599659 (VirtualAxis_t1347148391 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
extern "C"  bool VirtualButton_get_GetButtonDown_m3232372385 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
extern "C"  bool VirtualButton_get_GetButtonUp_m2683013087 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
extern "C"  bool VirtualButton_get_GetButton_m4028724520 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnitySampleAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
extern "C"  Vector3_t3722313464  VirtualInput_get_virtualMousePosition_m3832540035 (VirtualInput_t4247650776 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern "C"  float Input_GetAxisRaw_m2316819917 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButton(System.String)
extern "C"  bool Input_GetButton_m2064261504 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C"  bool Input_GetButtonDown_m3074252807 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
extern "C"  bool Input_GetButtonUp_m4007681079 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::.ctor()
#define Dictionary_2__ctor_m1598708476(__this, method) ((  void (*) (Dictionary_2_t1132404690 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::.ctor()
#define Dictionary_2__ctor_m2884814283(__this, method) ((  void (*) (Dictionary_2_t3275619249 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
#define List_1__ctor_m706204246(__this, method) ((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Add(!0,!1)
#define Dictionary_2_Add_m1208951171(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1132404690 *, String_t*, VirtualAxis_t1347148391 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
extern "C"  bool VirtualAxis_get_matchWithInputManager_m2401220563 (VirtualAxis_t1347148391 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
#define List_1_Add_m1685793073(__this, p0, method) ((  void (*) (List_1_t3319525431 *, String_t*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Add(!0,!1)
#define Dictionary_2_Add_m943624655(__this, p0, p1, method) ((  void (*) (Dictionary_2_t3275619249 *, String_t*, VirtualButton_t3490362950 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
extern "C"  bool VirtualButton_get_matchWithInputManager_m2372617195 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Remove(!0)
#define Dictionary_2_Remove_m913603837(__this, p0, method) ((  bool (*) (Dictionary_2_t1132404690 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Remove(!0)
#define Dictionary_2_Remove_m3912794030(__this, p0, method) ((  bool (*) (Dictionary_2_t3275619249 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method)
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
extern "C"  void VirtualInput_set_virtualMousePosition_m2247952941 (VirtualInput_t4247650776 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C"  float Time_get_realtimeSinceStartup_m3141794964 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
#define Component_GetComponent_TisText_t1901882714_m4196288697(__this, method) ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.WindZone>()
#define GameObject_GetComponent_TisWindZone_t1835817526_m2382653558(__this, method) ((  WindZone_t1835817526 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
#define GameObject_GetComponent_TisTransform_t3600365921_m3348034436(__this, method) ((  Transform_t3600365921 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Quaternion_op_Multiply_m2607404835 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C"  Vector3_t3722313464  Vector3_get_normalized_m2454957984 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t2670269651_m980647750(__this, method) ((  Image_t2670269651 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.UI.Image>()
#define Component_GetComponentsInChildren_TisImage_t2670269651_m3171623875(__this, method) ((  ImageU5BU5D_t2439009922* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1308288322_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void VirtualJoystick::set_InputDirection(UnityEngine.Vector3)
extern "C"  void VirtualJoystick_set_InputDirection_m627700735 (VirtualJoystick_t1105065689 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C"  Vector2_t2156229523  Vector2_get_zero_m540426400 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
extern "C"  RectTransform_t3704657025 * Graphic_get_rectTransform_m1167152468 (Graphic_t1660335611 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
extern "C"  Vector2_t2156229523  PointerEventData_get_position_m437660275 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
extern "C"  Camera_t4157153871 * PointerEventData_get_pressEventCamera_m2613974917 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern "C"  bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m2327269187 (RuntimeObject * __this /* static, unused */, RectTransform_t3704657025 * p0, Vector2_t2156229523  p1, Camera_t4157153871 * p2, Vector2_t2156229523 * p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
extern "C"  Vector2_t2156229523  RectTransform_get_sizeDelta_m2183112744 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
extern "C"  Vector2_t2156229523  RectTransform_get_pivot_m3425744470 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 VirtualJoystick::get_InputDirection()
extern "C"  Vector3_t3722313464  VirtualJoystick_get_InputDirection_m2641156746 (VirtualJoystick_t1105065689 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C"  float Vector3_get_magnitude_m27958459 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C"  void Vector3__ctor_m1719387948 (Vector3_t3722313464 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
extern "C"  void RectTransform_set_anchoredPosition_m4126691837 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
#define GameObject_GetComponent_TisSlider_t3903728902_m865256018(__this, method) ((  Slider_t3903728902 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
extern "C"  SliderEvent_t3180273144 * Slider_get_onValueChanged_m2907593587 (Slider_t3903728902 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
#define UnityAction_1__ctor_m336053009(__this, p0, p1, method) ((  void (*) (UnityAction_1_t1982102915 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m336053009_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
#define UnityEvent_1_AddListener_m3008008915(__this, p0, method) ((  void (*) (UnityEvent_1_t2278926278 *, UnityAction_1_t1982102915 *, const RuntimeMethod*))UnityEvent_1_AddListener_m3008008915_gshared)(__this, p0, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, method) ((  AudioSource_t3935305588 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C"  void AudioSource_set_volume_m1273312851 (AudioSource_t3935305588 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
#define UnityEvent_1_RemoveListener_m4190968495(__this, p0, method) ((  void (*) (UnityEvent_1_t2278926278 *, UnityAction_1_t1982102915 *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m4190968495_gshared)(__this, p0, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.PostProcessing.RenderTextureFactory::.ctor()
extern "C"  void RenderTextureFactory__ctor_m1345809438 (RenderTextureFactory_t1946967824 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderTextureFactory__ctor_m1345809438_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		HashSet_1_t673836907 * L_0 = (HashSet_1_t673836907 *)il2cpp_codegen_object_new(HashSet_1_t673836907_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m1993572700(L_0, /*hidden argument*/HashSet_1__ctor_m1993572700_RuntimeMethod_var);
		__this->set_m_TemporaryRTs_0(L_0);
		return;
	}
}
// UnityEngine.RenderTexture UnityEngine.PostProcessing.RenderTextureFactory::Get(UnityEngine.RenderTexture)
extern "C"  RenderTexture_t2108887433 * RenderTextureFactory_Get_m169036867 (RenderTextureFactory_t1946967824 * __this, RenderTexture_t2108887433 * ___baseRenderTexture0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderTextureFactory_Get_m169036867_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B2_2 = 0;
	int32_t G_B2_3 = 0;
	RenderTextureFactory_t1946967824 * G_B2_4 = NULL;
	int32_t G_B1_0 = 0;
	int32_t G_B1_1 = 0;
	int32_t G_B1_2 = 0;
	int32_t G_B1_3 = 0;
	RenderTextureFactory_t1946967824 * G_B1_4 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	int32_t G_B3_3 = 0;
	int32_t G_B3_4 = 0;
	RenderTextureFactory_t1946967824 * G_B3_5 = NULL;
	{
		RenderTexture_t2108887433 * L_0 = ___baseRenderTexture0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		RenderTexture_t2108887433 * L_2 = ___baseRenderTexture0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		RenderTexture_t2108887433 * L_4 = ___baseRenderTexture0;
		NullCheck(L_4);
		int32_t L_5 = RenderTexture_get_depth_m3825994142(L_4, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_6 = ___baseRenderTexture0;
		NullCheck(L_6);
		int32_t L_7 = RenderTexture_get_format_m3846871418(L_6, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_8 = ___baseRenderTexture0;
		NullCheck(L_8);
		bool L_9 = RenderTexture_get_sRGB_m300498885(L_8, /*hidden argument*/NULL);
		G_B1_0 = L_7;
		G_B1_1 = L_5;
		G_B1_2 = L_3;
		G_B1_3 = L_1;
		G_B1_4 = __this;
		if (!L_9)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_5;
			G_B2_2 = L_3;
			G_B2_3 = L_1;
			G_B2_4 = __this;
			goto IL_002a;
		}
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_002b:
	{
		RenderTexture_t2108887433 * L_10 = ___baseRenderTexture0;
		NullCheck(L_10);
		int32_t L_11 = Texture_get_filterMode_m3474837873(L_10, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_12 = ___baseRenderTexture0;
		NullCheck(L_12);
		int32_t L_13 = Texture_get_wrapMode_m2187367613(L_12, /*hidden argument*/NULL);
		NullCheck(G_B3_5);
		RenderTexture_t2108887433 * L_14 = RenderTextureFactory_Get_m1772850884(G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_11, L_13, _stringLiteral3857694337, /*hidden argument*/NULL);
		return L_14;
	}
}
// UnityEngine.RenderTexture UnityEngine.PostProcessing.RenderTextureFactory::Get(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,UnityEngine.FilterMode,UnityEngine.TextureWrapMode,System.String)
extern "C"  RenderTexture_t2108887433 * RenderTextureFactory_Get_m1772850884 (RenderTextureFactory_t1946967824 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, int32_t ___rw4, int32_t ___filterMode5, int32_t ___wrapMode6, String_t* ___name7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderTextureFactory_Get_m1772850884_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t2108887433 * V_0 = NULL;
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		int32_t L_2 = ___depthBuffer2;
		int32_t L_3 = ___format3;
		RenderTexture_t2108887433 * L_4 = RenderTexture_GetTemporary_m3378328322(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		RenderTexture_t2108887433 * L_5 = V_0;
		int32_t L_6 = ___filterMode5;
		NullCheck(L_5);
		Texture_set_filterMode_m3078068058(L_5, L_6, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_7 = V_0;
		int32_t L_8 = ___wrapMode6;
		NullCheck(L_7);
		Texture_set_wrapMode_m587872754(L_7, L_8, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_9 = V_0;
		String_t* L_10 = ___name7;
		NullCheck(L_9);
		Object_set_name_m291480324(L_9, L_10, /*hidden argument*/NULL);
		HashSet_1_t673836907 * L_11 = __this->get_m_TemporaryRTs_0();
		RenderTexture_t2108887433 * L_12 = V_0;
		NullCheck(L_11);
		HashSet_1_Add_m2910627594(L_11, L_12, /*hidden argument*/HashSet_1_Add_m2910627594_RuntimeMethod_var);
		RenderTexture_t2108887433 * L_13 = V_0;
		return L_13;
	}
}
// System.Void UnityEngine.PostProcessing.RenderTextureFactory::Release(UnityEngine.RenderTexture)
extern "C"  void RenderTextureFactory_Release_m717800481 (RenderTextureFactory_t1946967824 * __this, RenderTexture_t2108887433 * ___rt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderTextureFactory_Release_m717800481_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RenderTexture_t2108887433 * L_0 = ___rt0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		HashSet_1_t673836907 * L_2 = __this->get_m_TemporaryRTs_0();
		RenderTexture_t2108887433 * L_3 = ___rt0;
		NullCheck(L_2);
		bool L_4 = HashSet_1_Contains_m3753409409(L_2, L_3, /*hidden argument*/HashSet_1_Contains_m3753409409_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		RenderTexture_t2108887433 * L_5 = ___rt0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1950092709, L_5, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_002f:
	{
		HashSet_1_t673836907 * L_8 = __this->get_m_TemporaryRTs_0();
		RenderTexture_t2108887433 * L_9 = ___rt0;
		NullCheck(L_8);
		HashSet_1_Remove_m467255894(L_8, L_9, /*hidden argument*/HashSet_1_Remove_m467255894_RuntimeMethod_var);
		RenderTexture_t2108887433 * L_10 = ___rt0;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.PostProcessing.RenderTextureFactory::ReleaseAll()
extern "C"  void RenderTextureFactory_ReleaseAll_m3329667721 (RenderTextureFactory_t1946967824 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderTextureFactory_ReleaseAll_m3329667721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2379014178  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		HashSet_1_t673836907 * L_0 = __this->get_m_TemporaryRTs_0();
		NullCheck(L_0);
		Enumerator_t2379014178  L_1 = HashSet_1_GetEnumerator_m4157320476(L_0, /*hidden argument*/HashSet_1_GetEnumerator_m4157320476_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_001d;
	}

IL_0011:
	{
		RenderTexture_t2108887433 * L_2 = Enumerator_get_Current_m3525666044((&V_0), /*hidden argument*/Enumerator_get_Current_m3525666044_RuntimeMethod_var);
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		bool L_3 = Enumerator_MoveNext_m519760291((&V_0), /*hidden argument*/Enumerator_MoveNext_m519760291_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0011;
		}
	}
	{
		HashSet_1_t673836907 * L_4 = __this->get_m_TemporaryRTs_0();
		NullCheck(L_4);
		HashSet_1_Clear_m552370813(L_4, /*hidden argument*/HashSet_1_Clear_m552370813_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.PostProcessing.RenderTextureFactory::Dispose()
extern "C"  void RenderTextureFactory_Dispose_m2714960054 (RenderTextureFactory_t1946967824 * __this, const RuntimeMethod* method)
{
	{
		RenderTextureFactory_ReleaseAll_m3329667721(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::.ctor()
extern "C"  void ScreenSpaceReflectionComponent__ctor_m2879296341 (ScreenSpaceReflectionComponent_t856094247 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenSpaceReflectionComponent__ctor_m2879296341_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_k_TraceBehindObjects_3((bool)1);
		__this->set_k_BilateralUpsample_5((bool)1);
		__this->set_m_ReflectionTextures_6(((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)5)));
		PostProcessingComponentCommandBuffer_1__ctor_m1811253078(__this, /*hidden argument*/PostProcessingComponentCommandBuffer_1__ctor_m1811253078_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.DepthTextureMode UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::GetCameraFlags()
extern "C"  int32_t ScreenSpaceReflectionComponent_GetCameraFlags_m3820416721 (ScreenSpaceReflectionComponent_t856094247 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Boolean UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::get_active()
extern "C"  bool ScreenSpaceReflectionComponent_get_active_m243829711 (ScreenSpaceReflectionComponent_t856094247 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenSpaceReflectionComponent_get_active_m243829711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		ScreenSpaceReflectionModel_t3026344732 * L_0 = PostProcessingComponent_1_get_model_m3701723778(__this, /*hidden argument*/PostProcessingComponent_1_get_model_m3701723778_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1 = PostProcessingModel_get_enabled_m2892084724(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		PostProcessingContext_t2014408948 * L_2 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_2);
		bool L_3 = PostProcessingContext_get_isGBufferAvailable_m949646721(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		PostProcessingContext_t2014408948 * L_4 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_4);
		bool L_5 = PostProcessingContext_get_interrupted_m1809095682(L_4, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B4_0 = 0;
	}

IL_0031:
	{
		return (bool)G_B4_0;
	}
}
// System.Void UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::OnEnable()
extern "C"  void ScreenSpaceReflectionComponent_OnEnable_m346974116 (ScreenSpaceReflectionComponent_t856094247 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenSpaceReflectionComponent_OnEnable_m346974116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t385246372* L_0 = __this->get_m_ReflectionTextures_6();
		int32_t L_1 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3996654635, /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_1);
		Int32U5BU5D_t385246372* L_2 = __this->get_m_ReflectionTextures_6();
		int32_t L_3 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1267771280, /*hidden argument*/NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_3);
		Int32U5BU5D_t385246372* L_4 = __this->get_m_ReflectionTextures_6();
		int32_t L_5 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral864486753, /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_5);
		Int32U5BU5D_t385246372* L_6 = __this->get_m_ReflectionTextures_6();
		int32_t L_7 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2430570694, /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_7);
		Int32U5BU5D_t385246372* L_8 = __this->get_m_ReflectionTextures_6();
		int32_t L_9 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2027286167, /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)L_9);
		return;
	}
}
// System.String UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::GetName()
extern "C"  String_t* ScreenSpaceReflectionComponent_GetName_m2112635201 (ScreenSpaceReflectionComponent_t856094247 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenSpaceReflectionComponent_GetName_m2112635201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2578318749;
	}
}
// UnityEngine.Rendering.CameraEvent UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::GetCameraEvent()
extern "C"  int32_t ScreenSpaceReflectionComponent_GetCameraEvent_m1332987900 (ScreenSpaceReflectionComponent_t856094247 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)9));
	}
}
// System.Void UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::PopulateCommandBuffer(UnityEngine.Rendering.CommandBuffer)
extern "C"  void ScreenSpaceReflectionComponent_PopulateCommandBuffer_m3120254331 (ScreenSpaceReflectionComponent_t856094247 * __this, CommandBuffer_t2206337031 * ___cb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenSpaceReflectionComponent_PopulateCommandBuffer_m3120254331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Settings_t1995791524  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Camera_t4157153871 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Material_t340375123 * V_9 = NULL;
	float V_10 = 0.0f;
	Matrix4x4_t1817901843  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Vector4_t3319028937  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Vector3_t3722313464  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Matrix4x4_t1817901843  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Matrix4x4_t1817901843  V_15;
	memset(&V_15, 0, sizeof(V_15));
	Matrix4x4_t1817901843  V_16;
	memset(&V_16, 0, sizeof(V_16));
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	Material_t340375123 * G_B5_1 = NULL;
	int32_t G_B4_0 = 0;
	Material_t340375123 * G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	Material_t340375123 * G_B6_2 = NULL;
	int32_t G_B8_0 = 0;
	Material_t340375123 * G_B8_1 = NULL;
	int32_t G_B7_0 = 0;
	Material_t340375123 * G_B7_1 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	Material_t340375123 * G_B9_2 = NULL;
	int32_t G_B11_0 = 0;
	Material_t340375123 * G_B11_1 = NULL;
	int32_t G_B10_0 = 0;
	Material_t340375123 * G_B10_1 = NULL;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	Material_t340375123 * G_B12_2 = NULL;
	int32_t G_B14_0 = 0;
	Material_t340375123 * G_B14_1 = NULL;
	int32_t G_B13_0 = 0;
	Material_t340375123 * G_B13_1 = NULL;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	Material_t340375123 * G_B15_2 = NULL;
	int32_t G_B17_0 = 0;
	Material_t340375123 * G_B17_1 = NULL;
	int32_t G_B16_0 = 0;
	Material_t340375123 * G_B16_1 = NULL;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	Material_t340375123 * G_B18_2 = NULL;
	int32_t G_B20_0 = 0;
	Material_t340375123 * G_B20_1 = NULL;
	int32_t G_B19_0 = 0;
	Material_t340375123 * G_B19_1 = NULL;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	Material_t340375123 * G_B21_2 = NULL;
	int32_t G_B23_0 = 0;
	Material_t340375123 * G_B23_1 = NULL;
	int32_t G_B22_0 = 0;
	Material_t340375123 * G_B22_1 = NULL;
	int32_t G_B24_0 = 0;
	int32_t G_B24_1 = 0;
	Material_t340375123 * G_B24_2 = NULL;
	Vector3_t3722313464  G_B27_0;
	memset(&G_B27_0, 0, sizeof(G_B27_0));
	int32_t G_B30_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B35_1 = 0;
	int32_t G_B35_2 = 0;
	int32_t G_B35_3 = 0;
	CommandBuffer_t2206337031 * G_B35_4 = NULL;
	int32_t G_B34_0 = 0;
	int32_t G_B34_1 = 0;
	int32_t G_B34_2 = 0;
	int32_t G_B34_3 = 0;
	CommandBuffer_t2206337031 * G_B34_4 = NULL;
	int32_t G_B36_0 = 0;
	int32_t G_B36_1 = 0;
	int32_t G_B36_2 = 0;
	int32_t G_B36_3 = 0;
	int32_t G_B36_4 = 0;
	CommandBuffer_t2206337031 * G_B36_5 = NULL;
	{
		ScreenSpaceReflectionModel_t3026344732 * L_0 = PostProcessingComponent_1_get_model_m3701723778(__this, /*hidden argument*/PostProcessingComponent_1_get_model_m3701723778_RuntimeMethod_var);
		NullCheck(L_0);
		Settings_t1995791524  L_1 = ScreenSpaceReflectionModel_get_settings_m3165114047(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		PostProcessingContext_t2014408948 * L_2 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_2);
		Camera_t4157153871 * L_3 = L_2->get_camera_1();
		V_1 = L_3;
		ReflectionSettings_t282755190 * L_4 = (&V_0)->get_address_of_reflection_0();
		int32_t L_5 = L_4->get_reflectionQuality_1();
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 2;
	}

IL_0030:
	{
		V_2 = G_B3_0;
		PostProcessingContext_t2014408948 * L_6 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_6);
		int32_t L_7 = PostProcessingContext_get_width_m2658937703(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_2;
		V_3 = ((int32_t)((int32_t)L_7/(int32_t)L_8));
		PostProcessingContext_t2014408948 * L_9 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_9);
		int32_t L_10 = PostProcessingContext_get_height_m4218042885(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_2;
		V_4 = ((int32_t)((int32_t)L_10/(int32_t)L_11));
		PostProcessingContext_t2014408948 * L_12 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_12);
		int32_t L_13 = PostProcessingContext_get_width_m2658937703(L_12, /*hidden argument*/NULL);
		V_5 = (((float)((float)L_13)));
		PostProcessingContext_t2014408948 * L_14 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_14);
		int32_t L_15 = PostProcessingContext_get_height_m4218042885(L_14, /*hidden argument*/NULL);
		V_6 = (((float)((float)L_15)));
		float L_16 = V_5;
		V_7 = ((float)((float)L_16/(float)(2.0f)));
		float L_17 = V_6;
		V_8 = ((float)((float)L_17/(float)(2.0f)));
		PostProcessingContext_t2014408948 * L_18 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_18);
		MaterialFactory_t2445948724 * L_19 = L_18->get_materialFactory_2();
		NullCheck(L_19);
		Material_t340375123 * L_20 = MaterialFactory_Get_m4113232693(L_19, _stringLiteral3225738970, /*hidden argument*/NULL);
		V_9 = L_20;
		Material_t340375123 * L_21 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t2970573890_il2cpp_TypeInfo_var);
		int32_t L_22 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__RayStepSize_0();
		ReflectionSettings_t282755190 * L_23 = (&V_0)->get_address_of_reflection_0();
		int32_t L_24 = L_23->get_stepSize_4();
		NullCheck(L_21);
		Material_SetInt_m475299667(L_21, L_22, L_24, /*hidden argument*/NULL);
		Material_t340375123 * L_25 = V_9;
		int32_t L_26 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__AdditiveReflection_1();
		ReflectionSettings_t282755190 * L_27 = (&V_0)->get_address_of_reflection_0();
		int32_t L_28 = L_27->get_blendType_0();
		G_B4_0 = L_26;
		G_B4_1 = L_25;
		if ((!(((uint32_t)L_28) == ((uint32_t)1))))
		{
			G_B5_0 = L_26;
			G_B5_1 = L_25;
			goto IL_00cc;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_00cd;
	}

IL_00cc:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_00cd:
	{
		NullCheck(G_B6_2);
		Material_SetInt_m475299667(G_B6_2, G_B6_1, G_B6_0, /*hidden argument*/NULL);
		Material_t340375123 * L_29 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t2970573890_il2cpp_TypeInfo_var);
		int32_t L_30 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__BilateralUpsampling_2();
		bool L_31 = __this->get_k_BilateralUpsample_5();
		G_B7_0 = L_30;
		G_B7_1 = L_29;
		if (!L_31)
		{
			G_B8_0 = L_30;
			G_B8_1 = L_29;
			goto IL_00ea;
		}
	}
	{
		G_B9_0 = 1;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_00eb;
	}

IL_00ea:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_00eb:
	{
		NullCheck(G_B9_2);
		Material_SetInt_m475299667(G_B9_2, G_B9_1, G_B9_0, /*hidden argument*/NULL);
		Material_t340375123 * L_32 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t2970573890_il2cpp_TypeInfo_var);
		int32_t L_33 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__TreatBackfaceHitAsMiss_3();
		bool L_34 = __this->get_k_TreatBackfaceHitAsMiss_4();
		G_B10_0 = L_33;
		G_B10_1 = L_32;
		if (!L_34)
		{
			G_B11_0 = L_33;
			G_B11_1 = L_32;
			goto IL_0108;
		}
	}
	{
		G_B12_0 = 1;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_0109;
	}

IL_0108:
	{
		G_B12_0 = 0;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_0109:
	{
		NullCheck(G_B12_2);
		Material_SetInt_m475299667(G_B12_2, G_B12_1, G_B12_0, /*hidden argument*/NULL);
		Material_t340375123 * L_35 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t2970573890_il2cpp_TypeInfo_var);
		int32_t L_36 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__AllowBackwardsRays_4();
		ReflectionSettings_t282755190 * L_37 = (&V_0)->get_address_of_reflection_0();
		bool L_38 = L_37->get_reflectBackfaces_7();
		G_B13_0 = L_36;
		G_B13_1 = L_35;
		if (!L_38)
		{
			G_B14_0 = L_36;
			G_B14_1 = L_35;
			goto IL_012c;
		}
	}
	{
		G_B15_0 = 1;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_012d;
	}

IL_012c:
	{
		G_B15_0 = 0;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_012d:
	{
		NullCheck(G_B15_2);
		Material_SetInt_m475299667(G_B15_2, G_B15_1, G_B15_0, /*hidden argument*/NULL);
		Material_t340375123 * L_39 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t2970573890_il2cpp_TypeInfo_var);
		int32_t L_40 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__TraceBehindObjects_5();
		bool L_41 = __this->get_k_TraceBehindObjects_3();
		G_B16_0 = L_40;
		G_B16_1 = L_39;
		if (!L_41)
		{
			G_B17_0 = L_40;
			G_B17_1 = L_39;
			goto IL_014a;
		}
	}
	{
		G_B18_0 = 1;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		goto IL_014b;
	}

IL_014a:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
	}

IL_014b:
	{
		NullCheck(G_B18_2);
		Material_SetInt_m475299667(G_B18_2, G_B18_1, G_B18_0, /*hidden argument*/NULL);
		Material_t340375123 * L_42 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t2970573890_il2cpp_TypeInfo_var);
		int32_t L_43 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__MaxSteps_6();
		ReflectionSettings_t282755190 * L_44 = (&V_0)->get_address_of_reflection_0();
		int32_t L_45 = L_44->get_iterationCount_3();
		NullCheck(L_42);
		Material_SetInt_m475299667(L_42, L_43, L_45, /*hidden argument*/NULL);
		Material_t340375123 * L_46 = V_9;
		int32_t L_47 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__FullResolutionFiltering_7();
		NullCheck(L_46);
		Material_SetInt_m475299667(L_46, L_47, 0, /*hidden argument*/NULL);
		Material_t340375123 * L_48 = V_9;
		int32_t L_49 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__HalfResolution_8();
		ReflectionSettings_t282755190 * L_50 = (&V_0)->get_address_of_reflection_0();
		int32_t L_51 = L_50->get_reflectionQuality_1();
		G_B19_0 = L_49;
		G_B19_1 = L_48;
		if (!L_51)
		{
			G_B20_0 = L_49;
			G_B20_1 = L_48;
			goto IL_0193;
		}
	}
	{
		G_B21_0 = 1;
		G_B21_1 = G_B19_0;
		G_B21_2 = G_B19_1;
		goto IL_0194;
	}

IL_0193:
	{
		G_B21_0 = 0;
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
	}

IL_0194:
	{
		NullCheck(G_B21_2);
		Material_SetInt_m475299667(G_B21_2, G_B21_1, G_B21_0, /*hidden argument*/NULL);
		Material_t340375123 * L_52 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t2970573890_il2cpp_TypeInfo_var);
		int32_t L_53 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__HighlightSuppression_9();
		bool L_54 = __this->get_k_HighlightSuppression_2();
		G_B22_0 = L_53;
		G_B22_1 = L_52;
		if (!L_54)
		{
			G_B23_0 = L_53;
			G_B23_1 = L_52;
			goto IL_01b1;
		}
	}
	{
		G_B24_0 = 1;
		G_B24_1 = G_B22_0;
		G_B24_2 = G_B22_1;
		goto IL_01b2;
	}

IL_01b1:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
		G_B24_2 = G_B23_1;
	}

IL_01b2:
	{
		NullCheck(G_B24_2);
		Material_SetInt_m475299667(G_B24_2, G_B24_1, G_B24_0, /*hidden argument*/NULL);
		float L_55 = V_5;
		Camera_t4157153871 * L_56 = V_1;
		NullCheck(L_56);
		float L_57 = Camera_get_fieldOfView_m1018585504(L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_58 = tanf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_57/(float)(180.0f))), (float)(3.14159274f))), (float)(0.5f))));
		V_10 = ((float)((float)L_55/(float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_58))));
		Material_t340375123 * L_59 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t2970573890_il2cpp_TypeInfo_var);
		int32_t L_60 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__PixelsPerMeterAtOneMeter_10();
		float L_61 = V_10;
		NullCheck(L_59);
		Material_SetFloat_m1688718093(L_59, L_60, L_61, /*hidden argument*/NULL);
		Material_t340375123 * L_62 = V_9;
		int32_t L_63 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__ScreenEdgeFading_11();
		ScreenEdgeMask_t4063288584 * L_64 = (&V_0)->get_address_of_screenEdgeMask_2();
		float L_65 = L_64->get_intensity_0();
		NullCheck(L_62);
		Material_SetFloat_m1688718093(L_62, L_63, L_65, /*hidden argument*/NULL);
		Material_t340375123 * L_66 = V_9;
		int32_t L_67 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__ReflectionBlur_12();
		ReflectionSettings_t282755190 * L_68 = (&V_0)->get_address_of_reflection_0();
		float L_69 = L_68->get_reflectionBlur_6();
		NullCheck(L_66);
		Material_SetFloat_m1688718093(L_66, L_67, L_69, /*hidden argument*/NULL);
		Material_t340375123 * L_70 = V_9;
		int32_t L_71 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__MaxRayTraceDistance_13();
		ReflectionSettings_t282755190 * L_72 = (&V_0)->get_address_of_reflection_0();
		float L_73 = L_72->get_maxDistance_2();
		NullCheck(L_70);
		Material_SetFloat_m1688718093(L_70, L_71, L_73, /*hidden argument*/NULL);
		Material_t340375123 * L_74 = V_9;
		int32_t L_75 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__FadeDistance_14();
		IntensitySettings_t1721872184 * L_76 = (&V_0)->get_address_of_intensity_1();
		float L_77 = L_76->get_fadeDistance_1();
		NullCheck(L_74);
		Material_SetFloat_m1688718093(L_74, L_75, L_77, /*hidden argument*/NULL);
		Material_t340375123 * L_78 = V_9;
		int32_t L_79 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__LayerThickness_15();
		ReflectionSettings_t282755190 * L_80 = (&V_0)->get_address_of_reflection_0();
		float L_81 = L_80->get_widthModifier_5();
		NullCheck(L_78);
		Material_SetFloat_m1688718093(L_78, L_79, L_81, /*hidden argument*/NULL);
		Material_t340375123 * L_82 = V_9;
		int32_t L_83 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__SSRMultiplier_16();
		IntensitySettings_t1721872184 * L_84 = (&V_0)->get_address_of_intensity_1();
		float L_85 = L_84->get_reflectionMultiplier_0();
		NullCheck(L_82);
		Material_SetFloat_m1688718093(L_82, L_83, L_85, /*hidden argument*/NULL);
		Material_t340375123 * L_86 = V_9;
		int32_t L_87 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__FresnelFade_17();
		IntensitySettings_t1721872184 * L_88 = (&V_0)->get_address_of_intensity_1();
		float L_89 = L_88->get_fresnelFade_2();
		NullCheck(L_86);
		Material_SetFloat_m1688718093(L_86, L_87, L_89, /*hidden argument*/NULL);
		Material_t340375123 * L_90 = V_9;
		int32_t L_91 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__FresnelFadePower_18();
		IntensitySettings_t1721872184 * L_92 = (&V_0)->get_address_of_intensity_1();
		float L_93 = L_92->get_fresnelFadePower_3();
		NullCheck(L_90);
		Material_SetFloat_m1688718093(L_90, L_91, L_93, /*hidden argument*/NULL);
		Camera_t4157153871 * L_94 = V_1;
		NullCheck(L_94);
		Matrix4x4_t1817901843  L_95 = Camera_get_projectionMatrix_m667780853(L_94, /*hidden argument*/NULL);
		V_11 = L_95;
		float L_96 = V_5;
		float L_97 = Matrix4x4_get_Item_m567451091((&V_11), 0, /*hidden argument*/NULL);
		float L_98 = V_6;
		float L_99 = Matrix4x4_get_Item_m567451091((&V_11), 5, /*hidden argument*/NULL);
		float L_100 = Matrix4x4_get_Item_m567451091((&V_11), 2, /*hidden argument*/NULL);
		float L_101 = Matrix4x4_get_Item_m567451091((&V_11), 0, /*hidden argument*/NULL);
		float L_102 = Matrix4x4_get_Item_m567451091((&V_11), 6, /*hidden argument*/NULL);
		float L_103 = Matrix4x4_get_Item_m567451091((&V_11), 5, /*hidden argument*/NULL);
		Vector4__ctor_m2498754347((&V_12), ((float)((float)(-2.0f)/(float)((float)il2cpp_codegen_multiply((float)L_96, (float)L_97)))), ((float)((float)(-2.0f)/(float)((float)il2cpp_codegen_multiply((float)L_98, (float)L_99)))), ((float)((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_100))/(float)L_101)), ((float)((float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_102))/(float)L_103)), /*hidden argument*/NULL);
		Camera_t4157153871 * L_104 = V_1;
		NullCheck(L_104);
		float L_105 = Camera_get_farClipPlane_m538536689(L_104, /*hidden argument*/NULL);
		bool L_106 = Single_IsPositiveInfinity_m1411272350(NULL /*static, unused*/, L_105, /*hidden argument*/NULL);
		if (!L_106)
		{
			goto IL_0336;
		}
	}
	{
		Camera_t4157153871 * L_107 = V_1;
		NullCheck(L_107);
		float L_108 = Camera_get_nearClipPlane_m837839537(L_107, /*hidden argument*/NULL);
		Vector3_t3722313464  L_109;
		memset(&L_109, 0, sizeof(L_109));
		Vector3__ctor_m3353183577((&L_109), L_108, (-1.0f), (1.0f), /*hidden argument*/NULL);
		G_B27_0 = L_109;
		goto IL_035b;
	}

IL_0336:
	{
		Camera_t4157153871 * L_110 = V_1;
		NullCheck(L_110);
		float L_111 = Camera_get_nearClipPlane_m837839537(L_110, /*hidden argument*/NULL);
		Camera_t4157153871 * L_112 = V_1;
		NullCheck(L_112);
		float L_113 = Camera_get_farClipPlane_m538536689(L_112, /*hidden argument*/NULL);
		Camera_t4157153871 * L_114 = V_1;
		NullCheck(L_114);
		float L_115 = Camera_get_nearClipPlane_m837839537(L_114, /*hidden argument*/NULL);
		Camera_t4157153871 * L_116 = V_1;
		NullCheck(L_116);
		float L_117 = Camera_get_farClipPlane_m538536689(L_116, /*hidden argument*/NULL);
		Camera_t4157153871 * L_118 = V_1;
		NullCheck(L_118);
		float L_119 = Camera_get_farClipPlane_m538536689(L_118, /*hidden argument*/NULL);
		Vector3_t3722313464  L_120;
		memset(&L_120, 0, sizeof(L_120));
		Vector3__ctor_m3353183577((&L_120), ((float)il2cpp_codegen_multiply((float)L_111, (float)L_113)), ((float)il2cpp_codegen_subtract((float)L_115, (float)L_117)), L_119, /*hidden argument*/NULL);
		G_B27_0 = L_120;
	}

IL_035b:
	{
		V_13 = G_B27_0;
		Material_t340375123 * L_121 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t2970573890_il2cpp_TypeInfo_var);
		int32_t L_122 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__ReflectionBufferSize_19();
		int32_t L_123 = V_3;
		int32_t L_124 = V_4;
		Vector2_t2156229523  L_125;
		memset(&L_125, 0, sizeof(L_125));
		Vector2__ctor_m3970636864((&L_125), (((float)((float)L_123))), (((float)((float)L_124))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_126 = Vector4_op_Implicit_m237151757(NULL /*static, unused*/, L_125, /*hidden argument*/NULL);
		NullCheck(L_121);
		Material_SetVector_m2633010038(L_121, L_122, L_126, /*hidden argument*/NULL);
		Material_t340375123 * L_127 = V_9;
		int32_t L_128 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__ScreenSize_20();
		float L_129 = V_5;
		float L_130 = V_6;
		Vector2_t2156229523  L_131;
		memset(&L_131, 0, sizeof(L_131));
		Vector2__ctor_m3970636864((&L_131), L_129, L_130, /*hidden argument*/NULL);
		Vector4_t3319028937  L_132 = Vector4_op_Implicit_m237151757(NULL /*static, unused*/, L_131, /*hidden argument*/NULL);
		NullCheck(L_127);
		Material_SetVector_m2633010038(L_127, L_128, L_132, /*hidden argument*/NULL);
		Material_t340375123 * L_133 = V_9;
		int32_t L_134 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__InvScreenSize_21();
		float L_135 = V_5;
		float L_136 = V_6;
		Vector2_t2156229523  L_137;
		memset(&L_137, 0, sizeof(L_137));
		Vector2__ctor_m3970636864((&L_137), ((float)((float)(1.0f)/(float)L_135)), ((float)((float)(1.0f)/(float)L_136)), /*hidden argument*/NULL);
		Vector4_t3319028937  L_138 = Vector4_op_Implicit_m237151757(NULL /*static, unused*/, L_137, /*hidden argument*/NULL);
		NullCheck(L_133);
		Material_SetVector_m2633010038(L_133, L_134, L_138, /*hidden argument*/NULL);
		Material_t340375123 * L_139 = V_9;
		int32_t L_140 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__ProjInfo_22();
		Vector4_t3319028937  L_141 = V_12;
		NullCheck(L_139);
		Material_SetVector_m2633010038(L_139, L_140, L_141, /*hidden argument*/NULL);
		Material_t340375123 * L_142 = V_9;
		int32_t L_143 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__CameraClipInfo_23();
		Vector3_t3722313464  L_144 = V_13;
		Vector4_t3319028937  L_145 = Vector4_op_Implicit_m2966035112(NULL /*static, unused*/, L_144, /*hidden argument*/NULL);
		NullCheck(L_142);
		Material_SetVector_m2633010038(L_142, L_143, L_145, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_14), sizeof(Matrix4x4_t1817901843 ));
		float L_146 = V_7;
		float L_147 = V_7;
		Vector4_t3319028937  L_148;
		memset(&L_148, 0, sizeof(L_148));
		Vector4__ctor_m2498754347((&L_148), L_146, (0.0f), (0.0f), L_147, /*hidden argument*/NULL);
		Matrix4x4_SetRow_m2327530647((&V_14), 0, L_148, /*hidden argument*/NULL);
		float L_149 = V_8;
		float L_150 = V_8;
		Vector4_t3319028937  L_151;
		memset(&L_151, 0, sizeof(L_151));
		Vector4__ctor_m2498754347((&L_151), (0.0f), L_149, (0.0f), L_150, /*hidden argument*/NULL);
		Matrix4x4_SetRow_m2327530647((&V_14), 1, L_151, /*hidden argument*/NULL);
		Vector4_t3319028937  L_152;
		memset(&L_152, 0, sizeof(L_152));
		Vector4__ctor_m2498754347((&L_152), (0.0f), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Matrix4x4_SetRow_m2327530647((&V_14), 2, L_152, /*hidden argument*/NULL);
		Vector4_t3319028937  L_153;
		memset(&L_153, 0, sizeof(L_153));
		Vector4__ctor_m2498754347((&L_153), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Matrix4x4_SetRow_m2327530647((&V_14), 3, L_153, /*hidden argument*/NULL);
		Matrix4x4_t1817901843  L_154 = V_14;
		Matrix4x4_t1817901843  L_155 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t1817901843_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_156 = Matrix4x4_op_Multiply_m1876492807(NULL /*static, unused*/, L_154, L_155, /*hidden argument*/NULL);
		V_15 = L_156;
		Material_t340375123 * L_157 = V_9;
		int32_t L_158 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__ProjectToPixelMatrix_24();
		Matrix4x4_t1817901843  L_159 = V_15;
		NullCheck(L_157);
		Material_SetMatrix_m751249077(L_157, L_158, L_159, /*hidden argument*/NULL);
		Material_t340375123 * L_160 = V_9;
		int32_t L_161 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__WorldToCameraMatrix_25();
		Camera_t4157153871 * L_162 = V_1;
		NullCheck(L_162);
		Matrix4x4_t1817901843  L_163 = Camera_get_worldToCameraMatrix_m22661425(L_162, /*hidden argument*/NULL);
		NullCheck(L_160);
		Material_SetMatrix_m751249077(L_160, L_161, L_163, /*hidden argument*/NULL);
		Material_t340375123 * L_164 = V_9;
		int32_t L_165 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__CameraToWorldMatrix_26();
		Camera_t4157153871 * L_166 = V_1;
		NullCheck(L_166);
		Matrix4x4_t1817901843  L_167 = Camera_get_worldToCameraMatrix_m22661425(L_166, /*hidden argument*/NULL);
		V_16 = L_167;
		Matrix4x4_t1817901843  L_168 = Matrix4x4_get_inverse_m1870592360((&V_16), /*hidden argument*/NULL);
		NullCheck(L_164);
		Material_SetMatrix_m751249077(L_164, L_165, L_168, /*hidden argument*/NULL);
		PostProcessingContext_t2014408948 * L_169 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_169);
		bool L_170 = PostProcessingContext_get_isHdr_m3057655858(L_169, /*hidden argument*/NULL);
		if (!L_170)
		{
			goto IL_04b5;
		}
	}
	{
		G_B30_0 = 2;
		goto IL_04b6;
	}

IL_04b5:
	{
		G_B30_0 = 0;
	}

IL_04b6:
	{
		V_17 = G_B30_0;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t2970573890_il2cpp_TypeInfo_var);
		int32_t L_171 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__NormalAndRoughnessTexture_29();
		V_18 = L_171;
		int32_t L_172 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__HitPointTexture_30();
		V_19 = L_172;
		int32_t L_173 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__BlurTexture_31();
		V_20 = L_173;
		int32_t L_174 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__FilteredReflections_32();
		V_21 = L_174;
		int32_t L_175 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__FinalReflectionTexture_33();
		V_22 = L_175;
		int32_t L_176 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__TempTexture_34();
		V_23 = L_176;
		CommandBuffer_t2206337031 * L_177 = ___cb0;
		int32_t L_178 = V_18;
		NullCheck(L_177);
		CommandBuffer_GetTemporaryRT_m2948653747(L_177, L_178, (-1), (-1), 0, 0, 0, 1, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_179 = ___cb0;
		int32_t L_180 = V_19;
		int32_t L_181 = V_3;
		int32_t L_182 = V_4;
		NullCheck(L_179);
		CommandBuffer_GetTemporaryRT_m2948653747(L_179, L_180, L_181, L_182, 0, 1, 2, 1, /*hidden argument*/NULL);
		V_24 = 0;
		goto IL_052f;
	}

IL_0507:
	{
		CommandBuffer_t2206337031 * L_183 = ___cb0;
		Int32U5BU5D_t385246372* L_184 = __this->get_m_ReflectionTextures_6();
		int32_t L_185 = V_24;
		NullCheck(L_184);
		int32_t L_186 = L_185;
		int32_t L_187 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		int32_t L_188 = V_3;
		int32_t L_189 = V_24;
		int32_t L_190 = V_4;
		int32_t L_191 = V_24;
		int32_t L_192 = V_17;
		NullCheck(L_183);
		CommandBuffer_GetTemporaryRT_m2252457381(L_183, L_187, ((int32_t)((int32_t)L_188>>(int32_t)((int32_t)((int32_t)L_189&(int32_t)((int32_t)31))))), ((int32_t)((int32_t)L_190>>(int32_t)((int32_t)((int32_t)L_191&(int32_t)((int32_t)31))))), 0, 1, L_192, /*hidden argument*/NULL);
		int32_t L_193 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_193, (int32_t)1));
	}

IL_052f:
	{
		int32_t L_194 = V_24;
		if ((((int32_t)L_194) < ((int32_t)5)))
		{
			goto IL_0507;
		}
	}
	{
		CommandBuffer_t2206337031 * L_195 = ___cb0;
		int32_t L_196 = V_21;
		int32_t L_197 = V_3;
		int32_t L_198 = V_4;
		bool L_199 = __this->get_k_BilateralUpsample_5();
		G_B34_0 = 0;
		G_B34_1 = L_198;
		G_B34_2 = L_197;
		G_B34_3 = L_196;
		G_B34_4 = L_195;
		if (!L_199)
		{
			G_B35_0 = 0;
			G_B35_1 = L_198;
			G_B35_2 = L_197;
			G_B35_3 = L_196;
			G_B35_4 = L_195;
			goto IL_054f;
		}
	}
	{
		G_B36_0 = 0;
		G_B36_1 = G_B34_0;
		G_B36_2 = G_B34_1;
		G_B36_3 = G_B34_2;
		G_B36_4 = G_B34_3;
		G_B36_5 = G_B34_4;
		goto IL_0550;
	}

IL_054f:
	{
		G_B36_0 = 1;
		G_B36_1 = G_B35_0;
		G_B36_2 = G_B35_1;
		G_B36_3 = G_B35_2;
		G_B36_4 = G_B35_3;
		G_B36_5 = G_B35_4;
	}

IL_0550:
	{
		int32_t L_200 = V_17;
		NullCheck(G_B36_5);
		CommandBuffer_GetTemporaryRT_m2252457381(G_B36_5, G_B36_4, G_B36_3, G_B36_2, G_B36_1, G_B36_0, L_200, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_201 = ___cb0;
		int32_t L_202 = V_22;
		int32_t L_203 = V_3;
		int32_t L_204 = V_4;
		int32_t L_205 = V_17;
		NullCheck(L_201);
		CommandBuffer_GetTemporaryRT_m2252457381(L_201, L_202, L_203, L_204, 0, 0, L_205, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_206 = ___cb0;
		RenderTargetIdentifier_t2079184500  L_207 = RenderTargetIdentifier_op_Implicit_m2644497587(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		int32_t L_208 = V_18;
		RenderTargetIdentifier_t2079184500  L_209 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_208, /*hidden argument*/NULL);
		Material_t340375123 * L_210 = V_9;
		NullCheck(L_206);
		CommandBuffer_Blit_m1867893672(L_206, L_207, L_209, L_210, 6, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_211 = ___cb0;
		RenderTargetIdentifier_t2079184500  L_212 = RenderTargetIdentifier_op_Implicit_m2644497587(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		int32_t L_213 = V_19;
		RenderTargetIdentifier_t2079184500  L_214 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_213, /*hidden argument*/NULL);
		Material_t340375123 * L_215 = V_9;
		NullCheck(L_211);
		CommandBuffer_Blit_m1867893672(L_211, L_212, L_214, L_215, 0, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_216 = ___cb0;
		RenderTargetIdentifier_t2079184500  L_217 = RenderTargetIdentifier_op_Implicit_m2644497587(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		int32_t L_218 = V_21;
		RenderTargetIdentifier_t2079184500  L_219 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_218, /*hidden argument*/NULL);
		Material_t340375123 * L_220 = V_9;
		NullCheck(L_216);
		CommandBuffer_Blit_m1867893672(L_216, L_217, L_219, L_220, 5, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_221 = ___cb0;
		int32_t L_222 = V_21;
		RenderTargetIdentifier_t2079184500  L_223 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_222, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_224 = __this->get_m_ReflectionTextures_6();
		NullCheck(L_224);
		int32_t L_225 = 0;
		int32_t L_226 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		RenderTargetIdentifier_t2079184500  L_227 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_226, /*hidden argument*/NULL);
		Material_t340375123 * L_228 = V_9;
		NullCheck(L_221);
		CommandBuffer_Blit_m1867893672(L_221, L_223, L_227, L_228, 8, /*hidden argument*/NULL);
		V_25 = 1;
		goto IL_069c;
	}

IL_05cd:
	{
		Int32U5BU5D_t385246372* L_229 = __this->get_m_ReflectionTextures_6();
		int32_t L_230 = V_25;
		NullCheck(L_229);
		int32_t L_231 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_230, (int32_t)1));
		int32_t L_232 = (L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_231));
		V_26 = L_232;
		int32_t L_233 = V_25;
		V_27 = L_233;
		CommandBuffer_t2206337031 * L_234 = ___cb0;
		int32_t L_235 = V_20;
		int32_t L_236 = V_3;
		int32_t L_237 = V_27;
		int32_t L_238 = V_4;
		int32_t L_239 = V_27;
		int32_t L_240 = V_17;
		NullCheck(L_234);
		CommandBuffer_GetTemporaryRT_m2252457381(L_234, L_235, ((int32_t)((int32_t)L_236>>(int32_t)((int32_t)((int32_t)L_237&(int32_t)((int32_t)31))))), ((int32_t)((int32_t)L_238>>(int32_t)((int32_t)((int32_t)L_239&(int32_t)((int32_t)31))))), 0, 1, L_240, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_241 = ___cb0;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t2970573890_il2cpp_TypeInfo_var);
		int32_t L_242 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__Axis_27();
		Vector4_t3319028937  L_243;
		memset(&L_243, 0, sizeof(L_243));
		Vector4__ctor_m2498754347((&L_243), (1.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_241);
		CommandBuffer_SetGlobalVector_m2474181847(L_241, L_242, L_243, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_244 = ___cb0;
		int32_t L_245 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__CurrentMipLevel_28();
		int32_t L_246 = V_25;
		NullCheck(L_244);
		CommandBuffer_SetGlobalFloat_m4256468291(L_244, L_245, ((float)il2cpp_codegen_subtract((float)(((float)((float)L_246))), (float)(1.0f))), /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_247 = ___cb0;
		int32_t L_248 = V_26;
		RenderTargetIdentifier_t2079184500  L_249 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_248, /*hidden argument*/NULL);
		int32_t L_250 = V_20;
		RenderTargetIdentifier_t2079184500  L_251 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_250, /*hidden argument*/NULL);
		Material_t340375123 * L_252 = V_9;
		NullCheck(L_247);
		CommandBuffer_Blit_m1867893672(L_247, L_249, L_251, L_252, 2, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_253 = ___cb0;
		int32_t L_254 = ((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->get__Axis_27();
		Vector4_t3319028937  L_255;
		memset(&L_255, 0, sizeof(L_255));
		Vector4__ctor_m2498754347((&L_255), (0.0f), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_253);
		CommandBuffer_SetGlobalVector_m2474181847(L_253, L_254, L_255, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_256 = __this->get_m_ReflectionTextures_6();
		int32_t L_257 = V_25;
		NullCheck(L_256);
		int32_t L_258 = L_257;
		int32_t L_259 = (L_256)->GetAt(static_cast<il2cpp_array_size_t>(L_258));
		V_26 = L_259;
		CommandBuffer_t2206337031 * L_260 = ___cb0;
		int32_t L_261 = V_20;
		RenderTargetIdentifier_t2079184500  L_262 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_261, /*hidden argument*/NULL);
		int32_t L_263 = V_26;
		RenderTargetIdentifier_t2079184500  L_264 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_263, /*hidden argument*/NULL);
		Material_t340375123 * L_265 = V_9;
		NullCheck(L_260);
		CommandBuffer_Blit_m1867893672(L_260, L_262, L_264, L_265, 2, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_266 = ___cb0;
		int32_t L_267 = V_20;
		NullCheck(L_266);
		CommandBuffer_ReleaseTemporaryRT_m2627662573(L_266, L_267, /*hidden argument*/NULL);
		int32_t L_268 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add((int32_t)L_268, (int32_t)1));
	}

IL_069c:
	{
		int32_t L_269 = V_25;
		if ((((int32_t)L_269) < ((int32_t)5)))
		{
			goto IL_05cd;
		}
	}
	{
		CommandBuffer_t2206337031 * L_270 = ___cb0;
		Int32U5BU5D_t385246372* L_271 = __this->get_m_ReflectionTextures_6();
		NullCheck(L_271);
		int32_t L_272 = 0;
		int32_t L_273 = (L_271)->GetAt(static_cast<il2cpp_array_size_t>(L_272));
		RenderTargetIdentifier_t2079184500  L_274 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_273, /*hidden argument*/NULL);
		int32_t L_275 = V_22;
		RenderTargetIdentifier_t2079184500  L_276 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_275, /*hidden argument*/NULL);
		Material_t340375123 * L_277 = V_9;
		NullCheck(L_270);
		CommandBuffer_Blit_m1867893672(L_270, L_274, L_276, L_277, 3, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_278 = ___cb0;
		int32_t L_279 = V_23;
		Camera_t4157153871 * L_280 = V_1;
		NullCheck(L_280);
		int32_t L_281 = Camera_get_pixelWidth_m1110053668(L_280, /*hidden argument*/NULL);
		Camera_t4157153871 * L_282 = V_1;
		NullCheck(L_282);
		int32_t L_283 = Camera_get_pixelHeight_m722276884(L_282, /*hidden argument*/NULL);
		int32_t L_284 = V_17;
		NullCheck(L_278);
		CommandBuffer_GetTemporaryRT_m2252457381(L_278, L_279, L_281, L_283, 0, 1, L_284, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_285 = ___cb0;
		RenderTargetIdentifier_t2079184500  L_286 = RenderTargetIdentifier_op_Implicit_m2644497587(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		int32_t L_287 = V_23;
		RenderTargetIdentifier_t2079184500  L_288 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_287, /*hidden argument*/NULL);
		Material_t340375123 * L_289 = V_9;
		NullCheck(L_285);
		CommandBuffer_Blit_m1867893672(L_285, L_286, L_288, L_289, 1, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_290 = ___cb0;
		int32_t L_291 = V_23;
		RenderTargetIdentifier_t2079184500  L_292 = RenderTargetIdentifier_op_Implicit_m1310414951(NULL /*static, unused*/, L_291, /*hidden argument*/NULL);
		RenderTargetIdentifier_t2079184500  L_293 = RenderTargetIdentifier_op_Implicit_m2644497587(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		NullCheck(L_290);
		CommandBuffer_Blit_m1393847922(L_290, L_292, L_293, /*hidden argument*/NULL);
		CommandBuffer_t2206337031 * L_294 = ___cb0;
		int32_t L_295 = V_23;
		NullCheck(L_294);
		CommandBuffer_ReleaseTemporaryRT_m2627662573(L_294, L_295, /*hidden argument*/NULL);
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
// System.Void UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::.cctor()
extern "C"  void Uniforms__cctor_m2613778490 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uniforms__cctor_m2613778490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1292081225, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__RayStepSize_0(L_0);
		int32_t L_1 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3590979936, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__AdditiveReflection_1(L_1);
		int32_t L_2 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3812922687, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__BilateralUpsampling_2(L_2);
		int32_t L_3 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3220650816, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__TreatBackfaceHitAsMiss_3(L_3);
		int32_t L_4 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral550721294, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__AllowBackwardsRays_4(L_4);
		int32_t L_5 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral591083681, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__TraceBehindObjects_5(L_5);
		int32_t L_6 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral4226617077, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__MaxSteps_6(L_6);
		int32_t L_7 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2380614554, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__FullResolutionFiltering_7(L_7);
		int32_t L_8 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2030135646, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__HalfResolution_8(L_8);
		int32_t L_9 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2271957017, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__HighlightSuppression_9(L_9);
		int32_t L_10 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2534592956, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__PixelsPerMeterAtOneMeter_10(L_10);
		int32_t L_11 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3503710369, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__ScreenEdgeFading_11(L_11);
		int32_t L_12 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral4081118877, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__ReflectionBlur_12(L_12);
		int32_t L_13 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3535566692, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__MaxRayTraceDistance_13(L_13);
		int32_t L_14 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1464815389, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__FadeDistance_14(L_14);
		int32_t L_15 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3054324692, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__LayerThickness_15(L_15);
		int32_t L_16 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral4044860599, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__SSRMultiplier_16(L_16);
		int32_t L_17 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2857999720, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__FresnelFade_17(L_17);
		int32_t L_18 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2381300568, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__FresnelFadePower_18(L_18);
		int32_t L_19 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1469005573, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__ReflectionBufferSize_19(L_19);
		int32_t L_20 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2262278099, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__ScreenSize_20(L_20);
		int32_t L_21 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral601799897, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__InvScreenSize_21(L_21);
		int32_t L_22 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3142184566, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__ProjInfo_22(L_22);
		int32_t L_23 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1562959127, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__CameraClipInfo_23(L_23);
		int32_t L_24 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2920707233, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__ProjectToPixelMatrix_24(L_24);
		int32_t L_25 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2060163631, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__WorldToCameraMatrix_25(L_25);
		int32_t L_26 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3346007495, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__CameraToWorldMatrix_26(L_26);
		int32_t L_27 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral4055059096, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__Axis_27(L_27);
		int32_t L_28 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1923191447, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__CurrentMipLevel_28(L_28);
		int32_t L_29 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral735047140, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__NormalAndRoughnessTexture_29(L_29);
		int32_t L_30 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral4037140854, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__HitPointTexture_30(L_30);
		int32_t L_31 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2224716414, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__BlurTexture_31(L_31);
		int32_t L_32 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral782944872, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__FilteredReflections_32(L_32);
		int32_t L_33 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3700046144, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__FinalReflectionTexture_33(L_33);
		int32_t L_34 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1660455728, /*hidden argument*/NULL);
		((Uniforms_t2970573890_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2970573890_il2cpp_TypeInfo_var))->set__TempTexture_34(L_34);
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
// System.Void UnityEngine.PostProcessing.ScreenSpaceReflectionModel::.ctor()
extern "C"  void ScreenSpaceReflectionModel__ctor_m855607741 (ScreenSpaceReflectionModel_t3026344732 * __this, const RuntimeMethod* method)
{
	{
		Settings_t1995791524  L_0 = Settings_get_defaultSettings_m3330699527(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Settings_1(L_0);
		PostProcessingModel__ctor_m4158388095(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings UnityEngine.PostProcessing.ScreenSpaceReflectionModel::get_settings()
extern "C"  Settings_t1995791524  ScreenSpaceReflectionModel_get_settings_m3165114047 (ScreenSpaceReflectionModel_t3026344732 * __this, const RuntimeMethod* method)
{
	{
		Settings_t1995791524  L_0 = __this->get_m_Settings_1();
		return L_0;
	}
}
// System.Void UnityEngine.PostProcessing.ScreenSpaceReflectionModel::set_settings(UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings)
extern "C"  void ScreenSpaceReflectionModel_set_settings_m3883690039 (ScreenSpaceReflectionModel_t3026344732 * __this, Settings_t1995791524  ___value0, const RuntimeMethod* method)
{
	{
		Settings_t1995791524  L_0 = ___value0;
		__this->set_m_Settings_1(L_0);
		return;
	}
}
// System.Void UnityEngine.PostProcessing.ScreenSpaceReflectionModel::Reset()
extern "C"  void ScreenSpaceReflectionModel_Reset_m1531575281 (ScreenSpaceReflectionModel_t3026344732 * __this, const RuntimeMethod* method)
{
	{
		Settings_t1995791524  L_0 = Settings_get_defaultSettings_m3330699527(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Settings_1(L_0);
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
// Conversion methods for marshalling of: UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings
extern "C" void ReflectionSettings_t282755190_marshal_pinvoke(const ReflectionSettings_t282755190& unmarshaled, ReflectionSettings_t282755190_marshaled_pinvoke& marshaled)
{
	marshaled.___blendType_0 = unmarshaled.get_blendType_0();
	marshaled.___reflectionQuality_1 = unmarshaled.get_reflectionQuality_1();
	marshaled.___maxDistance_2 = unmarshaled.get_maxDistance_2();
	marshaled.___iterationCount_3 = unmarshaled.get_iterationCount_3();
	marshaled.___stepSize_4 = unmarshaled.get_stepSize_4();
	marshaled.___widthModifier_5 = unmarshaled.get_widthModifier_5();
	marshaled.___reflectionBlur_6 = unmarshaled.get_reflectionBlur_6();
	marshaled.___reflectBackfaces_7 = static_cast<int32_t>(unmarshaled.get_reflectBackfaces_7());
}
extern "C" void ReflectionSettings_t282755190_marshal_pinvoke_back(const ReflectionSettings_t282755190_marshaled_pinvoke& marshaled, ReflectionSettings_t282755190& unmarshaled)
{
	int32_t unmarshaled_blendType_temp_0 = 0;
	unmarshaled_blendType_temp_0 = marshaled.___blendType_0;
	unmarshaled.set_blendType_0(unmarshaled_blendType_temp_0);
	int32_t unmarshaled_reflectionQuality_temp_1 = 0;
	unmarshaled_reflectionQuality_temp_1 = marshaled.___reflectionQuality_1;
	unmarshaled.set_reflectionQuality_1(unmarshaled_reflectionQuality_temp_1);
	float unmarshaled_maxDistance_temp_2 = 0.0f;
	unmarshaled_maxDistance_temp_2 = marshaled.___maxDistance_2;
	unmarshaled.set_maxDistance_2(unmarshaled_maxDistance_temp_2);
	int32_t unmarshaled_iterationCount_temp_3 = 0;
	unmarshaled_iterationCount_temp_3 = marshaled.___iterationCount_3;
	unmarshaled.set_iterationCount_3(unmarshaled_iterationCount_temp_3);
	int32_t unmarshaled_stepSize_temp_4 = 0;
	unmarshaled_stepSize_temp_4 = marshaled.___stepSize_4;
	unmarshaled.set_stepSize_4(unmarshaled_stepSize_temp_4);
	float unmarshaled_widthModifier_temp_5 = 0.0f;
	unmarshaled_widthModifier_temp_5 = marshaled.___widthModifier_5;
	unmarshaled.set_widthModifier_5(unmarshaled_widthModifier_temp_5);
	float unmarshaled_reflectionBlur_temp_6 = 0.0f;
	unmarshaled_reflectionBlur_temp_6 = marshaled.___reflectionBlur_6;
	unmarshaled.set_reflectionBlur_6(unmarshaled_reflectionBlur_temp_6);
	bool unmarshaled_reflectBackfaces_temp_7 = false;
	unmarshaled_reflectBackfaces_temp_7 = static_cast<bool>(marshaled.___reflectBackfaces_7);
	unmarshaled.set_reflectBackfaces_7(unmarshaled_reflectBackfaces_temp_7);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings
extern "C" void ReflectionSettings_t282755190_marshal_pinvoke_cleanup(ReflectionSettings_t282755190_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings
extern "C" void ReflectionSettings_t282755190_marshal_com(const ReflectionSettings_t282755190& unmarshaled, ReflectionSettings_t282755190_marshaled_com& marshaled)
{
	marshaled.___blendType_0 = unmarshaled.get_blendType_0();
	marshaled.___reflectionQuality_1 = unmarshaled.get_reflectionQuality_1();
	marshaled.___maxDistance_2 = unmarshaled.get_maxDistance_2();
	marshaled.___iterationCount_3 = unmarshaled.get_iterationCount_3();
	marshaled.___stepSize_4 = unmarshaled.get_stepSize_4();
	marshaled.___widthModifier_5 = unmarshaled.get_widthModifier_5();
	marshaled.___reflectionBlur_6 = unmarshaled.get_reflectionBlur_6();
	marshaled.___reflectBackfaces_7 = static_cast<int32_t>(unmarshaled.get_reflectBackfaces_7());
}
extern "C" void ReflectionSettings_t282755190_marshal_com_back(const ReflectionSettings_t282755190_marshaled_com& marshaled, ReflectionSettings_t282755190& unmarshaled)
{
	int32_t unmarshaled_blendType_temp_0 = 0;
	unmarshaled_blendType_temp_0 = marshaled.___blendType_0;
	unmarshaled.set_blendType_0(unmarshaled_blendType_temp_0);
	int32_t unmarshaled_reflectionQuality_temp_1 = 0;
	unmarshaled_reflectionQuality_temp_1 = marshaled.___reflectionQuality_1;
	unmarshaled.set_reflectionQuality_1(unmarshaled_reflectionQuality_temp_1);
	float unmarshaled_maxDistance_temp_2 = 0.0f;
	unmarshaled_maxDistance_temp_2 = marshaled.___maxDistance_2;
	unmarshaled.set_maxDistance_2(unmarshaled_maxDistance_temp_2);
	int32_t unmarshaled_iterationCount_temp_3 = 0;
	unmarshaled_iterationCount_temp_3 = marshaled.___iterationCount_3;
	unmarshaled.set_iterationCount_3(unmarshaled_iterationCount_temp_3);
	int32_t unmarshaled_stepSize_temp_4 = 0;
	unmarshaled_stepSize_temp_4 = marshaled.___stepSize_4;
	unmarshaled.set_stepSize_4(unmarshaled_stepSize_temp_4);
	float unmarshaled_widthModifier_temp_5 = 0.0f;
	unmarshaled_widthModifier_temp_5 = marshaled.___widthModifier_5;
	unmarshaled.set_widthModifier_5(unmarshaled_widthModifier_temp_5);
	float unmarshaled_reflectionBlur_temp_6 = 0.0f;
	unmarshaled_reflectionBlur_temp_6 = marshaled.___reflectionBlur_6;
	unmarshaled.set_reflectionBlur_6(unmarshaled_reflectionBlur_temp_6);
	bool unmarshaled_reflectBackfaces_temp_7 = false;
	unmarshaled_reflectBackfaces_temp_7 = static_cast<bool>(marshaled.___reflectBackfaces_7);
	unmarshaled.set_reflectBackfaces_7(unmarshaled_reflectBackfaces_temp_7);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings
extern "C" void ReflectionSettings_t282755190_marshal_com_cleanup(ReflectionSettings_t282755190_marshaled_com& marshaled)
{
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


// Conversion methods for marshalling of: UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings
extern "C" void Settings_t1995791524_marshal_pinvoke(const Settings_t1995791524& unmarshaled, Settings_t1995791524_marshaled_pinvoke& marshaled)
{
	ReflectionSettings_t282755190_marshal_pinvoke(unmarshaled.get_reflection_0(), marshaled.___reflection_0);
	marshaled.___intensity_1 = unmarshaled.get_intensity_1();
	marshaled.___screenEdgeMask_2 = unmarshaled.get_screenEdgeMask_2();
}
extern "C" void Settings_t1995791524_marshal_pinvoke_back(const Settings_t1995791524_marshaled_pinvoke& marshaled, Settings_t1995791524& unmarshaled)
{
	ReflectionSettings_t282755190  unmarshaled_reflection_temp_0;
	memset(&unmarshaled_reflection_temp_0, 0, sizeof(unmarshaled_reflection_temp_0));
	ReflectionSettings_t282755190_marshal_pinvoke_back(marshaled.___reflection_0, unmarshaled_reflection_temp_0);
	unmarshaled.set_reflection_0(unmarshaled_reflection_temp_0);
	IntensitySettings_t1721872184  unmarshaled_intensity_temp_1;
	memset(&unmarshaled_intensity_temp_1, 0, sizeof(unmarshaled_intensity_temp_1));
	unmarshaled_intensity_temp_1 = marshaled.___intensity_1;
	unmarshaled.set_intensity_1(unmarshaled_intensity_temp_1);
	ScreenEdgeMask_t4063288584  unmarshaled_screenEdgeMask_temp_2;
	memset(&unmarshaled_screenEdgeMask_temp_2, 0, sizeof(unmarshaled_screenEdgeMask_temp_2));
	unmarshaled_screenEdgeMask_temp_2 = marshaled.___screenEdgeMask_2;
	unmarshaled.set_screenEdgeMask_2(unmarshaled_screenEdgeMask_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings
extern "C" void Settings_t1995791524_marshal_pinvoke_cleanup(Settings_t1995791524_marshaled_pinvoke& marshaled)
{
	ReflectionSettings_t282755190_marshal_pinvoke_cleanup(marshaled.___reflection_0);
}


// Conversion methods for marshalling of: UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings
extern "C" void Settings_t1995791524_marshal_com(const Settings_t1995791524& unmarshaled, Settings_t1995791524_marshaled_com& marshaled)
{
	ReflectionSettings_t282755190_marshal_com(unmarshaled.get_reflection_0(), marshaled.___reflection_0);
	marshaled.___intensity_1 = unmarshaled.get_intensity_1();
	marshaled.___screenEdgeMask_2 = unmarshaled.get_screenEdgeMask_2();
}
extern "C" void Settings_t1995791524_marshal_com_back(const Settings_t1995791524_marshaled_com& marshaled, Settings_t1995791524& unmarshaled)
{
	ReflectionSettings_t282755190  unmarshaled_reflection_temp_0;
	memset(&unmarshaled_reflection_temp_0, 0, sizeof(unmarshaled_reflection_temp_0));
	ReflectionSettings_t282755190_marshal_com_back(marshaled.___reflection_0, unmarshaled_reflection_temp_0);
	unmarshaled.set_reflection_0(unmarshaled_reflection_temp_0);
	IntensitySettings_t1721872184  unmarshaled_intensity_temp_1;
	memset(&unmarshaled_intensity_temp_1, 0, sizeof(unmarshaled_intensity_temp_1));
	unmarshaled_intensity_temp_1 = marshaled.___intensity_1;
	unmarshaled.set_intensity_1(unmarshaled_intensity_temp_1);
	ScreenEdgeMask_t4063288584  unmarshaled_screenEdgeMask_temp_2;
	memset(&unmarshaled_screenEdgeMask_temp_2, 0, sizeof(unmarshaled_screenEdgeMask_temp_2));
	unmarshaled_screenEdgeMask_temp_2 = marshaled.___screenEdgeMask_2;
	unmarshaled.set_screenEdgeMask_2(unmarshaled_screenEdgeMask_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings
extern "C" void Settings_t1995791524_marshal_com_cleanup(Settings_t1995791524_marshaled_com& marshaled)
{
	ReflectionSettings_t282755190_marshal_com_cleanup(marshaled.___reflection_0);
}
// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings::get_defaultSettings()
extern "C"  Settings_t1995791524  Settings_get_defaultSettings_m3330699527 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	Settings_t1995791524  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ReflectionSettings_t282755190  V_1;
	memset(&V_1, 0, sizeof(V_1));
	IntensitySettings_t1721872184  V_2;
	memset(&V_2, 0, sizeof(V_2));
	ScreenEdgeMask_t4063288584  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Settings_t1995791524 ));
		il2cpp_codegen_initobj((&V_1), sizeof(ReflectionSettings_t282755190 ));
		(&V_1)->set_blendType_0(0);
		(&V_1)->set_reflectionQuality_1(2);
		(&V_1)->set_maxDistance_2((100.0f));
		(&V_1)->set_iterationCount_3(((int32_t)256));
		(&V_1)->set_stepSize_4(3);
		(&V_1)->set_widthModifier_5((0.5f));
		(&V_1)->set_reflectionBlur_6((1.0f));
		(&V_1)->set_reflectBackfaces_7((bool)0);
		ReflectionSettings_t282755190  L_0 = V_1;
		(&V_0)->set_reflection_0(L_0);
		il2cpp_codegen_initobj((&V_2), sizeof(IntensitySettings_t1721872184 ));
		(&V_2)->set_reflectionMultiplier_0((1.0f));
		(&V_2)->set_fadeDistance_1((100.0f));
		(&V_2)->set_fresnelFade_2((1.0f));
		(&V_2)->set_fresnelFadePower_3((1.0f));
		IntensitySettings_t1721872184  L_1 = V_2;
		(&V_0)->set_intensity_1(L_1);
		il2cpp_codegen_initobj((&V_3), sizeof(ScreenEdgeMask_t4063288584 ));
		(&V_3)->set_intensity_0((0.03f));
		ScreenEdgeMask_t4063288584  L_2 = V_3;
		(&V_0)->set_screenEdgeMask_2(L_2);
		Settings_t1995791524  L_3 = V_0;
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
// System.Void UnityEngine.PostProcessing.TaaComponent::.ctor()
extern "C"  void TaaComponent__ctor_m675959233 (TaaComponent_t3791749658 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaaComponent__ctor_m675959233_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_MRT_4(((RenderBufferU5BU5D_t1615831949*)SZArrayNew(RenderBufferU5BU5D_t1615831949_il2cpp_TypeInfo_var, (uint32_t)2)));
		__this->set_m_ResetHistory_6((bool)1);
		PostProcessingComponentRenderTexture_1__ctor_m1485528837(__this, /*hidden argument*/PostProcessingComponentRenderTexture_1__ctor_m1485528837_RuntimeMethod_var);
		return;
	}
}
// System.Boolean UnityEngine.PostProcessing.TaaComponent::get_active()
extern "C"  bool TaaComponent_get_active_m3051132930 (TaaComponent_t3791749658 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaaComponent_get_active_m3051132930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Settings_t4292431647  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t G_B6_0 = 0;
	{
		AntialiasingModel_t1521139388 * L_0 = PostProcessingComponent_1_get_model_m3744888901(__this, /*hidden argument*/PostProcessingComponent_1_get_model_m3744888901_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1 = PostProcessingModel_get_enabled_m2892084724(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		AntialiasingModel_t1521139388 * L_2 = PostProcessingComponent_1_get_model_m3744888901(__this, /*hidden argument*/PostProcessingComponent_1_get_model_m3744888901_RuntimeMethod_var);
		NullCheck(L_2);
		Settings_t4292431647  L_3 = AntialiasingModel_get_settings_m675444796(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = (&V_0)->get_method_0();
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_004e;
		}
	}
	{
		bool L_5 = SystemInfo_SupportsRenderTextureFormat_m1663449629(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		bool L_6 = SystemInfo_get_supportsMotionVectors_m46965105(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		PostProcessingContext_t2014408948 * L_7 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_7);
		bool L_8 = PostProcessingContext_get_interrupted_m1809095682(L_7, /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		goto IL_004f;
	}

IL_004e:
	{
		G_B6_0 = 0;
	}

IL_004f:
	{
		return (bool)G_B6_0;
	}
}
// UnityEngine.DepthTextureMode UnityEngine.PostProcessing.TaaComponent::GetCameraFlags()
extern "C"  int32_t TaaComponent_GetCameraFlags_m2323189770 (TaaComponent_t3791749658 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(5);
	}
}
// System.Void UnityEngine.PostProcessing.TaaComponent::ResetHistory()
extern "C"  void TaaComponent_ResetHistory_m3846253241 (TaaComponent_t3791749658 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_ResetHistory_6((bool)1);
		return;
	}
}
// System.Void UnityEngine.PostProcessing.TaaComponent::SetProjectionMatrix(System.Func`2<UnityEngine.Vector2,UnityEngine.Matrix4x4>)
extern "C"  void TaaComponent_SetProjectionMatrix_m2316589171 (TaaComponent_t3791749658 * __this, Func_2_t4093140010 * ___jitteredFunc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaaComponent_SetProjectionMatrix_m2316589171_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TaaSettings_t2709374970  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Settings_t4292431647  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Material_t340375123 * V_3 = NULL;
	Camera_t4157153871 * G_B4_0 = NULL;
	Camera_t4157153871 * G_B3_0 = NULL;
	Matrix4x4_t1817901843  G_B5_0;
	memset(&G_B5_0, 0, sizeof(G_B5_0));
	Camera_t4157153871 * G_B5_1 = NULL;
	{
		AntialiasingModel_t1521139388 * L_0 = PostProcessingComponent_1_get_model_m3744888901(__this, /*hidden argument*/PostProcessingComponent_1_get_model_m3744888901_RuntimeMethod_var);
		NullCheck(L_0);
		Settings_t4292431647  L_1 = AntialiasingModel_get_settings_m675444796(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		TaaSettings_t2709374970  L_2 = (&V_1)->get_taaSettings_2();
		V_0 = L_2;
		Vector2_t2156229523  L_3 = TaaComponent_GenerateRandomOffset_m1416894136(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		Vector2_t2156229523  L_4 = V_2;
		float L_5 = (&V_0)->get_jitterSpread_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_6 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		PostProcessingContext_t2014408948 * L_7 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_7);
		Camera_t4157153871 * L_8 = L_7->get_camera_1();
		PostProcessingContext_t2014408948 * L_9 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_9);
		Camera_t4157153871 * L_10 = L_9->get_camera_1();
		NullCheck(L_10);
		Matrix4x4_t1817901843  L_11 = Camera_get_projectionMatrix_m667780853(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Camera_set_nonJitteredProjectionMatrix_m3492270478(L_8, L_11, /*hidden argument*/NULL);
		Func_2_t4093140010 * L_12 = ___jitteredFunc0;
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		PostProcessingContext_t2014408948 * L_13 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_13);
		Camera_t4157153871 * L_14 = L_13->get_camera_1();
		Func_2_t4093140010 * L_15 = ___jitteredFunc0;
		Vector2_t2156229523  L_16 = V_2;
		NullCheck(L_15);
		Matrix4x4_t1817901843  L_17 = Func_2_Invoke_m886748628(L_15, L_16, /*hidden argument*/Func_2_Invoke_m886748628_RuntimeMethod_var);
		NullCheck(L_14);
		Camera_set_projectionMatrix_m3293177686(L_14, L_17, /*hidden argument*/NULL);
		goto IL_00a3;
	}

IL_006b:
	{
		PostProcessingContext_t2014408948 * L_18 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_18);
		Camera_t4157153871 * L_19 = L_18->get_camera_1();
		PostProcessingContext_t2014408948 * L_20 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_20);
		Camera_t4157153871 * L_21 = L_20->get_camera_1();
		NullCheck(L_21);
		bool L_22 = Camera_get_orthographic_m2831464531(L_21, /*hidden argument*/NULL);
		G_B3_0 = L_19;
		if (!L_22)
		{
			G_B4_0 = L_19;
			goto IL_0097;
		}
	}
	{
		Vector2_t2156229523  L_23 = V_2;
		Matrix4x4_t1817901843  L_24 = TaaComponent_GetOrthographicProjectionMatrix_m3494165154(__this, L_23, /*hidden argument*/NULL);
		G_B5_0 = L_24;
		G_B5_1 = G_B3_0;
		goto IL_009e;
	}

IL_0097:
	{
		Vector2_t2156229523  L_25 = V_2;
		Matrix4x4_t1817901843  L_26 = TaaComponent_GetPerspectiveProjectionMatrix_m2335334281(__this, L_25, /*hidden argument*/NULL);
		G_B5_0 = L_26;
		G_B5_1 = G_B4_0;
	}

IL_009e:
	{
		NullCheck(G_B5_1);
		Camera_set_projectionMatrix_m3293177686(G_B5_1, G_B5_0, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		PostProcessingContext_t2014408948 * L_27 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_27);
		Camera_t4157153871 * L_28 = L_27->get_camera_1();
		NullCheck(L_28);
		Camera_set_useJitteredProjectionMatrixForTransparentRendering_m1059913304(L_28, (bool)0, /*hidden argument*/NULL);
		Vector2_t2156229523 * L_29 = (&V_2);
		float L_30 = L_29->get_x_0();
		PostProcessingContext_t2014408948 * L_31 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_31);
		int32_t L_32 = PostProcessingContext_get_width_m2658937703(L_31, /*hidden argument*/NULL);
		L_29->set_x_0(((float)((float)L_30/(float)(((float)((float)L_32))))));
		Vector2_t2156229523 * L_33 = (&V_2);
		float L_34 = L_33->get_y_1();
		PostProcessingContext_t2014408948 * L_35 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_35);
		int32_t L_36 = PostProcessingContext_get_height_m4218042885(L_35, /*hidden argument*/NULL);
		L_33->set_y_1(((float)((float)L_34/(float)(((float)((float)L_36))))));
		PostProcessingContext_t2014408948 * L_37 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_37);
		MaterialFactory_t2445948724 * L_38 = L_37->get_materialFactory_2();
		NullCheck(L_38);
		Material_t340375123 * L_39 = MaterialFactory_Get_m4113232693(L_38, _stringLiteral1950142242, /*hidden argument*/NULL);
		V_3 = L_39;
		Material_t340375123 * L_40 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t3024963833_il2cpp_TypeInfo_var);
		int32_t L_41 = ((Uniforms_t3024963833_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t3024963833_il2cpp_TypeInfo_var))->get__Jitter_0();
		Vector2_t2156229523  L_42 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_43 = Vector4_op_Implicit_m237151757(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		NullCheck(L_40);
		Material_SetVector_m2633010038(L_40, L_41, L_43, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.PostProcessing.TaaComponent::Render(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void TaaComponent_Render_m2638556758 (TaaComponent_t3791749658 * __this, RenderTexture_t2108887433 * ___source0, RenderTexture_t2108887433 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaaComponent_Render_m2638556758_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Material_t340375123 * V_0 = NULL;
	TaaSettings_t2709374970  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Settings_t4292431647  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RenderTexture_t2108887433 * V_3 = NULL;
	Material_t340375123 * G_B9_0 = NULL;
	Material_t340375123 * G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	Material_t340375123 * G_B10_1 = NULL;
	{
		PostProcessingContext_t2014408948 * L_0 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_0);
		MaterialFactory_t2445948724 * L_1 = L_0->get_materialFactory_2();
		NullCheck(L_1);
		Material_t340375123 * L_2 = MaterialFactory_Get_m4113232693(L_1, _stringLiteral1950142242, /*hidden argument*/NULL);
		V_0 = L_2;
		Material_t340375123 * L_3 = V_0;
		NullCheck(L_3);
		Material_set_shaderKeywords_m4017377042(L_3, (StringU5BU5D_t1281789340*)(StringU5BU5D_t1281789340*)NULL, /*hidden argument*/NULL);
		AntialiasingModel_t1521139388 * L_4 = PostProcessingComponent_1_get_model_m3744888901(__this, /*hidden argument*/PostProcessingComponent_1_get_model_m3744888901_RuntimeMethod_var);
		NullCheck(L_4);
		Settings_t4292431647  L_5 = AntialiasingModel_get_settings_m675444796(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		TaaSettings_t2709374970  L_6 = (&V_2)->get_taaSettings_2();
		V_1 = L_6;
		bool L_7 = __this->get_m_ResetHistory_6();
		if (L_7)
		{
			goto IL_0079;
		}
	}
	{
		RenderTexture_t2108887433 * L_8 = __this->get_m_HistoryTexture_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0079;
		}
	}
	{
		RenderTexture_t2108887433 * L_10 = __this->get_m_HistoryTexture_7();
		NullCheck(L_10);
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_10);
		RenderTexture_t2108887433 * L_12 = ___source0;
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_12);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0079;
		}
	}
	{
		RenderTexture_t2108887433 * L_14 = __this->get_m_HistoryTexture_7();
		NullCheck(L_14);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_14);
		RenderTexture_t2108887433 * L_16 = ___source0;
		NullCheck(L_16);
		int32_t L_17 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_16);
		if ((((int32_t)L_15) == ((int32_t)L_17)))
		{
			goto IL_00d0;
		}
	}

IL_0079:
	{
		RenderTexture_t2108887433 * L_18 = __this->get_m_HistoryTexture_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0094;
		}
	}
	{
		RenderTexture_t2108887433 * L_20 = __this->get_m_HistoryTexture_7();
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
	}

IL_0094:
	{
		RenderTexture_t2108887433 * L_21 = ___source0;
		NullCheck(L_21);
		int32_t L_22 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_21);
		RenderTexture_t2108887433 * L_23 = ___source0;
		NullCheck(L_23);
		int32_t L_24 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_23);
		RenderTexture_t2108887433 * L_25 = ___source0;
		NullCheck(L_25);
		int32_t L_26 = RenderTexture_get_format_m3846871418(L_25, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_27 = RenderTexture_GetTemporary_m3378328322(NULL /*static, unused*/, L_22, L_24, 0, L_26, /*hidden argument*/NULL);
		__this->set_m_HistoryTexture_7(L_27);
		RenderTexture_t2108887433 * L_28 = __this->get_m_HistoryTexture_7();
		NullCheck(L_28);
		Object_set_name_m291480324(L_28, _stringLiteral504576554, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_29 = ___source0;
		RenderTexture_t2108887433 * L_30 = __this->get_m_HistoryTexture_7();
		Material_t340375123 * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m4126770912(NULL /*static, unused*/, L_29, L_30, L_31, 2, /*hidden argument*/NULL);
	}

IL_00d0:
	{
		Material_t340375123 * L_32 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t3024963833_il2cpp_TypeInfo_var);
		int32_t L_33 = ((Uniforms_t3024963833_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t3024963833_il2cpp_TypeInfo_var))->get__SharpenParameters_1();
		float L_34 = (&V_1)->get_sharpen_1();
		Vector4_t3319028937  L_35;
		memset(&L_35, 0, sizeof(L_35));
		Vector4__ctor_m2498754347((&L_35), L_34, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_32);
		Material_SetVector_m2633010038(L_32, L_33, L_35, /*hidden argument*/NULL);
		Material_t340375123 * L_36 = V_0;
		int32_t L_37 = ((Uniforms_t3024963833_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t3024963833_il2cpp_TypeInfo_var))->get__FinalBlendParameters_2();
		float L_38 = (&V_1)->get_stationaryBlending_2();
		float L_39 = (&V_1)->get_motionBlending_3();
		Vector4_t3319028937  L_40;
		memset(&L_40, 0, sizeof(L_40));
		Vector4__ctor_m2498754347((&L_40), L_38, L_39, (6000.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_36);
		Material_SetVector_m2633010038(L_36, L_37, L_40, /*hidden argument*/NULL);
		Material_t340375123 * L_41 = V_0;
		int32_t L_42 = ((Uniforms_t3024963833_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t3024963833_il2cpp_TypeInfo_var))->get__MainTex_4();
		RenderTexture_t2108887433 * L_43 = ___source0;
		NullCheck(L_41);
		Material_SetTexture_m3009528825(L_41, L_42, L_43, /*hidden argument*/NULL);
		Material_t340375123 * L_44 = V_0;
		int32_t L_45 = ((Uniforms_t3024963833_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t3024963833_il2cpp_TypeInfo_var))->get__HistoryTex_3();
		RenderTexture_t2108887433 * L_46 = __this->get_m_HistoryTexture_7();
		NullCheck(L_44);
		Material_SetTexture_m3009528825(L_44, L_45, L_46, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_47 = ___source0;
		NullCheck(L_47);
		int32_t L_48 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_47);
		RenderTexture_t2108887433 * L_49 = ___source0;
		NullCheck(L_49);
		int32_t L_50 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_49);
		RenderTexture_t2108887433 * L_51 = ___source0;
		NullCheck(L_51);
		int32_t L_52 = RenderTexture_get_format_m3846871418(L_51, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_53 = RenderTexture_GetTemporary_m3378328322(NULL /*static, unused*/, L_48, L_50, 0, L_52, /*hidden argument*/NULL);
		V_3 = L_53;
		RenderTexture_t2108887433 * L_54 = V_3;
		NullCheck(L_54);
		Object_set_name_m291480324(L_54, _stringLiteral504576554, /*hidden argument*/NULL);
		RenderBufferU5BU5D_t1615831949* L_55 = __this->get_m_MRT_4();
		NullCheck(L_55);
		RenderTexture_t2108887433 * L_56 = ___destination1;
		NullCheck(L_56);
		RenderBuffer_t586150500  L_57 = RenderTexture_get_colorBuffer_m2062927451(L_56, /*hidden argument*/NULL);
		*(RenderBuffer_t586150500 *)((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_57;
		RenderBufferU5BU5D_t1615831949* L_58 = __this->get_m_MRT_4();
		NullCheck(L_58);
		RenderTexture_t2108887433 * L_59 = V_3;
		NullCheck(L_59);
		RenderBuffer_t586150500  L_60 = RenderTexture_get_colorBuffer_m2062927451(L_59, /*hidden argument*/NULL);
		*(RenderBuffer_t586150500 *)((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_60;
		RenderBufferU5BU5D_t1615831949* L_61 = __this->get_m_MRT_4();
		RenderTexture_t2108887433 * L_62 = ___source0;
		NullCheck(L_62);
		RenderBuffer_t586150500  L_63 = RenderTexture_get_depthBuffer_m1409937006(L_62, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_m191444692(NULL /*static, unused*/, L_61, L_63, /*hidden argument*/NULL);
		Material_t340375123 * L_64 = V_0;
		PostProcessingContext_t2014408948 * L_65 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_65);
		Camera_t4157153871 * L_66 = L_65->get_camera_1();
		NullCheck(L_66);
		bool L_67 = Camera_get_orthographic_m2831464531(L_66, /*hidden argument*/NULL);
		G_B8_0 = L_64;
		if (!L_67)
		{
			G_B9_0 = L_64;
			goto IL_01ba;
		}
	}
	{
		G_B10_0 = 1;
		G_B10_1 = G_B8_0;
		goto IL_01bb;
	}

IL_01ba:
	{
		G_B10_0 = 0;
		G_B10_1 = G_B9_0;
	}

IL_01bb:
	{
		GraphicsUtils_Blit_m1958513870(NULL /*static, unused*/, G_B10_1, G_B10_0, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_68 = __this->get_m_HistoryTexture_7();
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_68, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_69 = V_3;
		__this->set_m_HistoryTexture_7(L_69);
		__this->set_m_ResetHistory_6((bool)0);
		return;
	}
}
// System.Single UnityEngine.PostProcessing.TaaComponent::GetHaltonValue(System.Int32,System.Int32)
extern "C"  float TaaComponent_GetHaltonValue_m3411042843 (TaaComponent_t3791749658 * __this, int32_t ___index0, int32_t ___radix1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0f);
		int32_t L_0 = ___radix1;
		V_1 = ((float)((float)(1.0f)/(float)(((float)((float)L_0)))));
		goto IL_0027;
	}

IL_0014:
	{
		float L_1 = V_0;
		int32_t L_2 = ___index0;
		int32_t L_3 = ___radix1;
		float L_4 = V_1;
		V_0 = ((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)((int32_t)L_2%(int32_t)L_3))))), (float)L_4))));
		int32_t L_5 = ___index0;
		int32_t L_6 = ___radix1;
		___index0 = ((int32_t)((int32_t)L_5/(int32_t)L_6));
		float L_7 = V_1;
		int32_t L_8 = ___radix1;
		V_1 = ((float)((float)L_7/(float)(((float)((float)L_8)))));
	}

IL_0027:
	{
		int32_t L_9 = ___index0;
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		float L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Vector2 UnityEngine.PostProcessing.TaaComponent::GenerateRandomOffset()
extern "C"  Vector2_t2156229523  TaaComponent_GenerateRandomOffset_m1416894136 (TaaComponent_t3791749658 * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_m_SampleIndex_5();
		float L_1 = TaaComponent_GetHaltonValue_m3411042843(__this, ((int32_t)((int32_t)L_0&(int32_t)((int32_t)1023))), 2, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_m_SampleIndex_5();
		float L_3 = TaaComponent_GetHaltonValue_m3411042843(__this, ((int32_t)((int32_t)L_2&(int32_t)((int32_t)1023))), 3, /*hidden argument*/NULL);
		Vector2__ctor_m3970636864((&V_0), L_1, L_3, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_m_SampleIndex_5();
		int32_t L_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		V_1 = L_5;
		__this->set_m_SampleIndex_5(L_5);
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)8)))
		{
			goto IL_004b;
		}
	}
	{
		__this->set_m_SampleIndex_5(0);
	}

IL_004b:
	{
		Vector2_t2156229523  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.PostProcessing.TaaComponent::GetPerspectiveProjectionMatrix(UnityEngine.Vector2)
extern "C"  Matrix4x4_t1817901843  TaaComponent_GetPerspectiveProjectionMatrix_m2335334281 (TaaComponent_t3791749658 * __this, Vector2_t2156229523  ___offset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaaComponent_GetPerspectiveProjectionMatrix_m2335334281_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Matrix4x4_t1817901843  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		PostProcessingContext_t2014408948 * L_0 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_0);
		Camera_t4157153871 * L_1 = L_0->get_camera_1();
		NullCheck(L_1);
		float L_2 = Camera_get_fieldOfView_m1018585504(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = tanf(((float)il2cpp_codegen_multiply((float)(0.008726646f), (float)L_2)));
		V_0 = L_3;
		float L_4 = V_0;
		PostProcessingContext_t2014408948 * L_5 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_5);
		Camera_t4157153871 * L_6 = L_5->get_camera_1();
		NullCheck(L_6);
		float L_7 = Camera_get_aspect_m862507514(L_6, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_4, (float)L_7));
		Vector2_t2156229523 * L_8 = (&___offset0);
		float L_9 = L_8->get_x_0();
		float L_10 = V_1;
		PostProcessingContext_t2014408948 * L_11 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_11);
		int32_t L_12 = PostProcessingContext_get_width_m2658937703(L_11, /*hidden argument*/NULL);
		L_8->set_x_0(((float)il2cpp_codegen_multiply((float)L_9, (float)((float)((float)L_10/(float)((float)il2cpp_codegen_multiply((float)(0.5f), (float)(((float)((float)L_12))))))))));
		Vector2_t2156229523 * L_13 = (&___offset0);
		float L_14 = L_13->get_y_1();
		float L_15 = V_0;
		PostProcessingContext_t2014408948 * L_16 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_16);
		int32_t L_17 = PostProcessingContext_get_height_m4218042885(L_16, /*hidden argument*/NULL);
		L_13->set_y_1(((float)il2cpp_codegen_multiply((float)L_14, (float)((float)((float)L_15/(float)((float)il2cpp_codegen_multiply((float)(0.5f), (float)(((float)((float)L_17))))))))));
		float L_18 = (&___offset0)->get_x_0();
		float L_19 = V_1;
		PostProcessingContext_t2014408948 * L_20 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_20);
		Camera_t4157153871 * L_21 = L_20->get_camera_1();
		NullCheck(L_21);
		float L_22 = Camera_get_nearClipPlane_m837839537(L_21, /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_18, (float)L_19)), (float)L_22));
		float L_23 = (&___offset0)->get_x_0();
		float L_24 = V_1;
		PostProcessingContext_t2014408948 * L_25 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_25);
		Camera_t4157153871 * L_26 = L_25->get_camera_1();
		NullCheck(L_26);
		float L_27 = Camera_get_nearClipPlane_m837839537(L_26, /*hidden argument*/NULL);
		V_3 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_23, (float)L_24)), (float)L_27));
		float L_28 = (&___offset0)->get_y_1();
		float L_29 = V_0;
		PostProcessingContext_t2014408948 * L_30 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_30);
		Camera_t4157153871 * L_31 = L_30->get_camera_1();
		NullCheck(L_31);
		float L_32 = Camera_get_nearClipPlane_m837839537(L_31, /*hidden argument*/NULL);
		V_4 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_28, (float)L_29)), (float)L_32));
		float L_33 = (&___offset0)->get_y_1();
		float L_34 = V_0;
		PostProcessingContext_t2014408948 * L_35 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_35);
		Camera_t4157153871 * L_36 = L_35->get_camera_1();
		NullCheck(L_36);
		float L_37 = Camera_get_nearClipPlane_m837839537(L_36, /*hidden argument*/NULL);
		V_5 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_33, (float)L_34)), (float)L_37));
		il2cpp_codegen_initobj((&V_6), sizeof(Matrix4x4_t1817901843 ));
		PostProcessingContext_t2014408948 * L_38 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_38);
		Camera_t4157153871 * L_39 = L_38->get_camera_1();
		NullCheck(L_39);
		float L_40 = Camera_get_nearClipPlane_m837839537(L_39, /*hidden argument*/NULL);
		float L_41 = V_3;
		float L_42 = V_2;
		Matrix4x4_set_Item_m4102745984((&V_6), 0, 0, ((float)((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_40))/(float)((float)il2cpp_codegen_subtract((float)L_41, (float)L_42)))), /*hidden argument*/NULL);
		Matrix4x4_set_Item_m4102745984((&V_6), 0, 1, (0.0f), /*hidden argument*/NULL);
		float L_43 = V_3;
		float L_44 = V_2;
		float L_45 = V_3;
		float L_46 = V_2;
		Matrix4x4_set_Item_m4102745984((&V_6), 0, 2, ((float)((float)((float)il2cpp_codegen_add((float)L_43, (float)L_44))/(float)((float)il2cpp_codegen_subtract((float)L_45, (float)L_46)))), /*hidden argument*/NULL);
		Matrix4x4_set_Item_m4102745984((&V_6), 0, 3, (0.0f), /*hidden argument*/NULL);
		Matrix4x4_set_Item_m4102745984((&V_6), 1, 0, (0.0f), /*hidden argument*/NULL);
		PostProcessingContext_t2014408948 * L_47 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_47);
		Camera_t4157153871 * L_48 = L_47->get_camera_1();
		NullCheck(L_48);
		float L_49 = Camera_get_nearClipPlane_m837839537(L_48, /*hidden argument*/NULL);
		float L_50 = V_4;
		float L_51 = V_5;
		Matrix4x4_set_Item_m4102745984((&V_6), 1, 1, ((float)((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_49))/(float)((float)il2cpp_codegen_subtract((float)L_50, (float)L_51)))), /*hidden argument*/NULL);
		float L_52 = V_4;
		float L_53 = V_5;
		float L_54 = V_4;
		float L_55 = V_5;
		Matrix4x4_set_Item_m4102745984((&V_6), 1, 2, ((float)((float)((float)il2cpp_codegen_add((float)L_52, (float)L_53))/(float)((float)il2cpp_codegen_subtract((float)L_54, (float)L_55)))), /*hidden argument*/NULL);
		Matrix4x4_set_Item_m4102745984((&V_6), 1, 3, (0.0f), /*hidden argument*/NULL);
		Matrix4x4_set_Item_m4102745984((&V_6), 2, 0, (0.0f), /*hidden argument*/NULL);
		Matrix4x4_set_Item_m4102745984((&V_6), 2, 1, (0.0f), /*hidden argument*/NULL);
		PostProcessingContext_t2014408948 * L_56 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_56);
		Camera_t4157153871 * L_57 = L_56->get_camera_1();
		NullCheck(L_57);
		float L_58 = Camera_get_farClipPlane_m538536689(L_57, /*hidden argument*/NULL);
		PostProcessingContext_t2014408948 * L_59 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_59);
		Camera_t4157153871 * L_60 = L_59->get_camera_1();
		NullCheck(L_60);
		float L_61 = Camera_get_nearClipPlane_m837839537(L_60, /*hidden argument*/NULL);
		PostProcessingContext_t2014408948 * L_62 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_62);
		Camera_t4157153871 * L_63 = L_62->get_camera_1();
		NullCheck(L_63);
		float L_64 = Camera_get_farClipPlane_m538536689(L_63, /*hidden argument*/NULL);
		PostProcessingContext_t2014408948 * L_65 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_65);
		Camera_t4157153871 * L_66 = L_65->get_camera_1();
		NullCheck(L_66);
		float L_67 = Camera_get_nearClipPlane_m837839537(L_66, /*hidden argument*/NULL);
		Matrix4x4_set_Item_m4102745984((&V_6), 2, 2, ((float)((float)((-((float)il2cpp_codegen_add((float)L_58, (float)L_61))))/(float)((float)il2cpp_codegen_subtract((float)L_64, (float)L_67)))), /*hidden argument*/NULL);
		PostProcessingContext_t2014408948 * L_68 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_68);
		Camera_t4157153871 * L_69 = L_68->get_camera_1();
		NullCheck(L_69);
		float L_70 = Camera_get_farClipPlane_m538536689(L_69, /*hidden argument*/NULL);
		PostProcessingContext_t2014408948 * L_71 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_71);
		Camera_t4157153871 * L_72 = L_71->get_camera_1();
		NullCheck(L_72);
		float L_73 = Camera_get_nearClipPlane_m837839537(L_72, /*hidden argument*/NULL);
		PostProcessingContext_t2014408948 * L_74 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_74);
		Camera_t4157153871 * L_75 = L_74->get_camera_1();
		NullCheck(L_75);
		float L_76 = Camera_get_farClipPlane_m538536689(L_75, /*hidden argument*/NULL);
		PostProcessingContext_t2014408948 * L_77 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_77);
		Camera_t4157153871 * L_78 = L_77->get_camera_1();
		NullCheck(L_78);
		float L_79 = Camera_get_nearClipPlane_m837839537(L_78, /*hidden argument*/NULL);
		Matrix4x4_set_Item_m4102745984((&V_6), 2, 3, ((float)((float)((-((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_70)), (float)L_73))))/(float)((float)il2cpp_codegen_subtract((float)L_76, (float)L_79)))), /*hidden argument*/NULL);
		Matrix4x4_set_Item_m4102745984((&V_6), 3, 0, (0.0f), /*hidden argument*/NULL);
		Matrix4x4_set_Item_m4102745984((&V_6), 3, 1, (0.0f), /*hidden argument*/NULL);
		Matrix4x4_set_Item_m4102745984((&V_6), 3, 2, (-1.0f), /*hidden argument*/NULL);
		Matrix4x4_set_Item_m4102745984((&V_6), 3, 3, (0.0f), /*hidden argument*/NULL);
		Matrix4x4_t1817901843  L_80 = V_6;
		return L_80;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.PostProcessing.TaaComponent::GetOrthographicProjectionMatrix(UnityEngine.Vector2)
extern "C"  Matrix4x4_t1817901843  TaaComponent_GetOrthographicProjectionMatrix_m3494165154 (TaaComponent_t3791749658 * __this, Vector2_t2156229523  ___offset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaaComponent_GetOrthographicProjectionMatrix_m3494165154_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		PostProcessingContext_t2014408948 * L_0 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_0);
		Camera_t4157153871 * L_1 = L_0->get_camera_1();
		NullCheck(L_1);
		float L_2 = Camera_get_orthographicSize_m3903216845(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		PostProcessingContext_t2014408948 * L_4 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_4);
		Camera_t4157153871 * L_5 = L_4->get_camera_1();
		NullCheck(L_5);
		float L_6 = Camera_get_aspect_m862507514(L_5, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_3, (float)L_6));
		Vector2_t2156229523 * L_7 = (&___offset0);
		float L_8 = L_7->get_x_0();
		float L_9 = V_1;
		PostProcessingContext_t2014408948 * L_10 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_10);
		int32_t L_11 = PostProcessingContext_get_width_m2658937703(L_10, /*hidden argument*/NULL);
		L_7->set_x_0(((float)il2cpp_codegen_multiply((float)L_8, (float)((float)((float)L_9/(float)((float)il2cpp_codegen_multiply((float)(0.5f), (float)(((float)((float)L_11))))))))));
		Vector2_t2156229523 * L_12 = (&___offset0);
		float L_13 = L_12->get_y_1();
		float L_14 = V_0;
		PostProcessingContext_t2014408948 * L_15 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_15);
		int32_t L_16 = PostProcessingContext_get_height_m4218042885(L_15, /*hidden argument*/NULL);
		L_12->set_y_1(((float)il2cpp_codegen_multiply((float)L_13, (float)((float)((float)L_14/(float)((float)il2cpp_codegen_multiply((float)(0.5f), (float)(((float)((float)L_16))))))))));
		float L_17 = (&___offset0)->get_x_0();
		float L_18 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract((float)L_17, (float)L_18));
		float L_19 = (&___offset0)->get_x_0();
		float L_20 = V_1;
		V_3 = ((float)il2cpp_codegen_add((float)L_19, (float)L_20));
		float L_21 = (&___offset0)->get_y_1();
		float L_22 = V_0;
		V_4 = ((float)il2cpp_codegen_add((float)L_21, (float)L_22));
		float L_23 = (&___offset0)->get_y_1();
		float L_24 = V_0;
		V_5 = ((float)il2cpp_codegen_subtract((float)L_23, (float)L_24));
		float L_25 = V_2;
		float L_26 = V_3;
		float L_27 = V_5;
		float L_28 = V_4;
		PostProcessingContext_t2014408948 * L_29 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_29);
		Camera_t4157153871 * L_30 = L_29->get_camera_1();
		NullCheck(L_30);
		float L_31 = Camera_get_nearClipPlane_m837839537(L_30, /*hidden argument*/NULL);
		PostProcessingContext_t2014408948 * L_32 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_32);
		Camera_t4157153871 * L_33 = L_32->get_camera_1();
		NullCheck(L_33);
		float L_34 = Camera_get_farClipPlane_m538536689(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t1817901843_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_35 = Matrix4x4_Ortho_m1994183957(NULL /*static, unused*/, L_25, L_26, L_27, L_28, L_31, L_34, /*hidden argument*/NULL);
		return L_35;
	}
}
// System.Void UnityEngine.PostProcessing.TaaComponent::OnDisable()
extern "C"  void TaaComponent_OnDisable_m1137752543 (TaaComponent_t3791749658 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaaComponent_OnDisable_m1137752543_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RenderTexture_t2108887433 * L_0 = __this->get_m_HistoryTexture_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RenderTexture_t2108887433 * L_2 = __this->get_m_HistoryTexture_7();
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		__this->set_m_HistoryTexture_7((RenderTexture_t2108887433 *)NULL);
		__this->set_m_SampleIndex_5(0);
		TaaComponent_ResetHistory_m3846253241(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.PostProcessing.TaaComponent/Uniforms::.cctor()
extern "C"  void Uniforms__cctor_m1642638623 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uniforms__cctor_m1642638623_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral108671656, /*hidden argument*/NULL);
		((Uniforms_t3024963833_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t3024963833_il2cpp_TypeInfo_var))->set__Jitter_0(L_0);
		int32_t L_1 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1815697245, /*hidden argument*/NULL);
		((Uniforms_t3024963833_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t3024963833_il2cpp_TypeInfo_var))->set__SharpenParameters_1(L_1);
		int32_t L_2 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2390542409, /*hidden argument*/NULL);
		((Uniforms_t3024963833_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t3024963833_il2cpp_TypeInfo_var))->set__FinalBlendParameters_2(L_2);
		int32_t L_3 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3181956072, /*hidden argument*/NULL);
		((Uniforms_t3024963833_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t3024963833_il2cpp_TypeInfo_var))->set__HistoryTex_3(L_3);
		int32_t L_4 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3184621405, /*hidden argument*/NULL);
		((Uniforms_t3024963833_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t3024963833_il2cpp_TypeInfo_var))->set__MainTex_4(L_4);
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
// System.Void UnityEngine.PostProcessing.TrackballAttribute::.ctor(System.String)
extern "C"  void TrackballAttribute__ctor_m774296646 (TrackballAttribute_t219960417 * __this, String_t* ___method0, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_m1017741868(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___method0;
		__this->set_method_0(L_0);
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
// System.Void UnityEngine.PostProcessing.TrackballGroupAttribute::.ctor()
extern "C"  void TrackballGroupAttribute__ctor_m2574378639 (TrackballGroupAttribute_t624107828 * __this, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_m1017741868(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.PostProcessing.UserLutComponent::.ctor()
extern "C"  void UserLutComponent__ctor_m3557887131 (UserLutComponent_t2843161776 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserLutComponent__ctor_m3557887131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PostProcessingComponentRenderTexture_1__ctor_m3643001101(__this, /*hidden argument*/PostProcessingComponentRenderTexture_1__ctor_m3643001101_RuntimeMethod_var);
		return;
	}
}
// System.Boolean UnityEngine.PostProcessing.UserLutComponent::get_active()
extern "C"  bool UserLutComponent_get_active_m1788341588 (UserLutComponent_t2843161776 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserLutComponent_get_active_m1788341588_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Settings_t3006579223  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t G_B6_0 = 0;
	{
		UserLutModel_t1670108080 * L_0 = PostProcessingComponent_1_get_model_m2956985483(__this, /*hidden argument*/PostProcessingComponent_1_get_model_m2956985483_RuntimeMethod_var);
		NullCheck(L_0);
		Settings_t3006579223  L_1 = UserLutModel_get_settings_m1799133964(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		UserLutModel_t1670108080 * L_2 = PostProcessingComponent_1_get_model_m2956985483(__this, /*hidden argument*/PostProcessingComponent_1_get_model_m2956985483_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3 = PostProcessingModel_get_enabled_m2892084724(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0073;
		}
	}
	{
		Texture2D_t3840446185 * L_4 = (&V_0)->get_lut_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0073;
		}
	}
	{
		float L_6 = (&V_0)->get_contribution_1();
		if ((!(((float)L_6) > ((float)(0.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		Texture2D_t3840446185 * L_7 = (&V_0)->get_lut_0();
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		Texture2D_t3840446185 * L_9 = (&V_0)->get_lut_0();
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_11 = sqrtf((((float)((float)L_10))));
		if ((!(((uint32_t)L_8) == ((uint32_t)(((int32_t)((int32_t)L_11)))))))
		{
			goto IL_0073;
		}
	}
	{
		PostProcessingContext_t2014408948 * L_12 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_12);
		bool L_13 = PostProcessingContext_get_interrupted_m1809095682(L_12, /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		goto IL_0074;
	}

IL_0073:
	{
		G_B6_0 = 0;
	}

IL_0074:
	{
		return (bool)G_B6_0;
	}
}
// System.Void UnityEngine.PostProcessing.UserLutComponent::Prepare(UnityEngine.Material)
extern "C"  void UserLutComponent_Prepare_m1158977240 (UserLutComponent_t2843161776 * __this, Material_t340375123 * ___uberMaterial0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserLutComponent_Prepare_m1158977240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Settings_t3006579223  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		UserLutModel_t1670108080 * L_0 = PostProcessingComponent_1_get_model_m2956985483(__this, /*hidden argument*/PostProcessingComponent_1_get_model_m2956985483_RuntimeMethod_var);
		NullCheck(L_0);
		Settings_t3006579223  L_1 = UserLutModel_get_settings_m1799133964(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Material_t340375123 * L_2 = ___uberMaterial0;
		NullCheck(L_2);
		Material_EnableKeyword_m329692301(L_2, _stringLiteral3293862872, /*hidden argument*/NULL);
		Material_t340375123 * L_3 = ___uberMaterial0;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t1046717683_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Uniforms_t1046717683_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t1046717683_il2cpp_TypeInfo_var))->get__UserLut_0();
		Texture2D_t3840446185 * L_5 = (&V_0)->get_lut_0();
		NullCheck(L_3);
		Material_SetTexture_m3009528825(L_3, L_4, L_5, /*hidden argument*/NULL);
		Material_t340375123 * L_6 = ___uberMaterial0;
		int32_t L_7 = ((Uniforms_t1046717683_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t1046717683_il2cpp_TypeInfo_var))->get__UserLut_Params_1();
		Texture2D_t3840446185 * L_8 = (&V_0)->get_lut_0();
		NullCheck(L_8);
		int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		Texture2D_t3840446185 * L_10 = (&V_0)->get_lut_0();
		NullCheck(L_10);
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_10);
		Texture2D_t3840446185 * L_12 = (&V_0)->get_lut_0();
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_12);
		float L_14 = (&V_0)->get_contribution_1();
		Vector4_t3319028937  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector4__ctor_m2498754347((&L_15), ((float)((float)(1.0f)/(float)(((float)((float)L_9))))), ((float)((float)(1.0f)/(float)(((float)((float)L_11))))), ((float)il2cpp_codegen_subtract((float)(((float)((float)L_13))), (float)(1.0f))), L_14, /*hidden argument*/NULL);
		NullCheck(L_6);
		Material_SetVector_m2633010038(L_6, L_7, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.PostProcessing.UserLutComponent::OnGUI()
extern "C"  void UserLutComponent_OnGUI_m2614562252 (UserLutComponent_t2843161776 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserLutComponent_OnGUI_m2614562252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Settings_t3006579223  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		UserLutModel_t1670108080 * L_0 = PostProcessingComponent_1_get_model_m2956985483(__this, /*hidden argument*/PostProcessingComponent_1_get_model_m2956985483_RuntimeMethod_var);
		NullCheck(L_0);
		Settings_t3006579223  L_1 = UserLutModel_get_settings_m1799133964(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		PostProcessingContext_t2014408948 * L_2 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_2);
		Rect_t2360479859  L_3 = PostProcessingContext_get_viewport_m2647794360(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		float L_4 = Rect_get_x_m3839990490((&V_2), /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_6 = (&V_0)->get_lut_0();
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_6);
		Texture2D_t3840446185 * L_8 = (&V_0)->get_lut_0();
		NullCheck(L_8);
		int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_8);
		Rect__ctor_m2614021312((&V_1), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_4, (float)(((float)((float)L_5))))), (float)(8.0f))), (8.0f), (((float)((float)L_7))), (((float)((float)L_9))), /*hidden argument*/NULL);
		Rect_t2360479859  L_10 = V_1;
		Texture2D_t3840446185 * L_11 = (&V_0)->get_lut_0();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m3124770796(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
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
// System.Void UnityEngine.PostProcessing.UserLutComponent/Uniforms::.cctor()
extern "C"  void Uniforms__cctor_m521797190 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uniforms__cctor_m521797190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3922522743, /*hidden argument*/NULL);
		((Uniforms_t1046717683_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t1046717683_il2cpp_TypeInfo_var))->set__UserLut_0(L_0);
		int32_t L_1 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2045738677, /*hidden argument*/NULL);
		((Uniforms_t1046717683_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t1046717683_il2cpp_TypeInfo_var))->set__UserLut_Params_1(L_1);
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
// System.Void UnityEngine.PostProcessing.UserLutModel::.ctor()
extern "C"  void UserLutModel__ctor_m1936047466 (UserLutModel_t1670108080 * __this, const RuntimeMethod* method)
{
	{
		Settings_t3006579223  L_0 = Settings_get_defaultSettings_m1988709150(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Settings_1(L_0);
		PostProcessingModel__ctor_m4158388095(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.PostProcessing.UserLutModel/Settings UnityEngine.PostProcessing.UserLutModel::get_settings()
extern "C"  Settings_t3006579223  UserLutModel_get_settings_m1799133964 (UserLutModel_t1670108080 * __this, const RuntimeMethod* method)
{
	{
		Settings_t3006579223  L_0 = __this->get_m_Settings_1();
		return L_0;
	}
}
// System.Void UnityEngine.PostProcessing.UserLutModel::set_settings(UnityEngine.PostProcessing.UserLutModel/Settings)
extern "C"  void UserLutModel_set_settings_m1299940782 (UserLutModel_t1670108080 * __this, Settings_t3006579223  ___value0, const RuntimeMethod* method)
{
	{
		Settings_t3006579223  L_0 = ___value0;
		__this->set_m_Settings_1(L_0);
		return;
	}
}
// System.Void UnityEngine.PostProcessing.UserLutModel::Reset()
extern "C"  void UserLutModel_Reset_m2837745026 (UserLutModel_t1670108080 * __this, const RuntimeMethod* method)
{
	{
		Settings_t3006579223  L_0 = Settings_get_defaultSettings_m1988709150(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Settings_1(L_0);
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
// Conversion methods for marshalling of: UnityEngine.PostProcessing.UserLutModel/Settings
extern "C" void Settings_t3006579223_marshal_pinvoke(const Settings_t3006579223& unmarshaled, Settings_t3006579223_marshaled_pinvoke& marshaled)
{
	Exception_t* ___lut_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'lut' of type 'Settings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___lut_0Exception);
}
extern "C" void Settings_t3006579223_marshal_pinvoke_back(const Settings_t3006579223_marshaled_pinvoke& marshaled, Settings_t3006579223& unmarshaled)
{
	Exception_t* ___lut_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'lut' of type 'Settings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___lut_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.UserLutModel/Settings
extern "C" void Settings_t3006579223_marshal_pinvoke_cleanup(Settings_t3006579223_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.PostProcessing.UserLutModel/Settings
extern "C" void Settings_t3006579223_marshal_com(const Settings_t3006579223& unmarshaled, Settings_t3006579223_marshaled_com& marshaled)
{
	Exception_t* ___lut_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'lut' of type 'Settings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___lut_0Exception);
}
extern "C" void Settings_t3006579223_marshal_com_back(const Settings_t3006579223_marshaled_com& marshaled, Settings_t3006579223& unmarshaled)
{
	Exception_t* ___lut_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'lut' of type 'Settings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___lut_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.UserLutModel/Settings
extern "C" void Settings_t3006579223_marshal_com_cleanup(Settings_t3006579223_marshaled_com& marshaled)
{
}
// UnityEngine.PostProcessing.UserLutModel/Settings UnityEngine.PostProcessing.UserLutModel/Settings::get_defaultSettings()
extern "C"  Settings_t3006579223  Settings_get_defaultSettings_m1988709150 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	Settings_t3006579223  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Settings_t3006579223 ));
		(&V_0)->set_lut_0((Texture2D_t3840446185 *)NULL);
		(&V_0)->set_contribution_1((1.0f));
		Settings_t3006579223  L_0 = V_0;
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
// System.Void UnityEngine.PostProcessing.VignetteComponent::.ctor()
extern "C"  void VignetteComponent__ctor_m3640704423 (VignetteComponent_t3243642943 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VignetteComponent__ctor_m3640704423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PostProcessingComponentRenderTexture_1__ctor_m2651217025(__this, /*hidden argument*/PostProcessingComponentRenderTexture_1__ctor_m2651217025_RuntimeMethod_var);
		return;
	}
}
// System.Boolean UnityEngine.PostProcessing.VignetteComponent::get_active()
extern "C"  bool VignetteComponent_get_active_m4124729355 (VignetteComponent_t3243642943 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VignetteComponent_get_active_m4124729355_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		VignetteModel_t2845517177 * L_0 = PostProcessingComponent_1_get_model_m2875105431(__this, /*hidden argument*/PostProcessingComponent_1_get_model_m2875105431_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1 = PostProcessingModel_get_enabled_m2892084724(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		PostProcessingContext_t2014408948 * L_2 = ((PostProcessingComponentBase_t2731103827 *)__this)->get_context_0();
		NullCheck(L_2);
		bool L_3 = PostProcessingContext_get_interrupted_m1809095682(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		return (bool)G_B3_0;
	}
}
// System.Void UnityEngine.PostProcessing.VignetteComponent::Prepare(UnityEngine.Material)
extern "C"  void VignetteComponent_Prepare_m3452838302 (VignetteComponent_t3243642943 * __this, Material_t340375123 * ___uberMaterial0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VignetteComponent_Prepare_m3452838302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Settings_t1354494600  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	int32_t G_B3_3 = 0;
	Material_t340375123 * G_B3_4 = NULL;
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	float G_B2_2 = 0.0f;
	int32_t G_B2_3 = 0;
	Material_t340375123 * G_B2_4 = NULL;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	float G_B4_2 = 0.0f;
	float G_B4_3 = 0.0f;
	int32_t G_B4_4 = 0;
	Material_t340375123 * G_B4_5 = NULL;
	{
		VignetteModel_t2845517177 * L_0 = PostProcessingComponent_1_get_model_m2875105431(__this, /*hidden argument*/PostProcessingComponent_1_get_model_m2875105431_RuntimeMethod_var);
		NullCheck(L_0);
		Settings_t1354494600  L_1 = VignetteModel_get_settings_m3633002454(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Material_t340375123 * L_2 = ___uberMaterial0;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t2205824134_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Uniforms_t2205824134_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2205824134_il2cpp_TypeInfo_var))->get__Vignette_Color_0();
		Color_t2555686324  L_4 = (&V_0)->get_color_1();
		NullCheck(L_2);
		Material_SetColor_m355160541(L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = (&V_0)->get_mode_0();
		if (L_5)
		{
			goto IL_00b3;
		}
	}
	{
		Material_t340375123 * L_6 = ___uberMaterial0;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t2205824134_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Uniforms_t2205824134_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2205824134_il2cpp_TypeInfo_var))->get__Vignette_Center_1();
		Vector2_t2156229523  L_8 = (&V_0)->get_center_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_9 = Vector4_op_Implicit_m237151757(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		Material_SetVector_m2633010038(L_6, L_7, L_9, /*hidden argument*/NULL);
		Material_t340375123 * L_10 = ___uberMaterial0;
		NullCheck(L_10);
		Material_EnableKeyword_m329692301(L_10, _stringLiteral3727145709, /*hidden argument*/NULL);
		float L_11 = (&V_0)->get_roundness_5();
		float L_12 = (&V_0)->get_roundness_5();
		V_1 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_11)), (float)(6.0f))), (float)L_12));
		Material_t340375123 * L_13 = ___uberMaterial0;
		int32_t L_14 = ((Uniforms_t2205824134_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2205824134_il2cpp_TypeInfo_var))->get__Vignette_Settings_2();
		float L_15 = (&V_0)->get_intensity_3();
		float L_16 = (&V_0)->get_smoothness_4();
		float L_17 = V_1;
		bool L_18 = (&V_0)->get_rounded_8();
		G_B2_0 = L_17;
		G_B2_1 = ((float)il2cpp_codegen_multiply((float)L_16, (float)(5.0f)));
		G_B2_2 = ((float)il2cpp_codegen_multiply((float)L_15, (float)(3.0f)));
		G_B2_3 = L_14;
		G_B2_4 = L_13;
		if (!L_18)
		{
			G_B3_0 = L_17;
			G_B3_1 = ((float)il2cpp_codegen_multiply((float)L_16, (float)(5.0f)));
			G_B3_2 = ((float)il2cpp_codegen_multiply((float)L_15, (float)(3.0f)));
			G_B3_3 = L_14;
			G_B3_4 = L_13;
			goto IL_009f;
		}
	}
	{
		G_B4_0 = (1.0f);
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		G_B4_3 = G_B2_2;
		G_B4_4 = G_B2_3;
		G_B4_5 = G_B2_4;
		goto IL_00a4;
	}

IL_009f:
	{
		G_B4_0 = (0.0f);
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		G_B4_3 = G_B3_2;
		G_B4_4 = G_B3_3;
		G_B4_5 = G_B3_4;
	}

IL_00a4:
	{
		Vector4_t3319028937  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector4__ctor_m2498754347((&L_19), G_B4_3, G_B4_2, G_B4_1, G_B4_0, /*hidden argument*/NULL);
		NullCheck(G_B4_5);
		Material_SetVector_m2633010038(G_B4_5, G_B4_4, L_19, /*hidden argument*/NULL);
		goto IL_0112;
	}

IL_00b3:
	{
		int32_t L_20 = (&V_0)->get_mode_0();
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_0112;
		}
	}
	{
		Texture_t3661962703 * L_21 = (&V_0)->get_mask_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_21, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0112;
		}
	}
	{
		float L_23 = (&V_0)->get_opacity_7();
		if ((!(((float)L_23) > ((float)(0.0f)))))
		{
			goto IL_0112;
		}
	}
	{
		Material_t340375123 * L_24 = ___uberMaterial0;
		NullCheck(L_24);
		Material_EnableKeyword_m329692301(L_24, _stringLiteral3652629709, /*hidden argument*/NULL);
		Material_t340375123 * L_25 = ___uberMaterial0;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t2205824134_il2cpp_TypeInfo_var);
		int32_t L_26 = ((Uniforms_t2205824134_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2205824134_il2cpp_TypeInfo_var))->get__Vignette_Mask_3();
		Texture_t3661962703 * L_27 = (&V_0)->get_mask_6();
		NullCheck(L_25);
		Material_SetTexture_m3009528825(L_25, L_26, L_27, /*hidden argument*/NULL);
		Material_t340375123 * L_28 = ___uberMaterial0;
		int32_t L_29 = ((Uniforms_t2205824134_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2205824134_il2cpp_TypeInfo_var))->get__Vignette_Opacity_4();
		float L_30 = (&V_0)->get_opacity_7();
		NullCheck(L_28);
		Material_SetFloat_m1688718093(L_28, L_29, L_30, /*hidden argument*/NULL);
	}

IL_0112:
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
// System.Void UnityEngine.PostProcessing.VignetteComponent/Uniforms::.cctor()
extern "C"  void Uniforms__cctor_m4093978548 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uniforms__cctor_m4093978548_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1569778134, /*hidden argument*/NULL);
		((Uniforms_t2205824134_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2205824134_il2cpp_TypeInfo_var))->set__Vignette_Color_0(L_0);
		int32_t L_1 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1253245767, /*hidden argument*/NULL);
		((Uniforms_t2205824134_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2205824134_il2cpp_TypeInfo_var))->set__Vignette_Center_1(L_1);
		int32_t L_2 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1478126650, /*hidden argument*/NULL);
		((Uniforms_t2205824134_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2205824134_il2cpp_TypeInfo_var))->set__Vignette_Settings_2(L_2);
		int32_t L_3 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral4174543017, /*hidden argument*/NULL);
		((Uniforms_t2205824134_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2205824134_il2cpp_TypeInfo_var))->set__Vignette_Mask_3(L_3);
		int32_t L_4 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral629754547, /*hidden argument*/NULL);
		((Uniforms_t2205824134_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t2205824134_il2cpp_TypeInfo_var))->set__Vignette_Opacity_4(L_4);
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
// System.Void UnityEngine.PostProcessing.VignetteModel::.ctor()
extern "C"  void VignetteModel__ctor_m512852279 (VignetteModel_t2845517177 * __this, const RuntimeMethod* method)
{
	{
		Settings_t1354494600  L_0 = Settings_get_defaultSettings_m3086602550(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Settings_1(L_0);
		PostProcessingModel__ctor_m4158388095(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.PostProcessing.VignetteModel/Settings UnityEngine.PostProcessing.VignetteModel::get_settings()
extern "C"  Settings_t1354494600  VignetteModel_get_settings_m3633002454 (VignetteModel_t2845517177 * __this, const RuntimeMethod* method)
{
	{
		Settings_t1354494600  L_0 = __this->get_m_Settings_1();
		return L_0;
	}
}
// System.Void UnityEngine.PostProcessing.VignetteModel::set_settings(UnityEngine.PostProcessing.VignetteModel/Settings)
extern "C"  void VignetteModel_set_settings_m1724115687 (VignetteModel_t2845517177 * __this, Settings_t1354494600  ___value0, const RuntimeMethod* method)
{
	{
		Settings_t1354494600  L_0 = ___value0;
		__this->set_m_Settings_1(L_0);
		return;
	}
}
// System.Void UnityEngine.PostProcessing.VignetteModel::Reset()
extern "C"  void VignetteModel_Reset_m1857303294 (VignetteModel_t2845517177 * __this, const RuntimeMethod* method)
{
	{
		Settings_t1354494600  L_0 = Settings_get_defaultSettings_m3086602550(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Settings_1(L_0);
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
// Conversion methods for marshalling of: UnityEngine.PostProcessing.VignetteModel/Settings
extern "C" void Settings_t1354494600_marshal_pinvoke(const Settings_t1354494600& unmarshaled, Settings_t1354494600_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mask_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mask' of type 'Settings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mask_6Exception);
}
extern "C" void Settings_t1354494600_marshal_pinvoke_back(const Settings_t1354494600_marshaled_pinvoke& marshaled, Settings_t1354494600& unmarshaled)
{
	Exception_t* ___mask_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mask' of type 'Settings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mask_6Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.VignetteModel/Settings
extern "C" void Settings_t1354494600_marshal_pinvoke_cleanup(Settings_t1354494600_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.PostProcessing.VignetteModel/Settings
extern "C" void Settings_t1354494600_marshal_com(const Settings_t1354494600& unmarshaled, Settings_t1354494600_marshaled_com& marshaled)
{
	Exception_t* ___mask_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mask' of type 'Settings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mask_6Exception);
}
extern "C" void Settings_t1354494600_marshal_com_back(const Settings_t1354494600_marshaled_com& marshaled, Settings_t1354494600& unmarshaled)
{
	Exception_t* ___mask_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mask' of type 'Settings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mask_6Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.VignetteModel/Settings
extern "C" void Settings_t1354494600_marshal_com_cleanup(Settings_t1354494600_marshaled_com& marshaled)
{
}
// UnityEngine.PostProcessing.VignetteModel/Settings UnityEngine.PostProcessing.VignetteModel/Settings::get_defaultSettings()
extern "C"  Settings_t1354494600  Settings_get_defaultSettings_m3086602550 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	Settings_t1354494600  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Settings_t1354494600 ));
		(&V_0)->set_mode_0(0);
		Color_t2555686324  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Color__ctor_m2943235014((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->set_color_1(L_0);
		Vector2_t2156229523  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector2__ctor_m3970636864((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		(&V_0)->set_center_2(L_1);
		(&V_0)->set_intensity_3((0.45f));
		(&V_0)->set_smoothness_4((0.2f));
		(&V_0)->set_roundness_5((1.0f));
		(&V_0)->set_mask_6((Texture_t3661962703 *)NULL);
		(&V_0)->set_opacity_7((1.0f));
		(&V_0)->set_rounded_8((bool)0);
		Settings_t1354494600  L_2 = V_0;
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
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::.cctor()
extern "C"  void CrossPlatformInputManager__cctor_m3618134741 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager__cctor_m3618134741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StandaloneInput_t1877793759 * L_0 = (StandaloneInput_t1877793759 *)il2cpp_codegen_object_new(StandaloneInput_t1877793759_il2cpp_TypeInfo_var);
		StandaloneInput__ctor_m1552585626(L_0, /*hidden argument*/NULL);
		((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->set_virtualInput_0(L_0);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C"  void CrossPlatformInputManager_RegisterVirtualAxis_m3729018904 (RuntimeObject * __this /* static, unused */, VirtualAxis_t1347148391 * ___axis0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_RegisterVirtualAxis_m3729018904_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		VirtualAxis_t1347148391 * L_1 = ___axis0;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualAxis_m4061627445(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C"  void CrossPlatformInputManager_RegisterVirtualButton_m1038377797 (RuntimeObject * __this /* static, unused */, VirtualButton_t3490362950 * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_RegisterVirtualButton_m1038377797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		VirtualButton_t3490362950 * L_1 = ___button0;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualButton_m539054427(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
extern "C"  void CrossPlatformInputManager_UnRegisterVirtualAxis_m2747492094 (RuntimeObject * __this /* static, unused */, String_t* ____name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_UnRegisterVirtualAxis_m2747492094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ____name0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2730274217, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_2 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_3 = ____name0;
		NullCheck(L_2);
		VirtualInput_UnRegisterVirtualAxis_m2615886023(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
extern "C"  void CrossPlatformInputManager_UnRegisterVirtualButton_m3381002917 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_UnRegisterVirtualButton_m3381002917_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualInput_UnRegisterVirtualButton_m1331827656(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
extern "C"  VirtualAxis_t1347148391 * CrossPlatformInputManager_VirtualAxisReference_m2488295043 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_VirtualAxisReference_m2488295043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualAxis_t1347148391 * L_2 = VirtualInput_VirtualAxisReference_m265738861(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
extern "C"  float CrossPlatformInputManager_GetAxis_m4045467026 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetAxis_m4045467026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		float L_1 = CrossPlatformInputManager_GetAxis_m3244021904(NULL /*static, unused*/, L_0, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxisRaw(System.String)
extern "C"  float CrossPlatformInputManager_GetAxisRaw_m3829676626 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetAxisRaw_m3829676626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		float L_1 = CrossPlatformInputManager_GetAxis_m3244021904(NULL /*static, unused*/, L_0, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
extern "C"  float CrossPlatformInputManager_GetAxis_m3244021904 (RuntimeObject * __this /* static, unused */, String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetAxis_m3244021904_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		bool L_2 = ___raw1;
		NullCheck(L_0);
		float L_3 = VirtFuncInvoker2< float, String_t*, bool >::Invoke(4 /* System.Single UnitySampleAssets.CrossPlatformInput.VirtualInput::GetAxis(System.String,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
extern "C"  bool CrossPlatformInputManager_GetButton_m3105922025 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetButton_m3105922025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean UnitySampleAssets.CrossPlatformInput.VirtualInput::GetButton(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
extern "C"  bool CrossPlatformInputManager_GetButtonDown_m4159945301 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetButtonDown_m4159945301_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean UnitySampleAssets.CrossPlatformInput.VirtualInput::GetButtonDown(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonUp(System.String)
extern "C"  bool CrossPlatformInputManager_GetButtonUp_m2950373926 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetButtonUp_m2950373926_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(7 /* System.Boolean UnitySampleAssets.CrossPlatformInput.VirtualInput::GetButtonUp(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
extern "C"  void CrossPlatformInputManager_SetButtonDown_m1084881269 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetButtonDown_m1084881269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetButtonDown(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
extern "C"  void CrossPlatformInputManager_SetButtonUp_m1215372893 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetButtonUp_m1215372893_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetButtonUp(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
extern "C"  void CrossPlatformInputManager_SetAxisPositive_m758253539 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetAxisPositive_m758253539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetAxisPositive(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
extern "C"  void CrossPlatformInputManager_SetAxisNegative_m4255594822 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetAxisNegative_m4255594822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetAxisNegative(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
extern "C"  void CrossPlatformInputManager_SetAxisZero_m691309370 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetAxisZero_m691309370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetAxisZero(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
extern "C"  void CrossPlatformInputManager_SetAxis_m990722195 (RuntimeObject * __this /* static, unused */, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetAxis_m990722195_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		String_t* L_1 = ___name0;
		float L_2 = ___value1;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, float >::Invoke(13 /* System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetAxis(System.String,System.Single) */, L_0, L_1, L_2);
		return;
	}
}
// UnityEngine.Vector3 UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::get_mousePosition()
extern "C"  Vector3_t3722313464  CrossPlatformInputManager_get_mousePosition_m1763278742 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_get_mousePosition_m1763278742_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = VirtFuncInvoker0< Vector3_t3722313464  >::Invoke(14 /* UnityEngine.Vector3 UnitySampleAssets.CrossPlatformInput.VirtualInput::MousePosition() */, L_0);
		return L_1;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
extern "C"  void CrossPlatformInputManager_SetVirtualMousePositionX_m549431750 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetVirtualMousePositionX_m549431750_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionX_m1317694797(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
extern "C"  void CrossPlatformInputManager_SetVirtualMousePositionY_m1873444571 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetVirtualMousePositionY_m1873444571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionY_m1463317316(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
extern "C"  void CrossPlatformInputManager_SetVirtualMousePositionZ_m1931710842 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetVirtualMousePositionZ_m1931710842_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		VirtualInput_t4247650776 * L_0 = ((CrossPlatformInputManager_t1518791927_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var))->get_virtualInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionZ_m337793731(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
extern "C"  void VirtualAxis__ctor_m117427821 (VirtualAxis_t1347148391 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		VirtualAxis__ctor_m615583067(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
extern "C"  void VirtualAxis__ctor_m615583067 (VirtualAxis_t1347148391 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualAxis__ctor_m615583067_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		VirtualAxis_set_name_m2759368997(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___matchToInputSettings1;
		VirtualAxis_set_matchWithInputManager_m4167991802(__this, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m3729018904(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
extern "C"  String_t* VirtualAxis_get_name_m4062747206 (VirtualAxis_t1347148391 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
extern "C"  void VirtualAxis_set_name_m2759368997 (VirtualAxis_t1347148391 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
extern "C"  bool VirtualAxis_get_matchWithInputManager_m2401220563 (VirtualAxis_t1347148391 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
extern "C"  void VirtualAxis_set_matchWithInputManager_m4167991802 (VirtualAxis_t1347148391 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
extern "C"  void VirtualAxis_Remove_m969104513 (VirtualAxis_t1347148391 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualAxis_Remove_m969104513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = VirtualAxis_get_name_m4062747206(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m2747492094(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
extern "C"  void VirtualAxis_Update_m3060599659 (VirtualAxis_t1347148391 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_Value_1(L_0);
		return;
	}
}
// System.Single UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
extern "C"  float VirtualAxis_get_GetValue_m3308232588 (VirtualAxis_t1347148391 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Value_1();
		return L_0;
	}
}
// System.Single UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValueRaw()
extern "C"  float VirtualAxis_get_GetValueRaw_m3438058670 (VirtualAxis_t1347148391 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Value_1();
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
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
extern "C"  void VirtualButton__ctor_m2590712265 (VirtualButton_t3490362950 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		VirtualButton__ctor_m594979356(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
extern "C"  void VirtualButton__ctor_m594979356 (VirtualButton_t3490362950 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method)
{
	{
		__this->set_lastPressedFrame_1(((int32_t)-5));
		__this->set_releasedFrame_2(((int32_t)-5));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		VirtualButton_set_name_m3816690259(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___matchToInputSettings1;
		VirtualButton_set_matchWithInputManager_m100546256(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
extern "C"  String_t* VirtualButton_get_name_m3713304515 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
extern "C"  void VirtualButton_set_name_m3816690259 (VirtualButton_t3490362950 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
extern "C"  bool VirtualButton_get_matchWithInputManager_m2372617195 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
extern "C"  void VirtualButton_set_matchWithInputManager_m100546256 (VirtualButton_t3490362950 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
extern "C"  void VirtualButton_Pressed_m2534678636 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_pressed_3();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->set_pressed_3((bool)1);
		int32_t L_1 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastPressedFrame_1(L_1);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
extern "C"  void VirtualButton_Released_m3958507687 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method)
{
	{
		__this->set_pressed_3((bool)0);
		int32_t L_0 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_releasedFrame_2(L_0);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Remove()
extern "C"  void VirtualButton_Remove_m189601859 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualButton_Remove_m189601859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = VirtualButton_get_name_m3713304515(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualButton_m3381002917(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
extern "C"  bool VirtualButton_get_GetButton_m4028724520 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_pressed_3();
		return L_0;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
extern "C"  bool VirtualButton_get_GetButtonDown_m3232372385 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_lastPressedFrame_1();
		int32_t L_1 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
extern "C"  bool VirtualButton_get_GetButtonUp_m2683013087 (VirtualButton_t3490362950 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_releasedFrame_2();
		int32_t L_1 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
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
// System.Void UnitySampleAssets.CrossPlatformInput.MobileControlRig::.ctor()
extern "C"  void MobileControlRig__ctor_m3231291042 (MobileControlRig_t2085015456 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.MobileControlRig::OnEnable()
extern "C"  void MobileControlRig_OnEnable_m1901306280 (MobileControlRig_t2085015456 * __this, const RuntimeMethod* method)
{
	{
		MobileControlRig_CheckEnableControlRig_m514886151(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
extern "C"  void MobileControlRig_CheckEnableControlRig_m514886151 (MobileControlRig_t2085015456 * __this, const RuntimeMethod* method)
{
	{
		MobileControlRig_EnableControlRig_m730570031(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
extern "C"  void MobileControlRig_EnableControlRig_m730570031 (MobileControlRig_t2085015456 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileControlRig_EnableControlRig_m730570031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = Transform_GetEnumerator_m2717073726(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_0011:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_3, Transform_t3600365921_il2cpp_TypeInfo_var));
			Transform_t3600365921 * L_4 = V_0;
			NullCheck(L_4);
			GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
			bool L_6 = ___enabled0;
			NullCheck(L_5);
			GameObject_SetActive_m796801857(L_5, L_6, /*hidden argument*/NULL);
		}

IL_0029:
		{
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0011;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_1;
			RuntimeObject* L_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_2 = L_10;
			if (!L_10)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_11);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(57)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
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
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
extern "C"  void MobileInput__ctor_m2132218003 (MobileInput_t3295884756 * __this, const RuntimeMethod* method)
{
	{
		VirtualInput__ctor_m1053376383(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
extern "C"  void MobileInput_AddButton_m1546634226 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_AddButton_m1546634226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		VirtualButton_t3490362950 * L_1 = (VirtualButton_t3490362950 *)il2cpp_codegen_object_new(VirtualButton_t3490362950_il2cpp_TypeInfo_var);
		VirtualButton__ctor_m2590712265(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualButton_m1038377797(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
extern "C"  void MobileInput_AddAxes_m882771614 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_AddAxes_m882771614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		VirtualAxis_t1347148391 * L_1 = (VirtualAxis_t1347148391 *)il2cpp_codegen_object_new(VirtualAxis_t1347148391_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m117427821(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t1518791927_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m3729018904(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetAxis(System.String,System.Boolean)
extern "C"  float MobileInput_GetAxis_m2377156865 (MobileInput_t3295884756 * __this, String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_GetAxis_m2377156865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float G_B3_0 = 0.0f;
	{
		Dictionary_2_t1132404690 * L_0 = ((VirtualInput_t4247650776 *)__this)->get_virtualAxes_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m623971441(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m623971441_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Dictionary_2_t1132404690 * L_3 = ((VirtualInput_t4247650776 *)__this)->get_virtualAxes_0();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualAxis_t1347148391 * L_5 = Dictionary_2_get_Item_m3767727970(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m3767727970_RuntimeMethod_var);
		NullCheck(L_5);
		float L_6 = VirtualAxis_get_GetValue_m3308232588(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
		goto IL_002c;
	}

IL_0027:
	{
		G_B3_0 = (0.0f);
	}

IL_002c:
	{
		return G_B3_0;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonDown(System.String)
extern "C"  void MobileInput_SetButtonDown_m549868324 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetButtonDown_m549868324_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3275619249 * L_0 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3713610116(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3713610116_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddButton_m1546634226(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t3275619249 * L_4 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualButton_t3490362950 * L_6 = Dictionary_2_get_Item_m670004451(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m670004451_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualButton_Pressed_m2534678636(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonUp(System.String)
extern "C"  void MobileInput_SetButtonUp_m2277393409 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetButtonUp_m2277393409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3275619249 * L_0 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualButton_t3490362950 * L_2 = Dictionary_2_get_Item_m670004451(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m670004451_RuntimeMethod_var);
		NullCheck(L_2);
		VirtualButton_Released_m3958507687(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisPositive(System.String)
extern "C"  void MobileInput_SetAxisPositive_m575333630 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetAxisPositive_m575333630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1132404690 * L_0 = ((VirtualInput_t4247650776 *)__this)->get_virtualAxes_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m623971441(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m623971441_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m882771614(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t1132404690 * L_4 = ((VirtualInput_t4247650776 *)__this)->get_virtualAxes_0();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t1347148391 * L_6 = Dictionary_2_get_Item_m3767727970(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m3767727970_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m3060599659(L_6, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisNegative(System.String)
extern "C"  void MobileInput_SetAxisNegative_m3582032963 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetAxisNegative_m3582032963_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1132404690 * L_0 = ((VirtualInput_t4247650776 *)__this)->get_virtualAxes_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m623971441(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m623971441_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m882771614(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t1132404690 * L_4 = ((VirtualInput_t4247650776 *)__this)->get_virtualAxes_0();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t1347148391 * L_6 = Dictionary_2_get_Item_m3767727970(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m3767727970_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m3060599659(L_6, (-1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisZero(System.String)
extern "C"  void MobileInput_SetAxisZero_m2564297357 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetAxisZero_m2564297357_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1132404690 * L_0 = ((VirtualInput_t4247650776 *)__this)->get_virtualAxes_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m623971441(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m623971441_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m882771614(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t1132404690 * L_4 = ((VirtualInput_t4247650776 *)__this)->get_virtualAxes_0();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t1347148391 * L_6 = Dictionary_2_get_Item_m3767727970(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m3767727970_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m3060599659(L_6, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxis(System.String,System.Single)
extern "C"  void MobileInput_SetAxis_m2576160133 (MobileInput_t3295884756 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetAxis_m2576160133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1132404690 * L_0 = ((VirtualInput_t4247650776 *)__this)->get_virtualAxes_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m623971441(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m623971441_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m882771614(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t1132404690 * L_4 = ((VirtualInput_t4247650776 *)__this)->get_virtualAxes_0();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t1347148391 * L_6 = Dictionary_2_get_Item_m3767727970(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m3767727970_RuntimeMethod_var);
		float L_7 = ___value1;
		NullCheck(L_6);
		VirtualAxis_Update_m3060599659(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonDown(System.String)
extern "C"  bool MobileInput_GetButtonDown_m2362171045 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_GetButtonDown_m2362171045_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3275619249 * L_0 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3713610116(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3713610116_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t3275619249 * L_3 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_t3490362950 * L_5 = Dictionary_2_get_Item_m670004451(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m670004451_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButtonDown_m3232372385(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name0;
		MobileInput_AddButton_m1546634226(__this, L_7, /*hidden argument*/NULL);
		Dictionary_2_t3275619249 * L_8 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_t3490362950 * L_10 = Dictionary_2_get_Item_m670004451(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m670004451_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButtonDown_m3232372385(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonUp(System.String)
extern "C"  bool MobileInput_GetButtonUp_m540826956 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_GetButtonUp_m540826956_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3275619249 * L_0 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3713610116(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3713610116_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t3275619249 * L_3 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_t3490362950 * L_5 = Dictionary_2_get_Item_m670004451(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m670004451_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButtonUp_m2683013087(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name0;
		MobileInput_AddButton_m1546634226(__this, L_7, /*hidden argument*/NULL);
		Dictionary_2_t3275619249 * L_8 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_t3490362950 * L_10 = Dictionary_2_get_Item_m670004451(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m670004451_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButtonUp_m2683013087(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButton(System.String)
extern "C"  bool MobileInput_GetButton_m367691380 (MobileInput_t3295884756 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_GetButton_m367691380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3275619249 * L_0 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3713610116(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3713610116_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t3275619249 * L_3 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_t3490362950 * L_5 = Dictionary_2_get_Item_m670004451(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m670004451_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButton_m4028724520(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name0;
		MobileInput_AddButton_m1546634226(__this, L_7, /*hidden argument*/NULL);
		Dictionary_2_t3275619249 * L_8 = ((VirtualInput_t4247650776 *)__this)->get_virtualButtons_1();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_t3490362950 * L_10 = Dictionary_2_get_Item_m670004451(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m670004451_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButton_m4028724520(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Vector3 UnitySampleAssets.CrossPlatformInput.PlatformSpecific.MobileInput::MousePosition()
extern "C"  Vector3_t3722313464  MobileInput_MousePosition_m2392207564 (MobileInput_t3295884756 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = VirtualInput_get_virtualMousePosition_m3832540035(__this, /*hidden argument*/NULL);
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
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
extern "C"  void StandaloneInput__ctor_m1552585626 (StandaloneInput_t1877793759 * __this, const RuntimeMethod* method)
{
	{
		VirtualInput__ctor_m1053376383(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetAxis(System.String,System.Boolean)
extern "C"  float StandaloneInput_GetAxis_m3751418588 (StandaloneInput_t1877793759 * __this, String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_GetAxis_m3751418588_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float G_B3_0 = 0.0f;
	{
		bool L_0 = ___raw1;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_2 = Input_GetAxisRaw_m2316819917(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0011:
	{
		String_t* L_3 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_4 = Input_GetAxis_m4009438427(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButton(System.String)
extern "C"  bool StandaloneInput_GetButton_m391408301 (StandaloneInput_t1877793759 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_GetButton_m391408301_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButton_m2064261504(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonDown(System.String)
extern "C"  bool StandaloneInput_GetButtonDown_m4175847824 (StandaloneInput_t1877793759 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_GetButtonDown_m4175847824_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButtonDown_m3074252807(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonUp(System.String)
extern "C"  bool StandaloneInput_GetButtonUp_m3007880528 (StandaloneInput_t1877793759 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_GetButtonUp_m3007880528_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButtonUp_m4007681079(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonDown(System.String)
extern "C"  void StandaloneInput_SetButtonDown_m1675172227 (StandaloneInput_t1877793759 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetButtonDown_m1675172227_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonUp(System.String)
extern "C"  void StandaloneInput_SetButtonUp_m999497337 (StandaloneInput_t1877793759 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetButtonUp_m999497337_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisPositive(System.String)
extern "C"  void StandaloneInput_SetAxisPositive_m3167045619 (StandaloneInput_t1877793759 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetAxisPositive_m3167045619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisNegative(System.String)
extern "C"  void StandaloneInput_SetAxisNegative_m20802039 (StandaloneInput_t1877793759 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetAxisNegative_m20802039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisZero(System.String)
extern "C"  void StandaloneInput_SetAxisZero_m2388999529 (StandaloneInput_t1877793759 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetAxisZero_m2388999529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxis(System.String,System.Single)
extern "C"  void StandaloneInput_SetAxis_m1137062756 (StandaloneInput_t1877793759 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetAxis_m1137062756_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// UnityEngine.Vector3 UnitySampleAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::MousePosition()
extern "C"  Vector3_t3722313464  StandaloneInput_MousePosition_m3640947727 (StandaloneInput_t1877793759 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_MousePosition_m3640947727_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
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
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::.ctor()
extern "C"  void VirtualInput__ctor_m1053376383 (VirtualInput_t4247650776 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput__ctor_m1053376383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1132404690 * L_0 = (Dictionary_2_t1132404690 *)il2cpp_codegen_object_new(Dictionary_2_t1132404690_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1598708476(L_0, /*hidden argument*/Dictionary_2__ctor_m1598708476_RuntimeMethod_var);
		__this->set_virtualAxes_0(L_0);
		Dictionary_2_t3275619249 * L_1 = (Dictionary_2_t3275619249 *)il2cpp_codegen_object_new(Dictionary_2_t3275619249_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2884814283(L_1, /*hidden argument*/Dictionary_2__ctor_m2884814283_RuntimeMethod_var);
		__this->set_virtualButtons_1(L_1);
		List_1_t3319525431 * L_2 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_2, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_alwaysUseVirtual_2(L_2);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnitySampleAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
extern "C"  Vector3_t3722313464  VirtualInput_get_virtualMousePosition_m3832540035 (VirtualInput_t4247650776 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = __this->get_U3CvirtualMousePositionU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
extern "C"  void VirtualInput_set_virtualMousePosition_m2247952941 (VirtualInput_t4247650776 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = ___value0;
		__this->set_U3CvirtualMousePositionU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C"  void VirtualInput_RegisterVirtualAxis_m4061627445 (VirtualInput_t4247650776 * __this, VirtualAxis_t1347148391 * ___axis0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_RegisterVirtualAxis_m4061627445_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1132404690 * L_0 = __this->get_virtualAxes_0();
		VirtualAxis_t1347148391 * L_1 = ___axis0;
		NullCheck(L_1);
		String_t* L_2 = VirtualAxis_get_name_m4062747206(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = Dictionary_2_ContainsKey_m623971441(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m623971441_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		VirtualAxis_t1347148391 * L_4 = ___axis0;
		NullCheck(L_4);
		String_t* L_5 = VirtualAxis_get_name_m4062747206(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral1316003440, L_5, _stringLiteral499939329, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_0035:
	{
		Dictionary_2_t1132404690 * L_7 = __this->get_virtualAxes_0();
		VirtualAxis_t1347148391 * L_8 = ___axis0;
		NullCheck(L_8);
		String_t* L_9 = VirtualAxis_get_name_m4062747206(L_8, /*hidden argument*/NULL);
		VirtualAxis_t1347148391 * L_10 = ___axis0;
		NullCheck(L_7);
		Dictionary_2_Add_m1208951171(L_7, L_9, L_10, /*hidden argument*/Dictionary_2_Add_m1208951171_RuntimeMethod_var);
		VirtualAxis_t1347148391 * L_11 = ___axis0;
		NullCheck(L_11);
		bool L_12 = VirtualAxis_get_matchWithInputManager_m2401220563(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0063;
		}
	}
	{
		List_1_t3319525431 * L_13 = __this->get_alwaysUseVirtual_2();
		VirtualAxis_t1347148391 * L_14 = ___axis0;
		NullCheck(L_14);
		String_t* L_15 = VirtualAxis_get_name_m4062747206(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m1685793073(L_13, L_15, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
	}

IL_0063:
	{
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C"  void VirtualInput_RegisterVirtualButton_m539054427 (VirtualInput_t4247650776 * __this, VirtualButton_t3490362950 * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_RegisterVirtualButton_m539054427_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3275619249 * L_0 = __this->get_virtualButtons_1();
		VirtualButton_t3490362950 * L_1 = ___button0;
		NullCheck(L_1);
		String_t* L_2 = VirtualButton_get_name_m3713304515(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = Dictionary_2_ContainsKey_m3713610116(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m3713610116_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		VirtualButton_t3490362950 * L_4 = ___button0;
		NullCheck(L_4);
		String_t* L_5 = VirtualButton_get_name_m3713304515(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral341380797, L_5, _stringLiteral499939329, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_0035:
	{
		Dictionary_2_t3275619249 * L_7 = __this->get_virtualButtons_1();
		VirtualButton_t3490362950 * L_8 = ___button0;
		NullCheck(L_8);
		String_t* L_9 = VirtualButton_get_name_m3713304515(L_8, /*hidden argument*/NULL);
		VirtualButton_t3490362950 * L_10 = ___button0;
		NullCheck(L_7);
		Dictionary_2_Add_m943624655(L_7, L_9, L_10, /*hidden argument*/Dictionary_2_Add_m943624655_RuntimeMethod_var);
		VirtualButton_t3490362950 * L_11 = ___button0;
		NullCheck(L_11);
		bool L_12 = VirtualButton_get_matchWithInputManager_m2372617195(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0063;
		}
	}
	{
		List_1_t3319525431 * L_13 = __this->get_alwaysUseVirtual_2();
		VirtualButton_t3490362950 * L_14 = ___button0;
		NullCheck(L_14);
		String_t* L_15 = VirtualButton_get_name_m3713304515(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m1685793073(L_13, L_15, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
	}

IL_0063:
	{
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
extern "C"  void VirtualInput_UnRegisterVirtualAxis_m2615886023 (VirtualInput_t4247650776 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_UnRegisterVirtualAxis_m2615886023_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1132404690 * L_0 = __this->get_virtualAxes_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m623971441(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m623971441_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t1132404690 * L_3 = __this->get_virtualAxes_0();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		Dictionary_2_Remove_m913603837(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m913603837_RuntimeMethod_var);
	}

IL_001e:
	{
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
extern "C"  void VirtualInput_UnRegisterVirtualButton_m1331827656 (VirtualInput_t4247650776 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_UnRegisterVirtualButton_m1331827656_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3275619249 * L_0 = __this->get_virtualButtons_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3713610116(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3713610116_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t3275619249 * L_3 = __this->get_virtualButtons_1();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		Dictionary_2_Remove_m3912794030(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m3912794030_RuntimeMethod_var);
	}

IL_001e:
	{
		return;
	}
}
// UnitySampleAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnitySampleAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
extern "C"  VirtualAxis_t1347148391 * VirtualInput_VirtualAxisReference_m265738861 (VirtualInput_t4247650776 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_VirtualAxisReference_m265738861_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VirtualAxis_t1347148391 * G_B3_0 = NULL;
	{
		Dictionary_2_t1132404690 * L_0 = __this->get_virtualAxes_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m623971441(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m623971441_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Dictionary_2_t1132404690 * L_3 = __this->get_virtualAxes_0();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualAxis_t1347148391 * L_5 = Dictionary_2_get_Item_m3767727970(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m3767727970_RuntimeMethod_var);
		G_B3_0 = L_5;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = ((VirtualAxis_t1347148391 *)(NULL));
	}

IL_0023:
	{
		return G_B3_0;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionX_m1317694797 (VirtualInput_t4247650776 * __this, float ___f0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		float L_0 = ___f0;
		Vector3_t3722313464  L_1 = VirtualInput_get_virtualMousePosition_m3832540035(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_y_2();
		Vector3_t3722313464  L_3 = VirtualInput_get_virtualMousePosition_m3832540035(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = (&V_1)->get_z_3();
		Vector3_t3722313464  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m3353183577((&L_5), L_0, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m2247952941(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionY_m1463317316 (VirtualInput_t4247650776 * __this, float ___f0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector3_t3722313464  L_0 = VirtualInput_get_virtualMousePosition_m3832540035(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = (&V_0)->get_x_1();
		float L_2 = ___f0;
		Vector3_t3722313464  L_3 = VirtualInput_get_virtualMousePosition_m3832540035(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = (&V_1)->get_z_3();
		Vector3_t3722313464  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m3353183577((&L_5), L_1, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m2247952941(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnitySampleAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionZ_m337793731 (VirtualInput_t4247650776 * __this, float ___f0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector3_t3722313464  L_0 = VirtualInput_get_virtualMousePosition_m3832540035(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = (&V_0)->get_x_1();
		Vector3_t3722313464  L_2 = VirtualInput_get_virtualMousePosition_m3832540035(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_y_2();
		float L_4 = ___f0;
		Vector3_t3722313464  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m3353183577((&L_5), L_1, L_3, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m2247952941(__this, L_5, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Utility.FPSCounter::.ctor()
extern "C"  void FPSCounter__ctor_m1791969627 (FPSCounter_t2351221284 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FPSCounter::Start()
extern "C"  void FPSCounter_Start_m2312014145 (FPSCounter_t2351221284 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FPSCounter_Start_m2312014145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = Time_get_realtimeSinceStartup_m3141794964(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_FpsNextPeriod_4(((float)il2cpp_codegen_add((float)L_0, (float)(0.5f))));
		Text_t1901882714 * L_1 = Component_GetComponent_TisText_t1901882714_m4196288697(__this, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		__this->set_m_Text_7(L_1);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FPSCounter::Update()
extern "C"  void FPSCounter_Update_m1910513279 (FPSCounter_t2351221284 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FPSCounter_Update_m1910513279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_m_FpsAccumulator_3();
		__this->set_m_FpsAccumulator_3(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		float L_1 = Time_get_realtimeSinceStartup_m3141794964(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get_m_FpsNextPeriod_4();
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_3 = __this->get_m_FpsAccumulator_3();
		__this->set_m_CurrentFps_5((((int32_t)((int32_t)((float)((float)(((float)((float)L_3)))/(float)(0.5f)))))));
		__this->set_m_FpsAccumulator_3(0);
		float L_4 = __this->get_m_FpsNextPeriod_4();
		__this->set_m_FpsNextPeriod_4(((float)il2cpp_codegen_add((float)L_4, (float)(0.5f))));
		Text_t1901882714 * L_5 = __this->get_m_Text_7();
		int32_t L_6 = __this->get_m_CurrentFps_5();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3326640515, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_9);
	}

IL_006b:
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
// System.Void UserGUI::.ctor()
extern "C"  void UserGUI__ctor_m4242641296 (UserGUI_t1425096078 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserGUI__ctor_m4242641296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_display_3(_stringLiteral3987835886);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserGUI::Start()
extern "C"  void UserGUI_Start_m1572715066 (UserGUI_t1425096078 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserGUI_Start_m1572715066_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WindZone_t1835817526 * V_0 = NULL;
	{
		Text_t1901882714 * L_0 = Component_GetComponent_TisText_t1901882714_m4196288697(__this, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		__this->set_m_Text_7(L_0);
		GameObject_t1113636619 * L_1 = __this->get_m_gameObject_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0046;
		}
	}
	{
		GameObject_t1113636619 * L_3 = __this->get_m_gameObject_2();
		NullCheck(L_3);
		WindZone_t1835817526 * L_4 = GameObject_GetComponent_TisWindZone_t1835817526_m2382653558(L_3, /*hidden argument*/GameObject_GetComponent_TisWindZone_t1835817526_m2382653558_RuntimeMethod_var);
		V_0 = L_4;
		WindZone_t1835817526 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		WindZone_t1835817526 * L_7 = V_0;
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Quaternion_t2301928331  L_9 = Transform_get_rotation_m3502953881(L_8, /*hidden argument*/NULL);
		__this->set_m_rotation_6(L_9);
	}

IL_0046:
	{
		return;
	}
}
// System.Void UserGUI::Update()
extern "C"  void UserGUI_Update_m2313764192 (UserGUI_t1425096078 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserGUI_Update_m2313764192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		bool L_0 = __this->get_m_updateText_5();
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		GameObject_t1113636619 * L_1 = __this->get_m_gameObject_2();
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = GameObject_GetComponent_TisTransform_t3600365921_m3348034436(L_1, /*hidden argument*/GameObject_GetComponent_TisTransform_t3600365921_m3348034436_RuntimeMethod_var);
		V_0 = L_2;
		Transform_t3600365921 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		Transform_t3600365921 * L_5 = V_0;
		NullCheck(L_5);
		Quaternion_t2301928331  L_6 = Transform_get_rotation_m3502953881(L_5, /*hidden argument*/NULL);
		__this->set_m_rotation_6(L_6);
	}

IL_002f:
	{
		Vector3__ctor_m3353183577((&V_1), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_t2301928331  L_7 = __this->get_m_rotation_6();
		Vector3_t3722313464  L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_9 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		Text_t1901882714 * L_10 = __this->get_m_Text_7();
		String_t* L_11 = __this->get_m_display_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3100627678, L_11, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = Vector3_get_normalized_m2454957984((&V_2), /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = L_13;
		RuntimeObject * L_15 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16 = String_Format_m2844511972(NULL /*static, unused*/, L_12, L_15, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_16);
		Text_t1901882714 * L_17 = __this->get_m_Text_7();
		Color_t2555686324  L_18 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_18);
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
// System.Void VirtualJoystick::.ctor()
extern "C"  void VirtualJoystick__ctor_m2927682500 (VirtualJoystick_t1105065689 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VirtualJoystick::set_InputDirection(UnityEngine.Vector3)
extern "C"  void VirtualJoystick_set_InputDirection_m627700735 (VirtualJoystick_t1105065689 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = ___value0;
		__this->set_U3CInputDirectionU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.Vector3 VirtualJoystick::get_InputDirection()
extern "C"  Vector3_t3722313464  VirtualJoystick_get_InputDirection_m2641156746 (VirtualJoystick_t1105065689 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = __this->get_U3CInputDirectionU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void VirtualJoystick::Start()
extern "C"  void VirtualJoystick_Start_m3963006704 (VirtualJoystick_t1105065689 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualJoystick_Start_m3963006704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		__this->set_bgImg_2(L_0);
		ImageU5BU5D_t2439009922* L_1 = Component_GetComponentsInChildren_TisImage_t2670269651_m3171623875(__this, /*hidden argument*/Component_GetComponentsInChildren_TisImage_t2670269651_m3171623875_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = 1;
		Image_t2670269651 * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->set_joystickImg_3(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtualJoystick_set_InputDirection_m627700735(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VirtualJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void VirtualJoystick_OnDrag_m16569480 (VirtualJoystick_t1105065689 * __this, PointerEventData_t3807901092 * ___ped0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualJoystick_OnDrag_m16569480_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector2_t2156229523  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector2_t2156229523  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector2_t2156229523  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector3_t3722313464  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Vector2_t2156229523  V_12;
	memset(&V_12, 0, sizeof(V_12));
	float G_B4_0 = 0.0f;
	float G_B7_0 = 0.0f;
	VirtualJoystick_t1105065689 * G_B9_0 = NULL;
	VirtualJoystick_t1105065689 * G_B8_0 = NULL;
	Vector3_t3722313464  G_B10_0;
	memset(&G_B10_0, 0, sizeof(G_B10_0));
	VirtualJoystick_t1105065689 * G_B10_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_0 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Image_t2670269651 * L_1 = __this->get_bgImg_2();
		NullCheck(L_1);
		RectTransform_t3704657025 * L_2 = Graphic_get_rectTransform_m1167152468(L_1, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_3 = ___ped0;
		NullCheck(L_3);
		Vector2_t2156229523  L_4 = PointerEventData_get_position_m437660275(L_3, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_5 = ___ped0;
		NullCheck(L_5);
		Camera_t4157153871 * L_6 = PointerEventData_get_pressEventCamera_m2613974917(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1743242446_il2cpp_TypeInfo_var);
		bool L_7 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m2327269187(NULL /*static, unused*/, L_2, L_4, L_6, (&V_0), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_01c4;
		}
	}
	{
		float L_8 = (&V_0)->get_x_0();
		Image_t2670269651 * L_9 = __this->get_bgImg_2();
		NullCheck(L_9);
		RectTransform_t3704657025 * L_10 = Graphic_get_rectTransform_m1167152468(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector2_t2156229523  L_11 = RectTransform_get_sizeDelta_m2183112744(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		float L_12 = (&V_1)->get_x_0();
		(&V_0)->set_x_0(((float)((float)L_8/(float)L_12)));
		float L_13 = (&V_0)->get_y_1();
		Image_t2670269651 * L_14 = __this->get_bgImg_2();
		NullCheck(L_14);
		RectTransform_t3704657025 * L_15 = Graphic_get_rectTransform_m1167152468(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector2_t2156229523  L_16 = RectTransform_get_sizeDelta_m2183112744(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		float L_17 = (&V_2)->get_y_1();
		(&V_0)->set_y_1(((float)((float)L_13/(float)L_17)));
		Image_t2670269651 * L_18 = __this->get_bgImg_2();
		NullCheck(L_18);
		RectTransform_t3704657025 * L_19 = Graphic_get_rectTransform_m1167152468(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector2_t2156229523  L_20 = RectTransform_get_pivot_m3425744470(L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		float L_21 = (&V_4)->get_x_0();
		if ((!(((float)L_21) == ((float)(1.0f)))))
		{
			goto IL_00ad;
		}
	}
	{
		float L_22 = (&V_0)->get_x_0();
		G_B4_0 = ((float)il2cpp_codegen_multiply((float)((-L_22)), (float)(2.0f)));
		goto IL_00ba;
	}

IL_00ad:
	{
		float L_23 = (&V_0)->get_x_0();
		G_B4_0 = ((float)il2cpp_codegen_multiply((float)L_23, (float)(2.0f)));
	}

IL_00ba:
	{
		V_3 = G_B4_0;
		Image_t2670269651 * L_24 = __this->get_bgImg_2();
		NullCheck(L_24);
		RectTransform_t3704657025 * L_25 = Graphic_get_rectTransform_m1167152468(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector2_t2156229523  L_26 = RectTransform_get_pivot_m3425744470(L_25, /*hidden argument*/NULL);
		V_6 = L_26;
		float L_27 = (&V_6)->get_y_1();
		if ((!(((float)L_27) == ((float)(1.0f)))))
		{
			goto IL_00f1;
		}
	}
	{
		float L_28 = (&V_0)->get_y_1();
		G_B7_0 = ((float)il2cpp_codegen_multiply((float)((-L_28)), (float)(2.0f)));
		goto IL_00fe;
	}

IL_00f1:
	{
		float L_29 = (&V_0)->get_y_1();
		G_B7_0 = ((float)il2cpp_codegen_multiply((float)L_29, (float)(2.0f)));
	}

IL_00fe:
	{
		V_5 = G_B7_0;
		float L_30 = V_3;
		float L_31 = V_5;
		Vector3_t3722313464  L_32;
		memset(&L_32, 0, sizeof(L_32));
		Vector3__ctor_m3353183577((&L_32), L_30, (0.0f), L_31, /*hidden argument*/NULL);
		VirtualJoystick_set_InputDirection_m627700735(__this, L_32, /*hidden argument*/NULL);
		Vector3_t3722313464  L_33 = VirtualJoystick_get_InputDirection_m2641156746(__this, /*hidden argument*/NULL);
		V_7 = L_33;
		float L_34 = Vector3_get_magnitude_m27958459((&V_7), /*hidden argument*/NULL);
		G_B8_0 = __this;
		if ((!(((float)L_34) > ((float)(1.0f)))))
		{
			G_B9_0 = __this;
			goto IL_0141;
		}
	}
	{
		Vector3_t3722313464  L_35 = VirtualJoystick_get_InputDirection_m2641156746(__this, /*hidden argument*/NULL);
		V_8 = L_35;
		Vector3_t3722313464  L_36 = Vector3_get_normalized_m2454957984((&V_8), /*hidden argument*/NULL);
		G_B10_0 = L_36;
		G_B10_1 = G_B8_0;
		goto IL_0147;
	}

IL_0141:
	{
		Vector3_t3722313464  L_37 = VirtualJoystick_get_InputDirection_m2641156746(__this, /*hidden argument*/NULL);
		G_B10_0 = L_37;
		G_B10_1 = G_B9_0;
	}

IL_0147:
	{
		NullCheck(G_B10_1);
		VirtualJoystick_set_InputDirection_m627700735(G_B10_1, G_B10_0, /*hidden argument*/NULL);
		Image_t2670269651 * L_38 = __this->get_joystickImg_3();
		NullCheck(L_38);
		RectTransform_t3704657025 * L_39 = Graphic_get_rectTransform_m1167152468(L_38, /*hidden argument*/NULL);
		Vector3_t3722313464  L_40 = VirtualJoystick_get_InputDirection_m2641156746(__this, /*hidden argument*/NULL);
		V_9 = L_40;
		float L_41 = (&V_9)->get_x_1();
		Image_t2670269651 * L_42 = __this->get_bgImg_2();
		NullCheck(L_42);
		RectTransform_t3704657025 * L_43 = Graphic_get_rectTransform_m1167152468(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		Vector2_t2156229523  L_44 = RectTransform_get_sizeDelta_m2183112744(L_43, /*hidden argument*/NULL);
		V_10 = L_44;
		float L_45 = (&V_10)->get_x_0();
		Vector3_t3722313464  L_46 = VirtualJoystick_get_InputDirection_m2641156746(__this, /*hidden argument*/NULL);
		V_11 = L_46;
		float L_47 = (&V_11)->get_z_3();
		Image_t2670269651 * L_48 = __this->get_bgImg_2();
		NullCheck(L_48);
		RectTransform_t3704657025 * L_49 = Graphic_get_rectTransform_m1167152468(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		Vector2_t2156229523  L_50 = RectTransform_get_sizeDelta_m2183112744(L_49, /*hidden argument*/NULL);
		V_12 = L_50;
		float L_51 = (&V_12)->get_y_1();
		Vector3_t3722313464  L_52;
		memset(&L_52, 0, sizeof(L_52));
		Vector3__ctor_m1719387948((&L_52), ((float)il2cpp_codegen_multiply((float)L_41, (float)((float)((float)L_45/(float)(3.0f))))), ((float)il2cpp_codegen_multiply((float)L_47, (float)((float)((float)L_51/(float)(3.0f))))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_53 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		NullCheck(L_39);
		RectTransform_set_anchoredPosition_m4126691837(L_39, L_53, /*hidden argument*/NULL);
	}

IL_01c4:
	{
		return;
	}
}
// System.Void VirtualJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void VirtualJoystick_OnPointerDown_m978993567 (VirtualJoystick_t1105065689 * __this, PointerEventData_t3807901092 * ___ped0, const RuntimeMethod* method)
{
	{
		__this->set_IsDown_5((bool)1);
		PointerEventData_t3807901092 * L_0 = ___ped0;
		VirtActionInvoker1< PointerEventData_t3807901092 * >::Invoke(7 /* System.Void VirtualJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData) */, __this, L_0);
		return;
	}
}
// System.Void VirtualJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void VirtualJoystick_OnPointerUp_m886126199 (VirtualJoystick_t1105065689 * __this, PointerEventData_t3807901092 * ___ped0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualJoystick_OnPointerUp_m886126199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_IsDown_5((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtualJoystick_set_InputDirection_m627700735(__this, L_0, /*hidden argument*/NULL);
		Image_t2670269651 * L_1 = __this->get_joystickImg_3();
		NullCheck(L_1);
		RectTransform_t3704657025 * L_2 = Graphic_get_rectTransform_m1167152468(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_4 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_m4126691837(L_2, L_4, /*hidden argument*/NULL);
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
// System.Void VolumeHandler::.ctor()
extern "C"  void VolumeHandler__ctor_m1711914545 (VolumeHandler_t704224452 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VolumeHandler::Start()
extern "C"  void VolumeHandler_Start_m1555305517 (VolumeHandler_t704224452 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VolumeHandler_Start_m1555305517_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1151771902, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1151771902, /*hidden argument*/NULL);
		NullCheck(L_2);
		Slider_t3903728902 * L_3 = GameObject_GetComponent_TisSlider_t3903728902_m865256018(L_2, /*hidden argument*/GameObject_GetComponent_TisSlider_t3903728902_m865256018_RuntimeMethod_var);
		NullCheck(L_3);
		SliderEvent_t3180273144 * L_4 = Slider_get_onValueChanged_m2907593587(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = (intptr_t)VolumeHandler_SetVolume_m1972732037_RuntimeMethod_var;
		UnityAction_1_t1982102915 * L_6 = (UnityAction_1_t1982102915 *)il2cpp_codegen_object_new(UnityAction_1_t1982102915_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m336053009(L_6, __this, L_5, /*hidden argument*/UnityAction_1__ctor_m336053009_RuntimeMethod_var);
		NullCheck(L_4);
		UnityEvent_1_AddListener_m3008008915(L_4, L_6, /*hidden argument*/UnityEvent_1_AddListener_m3008008915_RuntimeMethod_var);
	}

IL_0039:
	{
		return;
	}
}
// System.Void VolumeHandler::SetVolume(System.Single)
extern "C"  void VolumeHandler_SetVolume_m1972732037 (VolumeHandler_t704224452 * __this, float ___volume0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VolumeHandler_SetVolume_m1972732037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t3935305588 * L_0 = Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var);
		float L_1 = ___volume0;
		NullCheck(L_0);
		AudioSource_set_volume_m1273312851(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VolumeHandler::OnDestroy()
extern "C"  void VolumeHandler_OnDestroy_m3857069918 (VolumeHandler_t704224452 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VolumeHandler_OnDestroy_m3857069918_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1151771902, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		GameObject_t1113636619 * L_2 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1151771902, /*hidden argument*/NULL);
		NullCheck(L_2);
		Slider_t3903728902 * L_3 = GameObject_GetComponent_TisSlider_t3903728902_m865256018(L_2, /*hidden argument*/GameObject_GetComponent_TisSlider_t3903728902_m865256018_RuntimeMethod_var);
		NullCheck(L_3);
		SliderEvent_t3180273144 * L_4 = Slider_get_onValueChanged_m2907593587(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = (intptr_t)VolumeHandler_SetVolume_m1972732037_RuntimeMethod_var;
		UnityAction_1_t1982102915 * L_6 = (UnityAction_1_t1982102915 *)il2cpp_codegen_object_new(UnityAction_1_t1982102915_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m336053009(L_6, __this, L_5, /*hidden argument*/UnityAction_1__ctor_m336053009_RuntimeMethod_var);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_m4190968495(L_4, L_6, /*hidden argument*/UnityEvent_1_RemoveListener_m4190968495_RuntimeMethod_var);
	}

IL_0039:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
