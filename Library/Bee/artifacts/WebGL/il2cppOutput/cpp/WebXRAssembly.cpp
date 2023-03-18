#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<WebXR.WebXRHandData>
struct Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B;
// System.Collections.Generic.List`1<Zinnia.Action.BooleanAction>
struct List_1_t12235B29D25E521224D1B3E7E775EBD17D5BFA71;
// System.Collections.Generic.List`1<Zinnia.Action.FloatAction>
struct List_1_t686AACF1B4C121C206A9741317007D2B6DD9F689;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// WebXR.WebXRControllerButton[]
struct WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75;
// Zinnia.Action.BooleanAction
struct BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E;
// Zinnia.Action.FloatAction
struct FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WebFloatX
struct WebFloatX_tDCB98EEFD72F10D649640DED01DDB1C397E44522;
// WebFloatY
struct WebFloatY_t0046D8A7A1B286C4795C6D585ABC5450078F4B8A;
// WebGrip
struct WebGrip_t61282B48B0AD00621D4C54ABF1DA7B0AA5C2EDFD;
// WebThumb
struct WebThumb_tB300CBB6D74BADB945F506A81D71497F2F7D3B02;
// WebXR.WebXRController
struct WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00;
// Zinnia.Action.Action/BooleanUnityEvent
struct BooleanUnityEvent_t88DFD031AB6B49F4F56CEE582BEBD380DBA655E8;
// Zinnia.Action.BooleanAction/UnityEvent
struct UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776;
// Zinnia.Action.FloatAction/UnityEvent
struct UnityEvent_t6490727483865FDE17B834CA7CE45D8B1F8E8452;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t737496B5BCD41AB19FDACF7F94E41FEED3310453 
{
};
struct Il2CppArrayBounds;

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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Zinnia.Action.Action
struct Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Zinnia.Action.Action/BooleanUnityEvent Zinnia.Action.Action::ActivationStateChanged
	BooleanUnityEvent_t88DFD031AB6B49F4F56CEE582BEBD380DBA655E8* ___ActivationStateChanged_4;
	// System.Boolean Zinnia.Action.Action::isActivated
	bool ___isActivated_5;
};

// WebXR.WebXRController
struct WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<System.Boolean> WebXR.WebXRController::OnControllerActive
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnControllerActive_4;
	// System.Action`1<System.Boolean> WebXR.WebXRController::OnHandActive
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnHandActive_5;
	// System.Action`1<WebXR.WebXRHandData> WebXR.WebXRController::OnHandUpdate
	Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B* ___OnHandUpdate_6;
	// System.Action`1<System.Boolean> WebXR.WebXRController::OnAlwaysUseGripChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnAlwaysUseGripChanged_7;
	// WebXR.WebXRControllerHand WebXR.WebXRController::hand
	int32_t ___hand_8;
	// System.Single WebXR.WebXRController::trigger
	float ___trigger_9;
	// System.Boolean WebXR.WebXRController::triggerTouched
	bool ___triggerTouched_10;
	// System.Single WebXR.WebXRController::squeeze
	float ___squeeze_11;
	// System.Boolean WebXR.WebXRController::squeezeTouched
	bool ___squeezeTouched_12;
	// System.Single WebXR.WebXRController::thumbstick
	float ___thumbstick_13;
	// System.Boolean WebXR.WebXRController::thumbstickTouched
	bool ___thumbstickTouched_14;
	// System.Single WebXR.WebXRController::thumbstickX
	float ___thumbstickX_15;
	// System.Single WebXR.WebXRController::thumbstickY
	float ___thumbstickY_16;
	// System.Single WebXR.WebXRController::touchpad
	float ___touchpad_17;
	// System.Boolean WebXR.WebXRController::touchpadTouched
	bool ___touchpadTouched_18;
	// System.Single WebXR.WebXRController::touchpadX
	float ___touchpadX_19;
	// System.Single WebXR.WebXRController::touchpadY
	float ___touchpadY_20;
	// System.Single WebXR.WebXRController::buttonA
	float ___buttonA_21;
	// System.Boolean WebXR.WebXRController::buttonATouched
	bool ___buttonATouched_22;
	// System.Single WebXR.WebXRController::buttonB
	float ___buttonB_23;
	// System.Boolean WebXR.WebXRController::buttonBTouched
	bool ___buttonBTouched_24;
	// WebXR.WebXRControllerButton[] WebXR.WebXRController::buttons
	WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* ___buttons_25;
	// System.Boolean WebXR.WebXRController::controllerActive
	bool ___controllerActive_26;
	// System.Boolean WebXR.WebXRController::handActive
	bool ___handActive_27;
	// System.String[] WebXR.WebXRController::profiles
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___profiles_28;
	// System.Int32 WebXR.WebXRController::oculusLinkBugTest
	int32_t ___oculusLinkBugTest_29;
	// UnityEngine.Quaternion WebXR.WebXRController::oculusOffsetRay
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___oculusOffsetRay_30;
	// UnityEngine.Quaternion WebXR.WebXRController::oculusOffsetGrip
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___oculusOffsetGrip_31;
	// System.Boolean WebXR.WebXRController::alwaysUseGrip
	bool ___alwaysUseGrip_32;
	// UnityEngine.Vector3 WebXR.WebXRController::<gripPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CgripPositionU3Ek__BackingField_33;
	// UnityEngine.Quaternion WebXR.WebXRController::<gripRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CgripRotationU3Ek__BackingField_34;
};

// Zinnia.Action.Action`3<Zinnia.Action.BooleanAction,System.Boolean,Zinnia.Action.BooleanAction/UnityEvent>
struct Action_3_tAB0B844DB62E1DB5EABF32957B0CBE95441E7344  : public Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70
{
	// TValue Zinnia.Action.Action`3::initialValue
	bool ___initialValue_6;
	// TValue Zinnia.Action.Action`3::defaultValue
	bool ___defaultValue_7;
	// System.Collections.Generic.List`1<TSelf> Zinnia.Action.Action`3::sources
	List_1_t12235B29D25E521224D1B3E7E775EBD17D5BFA71* ___sources_8;
	// TEvent Zinnia.Action.Action`3::Activated
	UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776* ___Activated_9;
	// TEvent Zinnia.Action.Action`3::ValueChanged
	UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776* ___ValueChanged_10;
	// TEvent Zinnia.Action.Action`3::ValueUnchanged
	UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776* ___ValueUnchanged_11;
	// TEvent Zinnia.Action.Action`3::Deactivated
	UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776* ___Deactivated_12;
	// TValue Zinnia.Action.Action`3::value
	bool ___value_13;
};

// Zinnia.Action.Action`3<Zinnia.Action.FloatAction,System.Single,Zinnia.Action.FloatAction/UnityEvent>
struct Action_3_tF46623224A87298328D210CF1DC16D68CAD7C623  : public Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70
{
	// TValue Zinnia.Action.Action`3::initialValue
	float ___initialValue_6;
	// TValue Zinnia.Action.Action`3::defaultValue
	float ___defaultValue_7;
	// System.Collections.Generic.List`1<TSelf> Zinnia.Action.Action`3::sources
	List_1_t686AACF1B4C121C206A9741317007D2B6DD9F689* ___sources_8;
	// TEvent Zinnia.Action.Action`3::Activated
	UnityEvent_t6490727483865FDE17B834CA7CE45D8B1F8E8452* ___Activated_9;
	// TEvent Zinnia.Action.Action`3::ValueChanged
	UnityEvent_t6490727483865FDE17B834CA7CE45D8B1F8E8452* ___ValueChanged_10;
	// TEvent Zinnia.Action.Action`3::ValueUnchanged
	UnityEvent_t6490727483865FDE17B834CA7CE45D8B1F8E8452* ___ValueUnchanged_11;
	// TEvent Zinnia.Action.Action`3::Deactivated
	UnityEvent_t6490727483865FDE17B834CA7CE45D8B1F8E8452* ___Deactivated_12;
	// TValue Zinnia.Action.Action`3::value
	float ___value_13;
};

// Zinnia.Action.BooleanAction
struct BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E  : public Action_3_tAB0B844DB62E1DB5EABF32957B0CBE95441E7344
{
};

// Zinnia.Action.FloatAction
struct FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62  : public Action_3_tF46623224A87298328D210CF1DC16D68CAD7C623
{
	// System.Single Zinnia.Action.FloatAction::equalityTolerance
	float ___equalityTolerance_14;
};

// WebFloatX
struct WebFloatX_tDCB98EEFD72F10D649640DED01DDB1C397E44522  : public FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62
{
	// WebXR.WebXRController WebFloatX::controller
	WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* ___controller_15;
	// System.Single WebFloatX::xAxis
	float ___xAxis_16;
};

// WebFloatY
struct WebFloatY_t0046D8A7A1B286C4795C6D585ABC5450078F4B8A  : public FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62
{
	// WebXR.WebXRController WebFloatY::controller
	WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* ___controller_15;
	// System.Single WebFloatY::yAxis
	float ___yAxis_16;
};

// WebGrip
struct WebGrip_t61282B48B0AD00621D4C54ABF1DA7B0AA5C2EDFD  : public BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E
{
	// WebXR.WebXRController WebGrip::controller
	WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* ___controller_14;
};

// WebThumb
struct WebThumb_tB300CBB6D74BADB945F506A81D71497F2F7D3B02  : public BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E
{
	// WebXR.WebXRController WebThumb::controller
	WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* ___controller_14;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// UnityEngine.Vector2 WebXR.WebXRController::GetAxis2D(WebXR.WebXRController/Axis2DTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 WebXRController_GetAxis2D_m46156F5A6BE9647DAAB69C2A4FB94ECA98651A1F (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, int32_t ___axisType0, const RuntimeMethod* method) ;
// System.Void Zinnia.Action.FloatAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatAction__ctor_mDADCBFC1C19CC6ED999EF3DDDD138E9BE89D238F (FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* __this, const RuntimeMethod* method) ;
// System.Boolean WebXR.WebXRController::GetButton(WebXR.WebXRController/ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetButton_m19BA8616C36DCCDF42DF9193599757361A82DA51 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, int32_t ___buttonType0, const RuntimeMethod* method) ;
// System.Void Zinnia.Action.BooleanAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanAction__ctor_m73843E146B1DA54AA269FB660C6278B9CE850D74 (BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* __this, const RuntimeMethod* method) ;
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
// System.Void WebFloatX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFloatX_Update_m75AEA88297A5711CF3F343DD711CBAE55195A0EC (WebFloatX_tDCB98EEFD72F10D649640DED01DDB1C397E44522* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var Vector2 = controller.GetAxis2D(WebXRController.Axis2DTypes.Thumbstick);
		WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* L_0 = __this->___controller_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = WebXRController_GetAxis2D_m46156F5A6BE9647DAAB69C2A4FB94ECA98651A1F(L_0, 0, NULL);
		V_0 = L_1;
		// xAxis = Vector2.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		float L_3 = L_2.___x_0;
		__this->___xAxis_16 = L_3;
		// Receive(xAxis);
		float L_4 = __this->___xAxis_16;
		VirtualActionInvoker1< float >::Invoke(15 /* System.Void Zinnia.Action.Action`3<Zinnia.Action.FloatAction,System.Single,Zinnia.Action.FloatAction/UnityEvent>::Receive(TValue) */, __this, L_4);
		// }
		return;
	}
}
// System.Void WebFloatX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFloatX__ctor_mC222CFCEAB86C67EDB83FC30BBA8FEBB3A72E539 (WebFloatX_tDCB98EEFD72F10D649640DED01DDB1C397E44522* __this, const RuntimeMethod* method) 
{
	{
		FloatAction__ctor_mDADCBFC1C19CC6ED999EF3DDDD138E9BE89D238F(__this, NULL);
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
// System.Void WebFloatY::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFloatY_Update_m5F85F7742A09F5FF4DA0F6F9FF7A80E91C09B65A (WebFloatY_t0046D8A7A1B286C4795C6D585ABC5450078F4B8A* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var Vector2 = controller.GetAxis2D(WebXRController.Axis2DTypes.Thumbstick);
		WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* L_0 = __this->___controller_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = WebXRController_GetAxis2D_m46156F5A6BE9647DAAB69C2A4FB94ECA98651A1F(L_0, 0, NULL);
		V_0 = L_1;
		// yAxis = Vector2.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		float L_3 = L_2.___y_1;
		__this->___yAxis_16 = L_3;
		// Receive(yAxis);
		float L_4 = __this->___yAxis_16;
		VirtualActionInvoker1< float >::Invoke(15 /* System.Void Zinnia.Action.Action`3<Zinnia.Action.FloatAction,System.Single,Zinnia.Action.FloatAction/UnityEvent>::Receive(TValue) */, __this, L_4);
		// }
		return;
	}
}
// System.Void WebFloatY::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFloatY__ctor_mD027097A3AA031323D7331B8A74D12F3276AA31B (WebFloatY_t0046D8A7A1B286C4795C6D585ABC5450078F4B8A* __this, const RuntimeMethod* method) 
{
	{
		FloatAction__ctor_mDADCBFC1C19CC6ED999EF3DDDD138E9BE89D238F(__this, NULL);
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
// System.Void WebGrip::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGrip_Update_m69C600A9007E91A6D5486E600FCB54964E1A2D5C (WebGrip_t61282B48B0AD00621D4C54ABF1DA7B0AA5C2EDFD* __this, const RuntimeMethod* method) 
{
	{
		// Receive(controller.GetButton(WebXRController.ButtonTypes.Grip));
		WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* L_0 = __this->___controller_14;
		bool L_1;
		L_1 = WebXRController_GetButton_m19BA8616C36DCCDF42DF9193599757361A82DA51(L_0, 1, NULL);
		VirtualActionInvoker1< bool >::Invoke(15 /* System.Void Zinnia.Action.Action`3<Zinnia.Action.BooleanAction,System.Boolean,Zinnia.Action.BooleanAction/UnityEvent>::Receive(TValue) */, __this, L_1);
		// }
		return;
	}
}
// System.Void WebGrip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGrip__ctor_m606BFA0130EEFE17D0C11CAF8B82AD4F662A8F35 (WebGrip_t61282B48B0AD00621D4C54ABF1DA7B0AA5C2EDFD* __this, const RuntimeMethod* method) 
{
	{
		BooleanAction__ctor_m73843E146B1DA54AA269FB660C6278B9CE850D74(__this, NULL);
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
// System.Void WebThumb::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebThumb_Update_mBE1CEB64208C6BBCEC9D3B7FCCCE04D533799230 (WebThumb_tB300CBB6D74BADB945F506A81D71497F2F7D3B02* __this, const RuntimeMethod* method) 
{
	{
		// Receive(controller.GetButton(WebXRController.ButtonTypes.Thumbstick));
		WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* L_0 = __this->___controller_14;
		bool L_1;
		L_1 = WebXRController_GetButton_m19BA8616C36DCCDF42DF9193599757361A82DA51(L_0, 2, NULL);
		VirtualActionInvoker1< bool >::Invoke(15 /* System.Void Zinnia.Action.Action`3<Zinnia.Action.BooleanAction,System.Boolean,Zinnia.Action.BooleanAction/UnityEvent>::Receive(TValue) */, __this, L_1);
		// }
		return;
	}
}
// System.Void WebThumb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebThumb__ctor_mC2C1951DEA3A621AA222B423E9325071E80BFAB6 (WebThumb_tB300CBB6D74BADB945F506A81D71497F2F7D3B02* __this, const RuntimeMethod* method) 
{
	{
		BooleanAction__ctor_m73843E146B1DA54AA269FB660C6278B9CE850D74(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
