#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// Zinnia.Action.Action`3<Zinnia.Action.FloatAction,System.Single,Zinnia.Action.FloatAction/UnityEvent>
struct Action_3_tF46623224A87298328D210CF1DC16D68CAD7C623;
// Zinnia.Action.Action`3<System.Object,System.Single,System.Object>
struct Action_3_t495F18D14335CEFDB39761D66DC1E2C5DC12DCC6;
// Zinnia.Action.Action`3<System.Object,UnityEngine.Vector3,System.Object>
struct Action_3_tD0DA37C02B0C8E8C0FE94375CF866A047C39F610;
// Zinnia.Action.Action`3<Zinnia.Action.Vector3Action,UnityEngine.Vector3,Zinnia.Action.Vector3Action/UnityEvent>
struct Action_3_t116F75C83309AC9F0B9A60AC5851A016EAB9527F;
// System.Collections.Generic.List`1<Zinnia.Action.BooleanAction>
struct List_1_t12235B29D25E521224D1B3E7E775EBD17D5BFA71;
// System.Collections.Generic.List`1<Zinnia.Action.FloatAction>
struct List_1_t686AACF1B4C121C206A9741317007D2B6DD9F689;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<Zinnia.Action.Vector3Action>
struct List_1_tADFA814DD552E6AE09C5722E9BC1BBFFE3E9BFF7;
// Zinnia.Data.Operation.Extraction.ValueExtractor`4<System.Nullable`1<System.Single>,System.Int32Enum,System.Object,System.Single>
struct ValueExtractor_4_tD384434595EECF2BBD3542CF14FFA64009308117;
// Zinnia.Data.Operation.Extraction.ValueExtractor`4<System.Nullable`1<System.Single>,Zinnia.Data.Operation.Extraction.TimeComponentExtractor/TimeComponent,Zinnia.Data.Operation.Extraction.TimeComponentExtractor/UnityEvent,System.Single>
struct ValueExtractor_4_t0461FBA15921D1D86B01E1F9F530271A1C7E0777;
// Zinnia.Data.Operation.Extraction.ValueExtractor`4<System.Nullable`1<UnityEngine.Vector3>,UnityEngine.GameObject,Zinnia.Data.Operation.Extraction.TransformVector3PropertyExtractor/UnityEvent,UnityEngine.Vector3>
struct ValueExtractor_4_tF129366C65D19E23AF9DCD702747F1FC4FE1F27B;
// Zinnia.Data.Operation.Extraction.ValueExtractor`4<System.Nullable`1<UnityEngine.Vector3>,System.Object,System.Object,UnityEngine.Vector3>
struct ValueExtractor_4_t2C3EB7BC9BF872E93A179C6ACB575403EC8DAD78;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean[]
struct FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator
struct AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D;
// Tilia.Input.CombinedActions.AngleRangeToBooleanFacade
struct AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB;
// Tilia.Input.CombinedActions.AxesToAngleAction
struct AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C;
// Tilia.Input.CombinedActions.AxesToAngleActionConfigurator
struct AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84;
// Tilia.Input.CombinedActions.AxesToVector3Action
struct AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57;
// Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator
struct AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Zinnia.Action.BooleanAction
struct BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E;
// Tilia.Input.CombinedActions.BooleanTo1DAxisAction
struct BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0;
// Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator
struct BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Zinnia.Utility.CountdownTimer
struct CountdownTimer_t148B906173867D94D4423E58F690EF5723153623;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Tilia.Input.CombinedActions.DoubleClickActionConfigurator
struct DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C;
// Tilia.Input.CombinedActions.DoubleClickActionFacade
struct DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0;
// Zinnia.Action.FloatAction
struct FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62;
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean
struct FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.String
struct String_t;
// Zinnia.Data.Operation.Extraction.TimeComponentExtractor
struct TimeComponentExtractor_t430415B148F995BEBE599003E9504E27E82B4874;
// Zinnia.Data.Operation.Extraction.TransformDirectionExtractor
struct TransformDirectionExtractor_t3AA9CE6D1CB334660C8215EA5177ED26BD2A40DF;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// Zinnia.Data.Type.Transformation.Conversion.Vector2ToAngle
struct Vector2ToAngle_t6A541CEF5664FF054E348618F764576A36605D58;
// Zinnia.Action.Vector3Action
struct Vector3Action_t68D3F63A530B4BB4DBBB764AF77BB9287676C1DA;
// Zinnia.Data.Collection.List.Vector3ObservableList
struct Vector3ObservableList_t36F67A591E2C1F3138097AB27B9A9977B0DE9067;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Zinnia.Action.Action/BooleanUnityEvent
struct BooleanUnityEvent_t88DFD031AB6B49F4F56CEE582BEBD380DBA655E8;
// Zinnia.Action.BooleanAction/UnityEvent
struct UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776;
// Zinnia.Utility.CountdownTimer/FloatUnityEvent
struct FloatUnityEvent_t6DEF968E0F6B1BB910BBAB5A758D526506F9CA84;
// Tilia.Input.CombinedActions.DoubleClickActionConfigurator/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A;
// Zinnia.Action.FloatAction/UnityEvent
struct UnityEvent_t6490727483865FDE17B834CA7CE45D8B1F8E8452;
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean/UnityEvent
struct UnityEvent_t1DA3487CF06A663C9BDF97238CFB68DA0ECD334A;
// Zinnia.Data.Operation.Extraction.TimeComponentExtractor/UnityEvent
struct UnityEvent_tFFF8F231A4C88EAD15B3ABEABA34C0CB9D8C8BB7;
// Zinnia.Data.Operation.Extraction.TransformVector3PropertyExtractor/UnityEvent
struct UnityEvent_tBABA81B308E0638A8A4FA02523CD4CD7E630CE28;
// Zinnia.Data.Type.Transformation.Conversion.Vector2ToAngle/UnityEvent
struct UnityEvent_tE8CF5371F00B3BAF3BAEBC5C9A907BD4AEAD694D;
// Zinnia.Action.Vector3Action/UnityEvent
struct UnityEvent_t789D3BF6FB3B6D39B900516E149007B4B86D9D09;
// Zinnia.Data.Collection.List.Vector3ObservableList/UnityEvent
struct UnityEvent_tA86D5BC4A5F9B9B42106B9A3AA61AC1B97D716D8;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_OnEnable_m18429DF3342C68B091CF1520A5964A17C3DCF82C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_OnEnable_m9BF2F0CA105ED1C1823A8CE159D17795F94D7C82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumExtensions_GetByIndex_TisAngleUnit_t66B569868FC43FE6649184BB539F663D3527FDA5_mB01B2BA7217AB4EA99FA80C18AB9B0230E3EC403_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumExtensions_GetByIndex_TisTimeComponent_tCAD9DA47599BCE5914D683378F4848E1B9AB8721_mE2BF396BE08E2BAC129F47952D3D29D38F78EFA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CConfigureSourceClickActionU3Eb__0_mCDC6E3A2F96C58E8F21705AFAC6B335741C1D7C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CConfigureSourceClickActionU3Eb__1_m9BC384AEF6AC0FB7C8E7D45C42744F4982DA4CE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CConfigureSourceClickActionU3Eb__2_mBB9E1CFAA458E3063588B98433BD665B5E4D571A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CConfigureSourceClickActionU3Eb__3_m96177C47884084CE498978C74504E0ED822CC6EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CConfigureSourceClickActionU3Eb__4_mBC818AF47C049CDBA8BEA6F7C976542275E864D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueExtractor_4_set_Source_m3910C9654E352031B208803EE63C04BE7C9FEB6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueExtractor_4_set_Source_mF2F9B7BFDE25E7E883B9F556BDB1C470115C8A4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* DeadzoneType_t257B4F7C59AD1442C1C87D5BBB5BD221A9321E79_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InputHandler_t60907A5A6041DE36CABD99173FB08B488A1F4E9E_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t07CBCC27840691B083B95EBCE1DFE5B7043ACF3E 
{
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// Tilia.Input.CombinedActions.DoubleClickActionConfigurator/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A  : public RuntimeObject
{
	// Tilia.Input.CombinedActions.DoubleClickActionConfigurator Tilia.Input.CombinedActions.DoubleClickActionConfigurator/<>c__DisplayClass24_0::<>4__this
	DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* ___U3CU3E4__this_0;
	// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.DoubleClickActionConfigurator/<>c__DisplayClass24_0::source
	BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___source_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
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

// Zinnia.Data.Type.FloatRange
struct FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 
{
	// System.Single Zinnia.Data.Type.FloatRange::minimum
	float ___minimum_0;
	// System.Single Zinnia.Data.Type.FloatRange::maximum
	float ___maximum_1;
};

struct FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109_StaticFields
{
	// Zinnia.Data.Type.FloatRange Zinnia.Data.Type.FloatRange::MinMax
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___MinMax_2;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
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

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

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

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
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

// Zinnia.Data.Type.Transformation.Transformer`3<System.Single,System.Boolean,Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean/UnityEvent>
struct Transformer_3_tC9CF9418663586D1D98353204343CEE651B5231D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TOutput Zinnia.Data.Type.Transformation.Transformer`3::<Result>k__BackingField
	bool ___U3CResultU3Ek__BackingField_4;
	// TEvent Zinnia.Data.Type.Transformation.Transformer`3::Transformed
	UnityEvent_t1DA3487CF06A663C9BDF97238CFB68DA0ECD334A* ___Transformed_5;
};

// Zinnia.Data.Type.Transformation.Transformer`3<UnityEngine.Vector2,System.Single,Zinnia.Data.Type.Transformation.Conversion.Vector2ToAngle/UnityEvent>
struct Transformer_3_t079D6151A6D265B085FDCA38098BB0F05E793C80  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TOutput Zinnia.Data.Type.Transformation.Transformer`3::<Result>k__BackingField
	float ___U3CResultU3Ek__BackingField_4;
	// TEvent Zinnia.Data.Type.Transformation.Transformer`3::Transformed
	UnityEvent_tE8CF5371F00B3BAF3BAEBC5C9A907BD4AEAD694D* ___Transformed_5;
};

// Zinnia.Data.Operation.Extraction.ValueExtractor`4<System.Nullable`1<System.Single>,System.Int32Enum,System.Object,System.Single>
struct ValueExtractor_4_tD384434595EECF2BBD3542CF14FFA64009308117  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TEvent Zinnia.Data.Operation.Extraction.ValueExtractor`4::Extracted
	RuntimeObject* ___Extracted_4;
	// UnityEngine.Events.UnityEvent Zinnia.Data.Operation.Extraction.ValueExtractor`4::Failed
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Failed_5;
	// TSourceElement Zinnia.Data.Operation.Extraction.ValueExtractor`4::source
	int32_t ___source_6;
	// TResultElement Zinnia.Data.Operation.Extraction.ValueExtractor`4::<Result>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CResultU3Ek__BackingField_7;
};

// Zinnia.Data.Operation.Extraction.ValueExtractor`4<System.Nullable`1<System.Single>,Zinnia.Data.Operation.Extraction.TimeComponentExtractor/TimeComponent,Zinnia.Data.Operation.Extraction.TimeComponentExtractor/UnityEvent,System.Single>
struct ValueExtractor_4_t0461FBA15921D1D86B01E1F9F530271A1C7E0777  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TEvent Zinnia.Data.Operation.Extraction.ValueExtractor`4::Extracted
	UnityEvent_tFFF8F231A4C88EAD15B3ABEABA34C0CB9D8C8BB7* ___Extracted_4;
	// UnityEngine.Events.UnityEvent Zinnia.Data.Operation.Extraction.ValueExtractor`4::Failed
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Failed_5;
	// TSourceElement Zinnia.Data.Operation.Extraction.ValueExtractor`4::source
	int32_t ___source_6;
	// TResultElement Zinnia.Data.Operation.Extraction.ValueExtractor`4::<Result>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CResultU3Ek__BackingField_7;
};

// Zinnia.Data.Operation.Extraction.ValueExtractor`4<System.Nullable`1<UnityEngine.Vector3>,UnityEngine.GameObject,Zinnia.Data.Operation.Extraction.TransformVector3PropertyExtractor/UnityEvent,UnityEngine.Vector3>
struct ValueExtractor_4_tF129366C65D19E23AF9DCD702747F1FC4FE1F27B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TEvent Zinnia.Data.Operation.Extraction.ValueExtractor`4::Extracted
	UnityEvent_tBABA81B308E0638A8A4FA02523CD4CD7E630CE28* ___Extracted_4;
	// UnityEngine.Events.UnityEvent Zinnia.Data.Operation.Extraction.ValueExtractor`4::Failed
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Failed_5;
	// TSourceElement Zinnia.Data.Operation.Extraction.ValueExtractor`4::source
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___source_6;
	// TResultElement Zinnia.Data.Operation.Extraction.ValueExtractor`4::<Result>k__BackingField
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CResultU3Ek__BackingField_7;
};

// Zinnia.Data.Operation.Extraction.ValueExtractor`4<System.Nullable`1<UnityEngine.Vector3>,System.Object,System.Object,UnityEngine.Vector3>
struct ValueExtractor_4_t2C3EB7BC9BF872E93A179C6ACB575403EC8DAD78  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TEvent Zinnia.Data.Operation.Extraction.ValueExtractor`4::Extracted
	RuntimeObject* ___Extracted_4;
	// UnityEngine.Events.UnityEvent Zinnia.Data.Operation.Extraction.ValueExtractor`4::Failed
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Failed_5;
	// TSourceElement Zinnia.Data.Operation.Extraction.ValueExtractor`4::source
	RuntimeObject* ___source_6;
	// TResultElement Zinnia.Data.Operation.Extraction.ValueExtractor`4::<Result>k__BackingField
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CResultU3Ek__BackingField_7;
};

// Zinnia.Action.Action
struct Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Zinnia.Action.Action/BooleanUnityEvent Zinnia.Action.Action::ActivationStateChanged
	BooleanUnityEvent_t88DFD031AB6B49F4F56CEE582BEBD380DBA655E8* ___ActivationStateChanged_4;
	// System.Boolean Zinnia.Action.Action::isActivated
	bool ___isActivated_5;
};

// Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator
struct AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Tilia.Input.CombinedActions.AngleRangeToBooleanFacade Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::facade
	AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* ___facade_4;
	// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::angleChecker
	FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___angleChecker_5;
	// Tilia.Input.CombinedActions.AxesToAngleAction Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::angleInput
	AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* ___angleInput_6;
};

// Tilia.Input.CombinedActions.AngleRangeToBooleanFacade
struct AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::angleRange
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___angleRange_4;
	// Zinnia.Data.Type.Transformation.Conversion.Vector2ToAngle/AngleUnit Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::unitType
	int32_t ___unitType_5;
	// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::horizontalAxis
	FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___horizontalAxis_6;
	// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::verticalAxis
	FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___verticalAxis_7;
	// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::horizontalDeadzone
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___horizontalDeadzone_8;
	// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::verticalDeadzone
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___verticalDeadzone_9;
	// Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::configuration
	AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* ___configuration_10;
};

// Tilia.Input.CombinedActions.AxesToAngleActionConfigurator
struct AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::horizontalAxis
	FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___horizontalAxis_4;
	// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::verticalAxis
	FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___verticalAxis_5;
	// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::horizontalDeadZone
	FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___horizontalDeadZone_6;
	// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::verticalDeadZone
	FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___verticalDeadZone_7;
	// Zinnia.Data.Operation.Extraction.TransformDirectionExtractor Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::directionExtractor
	TransformDirectionExtractor_t3AA9CE6D1CB334660C8215EA5177ED26BD2A40DF* ___directionExtractor_8;
	// Zinnia.Data.Type.Transformation.Conversion.Vector2ToAngle Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::angleConverter
	Vector2ToAngle_t6A541CEF5664FF054E348618F764576A36605D58* ___angleConverter_9;
};

// Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator
struct AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::lateralAction
	FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___lateralAction_4;
	// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::verticalAction
	FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___verticalAction_5;
	// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::longitudinalAction
	FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___longitudinalAction_6;
	// System.Boolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::autoConfigureBounds
	bool ___autoConfigureBounds_7;
	// System.Single Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::boundOverlap
	float ___boundOverlap_8;
	// Zinnia.Data.Collection.List.Vector3ObservableList Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::multiplier
	Vector3ObservableList_t36F67A591E2C1F3138097AB27B9A9977B0DE9067* ___multiplier_9;
	// UnityEngine.GameObject Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::incrementalContainer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___incrementalContainer_10;
	// UnityEngine.GameObject Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::directionalContainer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___directionalContainer_11;
	// UnityEngine.GameObject Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::singleAxisDeadzoneContainer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___singleAxisDeadzoneContainer_12;
	// UnityEngine.GameObject Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::combinedAxisDeadzoneContainer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___combinedAxisDeadzoneContainer_13;
	// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean[] Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::lateralDeadZone
	FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* ___lateralDeadZone_14;
	// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::lateralPositiveBounds
	FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___lateralPositiveBounds_15;
	// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::lateralNegativeBounds
	FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___lateralNegativeBounds_16;
	// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::lateralBoundsManager
	FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___lateralBoundsManager_17;
	// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean[] Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::verticalDeadZone
	FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* ___verticalDeadZone_18;
	// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::verticalPositiveBounds
	FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___verticalPositiveBounds_19;
	// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::verticalNegativeBounds
	FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___verticalNegativeBounds_20;
	// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::verticalBoundsManager
	FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___verticalBoundsManager_21;
	// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean[] Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::longitudinalDeadZone
	FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* ___longitudinalDeadZone_22;
	// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::longitudinalPositiveBounds
	FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___longitudinalPositiveBounds_23;
	// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::longitudinalNegativeBounds
	FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___longitudinalNegativeBounds_24;
	// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::longitudinalBoundsManager
	FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___longitudinalBoundsManager_25;
	// Zinnia.Data.Operation.Extraction.TimeComponentExtractor Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::timeExtractor
	TimeComponentExtractor_t430415B148F995BEBE599003E9504E27E82B4874* ___timeExtractor_26;
};

// Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator
struct BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator::negativeInput
	BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___negativeInput_4;
	// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator::positiveInput
	BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___positiveInput_5;
};

// Zinnia.Utility.CountdownTimer
struct CountdownTimer_t148B906173867D94D4423E58F690EF5723153623  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Zinnia.Utility.CountdownTimer::startTime
	float ___startTime_4;
	// System.Boolean Zinnia.Utility.CountdownTimer::beginOnEnable
	bool ___beginOnEnable_5;
	// UnityEngine.Events.UnityEvent Zinnia.Utility.CountdownTimer::Started
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Started_6;
	// UnityEngine.Events.UnityEvent Zinnia.Utility.CountdownTimer::Cancelled
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Cancelled_7;
	// UnityEngine.Events.UnityEvent Zinnia.Utility.CountdownTimer::Paused
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Paused_8;
	// UnityEngine.Events.UnityEvent Zinnia.Utility.CountdownTimer::Resumed
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Resumed_9;
	// UnityEngine.Events.UnityEvent Zinnia.Utility.CountdownTimer::Completed
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Completed_10;
	// UnityEngine.Events.UnityEvent Zinnia.Utility.CountdownTimer::StillRunning
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___StillRunning_11;
	// UnityEngine.Events.UnityEvent Zinnia.Utility.CountdownTimer::NotRunning
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___NotRunning_12;
	// Zinnia.Utility.CountdownTimer/FloatUnityEvent Zinnia.Utility.CountdownTimer::ElapsedTimeEmitted
	FloatUnityEvent_t6DEF968E0F6B1BB910BBAB5A758D526506F9CA84* ___ElapsedTimeEmitted_13;
	// Zinnia.Utility.CountdownTimer/FloatUnityEvent Zinnia.Utility.CountdownTimer::RemainingTimeEmitted
	FloatUnityEvent_t6DEF968E0F6B1BB910BBAB5A758D526506F9CA84* ___RemainingTimeEmitted_14;
	// System.Boolean Zinnia.Utility.CountdownTimer::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_15;
	// System.Boolean Zinnia.Utility.CountdownTimer::<IsPaused>k__BackingField
	bool ___U3CIsPausedU3Ek__BackingField_16;
	// System.Single Zinnia.Utility.CountdownTimer::beginTime
	float ___beginTime_17;
	// System.Single Zinnia.Utility.CountdownTimer::currentTime
	float ___currentTime_18;
	// System.Single Zinnia.Utility.CountdownTimer::remainingAtPauseTime
	float ___remainingAtPauseTime_19;
};

// Tilia.Input.CombinedActions.DoubleClickActionConfigurator
struct DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Tilia.Input.CombinedActions.DoubleClickActionFacade Tilia.Input.CombinedActions.DoubleClickActionConfigurator::facade
	DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* ___facade_4;
	// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.DoubleClickActionConfigurator::firstClickAction
	BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___firstClickAction_5;
	// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.DoubleClickActionConfigurator::secondClickAction
	BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___secondClickAction_6;
	// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.DoubleClickActionConfigurator::doubleClickAction
	BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___doubleClickAction_7;
	// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.DoubleClickActionConfigurator::outputAction
	BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___outputAction_8;
	// Zinnia.Utility.CountdownTimer Tilia.Input.CombinedActions.DoubleClickActionConfigurator::clickTimer
	CountdownTimer_t148B906173867D94D4423E58F690EF5723153623* ___clickTimer_9;
};

// Tilia.Input.CombinedActions.DoubleClickActionFacade
struct DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.DoubleClickActionFacade::controlAction
	BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___controlAction_4;
	// System.Single Tilia.Input.CombinedActions.DoubleClickActionFacade::clickDuration
	float ___clickDuration_5;
	// Tilia.Input.CombinedActions.DoubleClickActionConfigurator Tilia.Input.CombinedActions.DoubleClickActionFacade::configuration
	DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* ___configuration_6;
};

// Zinnia.Data.Collection.List.ObservableList
struct ObservableList_t7D8CDC3A1F1D6A6438AA207B1C99EC5E984DAFC2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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

// Zinnia.Action.Action`3<Zinnia.Action.Vector3Action,UnityEngine.Vector3,Zinnia.Action.Vector3Action/UnityEvent>
struct Action_3_t116F75C83309AC9F0B9A60AC5851A016EAB9527F  : public Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70
{
	// TValue Zinnia.Action.Action`3::initialValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialValue_6;
	// TValue Zinnia.Action.Action`3::defaultValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultValue_7;
	// System.Collections.Generic.List`1<TSelf> Zinnia.Action.Action`3::sources
	List_1_tADFA814DD552E6AE09C5722E9BC1BBFFE3E9BFF7* ___sources_8;
	// TEvent Zinnia.Action.Action`3::Activated
	UnityEvent_t789D3BF6FB3B6D39B900516E149007B4B86D9D09* ___Activated_9;
	// TEvent Zinnia.Action.Action`3::ValueChanged
	UnityEvent_t789D3BF6FB3B6D39B900516E149007B4B86D9D09* ___ValueChanged_10;
	// TEvent Zinnia.Action.Action`3::ValueUnchanged
	UnityEvent_t789D3BF6FB3B6D39B900516E149007B4B86D9D09* ___ValueUnchanged_11;
	// TEvent Zinnia.Action.Action`3::Deactivated
	UnityEvent_t789D3BF6FB3B6D39B900516E149007B4B86D9D09* ___Deactivated_12;
	// TValue Zinnia.Action.Action`3::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_13;
};

// Zinnia.Data.Operation.Extraction.FloatExtractor`2<Zinnia.Data.Operation.Extraction.TimeComponentExtractor/TimeComponent,Zinnia.Data.Operation.Extraction.TimeComponentExtractor/UnityEvent>
struct FloatExtractor_2_t9C12891ACBC2EBD40CBFBD260D2183FB0CDCC5A3  : public ValueExtractor_4_t0461FBA15921D1D86B01E1F9F530271A1C7E0777
{
};

// Zinnia.Data.Collection.List.ObservableList`2<UnityEngine.Vector3,Zinnia.Data.Collection.List.Vector3ObservableList/UnityEvent>
struct ObservableList_2_tA1BE08D46491834E6095E8A190617C1806D1D868  : public ObservableList_t7D8CDC3A1F1D6A6438AA207B1C99EC5E984DAFC2
{
	// TEvent Zinnia.Data.Collection.List.ObservableList`2::Obtained
	UnityEvent_tA86D5BC4A5F9B9B42106B9A3AA61AC1B97D716D8* ___Obtained_4;
	// TEvent Zinnia.Data.Collection.List.ObservableList`2::Found
	UnityEvent_tA86D5BC4A5F9B9B42106B9A3AA61AC1B97D716D8* ___Found_5;
	// TEvent Zinnia.Data.Collection.List.ObservableList`2::NotFound
	UnityEvent_tA86D5BC4A5F9B9B42106B9A3AA61AC1B97D716D8* ___NotFound_6;
	// UnityEngine.Events.UnityEvent Zinnia.Data.Collection.List.ObservableList`2::IsEmpty
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___IsEmpty_7;
	// UnityEngine.Events.UnityEvent Zinnia.Data.Collection.List.ObservableList`2::IsPopulated
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___IsPopulated_8;
	// TEvent Zinnia.Data.Collection.List.ObservableList`2::Populated
	UnityEvent_tA86D5BC4A5F9B9B42106B9A3AA61AC1B97D716D8* ___Populated_9;
	// TEvent Zinnia.Data.Collection.List.ObservableList`2::Added
	UnityEvent_tA86D5BC4A5F9B9B42106B9A3AA61AC1B97D716D8* ___Added_10;
	// TEvent Zinnia.Data.Collection.List.ObservableList`2::Removed
	UnityEvent_tA86D5BC4A5F9B9B42106B9A3AA61AC1B97D716D8* ___Removed_11;
	// TEvent Zinnia.Data.Collection.List.ObservableList`2::Emptied
	UnityEvent_tA86D5BC4A5F9B9B42106B9A3AA61AC1B97D716D8* ___Emptied_12;
	// System.Int32 Zinnia.Data.Collection.List.ObservableList`2::currentIndex
	int32_t ___currentIndex_13;
	// System.Boolean Zinnia.Data.Collection.List.ObservableList`2::wasStartCalled
	bool ___wasStartCalled_14;
};

// Zinnia.Data.Operation.Extraction.Vector3Extractor`2<UnityEngine.GameObject,Zinnia.Data.Operation.Extraction.TransformVector3PropertyExtractor/UnityEvent>
struct Vector3Extractor_2_t47E4CE30D5A948D98C1504DA9539971D1AFEA2A3  : public ValueExtractor_4_tF129366C65D19E23AF9DCD702747F1FC4FE1F27B
{
};

// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean
struct FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E  : public Transformer_3_tC9CF9418663586D1D98353204343CEE651B5231D
{
	// Zinnia.Data.Type.FloatRange Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean::positiveBounds
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___positiveBounds_6;
};

// Zinnia.Data.Type.Transformation.Conversion.Vector2ToAngle
struct Vector2ToAngle_t6A541CEF5664FF054E348618F764576A36605D58  : public Transformer_3_t079D6151A6D265B085FDCA38098BB0F05E793C80
{
	// Zinnia.Data.Type.Transformation.Conversion.Vector2ToAngle/AngleUnit Zinnia.Data.Type.Transformation.Conversion.Vector2ToAngle::unit
	int32_t ___unit_6;
	// UnityEngine.Vector2 Zinnia.Data.Type.Transformation.Conversion.Vector2ToAngle::origin
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin_7;
};

// Zinnia.Data.Collection.List.DefaultObservableList`2<UnityEngine.Vector3,Zinnia.Data.Collection.List.Vector3ObservableList/UnityEvent>
struct DefaultObservableList_2_tD7A5F107003DD0E91C9D9959E7513520FE93CB4D  : public ObservableList_2_tA1BE08D46491834E6095E8A190617C1806D1D868
{
	// System.Collections.Generic.List`1<TElement> Zinnia.Data.Collection.List.DefaultObservableList`2::elements
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___elements_15;
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

// Zinnia.Data.Operation.Extraction.TimeComponentExtractor
struct TimeComponentExtractor_t430415B148F995BEBE599003E9504E27E82B4874  : public FloatExtractor_2_t9C12891ACBC2EBD40CBFBD260D2183FB0CDCC5A3
{
};

// Zinnia.Data.Operation.Extraction.TransformVector3PropertyExtractor
struct TransformVector3PropertyExtractor_t1A5C2DB7E39717DD472A42893F3B1CAA07646650  : public Vector3Extractor_2_t47E4CE30D5A948D98C1504DA9539971D1AFEA2A3
{
	// System.Boolean Zinnia.Data.Operation.Extraction.TransformVector3PropertyExtractor::useLocal
	bool ___useLocal_8;
};

// Zinnia.Action.Vector3Action
struct Vector3Action_t68D3F63A530B4BB4DBBB764AF77BB9287676C1DA  : public Action_3_t116F75C83309AC9F0B9A60AC5851A016EAB9527F
{
	// System.Single Zinnia.Action.Vector3Action::equalityTolerance
	float ___equalityTolerance_14;
};

// Tilia.Input.CombinedActions.AxesToAngleAction
struct AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C  : public FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62
{
	// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToAngleAction::horizontalAxis
	FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___horizontalAxis_15;
	// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToAngleAction::verticalAxis
	FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___verticalAxis_16;
	// UnityEngine.GameObject Tilia.Input.CombinedActions.AxesToAngleAction::directionOffset
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___directionOffset_17;
	// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AxesToAngleAction::horizontalDeadzone
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___horizontalDeadzone_18;
	// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AxesToAngleAction::verticalDeadzone
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___verticalDeadzone_19;
	// Tilia.Input.CombinedActions.AxesToAngleActionConfigurator Tilia.Input.CombinedActions.AxesToAngleAction::configuration
	AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* ___configuration_20;
};

// Tilia.Input.CombinedActions.AxesToVector3Action
struct AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57  : public Vector3Action_t68D3F63A530B4BB4DBBB764AF77BB9287676C1DA
{
	// Tilia.Input.CombinedActions.AxesToVector3Action/InputHandler Tilia.Input.CombinedActions.AxesToVector3Action::inputType
	int32_t ___inputType_15;
	// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToVector3Action::lateralAxis
	FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___lateralAxis_16;
	// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToVector3Action::verticalAxis
	FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___verticalAxis_17;
	// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToVector3Action::longitudinalAxis
	FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___longitudinalAxis_18;
	// UnityEngine.Vector3 Tilia.Input.CombinedActions.AxesToVector3Action::multiplier
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___multiplier_19;
	// Zinnia.Data.Operation.Extraction.TimeComponentExtractor/TimeComponent Tilia.Input.CombinedActions.AxesToVector3Action::timeMultiplier
	int32_t ___timeMultiplier_20;
	// Tilia.Input.CombinedActions.AxesToVector3Action/DeadzoneType Tilia.Input.CombinedActions.AxesToVector3Action::deadzoneCalculation
	int32_t ___deadzoneCalculation_21;
	// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AxesToVector3Action::lateralDeadzone
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___lateralDeadzone_22;
	// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AxesToVector3Action::verticalDeadzone
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___verticalDeadzone_23;
	// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AxesToVector3Action::longitudinalDeadzone
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___longitudinalDeadzone_24;
	// Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator Tilia.Input.CombinedActions.AxesToVector3Action::configuration
	AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* ___configuration_25;
};

// Tilia.Input.CombinedActions.BooleanTo1DAxisAction
struct BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0  : public FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62
{
	// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.BooleanTo1DAxisAction::negativeInput
	BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___negativeInput_15;
	// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.BooleanTo1DAxisAction::positiveInput
	BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___positiveInput_16;
	// Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator Tilia.Input.CombinedActions.BooleanTo1DAxisAction::configuration
	BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* ___configuration_17;
};

// Zinnia.Data.Operation.Extraction.TransformDirectionExtractor
struct TransformDirectionExtractor_t3AA9CE6D1CB334660C8215EA5177ED26BD2A40DF  : public TransformVector3PropertyExtractor_t1A5C2DB7E39717DD472A42893F3B1CAA07646650
{
	// Zinnia.Data.Operation.Extraction.TransformDirectionExtractor/AxisDirection Zinnia.Data.Operation.Extraction.TransformDirectionExtractor::direction
	int32_t ___direction_9;
};

// Zinnia.Data.Collection.List.Vector3ObservableList
struct Vector3ObservableList_t36F67A591E2C1F3138097AB27B9A9977B0DE9067  : public DefaultObservableList_2_tD7A5F107003DD0E91C9D9959E7513520FE93CB4D
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean[]
struct FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172  : public RuntimeArray
{
	ALIGN_FIELD (8) FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* m_Items[1];

	inline FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T Zinnia.Extension.EnumExtensions::GetByIndex<System.Int32Enum>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumExtensions_GetByIndex_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mEE9CB314C50C3F95F216CBD75410DE4A2836605C_gshared (int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Zinnia.Action.Action`3<System.Object,System.Single,System.Object>::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_OnEnable_m288CB39AD0F951D7CE126E68DA94EB0C5D0848E7_gshared (Action_3_t495F18D14335CEFDB39761D66DC1E2C5DC12DCC6* __this, const RuntimeMethod* method) ;
// System.Void Zinnia.Data.Operation.Extraction.ValueExtractor`4<System.Nullable`1<UnityEngine.Vector3>,System.Object,System.Object,UnityEngine.Vector3>::set_Source(TSourceElement)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExtractor_4_set_Source_mD1D011BDB76A3A57C8F25CB59BFD6E6C8D6DAAD0_gshared_inline (ValueExtractor_4_t2C3EB7BC9BF872E93A179C6ACB575403EC8DAD78* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Zinnia.Action.Action`3<System.Object,UnityEngine.Vector3,System.Object>::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_OnEnable_m2E589F170B19D2F7AA51DA8B3A85614296BA1946_gshared (Action_3_tD0DA37C02B0C8E8C0FE94375CF866A047C39F610* __this, const RuntimeMethod* method) ;
// System.Void Zinnia.Data.Operation.Extraction.ValueExtractor`4<System.Nullable`1<System.Single>,System.Int32Enum,System.Object,System.Single>::set_Source(TSourceElement)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExtractor_4_set_Source_m4866E2D85F1864750608D2256C275F732C23C4A8_gshared_inline (ValueExtractor_4_tD384434595EECF2BBD3542CF14FFA64009308117* __this, int32_t ___value0, const RuntimeMethod* method) ;

// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::get_AngleChecker()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AngleRangeToBooleanConfigurator_get_AngleChecker_mA5E3F1D6F46DF1C29EB825B015F9C97199D46E50_inline (AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* __this, const RuntimeMethod* method) ;
// Tilia.Input.CombinedActions.AngleRangeToBooleanFacade Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::get_Facade()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* AngleRangeToBooleanConfigurator_get_Facade_m71E9F0F69B0632FE5F6BF6DB71CADF3A4BC2E25D_inline (AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::get_AngleRange()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AngleRangeToBooleanFacade_get_AngleRange_mDE2EF763E9069F83893E24B179B7E7D9949D6BD4_inline (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Zinnia.Data.Type.FloatRange::ToVector2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FloatRange_ToVector2_mA6331BC9B152FE4A253BB255BFA81D9CB2EFB3BC (FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109* __this, const RuntimeMethod* method) ;
// Tilia.Input.CombinedActions.AxesToAngleAction Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::get_AngleInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* AngleRangeToBooleanConfigurator_get_AngleInput_mCC40DD8EEAC5DFFDBC39ECB180FCDF8B2868C63A_inline (AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* __this, const RuntimeMethod* method) ;
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::get_HorizontalAxis()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AngleRangeToBooleanFacade_get_HorizontalAxis_m39708D138DE80C94B5DFE68CAC500F74249DF4F8_inline (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::set_HorizontalAxis(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_set_HorizontalAxis_m8B3FBEC2B98A5CFD788DB344A8B2373440BBB45C (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___value0, const RuntimeMethod* method) ;
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::get_VerticalAxis()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AngleRangeToBooleanFacade_get_VerticalAxis_mDC583EEF982C0855ABA669376BD7357AEB993472_inline (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::set_VerticalAxis(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_set_VerticalAxis_mD781AF88A0DB60D017716A79DA92976CCD8EA287 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___value0, const RuntimeMethod* method) ;
// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::get_HorizontalDeadzone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AngleRangeToBooleanFacade_get_HorizontalDeadzone_mFB21FE5A3A0F755F1B1AEB75454FBC7AC16604E7_inline (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::set_HorizontalDeadzone(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_set_HorizontalDeadzone_m7A7EC9CCC72C997D9DCB8C27FE4C705C55439BDD (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___value0, const RuntimeMethod* method) ;
// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::get_VerticalDeadzone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AngleRangeToBooleanFacade_get_VerticalDeadzone_mDDBDA4F4FE814E5E55542B874C987FFD79FCF267_inline (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::set_VerticalDeadzone(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_set_VerticalDeadzone_m77F4ABFCBDCED9EEF6D5D2BEDC779EBDF24FB233 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___value0, const RuntimeMethod* method) ;
// Tilia.Input.CombinedActions.AxesToAngleActionConfigurator Tilia.Input.CombinedActions.AxesToAngleAction::get_Configuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* AxesToAngleAction_get_Configuration_mDD434767738F877906A2E8FAFE2B74F80D02CDAF_inline (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Type.Transformation.Conversion.Vector2ToAngle Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::get_AngleConverter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2ToAngle_t6A541CEF5664FF054E348618F764576A36605D58* AxesToAngleActionConfigurator_get_AngleConverter_m4DCB21255D3B825D1C069A7CAC84A38533018349_inline (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Type.Transformation.Conversion.Vector2ToAngle/AngleUnit Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::get_UnitType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AngleRangeToBooleanFacade_get_UnitType_m1DFAC86468352E42296B7BA7F3DED0C58FA518FE_inline (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) ;
// System.Void Zinnia.Data.Type.Transformation.Conversion.Vector2ToAngle::set_Unit(Zinnia.Data.Type.Transformation.Conversion.Vector2ToAngle/AngleUnit)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2ToAngle_set_Unit_m9452374E57DF8A6B7F2C4A18D6980F69EFD6CE80_inline (Vector2ToAngle_t6A541CEF5664FF054E348618F764576A36605D58* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean Zinnia.Extension.BehaviourExtensions::IsMemberChangeAllowed(UnityEngine.Behaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* ___behaviour0, const RuntimeMethod* method) ;
// System.Boolean Zinnia.Extension.BehaviourExtensions::IsValidState(UnityEngine.Behaviour,Zinnia.Extension.BehaviourExtensions/GameObjectActivity,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* ___behaviour0, int32_t ___gameObjectActivity1, bool ___behaviourNeedsToBeEnabled2, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::set_HorizontalAxis(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_set_HorizontalAxis_m273301EE32923AF3CFA951F5C83FDE04EEA9052D (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___value0, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::set_VerticalAxis(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_set_VerticalAxis_m724FD7550F66F2363D0A9163BF538B6204BF61E3 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___value0, const RuntimeMethod* method) ;
// System.Void Zinnia.Data.Type.FloatRange::.ctor(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatRange__ctor_m9D7B3370CA720B47C8217AEC17FAC0A2F10F9EC8 (FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___range0, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::set_AngleRange(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_set_AngleRange_mAB6438DAAFAA5DD789CB2BA3319CF1FEE82F5208 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___value0, const RuntimeMethod* method) ;
// T Zinnia.Extension.EnumExtensions::GetByIndex<Zinnia.Data.Type.Transformation.Conversion.Vector2ToAngle/AngleUnit>(System.Int32)
inline int32_t EnumExtensions_GetByIndex_TisAngleUnit_t66B569868FC43FE6649184BB539F663D3527FDA5_mB01B2BA7217AB4EA99FA80C18AB9B0230E3EC403 (int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, const RuntimeMethod*))EnumExtensions_GetByIndex_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mEE9CB314C50C3F95F216CBD75410DE4A2836605C_gshared)(___index0, method);
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::set_UnitType(Zinnia.Data.Type.Transformation.Conversion.Vector2ToAngle/AngleUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_set_UnitType_mF47F9DDE6A825E3DBAD7BBE5910FE59EC2F6B568 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::set_HorizontalDeadzone(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_set_HorizontalDeadzone_m2FA0FDD6294AEFB71E8EBB9348EC2B026043E51E (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___value0, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::set_VerticalDeadzone(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_set_VerticalDeadzone_m657A97786DD873914D31C9560BC63A94A292BF3E (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___value0, const RuntimeMethod* method) ;
// Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::get_Configuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* AngleRangeToBooleanFacade_get_Configuration_mAD86389FE5E1178FE07ABD81104AB3739D321F13_inline (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) ;
// System.Void Zinnia.Data.Type.FloatRange::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatRange__ctor_m5BE869766743FCAC8EAC2F7058C95D7B3C36CAAB (FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109* __this, float ___minimum0, float ___maximum1, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::set_DirectionOffset(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_set_DirectionOffset_mDE367716FE87CB844312A478C6B47FEF58BF60B4 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AxesToAngleAction::get_HorizontalDeadzone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AxesToAngleAction_get_HorizontalDeadzone_m211828DA0DCFF1B33C907B5EFE0277A8105A1EB0_inline (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AxesToAngleAction::get_VerticalDeadzone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AxesToAngleAction_get_VerticalDeadzone_m8ADD2634B760D34E280D0EF6CAC26B54143E6074_inline (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) ;
// System.Void Zinnia.Action.Action`3<Zinnia.Action.FloatAction,System.Single,Zinnia.Action.FloatAction/UnityEvent>::OnEnable()
inline void Action_3_OnEnable_m9BF2F0CA105ED1C1823A8CE159D17795F94D7C82 (Action_3_tF46623224A87298328D210CF1DC16D68CAD7C623* __this, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tF46623224A87298328D210CF1DC16D68CAD7C623*, const RuntimeMethod*))Action_3_OnEnable_m288CB39AD0F951D7CE126E68DA94EB0C5D0848E7_gshared)(__this, method);
}
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToAngleAction::get_HorizontalAxis()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToAngleAction_get_HorizontalAxis_mBCE835E77C856EA36A8A736FFAE064C12BA67CC9_inline (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) ;
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToAngleAction::get_VerticalAxis()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToAngleAction_get_VerticalAxis_m05495E616380DBFF672CD2B69559D3C35F362BE7_inline (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Tilia.Input.CombinedActions.AxesToAngleAction::get_DirectionOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AxesToAngleAction_get_DirectionOffset_m1F81BE1D34387C1DA056099D7F7961BCE6FBAAC4_inline (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) ;
// System.Void Zinnia.Action.FloatAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatAction__ctor_mDADCBFC1C19CC6ED999EF3DDDD138E9BE89D238F (FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* __this, const RuntimeMethod* method) ;
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::get_HorizontalAxis()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToAngleActionConfigurator_get_HorizontalAxis_m49C4818E76163BEE00405E7A9AAA5699C822C4AB_inline (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, const RuntimeMethod* method) ;
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::get_VerticalAxis()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToAngleActionConfigurator_get_VerticalAxis_m6F585630F53F2578C67FCE999E214B8A19D07232_inline (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::get_HorizontalDeadZone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToAngleActionConfigurator_get_HorizontalDeadZone_mA0414A5AFE2C1CB095FEBFA6D727673EE68E21BE_inline (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::get_VerticalDeadZone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToAngleActionConfigurator_get_VerticalDeadZone_mC41970EC828808EA7B396579E2DBD3E24F0CD639_inline (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Operation.Extraction.TransformDirectionExtractor Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::get_DirectionExtractor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransformDirectionExtractor_t3AA9CE6D1CB334660C8215EA5177ED26BD2A40DF* AxesToAngleActionConfigurator_get_DirectionExtractor_m0E60A930D2A3F66AC54C0C82B7480A1C44E70E79_inline (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, const RuntimeMethod* method) ;
// System.Void Zinnia.Data.Operation.Extraction.ValueExtractor`4<System.Nullable`1<UnityEngine.Vector3>,UnityEngine.GameObject,Zinnia.Data.Operation.Extraction.TransformVector3PropertyExtractor/UnityEvent,UnityEngine.Vector3>::set_Source(TSourceElement)
inline void ValueExtractor_4_set_Source_m3910C9654E352031B208803EE63C04BE7C9FEB6F_inline (ValueExtractor_4_tF129366C65D19E23AF9DCD702747F1FC4FE1F27B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method)
{
	((  void (*) (ValueExtractor_4_tF129366C65D19E23AF9DCD702747F1FC4FE1F27B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))ValueExtractor_4_set_Source_mD1D011BDB76A3A57C8F25CB59BFD6E6C8D6DAAD0_gshared_inline)(__this, ___value0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_LateralAxis(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_LateralAxis_mFBF6E29DD231312194FFF8278B97F326CBC52B80 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___value0, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_VerticalAxis(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_VerticalAxis_m6FF2A32709D769EAC4A1FA678E4935828B455B92 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___value0, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_LongitudinalAxis(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_LongitudinalAxis_m85DBA758138ED4ABF8B626E1E2A4E52F71F1DEF7 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___value0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9 (Type_t* ___enumType0, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_InputType(Tilia.Input.CombinedActions.AxesToVector3Action/InputHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_InputType_mCDF2FA3BCB86308B19806424FC9603525E4F21E7 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Tilia.Input.CombinedActions.AxesToVector3Action::get_Multiplier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 AxesToVector3Action_get_Multiplier_m34A0C49F824016E2AF5747B472F3203907D0ACEB_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_Multiplier(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_Multiplier_m5B75F1FA57843F8F784F9E741FCB9E83B70ECFEC (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T Zinnia.Extension.EnumExtensions::GetByIndex<Zinnia.Data.Operation.Extraction.TimeComponentExtractor/TimeComponent>(System.Int32)
inline int32_t EnumExtensions_GetByIndex_TisTimeComponent_tCAD9DA47599BCE5914D683378F4848E1B9AB8721_mE2BF396BE08E2BAC129F47952D3D29D38F78EFA2 (int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, const RuntimeMethod*))EnumExtensions_GetByIndex_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mEE9CB314C50C3F95F216CBD75410DE4A2836605C_gshared)(___index0, method);
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_TimeMultiplier(Zinnia.Data.Operation.Extraction.TimeComponentExtractor/TimeComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_TimeMultiplier_mBFE1A0F182515CF2F49F99E5A71552A4E6E953DC (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_DeadzoneCalculation(Tilia.Input.CombinedActions.AxesToVector3Action/DeadzoneType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_DeadzoneCalculation_m7FABFA4CDA9FFF56ABC1CD2D2EEB1E87B7705023 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, int32_t ___value0, const RuntimeMethod* method) ;
// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AxesToVector3Action::get_LateralDeadzone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AxesToVector3Action_get_LateralDeadzone_m1092B53FDB1903A34EB23D027DD2F1293BC10E35_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_LateralDeadzone(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_LateralDeadzone_m6B1C597688EEC636809B8203B6EFBE436B9EAEAA (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___value0, const RuntimeMethod* method) ;
// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AxesToVector3Action::get_VerticalDeadzone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AxesToVector3Action_get_VerticalDeadzone_mA6825F9C3FB3AAA56CD1C561C9C1F37F0776A0D7_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_VerticalDeadzone(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_VerticalDeadzone_mCB3C89C341E140E19382852FCE5547176D7F3610 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___value0, const RuntimeMethod* method) ;
// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AxesToVector3Action::get_LongitudinalDeadzone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AxesToVector3Action_get_LongitudinalDeadzone_m106ADA1A94681F706833071EF9F70A2FA0B933B4_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_LongitudinalDeadzone(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_LongitudinalDeadzone_m009B3FF6A48EAA5C729D539B20D172F835018A79 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___value0, const RuntimeMethod* method) ;
// System.Void Zinnia.Action.Action`3<Zinnia.Action.Vector3Action,UnityEngine.Vector3,Zinnia.Action.Vector3Action/UnityEvent>::OnEnable()
inline void Action_3_OnEnable_m18429DF3342C68B091CF1520A5964A17C3DCF82C (Action_3_t116F75C83309AC9F0B9A60AC5851A016EAB9527F* __this, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t116F75C83309AC9F0B9A60AC5851A016EAB9527F*, const RuntimeMethod*))Action_3_OnEnable_m2E589F170B19D2F7AA51DA8B3A85614296BA1946_gshared)(__this, method);
}
// Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator Tilia.Input.CombinedActions.AxesToVector3Action::get_Configuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) ;
// Tilia.Input.CombinedActions.AxesToVector3Action/InputHandler Tilia.Input.CombinedActions.AxesToVector3Action::get_InputType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AxesToVector3Action_get_InputType_mE9DE409FB42AF086C0629D84EE1AB01C82434BE8_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) ;
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToVector3Action::get_LateralAxis()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToVector3Action_get_LateralAxis_m4135CF40645F9DD36E64B243F0B2ADFF193EDDF2_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) ;
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToVector3Action::get_VerticalAxis()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToVector3Action_get_VerticalAxis_mE0DEE110790B28F9705B95F052F3F213B87C5B13_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) ;
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToVector3Action::get_LongitudinalAxis()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToVector3Action_get_LongitudinalAxis_m66ADC8AFD646C25DA7F0EA1881ABDC8036FD8422_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Operation.Extraction.TimeComponentExtractor/TimeComponent Tilia.Input.CombinedActions.AxesToVector3Action::get_TimeMultiplier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AxesToVector3Action_get_TimeMultiplier_m6245648AD8ABE3D2B3C4CC11DDFD85072C4E8DA1_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) ;
// Tilia.Input.CombinedActions.AxesToVector3Action/DeadzoneType Tilia.Input.CombinedActions.AxesToVector3Action::get_DeadzoneCalculation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AxesToVector3Action_get_DeadzoneCalculation_mECDBA3AC3563DED5CAD6913B4640BE90FFEF8314_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void Zinnia.Action.Vector3Action::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Action__ctor_m786AB0C784AAEBBCEB4FACFDE26F5E225AF72D56 (Vector3Action_t68D3F63A530B4BB4DBBB764AF77BB9287676C1DA* __this, const RuntimeMethod* method) ;
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_LateralAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToVector3ActionConfigurator_get_LateralAction_m0EAE38250ED60E3173136C6256450EB44FFA2C29_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_VerticalAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToVector3ActionConfigurator_get_VerticalAction_m5E4FEEC880AB16ED1F6F1844261C968A5CA6A1A3_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_LongitudinalAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToVector3ActionConfigurator_get_LongitudinalAction_m945CF825910D07FD4DF11530644C30446FDD0CFB_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_DirectionalContainer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AxesToVector3ActionConfigurator_get_DirectionalContainer_m23244930602D50E232A4C7765A8E39DAFD4EF22D_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_IncrementalContainer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AxesToVector3ActionConfigurator_get_IncrementalContainer_mB679DB9B8EDCAD8FF1A7C4DFBCCE3C1796AB6FBC_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Collection.List.Vector3ObservableList Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_Multiplier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3ObservableList_t36F67A591E2C1F3138097AB27B9A9977B0DE9067* AxesToVector3ActionConfigurator_get_Multiplier_mCDBA6B7562FCFD2AE04E5C3408875E163741BA23_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_CombinedAxisDeadzoneContainer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AxesToVector3ActionConfigurator_get_CombinedAxisDeadzoneContainer_mF8D9205E20AEF542C86D02BDE22DF8F52C6E81DE_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_SingleAxisDeadzoneContainer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AxesToVector3ActionConfigurator_get_SingleAxisDeadzoneContainer_mED16D805FEDDE1ADA35F24DD36D5B124C465745F_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean[] Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_LateralDeadZone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* AxesToVector3ActionConfigurator_get_LateralDeadZone_m18051A38EFDBDA32C8C7906456E153FC3CB5B5F6_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_LateralPositiveBounds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_LateralPositiveBounds_m3C4AC20E8DF295395ADE479265E57D88E1643CB4_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_LateralNegativeBounds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_LateralNegativeBounds_m935DC58A127F99262ED9EC179FD3353B6D05F2F4_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_LateralBoundsManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_LateralBoundsManager_m6820E2C4B247C6E40165EA27077BFB096A9DC989_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean[] Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_VerticalDeadZone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* AxesToVector3ActionConfigurator_get_VerticalDeadZone_mE7ACA16056D5015092C925C09D75DCF0854B4090_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_VerticalPositiveBounds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_VerticalPositiveBounds_m3D392D7DF70EC83AEE5A3FE322F15697B1280A97_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_VerticalNegativeBounds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_VerticalNegativeBounds_mF70D0E894A4B1534EC414085F646BE0AD487AA0F_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_VerticalBoundsManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_VerticalBoundsManager_mD143FA097C917CC19EF6C6E0CDBD16D1D78D74DC_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean[] Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_LongitudinalDeadZone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* AxesToVector3ActionConfigurator_get_LongitudinalDeadZone_mBE27FD7215688AA7D385D173F0160794A5D400DE_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_LongitudinalPositiveBounds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_LongitudinalPositiveBounds_mC5AEF7B755CE20539E84D2EA69ED001F12F035EF_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_LongitudinalNegativeBounds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_LongitudinalNegativeBounds_mCC4DA93E1B0051BAB5564D6A736A49047D581543_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_LongitudinalBoundsManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_LongitudinalBoundsManager_m4060430DC4EC4638BB43C342B15E776B8E3BCA72_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// Zinnia.Data.Operation.Extraction.TimeComponentExtractor Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_TimeExtractor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimeComponentExtractor_t430415B148F995BEBE599003E9504E27E82B4874* AxesToVector3ActionConfigurator_get_TimeExtractor_mF2CFA764689E5CD105224EDBEF7EAA11F96AE44D_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// System.Void Zinnia.Data.Operation.Extraction.ValueExtractor`4<System.Nullable`1<System.Single>,Zinnia.Data.Operation.Extraction.TimeComponentExtractor/TimeComponent,Zinnia.Data.Operation.Extraction.TimeComponentExtractor/UnityEvent,System.Single>::set_Source(TSourceElement)
inline void ValueExtractor_4_set_Source_mF2F9B7BFDE25E7E883B9F556BDB1C470115C8A4C_inline (ValueExtractor_4_t0461FBA15921D1D86B01E1F9F530271A1C7E0777* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (ValueExtractor_4_t0461FBA15921D1D86B01E1F9F530271A1C7E0777*, int32_t, const RuntimeMethod*))ValueExtractor_4_set_Source_m4866E2D85F1864750608D2256C275F732C23C4A8_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_BoundOverlap()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AxesToVector3ActionConfigurator_get_BoundOverlap_m73A78EDF7330903409809978D4FC5E8ED36CC54A_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisAction::set_NegativeInput(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanTo1DAxisAction_set_NegativeInput_m062345E03654112190539F8DDD50A7F61ED726DC (BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___value0, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisAction::set_PositiveInput(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanTo1DAxisAction_set_PositiveInput_m65EF713F2F0D4CC297E8DE8910DA5FEC47BF1DE9 (BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___value0, const RuntimeMethod* method) ;
// Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator Tilia.Input.CombinedActions.BooleanTo1DAxisAction::get_Configuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* BooleanTo1DAxisAction_get_Configuration_mD605CEB9C5CFEC9381ECDB4333D91D2C47BB7A3D_inline (BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0* __this, const RuntimeMethod* method) ;
// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.BooleanTo1DAxisAction::get_PositiveInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* BooleanTo1DAxisAction_get_PositiveInput_m2AAAAF2B86F998AA4F1B25D6249403423FE2B66D_inline (BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0* __this, const RuntimeMethod* method) ;
// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.BooleanTo1DAxisAction::get_NegativeInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* BooleanTo1DAxisAction_get_NegativeInput_m8C291B26D827A43D7170F764E9ACE82B79DA24A3_inline (BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0* __this, const RuntimeMethod* method) ;
// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator::get_PositiveInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* BooleanTo1DAxisActionConfigurator_get_PositiveInput_m9F6F7ED6D6BDB382E5C44CDFAE67B963E51CDA01_inline (BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* __this, const RuntimeMethod* method) ;
// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator::get_NegativeInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* BooleanTo1DAxisActionConfigurator_get_NegativeInput_m3B6A4245BFAF8C65CAF89906F8EA913A0FE11CD7_inline (BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* __this, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m10DBDCD8C3DBB4D2C1FE14D791D2DAFE0BE645C8 (U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A* __this, const RuntimeMethod* method) ;
// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.DoubleClickActionConfigurator::get_FirstClickAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* DoubleClickActionConfigurator_get_FirstClickAction_mBDF8063CBC3284E8B8FDB7CF62E28410B0DC31FB_inline (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Zinnia.Extension.BehaviourExtensions::RunWhenActiveAndEnabled(UnityEngine.Behaviour,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BehaviourExtensions_RunWhenActiveAndEnabled_mF5AA4C49DBCD01F4BE5A7D920B1B228739858E2F (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* ___behaviour0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action1, const RuntimeMethod* method) ;
// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.DoubleClickActionConfigurator::get_SecondClickAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* DoubleClickActionConfigurator_get_SecondClickAction_mB1D42A7354D28E11130F2F2775FB38A85DBD05B9_inline (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, const RuntimeMethod* method) ;
// Zinnia.Utility.CountdownTimer Tilia.Input.CombinedActions.DoubleClickActionConfigurator::get_ClickTimer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CountdownTimer_t148B906173867D94D4423E58F690EF5723153623* DoubleClickActionConfigurator_get_ClickTimer_m86CDCE33942F4DBE499F6D379F7D828FB1269F63_inline (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, const RuntimeMethod* method) ;
// System.Void Zinnia.Utility.CountdownTimer::set_StartTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownTimer_set_StartTime_mBC5E910BE086092EE36D3A906CCC25613A9EB470 (CountdownTimer_t148B906173867D94D4423E58F690EF5723153623* __this, float ___value0, const RuntimeMethod* method) ;
// Tilia.Input.CombinedActions.DoubleClickActionFacade Tilia.Input.CombinedActions.DoubleClickActionConfigurator::get_Facade()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* DoubleClickActionConfigurator_get_Facade_mF0E2D28C2C968AB7F6662BC0986ACB391EEC52CE_inline (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, const RuntimeMethod* method) ;
// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.DoubleClickActionFacade::get_ControlAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* DoubleClickActionFacade_get_ControlAction_m6C066B11F9E441684C0EEE065086714325ACCD9A_inline (DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* __this, const RuntimeMethod* method) ;
// System.Single Tilia.Input.CombinedActions.DoubleClickActionFacade::get_ClickDuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DoubleClickActionFacade_get_ClickDuration_m5DCF74C7CCF3BBB0FBB5859645041F5E277061BF_inline (DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Tilia.Input.CombinedActions.DoubleClickActionFacade::set_ControlAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleClickActionFacade_set_ControlAction_m457CA375AC29BEF3AE4CBBFBFAC47C23E29A741D (DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___value0, const RuntimeMethod* method) ;
// Tilia.Input.CombinedActions.DoubleClickActionConfigurator Tilia.Input.CombinedActions.DoubleClickActionFacade::get_Configuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* DoubleClickActionFacade_get_Configuration_m44E77E952DEC1AB4DCF484B88491EA0D9AF3B810_inline (DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* __this, const RuntimeMethod* method) ;
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
// Tilia.Input.CombinedActions.AngleRangeToBooleanFacade Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::get_Facade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* AngleRangeToBooleanConfigurator_get_Facade_m71E9F0F69B0632FE5F6BF6DB71CADF3A4BC2E25D (AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* __this, const RuntimeMethod* method) 
{
	{
		// return facade;
		AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* L_0 = __this->___facade_4;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::set_Facade(Tilia.Input.CombinedActions.AngleRangeToBooleanFacade)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanConfigurator_set_Facade_mA395E0FDE497469670810BC656EBD14E87D08491 (AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* __this, AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* ___value0, const RuntimeMethod* method) 
{
	{
		// facade = value;
		AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* L_0 = ___value0;
		__this->___facade_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___facade_4), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::get_AngleChecker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AngleRangeToBooleanConfigurator_get_AngleChecker_mA5E3F1D6F46DF1C29EB825B015F9C97199D46E50 (AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* __this, const RuntimeMethod* method) 
{
	{
		// return angleChecker;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___angleChecker_5;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::set_AngleChecker(Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanConfigurator_set_AngleChecker_m7C2E21BDDAE62A303EEFA852E04D6E8921CEFAC2 (AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* __this, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___value0, const RuntimeMethod* method) 
{
	{
		// angleChecker = value;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = ___value0;
		__this->___angleChecker_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___angleChecker_5), (void*)L_0);
		// }
		return;
	}
}
// Tilia.Input.CombinedActions.AxesToAngleAction Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::get_AngleInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* AngleRangeToBooleanConfigurator_get_AngleInput_mCC40DD8EEAC5DFFDBC39ECB180FCDF8B2868C63A (AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* __this, const RuntimeMethod* method) 
{
	{
		// return angleInput;
		AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* L_0 = __this->___angleInput_6;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::set_AngleInput(Tilia.Input.CombinedActions.AxesToAngleAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanConfigurator_set_AngleInput_m69F31F6D54939E46855FF53494DE88916BDA9B9E (AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* __this, AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* ___value0, const RuntimeMethod* method) 
{
	{
		// angleInput = value;
		AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* L_0 = ___value0;
		__this->___angleInput_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___angleInput_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::ConfigureAngleChecker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanConfigurator_ConfigureAngleChecker_m9D2311CF700BE9519FCEE3907FD0232F46528D4D (AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* __this, const RuntimeMethod* method) 
{
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// AngleChecker.SetPositiveBounds(Facade.AngleRange.ToVector2());
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0;
		L_0 = AngleRangeToBooleanConfigurator_get_AngleChecker_mA5E3F1D6F46DF1C29EB825B015F9C97199D46E50_inline(__this, NULL);
		AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* L_1;
		L_1 = AngleRangeToBooleanConfigurator_get_Facade_m71E9F0F69B0632FE5F6BF6DB71CADF3A4BC2E25D_inline(__this, NULL);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_2;
		L_2 = AngleRangeToBooleanFacade_get_AngleRange_mDE2EF763E9069F83893E24B179B7E7D9949D6BD4_inline(L_1, NULL);
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = FloatRange_ToVector2_mA6331BC9B152FE4A253BB255BFA81D9CB2EFB3BC((&V_0), NULL);
		VirtualActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(9 /* System.Void Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean::SetPositiveBounds(UnityEngine.Vector2) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::ConfigureAngleInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanConfigurator_ConfigureAngleInput_m706502E5159A806AFCE7A239ADC665382224F4B2 (AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* __this, const RuntimeMethod* method) 
{
	{
		// AngleInput.HorizontalAxis = Facade.HorizontalAxis;
		AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* L_0;
		L_0 = AngleRangeToBooleanConfigurator_get_AngleInput_mCC40DD8EEAC5DFFDBC39ECB180FCDF8B2868C63A_inline(__this, NULL);
		AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* L_1;
		L_1 = AngleRangeToBooleanConfigurator_get_Facade_m71E9F0F69B0632FE5F6BF6DB71CADF3A4BC2E25D_inline(__this, NULL);
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_2;
		L_2 = AngleRangeToBooleanFacade_get_HorizontalAxis_m39708D138DE80C94B5DFE68CAC500F74249DF4F8_inline(L_1, NULL);
		AxesToAngleAction_set_HorizontalAxis_m8B3FBEC2B98A5CFD788DB344A8B2373440BBB45C(L_0, L_2, NULL);
		// AngleInput.VerticalAxis = Facade.VerticalAxis;
		AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* L_3;
		L_3 = AngleRangeToBooleanConfigurator_get_AngleInput_mCC40DD8EEAC5DFFDBC39ECB180FCDF8B2868C63A_inline(__this, NULL);
		AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* L_4;
		L_4 = AngleRangeToBooleanConfigurator_get_Facade_m71E9F0F69B0632FE5F6BF6DB71CADF3A4BC2E25D_inline(__this, NULL);
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_5;
		L_5 = AngleRangeToBooleanFacade_get_VerticalAxis_mDC583EEF982C0855ABA669376BD7357AEB993472_inline(L_4, NULL);
		AxesToAngleAction_set_VerticalAxis_mD781AF88A0DB60D017716A79DA92976CCD8EA287(L_3, L_5, NULL);
		// AngleInput.HorizontalDeadzone = Facade.HorizontalDeadzone;
		AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* L_6;
		L_6 = AngleRangeToBooleanConfigurator_get_AngleInput_mCC40DD8EEAC5DFFDBC39ECB180FCDF8B2868C63A_inline(__this, NULL);
		AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* L_7;
		L_7 = AngleRangeToBooleanConfigurator_get_Facade_m71E9F0F69B0632FE5F6BF6DB71CADF3A4BC2E25D_inline(__this, NULL);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_8;
		L_8 = AngleRangeToBooleanFacade_get_HorizontalDeadzone_mFB21FE5A3A0F755F1B1AEB75454FBC7AC16604E7_inline(L_7, NULL);
		AxesToAngleAction_set_HorizontalDeadzone_m7A7EC9CCC72C997D9DCB8C27FE4C705C55439BDD(L_6, L_8, NULL);
		// AngleInput.VerticalDeadzone = Facade.VerticalDeadzone;
		AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* L_9;
		L_9 = AngleRangeToBooleanConfigurator_get_AngleInput_mCC40DD8EEAC5DFFDBC39ECB180FCDF8B2868C63A_inline(__this, NULL);
		AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* L_10;
		L_10 = AngleRangeToBooleanConfigurator_get_Facade_m71E9F0F69B0632FE5F6BF6DB71CADF3A4BC2E25D_inline(__this, NULL);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_11;
		L_11 = AngleRangeToBooleanFacade_get_VerticalDeadzone_mDDBDA4F4FE814E5E55542B874C987FFD79FCF267_inline(L_10, NULL);
		AxesToAngleAction_set_VerticalDeadzone_m77F4ABFCBDCED9EEF6D5D2BEDC779EBDF24FB233(L_9, L_11, NULL);
		// AngleInput.Configuration.AngleConverter.Unit = Facade.UnitType;
		AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* L_12;
		L_12 = AngleRangeToBooleanConfigurator_get_AngleInput_mCC40DD8EEAC5DFFDBC39ECB180FCDF8B2868C63A_inline(__this, NULL);
		AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* L_13;
		L_13 = AxesToAngleAction_get_Configuration_mDD434767738F877906A2E8FAFE2B74F80D02CDAF_inline(L_12, NULL);
		Vector2ToAngle_t6A541CEF5664FF054E348618F764576A36605D58* L_14;
		L_14 = AxesToAngleActionConfigurator_get_AngleConverter_m4DCB21255D3B825D1C069A7CAC84A38533018349_inline(L_13, NULL);
		AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* L_15;
		L_15 = AngleRangeToBooleanConfigurator_get_Facade_m71E9F0F69B0632FE5F6BF6DB71CADF3A4BC2E25D_inline(__this, NULL);
		int32_t L_16;
		L_16 = AngleRangeToBooleanFacade_get_UnitType_m1DFAC86468352E42296B7BA7F3DED0C58FA518FE_inline(L_15, NULL);
		Vector2ToAngle_set_Unit_m9452374E57DF8A6B7F2C4A18D6980F69EFD6CE80_inline(L_14, L_16, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanConfigurator_OnEnable_m63DFABC754BA630692D67B7033783C9664FAF6A4 (AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* __this, const RuntimeMethod* method) 
{
	{
		// ConfigureAngleChecker();
		VirtualActionInvoker0::Invoke(4 /* System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::ConfigureAngleChecker() */, __this);
		// ConfigureAngleInput();
		VirtualActionInvoker0::Invoke(5 /* System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::ConfigureAngleInput() */, __this);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanConfigurator__ctor_mA8C2FF5C8CE7019907B0F7156ED2402B53CC6D93 (AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* __this, const RuntimeMethod* method) 
{
	{
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
// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::get_AngleRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AngleRangeToBooleanFacade_get_AngleRange_mDE2EF763E9069F83893E24B179B7E7D9949D6BD4 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// return angleRange;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = __this->___angleRange_4;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::set_AngleRange(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_set_AngleRange_mAB6438DAAFAA5DD789CB2BA3319CF1FEE82F5208 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___value0, const RuntimeMethod* method) 
{
	{
		// angleRange = value;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = ___value0;
		__this->___angleRange_4 = L_0;
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterAngleRangeChange();
		VirtualActionInvoker0::Invoke(13 /* System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::OnAfterAngleRangeChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Data.Type.Transformation.Conversion.Vector2ToAngle/AngleUnit Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::get_UnitType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AngleRangeToBooleanFacade_get_UnitType_m1DFAC86468352E42296B7BA7F3DED0C58FA518FE (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// return unitType;
		int32_t L_0 = __this->___unitType_5;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::set_UnitType(Zinnia.Data.Type.Transformation.Conversion.Vector2ToAngle/AngleUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_set_UnitType_mF47F9DDE6A825E3DBAD7BBE5910FE59EC2F6B568 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// unitType = value;
		int32_t L_0 = ___value0;
		__this->___unitType_5 = L_0;
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterUnitTypeChange();
		VirtualActionInvoker0::Invoke(14 /* System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::OnAfterUnitTypeChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::get_HorizontalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AngleRangeToBooleanFacade_get_HorizontalAxis_m39708D138DE80C94B5DFE68CAC500F74249DF4F8 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// return horizontalAxis;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___horizontalAxis_6;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::set_HorizontalAxis(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_set_HorizontalAxis_m273301EE32923AF3CFA951F5C83FDE04EEA9052D (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___value0, const RuntimeMethod* method) 
{
	{
		// horizontalAxis = value;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = ___value0;
		__this->___horizontalAxis_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___horizontalAxis_6), (void*)L_0);
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterHorizontalAxisChange();
		VirtualActionInvoker0::Invoke(15 /* System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::OnAfterHorizontalAxisChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::get_VerticalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AngleRangeToBooleanFacade_get_VerticalAxis_mDC583EEF982C0855ABA669376BD7357AEB993472 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// return verticalAxis;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___verticalAxis_7;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::set_VerticalAxis(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_set_VerticalAxis_m724FD7550F66F2363D0A9163BF538B6204BF61E3 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___value0, const RuntimeMethod* method) 
{
	{
		// verticalAxis = value;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = ___value0;
		__this->___verticalAxis_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___verticalAxis_7), (void*)L_0);
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterVerticalAxisChange();
		VirtualActionInvoker0::Invoke(16 /* System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::OnAfterVerticalAxisChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::get_HorizontalDeadzone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AngleRangeToBooleanFacade_get_HorizontalDeadzone_mFB21FE5A3A0F755F1B1AEB75454FBC7AC16604E7 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// return horizontalDeadzone;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = __this->___horizontalDeadzone_8;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::set_HorizontalDeadzone(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_set_HorizontalDeadzone_m2FA0FDD6294AEFB71E8EBB9348EC2B026043E51E (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___value0, const RuntimeMethod* method) 
{
	{
		// horizontalDeadzone = value;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = ___value0;
		__this->___horizontalDeadzone_8 = L_0;
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterHorizontalDeadzoneChange();
		VirtualActionInvoker0::Invoke(17 /* System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::OnAfterHorizontalDeadzoneChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::get_VerticalDeadzone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AngleRangeToBooleanFacade_get_VerticalDeadzone_mDDBDA4F4FE814E5E55542B874C987FFD79FCF267 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// return verticalDeadzone;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = __this->___verticalDeadzone_9;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::set_VerticalDeadzone(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_set_VerticalDeadzone_m657A97786DD873914D31C9560BC63A94A292BF3E (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___value0, const RuntimeMethod* method) 
{
	{
		// verticalDeadzone = value;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = ___value0;
		__this->___verticalDeadzone_9 = L_0;
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterVerticalDeadzoneChange();
		VirtualActionInvoker0::Invoke(18 /* System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::OnAfterVerticalDeadzoneChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* AngleRangeToBooleanFacade_get_Configuration_mAD86389FE5E1178FE07ABD81104AB3739D321F13 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// return configuration;
		AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* L_0 = __this->___configuration_10;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::set_Configuration(Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_set_Configuration_mE675454403DE1AC7D01AA00FFB9E2EDDFDE17719 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* ___value0, const RuntimeMethod* method) 
{
	{
		// configuration = value;
		AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* L_0 = ___value0;
		__this->___configuration_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___configuration_10), (void*)L_0);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::ClearHorizontalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_ClearHorizontalAxis_mD9E2BF99865628018A77DCED7395F25047DC7818 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.IsValidState())
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (L_0)
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
		// HorizontalAxis = default;
		AngleRangeToBooleanFacade_set_HorizontalAxis_m273301EE32923AF3CFA951F5C83FDE04EEA9052D(__this, (FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::ClearVerticalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_ClearVerticalAxis_mEFAFD2B086637C179500BE6486AAD8335C674ECD (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.IsValidState())
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (L_0)
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
		// VerticalAxis = default;
		AngleRangeToBooleanFacade_set_VerticalAxis_m724FD7550F66F2363D0A9163BF538B6204BF61E3(__this, (FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::SetAngleRangeMinimum(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_SetAngleRangeMinimum_m9A32B532ABD8DB46D2CD2641C86E3453F9C37B6D (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, float ___value0, const RuntimeMethod* method) 
{
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// FloatRange newLimit = new FloatRange(AngleRange.ToVector2());
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0;
		L_0 = AngleRangeToBooleanFacade_get_AngleRange_mDE2EF763E9069F83893E24B179B7E7D9949D6BD4_inline(__this, NULL);
		V_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = FloatRange_ToVector2_mA6331BC9B152FE4A253BB255BFA81D9CB2EFB3BC((&V_1), NULL);
		FloatRange__ctor_m9D7B3370CA720B47C8217AEC17FAC0A2F10F9EC8((&V_0), L_1, NULL);
		// newLimit.minimum = value;
		float L_2 = ___value0;
		(&V_0)->___minimum_0 = L_2;
		// AngleRange = newLimit;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_3 = V_0;
		AngleRangeToBooleanFacade_set_AngleRange_mAB6438DAAFAA5DD789CB2BA3319CF1FEE82F5208(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::SetAngleRangeMaximum(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_SetAngleRangeMaximum_mE6E187947A888C79AFD553929F813BD8904389E9 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, float ___value0, const RuntimeMethod* method) 
{
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// FloatRange newLimit = new FloatRange(AngleRange.ToVector2());
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0;
		L_0 = AngleRangeToBooleanFacade_get_AngleRange_mDE2EF763E9069F83893E24B179B7E7D9949D6BD4_inline(__this, NULL);
		V_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = FloatRange_ToVector2_mA6331BC9B152FE4A253BB255BFA81D9CB2EFB3BC((&V_1), NULL);
		FloatRange__ctor_m9D7B3370CA720B47C8217AEC17FAC0A2F10F9EC8((&V_0), L_1, NULL);
		// newLimit.maximum = value;
		float L_2 = ___value0;
		(&V_0)->___maximum_1 = L_2;
		// AngleRange = newLimit;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_3 = V_0;
		AngleRangeToBooleanFacade_set_AngleRange_mAB6438DAAFAA5DD789CB2BA3319CF1FEE82F5208(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::SetUnitType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_SetUnitType_m0562F59E141AB7F5C44AF48F3CB0C323C34C1239 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, int32_t ___unitTypeIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumExtensions_GetByIndex_TisAngleUnit_t66B569868FC43FE6649184BB539F663D3527FDA5_mB01B2BA7217AB4EA99FA80C18AB9B0230E3EC403_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnitType = EnumExtensions.GetByIndex<Vector2ToAngle.AngleUnit>(unitTypeIndex);
		int32_t L_0 = ___unitTypeIndex0;
		int32_t L_1;
		L_1 = EnumExtensions_GetByIndex_TisAngleUnit_t66B569868FC43FE6649184BB539F663D3527FDA5_mB01B2BA7217AB4EA99FA80C18AB9B0230E3EC403(L_0, EnumExtensions_GetByIndex_TisAngleUnit_t66B569868FC43FE6649184BB539F663D3527FDA5_mB01B2BA7217AB4EA99FA80C18AB9B0230E3EC403_RuntimeMethod_var);
		AngleRangeToBooleanFacade_set_UnitType_mF47F9DDE6A825E3DBAD7BBE5910FE59EC2F6B568(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::SetHorizontalDeadzoneMinimum(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_SetHorizontalDeadzoneMinimum_m3C067E374201404ADE0277A32A0DDE8B8C05324F (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, float ___value0, const RuntimeMethod* method) 
{
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// FloatRange newLimit = new FloatRange(HorizontalDeadzone.ToVector2());
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0;
		L_0 = AngleRangeToBooleanFacade_get_HorizontalDeadzone_mFB21FE5A3A0F755F1B1AEB75454FBC7AC16604E7_inline(__this, NULL);
		V_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = FloatRange_ToVector2_mA6331BC9B152FE4A253BB255BFA81D9CB2EFB3BC((&V_1), NULL);
		FloatRange__ctor_m9D7B3370CA720B47C8217AEC17FAC0A2F10F9EC8((&V_0), L_1, NULL);
		// newLimit.minimum = value;
		float L_2 = ___value0;
		(&V_0)->___minimum_0 = L_2;
		// HorizontalDeadzone = newLimit;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_3 = V_0;
		AngleRangeToBooleanFacade_set_HorizontalDeadzone_m2FA0FDD6294AEFB71E8EBB9348EC2B026043E51E(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::SetHorizontalDeadzoneMaximum(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_SetHorizontalDeadzoneMaximum_mA98BC0D19EC313574D7797AF5CB51734A79570E7 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, float ___value0, const RuntimeMethod* method) 
{
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// FloatRange newLimit = new FloatRange(HorizontalDeadzone.ToVector2());
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0;
		L_0 = AngleRangeToBooleanFacade_get_HorizontalDeadzone_mFB21FE5A3A0F755F1B1AEB75454FBC7AC16604E7_inline(__this, NULL);
		V_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = FloatRange_ToVector2_mA6331BC9B152FE4A253BB255BFA81D9CB2EFB3BC((&V_1), NULL);
		FloatRange__ctor_m9D7B3370CA720B47C8217AEC17FAC0A2F10F9EC8((&V_0), L_1, NULL);
		// newLimit.maximum = value;
		float L_2 = ___value0;
		(&V_0)->___maximum_1 = L_2;
		// HorizontalDeadzone = newLimit;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_3 = V_0;
		AngleRangeToBooleanFacade_set_HorizontalDeadzone_m2FA0FDD6294AEFB71E8EBB9348EC2B026043E51E(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::SetVerticalDeadzoneMinimum(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_SetVerticalDeadzoneMinimum_m636EACCCEC212B2D1E9303FC2074157FF4FCBB5C (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, float ___value0, const RuntimeMethod* method) 
{
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// FloatRange newLimit = new FloatRange(VerticalDeadzone.ToVector2());
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0;
		L_0 = AngleRangeToBooleanFacade_get_VerticalDeadzone_mDDBDA4F4FE814E5E55542B874C987FFD79FCF267_inline(__this, NULL);
		V_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = FloatRange_ToVector2_mA6331BC9B152FE4A253BB255BFA81D9CB2EFB3BC((&V_1), NULL);
		FloatRange__ctor_m9D7B3370CA720B47C8217AEC17FAC0A2F10F9EC8((&V_0), L_1, NULL);
		// newLimit.minimum = value;
		float L_2 = ___value0;
		(&V_0)->___minimum_0 = L_2;
		// VerticalDeadzone = newLimit;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_3 = V_0;
		AngleRangeToBooleanFacade_set_VerticalDeadzone_m657A97786DD873914D31C9560BC63A94A292BF3E(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::SetVerticalDeadzoneMaximum(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_SetVerticalDeadzoneMaximum_m4F11A2AF50AE64675CFFCCACDA6FC0913F7F8181 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, float ___value0, const RuntimeMethod* method) 
{
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// FloatRange newLimit = new FloatRange(VerticalDeadzone.ToVector2());
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0;
		L_0 = AngleRangeToBooleanFacade_get_VerticalDeadzone_mDDBDA4F4FE814E5E55542B874C987FFD79FCF267_inline(__this, NULL);
		V_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = FloatRange_ToVector2_mA6331BC9B152FE4A253BB255BFA81D9CB2EFB3BC((&V_1), NULL);
		FloatRange__ctor_m9D7B3370CA720B47C8217AEC17FAC0A2F10F9EC8((&V_0), L_1, NULL);
		// newLimit.maximum = value;
		float L_2 = ___value0;
		(&V_0)->___maximum_1 = L_2;
		// VerticalDeadzone = newLimit;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_3 = V_0;
		AngleRangeToBooleanFacade_set_VerticalDeadzone_m657A97786DD873914D31C9560BC63A94A292BF3E(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::OnAfterAngleRangeChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_OnAfterAngleRangeChange_m267F03062A3A8A3026220EB3F2DD0D3124F234F3 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.ConfigureAngleChecker();
		AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* L_0;
		L_0 = AngleRangeToBooleanFacade_get_Configuration_mAD86389FE5E1178FE07ABD81104AB3739D321F13_inline(__this, NULL);
		VirtualActionInvoker0::Invoke(4 /* System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::ConfigureAngleChecker() */, L_0);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::OnAfterUnitTypeChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_OnAfterUnitTypeChange_m680EBC2DAC9622A1E22429F7F61CA20840E391EC (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.ConfigureAngleInput();
		AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* L_0;
		L_0 = AngleRangeToBooleanFacade_get_Configuration_mAD86389FE5E1178FE07ABD81104AB3739D321F13_inline(__this, NULL);
		VirtualActionInvoker0::Invoke(5 /* System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::ConfigureAngleInput() */, L_0);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::OnAfterHorizontalAxisChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_OnAfterHorizontalAxisChange_m09B4C3EE6460DF8972CA24EC21D4A3BA63616321 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.ConfigureAngleInput();
		AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* L_0;
		L_0 = AngleRangeToBooleanFacade_get_Configuration_mAD86389FE5E1178FE07ABD81104AB3739D321F13_inline(__this, NULL);
		VirtualActionInvoker0::Invoke(5 /* System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::ConfigureAngleInput() */, L_0);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::OnAfterVerticalAxisChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_OnAfterVerticalAxisChange_m027DD5AFEFC348312F0D645EF21F3693230D45CB (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.ConfigureAngleInput();
		AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* L_0;
		L_0 = AngleRangeToBooleanFacade_get_Configuration_mAD86389FE5E1178FE07ABD81104AB3739D321F13_inline(__this, NULL);
		VirtualActionInvoker0::Invoke(5 /* System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::ConfigureAngleInput() */, L_0);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::OnAfterHorizontalDeadzoneChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_OnAfterHorizontalDeadzoneChange_m2A1DD973BC75FEE5ED4B5741E8B927EF055ABB78 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.ConfigureAngleInput();
		AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* L_0;
		L_0 = AngleRangeToBooleanFacade_get_Configuration_mAD86389FE5E1178FE07ABD81104AB3739D321F13_inline(__this, NULL);
		VirtualActionInvoker0::Invoke(5 /* System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::ConfigureAngleInput() */, L_0);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::OnAfterVerticalDeadzoneChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade_OnAfterVerticalDeadzoneChange_m3540680C1AA7C99E0AAE821ACA1B3EA8DD0A9231 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.ConfigureAngleInput();
		AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* L_0;
		L_0 = AngleRangeToBooleanFacade_get_Configuration_mAD86389FE5E1178FE07ABD81104AB3739D321F13_inline(__this, NULL);
		VirtualActionInvoker0::Invoke(5 /* System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanConfigurator::ConfigureAngleInput() */, L_0);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AngleRangeToBooleanFacade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AngleRangeToBooleanFacade__ctor_mDE34CEB0113714C6FB3CF96A673CFD559DE27957 (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// private FloatRange angleRange = new FloatRange(-180f, 180f);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0;
		memset((&L_0), 0, sizeof(L_0));
		FloatRange__ctor_m5BE869766743FCAC8EAC2F7058C95D7B3C36CAAB((&L_0), (-180.0f), (180.0f), /*hidden argument*/NULL);
		__this->___angleRange_4 = L_0;
		// private Vector2ToAngle.AngleUnit unitType = Vector2ToAngle.AngleUnit.SignedDegrees;
		__this->___unitType_5 = 2;
		// private FloatRange horizontalDeadzone = new FloatRange(-0.75f, 0.75f);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_1;
		memset((&L_1), 0, sizeof(L_1));
		FloatRange__ctor_m5BE869766743FCAC8EAC2F7058C95D7B3C36CAAB((&L_1), (-0.75f), (0.75f), /*hidden argument*/NULL);
		__this->___horizontalDeadzone_8 = L_1;
		// private FloatRange verticalDeadzone = new FloatRange(-0.75f, 0.75f);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_2;
		memset((&L_2), 0, sizeof(L_2));
		FloatRange__ctor_m5BE869766743FCAC8EAC2F7058C95D7B3C36CAAB((&L_2), (-0.75f), (0.75f), /*hidden argument*/NULL);
		__this->___verticalDeadzone_9 = L_2;
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
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToAngleAction::get_HorizontalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToAngleAction_get_HorizontalAxis_mBCE835E77C856EA36A8A736FFAE064C12BA67CC9 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// return horizontalAxis;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___horizontalAxis_15;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::set_HorizontalAxis(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_set_HorizontalAxis_m8B3FBEC2B98A5CFD788DB344A8B2373440BBB45C (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___value0, const RuntimeMethod* method) 
{
	{
		// horizontalAxis = value;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = ___value0;
		__this->___horizontalAxis_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___horizontalAxis_15), (void*)L_0);
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterHorizontalAxisChange();
		VirtualActionInvoker0::Invoke(38 /* System.Void Tilia.Input.CombinedActions.AxesToAngleAction::OnAfterHorizontalAxisChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToAngleAction::get_VerticalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToAngleAction_get_VerticalAxis_m05495E616380DBFF672CD2B69559D3C35F362BE7 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// return verticalAxis;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___verticalAxis_16;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::set_VerticalAxis(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_set_VerticalAxis_mD781AF88A0DB60D017716A79DA92976CCD8EA287 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___value0, const RuntimeMethod* method) 
{
	{
		// verticalAxis = value;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = ___value0;
		__this->___verticalAxis_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___verticalAxis_16), (void*)L_0);
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterVerticalAxisChange();
		VirtualActionInvoker0::Invoke(39 /* System.Void Tilia.Input.CombinedActions.AxesToAngleAction::OnAfterVerticalAxisChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject Tilia.Input.CombinedActions.AxesToAngleAction::get_DirectionOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AxesToAngleAction_get_DirectionOffset_m1F81BE1D34387C1DA056099D7F7961BCE6FBAAC4 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// return directionOffset;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___directionOffset_17;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::set_DirectionOffset(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_set_DirectionOffset_mDE367716FE87CB844312A478C6B47FEF58BF60B4 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// directionOffset = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___directionOffset_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___directionOffset_17), (void*)L_0);
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterDirectionOffsetChange();
		VirtualActionInvoker0::Invoke(42 /* System.Void Tilia.Input.CombinedActions.AxesToAngleAction::OnAfterDirectionOffsetChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AxesToAngleAction::get_HorizontalDeadzone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AxesToAngleAction_get_HorizontalDeadzone_m211828DA0DCFF1B33C907B5EFE0277A8105A1EB0 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// return horizontalDeadzone;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = __this->___horizontalDeadzone_18;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::set_HorizontalDeadzone(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_set_HorizontalDeadzone_m7A7EC9CCC72C997D9DCB8C27FE4C705C55439BDD (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___value0, const RuntimeMethod* method) 
{
	{
		// horizontalDeadzone = value;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = ___value0;
		__this->___horizontalDeadzone_18 = L_0;
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterHorizontalDeadzoneChange();
		VirtualActionInvoker0::Invoke(40 /* System.Void Tilia.Input.CombinedActions.AxesToAngleAction::OnAfterHorizontalDeadzoneChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AxesToAngleAction::get_VerticalDeadzone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AxesToAngleAction_get_VerticalDeadzone_m8ADD2634B760D34E280D0EF6CAC26B54143E6074 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// return verticalDeadzone;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = __this->___verticalDeadzone_19;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::set_VerticalDeadzone(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_set_VerticalDeadzone_m77F4ABFCBDCED9EEF6D5D2BEDC779EBDF24FB233 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___value0, const RuntimeMethod* method) 
{
	{
		// verticalDeadzone = value;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = ___value0;
		__this->___verticalDeadzone_19 = L_0;
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterVerticalDeadzoneChange();
		VirtualActionInvoker0::Invoke(41 /* System.Void Tilia.Input.CombinedActions.AxesToAngleAction::OnAfterVerticalDeadzoneChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Tilia.Input.CombinedActions.AxesToAngleActionConfigurator Tilia.Input.CombinedActions.AxesToAngleAction::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* AxesToAngleAction_get_Configuration_mDD434767738F877906A2E8FAFE2B74F80D02CDAF (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// return configuration;
		AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* L_0 = __this->___configuration_20;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::set_Configuration(Tilia.Input.CombinedActions.AxesToAngleActionConfigurator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_set_Configuration_m0212891328AADD08AEBEEF00A392C6133C054A40 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* ___value0, const RuntimeMethod* method) 
{
	{
		// configuration = value;
		AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* L_0 = ___value0;
		__this->___configuration_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___configuration_20), (void*)L_0);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::ClearHorizontalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_ClearHorizontalAxis_mE68FB134A74D3ECF4AE6602B85FC63A3533AE550 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.IsValidState())
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (L_0)
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
		// HorizontalAxis = default;
		AxesToAngleAction_set_HorizontalAxis_m8B3FBEC2B98A5CFD788DB344A8B2373440BBB45C(__this, (FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::ClearVerticalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_ClearVerticalAxis_m1DD814B5561D03C01B6464BEDB820E4E39AB9430 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.IsValidState())
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (L_0)
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
		// VerticalAxis = default;
		AxesToAngleAction_set_VerticalAxis_mD781AF88A0DB60D017716A79DA92976CCD8EA287(__this, (FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::ClearDirectionOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_ClearDirectionOffset_mDCC34885373AF0F1306B03977538D6C4B22C6529 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.IsValidState())
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (L_0)
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
		// DirectionOffset = default;
		AxesToAngleAction_set_DirectionOffset_mDE367716FE87CB844312A478C6B47FEF58BF60B4(__this, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::SetHorizontalDeadzoneMinimum(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_SetHorizontalDeadzoneMinimum_m4A1719721DD3864376792C96CEC407BAE92A03CA (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, float ___value0, const RuntimeMethod* method) 
{
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// FloatRange newLimit = new FloatRange(HorizontalDeadzone.ToVector2());
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0;
		L_0 = AxesToAngleAction_get_HorizontalDeadzone_m211828DA0DCFF1B33C907B5EFE0277A8105A1EB0_inline(__this, NULL);
		V_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = FloatRange_ToVector2_mA6331BC9B152FE4A253BB255BFA81D9CB2EFB3BC((&V_1), NULL);
		FloatRange__ctor_m9D7B3370CA720B47C8217AEC17FAC0A2F10F9EC8((&V_0), L_1, NULL);
		// newLimit.minimum = value;
		float L_2 = ___value0;
		(&V_0)->___minimum_0 = L_2;
		// HorizontalDeadzone = newLimit;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_3 = V_0;
		AxesToAngleAction_set_HorizontalDeadzone_m7A7EC9CCC72C997D9DCB8C27FE4C705C55439BDD(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::SetHorizontalDeadzoneMaximum(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_SetHorizontalDeadzoneMaximum_mDEBCFCB33212BC232905B7F3D2E0AC38B40C25A8 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, float ___value0, const RuntimeMethod* method) 
{
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// FloatRange newLimit = new FloatRange(HorizontalDeadzone.ToVector2());
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0;
		L_0 = AxesToAngleAction_get_HorizontalDeadzone_m211828DA0DCFF1B33C907B5EFE0277A8105A1EB0_inline(__this, NULL);
		V_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = FloatRange_ToVector2_mA6331BC9B152FE4A253BB255BFA81D9CB2EFB3BC((&V_1), NULL);
		FloatRange__ctor_m9D7B3370CA720B47C8217AEC17FAC0A2F10F9EC8((&V_0), L_1, NULL);
		// newLimit.maximum = value;
		float L_2 = ___value0;
		(&V_0)->___maximum_1 = L_2;
		// HorizontalDeadzone = newLimit;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_3 = V_0;
		AxesToAngleAction_set_HorizontalDeadzone_m7A7EC9CCC72C997D9DCB8C27FE4C705C55439BDD(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::SetVerticalDeadzoneMinimum(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_SetVerticalDeadzoneMinimum_m2A17CD9BCBA9EDADC82824519C91A01E492A5659 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, float ___value0, const RuntimeMethod* method) 
{
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// FloatRange newLimit = new FloatRange(VerticalDeadzone.ToVector2());
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0;
		L_0 = AxesToAngleAction_get_VerticalDeadzone_m8ADD2634B760D34E280D0EF6CAC26B54143E6074_inline(__this, NULL);
		V_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = FloatRange_ToVector2_mA6331BC9B152FE4A253BB255BFA81D9CB2EFB3BC((&V_1), NULL);
		FloatRange__ctor_m9D7B3370CA720B47C8217AEC17FAC0A2F10F9EC8((&V_0), L_1, NULL);
		// newLimit.minimum = value;
		float L_2 = ___value0;
		(&V_0)->___minimum_0 = L_2;
		// VerticalDeadzone = newLimit;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_3 = V_0;
		AxesToAngleAction_set_VerticalDeadzone_m77F4ABFCBDCED9EEF6D5D2BEDC779EBDF24FB233(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::SetVerticalDeadzoneMaximum(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_SetVerticalDeadzoneMaximum_mFF19C692174BFF08DB74603B30CCAC5614746BC3 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, float ___value0, const RuntimeMethod* method) 
{
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// FloatRange newLimit = new FloatRange(VerticalDeadzone.ToVector2());
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0;
		L_0 = AxesToAngleAction_get_VerticalDeadzone_m8ADD2634B760D34E280D0EF6CAC26B54143E6074_inline(__this, NULL);
		V_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = FloatRange_ToVector2_mA6331BC9B152FE4A253BB255BFA81D9CB2EFB3BC((&V_1), NULL);
		FloatRange__ctor_m9D7B3370CA720B47C8217AEC17FAC0A2F10F9EC8((&V_0), L_1, NULL);
		// newLimit.maximum = value;
		float L_2 = ___value0;
		(&V_0)->___maximum_1 = L_2;
		// VerticalDeadzone = newLimit;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_3 = V_0;
		AxesToAngleAction_set_VerticalDeadzone_m77F4ABFCBDCED9EEF6D5D2BEDC779EBDF24FB233(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_OnEnable_mEF15CB55DBB5D46C8299F4EC106F788A071FCAB4 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_OnEnable_m9BF2F0CA105ED1C1823A8CE159D17795F94D7C82_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		Action_3_OnEnable_m9BF2F0CA105ED1C1823A8CE159D17795F94D7C82(__this, Action_3_OnEnable_m9BF2F0CA105ED1C1823A8CE159D17795F94D7C82_RuntimeMethod_var);
		// Configuration.SetHorizontalInputSource(HorizontalAxis);
		AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* L_0;
		L_0 = AxesToAngleAction_get_Configuration_mDD434767738F877906A2E8FAFE2B74F80D02CDAF_inline(__this, NULL);
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_1;
		L_1 = AxesToAngleAction_get_HorizontalAxis_mBCE835E77C856EA36A8A736FFAE064C12BA67CC9_inline(__this, NULL);
		VirtualActionInvoker1< FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* >::Invoke(4 /* System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetHorizontalInputSource(Zinnia.Action.FloatAction) */, L_0, L_1);
		// Configuration.SetVerticalInputSource(VerticalAxis);
		AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* L_2;
		L_2 = AxesToAngleAction_get_Configuration_mDD434767738F877906A2E8FAFE2B74F80D02CDAF_inline(__this, NULL);
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_3;
		L_3 = AxesToAngleAction_get_VerticalAxis_m05495E616380DBFF672CD2B69559D3C35F362BE7_inline(__this, NULL);
		VirtualActionInvoker1< FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* >::Invoke(5 /* System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetVerticalInputSource(Zinnia.Action.FloatAction) */, L_2, L_3);
		// Configuration.SetHorizontalDeadzone(HorizontalDeadzone);
		AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* L_4;
		L_4 = AxesToAngleAction_get_Configuration_mDD434767738F877906A2E8FAFE2B74F80D02CDAF_inline(__this, NULL);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_5;
		L_5 = AxesToAngleAction_get_HorizontalDeadzone_m211828DA0DCFF1B33C907B5EFE0277A8105A1EB0_inline(__this, NULL);
		VirtualActionInvoker1< FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 >::Invoke(6 /* System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetHorizontalDeadzone(Zinnia.Data.Type.FloatRange) */, L_4, L_5);
		// Configuration.SetVerticalDeadzone(VerticalDeadzone);
		AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* L_6;
		L_6 = AxesToAngleAction_get_Configuration_mDD434767738F877906A2E8FAFE2B74F80D02CDAF_inline(__this, NULL);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_7;
		L_7 = AxesToAngleAction_get_VerticalDeadzone_m8ADD2634B760D34E280D0EF6CAC26B54143E6074_inline(__this, NULL);
		VirtualActionInvoker1< FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 >::Invoke(7 /* System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetVerticalDeadzone(Zinnia.Data.Type.FloatRange) */, L_6, L_7);
		// Configuration.SetDirectionExtractorSource(DirectionOffset);
		AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* L_8;
		L_8 = AxesToAngleAction_get_Configuration_mDD434767738F877906A2E8FAFE2B74F80D02CDAF_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = AxesToAngleAction_get_DirectionOffset_m1F81BE1D34387C1DA056099D7F7961BCE6FBAAC4_inline(__this, NULL);
		VirtualActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(8 /* System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetDirectionExtractorSource(UnityEngine.GameObject) */, L_8, L_9);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::OnAfterHorizontalAxisChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_OnAfterHorizontalAxisChange_m0A70E3BCC3D59A18140669A64D7C24CEC2B3234B (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.SetHorizontalInputSource(HorizontalAxis);
		AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* L_0;
		L_0 = AxesToAngleAction_get_Configuration_mDD434767738F877906A2E8FAFE2B74F80D02CDAF_inline(__this, NULL);
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_1;
		L_1 = AxesToAngleAction_get_HorizontalAxis_mBCE835E77C856EA36A8A736FFAE064C12BA67CC9_inline(__this, NULL);
		VirtualActionInvoker1< FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* >::Invoke(4 /* System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetHorizontalInputSource(Zinnia.Action.FloatAction) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::OnAfterVerticalAxisChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_OnAfterVerticalAxisChange_m1D48916BEB03D1139E913432BEA66DAE1D43DA4F (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.SetVerticalInputSource(VerticalAxis);
		AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* L_0;
		L_0 = AxesToAngleAction_get_Configuration_mDD434767738F877906A2E8FAFE2B74F80D02CDAF_inline(__this, NULL);
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_1;
		L_1 = AxesToAngleAction_get_VerticalAxis_m05495E616380DBFF672CD2B69559D3C35F362BE7_inline(__this, NULL);
		VirtualActionInvoker1< FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* >::Invoke(5 /* System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetVerticalInputSource(Zinnia.Action.FloatAction) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::OnAfterHorizontalDeadzoneChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_OnAfterHorizontalDeadzoneChange_m3A53BB9569CC2D8A5201304DE110B6DE57035548 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.SetHorizontalDeadzone(HorizontalDeadzone);
		AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* L_0;
		L_0 = AxesToAngleAction_get_Configuration_mDD434767738F877906A2E8FAFE2B74F80D02CDAF_inline(__this, NULL);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_1;
		L_1 = AxesToAngleAction_get_HorizontalDeadzone_m211828DA0DCFF1B33C907B5EFE0277A8105A1EB0_inline(__this, NULL);
		VirtualActionInvoker1< FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 >::Invoke(6 /* System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetHorizontalDeadzone(Zinnia.Data.Type.FloatRange) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::OnAfterVerticalDeadzoneChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_OnAfterVerticalDeadzoneChange_m6C2D1A04773155DD74A753B1A5FB14D94531808F (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.SetVerticalDeadzone(VerticalDeadzone);
		AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* L_0;
		L_0 = AxesToAngleAction_get_Configuration_mDD434767738F877906A2E8FAFE2B74F80D02CDAF_inline(__this, NULL);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_1;
		L_1 = AxesToAngleAction_get_VerticalDeadzone_m8ADD2634B760D34E280D0EF6CAC26B54143E6074_inline(__this, NULL);
		VirtualActionInvoker1< FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 >::Invoke(7 /* System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetVerticalDeadzone(Zinnia.Data.Type.FloatRange) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::OnAfterDirectionOffsetChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction_OnAfterDirectionOffsetChange_m1FE170DABFBCFA29573B09F37DF914A6785EA14C (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.SetDirectionExtractorSource(DirectionOffset);
		AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* L_0;
		L_0 = AxesToAngleAction_get_Configuration_mDD434767738F877906A2E8FAFE2B74F80D02CDAF_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = AxesToAngleAction_get_DirectionOffset_m1F81BE1D34387C1DA056099D7F7961BCE6FBAAC4_inline(__this, NULL);
		VirtualActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(8 /* System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetDirectionExtractorSource(UnityEngine.GameObject) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleAction__ctor_m08D3ED99E34D2315A35E9E053FD28E76A48A56A7 (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// private FloatRange horizontalDeadzone = new FloatRange(-0.75f, 0.75f);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0;
		memset((&L_0), 0, sizeof(L_0));
		FloatRange__ctor_m5BE869766743FCAC8EAC2F7058C95D7B3C36CAAB((&L_0), (-0.75f), (0.75f), /*hidden argument*/NULL);
		__this->___horizontalDeadzone_18 = L_0;
		// private FloatRange verticalDeadzone = new FloatRange(-0.75f, 0.75f);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_1;
		memset((&L_1), 0, sizeof(L_1));
		FloatRange__ctor_m5BE869766743FCAC8EAC2F7058C95D7B3C36CAAB((&L_1), (-0.75f), (0.75f), /*hidden argument*/NULL);
		__this->___verticalDeadzone_19 = L_1;
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
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::get_HorizontalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToAngleActionConfigurator_get_HorizontalAxis_m49C4818E76163BEE00405E7A9AAA5699C822C4AB (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, const RuntimeMethod* method) 
{
	{
		// return horizontalAxis;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___horizontalAxis_4;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::set_HorizontalAxis(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleActionConfigurator_set_HorizontalAxis_mCD94759D50485B9C04D16A57BF2B0E2167B8A200 (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___value0, const RuntimeMethod* method) 
{
	{
		// horizontalAxis = value;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = ___value0;
		__this->___horizontalAxis_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___horizontalAxis_4), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::get_VerticalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToAngleActionConfigurator_get_VerticalAxis_m6F585630F53F2578C67FCE999E214B8A19D07232 (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, const RuntimeMethod* method) 
{
	{
		// return verticalAxis;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___verticalAxis_5;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::set_VerticalAxis(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleActionConfigurator_set_VerticalAxis_m4FCAF97756625F891F285A2DC0B2E1DB820162AF (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___value0, const RuntimeMethod* method) 
{
	{
		// verticalAxis = value;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = ___value0;
		__this->___verticalAxis_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___verticalAxis_5), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::get_HorizontalDeadZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToAngleActionConfigurator_get_HorizontalDeadZone_mA0414A5AFE2C1CB095FEBFA6D727673EE68E21BE (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, const RuntimeMethod* method) 
{
	{
		// return horizontalDeadZone;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___horizontalDeadZone_6;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::set_HorizontalDeadZone(Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleActionConfigurator_set_HorizontalDeadZone_mF0946CEE48C29E24A5DB04414001407F056E3B33 (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___value0, const RuntimeMethod* method) 
{
	{
		// horizontalDeadZone = value;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = ___value0;
		__this->___horizontalDeadZone_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___horizontalDeadZone_6), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::get_VerticalDeadZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToAngleActionConfigurator_get_VerticalDeadZone_mC41970EC828808EA7B396579E2DBD3E24F0CD639 (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, const RuntimeMethod* method) 
{
	{
		// return verticalDeadZone;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___verticalDeadZone_7;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::set_VerticalDeadZone(Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleActionConfigurator_set_VerticalDeadZone_m98F973CE53B6B954EF1531F48D5CF72B1DABD701 (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___value0, const RuntimeMethod* method) 
{
	{
		// verticalDeadZone = value;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = ___value0;
		__this->___verticalDeadZone_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___verticalDeadZone_7), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Data.Operation.Extraction.TransformDirectionExtractor Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::get_DirectionExtractor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformDirectionExtractor_t3AA9CE6D1CB334660C8215EA5177ED26BD2A40DF* AxesToAngleActionConfigurator_get_DirectionExtractor_m0E60A930D2A3F66AC54C0C82B7480A1C44E70E79 (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, const RuntimeMethod* method) 
{
	{
		// return directionExtractor;
		TransformDirectionExtractor_t3AA9CE6D1CB334660C8215EA5177ED26BD2A40DF* L_0 = __this->___directionExtractor_8;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::set_DirectionExtractor(Zinnia.Data.Operation.Extraction.TransformDirectionExtractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleActionConfigurator_set_DirectionExtractor_mB352FDE9989A63F9B5F551DE32C2EDE96578947D (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, TransformDirectionExtractor_t3AA9CE6D1CB334660C8215EA5177ED26BD2A40DF* ___value0, const RuntimeMethod* method) 
{
	{
		// directionExtractor = value;
		TransformDirectionExtractor_t3AA9CE6D1CB334660C8215EA5177ED26BD2A40DF* L_0 = ___value0;
		__this->___directionExtractor_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___directionExtractor_8), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Data.Type.Transformation.Conversion.Vector2ToAngle Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::get_AngleConverter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2ToAngle_t6A541CEF5664FF054E348618F764576A36605D58* AxesToAngleActionConfigurator_get_AngleConverter_m4DCB21255D3B825D1C069A7CAC84A38533018349 (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, const RuntimeMethod* method) 
{
	{
		// return angleConverter;
		Vector2ToAngle_t6A541CEF5664FF054E348618F764576A36605D58* L_0 = __this->___angleConverter_9;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::set_AngleConverter(Zinnia.Data.Type.Transformation.Conversion.Vector2ToAngle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleActionConfigurator_set_AngleConverter_m45688423C019DD64908E907F498064A89813A8C8 (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, Vector2ToAngle_t6A541CEF5664FF054E348618F764576A36605D58* ___value0, const RuntimeMethod* method) 
{
	{
		// angleConverter = value;
		Vector2ToAngle_t6A541CEF5664FF054E348618F764576A36605D58* L_0 = ___value0;
		__this->___angleConverter_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___angleConverter_9), (void*)L_0);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetHorizontalInputSource(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleActionConfigurator_SetHorizontalInputSource_mDB09599B7B44F2E0CDB0B52DA26F8449CDD98DFD (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___source0, const RuntimeMethod* method) 
{
	{
		// SetInputSource(source, HorizontalAxis);
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = ___source0;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_1;
		L_1 = AxesToAngleActionConfigurator_get_HorizontalAxis_m49C4818E76163BEE00405E7A9AAA5699C822C4AB_inline(__this, NULL);
		VirtualActionInvoker2< FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62*, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* >::Invoke(9 /* System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetInputSource(Zinnia.Action.FloatAction,Zinnia.Action.FloatAction) */, __this, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetVerticalInputSource(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleActionConfigurator_SetVerticalInputSource_m8714D85FC6B20C52E878CF229D20892E466CA53B (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___source0, const RuntimeMethod* method) 
{
	{
		// SetInputSource(source, VerticalAxis);
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = ___source0;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_1;
		L_1 = AxesToAngleActionConfigurator_get_VerticalAxis_m6F585630F53F2578C67FCE999E214B8A19D07232_inline(__this, NULL);
		VirtualActionInvoker2< FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62*, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* >::Invoke(9 /* System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetInputSource(Zinnia.Action.FloatAction,Zinnia.Action.FloatAction) */, __this, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetHorizontalDeadzone(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleActionConfigurator_SetHorizontalDeadzone_mFAD60487CFFB4ACA4B48BD1EC395F137B63C7686 (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___source0, const RuntimeMethod* method) 
{
	{
		// SetDeadzone(source, HorizontalDeadZone);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = ___source0;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_1;
		L_1 = AxesToAngleActionConfigurator_get_HorizontalDeadZone_mA0414A5AFE2C1CB095FEBFA6D727673EE68E21BE_inline(__this, NULL);
		VirtualActionInvoker2< FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* >::Invoke(10 /* System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetDeadzone(Zinnia.Data.Type.FloatRange,Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean) */, __this, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetVerticalDeadzone(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleActionConfigurator_SetVerticalDeadzone_mE306402FD0573A4CDBF0A527FBEF39DBF0B745FB (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___source0, const RuntimeMethod* method) 
{
	{
		// SetDeadzone(source, VerticalDeadZone);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = ___source0;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_1;
		L_1 = AxesToAngleActionConfigurator_get_VerticalDeadZone_mC41970EC828808EA7B396579E2DBD3E24F0CD639_inline(__this, NULL);
		VirtualActionInvoker2< FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* >::Invoke(10 /* System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetDeadzone(Zinnia.Data.Type.FloatRange,Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean) */, __this, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetDirectionExtractorSource(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleActionConfigurator_SetDirectionExtractorSource_m655CF5EDF2DE9E0EF5D0C0BDE986DDA24A259AA5 (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueExtractor_4_set_Source_m3910C9654E352031B208803EE63C04BE7C9FEB6F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DirectionExtractor.Source = source;
		TransformDirectionExtractor_t3AA9CE6D1CB334660C8215EA5177ED26BD2A40DF* L_0;
		L_0 = AxesToAngleActionConfigurator_get_DirectionExtractor_m0E60A930D2A3F66AC54C0C82B7480A1C44E70E79_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___source0;
		ValueExtractor_4_set_Source_m3910C9654E352031B208803EE63C04BE7C9FEB6F_inline(L_0, L_1, ValueExtractor_4_set_Source_m3910C9654E352031B208803EE63C04BE7C9FEB6F_RuntimeMethod_var);
		// DirectionExtractor.gameObject.SetActive(source != null);
		TransformDirectionExtractor_t3AA9CE6D1CB334660C8215EA5177ED26BD2A40DF* L_2;
		L_2 = AxesToAngleActionConfigurator_get_DirectionExtractor_m0E60A930D2A3F66AC54C0C82B7480A1C44E70E79_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___source0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetInputSource(Zinnia.Action.FloatAction,Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleActionConfigurator_SetInputSource_mBD9EE4FD85E09EC4A2EF13552183C8D023AE63DB (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___source0, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___target1, const RuntimeMethod* method) 
{
	{
		// target.ClearSources();
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = ___target1;
		VirtualActionInvoker0::Invoke(8 /* System.Void Zinnia.Action.Action::ClearSources() */, L_0);
		// target.AddSource(source);
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_1 = ___target1;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_2 = ___source0;
		VirtualActionInvoker1< Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70* >::Invoke(6 /* System.Void Zinnia.Action.Action::AddSource(Zinnia.Action.Action) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::SetDeadzone(Zinnia.Data.Type.FloatRange,Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleActionConfigurator_SetDeadzone_m3353CF91BC7135E470B72667714C9C36139FC8ED (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___source0, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___target1, const RuntimeMethod* method) 
{
	{
		// target.SetPositiveBounds(source.ToVector2());
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = ___target1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = FloatRange_ToVector2_mA6331BC9B152FE4A253BB255BFA81D9CB2EFB3BC((&___source0), NULL);
		VirtualActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(9 /* System.Void Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean::SetPositiveBounds(UnityEngine.Vector2) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToAngleActionConfigurator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToAngleActionConfigurator__ctor_m5FFD25E2B7F6AF1801DE7C54120486A4938AED8E (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, const RuntimeMethod* method) 
{
	{
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
// Tilia.Input.CombinedActions.AxesToVector3Action/InputHandler Tilia.Input.CombinedActions.AxesToVector3Action::get_InputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AxesToVector3Action_get_InputType_mE9DE409FB42AF086C0629D84EE1AB01C82434BE8 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return inputType;
		int32_t L_0 = __this->___inputType_15;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_InputType(Tilia.Input.CombinedActions.AxesToVector3Action/InputHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_InputType_mCDF2FA3BCB86308B19806424FC9603525E4F21E7 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// inputType = value;
		int32_t L_0 = ___value0;
		__this->___inputType_15 = L_0;
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterInputTypeChange();
		VirtualActionInvoker0::Invoke(46 /* System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnAfterInputTypeChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToVector3Action::get_LateralAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToVector3Action_get_LateralAxis_m4135CF40645F9DD36E64B243F0B2ADFF193EDDF2 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return lateralAxis;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___lateralAxis_16;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_LateralAxis(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_LateralAxis_mFBF6E29DD231312194FFF8278B97F326CBC52B80 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___value0, const RuntimeMethod* method) 
{
	{
		// lateralAxis = value;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = ___value0;
		__this->___lateralAxis_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lateralAxis_16), (void*)L_0);
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterLateralAxisChange();
		VirtualActionInvoker0::Invoke(47 /* System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnAfterLateralAxisChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToVector3Action::get_VerticalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToVector3Action_get_VerticalAxis_mE0DEE110790B28F9705B95F052F3F213B87C5B13 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return verticalAxis;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___verticalAxis_17;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_VerticalAxis(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_VerticalAxis_m6FF2A32709D769EAC4A1FA678E4935828B455B92 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___value0, const RuntimeMethod* method) 
{
	{
		// verticalAxis = value;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = ___value0;
		__this->___verticalAxis_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___verticalAxis_17), (void*)L_0);
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterVerticalAxisChange();
		VirtualActionInvoker0::Invoke(48 /* System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnAfterVerticalAxisChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToVector3Action::get_LongitudinalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToVector3Action_get_LongitudinalAxis_m66ADC8AFD646C25DA7F0EA1881ABDC8036FD8422 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return longitudinalAxis;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___longitudinalAxis_18;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_LongitudinalAxis(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_LongitudinalAxis_m85DBA758138ED4ABF8B626E1E2A4E52F71F1DEF7 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___value0, const RuntimeMethod* method) 
{
	{
		// longitudinalAxis = value;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = ___value0;
		__this->___longitudinalAxis_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___longitudinalAxis_18), (void*)L_0);
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterLongitudinalAxisChange();
		VirtualActionInvoker0::Invoke(49 /* System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnAfterLongitudinalAxisChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Tilia.Input.CombinedActions.AxesToVector3Action::get_Multiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 AxesToVector3Action_get_Multiplier_m34A0C49F824016E2AF5747B472F3203907D0ACEB (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return multiplier;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___multiplier_19;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_Multiplier(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_Multiplier_m5B75F1FA57843F8F784F9E741FCB9E83B70ECFEC (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// multiplier = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___multiplier_19 = L_0;
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterMultiplierChange();
		VirtualActionInvoker0::Invoke(50 /* System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnAfterMultiplierChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Data.Operation.Extraction.TimeComponentExtractor/TimeComponent Tilia.Input.CombinedActions.AxesToVector3Action::get_TimeMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AxesToVector3Action_get_TimeMultiplier_m6245648AD8ABE3D2B3C4CC11DDFD85072C4E8DA1 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return timeMultiplier;
		int32_t L_0 = __this->___timeMultiplier_20;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_TimeMultiplier(Zinnia.Data.Operation.Extraction.TimeComponentExtractor/TimeComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_TimeMultiplier_mBFE1A0F182515CF2F49F99E5A71552A4E6E953DC (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// timeMultiplier = value;
		int32_t L_0 = ___value0;
		__this->___timeMultiplier_20 = L_0;
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterTimeMultiplierChange();
		VirtualActionInvoker0::Invoke(51 /* System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnAfterTimeMultiplierChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Tilia.Input.CombinedActions.AxesToVector3Action/DeadzoneType Tilia.Input.CombinedActions.AxesToVector3Action::get_DeadzoneCalculation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AxesToVector3Action_get_DeadzoneCalculation_mECDBA3AC3563DED5CAD6913B4640BE90FFEF8314 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return deadzoneCalculation;
		int32_t L_0 = __this->___deadzoneCalculation_21;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_DeadzoneCalculation(Tilia.Input.CombinedActions.AxesToVector3Action/DeadzoneType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_DeadzoneCalculation_m7FABFA4CDA9FFF56ABC1CD2D2EEB1E87B7705023 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// deadzoneCalculation = value;
		int32_t L_0 = ___value0;
		__this->___deadzoneCalculation_21 = L_0;
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterDeadzoneCalculationChange();
		VirtualActionInvoker0::Invoke(52 /* System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnAfterDeadzoneCalculationChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AxesToVector3Action::get_LateralDeadzone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AxesToVector3Action_get_LateralDeadzone_m1092B53FDB1903A34EB23D027DD2F1293BC10E35 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return lateralDeadzone;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = __this->___lateralDeadzone_22;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_LateralDeadzone(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_LateralDeadzone_m6B1C597688EEC636809B8203B6EFBE436B9EAEAA (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___value0, const RuntimeMethod* method) 
{
	{
		// lateralDeadzone = value;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = ___value0;
		__this->___lateralDeadzone_22 = L_0;
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterLateralDeadzoneChange();
		VirtualActionInvoker0::Invoke(53 /* System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnAfterLateralDeadzoneChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AxesToVector3Action::get_VerticalDeadzone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AxesToVector3Action_get_VerticalDeadzone_mA6825F9C3FB3AAA56CD1C561C9C1F37F0776A0D7 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return verticalDeadzone;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = __this->___verticalDeadzone_23;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_VerticalDeadzone(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_VerticalDeadzone_mCB3C89C341E140E19382852FCE5547176D7F3610 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___value0, const RuntimeMethod* method) 
{
	{
		// verticalDeadzone = value;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = ___value0;
		__this->___verticalDeadzone_23 = L_0;
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterVerticalDeadzoneChange();
		VirtualActionInvoker0::Invoke(54 /* System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnAfterVerticalDeadzoneChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Data.Type.FloatRange Tilia.Input.CombinedActions.AxesToVector3Action::get_LongitudinalDeadzone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AxesToVector3Action_get_LongitudinalDeadzone_m106ADA1A94681F706833071EF9F70A2FA0B933B4 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return longitudinalDeadzone;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = __this->___longitudinalDeadzone_24;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_LongitudinalDeadzone(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_LongitudinalDeadzone_m009B3FF6A48EAA5C729D539B20D172F835018A79 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___value0, const RuntimeMethod* method) 
{
	{
		// longitudinalDeadzone = value;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = ___value0;
		__this->___longitudinalDeadzone_24 = L_0;
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterLongitudinalDeadzoneChange();
		VirtualActionInvoker0::Invoke(55 /* System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnAfterLongitudinalDeadzoneChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator Tilia.Input.CombinedActions.AxesToVector3Action::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return configuration;
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_0 = __this->___configuration_25;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::set_Configuration(Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_set_Configuration_m6EDBD2AF6E0DB1D7AB187563979D9B00018FDCA0 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* ___value0, const RuntimeMethod* method) 
{
	{
		// configuration = value;
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_0 = ___value0;
		__this->___configuration_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___configuration_25), (void*)L_0);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::ClearLateralAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_ClearLateralAxis_m04D90DBF68C07880B6BC8974A4ACB5D0049307C8 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.IsValidState())
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (L_0)
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
		// LateralAxis = default;
		AxesToVector3Action_set_LateralAxis_mFBF6E29DD231312194FFF8278B97F326CBC52B80(__this, (FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::ClearVerticalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_ClearVerticalAxis_mEA6C640338FFEC34421651058A62CC677BF7B682 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.IsValidState())
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (L_0)
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
		// VerticalAxis = default;
		AxesToVector3Action_set_VerticalAxis_m6FF2A32709D769EAC4A1FA678E4935828B455B92(__this, (FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::ClearLongitudinalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_ClearLongitudinalAxis_m275ACBE8B3BDE3979E1EF3483B5ED5EC1E95C03A (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.IsValidState())
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (L_0)
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
		// LongitudinalAxis = default;
		AxesToVector3Action_set_LongitudinalAxis_m85DBA758138ED4ABF8B626E1E2A4E52F71F1DEF7(__this, (FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::SetInputType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_SetInputType_m2807901E67D4A2660C242C8DC99C7148764CFDE5 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, int32_t ___inputTypeIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputHandler_t60907A5A6041DE36CABD99173FB08B488A1F4E9E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputType = (InputHandler)Mathf.Clamp(inputTypeIndex, 0, System.Enum.GetValues(typeof(InputHandler)).Length);
		int32_t L_0 = ___inputTypeIndex0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (InputHandler_t60907A5A6041DE36CABD99173FB08B488A1F4E9E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_3;
		L_3 = Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9(L_2, NULL);
		int32_t L_4;
		L_4 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_3, NULL);
		int32_t L_5;
		L_5 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_0, 0, L_4, NULL);
		AxesToVector3Action_set_InputType_mCDF2FA3BCB86308B19806424FC9603525E4F21E7(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::SetMultiplierX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_SetMultiplierX_m729E91A58196A1A8B429E1E3969C5FFFA1E62624 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// Multiplier = new Vector3(value, Multiplier.y, Multiplier.z);
		float L_0 = ___value0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = AxesToVector3Action_get_Multiplier_m34A0C49F824016E2AF5747B472F3203907D0ACEB_inline(__this, NULL);
		float L_2 = L_1.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = AxesToVector3Action_get_Multiplier_m34A0C49F824016E2AF5747B472F3203907D0ACEB_inline(__this, NULL);
		float L_4 = L_3.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_0, L_2, L_4, /*hidden argument*/NULL);
		AxesToVector3Action_set_Multiplier_m5B75F1FA57843F8F784F9E741FCB9E83B70ECFEC(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::SetMultiplierY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_SetMultiplierY_m34EE97658A9905BE7369FFF8829877C9B2D32D18 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// Multiplier = new Vector3(Multiplier.x, value, Multiplier.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = AxesToVector3Action_get_Multiplier_m34A0C49F824016E2AF5747B472F3203907D0ACEB_inline(__this, NULL);
		float L_1 = L_0.___x_2;
		float L_2 = ___value0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = AxesToVector3Action_get_Multiplier_m34A0C49F824016E2AF5747B472F3203907D0ACEB_inline(__this, NULL);
		float L_4 = L_3.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_1, L_2, L_4, /*hidden argument*/NULL);
		AxesToVector3Action_set_Multiplier_m5B75F1FA57843F8F784F9E741FCB9E83B70ECFEC(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::SetMultiplierZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_SetMultiplierZ_m72C3E554161682156851C39C977967E41BC46BDF (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// Multiplier = new Vector3(Multiplier.x, Multiplier.y, value);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = AxesToVector3Action_get_Multiplier_m34A0C49F824016E2AF5747B472F3203907D0ACEB_inline(__this, NULL);
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = AxesToVector3Action_get_Multiplier_m34A0C49F824016E2AF5747B472F3203907D0ACEB_inline(__this, NULL);
		float L_3 = L_2.___y_3;
		float L_4 = ___value0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_1, L_3, L_4, /*hidden argument*/NULL);
		AxesToVector3Action_set_Multiplier_m5B75F1FA57843F8F784F9E741FCB9E83B70ECFEC(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::SetTimeMultiplier(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_SetTimeMultiplier_mF4138B361741A3CB037B0EC3604E4E294804AC3C (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, int32_t ___timeMultiplierIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumExtensions_GetByIndex_TisTimeComponent_tCAD9DA47599BCE5914D683378F4848E1B9AB8721_mE2BF396BE08E2BAC129F47952D3D29D38F78EFA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TimeMultiplier = EnumExtensions.GetByIndex<TimeComponentExtractor.TimeComponent>(timeMultiplierIndex);
		int32_t L_0 = ___timeMultiplierIndex0;
		int32_t L_1;
		L_1 = EnumExtensions_GetByIndex_TisTimeComponent_tCAD9DA47599BCE5914D683378F4848E1B9AB8721_mE2BF396BE08E2BAC129F47952D3D29D38F78EFA2(L_0, EnumExtensions_GetByIndex_TisTimeComponent_tCAD9DA47599BCE5914D683378F4848E1B9AB8721_mE2BF396BE08E2BAC129F47952D3D29D38F78EFA2_RuntimeMethod_var);
		AxesToVector3Action_set_TimeMultiplier_mBFE1A0F182515CF2F49F99E5A71552A4E6E953DC(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::SetDeadzoneCalculation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_SetDeadzoneCalculation_m2DF781719ECEA506880F9AD1BC067E50C04D0A55 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, int32_t ___deadzoneTypeIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeadzoneType_t257B4F7C59AD1442C1C87D5BBB5BD221A9321E79_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DeadzoneCalculation = (DeadzoneType)Mathf.Clamp(deadzoneTypeIndex, 0, System.Enum.GetValues(typeof(DeadzoneType)).Length);
		int32_t L_0 = ___deadzoneTypeIndex0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (DeadzoneType_t257B4F7C59AD1442C1C87D5BBB5BD221A9321E79_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_3;
		L_3 = Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9(L_2, NULL);
		int32_t L_4;
		L_4 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_3, NULL);
		int32_t L_5;
		L_5 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_0, 0, L_4, NULL);
		AxesToVector3Action_set_DeadzoneCalculation_m7FABFA4CDA9FFF56ABC1CD2D2EEB1E87B7705023(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::SetLateralDeadzoneMinimum(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_SetLateralDeadzoneMinimum_m143A7F9A20763136401E55D937E1FBB50B26AFC4 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, float ___value0, const RuntimeMethod* method) 
{
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// FloatRange newLimit = new FloatRange(LateralDeadzone.ToVector2());
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0;
		L_0 = AxesToVector3Action_get_LateralDeadzone_m1092B53FDB1903A34EB23D027DD2F1293BC10E35_inline(__this, NULL);
		V_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = FloatRange_ToVector2_mA6331BC9B152FE4A253BB255BFA81D9CB2EFB3BC((&V_1), NULL);
		FloatRange__ctor_m9D7B3370CA720B47C8217AEC17FAC0A2F10F9EC8((&V_0), L_1, NULL);
		// newLimit.minimum = value;
		float L_2 = ___value0;
		(&V_0)->___minimum_0 = L_2;
		// LateralDeadzone = newLimit;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_3 = V_0;
		AxesToVector3Action_set_LateralDeadzone_m6B1C597688EEC636809B8203B6EFBE436B9EAEAA(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::SetLateralDeadzoneMaximum(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_SetLateralDeadzoneMaximum_m28B3FFD249CBFDEB83D477255E8A855076A804DA (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, float ___value0, const RuntimeMethod* method) 
{
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// FloatRange newLimit = new FloatRange(LateralDeadzone.ToVector2());
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0;
		L_0 = AxesToVector3Action_get_LateralDeadzone_m1092B53FDB1903A34EB23D027DD2F1293BC10E35_inline(__this, NULL);
		V_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = FloatRange_ToVector2_mA6331BC9B152FE4A253BB255BFA81D9CB2EFB3BC((&V_1), NULL);
		FloatRange__ctor_m9D7B3370CA720B47C8217AEC17FAC0A2F10F9EC8((&V_0), L_1, NULL);
		// newLimit.maximum = value;
		float L_2 = ___value0;
		(&V_0)->___maximum_1 = L_2;
		// LateralDeadzone = newLimit;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_3 = V_0;
		AxesToVector3Action_set_LateralDeadzone_m6B1C597688EEC636809B8203B6EFBE436B9EAEAA(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::SetVerticalDeadzoneMinimum(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_SetVerticalDeadzoneMinimum_m191C2708D71B4E7E6E0412FFB7509AD18DA709EC (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, float ___value0, const RuntimeMethod* method) 
{
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// FloatRange newLimit = new FloatRange(VerticalDeadzone.ToVector2());
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0;
		L_0 = AxesToVector3Action_get_VerticalDeadzone_mA6825F9C3FB3AAA56CD1C561C9C1F37F0776A0D7_inline(__this, NULL);
		V_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = FloatRange_ToVector2_mA6331BC9B152FE4A253BB255BFA81D9CB2EFB3BC((&V_1), NULL);
		FloatRange__ctor_m9D7B3370CA720B47C8217AEC17FAC0A2F10F9EC8((&V_0), L_1, NULL);
		// newLimit.minimum = value;
		float L_2 = ___value0;
		(&V_0)->___minimum_0 = L_2;
		// VerticalDeadzone = newLimit;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_3 = V_0;
		AxesToVector3Action_set_VerticalDeadzone_mCB3C89C341E140E19382852FCE5547176D7F3610(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::SetVerticalDeadzoneMaximum(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_SetVerticalDeadzoneMaximum_m742922AADDCE5BFB798044E1BEB55D89F9A75AC3 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, float ___value0, const RuntimeMethod* method) 
{
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// FloatRange newLimit = new FloatRange(VerticalDeadzone.ToVector2());
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0;
		L_0 = AxesToVector3Action_get_VerticalDeadzone_mA6825F9C3FB3AAA56CD1C561C9C1F37F0776A0D7_inline(__this, NULL);
		V_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = FloatRange_ToVector2_mA6331BC9B152FE4A253BB255BFA81D9CB2EFB3BC((&V_1), NULL);
		FloatRange__ctor_m9D7B3370CA720B47C8217AEC17FAC0A2F10F9EC8((&V_0), L_1, NULL);
		// newLimit.maximum = value;
		float L_2 = ___value0;
		(&V_0)->___maximum_1 = L_2;
		// VerticalDeadzone = newLimit;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_3 = V_0;
		AxesToVector3Action_set_VerticalDeadzone_mCB3C89C341E140E19382852FCE5547176D7F3610(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::SetLongitudinalDeadzoneMinimum(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_SetLongitudinalDeadzoneMinimum_m0714A4399FD07E697F0BEE51045D9E11D48C6172 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, float ___value0, const RuntimeMethod* method) 
{
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// FloatRange newLimit = new FloatRange(LongitudinalDeadzone.ToVector2());
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0;
		L_0 = AxesToVector3Action_get_LongitudinalDeadzone_m106ADA1A94681F706833071EF9F70A2FA0B933B4_inline(__this, NULL);
		V_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = FloatRange_ToVector2_mA6331BC9B152FE4A253BB255BFA81D9CB2EFB3BC((&V_1), NULL);
		FloatRange__ctor_m9D7B3370CA720B47C8217AEC17FAC0A2F10F9EC8((&V_0), L_1, NULL);
		// newLimit.minimum = value;
		float L_2 = ___value0;
		(&V_0)->___minimum_0 = L_2;
		// LongitudinalDeadzone = newLimit;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_3 = V_0;
		AxesToVector3Action_set_LongitudinalDeadzone_m009B3FF6A48EAA5C729D539B20D172F835018A79(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::SetLongitudinalDeadzoneMaximum(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_SetLongitudinalDeadzoneMaximum_m53AC67B7D0E255AD60C899454D38BC9CC93787DA (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, float ___value0, const RuntimeMethod* method) 
{
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// FloatRange newLimit = new FloatRange(LongitudinalDeadzone.ToVector2());
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0;
		L_0 = AxesToVector3Action_get_LongitudinalDeadzone_m106ADA1A94681F706833071EF9F70A2FA0B933B4_inline(__this, NULL);
		V_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = FloatRange_ToVector2_mA6331BC9B152FE4A253BB255BFA81D9CB2EFB3BC((&V_1), NULL);
		FloatRange__ctor_m9D7B3370CA720B47C8217AEC17FAC0A2F10F9EC8((&V_0), L_1, NULL);
		// newLimit.maximum = value;
		float L_2 = ___value0;
		(&V_0)->___maximum_1 = L_2;
		// LongitudinalDeadzone = newLimit;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_3 = V_0;
		AxesToVector3Action_set_LongitudinalDeadzone_m009B3FF6A48EAA5C729D539B20D172F835018A79(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_OnEnable_m833736FF40839F85989E0D0F8D443CE8AAC83715 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_OnEnable_m18429DF3342C68B091CF1520A5964A17C3DCF82C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		Action_3_OnEnable_m18429DF3342C68B091CF1520A5964A17C3DCF82C(__this, Action_3_OnEnable_m18429DF3342C68B091CF1520A5964A17C3DCF82C_RuntimeMethod_var);
		// Configuration.SetInputType(InputType);
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_0;
		L_0 = AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline(__this, NULL);
		int32_t L_1;
		L_1 = AxesToVector3Action_get_InputType_mE9DE409FB42AF086C0629D84EE1AB01C82434BE8_inline(__this, NULL);
		VirtualActionInvoker1< int32_t >::Invoke(7 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetInputType(Tilia.Input.CombinedActions.AxesToVector3Action/InputHandler) */, L_0, L_1);
		// Configuration.SetLateralAxisSource(LateralAxis);
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_2;
		L_2 = AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline(__this, NULL);
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_3;
		L_3 = AxesToVector3Action_get_LateralAxis_m4135CF40645F9DD36E64B243F0B2ADFF193EDDF2_inline(__this, NULL);
		VirtualActionInvoker1< FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* >::Invoke(4 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetLateralAxisSource(Zinnia.Action.FloatAction) */, L_2, L_3);
		// Configuration.SetVerticalAxisSource(VerticalAxis);
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_4;
		L_4 = AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline(__this, NULL);
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_5;
		L_5 = AxesToVector3Action_get_VerticalAxis_mE0DEE110790B28F9705B95F052F3F213B87C5B13_inline(__this, NULL);
		VirtualActionInvoker1< FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* >::Invoke(5 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetVerticalAxisSource(Zinnia.Action.FloatAction) */, L_4, L_5);
		// Configuration.SetLongitudinalAxisSource(LongitudinalAxis);
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_6;
		L_6 = AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline(__this, NULL);
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_7;
		L_7 = AxesToVector3Action_get_LongitudinalAxis_m66ADC8AFD646C25DA7F0EA1881ABDC8036FD8422_inline(__this, NULL);
		VirtualActionInvoker1< FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* >::Invoke(6 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetLongitudinalAxisSource(Zinnia.Action.FloatAction) */, L_6, L_7);
		// Configuration.SetMultiplier(Multiplier);
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_8;
		L_8 = AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = AxesToVector3Action_get_Multiplier_m34A0C49F824016E2AF5747B472F3203907D0ACEB_inline(__this, NULL);
		VirtualActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(8 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetMultiplier(UnityEngine.Vector3) */, L_8, L_9);
		// Configuration.SetTimeMultiplier(TimeMultiplier);
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_10;
		L_10 = AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline(__this, NULL);
		int32_t L_11;
		L_11 = AxesToVector3Action_get_TimeMultiplier_m6245648AD8ABE3D2B3C4CC11DDFD85072C4E8DA1_inline(__this, NULL);
		VirtualActionInvoker1< int32_t >::Invoke(13 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetTimeMultiplier(Zinnia.Data.Operation.Extraction.TimeComponentExtractor/TimeComponent) */, L_10, L_11);
		// Configuration.SetDeadzoneCalculation(DeadzoneCalculation);
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_12;
		L_12 = AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline(__this, NULL);
		int32_t L_13;
		L_13 = AxesToVector3Action_get_DeadzoneCalculation_mECDBA3AC3563DED5CAD6913B4640BE90FFEF8314_inline(__this, NULL);
		VirtualActionInvoker1< int32_t >::Invoke(9 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetDeadzoneCalculation(Tilia.Input.CombinedActions.AxesToVector3Action/DeadzoneType) */, L_12, L_13);
		// Configuration.SetLateralDeadzone(LateralDeadzone);
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_14;
		L_14 = AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline(__this, NULL);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_15;
		L_15 = AxesToVector3Action_get_LateralDeadzone_m1092B53FDB1903A34EB23D027DD2F1293BC10E35_inline(__this, NULL);
		VirtualActionInvoker1< FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 >::Invoke(10 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetLateralDeadzone(Zinnia.Data.Type.FloatRange) */, L_14, L_15);
		// Configuration.SetVerticalDeadzone(VerticalDeadzone);
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_16;
		L_16 = AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline(__this, NULL);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_17;
		L_17 = AxesToVector3Action_get_VerticalDeadzone_mA6825F9C3FB3AAA56CD1C561C9C1F37F0776A0D7_inline(__this, NULL);
		VirtualActionInvoker1< FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 >::Invoke(11 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetVerticalDeadzone(Zinnia.Data.Type.FloatRange) */, L_16, L_17);
		// Configuration.SetLongitudinalDeadzone(LongitudinalDeadzone);
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_18;
		L_18 = AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline(__this, NULL);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_19;
		L_19 = AxesToVector3Action_get_LongitudinalDeadzone_m106ADA1A94681F706833071EF9F70A2FA0B933B4_inline(__this, NULL);
		VirtualActionInvoker1< FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 >::Invoke(12 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetLongitudinalDeadzone(Zinnia.Data.Type.FloatRange) */, L_18, L_19);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnAfterInputTypeChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_OnAfterInputTypeChange_mBE6F19187AB15729EF6B92B75560FB9591A5451E (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.SetInputType(InputType);
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_0;
		L_0 = AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline(__this, NULL);
		int32_t L_1;
		L_1 = AxesToVector3Action_get_InputType_mE9DE409FB42AF086C0629D84EE1AB01C82434BE8_inline(__this, NULL);
		VirtualActionInvoker1< int32_t >::Invoke(7 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetInputType(Tilia.Input.CombinedActions.AxesToVector3Action/InputHandler) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnAfterLateralAxisChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_OnAfterLateralAxisChange_m9F24BE85FE85B3AF464716F176793027749C5EBB (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.SetLateralAxisSource(LateralAxis);
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_0;
		L_0 = AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline(__this, NULL);
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_1;
		L_1 = AxesToVector3Action_get_LateralAxis_m4135CF40645F9DD36E64B243F0B2ADFF193EDDF2_inline(__this, NULL);
		VirtualActionInvoker1< FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* >::Invoke(4 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetLateralAxisSource(Zinnia.Action.FloatAction) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnAfterVerticalAxisChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_OnAfterVerticalAxisChange_m7F25ABA66759296A00C0BDF2C48F8C6A1D7C8E0E (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.SetVerticalAxisSource(VerticalAxis);
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_0;
		L_0 = AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline(__this, NULL);
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_1;
		L_1 = AxesToVector3Action_get_VerticalAxis_mE0DEE110790B28F9705B95F052F3F213B87C5B13_inline(__this, NULL);
		VirtualActionInvoker1< FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* >::Invoke(5 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetVerticalAxisSource(Zinnia.Action.FloatAction) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnAfterLongitudinalAxisChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_OnAfterLongitudinalAxisChange_m3B9510A9FAF9A576AC7F2F4ACF83D495AA6D2816 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.SetLongitudinalAxisSource(LongitudinalAxis);
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_0;
		L_0 = AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline(__this, NULL);
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_1;
		L_1 = AxesToVector3Action_get_LongitudinalAxis_m66ADC8AFD646C25DA7F0EA1881ABDC8036FD8422_inline(__this, NULL);
		VirtualActionInvoker1< FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* >::Invoke(6 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetLongitudinalAxisSource(Zinnia.Action.FloatAction) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnAfterMultiplierChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_OnAfterMultiplierChange_m18EF367FFF158C513D0F0E61E3F834BCE45EEC0A (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.SetMultiplier(Multiplier);
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_0;
		L_0 = AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = AxesToVector3Action_get_Multiplier_m34A0C49F824016E2AF5747B472F3203907D0ACEB_inline(__this, NULL);
		VirtualActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(8 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetMultiplier(UnityEngine.Vector3) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnAfterTimeMultiplierChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_OnAfterTimeMultiplierChange_mC85887F0D6872FA46B274701618C54F99598383F (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.SetTimeMultiplier(TimeMultiplier);
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_0;
		L_0 = AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline(__this, NULL);
		int32_t L_1;
		L_1 = AxesToVector3Action_get_TimeMultiplier_m6245648AD8ABE3D2B3C4CC11DDFD85072C4E8DA1_inline(__this, NULL);
		VirtualActionInvoker1< int32_t >::Invoke(13 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetTimeMultiplier(Zinnia.Data.Operation.Extraction.TimeComponentExtractor/TimeComponent) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnAfterDeadzoneCalculationChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_OnAfterDeadzoneCalculationChange_m01340ACB40AFAD4C8EFC59E6A6685FB3848D0F4F (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.SetDeadzoneCalculation(DeadzoneCalculation);
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_0;
		L_0 = AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline(__this, NULL);
		int32_t L_1;
		L_1 = AxesToVector3Action_get_DeadzoneCalculation_mECDBA3AC3563DED5CAD6913B4640BE90FFEF8314_inline(__this, NULL);
		VirtualActionInvoker1< int32_t >::Invoke(9 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetDeadzoneCalculation(Tilia.Input.CombinedActions.AxesToVector3Action/DeadzoneType) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnAfterLateralDeadzoneChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_OnAfterLateralDeadzoneChange_m4296B4392E51389596637A628F0E58D825B8BCC2 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.SetLateralDeadzone(LateralDeadzone);
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_0;
		L_0 = AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline(__this, NULL);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_1;
		L_1 = AxesToVector3Action_get_LateralDeadzone_m1092B53FDB1903A34EB23D027DD2F1293BC10E35_inline(__this, NULL);
		VirtualActionInvoker1< FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 >::Invoke(10 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetLateralDeadzone(Zinnia.Data.Type.FloatRange) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnAfterVerticalDeadzoneChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_OnAfterVerticalDeadzoneChange_m0A02C62E0C0CC8757DC9A7C0A75940177965E518 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.SetVerticalDeadzone(VerticalDeadzone);
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_0;
		L_0 = AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline(__this, NULL);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_1;
		L_1 = AxesToVector3Action_get_VerticalDeadzone_mA6825F9C3FB3AAA56CD1C561C9C1F37F0776A0D7_inline(__this, NULL);
		VirtualActionInvoker1< FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 >::Invoke(11 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetVerticalDeadzone(Zinnia.Data.Type.FloatRange) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::OnAfterLongitudinalDeadzoneChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action_OnAfterLongitudinalDeadzoneChange_m97C823DAD7BD1CCE6A51D6E75B599563D8372460 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.SetLongitudinalDeadzone(LongitudinalDeadzone);
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_0;
		L_0 = AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline(__this, NULL);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_1;
		L_1 = AxesToVector3Action_get_LongitudinalDeadzone_m106ADA1A94681F706833071EF9F70A2FA0B933B4_inline(__this, NULL);
		VirtualActionInvoker1< FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 >::Invoke(12 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetLongitudinalDeadzone(Zinnia.Data.Type.FloatRange) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3Action::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3Action__ctor_mFE49F1BA9512690BE6784D56BA6BEFEF1DEA5BA4 (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 multiplier = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->___multiplier_19 = L_0;
		// private FloatRange lateralDeadzone = new FloatRange(-0.5f, 0.5f);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_1;
		memset((&L_1), 0, sizeof(L_1));
		FloatRange__ctor_m5BE869766743FCAC8EAC2F7058C95D7B3C36CAAB((&L_1), (-0.5f), (0.5f), /*hidden argument*/NULL);
		__this->___lateralDeadzone_22 = L_1;
		// private FloatRange verticalDeadzone = new FloatRange(-0.5f, 0.5f);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_2;
		memset((&L_2), 0, sizeof(L_2));
		FloatRange__ctor_m5BE869766743FCAC8EAC2F7058C95D7B3C36CAAB((&L_2), (-0.5f), (0.5f), /*hidden argument*/NULL);
		__this->___verticalDeadzone_23 = L_2;
		// private FloatRange longitudinalDeadzone = new FloatRange(-0.5f, 0.5f);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_3;
		memset((&L_3), 0, sizeof(L_3));
		FloatRange__ctor_m5BE869766743FCAC8EAC2F7058C95D7B3C36CAAB((&L_3), (-0.5f), (0.5f), /*hidden argument*/NULL);
		__this->___longitudinalDeadzone_24 = L_3;
		Vector3Action__ctor_m786AB0C784AAEBBCEB4FACFDE26F5E225AF72D56(__this, NULL);
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
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_LateralAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToVector3ActionConfigurator_get_LateralAction_m0EAE38250ED60E3173136C6256450EB44FFA2C29 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return lateralAction;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___lateralAction_4;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_LateralAction(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_LateralAction_m5806076F26A354E8A1C6B31DAA925BBA3772E56F (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___value0, const RuntimeMethod* method) 
{
	{
		// lateralAction = value;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = ___value0;
		__this->___lateralAction_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lateralAction_4), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_VerticalAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToVector3ActionConfigurator_get_VerticalAction_m5E4FEEC880AB16ED1F6F1844261C968A5CA6A1A3 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return verticalAction;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___verticalAction_5;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_VerticalAction(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_VerticalAction_m877C85C4DF94BEBA1568E1E808A20A04DAA3DC56 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___value0, const RuntimeMethod* method) 
{
	{
		// verticalAction = value;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = ___value0;
		__this->___verticalAction_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___verticalAction_5), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Action.FloatAction Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_LongitudinalAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToVector3ActionConfigurator_get_LongitudinalAction_m945CF825910D07FD4DF11530644C30446FDD0CFB (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return longitudinalAction;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___longitudinalAction_6;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_LongitudinalAction(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_LongitudinalAction_m131A2113D165371C36FC0B27345B754958F39188 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___value0, const RuntimeMethod* method) 
{
	{
		// longitudinalAction = value;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = ___value0;
		__this->___longitudinalAction_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___longitudinalAction_6), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_AutoConfigureBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AxesToVector3ActionConfigurator_get_AutoConfigureBounds_m9FE35E076AFCD6F9A1ABE475C7CD5F9FF3E4AE95 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return autoConfigureBounds;
		bool L_0 = __this->___autoConfigureBounds_7;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_AutoConfigureBounds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_AutoConfigureBounds_m1CC9D24AC947423DD002B845D3FA2663A3D03075 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// autoConfigureBounds = value;
		bool L_0 = ___value0;
		__this->___autoConfigureBounds_7 = L_0;
		// }
		return;
	}
}
// System.Single Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_BoundOverlap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AxesToVector3ActionConfigurator_get_BoundOverlap_m73A78EDF7330903409809978D4FC5E8ED36CC54A (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return boundOverlap;
		float L_0 = __this->___boundOverlap_8;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_BoundOverlap(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_BoundOverlap_m09D4DD44CA82C70510D22B57FDA32568E29A67C9 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// boundOverlap = value;
		float L_0 = ___value0;
		__this->___boundOverlap_8 = L_0;
		// }
		return;
	}
}
// Zinnia.Data.Collection.List.Vector3ObservableList Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_Multiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3ObservableList_t36F67A591E2C1F3138097AB27B9A9977B0DE9067* AxesToVector3ActionConfigurator_get_Multiplier_mCDBA6B7562FCFD2AE04E5C3408875E163741BA23 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return multiplier;
		Vector3ObservableList_t36F67A591E2C1F3138097AB27B9A9977B0DE9067* L_0 = __this->___multiplier_9;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_Multiplier(Zinnia.Data.Collection.List.Vector3ObservableList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_Multiplier_mE4B44241557B7D079790B84251A75DED547D2838 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, Vector3ObservableList_t36F67A591E2C1F3138097AB27B9A9977B0DE9067* ___value0, const RuntimeMethod* method) 
{
	{
		// multiplier = value;
		Vector3ObservableList_t36F67A591E2C1F3138097AB27B9A9977B0DE9067* L_0 = ___value0;
		__this->___multiplier_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___multiplier_9), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.GameObject Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_IncrementalContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AxesToVector3ActionConfigurator_get_IncrementalContainer_mB679DB9B8EDCAD8FF1A7C4DFBCCE3C1796AB6FBC (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return incrementalContainer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___incrementalContainer_10;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_IncrementalContainer(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_IncrementalContainer_mD6C83EEB10D6FDA541FEE7DA055A577C9AD77838 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// incrementalContainer = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___incrementalContainer_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___incrementalContainer_10), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.GameObject Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_DirectionalContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AxesToVector3ActionConfigurator_get_DirectionalContainer_m23244930602D50E232A4C7765A8E39DAFD4EF22D (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return directionalContainer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___directionalContainer_11;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_DirectionalContainer(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_DirectionalContainer_m2972B0D74FAF9C7BF8143674BDF45878906EF626 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// directionalContainer = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___directionalContainer_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___directionalContainer_11), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.GameObject Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_SingleAxisDeadzoneContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AxesToVector3ActionConfigurator_get_SingleAxisDeadzoneContainer_mED16D805FEDDE1ADA35F24DD36D5B124C465745F (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return singleAxisDeadzoneContainer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___singleAxisDeadzoneContainer_12;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_SingleAxisDeadzoneContainer(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_SingleAxisDeadzoneContainer_mC2EBB858BE81D8E349060293E5EFE3A85AA9C9F7 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// singleAxisDeadzoneContainer = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___singleAxisDeadzoneContainer_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___singleAxisDeadzoneContainer_12), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.GameObject Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_CombinedAxisDeadzoneContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AxesToVector3ActionConfigurator_get_CombinedAxisDeadzoneContainer_mF8D9205E20AEF542C86D02BDE22DF8F52C6E81DE (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return combinedAxisDeadzoneContainer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___combinedAxisDeadzoneContainer_13;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_CombinedAxisDeadzoneContainer(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_CombinedAxisDeadzoneContainer_m27AE04F1357EF6452536C7FECCAB954717124A9F (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// combinedAxisDeadzoneContainer = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___combinedAxisDeadzoneContainer_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___combinedAxisDeadzoneContainer_13), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean[] Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_LateralDeadZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* AxesToVector3ActionConfigurator_get_LateralDeadZone_m18051A38EFDBDA32C8C7906456E153FC3CB5B5F6 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return lateralDeadZone;
		FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* L_0 = __this->___lateralDeadZone_14;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_LateralDeadZone(Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_LateralDeadZone_m418B6408A20E38AF7FD1490CF44F9281CD42DFC3 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* ___value0, const RuntimeMethod* method) 
{
	{
		// lateralDeadZone = value;
		FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* L_0 = ___value0;
		__this->___lateralDeadZone_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lateralDeadZone_14), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_LateralPositiveBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_LateralPositiveBounds_m3C4AC20E8DF295395ADE479265E57D88E1643CB4 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return lateralPositiveBounds;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___lateralPositiveBounds_15;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_LateralPositiveBounds(Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_LateralPositiveBounds_m642BECEA8BA71FC091624FA5893E6F5516190FF8 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___value0, const RuntimeMethod* method) 
{
	{
		// lateralPositiveBounds = value;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = ___value0;
		__this->___lateralPositiveBounds_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lateralPositiveBounds_15), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_LateralNegativeBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_LateralNegativeBounds_m935DC58A127F99262ED9EC179FD3353B6D05F2F4 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return lateralNegativeBounds;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___lateralNegativeBounds_16;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_LateralNegativeBounds(Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_LateralNegativeBounds_mB583FD9797EE86EA57A8897A117CB93FD776254B (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___value0, const RuntimeMethod* method) 
{
	{
		// lateralNegativeBounds = value;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = ___value0;
		__this->___lateralNegativeBounds_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lateralNegativeBounds_16), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_LateralBoundsManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_LateralBoundsManager_m6820E2C4B247C6E40165EA27077BFB096A9DC989 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return lateralBoundsManager;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___lateralBoundsManager_17;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_LateralBoundsManager(Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_LateralBoundsManager_mE6994C28AE3C7BF321B30C6B4711A68956AB2CB1 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___value0, const RuntimeMethod* method) 
{
	{
		// lateralBoundsManager = value;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = ___value0;
		__this->___lateralBoundsManager_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lateralBoundsManager_17), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean[] Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_VerticalDeadZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* AxesToVector3ActionConfigurator_get_VerticalDeadZone_mE7ACA16056D5015092C925C09D75DCF0854B4090 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return verticalDeadZone;
		FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* L_0 = __this->___verticalDeadZone_18;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_VerticalDeadZone(Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_VerticalDeadZone_mCD6CABC616FBEC989E51E72F3A700F0B81FD5297 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* ___value0, const RuntimeMethod* method) 
{
	{
		// verticalDeadZone = value;
		FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* L_0 = ___value0;
		__this->___verticalDeadZone_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___verticalDeadZone_18), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_VerticalPositiveBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_VerticalPositiveBounds_m3D392D7DF70EC83AEE5A3FE322F15697B1280A97 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return verticalPositiveBounds;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___verticalPositiveBounds_19;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_VerticalPositiveBounds(Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_VerticalPositiveBounds_mD05F06237F3C9309CA6978D2211C51357801B66D (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___value0, const RuntimeMethod* method) 
{
	{
		// verticalPositiveBounds = value;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = ___value0;
		__this->___verticalPositiveBounds_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___verticalPositiveBounds_19), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_VerticalNegativeBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_VerticalNegativeBounds_mF70D0E894A4B1534EC414085F646BE0AD487AA0F (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return verticalNegativeBounds;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___verticalNegativeBounds_20;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_VerticalNegativeBounds(Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_VerticalNegativeBounds_mD9E1F2480F1448CF7DD0A104B7321882404F8FC6 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___value0, const RuntimeMethod* method) 
{
	{
		// verticalNegativeBounds = value;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = ___value0;
		__this->___verticalNegativeBounds_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___verticalNegativeBounds_20), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_VerticalBoundsManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_VerticalBoundsManager_mD143FA097C917CC19EF6C6E0CDBD16D1D78D74DC (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return verticalBoundsManager;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___verticalBoundsManager_21;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_VerticalBoundsManager(Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_VerticalBoundsManager_m87C180193E6A754F6F6EF6B94E0C298F92AB8F41 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___value0, const RuntimeMethod* method) 
{
	{
		// verticalBoundsManager = value;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = ___value0;
		__this->___verticalBoundsManager_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___verticalBoundsManager_21), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean[] Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_LongitudinalDeadZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* AxesToVector3ActionConfigurator_get_LongitudinalDeadZone_mBE27FD7215688AA7D385D173F0160794A5D400DE (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return longitudinalDeadZone;
		FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* L_0 = __this->___longitudinalDeadZone_22;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_LongitudinalDeadZone(Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_LongitudinalDeadZone_m09FFC6A0382ED11CF178A7B23F1550533DCA1E39 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* ___value0, const RuntimeMethod* method) 
{
	{
		// longitudinalDeadZone = value;
		FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* L_0 = ___value0;
		__this->___longitudinalDeadZone_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___longitudinalDeadZone_22), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_LongitudinalPositiveBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_LongitudinalPositiveBounds_mC5AEF7B755CE20539E84D2EA69ED001F12F035EF (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return longitudinalPositiveBounds;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___longitudinalPositiveBounds_23;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_LongitudinalPositiveBounds(Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_LongitudinalPositiveBounds_mB4E5654DF000565FEF710E93D4EB946996635B7E (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___value0, const RuntimeMethod* method) 
{
	{
		// longitudinalPositiveBounds = value;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = ___value0;
		__this->___longitudinalPositiveBounds_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___longitudinalPositiveBounds_23), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_LongitudinalNegativeBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_LongitudinalNegativeBounds_mCC4DA93E1B0051BAB5564D6A736A49047D581543 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return longitudinalNegativeBounds;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___longitudinalNegativeBounds_24;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_LongitudinalNegativeBounds(Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_LongitudinalNegativeBounds_m54B65AD4064BFCFEF040BDB24E93333795E8D67F (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___value0, const RuntimeMethod* method) 
{
	{
		// longitudinalNegativeBounds = value;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = ___value0;
		__this->___longitudinalNegativeBounds_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___longitudinalNegativeBounds_24), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_LongitudinalBoundsManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_LongitudinalBoundsManager_m4060430DC4EC4638BB43C342B15E776B8E3BCA72 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return longitudinalBoundsManager;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___longitudinalBoundsManager_25;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_LongitudinalBoundsManager(Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_LongitudinalBoundsManager_mC4055A5E64B70A348C39BAD1E8F785AD937410BA (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___value0, const RuntimeMethod* method) 
{
	{
		// longitudinalBoundsManager = value;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = ___value0;
		__this->___longitudinalBoundsManager_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___longitudinalBoundsManager_25), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Data.Operation.Extraction.TimeComponentExtractor Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::get_TimeExtractor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeComponentExtractor_t430415B148F995BEBE599003E9504E27E82B4874* AxesToVector3ActionConfigurator_get_TimeExtractor_mF2CFA764689E5CD105224EDBEF7EAA11F96AE44D (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return timeExtractor;
		TimeComponentExtractor_t430415B148F995BEBE599003E9504E27E82B4874* L_0 = __this->___timeExtractor_26;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::set_TimeExtractor(Zinnia.Data.Operation.Extraction.TimeComponentExtractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_set_TimeExtractor_m166FA134019CD20FA8F46FD5B1D5675A2561B343 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, TimeComponentExtractor_t430415B148F995BEBE599003E9504E27E82B4874* ___value0, const RuntimeMethod* method) 
{
	{
		// timeExtractor = value;
		TimeComponentExtractor_t430415B148F995BEBE599003E9504E27E82B4874* L_0 = ___value0;
		__this->___timeExtractor_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timeExtractor_26), (void*)L_0);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetLateralAxisSource(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_SetLateralAxisSource_m85E308A057B9237FC2F8DDA27AECAF5542841C22 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___source0, const RuntimeMethod* method) 
{
	{
		// SetInputSource(source, LateralAction);
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = ___source0;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_1;
		L_1 = AxesToVector3ActionConfigurator_get_LateralAction_m0EAE38250ED60E3173136C6256450EB44FFA2C29_inline(__this, NULL);
		VirtualActionInvoker2< FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62*, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* >::Invoke(15 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetInputSource(Zinnia.Action.FloatAction,Zinnia.Action.FloatAction) */, __this, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetVerticalAxisSource(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_SetVerticalAxisSource_mEC6F47D11ECEE8645C6B9ED6776FC3A780E5C0B3 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___source0, const RuntimeMethod* method) 
{
	{
		// SetInputSource(source, VerticalAction);
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = ___source0;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_1;
		L_1 = AxesToVector3ActionConfigurator_get_VerticalAction_m5E4FEEC880AB16ED1F6F1844261C968A5CA6A1A3_inline(__this, NULL);
		VirtualActionInvoker2< FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62*, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* >::Invoke(15 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetInputSource(Zinnia.Action.FloatAction,Zinnia.Action.FloatAction) */, __this, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetLongitudinalAxisSource(Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_SetLongitudinalAxisSource_m5E3F1C5F561AB37B0C7D42CA5ADB4C601343D32B (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___source0, const RuntimeMethod* method) 
{
	{
		// SetInputSource(source, LongitudinalAction);
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = ___source0;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_1;
		L_1 = AxesToVector3ActionConfigurator_get_LongitudinalAction_m945CF825910D07FD4DF11530644C30446FDD0CFB_inline(__this, NULL);
		VirtualActionInvoker2< FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62*, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* >::Invoke(15 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetInputSource(Zinnia.Action.FloatAction,Zinnia.Action.FloatAction) */, __this, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetInputType(Tilia.Input.CombinedActions.AxesToVector3Action/InputHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_SetInputType_mBCEE8CDDAA1BADE20782DEFDFAD75977E26E61BE (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, int32_t ___inputType0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___inputType0;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___inputType0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		return;
	}

IL_0008:
	{
		// DirectionalContainer.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = AxesToVector3ActionConfigurator_get_DirectionalContainer_m23244930602D50E232A4C7765A8E39DAFD4EF22D_inline(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// IncrementalContainer.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = AxesToVector3ActionConfigurator_get_IncrementalContainer_mB679DB9B8EDCAD8FF1A7C4DFBCCE3C1796AB6FBC_inline(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// break;
		return;
	}

IL_0021:
	{
		// IncrementalContainer.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = AxesToVector3ActionConfigurator_get_IncrementalContainer_mB679DB9B8EDCAD8FF1A7C4DFBCCE3C1796AB6FBC_inline(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// DirectionalContainer.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = AxesToVector3ActionConfigurator_get_DirectionalContainer_m23244930602D50E232A4C7765A8E39DAFD4EF22D_inline(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetMultiplier(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_SetMultiplier_mB1F94862DCF209971265108582B372E52445EA9C (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___multiplier0, const RuntimeMethod* method) 
{
	{
		// Multiplier.SetAt(multiplier, 2);
		Vector3ObservableList_t36F67A591E2C1F3138097AB27B9A9977B0DE9067* L_0;
		L_0 = AxesToVector3ActionConfigurator_get_Multiplier_mCDBA6B7562FCFD2AE04E5C3408875E163741BA23_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___multiplier0;
		VirtualActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t >::Invoke(21 /* System.Void Zinnia.Data.Collection.List.ObservableList`2<UnityEngine.Vector3,Zinnia.Data.Collection.List.Vector3ObservableList/UnityEvent>::SetAt(TElement,System.Int32) */, L_0, L_1, 2);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetDeadzoneCalculation(Tilia.Input.CombinedActions.AxesToVector3Action/DeadzoneType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_SetDeadzoneCalculation_mC82B3CEEB255466051BD288503BE76748B1C3CCC (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, int32_t ___deadzoneType0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___deadzoneType0;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___deadzoneType0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		return;
	}

IL_0008:
	{
		// CombinedAxisDeadzoneContainer.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = AxesToVector3ActionConfigurator_get_CombinedAxisDeadzoneContainer_mF8D9205E20AEF542C86D02BDE22DF8F52C6E81DE_inline(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// SingleAxisDeadzoneContainer.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = AxesToVector3ActionConfigurator_get_SingleAxisDeadzoneContainer_mED16D805FEDDE1ADA35F24DD36D5B124C465745F_inline(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// break;
		return;
	}

IL_0021:
	{
		// SingleAxisDeadzoneContainer.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = AxesToVector3ActionConfigurator_get_SingleAxisDeadzoneContainer_mED16D805FEDDE1ADA35F24DD36D5B124C465745F_inline(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// CombinedAxisDeadzoneContainer.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = AxesToVector3ActionConfigurator_get_CombinedAxisDeadzoneContainer_mF8D9205E20AEF542C86D02BDE22DF8F52C6E81DE_inline(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetLateralDeadzone(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_SetLateralDeadzone_m4AB9DBFBBBFBE423BFCADB1B30440267B5B33154 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___deadzone0, const RuntimeMethod* method) 
{
	{
		// SetBounds(deadzone, LateralDeadZone, LateralPositiveBounds, LateralNegativeBounds, LateralBoundsManager);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = ___deadzone0;
		FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* L_1;
		L_1 = AxesToVector3ActionConfigurator_get_LateralDeadZone_m18051A38EFDBDA32C8C7906456E153FC3CB5B5F6_inline(__this, NULL);
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_2;
		L_2 = AxesToVector3ActionConfigurator_get_LateralPositiveBounds_m3C4AC20E8DF295395ADE479265E57D88E1643CB4_inline(__this, NULL);
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_3;
		L_3 = AxesToVector3ActionConfigurator_get_LateralNegativeBounds_m935DC58A127F99262ED9EC179FD3353B6D05F2F4_inline(__this, NULL);
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_4;
		L_4 = AxesToVector3ActionConfigurator_get_LateralBoundsManager_m6820E2C4B247C6E40165EA27077BFB096A9DC989_inline(__this, NULL);
		VirtualActionInvoker5< FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109, FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172*, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E*, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E*, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* >::Invoke(14 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetBounds(Zinnia.Data.Type.FloatRange,Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean[],Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean,Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean,Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean) */, __this, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetVerticalDeadzone(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_SetVerticalDeadzone_mE41EE782C2A39CD9A4EEA710F8B1900DF3086772 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___deadzone0, const RuntimeMethod* method) 
{
	{
		// SetBounds(deadzone, VerticalDeadZone, VerticalPositiveBounds, VerticalNegativeBounds, VerticalBoundsManager);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = ___deadzone0;
		FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* L_1;
		L_1 = AxesToVector3ActionConfigurator_get_VerticalDeadZone_mE7ACA16056D5015092C925C09D75DCF0854B4090_inline(__this, NULL);
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_2;
		L_2 = AxesToVector3ActionConfigurator_get_VerticalPositiveBounds_m3D392D7DF70EC83AEE5A3FE322F15697B1280A97_inline(__this, NULL);
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_3;
		L_3 = AxesToVector3ActionConfigurator_get_VerticalNegativeBounds_mF70D0E894A4B1534EC414085F646BE0AD487AA0F_inline(__this, NULL);
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_4;
		L_4 = AxesToVector3ActionConfigurator_get_VerticalBoundsManager_mD143FA097C917CC19EF6C6E0CDBD16D1D78D74DC_inline(__this, NULL);
		VirtualActionInvoker5< FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109, FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172*, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E*, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E*, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* >::Invoke(14 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetBounds(Zinnia.Data.Type.FloatRange,Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean[],Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean,Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean,Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean) */, __this, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetLongitudinalDeadzone(Zinnia.Data.Type.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_SetLongitudinalDeadzone_m456B4E8094FBC48F77CDA222DDFC601A84FBFC16 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___deadzone0, const RuntimeMethod* method) 
{
	{
		// SetBounds(deadzone, LongitudinalDeadZone, LongitudinalPositiveBounds, LongitudinalNegativeBounds, LongitudinalBoundsManager);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = ___deadzone0;
		FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* L_1;
		L_1 = AxesToVector3ActionConfigurator_get_LongitudinalDeadZone_mBE27FD7215688AA7D385D173F0160794A5D400DE_inline(__this, NULL);
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_2;
		L_2 = AxesToVector3ActionConfigurator_get_LongitudinalPositiveBounds_mC5AEF7B755CE20539E84D2EA69ED001F12F035EF_inline(__this, NULL);
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_3;
		L_3 = AxesToVector3ActionConfigurator_get_LongitudinalNegativeBounds_mCC4DA93E1B0051BAB5564D6A736A49047D581543_inline(__this, NULL);
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_4;
		L_4 = AxesToVector3ActionConfigurator_get_LongitudinalBoundsManager_m4060430DC4EC4638BB43C342B15E776B8E3BCA72_inline(__this, NULL);
		VirtualActionInvoker5< FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109, FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172*, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E*, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E*, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* >::Invoke(14 /* System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetBounds(Zinnia.Data.Type.FloatRange,Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean[],Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean,Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean,Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean) */, __this, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetTimeMultiplier(Zinnia.Data.Operation.Extraction.TimeComponentExtractor/TimeComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_SetTimeMultiplier_mB3646736A1FD0F9E41563F64B03D8FEDDA192316 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, int32_t ___component0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueExtractor_4_set_Source_mF2F9B7BFDE25E7E883B9F556BDB1C470115C8A4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TimeExtractor.Source = component;
		TimeComponentExtractor_t430415B148F995BEBE599003E9504E27E82B4874* L_0;
		L_0 = AxesToVector3ActionConfigurator_get_TimeExtractor_mF2CFA764689E5CD105224EDBEF7EAA11F96AE44D_inline(__this, NULL);
		int32_t L_1 = ___component0;
		ValueExtractor_4_set_Source_mF2F9B7BFDE25E7E883B9F556BDB1C470115C8A4C_inline(L_0, L_1, ValueExtractor_4_set_Source_mF2F9B7BFDE25E7E883B9F556BDB1C470115C8A4C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetBounds(Zinnia.Data.Type.FloatRange,Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean[],Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean,Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean,Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_SetBounds_m9B4C17010E6860887EF7EECE6F8CA979D51841FD (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 ___newBounds0, FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* ___deadzone1, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___positiveBounds2, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___negativeBounds3, FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* ___boundsManager4, const RuntimeMethod* method) 
{
	FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (FloatToBoolean zone in deadzone)
		FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* L_0 = ___deadzone1;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0019;
	}

IL_0006:
	{
		// foreach (FloatToBoolean zone in deadzone)
		FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// zone.SetPositiveBounds(newBounds.ToVector2());
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = FloatRange_ToVector2_mA6331BC9B152FE4A253BB255BFA81D9CB2EFB3BC((&___newBounds0), NULL);
		VirtualActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(9 /* System.Void Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean::SetPositiveBounds(UnityEngine.Vector2) */, L_4, L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0019:
	{
		// foreach (FloatToBoolean zone in deadzone)
		int32_t L_7 = V_1;
		FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// positiveBounds.SetPositiveBounds(new Vector2(newBounds.maximum, 1f));
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_9 = ___positiveBounds2;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_10 = ___newBounds0;
		float L_11 = L_10.___maximum_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_12), L_11, (1.0f), /*hidden argument*/NULL);
		VirtualActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(9 /* System.Void Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean::SetPositiveBounds(UnityEngine.Vector2) */, L_9, L_12);
		// negativeBounds.SetPositiveBounds(new Vector2(-1f, newBounds.minimum));
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_13 = ___negativeBounds3;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_14 = ___newBounds0;
		float L_15 = L_14.___minimum_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), (-1.0f), L_15, /*hidden argument*/NULL);
		VirtualActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(9 /* System.Void Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean::SetPositiveBounds(UnityEngine.Vector2) */, L_13, L_16);
		// boundsManager.SetPositiveBounds(new Vector2(Mathf.Max(-1f, newBounds.minimum - BoundOverlap), Mathf.Min(newBounds.maximum + BoundOverlap, 1f)));
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_17 = ___boundsManager4;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_18 = ___newBounds0;
		float L_19 = L_18.___minimum_0;
		float L_20;
		L_20 = AxesToVector3ActionConfigurator_get_BoundOverlap_m73A78EDF7330903409809978D4FC5E8ED36CC54A_inline(__this, NULL);
		float L_21;
		L_21 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((-1.0f), ((float)il2cpp_codegen_subtract(L_19, L_20)), NULL);
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_22 = ___newBounds0;
		float L_23 = L_22.___maximum_1;
		float L_24;
		L_24 = AxesToVector3ActionConfigurator_get_BoundOverlap_m73A78EDF7330903409809978D4FC5E8ED36CC54A_inline(__this, NULL);
		float L_25;
		L_25 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(((float)il2cpp_codegen_add(L_23, L_24)), (1.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_26), L_21, L_25, /*hidden argument*/NULL);
		VirtualActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(9 /* System.Void Zinnia.Data.Type.Transformation.Conversion.FloatToBoolean::SetPositiveBounds(UnityEngine.Vector2) */, L_17, L_26);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::SetInputSource(Zinnia.Action.FloatAction,Zinnia.Action.FloatAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator_SetInputSource_m50651C6FAD5623632F38D13467766F5D3F1605E7 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___source0, FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* ___target1, const RuntimeMethod* method) 
{
	{
		// target.ClearSources();
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = ___target1;
		VirtualActionInvoker0::Invoke(8 /* System.Void Zinnia.Action.Action::ClearSources() */, L_0);
		// target.AddSource(source);
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_1 = ___target1;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_2 = ___source0;
		VirtualActionInvoker1< Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70* >::Invoke(6 /* System.Void Zinnia.Action.Action::AddSource(Zinnia.Action.Action) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.AxesToVector3ActionConfigurator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesToVector3ActionConfigurator__ctor_mE798C1C4DBEBFD6A83F1E1D1E81B54103760B331 (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool autoConfigureBounds = true;
		__this->___autoConfigureBounds_7 = (bool)1;
		// private float boundOverlap = 0.09f;
		__this->___boundOverlap_8 = (0.0900000036f);
		// private FloatToBoolean[] lateralDeadZone = new FloatToBoolean[0];
		FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* L_0 = (FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172*)(FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172*)SZArrayNew(FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___lateralDeadZone_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lateralDeadZone_14), (void*)L_0);
		// private FloatToBoolean[] verticalDeadZone = new FloatToBoolean[0];
		FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* L_1 = (FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172*)(FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172*)SZArrayNew(FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___verticalDeadZone_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___verticalDeadZone_18), (void*)L_1);
		// private FloatToBoolean[] longitudinalDeadZone = new FloatToBoolean[0];
		FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* L_2 = (FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172*)(FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172*)SZArrayNew(FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___longitudinalDeadZone_22 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___longitudinalDeadZone_22), (void*)L_2);
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
// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.BooleanTo1DAxisAction::get_NegativeInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* BooleanTo1DAxisAction_get_NegativeInput_m8C291B26D827A43D7170F764E9ACE82B79DA24A3 (BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0* __this, const RuntimeMethod* method) 
{
	{
		// return negativeInput;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___negativeInput_15;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisAction::set_NegativeInput(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanTo1DAxisAction_set_NegativeInput_m062345E03654112190539F8DDD50A7F61ED726DC (BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___value0, const RuntimeMethod* method) 
{
	{
		// negativeInput = value;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = ___value0;
		__this->___negativeInput_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___negativeInput_15), (void*)L_0);
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterNegativeInputChange();
		VirtualActionInvoker0::Invoke(34 /* System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisAction::OnAfterNegativeInputChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.BooleanTo1DAxisAction::get_PositiveInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* BooleanTo1DAxisAction_get_PositiveInput_m2AAAAF2B86F998AA4F1B25D6249403423FE2B66D (BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0* __this, const RuntimeMethod* method) 
{
	{
		// return positiveInput;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___positiveInput_16;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisAction::set_PositiveInput(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanTo1DAxisAction_set_PositiveInput_m65EF713F2F0D4CC297E8DE8910DA5FEC47BF1DE9 (BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___value0, const RuntimeMethod* method) 
{
	{
		// positiveInput = value;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = ___value0;
		__this->___positiveInput_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___positiveInput_16), (void*)L_0);
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterPositiveInputChange();
		VirtualActionInvoker0::Invoke(33 /* System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisAction::OnAfterPositiveInputChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator Tilia.Input.CombinedActions.BooleanTo1DAxisAction::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* BooleanTo1DAxisAction_get_Configuration_mD605CEB9C5CFEC9381ECDB4333D91D2C47BB7A3D (BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0* __this, const RuntimeMethod* method) 
{
	{
		// return configuration;
		BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* L_0 = __this->___configuration_17;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisAction::set_Configuration(Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanTo1DAxisAction_set_Configuration_m61E99BCB10286A191EFAFB64BBBB7CE00107A848 (BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0* __this, BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* ___value0, const RuntimeMethod* method) 
{
	{
		// configuration = value;
		BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* L_0 = ___value0;
		__this->___configuration_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___configuration_17), (void*)L_0);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisAction::ClearNegativeInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanTo1DAxisAction_ClearNegativeInput_mD9DEC4BAC4C1A1B313B12D3CD84ACD539FEE07EC (BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.IsValidState())
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (L_0)
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
		// NegativeInput = default;
		BooleanTo1DAxisAction_set_NegativeInput_m062345E03654112190539F8DDD50A7F61ED726DC(__this, (BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisAction::ClearPositiveInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanTo1DAxisAction_ClearPositiveInput_m6DB6E428D74E96E6A0B54E3AFA31FEB1186245D5 (BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.IsValidState())
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (L_0)
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
		// PositiveInput = default;
		BooleanTo1DAxisAction_set_PositiveInput_m65EF713F2F0D4CC297E8DE8910DA5FEC47BF1DE9(__this, (BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisAction::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanTo1DAxisAction_OnEnable_m0FD43902332F626C05D0C58D7A538AA07D48478E (BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_OnEnable_m9BF2F0CA105ED1C1823A8CE159D17795F94D7C82_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		Action_3_OnEnable_m9BF2F0CA105ED1C1823A8CE159D17795F94D7C82(__this, Action_3_OnEnable_m9BF2F0CA105ED1C1823A8CE159D17795F94D7C82_RuntimeMethod_var);
		// Configuration.SetPositiveInputSource(PositiveInput);
		BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* L_0;
		L_0 = BooleanTo1DAxisAction_get_Configuration_mD605CEB9C5CFEC9381ECDB4333D91D2C47BB7A3D_inline(__this, NULL);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_1;
		L_1 = BooleanTo1DAxisAction_get_PositiveInput_m2AAAAF2B86F998AA4F1B25D6249403423FE2B66D_inline(__this, NULL);
		VirtualActionInvoker1< BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* >::Invoke(4 /* System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator::SetPositiveInputSource(Zinnia.Action.BooleanAction) */, L_0, L_1);
		// Configuration.SetNegativeInputSource(NegativeInput);
		BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* L_2;
		L_2 = BooleanTo1DAxisAction_get_Configuration_mD605CEB9C5CFEC9381ECDB4333D91D2C47BB7A3D_inline(__this, NULL);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_3;
		L_3 = BooleanTo1DAxisAction_get_NegativeInput_m8C291B26D827A43D7170F764E9ACE82B79DA24A3_inline(__this, NULL);
		VirtualActionInvoker1< BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* >::Invoke(5 /* System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator::SetNegativeInputSource(Zinnia.Action.BooleanAction) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisAction::OnAfterPositiveInputChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanTo1DAxisAction_OnAfterPositiveInputChange_m33B626FFFCE1917AB629BAB15DDC355F0AC396CD (BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.SetPositiveInputSource(PositiveInput);
		BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* L_0;
		L_0 = BooleanTo1DAxisAction_get_Configuration_mD605CEB9C5CFEC9381ECDB4333D91D2C47BB7A3D_inline(__this, NULL);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_1;
		L_1 = BooleanTo1DAxisAction_get_PositiveInput_m2AAAAF2B86F998AA4F1B25D6249403423FE2B66D_inline(__this, NULL);
		VirtualActionInvoker1< BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* >::Invoke(4 /* System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator::SetPositiveInputSource(Zinnia.Action.BooleanAction) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisAction::OnAfterNegativeInputChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanTo1DAxisAction_OnAfterNegativeInputChange_mF63F72C1C84F645F9815E75E0C7313255B32375D (BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.SetNegativeInputSource(NegativeInput);
		BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* L_0;
		L_0 = BooleanTo1DAxisAction_get_Configuration_mD605CEB9C5CFEC9381ECDB4333D91D2C47BB7A3D_inline(__this, NULL);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_1;
		L_1 = BooleanTo1DAxisAction_get_NegativeInput_m8C291B26D827A43D7170F764E9ACE82B79DA24A3_inline(__this, NULL);
		VirtualActionInvoker1< BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* >::Invoke(5 /* System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator::SetNegativeInputSource(Zinnia.Action.BooleanAction) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanTo1DAxisAction__ctor_m6122FBA2E5FC07E224C5209CA852E50671F1E420 (BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0* __this, const RuntimeMethod* method) 
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
// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator::get_NegativeInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* BooleanTo1DAxisActionConfigurator_get_NegativeInput_m3B6A4245BFAF8C65CAF89906F8EA913A0FE11CD7 (BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* __this, const RuntimeMethod* method) 
{
	{
		// return negativeInput;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___negativeInput_4;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator::set_NegativeInput(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanTo1DAxisActionConfigurator_set_NegativeInput_m6FBBBF2DEB1246DEABF2F1F2EF4904F1FE595775 (BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___value0, const RuntimeMethod* method) 
{
	{
		// negativeInput = value;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = ___value0;
		__this->___negativeInput_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___negativeInput_4), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator::get_PositiveInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* BooleanTo1DAxisActionConfigurator_get_PositiveInput_m9F6F7ED6D6BDB382E5C44CDFAE67B963E51CDA01 (BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* __this, const RuntimeMethod* method) 
{
	{
		// return positiveInput;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___positiveInput_5;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator::set_PositiveInput(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanTo1DAxisActionConfigurator_set_PositiveInput_m075C91AC618ED87FDA553BE7C2200F10C45375A5 (BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___value0, const RuntimeMethod* method) 
{
	{
		// positiveInput = value;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = ___value0;
		__this->___positiveInput_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___positiveInput_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator::SetPositiveInputSource(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanTo1DAxisActionConfigurator_SetPositiveInputSource_m345868C1EB5BBD45FBD9B4B557ADFCAE83E08F0C (BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___source0, const RuntimeMethod* method) 
{
	{
		// SetInputSource(source, PositiveInput);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = ___source0;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_1;
		L_1 = BooleanTo1DAxisActionConfigurator_get_PositiveInput_m9F6F7ED6D6BDB382E5C44CDFAE67B963E51CDA01_inline(__this, NULL);
		VirtualActionInvoker2< BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E*, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* >::Invoke(6 /* System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator::SetInputSource(Zinnia.Action.BooleanAction,Zinnia.Action.BooleanAction) */, __this, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator::SetNegativeInputSource(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanTo1DAxisActionConfigurator_SetNegativeInputSource_m507969787F2F859F34FA052DB33A0B6D838DCC35 (BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___source0, const RuntimeMethod* method) 
{
	{
		// SetInputSource(source, NegativeInput);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = ___source0;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_1;
		L_1 = BooleanTo1DAxisActionConfigurator_get_NegativeInput_m3B6A4245BFAF8C65CAF89906F8EA913A0FE11CD7_inline(__this, NULL);
		VirtualActionInvoker2< BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E*, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* >::Invoke(6 /* System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator::SetInputSource(Zinnia.Action.BooleanAction,Zinnia.Action.BooleanAction) */, __this, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator::SetInputSource(Zinnia.Action.BooleanAction,Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanTo1DAxisActionConfigurator_SetInputSource_m6C7CBF9386244F3CA18C70C3A9155C463F6CD7D3 (BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___source0, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___target1, const RuntimeMethod* method) 
{
	{
		// target.ClearSources();
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = ___target1;
		VirtualActionInvoker0::Invoke(8 /* System.Void Zinnia.Action.Action::ClearSources() */, L_0);
		// target.AddSource(source);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_1 = ___target1;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_2 = ___source0;
		VirtualActionInvoker1< Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70* >::Invoke(6 /* System.Void Zinnia.Action.Action::AddSource(Zinnia.Action.Action) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.BooleanTo1DAxisActionConfigurator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanTo1DAxisActionConfigurator__ctor_m7DCBCEAFC560743070D485440E913CCE65873F58 (BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* __this, const RuntimeMethod* method) 
{
	{
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
// Tilia.Input.CombinedActions.DoubleClickActionFacade Tilia.Input.CombinedActions.DoubleClickActionConfigurator::get_Facade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* DoubleClickActionConfigurator_get_Facade_mF0E2D28C2C968AB7F6662BC0986ACB391EEC52CE (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, const RuntimeMethod* method) 
{
	{
		// return facade;
		DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* L_0 = __this->___facade_4;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator::set_Facade(Tilia.Input.CombinedActions.DoubleClickActionFacade)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleClickActionConfigurator_set_Facade_mBA46E20A0EAF0A8D624BEB89CA57095E9D6D3448 (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* ___value0, const RuntimeMethod* method) 
{
	{
		// facade = value;
		DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* L_0 = ___value0;
		__this->___facade_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___facade_4), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.DoubleClickActionConfigurator::get_FirstClickAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* DoubleClickActionConfigurator_get_FirstClickAction_mBDF8063CBC3284E8B8FDB7CF62E28410B0DC31FB (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, const RuntimeMethod* method) 
{
	{
		// return firstClickAction;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___firstClickAction_5;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator::set_FirstClickAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleClickActionConfigurator_set_FirstClickAction_m23B7D018234B0E966513BBDF9C797B4478E156A5 (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___value0, const RuntimeMethod* method) 
{
	{
		// firstClickAction = value;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = ___value0;
		__this->___firstClickAction_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firstClickAction_5), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.DoubleClickActionConfigurator::get_SecondClickAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* DoubleClickActionConfigurator_get_SecondClickAction_mB1D42A7354D28E11130F2F2775FB38A85DBD05B9 (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, const RuntimeMethod* method) 
{
	{
		// return secondClickAction;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___secondClickAction_6;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator::set_SecondClickAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleClickActionConfigurator_set_SecondClickAction_m09281D1FBDAD659C3552F7F7B081F3E2A5CB6F41 (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___value0, const RuntimeMethod* method) 
{
	{
		// secondClickAction = value;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = ___value0;
		__this->___secondClickAction_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondClickAction_6), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.DoubleClickActionConfigurator::get_DoubleClickAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* DoubleClickActionConfigurator_get_DoubleClickAction_m384D6428F1F3220E3F3812BDEDD6FBFAA8EB890C (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, const RuntimeMethod* method) 
{
	{
		// return doubleClickAction;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___doubleClickAction_7;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator::set_DoubleClickAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleClickActionConfigurator_set_DoubleClickAction_m3DCC9E14BA745D66600800C25B943EB90A904E5F (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___value0, const RuntimeMethod* method) 
{
	{
		// doubleClickAction = value;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = ___value0;
		__this->___doubleClickAction_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___doubleClickAction_7), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.DoubleClickActionConfigurator::get_OutputAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* DoubleClickActionConfigurator_get_OutputAction_m9E80B512D2F3A1F586101A965AEEC820B1AA7003 (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, const RuntimeMethod* method) 
{
	{
		// return outputAction;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___outputAction_8;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator::set_OutputAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleClickActionConfigurator_set_OutputAction_m8B2124B13EAF7B0CFC82653A0C4F860BF5E3576D (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___value0, const RuntimeMethod* method) 
{
	{
		// outputAction = value;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = ___value0;
		__this->___outputAction_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputAction_8), (void*)L_0);
		// }
		return;
	}
}
// Zinnia.Utility.CountdownTimer Tilia.Input.CombinedActions.DoubleClickActionConfigurator::get_ClickTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CountdownTimer_t148B906173867D94D4423E58F690EF5723153623* DoubleClickActionConfigurator_get_ClickTimer_m86CDCE33942F4DBE499F6D379F7D828FB1269F63 (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, const RuntimeMethod* method) 
{
	{
		// return clickTimer;
		CountdownTimer_t148B906173867D94D4423E58F690EF5723153623* L_0 = __this->___clickTimer_9;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator::set_ClickTimer(Zinnia.Utility.CountdownTimer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleClickActionConfigurator_set_ClickTimer_mAC090A29552435BCFB905F004FE93FE6DC4B2388 (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, CountdownTimer_t148B906173867D94D4423E58F690EF5723153623* ___value0, const RuntimeMethod* method) 
{
	{
		// clickTimer = value;
		CountdownTimer_t148B906173867D94D4423E58F690EF5723153623* L_0 = ___value0;
		__this->___clickTimer_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clickTimer_9), (void*)L_0);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator::ConfigureSourceClickAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleClickActionConfigurator_ConfigureSourceClickAction_m6176793BFA833183AFCBC82C39126C4FA3D9BAA2 (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CConfigureSourceClickActionU3Eb__0_mCDC6E3A2F96C58E8F21705AFAC6B335741C1D7C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CConfigureSourceClickActionU3Eb__1_m9BC384AEF6AC0FB7C8E7D45C42744F4982DA4CE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CConfigureSourceClickActionU3Eb__2_mBB9E1CFAA458E3063588B98433BD665B5E4D571A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CConfigureSourceClickActionU3Eb__3_m96177C47884084CE498978C74504E0ED822CC6EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CConfigureSourceClickActionU3Eb__4_mBC818AF47C049CDBA8BEA6F7C976542275E864D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A* L_0 = (U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass24_0__ctor_m10DBDCD8C3DBB4D2C1FE14D791D2DAFE0BE645C8(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A* L_1 = V_0;
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A* L_2 = V_0;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_3 = ___source0;
		L_2->___source_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___source_1), (void*)L_3);
		// FirstClickAction.RunWhenActiveAndEnabled(() => FirstClickAction.ClearSources());
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_4;
		L_4 = DoubleClickActionConfigurator_get_FirstClickAction_mBDF8063CBC3284E8B8FDB7CF62E28410B0DC31FB_inline(__this, NULL);
		U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass24_0_U3CConfigureSourceClickActionU3Eb__0_mCDC6E3A2F96C58E8F21705AFAC6B335741C1D7C0_RuntimeMethod_var), NULL);
		BehaviourExtensions_RunWhenActiveAndEnabled_mF5AA4C49DBCD01F4BE5A7D920B1B228739858E2F(L_4, L_6, NULL);
		// FirstClickAction.RunWhenActiveAndEnabled(() => FirstClickAction.AddSource(source));
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_7;
		L_7 = DoubleClickActionConfigurator_get_FirstClickAction_mBDF8063CBC3284E8B8FDB7CF62E28410B0DC31FB_inline(__this, NULL);
		U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass24_0_U3CConfigureSourceClickActionU3Eb__1_m9BC384AEF6AC0FB7C8E7D45C42744F4982DA4CE4_RuntimeMethod_var), NULL);
		BehaviourExtensions_RunWhenActiveAndEnabled_mF5AA4C49DBCD01F4BE5A7D920B1B228739858E2F(L_7, L_9, NULL);
		// SecondClickAction.RunWhenActiveAndEnabled(() => SecondClickAction.ClearSources());
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_10;
		L_10 = DoubleClickActionConfigurator_get_SecondClickAction_mB1D42A7354D28E11130F2F2775FB38A85DBD05B9_inline(__this, NULL);
		U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A* L_11 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass24_0_U3CConfigureSourceClickActionU3Eb__2_mBB9E1CFAA458E3063588B98433BD665B5E4D571A_RuntimeMethod_var), NULL);
		BehaviourExtensions_RunWhenActiveAndEnabled_mF5AA4C49DBCD01F4BE5A7D920B1B228739858E2F(L_10, L_12, NULL);
		// SecondClickAction.RunWhenActiveAndEnabled(() => SecondClickAction.AddSource(source));
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_13;
		L_13 = DoubleClickActionConfigurator_get_SecondClickAction_mB1D42A7354D28E11130F2F2775FB38A85DBD05B9_inline(__this, NULL);
		U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A* L_14 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_15, L_14, (intptr_t)((void*)U3CU3Ec__DisplayClass24_0_U3CConfigureSourceClickActionU3Eb__3_m96177C47884084CE498978C74504E0ED822CC6EE_RuntimeMethod_var), NULL);
		BehaviourExtensions_RunWhenActiveAndEnabled_mF5AA4C49DBCD01F4BE5A7D920B1B228739858E2F(L_13, L_15, NULL);
		// SecondClickAction.RunWhenActiveAndEnabled(() => SecondClickAction.gameObject.SetActive(false));
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_16;
		L_16 = DoubleClickActionConfigurator_get_SecondClickAction_mB1D42A7354D28E11130F2F2775FB38A85DBD05B9_inline(__this, NULL);
		U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A* L_17 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_18 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_18, L_17, (intptr_t)((void*)U3CU3Ec__DisplayClass24_0_U3CConfigureSourceClickActionU3Eb__4_mBC818AF47C049CDBA8BEA6F7C976542275E864D1_RuntimeMethod_var), NULL);
		BehaviourExtensions_RunWhenActiveAndEnabled_mF5AA4C49DBCD01F4BE5A7D920B1B228739858E2F(L_16, L_18, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator::ConfigureClickTimer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleClickActionConfigurator_ConfigureClickTimer_m47002D3314CA2BE10C7036E6A26D1531E7C639DA (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, float ___clickDuration0, const RuntimeMethod* method) 
{
	{
		// ClickTimer.StartTime = clickDuration;
		CountdownTimer_t148B906173867D94D4423E58F690EF5723153623* L_0;
		L_0 = DoubleClickActionConfigurator_get_ClickTimer_m86CDCE33942F4DBE499F6D379F7D828FB1269F63_inline(__this, NULL);
		float L_1 = ___clickDuration0;
		CountdownTimer_set_StartTime_mBC5E910BE086092EE36D3A906CCC25613A9EB470(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleClickActionConfigurator_OnEnable_m5E0A7CD8EAD04B64A89FC8A449C1E33DA4EE23B5 (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, const RuntimeMethod* method) 
{
	{
		// FirstClickAction.gameObject.SetActive(true);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0;
		L_0 = DoubleClickActionConfigurator_get_FirstClickAction_mBDF8063CBC3284E8B8FDB7CF62E28410B0DC31FB_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// SecondClickAction.gameObject.SetActive(true);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_2;
		L_2 = DoubleClickActionConfigurator_get_SecondClickAction_mB1D42A7354D28E11130F2F2775FB38A85DBD05B9_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// ConfigureSourceClickAction(Facade.ControlAction);
		DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* L_4;
		L_4 = DoubleClickActionConfigurator_get_Facade_mF0E2D28C2C968AB7F6662BC0986ACB391EEC52CE_inline(__this, NULL);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_5;
		L_5 = DoubleClickActionFacade_get_ControlAction_m6C066B11F9E441684C0EEE065086714325ACCD9A_inline(L_4, NULL);
		VirtualActionInvoker1< BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* >::Invoke(4 /* System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator::ConfigureSourceClickAction(Zinnia.Action.BooleanAction) */, __this, L_5);
		// ConfigureClickTimer(Facade.ClickDuration);
		DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* L_6;
		L_6 = DoubleClickActionConfigurator_get_Facade_mF0E2D28C2C968AB7F6662BC0986ACB391EEC52CE_inline(__this, NULL);
		float L_7;
		L_7 = DoubleClickActionFacade_get_ClickDuration_m5DCF74C7CCF3BBB0FBB5859645041F5E277061BF_inline(L_6, NULL);
		VirtualActionInvoker1< float >::Invoke(5 /* System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator::ConfigureClickTimer(System.Single) */, __this, L_7);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleClickActionConfigurator__ctor_m723684F4FB14D1CD48B40B5DAD5BDBE4A5F70539 (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m10DBDCD8C3DBB4D2C1FE14D791D2DAFE0BE645C8 (U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator/<>c__DisplayClass24_0::<ConfigureSourceClickAction>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CConfigureSourceClickActionU3Eb__0_mCDC6E3A2F96C58E8F21705AFAC6B335741C1D7C0 (U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A* __this, const RuntimeMethod* method) 
{
	{
		// FirstClickAction.RunWhenActiveAndEnabled(() => FirstClickAction.ClearSources());
		DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* L_0 = __this->___U3CU3E4__this_0;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_1;
		L_1 = DoubleClickActionConfigurator_get_FirstClickAction_mBDF8063CBC3284E8B8FDB7CF62E28410B0DC31FB_inline(L_0, NULL);
		VirtualActionInvoker0::Invoke(8 /* System.Void Zinnia.Action.Action::ClearSources() */, L_1);
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator/<>c__DisplayClass24_0::<ConfigureSourceClickAction>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CConfigureSourceClickActionU3Eb__1_m9BC384AEF6AC0FB7C8E7D45C42744F4982DA4CE4 (U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A* __this, const RuntimeMethod* method) 
{
	{
		// FirstClickAction.RunWhenActiveAndEnabled(() => FirstClickAction.AddSource(source));
		DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* L_0 = __this->___U3CU3E4__this_0;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_1;
		L_1 = DoubleClickActionConfigurator_get_FirstClickAction_mBDF8063CBC3284E8B8FDB7CF62E28410B0DC31FB_inline(L_0, NULL);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_2 = __this->___source_1;
		VirtualActionInvoker1< Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70* >::Invoke(6 /* System.Void Zinnia.Action.Action::AddSource(Zinnia.Action.Action) */, L_1, L_2);
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator/<>c__DisplayClass24_0::<ConfigureSourceClickAction>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CConfigureSourceClickActionU3Eb__2_mBB9E1CFAA458E3063588B98433BD665B5E4D571A (U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A* __this, const RuntimeMethod* method) 
{
	{
		// SecondClickAction.RunWhenActiveAndEnabled(() => SecondClickAction.ClearSources());
		DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* L_0 = __this->___U3CU3E4__this_0;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_1;
		L_1 = DoubleClickActionConfigurator_get_SecondClickAction_mB1D42A7354D28E11130F2F2775FB38A85DBD05B9_inline(L_0, NULL);
		VirtualActionInvoker0::Invoke(8 /* System.Void Zinnia.Action.Action::ClearSources() */, L_1);
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator/<>c__DisplayClass24_0::<ConfigureSourceClickAction>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CConfigureSourceClickActionU3Eb__3_m96177C47884084CE498978C74504E0ED822CC6EE (U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A* __this, const RuntimeMethod* method) 
{
	{
		// SecondClickAction.RunWhenActiveAndEnabled(() => SecondClickAction.AddSource(source));
		DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* L_0 = __this->___U3CU3E4__this_0;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_1;
		L_1 = DoubleClickActionConfigurator_get_SecondClickAction_mB1D42A7354D28E11130F2F2775FB38A85DBD05B9_inline(L_0, NULL);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_2 = __this->___source_1;
		VirtualActionInvoker1< Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70* >::Invoke(6 /* System.Void Zinnia.Action.Action::AddSource(Zinnia.Action.Action) */, L_1, L_2);
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator/<>c__DisplayClass24_0::<ConfigureSourceClickAction>b__4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CConfigureSourceClickActionU3Eb__4_mBC818AF47C049CDBA8BEA6F7C976542275E864D1 (U3CU3Ec__DisplayClass24_0_tC9749B5ADEF6A0B00625FBA47F14E8E551A4C17A* __this, const RuntimeMethod* method) 
{
	{
		// SecondClickAction.RunWhenActiveAndEnabled(() => SecondClickAction.gameObject.SetActive(false));
		DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* L_0 = __this->___U3CU3E4__this_0;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_1;
		L_1 = DoubleClickActionConfigurator_get_SecondClickAction_mB1D42A7354D28E11130F2F2775FB38A85DBD05B9_inline(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
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
// Zinnia.Action.BooleanAction Tilia.Input.CombinedActions.DoubleClickActionFacade::get_ControlAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* DoubleClickActionFacade_get_ControlAction_m6C066B11F9E441684C0EEE065086714325ACCD9A (DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* __this, const RuntimeMethod* method) 
{
	{
		// return controlAction;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___controlAction_4;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionFacade::set_ControlAction(Zinnia.Action.BooleanAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleClickActionFacade_set_ControlAction_m457CA375AC29BEF3AE4CBBFBFAC47C23E29A741D (DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* __this, BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* ___value0, const RuntimeMethod* method) 
{
	{
		// controlAction = value;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = ___value0;
		__this->___controlAction_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controlAction_4), (void*)L_0);
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterControlActionChange();
		VirtualActionInvoker0::Invoke(5 /* System.Void Tilia.Input.CombinedActions.DoubleClickActionFacade::OnAfterControlActionChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Single Tilia.Input.CombinedActions.DoubleClickActionFacade::get_ClickDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DoubleClickActionFacade_get_ClickDuration_m5DCF74C7CCF3BBB0FBB5859645041F5E277061BF (DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* __this, const RuntimeMethod* method) 
{
	{
		// return clickDuration;
		float L_0 = __this->___clickDuration_5;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionFacade::set_ClickDuration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleClickActionFacade_set_ClickDuration_m4F833297ADEE65EAD61724DDFEA4E3FFB1E6AD17 (DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// clickDuration = value;
		float L_0 = ___value0;
		__this->___clickDuration_5 = L_0;
		// if (this.IsMemberChangeAllowed())
		bool L_1;
		L_1 = BehaviourExtensions_IsMemberChangeAllowed_m0D63F98866EA2A38A29E53E97A4DAA1DAB423782(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnAfterClickDurationChange();
		VirtualActionInvoker0::Invoke(6 /* System.Void Tilia.Input.CombinedActions.DoubleClickActionFacade::OnAfterClickDurationChange() */, __this);
	}

IL_0015:
	{
		// }
		return;
	}
}
// Tilia.Input.CombinedActions.DoubleClickActionConfigurator Tilia.Input.CombinedActions.DoubleClickActionFacade::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* DoubleClickActionFacade_get_Configuration_m44E77E952DEC1AB4DCF484B88491EA0D9AF3B810 (DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* __this, const RuntimeMethod* method) 
{
	{
		// return configuration;
		DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* L_0 = __this->___configuration_6;
		return L_0;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionFacade::set_Configuration(Tilia.Input.CombinedActions.DoubleClickActionConfigurator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleClickActionFacade_set_Configuration_mC57B6A7FFC338E61E63405DFB5F32A49021275DF (DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* __this, DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* ___value0, const RuntimeMethod* method) 
{
	{
		// configuration = value;
		DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* L_0 = ___value0;
		__this->___configuration_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___configuration_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionFacade::ClearControlAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleClickActionFacade_ClearControlAction_m4CDD518772C6D2C6758667DB74416165450A9232 (DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* __this, const RuntimeMethod* method) 
{
	{
		// if (!this.IsValidState())
		bool L_0;
		L_0 = BehaviourExtensions_IsValidState_m00C1670A8A8BFCDDED89BE5BF8F8ADDDF34F12B6(__this, 2, (bool)1, NULL);
		if (L_0)
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
		// ControlAction = default;
		DoubleClickActionFacade_set_ControlAction_m457CA375AC29BEF3AE4CBBFBFAC47C23E29A741D(__this, (BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionFacade::OnAfterControlActionChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleClickActionFacade_OnAfterControlActionChange_m26135909072B118376C048A0877417615A6EA312 (DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.ConfigureSourceClickAction(ControlAction);
		DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* L_0;
		L_0 = DoubleClickActionFacade_get_Configuration_m44E77E952DEC1AB4DCF484B88491EA0D9AF3B810_inline(__this, NULL);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_1;
		L_1 = DoubleClickActionFacade_get_ControlAction_m6C066B11F9E441684C0EEE065086714325ACCD9A_inline(__this, NULL);
		VirtualActionInvoker1< BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* >::Invoke(4 /* System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator::ConfigureSourceClickAction(Zinnia.Action.BooleanAction) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionFacade::OnAfterClickDurationChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleClickActionFacade_OnAfterClickDurationChange_m2B391DA2D6CFD27F51F2D8CB3FD1247E42D79633 (DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* __this, const RuntimeMethod* method) 
{
	{
		// Configuration.ConfigureClickTimer(ClickDuration);
		DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* L_0;
		L_0 = DoubleClickActionFacade_get_Configuration_m44E77E952DEC1AB4DCF484B88491EA0D9AF3B810_inline(__this, NULL);
		float L_1;
		L_1 = DoubleClickActionFacade_get_ClickDuration_m5DCF74C7CCF3BBB0FBB5859645041F5E277061BF_inline(__this, NULL);
		VirtualActionInvoker1< float >::Invoke(5 /* System.Void Tilia.Input.CombinedActions.DoubleClickActionConfigurator::ConfigureClickTimer(System.Single) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Tilia.Input.CombinedActions.DoubleClickActionFacade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleClickActionFacade__ctor_m074093800C4924F8C3DBA36DE15DBB58D3CD3A15 (DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* __this, const RuntimeMethod* method) 
{
	{
		// private float clickDuration = 1f;
		__this->___clickDuration_5 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AngleRangeToBooleanConfigurator_get_AngleChecker_mA5E3F1D6F46DF1C29EB825B015F9C97199D46E50_inline (AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* __this, const RuntimeMethod* method) 
{
	{
		// return angleChecker;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___angleChecker_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* AngleRangeToBooleanConfigurator_get_Facade_m71E9F0F69B0632FE5F6BF6DB71CADF3A4BC2E25D_inline (AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* __this, const RuntimeMethod* method) 
{
	{
		// return facade;
		AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* L_0 = __this->___facade_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AngleRangeToBooleanFacade_get_AngleRange_mDE2EF763E9069F83893E24B179B7E7D9949D6BD4_inline (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// return angleRange;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = __this->___angleRange_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* AngleRangeToBooleanConfigurator_get_AngleInput_mCC40DD8EEAC5DFFDBC39ECB180FCDF8B2868C63A_inline (AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* __this, const RuntimeMethod* method) 
{
	{
		// return angleInput;
		AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* L_0 = __this->___angleInput_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AngleRangeToBooleanFacade_get_HorizontalAxis_m39708D138DE80C94B5DFE68CAC500F74249DF4F8_inline (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// return horizontalAxis;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___horizontalAxis_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AngleRangeToBooleanFacade_get_VerticalAxis_mDC583EEF982C0855ABA669376BD7357AEB993472_inline (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// return verticalAxis;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___verticalAxis_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AngleRangeToBooleanFacade_get_HorizontalDeadzone_mFB21FE5A3A0F755F1B1AEB75454FBC7AC16604E7_inline (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// return horizontalDeadzone;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = __this->___horizontalDeadzone_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AngleRangeToBooleanFacade_get_VerticalDeadzone_mDDBDA4F4FE814E5E55542B874C987FFD79FCF267_inline (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// return verticalDeadzone;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = __this->___verticalDeadzone_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* AxesToAngleAction_get_Configuration_mDD434767738F877906A2E8FAFE2B74F80D02CDAF_inline (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// return configuration;
		AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* L_0 = __this->___configuration_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2ToAngle_t6A541CEF5664FF054E348618F764576A36605D58* AxesToAngleActionConfigurator_get_AngleConverter_m4DCB21255D3B825D1C069A7CAC84A38533018349_inline (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, const RuntimeMethod* method) 
{
	{
		// return angleConverter;
		Vector2ToAngle_t6A541CEF5664FF054E348618F764576A36605D58* L_0 = __this->___angleConverter_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AngleRangeToBooleanFacade_get_UnitType_m1DFAC86468352E42296B7BA7F3DED0C58FA518FE_inline (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// return unitType;
		int32_t L_0 = __this->___unitType_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2ToAngle_set_Unit_m9452374E57DF8A6B7F2C4A18D6980F69EFD6CE80_inline (Vector2ToAngle_t6A541CEF5664FF054E348618F764576A36605D58* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// unit = value;
		int32_t L_0 = ___value0;
		__this->___unit_6 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* AngleRangeToBooleanFacade_get_Configuration_mAD86389FE5E1178FE07ABD81104AB3739D321F13_inline (AngleRangeToBooleanFacade_t93A45C6E2B5068813B832545E7E6E186E90A6BFB* __this, const RuntimeMethod* method) 
{
	{
		// return configuration;
		AngleRangeToBooleanConfigurator_t87E62DB9D46C243D51D09DF1D2101A52FDBD313D* L_0 = __this->___configuration_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AxesToAngleAction_get_HorizontalDeadzone_m211828DA0DCFF1B33C907B5EFE0277A8105A1EB0_inline (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// return horizontalDeadzone;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = __this->___horizontalDeadzone_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AxesToAngleAction_get_VerticalDeadzone_m8ADD2634B760D34E280D0EF6CAC26B54143E6074_inline (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// return verticalDeadzone;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = __this->___verticalDeadzone_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToAngleAction_get_HorizontalAxis_mBCE835E77C856EA36A8A736FFAE064C12BA67CC9_inline (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// return horizontalAxis;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___horizontalAxis_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToAngleAction_get_VerticalAxis_m05495E616380DBFF672CD2B69559D3C35F362BE7_inline (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// return verticalAxis;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___verticalAxis_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AxesToAngleAction_get_DirectionOffset_m1F81BE1D34387C1DA056099D7F7961BCE6FBAAC4_inline (AxesToAngleAction_t9AC237523F84E30C1EB601BC80275D098C5A676C* __this, const RuntimeMethod* method) 
{
	{
		// return directionOffset;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___directionOffset_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToAngleActionConfigurator_get_HorizontalAxis_m49C4818E76163BEE00405E7A9AAA5699C822C4AB_inline (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, const RuntimeMethod* method) 
{
	{
		// return horizontalAxis;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___horizontalAxis_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToAngleActionConfigurator_get_VerticalAxis_m6F585630F53F2578C67FCE999E214B8A19D07232_inline (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, const RuntimeMethod* method) 
{
	{
		// return verticalAxis;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___verticalAxis_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToAngleActionConfigurator_get_HorizontalDeadZone_mA0414A5AFE2C1CB095FEBFA6D727673EE68E21BE_inline (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, const RuntimeMethod* method) 
{
	{
		// return horizontalDeadZone;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___horizontalDeadZone_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToAngleActionConfigurator_get_VerticalDeadZone_mC41970EC828808EA7B396579E2DBD3E24F0CD639_inline (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, const RuntimeMethod* method) 
{
	{
		// return verticalDeadZone;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___verticalDeadZone_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransformDirectionExtractor_t3AA9CE6D1CB334660C8215EA5177ED26BD2A40DF* AxesToAngleActionConfigurator_get_DirectionExtractor_m0E60A930D2A3F66AC54C0C82B7480A1C44E70E79_inline (AxesToAngleActionConfigurator_tFF019939B6850B135CB817922D0525A707770C84* __this, const RuntimeMethod* method) 
{
	{
		// return directionExtractor;
		TransformDirectionExtractor_t3AA9CE6D1CB334660C8215EA5177ED26BD2A40DF* L_0 = __this->___directionExtractor_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 AxesToVector3Action_get_Multiplier_m34A0C49F824016E2AF5747B472F3203907D0ACEB_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return multiplier;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___multiplier_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AxesToVector3Action_get_LateralDeadzone_m1092B53FDB1903A34EB23D027DD2F1293BC10E35_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return lateralDeadzone;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = __this->___lateralDeadzone_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AxesToVector3Action_get_VerticalDeadzone_mA6825F9C3FB3AAA56CD1C561C9C1F37F0776A0D7_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return verticalDeadzone;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = __this->___verticalDeadzone_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 AxesToVector3Action_get_LongitudinalDeadzone_m106ADA1A94681F706833071EF9F70A2FA0B933B4_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return longitudinalDeadzone;
		FloatRange_tB17B0F7C10AB5FD43449184435AED34262352109 L_0 = __this->___longitudinalDeadzone_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* AxesToVector3Action_get_Configuration_mE22476063709DF6A1A8EEBCA3B130FF170640520_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return configuration;
		AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* L_0 = __this->___configuration_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AxesToVector3Action_get_InputType_mE9DE409FB42AF086C0629D84EE1AB01C82434BE8_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return inputType;
		int32_t L_0 = __this->___inputType_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToVector3Action_get_LateralAxis_m4135CF40645F9DD36E64B243F0B2ADFF193EDDF2_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return lateralAxis;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___lateralAxis_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToVector3Action_get_VerticalAxis_mE0DEE110790B28F9705B95F052F3F213B87C5B13_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return verticalAxis;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___verticalAxis_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToVector3Action_get_LongitudinalAxis_m66ADC8AFD646C25DA7F0EA1881ABDC8036FD8422_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return longitudinalAxis;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___longitudinalAxis_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AxesToVector3Action_get_TimeMultiplier_m6245648AD8ABE3D2B3C4CC11DDFD85072C4E8DA1_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return timeMultiplier;
		int32_t L_0 = __this->___timeMultiplier_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AxesToVector3Action_get_DeadzoneCalculation_mECDBA3AC3563DED5CAD6913B4640BE90FFEF8314_inline (AxesToVector3Action_t8F1F9C5DB8412363980C33F60E991A0A4BACBE57* __this, const RuntimeMethod* method) 
{
	{
		// return deadzoneCalculation;
		int32_t L_0 = __this->___deadzoneCalculation_21;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToVector3ActionConfigurator_get_LateralAction_m0EAE38250ED60E3173136C6256450EB44FFA2C29_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return lateralAction;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___lateralAction_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToVector3ActionConfigurator_get_VerticalAction_m5E4FEEC880AB16ED1F6F1844261C968A5CA6A1A3_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return verticalAction;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___verticalAction_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* AxesToVector3ActionConfigurator_get_LongitudinalAction_m945CF825910D07FD4DF11530644C30446FDD0CFB_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return longitudinalAction;
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_0 = __this->___longitudinalAction_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AxesToVector3ActionConfigurator_get_DirectionalContainer_m23244930602D50E232A4C7765A8E39DAFD4EF22D_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return directionalContainer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___directionalContainer_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AxesToVector3ActionConfigurator_get_IncrementalContainer_mB679DB9B8EDCAD8FF1A7C4DFBCCE3C1796AB6FBC_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return incrementalContainer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___incrementalContainer_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3ObservableList_t36F67A591E2C1F3138097AB27B9A9977B0DE9067* AxesToVector3ActionConfigurator_get_Multiplier_mCDBA6B7562FCFD2AE04E5C3408875E163741BA23_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return multiplier;
		Vector3ObservableList_t36F67A591E2C1F3138097AB27B9A9977B0DE9067* L_0 = __this->___multiplier_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AxesToVector3ActionConfigurator_get_CombinedAxisDeadzoneContainer_mF8D9205E20AEF542C86D02BDE22DF8F52C6E81DE_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return combinedAxisDeadzoneContainer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___combinedAxisDeadzoneContainer_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AxesToVector3ActionConfigurator_get_SingleAxisDeadzoneContainer_mED16D805FEDDE1ADA35F24DD36D5B124C465745F_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return singleAxisDeadzoneContainer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___singleAxisDeadzoneContainer_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* AxesToVector3ActionConfigurator_get_LateralDeadZone_m18051A38EFDBDA32C8C7906456E153FC3CB5B5F6_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return lateralDeadZone;
		FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* L_0 = __this->___lateralDeadZone_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_LateralPositiveBounds_m3C4AC20E8DF295395ADE479265E57D88E1643CB4_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return lateralPositiveBounds;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___lateralPositiveBounds_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_LateralNegativeBounds_m935DC58A127F99262ED9EC179FD3353B6D05F2F4_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return lateralNegativeBounds;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___lateralNegativeBounds_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_LateralBoundsManager_m6820E2C4B247C6E40165EA27077BFB096A9DC989_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return lateralBoundsManager;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___lateralBoundsManager_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* AxesToVector3ActionConfigurator_get_VerticalDeadZone_mE7ACA16056D5015092C925C09D75DCF0854B4090_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return verticalDeadZone;
		FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* L_0 = __this->___verticalDeadZone_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_VerticalPositiveBounds_m3D392D7DF70EC83AEE5A3FE322F15697B1280A97_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return verticalPositiveBounds;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___verticalPositiveBounds_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_VerticalNegativeBounds_mF70D0E894A4B1534EC414085F646BE0AD487AA0F_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return verticalNegativeBounds;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___verticalNegativeBounds_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_VerticalBoundsManager_mD143FA097C917CC19EF6C6E0CDBD16D1D78D74DC_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return verticalBoundsManager;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___verticalBoundsManager_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* AxesToVector3ActionConfigurator_get_LongitudinalDeadZone_mBE27FD7215688AA7D385D173F0160794A5D400DE_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return longitudinalDeadZone;
		FloatToBooleanU5BU5D_t98903BEB5D8A7A661CC747824BAF1F4A94106172* L_0 = __this->___longitudinalDeadZone_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_LongitudinalPositiveBounds_mC5AEF7B755CE20539E84D2EA69ED001F12F035EF_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return longitudinalPositiveBounds;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___longitudinalPositiveBounds_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_LongitudinalNegativeBounds_mCC4DA93E1B0051BAB5564D6A736A49047D581543_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return longitudinalNegativeBounds;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___longitudinalNegativeBounds_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* AxesToVector3ActionConfigurator_get_LongitudinalBoundsManager_m4060430DC4EC4638BB43C342B15E776B8E3BCA72_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return longitudinalBoundsManager;
		FloatToBoolean_tE9138888DB78AEAC690B8C3FA4967147C50D716E* L_0 = __this->___longitudinalBoundsManager_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimeComponentExtractor_t430415B148F995BEBE599003E9504E27E82B4874* AxesToVector3ActionConfigurator_get_TimeExtractor_mF2CFA764689E5CD105224EDBEF7EAA11F96AE44D_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return timeExtractor;
		TimeComponentExtractor_t430415B148F995BEBE599003E9504E27E82B4874* L_0 = __this->___timeExtractor_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AxesToVector3ActionConfigurator_get_BoundOverlap_m73A78EDF7330903409809978D4FC5E8ED36CC54A_inline (AxesToVector3ActionConfigurator_tA62970001253F209D485DD345B9C259F0B7C6DF6* __this, const RuntimeMethod* method) 
{
	{
		// return boundOverlap;
		float L_0 = __this->___boundOverlap_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* BooleanTo1DAxisAction_get_Configuration_mD605CEB9C5CFEC9381ECDB4333D91D2C47BB7A3D_inline (BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0* __this, const RuntimeMethod* method) 
{
	{
		// return configuration;
		BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* L_0 = __this->___configuration_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* BooleanTo1DAxisAction_get_PositiveInput_m2AAAAF2B86F998AA4F1B25D6249403423FE2B66D_inline (BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0* __this, const RuntimeMethod* method) 
{
	{
		// return positiveInput;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___positiveInput_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* BooleanTo1DAxisAction_get_NegativeInput_m8C291B26D827A43D7170F764E9ACE82B79DA24A3_inline (BooleanTo1DAxisAction_t6E84DA21E9927340FD618040B8BD0784AB7C9BA0* __this, const RuntimeMethod* method) 
{
	{
		// return negativeInput;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___negativeInput_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* BooleanTo1DAxisActionConfigurator_get_PositiveInput_m9F6F7ED6D6BDB382E5C44CDFAE67B963E51CDA01_inline (BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* __this, const RuntimeMethod* method) 
{
	{
		// return positiveInput;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___positiveInput_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* BooleanTo1DAxisActionConfigurator_get_NegativeInput_m3B6A4245BFAF8C65CAF89906F8EA913A0FE11CD7_inline (BooleanTo1DAxisActionConfigurator_tFD858DE4C22502080257267722A427B377FB3967* __this, const RuntimeMethod* method) 
{
	{
		// return negativeInput;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___negativeInput_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* DoubleClickActionConfigurator_get_FirstClickAction_mBDF8063CBC3284E8B8FDB7CF62E28410B0DC31FB_inline (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, const RuntimeMethod* method) 
{
	{
		// return firstClickAction;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___firstClickAction_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* DoubleClickActionConfigurator_get_SecondClickAction_mB1D42A7354D28E11130F2F2775FB38A85DBD05B9_inline (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, const RuntimeMethod* method) 
{
	{
		// return secondClickAction;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___secondClickAction_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CountdownTimer_t148B906173867D94D4423E58F690EF5723153623* DoubleClickActionConfigurator_get_ClickTimer_m86CDCE33942F4DBE499F6D379F7D828FB1269F63_inline (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, const RuntimeMethod* method) 
{
	{
		// return clickTimer;
		CountdownTimer_t148B906173867D94D4423E58F690EF5723153623* L_0 = __this->___clickTimer_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* DoubleClickActionConfigurator_get_Facade_mF0E2D28C2C968AB7F6662BC0986ACB391EEC52CE_inline (DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* __this, const RuntimeMethod* method) 
{
	{
		// return facade;
		DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* L_0 = __this->___facade_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* DoubleClickActionFacade_get_ControlAction_m6C066B11F9E441684C0EEE065086714325ACCD9A_inline (DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* __this, const RuntimeMethod* method) 
{
	{
		// return controlAction;
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_0 = __this->___controlAction_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DoubleClickActionFacade_get_ClickDuration_m5DCF74C7CCF3BBB0FBB5859645041F5E277061BF_inline (DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* __this, const RuntimeMethod* method) 
{
	{
		// return clickDuration;
		float L_0 = __this->___clickDuration_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* DoubleClickActionFacade_get_Configuration_m44E77E952DEC1AB4DCF484B88491EA0D9AF3B810_inline (DoubleClickActionFacade_tFC3112AA28FB9181FD61ED7C98AECC3EF54A39B0* __this, const RuntimeMethod* method) 
{
	{
		// return configuration;
		DoubleClickActionConfigurator_tE084F2074A1C8E5EEDF9B01BFCE2E499D8C6274C* L_0 = __this->___configuration_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExtractor_4_set_Source_mD1D011BDB76A3A57C8F25CB59BFD6E6C8D6DAAD0_gshared_inline (ValueExtractor_4_t2C3EB7BC9BF872E93A179C6ACB575403EC8DAD78* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// source = value;
		RuntimeObject* L_0 = ___value0;
		__this->___source_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_6), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExtractor_4_set_Source_m4866E2D85F1864750608D2256C275F732C23C4A8_gshared_inline (ValueExtractor_4_tD384434595EECF2BBD3542CF14FFA64009308117* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// source = value;
		int32_t L_0 = ___value0;
		__this->___source_6 = L_0;
		// }
		return;
	}
}
