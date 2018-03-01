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


// UnityEngine.DetailPrototype
struct DetailPrototype_t4068396681;
// UnityEngine.Terrain
struct Terrain_t3055443660;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.TerrainData
struct TerrainData_t657004131;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.DetailPrototype[]
struct DetailPrototypeU5BU5D_t1593270580;
// System.Int32[0...,0...]
struct Int32U5B0___U2C0___U5D_t385246373;
// System.Single[0...,0...,0...]
struct SingleU5B0___U2C0___U2C0___U5D_t1444911253;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Exception
struct Exception_t;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Void
struct Void_t1185182177;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;

extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* TerrainData_t657004131_il2cpp_TypeInfo_var;
extern const uint32_t TerrainData__ctor_m1675272790_MetadataUsageId;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3361472150;
extern const uint32_t TerrainData_GetAlphamaps_m3939888263_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1714598838;
extern const uint32_t TerrainData_SetAlphamaps_m75475119_MetadataUsageId;
extern const uint32_t TerrainData__cctor_m2936165929_MetadataUsageId;

struct DetailPrototypeU5BU5D_t1593270580;
struct Int32U5B0___U2C0___U5D_t385246373;
struct SingleU5B0___U2C0___U2C0___U5D_t1444911253;
struct ObjectU5BU5D_t2843939325;


#ifndef U3CMODULEU3E_T692745540_H
#define U3CMODULEU3E_T692745540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745540 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745540_H
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
#ifndef BOUNDARYVALUETYPE_T1782311533_H
#define BOUNDARYVALUETYPE_T1782311533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TerrainData/BoundaryValueType
struct  BoundaryValueType_t1782311533 
{
public:
	// System.Int32 UnityEngine.TerrainData/BoundaryValueType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BoundaryValueType_t1782311533, ___value___1)); }
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
#endif // BOUNDARYVALUETYPE_T1782311533_H
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
#ifndef DETAILPROTOTYPE_T4068396681_H
#define DETAILPROTOTYPE_T4068396681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DetailPrototype
struct  DetailPrototype_t4068396681  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityEngine.DetailPrototype::m_Prototype
	GameObject_t1113636619 * ___m_Prototype_0;
	// UnityEngine.Texture2D UnityEngine.DetailPrototype::m_PrototypeTexture
	Texture2D_t3840446185 * ___m_PrototypeTexture_1;
	// UnityEngine.Color UnityEngine.DetailPrototype::m_HealthyColor
	Color_t2555686324  ___m_HealthyColor_2;
	// UnityEngine.Color UnityEngine.DetailPrototype::m_DryColor
	Color_t2555686324  ___m_DryColor_3;
	// System.Single UnityEngine.DetailPrototype::m_MinWidth
	float ___m_MinWidth_4;
	// System.Single UnityEngine.DetailPrototype::m_MaxWidth
	float ___m_MaxWidth_5;
	// System.Single UnityEngine.DetailPrototype::m_MinHeight
	float ___m_MinHeight_6;
	// System.Single UnityEngine.DetailPrototype::m_MaxHeight
	float ___m_MaxHeight_7;
	// System.Single UnityEngine.DetailPrototype::m_NoiseSpread
	float ___m_NoiseSpread_8;
	// System.Single UnityEngine.DetailPrototype::m_BendFactor
	float ___m_BendFactor_9;
	// System.Int32 UnityEngine.DetailPrototype::m_RenderMode
	int32_t ___m_RenderMode_10;
	// System.Int32 UnityEngine.DetailPrototype::m_UsePrototypeMesh
	int32_t ___m_UsePrototypeMesh_11;

public:
	inline static int32_t get_offset_of_m_Prototype_0() { return static_cast<int32_t>(offsetof(DetailPrototype_t4068396681, ___m_Prototype_0)); }
	inline GameObject_t1113636619 * get_m_Prototype_0() const { return ___m_Prototype_0; }
	inline GameObject_t1113636619 ** get_address_of_m_Prototype_0() { return &___m_Prototype_0; }
	inline void set_m_Prototype_0(GameObject_t1113636619 * value)
	{
		___m_Prototype_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Prototype_0), value);
	}

	inline static int32_t get_offset_of_m_PrototypeTexture_1() { return static_cast<int32_t>(offsetof(DetailPrototype_t4068396681, ___m_PrototypeTexture_1)); }
	inline Texture2D_t3840446185 * get_m_PrototypeTexture_1() const { return ___m_PrototypeTexture_1; }
	inline Texture2D_t3840446185 ** get_address_of_m_PrototypeTexture_1() { return &___m_PrototypeTexture_1; }
	inline void set_m_PrototypeTexture_1(Texture2D_t3840446185 * value)
	{
		___m_PrototypeTexture_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PrototypeTexture_1), value);
	}

	inline static int32_t get_offset_of_m_HealthyColor_2() { return static_cast<int32_t>(offsetof(DetailPrototype_t4068396681, ___m_HealthyColor_2)); }
	inline Color_t2555686324  get_m_HealthyColor_2() const { return ___m_HealthyColor_2; }
	inline Color_t2555686324 * get_address_of_m_HealthyColor_2() { return &___m_HealthyColor_2; }
	inline void set_m_HealthyColor_2(Color_t2555686324  value)
	{
		___m_HealthyColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DryColor_3() { return static_cast<int32_t>(offsetof(DetailPrototype_t4068396681, ___m_DryColor_3)); }
	inline Color_t2555686324  get_m_DryColor_3() const { return ___m_DryColor_3; }
	inline Color_t2555686324 * get_address_of_m_DryColor_3() { return &___m_DryColor_3; }
	inline void set_m_DryColor_3(Color_t2555686324  value)
	{
		___m_DryColor_3 = value;
	}

	inline static int32_t get_offset_of_m_MinWidth_4() { return static_cast<int32_t>(offsetof(DetailPrototype_t4068396681, ___m_MinWidth_4)); }
	inline float get_m_MinWidth_4() const { return ___m_MinWidth_4; }
	inline float* get_address_of_m_MinWidth_4() { return &___m_MinWidth_4; }
	inline void set_m_MinWidth_4(float value)
	{
		___m_MinWidth_4 = value;
	}

	inline static int32_t get_offset_of_m_MaxWidth_5() { return static_cast<int32_t>(offsetof(DetailPrototype_t4068396681, ___m_MaxWidth_5)); }
	inline float get_m_MaxWidth_5() const { return ___m_MaxWidth_5; }
	inline float* get_address_of_m_MaxWidth_5() { return &___m_MaxWidth_5; }
	inline void set_m_MaxWidth_5(float value)
	{
		___m_MaxWidth_5 = value;
	}

	inline static int32_t get_offset_of_m_MinHeight_6() { return static_cast<int32_t>(offsetof(DetailPrototype_t4068396681, ___m_MinHeight_6)); }
	inline float get_m_MinHeight_6() const { return ___m_MinHeight_6; }
	inline float* get_address_of_m_MinHeight_6() { return &___m_MinHeight_6; }
	inline void set_m_MinHeight_6(float value)
	{
		___m_MinHeight_6 = value;
	}

	inline static int32_t get_offset_of_m_MaxHeight_7() { return static_cast<int32_t>(offsetof(DetailPrototype_t4068396681, ___m_MaxHeight_7)); }
	inline float get_m_MaxHeight_7() const { return ___m_MaxHeight_7; }
	inline float* get_address_of_m_MaxHeight_7() { return &___m_MaxHeight_7; }
	inline void set_m_MaxHeight_7(float value)
	{
		___m_MaxHeight_7 = value;
	}

	inline static int32_t get_offset_of_m_NoiseSpread_8() { return static_cast<int32_t>(offsetof(DetailPrototype_t4068396681, ___m_NoiseSpread_8)); }
	inline float get_m_NoiseSpread_8() const { return ___m_NoiseSpread_8; }
	inline float* get_address_of_m_NoiseSpread_8() { return &___m_NoiseSpread_8; }
	inline void set_m_NoiseSpread_8(float value)
	{
		___m_NoiseSpread_8 = value;
	}

	inline static int32_t get_offset_of_m_BendFactor_9() { return static_cast<int32_t>(offsetof(DetailPrototype_t4068396681, ___m_BendFactor_9)); }
	inline float get_m_BendFactor_9() const { return ___m_BendFactor_9; }
	inline float* get_address_of_m_BendFactor_9() { return &___m_BendFactor_9; }
	inline void set_m_BendFactor_9(float value)
	{
		___m_BendFactor_9 = value;
	}

	inline static int32_t get_offset_of_m_RenderMode_10() { return static_cast<int32_t>(offsetof(DetailPrototype_t4068396681, ___m_RenderMode_10)); }
	inline int32_t get_m_RenderMode_10() const { return ___m_RenderMode_10; }
	inline int32_t* get_address_of_m_RenderMode_10() { return &___m_RenderMode_10; }
	inline void set_m_RenderMode_10(int32_t value)
	{
		___m_RenderMode_10 = value;
	}

	inline static int32_t get_offset_of_m_UsePrototypeMesh_11() { return static_cast<int32_t>(offsetof(DetailPrototype_t4068396681, ___m_UsePrototypeMesh_11)); }
	inline int32_t get_m_UsePrototypeMesh_11() const { return ___m_UsePrototypeMesh_11; }
	inline int32_t* get_address_of_m_UsePrototypeMesh_11() { return &___m_UsePrototypeMesh_11; }
	inline void set_m_UsePrototypeMesh_11(int32_t value)
	{
		___m_UsePrototypeMesh_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.DetailPrototype
struct DetailPrototype_t4068396681_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_Prototype_0;
	Texture2D_t3840446185 * ___m_PrototypeTexture_1;
	Color_t2555686324  ___m_HealthyColor_2;
	Color_t2555686324  ___m_DryColor_3;
	float ___m_MinWidth_4;
	float ___m_MaxWidth_5;
	float ___m_MinHeight_6;
	float ___m_MaxHeight_7;
	float ___m_NoiseSpread_8;
	float ___m_BendFactor_9;
	int32_t ___m_RenderMode_10;
	int32_t ___m_UsePrototypeMesh_11;
};
// Native definition for COM marshalling of UnityEngine.DetailPrototype
struct DetailPrototype_t4068396681_marshaled_com
{
	GameObject_t1113636619 * ___m_Prototype_0;
	Texture2D_t3840446185 * ___m_PrototypeTexture_1;
	Color_t2555686324  ___m_HealthyColor_2;
	Color_t2555686324  ___m_DryColor_3;
	float ___m_MinWidth_4;
	float ___m_MaxWidth_5;
	float ___m_MinHeight_6;
	float ___m_MaxHeight_7;
	float ___m_NoiseSpread_8;
	float ___m_BendFactor_9;
	int32_t ___m_RenderMode_10;
	int32_t ___m_UsePrototypeMesh_11;
};
#endif // DETAILPROTOTYPE_T4068396681_H
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
#ifndef TERRAINDATA_T657004131_H
#define TERRAINDATA_T657004131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TerrainData
struct  TerrainData_t657004131  : public Object_t631007953
{
public:

public:
};

struct TerrainData_t657004131_StaticFields
{
public:
	// System.Int32 UnityEngine.TerrainData::k_MaximumResolution
	int32_t ___k_MaximumResolution_2;
	// System.Int32 UnityEngine.TerrainData::k_MinimumDetailResolutionPerPatch
	int32_t ___k_MinimumDetailResolutionPerPatch_3;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailResolutionPerPatch
	int32_t ___k_MaximumDetailResolutionPerPatch_4;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailPatchCount
	int32_t ___k_MaximumDetailPatchCount_5;
	// System.Int32 UnityEngine.TerrainData::k_MinimumAlphamapResolution
	int32_t ___k_MinimumAlphamapResolution_6;
	// System.Int32 UnityEngine.TerrainData::k_MaximumAlphamapResolution
	int32_t ___k_MaximumAlphamapResolution_7;
	// System.Int32 UnityEngine.TerrainData::k_MinimumBaseMapResolution
	int32_t ___k_MinimumBaseMapResolution_8;
	// System.Int32 UnityEngine.TerrainData::k_MaximumBaseMapResolution
	int32_t ___k_MaximumBaseMapResolution_9;

public:
	inline static int32_t get_offset_of_k_MaximumResolution_2() { return static_cast<int32_t>(offsetof(TerrainData_t657004131_StaticFields, ___k_MaximumResolution_2)); }
	inline int32_t get_k_MaximumResolution_2() const { return ___k_MaximumResolution_2; }
	inline int32_t* get_address_of_k_MaximumResolution_2() { return &___k_MaximumResolution_2; }
	inline void set_k_MaximumResolution_2(int32_t value)
	{
		___k_MaximumResolution_2 = value;
	}

	inline static int32_t get_offset_of_k_MinimumDetailResolutionPerPatch_3() { return static_cast<int32_t>(offsetof(TerrainData_t657004131_StaticFields, ___k_MinimumDetailResolutionPerPatch_3)); }
	inline int32_t get_k_MinimumDetailResolutionPerPatch_3() const { return ___k_MinimumDetailResolutionPerPatch_3; }
	inline int32_t* get_address_of_k_MinimumDetailResolutionPerPatch_3() { return &___k_MinimumDetailResolutionPerPatch_3; }
	inline void set_k_MinimumDetailResolutionPerPatch_3(int32_t value)
	{
		___k_MinimumDetailResolutionPerPatch_3 = value;
	}

	inline static int32_t get_offset_of_k_MaximumDetailResolutionPerPatch_4() { return static_cast<int32_t>(offsetof(TerrainData_t657004131_StaticFields, ___k_MaximumDetailResolutionPerPatch_4)); }
	inline int32_t get_k_MaximumDetailResolutionPerPatch_4() const { return ___k_MaximumDetailResolutionPerPatch_4; }
	inline int32_t* get_address_of_k_MaximumDetailResolutionPerPatch_4() { return &___k_MaximumDetailResolutionPerPatch_4; }
	inline void set_k_MaximumDetailResolutionPerPatch_4(int32_t value)
	{
		___k_MaximumDetailResolutionPerPatch_4 = value;
	}

	inline static int32_t get_offset_of_k_MaximumDetailPatchCount_5() { return static_cast<int32_t>(offsetof(TerrainData_t657004131_StaticFields, ___k_MaximumDetailPatchCount_5)); }
	inline int32_t get_k_MaximumDetailPatchCount_5() const { return ___k_MaximumDetailPatchCount_5; }
	inline int32_t* get_address_of_k_MaximumDetailPatchCount_5() { return &___k_MaximumDetailPatchCount_5; }
	inline void set_k_MaximumDetailPatchCount_5(int32_t value)
	{
		___k_MaximumDetailPatchCount_5 = value;
	}

	inline static int32_t get_offset_of_k_MinimumAlphamapResolution_6() { return static_cast<int32_t>(offsetof(TerrainData_t657004131_StaticFields, ___k_MinimumAlphamapResolution_6)); }
	inline int32_t get_k_MinimumAlphamapResolution_6() const { return ___k_MinimumAlphamapResolution_6; }
	inline int32_t* get_address_of_k_MinimumAlphamapResolution_6() { return &___k_MinimumAlphamapResolution_6; }
	inline void set_k_MinimumAlphamapResolution_6(int32_t value)
	{
		___k_MinimumAlphamapResolution_6 = value;
	}

	inline static int32_t get_offset_of_k_MaximumAlphamapResolution_7() { return static_cast<int32_t>(offsetof(TerrainData_t657004131_StaticFields, ___k_MaximumAlphamapResolution_7)); }
	inline int32_t get_k_MaximumAlphamapResolution_7() const { return ___k_MaximumAlphamapResolution_7; }
	inline int32_t* get_address_of_k_MaximumAlphamapResolution_7() { return &___k_MaximumAlphamapResolution_7; }
	inline void set_k_MaximumAlphamapResolution_7(int32_t value)
	{
		___k_MaximumAlphamapResolution_7 = value;
	}

	inline static int32_t get_offset_of_k_MinimumBaseMapResolution_8() { return static_cast<int32_t>(offsetof(TerrainData_t657004131_StaticFields, ___k_MinimumBaseMapResolution_8)); }
	inline int32_t get_k_MinimumBaseMapResolution_8() const { return ___k_MinimumBaseMapResolution_8; }
	inline int32_t* get_address_of_k_MinimumBaseMapResolution_8() { return &___k_MinimumBaseMapResolution_8; }
	inline void set_k_MinimumBaseMapResolution_8(int32_t value)
	{
		___k_MinimumBaseMapResolution_8 = value;
	}

	inline static int32_t get_offset_of_k_MaximumBaseMapResolution_9() { return static_cast<int32_t>(offsetof(TerrainData_t657004131_StaticFields, ___k_MaximumBaseMapResolution_9)); }
	inline int32_t get_k_MaximumBaseMapResolution_9() const { return ___k_MaximumBaseMapResolution_9; }
	inline int32_t* get_address_of_k_MaximumBaseMapResolution_9() { return &___k_MaximumBaseMapResolution_9; }
	inline void set_k_MaximumBaseMapResolution_9(int32_t value)
	{
		___k_MaximumBaseMapResolution_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRAINDATA_T657004131_H
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
#ifndef TERRAIN_T3055443660_H
#define TERRAIN_T3055443660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Terrain
struct  Terrain_t3055443660  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRAIN_T3055443660_H
// UnityEngine.DetailPrototype[]
struct DetailPrototypeU5BU5D_t1593270580  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DetailPrototype_t4068396681 * m_Items[1];

public:
	inline DetailPrototype_t4068396681 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DetailPrototype_t4068396681 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DetailPrototype_t4068396681 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline DetailPrototype_t4068396681 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DetailPrototype_t4068396681 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DetailPrototype_t4068396681 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int32[0...,0...]
struct Int32U5B0___U2C0___U5D_t385246373  : public RuntimeArray
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
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Single[0...,0...,0...]
struct SingleU5B0___U2C0___U2C0___U5D_t1444911253  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
	inline float GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k, float value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k)
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k, float value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Behaviour::.ctor()
extern "C"  void Behaviour__ctor_m346897018 (Behaviour_t1437897464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::SampleHeight_Injected(UnityEngine.Vector3&)
extern "C"  float Terrain_SampleHeight_Injected_m4086989307 (Terrain_t3055443660 * __this, Vector3_t3722313464 * ___worldPosition0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::.ctor()
extern "C"  void Object__ctor_m1087895580 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TerrainData::Internal_Create(UnityEngine.TerrainData)
extern "C"  void TerrainData_Internal_Create_m1566437197 (RuntimeObject * __this /* static, unused */, TerrainData_t657004131 * ___terrainData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TerrainData::get_size_Injected(UnityEngine.Vector3&)
extern "C"  void TerrainData_get_size_Injected_m1617926404 (TerrainData_t657004131 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLength(System.Int32)
extern "C"  int32_t Array_GetLength_m2178203778 (RuntimeArray * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TerrainData::Internal_SetDetailLayer(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[0...,0...])
extern "C"  void TerrainData_Internal_SetDetailLayer_m1249370087 (TerrainData_t657004131 * __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___totalWidth2, int32_t ___totalHeight3, int32_t ___detailIndex4, Int32U5B0___U2C0___U5D_t385246373* ___data5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single[0...,0...,0...] UnityEngine.TerrainData::Internal_GetAlphamaps(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  SingleU5B0___U2C0___U2C0___U5D_t1444911253* TerrainData_Internal_GetAlphamaps_m346749885 (TerrainData_t657004131 * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TerrainData::get_Internal_alphamapResolution()
extern "C"  int32_t TerrainData_get_Internal_alphamapResolution_m3110480181 (TerrainData_t657004131 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TerrainData::get_alphamapResolution()
extern "C"  int32_t TerrainData_get_alphamapResolution_m1154394489 (TerrainData_t657004131 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TerrainData::get_alphamapLayers()
extern "C"  int32_t TerrainData_get_alphamapLayers_m3131032847 (TerrainData_t657004131 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern "C"  String_t* UnityString_Format_m261690510 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TerrainData::Internal_SetAlphamaps(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[0...,0...,0...])
extern "C"  void TerrainData_Internal_SetAlphamaps_m1326542261 (TerrainData_t657004131 * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, SingleU5B0___U2C0___U2C0___U5D_t1444911253* ___map4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TerrainData::GetBoundaryValue(UnityEngine.TerrainData/BoundaryValueType)
extern "C"  int32_t TerrainData_GetBoundaryValue_m1103633233 (RuntimeObject * __this /* static, unused */, int32_t ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// Conversion methods for marshalling of: UnityEngine.DetailPrototype
extern "C" void DetailPrototype_t4068396681_marshal_pinvoke(const DetailPrototype_t4068396681& unmarshaled, DetailPrototype_t4068396681_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Prototype_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Prototype' of type 'DetailPrototype': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Prototype_0Exception);
}
extern "C" void DetailPrototype_t4068396681_marshal_pinvoke_back(const DetailPrototype_t4068396681_marshaled_pinvoke& marshaled, DetailPrototype_t4068396681& unmarshaled)
{
	Exception_t* ___m_Prototype_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Prototype' of type 'DetailPrototype': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Prototype_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.DetailPrototype
extern "C" void DetailPrototype_t4068396681_marshal_pinvoke_cleanup(DetailPrototype_t4068396681_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.DetailPrototype
extern "C" void DetailPrototype_t4068396681_marshal_com(const DetailPrototype_t4068396681& unmarshaled, DetailPrototype_t4068396681_marshaled_com& marshaled)
{
	Exception_t* ___m_Prototype_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Prototype' of type 'DetailPrototype': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Prototype_0Exception);
}
extern "C" void DetailPrototype_t4068396681_marshal_com_back(const DetailPrototype_t4068396681_marshaled_com& marshaled, DetailPrototype_t4068396681& unmarshaled)
{
	Exception_t* ___m_Prototype_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Prototype' of type 'DetailPrototype': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Prototype_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.DetailPrototype
extern "C" void DetailPrototype_t4068396681_marshal_com_cleanup(DetailPrototype_t4068396681_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.DetailPrototype::.ctor()
extern "C"  void DetailPrototype__ctor_m1053013238 (DetailPrototype_t4068396681 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_Prototype_0((GameObject_t1113636619 *)NULL);
		__this->set_m_PrototypeTexture_1((Texture2D_t3840446185 *)NULL);
		Color_t2555686324  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Color__ctor_m2943235014((&L_0), (0.2627451f), (0.9764706f), (0.164705887f), (1.0f), /*hidden argument*/NULL);
		__this->set_m_HealthyColor_2(L_0);
		Color_t2555686324  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Color__ctor_m2943235014((&L_1), (0.8039216f), (0.7372549f), (0.101960786f), (1.0f), /*hidden argument*/NULL);
		__this->set_m_DryColor_3(L_1);
		__this->set_m_MinWidth_4((1.0f));
		__this->set_m_MaxWidth_5((2.0f));
		__this->set_m_MinHeight_6((1.0f));
		__this->set_m_MaxHeight_7((2.0f));
		__this->set_m_NoiseSpread_8((0.1f));
		__this->set_m_BendFactor_9((0.1f));
		__this->set_m_RenderMode_10(2);
		__this->set_m_UsePrototypeMesh_11(0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Terrain::.ctor()
extern "C"  void Terrain__ctor_m2653169332 (Terrain_t3055443660 * __this, const RuntimeMethod* method)
{
	{
		Behaviour__ctor_m346897018(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
extern "C"  TerrainData_t657004131 * Terrain_get_terrainData_m2711583617 (Terrain_t3055443660 * __this, const RuntimeMethod* method)
{
	typedef TerrainData_t657004131 * (*Terrain_get_terrainData_m2711583617_ftn) (Terrain_t3055443660 *);
	static Terrain_get_terrainData_m2711583617_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_terrainData_m2711583617_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_terrainData()");
	TerrainData_t657004131 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.Terrain::SampleHeight(UnityEngine.Vector3)
extern "C"  float Terrain_SampleHeight_m2769214264 (Terrain_t3055443660 * __this, Vector3_t3722313464  ___worldPosition0, const RuntimeMethod* method)
{
	{
		float L_0 = Terrain_SampleHeight_Injected_m4086989307(__this, (&___worldPosition0), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Terrain UnityEngine.Terrain::get_activeTerrain()
extern "C"  Terrain_t3055443660 * Terrain_get_activeTerrain_m2378246603 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef Terrain_t3055443660 * (*Terrain_get_activeTerrain_m2378246603_ftn) ();
	static Terrain_get_activeTerrain_m2378246603_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_activeTerrain_m2378246603_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_activeTerrain()");
	Terrain_t3055443660 * retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Single UnityEngine.Terrain::SampleHeight_Injected(UnityEngine.Vector3&)
extern "C"  float Terrain_SampleHeight_Injected_m4086989307 (Terrain_t3055443660 * __this, Vector3_t3722313464 * ___worldPosition0, const RuntimeMethod* method)
{
	typedef float (*Terrain_SampleHeight_Injected_m4086989307_ftn) (Terrain_t3055443660 *, Vector3_t3722313464 *);
	static Terrain_SampleHeight_Injected_m4086989307_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_SampleHeight_Injected_m4086989307_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::SampleHeight_Injected(UnityEngine.Vector3&)");
	float retVal = _il2cpp_icall_func(__this, ___worldPosition0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.TerrainData::.ctor()
extern "C"  void TerrainData__ctor_m1675272790 (TerrainData_t657004131 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainData__ctor_m1675272790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TerrainData_t657004131_il2cpp_TypeInfo_var);
		TerrainData_Internal_Create_m1566437197(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.TerrainData::GetBoundaryValue(UnityEngine.TerrainData/BoundaryValueType)
extern "C"  int32_t TerrainData_GetBoundaryValue_m1103633233 (RuntimeObject * __this /* static, unused */, int32_t ___type0, const RuntimeMethod* method)
{
	typedef int32_t (*TerrainData_GetBoundaryValue_m1103633233_ftn) (int32_t);
	static TerrainData_GetBoundaryValue_m1103633233_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_GetBoundaryValue_m1103633233_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::GetBoundaryValue(UnityEngine.TerrainData/BoundaryValueType)");
	int32_t retVal = _il2cpp_icall_func(___type0);
	return retVal;
}
// System.Void UnityEngine.TerrainData::Internal_Create(UnityEngine.TerrainData)
extern "C"  void TerrainData_Internal_Create_m1566437197 (RuntimeObject * __this /* static, unused */, TerrainData_t657004131 * ___terrainData0, const RuntimeMethod* method)
{
	typedef void (*TerrainData_Internal_Create_m1566437197_ftn) (TerrainData_t657004131 *);
	static TerrainData_Internal_Create_m1566437197_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_Create_m1566437197_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_Create(UnityEngine.TerrainData)");
	_il2cpp_icall_func(___terrainData0);
}
// UnityEngine.Vector3 UnityEngine.TerrainData::get_size()
extern "C"  Vector3_t3722313464  TerrainData_get_size_m1871576403 (TerrainData_t657004131 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		TerrainData_get_size_Injected_m1617926404(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		return L_0;
	}
}
// System.Int32 UnityEngine.TerrainData::get_detailWidth()
extern "C"  int32_t TerrainData_get_detailWidth_m1820400970 (TerrainData_t657004131 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*TerrainData_get_detailWidth_m1820400970_ftn) (TerrainData_t657004131 *);
	static TerrainData_get_detailWidth_m1820400970_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_detailWidth_m1820400970_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_detailWidth()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.TerrainData::get_detailHeight()
extern "C"  int32_t TerrainData_get_detailHeight_m1557718723 (TerrainData_t657004131 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*TerrainData_get_detailHeight_m1557718723_ftn) (TerrainData_t657004131 *);
	static TerrainData_get_detailHeight_m1557718723_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_detailHeight_m1557718723_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_detailHeight()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.TerrainData::get_detailResolution()
extern "C"  int32_t TerrainData_get_detailResolution_m2340888240 (TerrainData_t657004131 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*TerrainData_get_detailResolution_m2340888240_ftn) (TerrainData_t657004131 *);
	static TerrainData_get_detailResolution_m2340888240_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_detailResolution_m2340888240_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_detailResolution()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.DetailPrototype[] UnityEngine.TerrainData::get_detailPrototypes()
extern "C"  DetailPrototypeU5BU5D_t1593270580* TerrainData_get_detailPrototypes_m2393037538 (TerrainData_t657004131 * __this, const RuntimeMethod* method)
{
	typedef DetailPrototypeU5BU5D_t1593270580* (*TerrainData_get_detailPrototypes_m2393037538_ftn) (TerrainData_t657004131 *);
	static TerrainData_get_detailPrototypes_m2393037538_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_detailPrototypes_m2393037538_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_detailPrototypes()");
	DetailPrototypeU5BU5D_t1593270580* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32[0...,0...] UnityEngine.TerrainData::GetDetailLayer(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Int32U5B0___U2C0___U5D_t385246373* TerrainData_GetDetailLayer_m1697562711 (TerrainData_t657004131 * __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___width2, int32_t ___height3, int32_t ___layer4, const RuntimeMethod* method)
{
	typedef Int32U5B0___U2C0___U5D_t385246373* (*TerrainData_GetDetailLayer_m1697562711_ftn) (TerrainData_t657004131 *, int32_t, int32_t, int32_t, int32_t, int32_t);
	static TerrainData_GetDetailLayer_m1697562711_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_GetDetailLayer_m1697562711_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::GetDetailLayer(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)");
	Int32U5B0___U2C0___U5D_t385246373* retVal = _il2cpp_icall_func(__this, ___xBase0, ___yBase1, ___width2, ___height3, ___layer4);
	return retVal;
}
// System.Void UnityEngine.TerrainData::SetDetailLayer(System.Int32,System.Int32,System.Int32,System.Int32[0...,0...])
extern "C"  void TerrainData_SetDetailLayer_m3732578157 (TerrainData_t657004131 * __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___layer2, Int32U5B0___U2C0___U5D_t385246373* ___details3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___xBase0;
		int32_t L_1 = ___yBase1;
		Int32U5B0___U2C0___U5D_t385246373* L_2 = ___details3;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_2);
		int32_t L_3 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_2, 1, /*hidden argument*/NULL);
		Int32U5B0___U2C0___U5D_t385246373* L_4 = ___details3;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_4);
		int32_t L_5 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_4, 0, /*hidden argument*/NULL);
		int32_t L_6 = ___layer2;
		Int32U5B0___U2C0___U5D_t385246373* L_7 = ___details3;
		TerrainData_Internal_SetDetailLayer_m1249370087(__this, L_0, L_1, L_3, L_5, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TerrainData::Internal_SetDetailLayer(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[0...,0...])
extern "C"  void TerrainData_Internal_SetDetailLayer_m1249370087 (TerrainData_t657004131 * __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___totalWidth2, int32_t ___totalHeight3, int32_t ___detailIndex4, Int32U5B0___U2C0___U5D_t385246373* ___data5, const RuntimeMethod* method)
{
	typedef void (*TerrainData_Internal_SetDetailLayer_m1249370087_ftn) (TerrainData_t657004131 *, int32_t, int32_t, int32_t, int32_t, int32_t, Int32U5B0___U2C0___U5D_t385246373*);
	static TerrainData_Internal_SetDetailLayer_m1249370087_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_SetDetailLayer_m1249370087_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_SetDetailLayer(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[0...,0...])");
	_il2cpp_icall_func(__this, ___xBase0, ___yBase1, ___totalWidth2, ___totalHeight3, ___detailIndex4, ___data5);
}
// System.Int32 UnityEngine.TerrainData::get_alphamapLayers()
extern "C"  int32_t TerrainData_get_alphamapLayers_m3131032847 (TerrainData_t657004131 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*TerrainData_get_alphamapLayers_m3131032847_ftn) (TerrainData_t657004131 *);
	static TerrainData_get_alphamapLayers_m3131032847_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_alphamapLayers_m3131032847_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_alphamapLayers()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single[0...,0...,0...] UnityEngine.TerrainData::GetAlphamaps(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  SingleU5B0___U2C0___U2C0___U5D_t1444911253* TerrainData_GetAlphamaps_m3939888263 (TerrainData_t657004131 * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainData_GetAlphamaps_m3939888263_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5B0___U2C0___U2C0___U5D_t1444911253* V_0 = NULL;
	{
		int32_t L_0 = ___x0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = ___y1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = ___width2;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = ___height3;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}

IL_001e:
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, _stringLiteral3361472150, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_0029:
	{
		int32_t L_5 = ___x0;
		int32_t L_6 = ___y1;
		int32_t L_7 = ___width2;
		int32_t L_8 = ___height3;
		SingleU5B0___U2C0___U2C0___U5D_t1444911253* L_9 = TerrainData_Internal_GetAlphamaps_m346749885(__this, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_003a;
	}

IL_003a:
	{
		SingleU5B0___U2C0___U2C0___U5D_t1444911253* L_10 = V_0;
		return L_10;
	}
}
// System.Single[0...,0...,0...] UnityEngine.TerrainData::Internal_GetAlphamaps(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  SingleU5B0___U2C0___U2C0___U5D_t1444911253* TerrainData_Internal_GetAlphamaps_m346749885 (TerrainData_t657004131 * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method)
{
	typedef SingleU5B0___U2C0___U2C0___U5D_t1444911253* (*TerrainData_Internal_GetAlphamaps_m346749885_ftn) (TerrainData_t657004131 *, int32_t, int32_t, int32_t, int32_t);
	static TerrainData_Internal_GetAlphamaps_m346749885_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_GetAlphamaps_m346749885_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_GetAlphamaps(System.Int32,System.Int32,System.Int32,System.Int32)");
	SingleU5B0___U2C0___U2C0___U5D_t1444911253* retVal = _il2cpp_icall_func(__this, ___x0, ___y1, ___width2, ___height3);
	return retVal;
}
// System.Int32 UnityEngine.TerrainData::get_alphamapResolution()
extern "C"  int32_t TerrainData_get_alphamapResolution_m1154394489 (TerrainData_t657004131 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TerrainData_get_Internal_alphamapResolution_m3110480181(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.TerrainData::GetAlphamapResolutionInternal()
extern "C"  float TerrainData_GetAlphamapResolutionInternal_m1173327220 (TerrainData_t657004131 * __this, const RuntimeMethod* method)
{
	typedef float (*TerrainData_GetAlphamapResolutionInternal_m1173327220_ftn) (TerrainData_t657004131 *);
	static TerrainData_GetAlphamapResolutionInternal_m1173327220_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_GetAlphamapResolutionInternal_m1173327220_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::GetAlphamapResolutionInternal()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.TerrainData::get_Internal_alphamapResolution()
extern "C"  int32_t TerrainData_get_Internal_alphamapResolution_m3110480181 (TerrainData_t657004131 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*TerrainData_get_Internal_alphamapResolution_m3110480181_ftn) (TerrainData_t657004131 *);
	static TerrainData_get_Internal_alphamapResolution_m3110480181_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_Internal_alphamapResolution_m3110480181_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_Internal_alphamapResolution()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.TerrainData::get_alphamapWidth()
extern "C"  int32_t TerrainData_get_alphamapWidth_m315223358 (TerrainData_t657004131 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TerrainData_get_alphamapResolution_m1154394489(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.TerrainData::get_alphamapHeight()
extern "C"  int32_t TerrainData_get_alphamapHeight_m595805513 (TerrainData_t657004131 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TerrainData_get_alphamapResolution_m1154394489(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.TerrainData::SetAlphamaps(System.Int32,System.Int32,System.Single[0...,0...,0...])
extern "C"  void TerrainData_SetAlphamaps_m75475119 (TerrainData_t657004131 * __this, int32_t ___x0, int32_t ___y1, SingleU5B0___U2C0___U2C0___U5D_t1444911253* ___map2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainData_SetAlphamaps_m75475119_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingleU5B0___U2C0___U2C0___U5D_t1444911253* L_0 = ___map2;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		int32_t L_1 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_0, 2, /*hidden argument*/NULL);
		int32_t L_2 = TerrainData_get_alphamapLayers_m3131032847(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0038;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		int32_t L_4 = TerrainData_get_alphamapLayers_m3131032847(__this, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		String_t* L_7 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral1714598838, L_3, /*hidden argument*/NULL);
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8);
	}

IL_0038:
	{
		int32_t L_9 = ___x0;
		int32_t L_10 = ___y1;
		SingleU5B0___U2C0___U2C0___U5D_t1444911253* L_11 = ___map2;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_11);
		int32_t L_12 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_11, 1, /*hidden argument*/NULL);
		SingleU5B0___U2C0___U2C0___U5D_t1444911253* L_13 = ___map2;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_13);
		int32_t L_14 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_13, 0, /*hidden argument*/NULL);
		SingleU5B0___U2C0___U2C0___U5D_t1444911253* L_15 = ___map2;
		TerrainData_Internal_SetAlphamaps_m1326542261(__this, L_9, L_10, L_12, L_14, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TerrainData::Internal_SetAlphamaps(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[0...,0...,0...])
extern "C"  void TerrainData_Internal_SetAlphamaps_m1326542261 (TerrainData_t657004131 * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, SingleU5B0___U2C0___U2C0___U5D_t1444911253* ___map4, const RuntimeMethod* method)
{
	typedef void (*TerrainData_Internal_SetAlphamaps_m1326542261_ftn) (TerrainData_t657004131 *, int32_t, int32_t, int32_t, int32_t, SingleU5B0___U2C0___U2C0___U5D_t1444911253*);
	static TerrainData_Internal_SetAlphamaps_m1326542261_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_SetAlphamaps_m1326542261_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_SetAlphamaps(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[0...,0...,0...])");
	_il2cpp_icall_func(__this, ___x0, ___y1, ___width2, ___height3, ___map4);
}
// System.Void UnityEngine.TerrainData::.cctor()
extern "C"  void TerrainData__cctor_m2936165929 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainData__cctor_m2936165929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = TerrainData_GetBoundaryValue_m1103633233(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		((TerrainData_t657004131_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t657004131_il2cpp_TypeInfo_var))->set_k_MaximumResolution_2(L_0);
		int32_t L_1 = TerrainData_GetBoundaryValue_m1103633233(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		((TerrainData_t657004131_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t657004131_il2cpp_TypeInfo_var))->set_k_MinimumDetailResolutionPerPatch_3(L_1);
		int32_t L_2 = TerrainData_GetBoundaryValue_m1103633233(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		((TerrainData_t657004131_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t657004131_il2cpp_TypeInfo_var))->set_k_MaximumDetailResolutionPerPatch_4(L_2);
		int32_t L_3 = TerrainData_GetBoundaryValue_m1103633233(NULL /*static, unused*/, 3, /*hidden argument*/NULL);
		((TerrainData_t657004131_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t657004131_il2cpp_TypeInfo_var))->set_k_MaximumDetailPatchCount_5(L_3);
		int32_t L_4 = TerrainData_GetBoundaryValue_m1103633233(NULL /*static, unused*/, 4, /*hidden argument*/NULL);
		((TerrainData_t657004131_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t657004131_il2cpp_TypeInfo_var))->set_k_MinimumAlphamapResolution_6(L_4);
		int32_t L_5 = TerrainData_GetBoundaryValue_m1103633233(NULL /*static, unused*/, 5, /*hidden argument*/NULL);
		((TerrainData_t657004131_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t657004131_il2cpp_TypeInfo_var))->set_k_MaximumAlphamapResolution_7(L_5);
		int32_t L_6 = TerrainData_GetBoundaryValue_m1103633233(NULL /*static, unused*/, 6, /*hidden argument*/NULL);
		((TerrainData_t657004131_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t657004131_il2cpp_TypeInfo_var))->set_k_MinimumBaseMapResolution_8(L_6);
		int32_t L_7 = TerrainData_GetBoundaryValue_m1103633233(NULL /*static, unused*/, 7, /*hidden argument*/NULL);
		((TerrainData_t657004131_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t657004131_il2cpp_TypeInfo_var))->set_k_MaximumBaseMapResolution_9(L_7);
		return;
	}
}
// System.Void UnityEngine.TerrainData::get_size_Injected(UnityEngine.Vector3&)
extern "C"  void TerrainData_get_size_Injected_m1617926404 (TerrainData_t657004131 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*TerrainData_get_size_Injected_m1617926404_ftn) (TerrainData_t657004131 *, Vector3_t3722313464 *);
	static TerrainData_get_size_Injected_m1617926404_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_size_Injected_m1617926404_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_size_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
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
