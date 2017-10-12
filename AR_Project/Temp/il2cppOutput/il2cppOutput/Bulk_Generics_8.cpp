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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t56210401;
// System.Char[]
struct CharU5BU5D_t3885813075;
// System.Void
struct Void_t979791529;

extern RuntimeClass* StringU5BU5D_t56210401_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4273512967;
extern Il2CppCodeGenString* _stringLiteral551410592;
extern Il2CppCodeGenString* _stringLiteral2976175714;
extern const uint32_t KeyValuePair_2_ToString_m4178581561_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m4082147727_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1372367422_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3500307360_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m499295571_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2533433244_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3745938831_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1346361582_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m423680982_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3641633883_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1244425034_MetadataUsageId;

struct StringU5BU5D_t56210401;


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
#ifndef VALUETYPE_T3766330083_H
#define VALUETYPE_T3766330083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3766330083  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3766330083_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3766330083_marshaled_com
{
};
#endif // VALUETYPE_T3766330083_H
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
	CharU5BU5D_t3885813075* ___WhiteChars_3;

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
	inline CharU5BU5D_t3885813075* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3885813075** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3885813075* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VEC2I_T3315422093_H
#define VEC2I_T3315422093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/Vec2I
#pragma pack(push, tp, 1)
struct  Vec2I_t3315422093 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::x
	int32_t ___x_0;
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vec2I_t3315422093, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vec2I_t3315422093, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VEC2I_T3315422093_H
#ifndef ENUM_T1644579121_H
#define ENUM_T1644579121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1644579121  : public ValueType_t3766330083
{
public:

public:
};

struct Enum_t1644579121_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3885813075* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1644579121_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3885813075* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3885813075** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3885813075* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1644579121_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1644579121_marshaled_com
{
};
#endif // ENUM_T1644579121_H
#ifndef TRACKABLEIDPAIR_T2990529261_H
#define TRACKABLEIDPAIR_T2990529261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManager/TrackableIdPair
struct  TrackableIdPair_t2990529261 
{
public:
	// System.Int32 Vuforia.VuforiaManager/TrackableIdPair::TrackableId
	int32_t ___TrackableId_0;
	// System.Int32 Vuforia.VuforiaManager/TrackableIdPair::ResultId
	int32_t ___ResultId_1;

public:
	inline static int32_t get_offset_of_TrackableId_0() { return static_cast<int32_t>(offsetof(TrackableIdPair_t2990529261, ___TrackableId_0)); }
	inline int32_t get_TrackableId_0() const { return ___TrackableId_0; }
	inline int32_t* get_address_of_TrackableId_0() { return &___TrackableId_0; }
	inline void set_TrackableId_0(int32_t value)
	{
		___TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_ResultId_1() { return static_cast<int32_t>(offsetof(TrackableIdPair_t2990529261, ___ResultId_1)); }
	inline int32_t get_ResultId_1() const { return ___ResultId_1; }
	inline int32_t* get_address_of_ResultId_1() { return &___ResultId_1; }
	inline void set_ResultId_1(int32_t value)
	{
		___ResultId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEIDPAIR_T2990529261_H
#ifndef UINT16_T1369694333_H
#define UINT16_T1369694333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t1369694333 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t1369694333, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T1369694333_H
#ifndef KEYVALUEPAIR_2_T1476789655_H
#define KEYVALUEPAIR_2_T1476789655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
struct  KeyValuePair_2_t1476789655 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	uint16_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1476789655, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1476789655, ___value_1)); }
	inline uint16_t get_value_1() const { return ___value_1; }
	inline uint16_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(uint16_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1476789655_H
#ifndef VECTOR3_T3909200024_H
#define VECTOR3_T3909200024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3909200024 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3909200024, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3909200024, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3909200024, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3909200024_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3909200024  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3909200024  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3909200024  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3909200024  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3909200024  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3909200024  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3909200024  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3909200024  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3909200024  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3909200024  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3909200024_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3909200024  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3909200024 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3909200024  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3909200024_StaticFields, ___oneVector_5)); }
	inline Vector3_t3909200024  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3909200024 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3909200024  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3909200024_StaticFields, ___upVector_6)); }
	inline Vector3_t3909200024  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3909200024 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3909200024  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3909200024_StaticFields, ___downVector_7)); }
	inline Vector3_t3909200024  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3909200024 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3909200024  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3909200024_StaticFields, ___leftVector_8)); }
	inline Vector3_t3909200024  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3909200024 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3909200024  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3909200024_StaticFields, ___rightVector_9)); }
	inline Vector3_t3909200024  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3909200024 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3909200024  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3909200024_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3909200024  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3909200024 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3909200024  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3909200024_StaticFields, ___backVector_11)); }
	inline Vector3_t3909200024  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3909200024 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3909200024  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3909200024_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3909200024  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3909200024 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3909200024  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3909200024_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3909200024  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3909200024 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3909200024  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3909200024_H
#ifndef KEYVALUEPAIR_2_T1720738086_H
#define KEYVALUEPAIR_2_T1720738086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
struct  KeyValuePair_2_t1720738086 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1720738086, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1720738086, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1720738086_H
#ifndef BOOLEAN_T1578904453_H
#define BOOLEAN_T1578904453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t1578904453 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t1578904453, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t1578904453_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t1578904453_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t1578904453_StaticFields, ___TrueString_1)); }
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
#endif // BOOLEAN_T1578904453_H
#ifndef KEYVALUEPAIR_2_T2068031275_H
#define KEYVALUEPAIR_2_T2068031275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2068031275 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2068031275, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2068031275, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2068031275_H
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
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef KEYVALUEPAIR_2_T1723176676_H
#define KEYVALUEPAIR_2_T1723176676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t1723176676 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1723176676, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1723176676, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1723176676_H
#ifndef VOID_T979791529_H
#define VOID_T979791529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t979791529 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T979791529_H
#ifndef INT32_T1613642764_H
#define INT32_T1613642764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t1613642764 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t1613642764, ___m_value_2)); }
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
#endif // INT32_T1613642764_H
#ifndef KEYVALUEPAIR_2_T1685999775_H
#define KEYVALUEPAIR_2_T1685999775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct  KeyValuePair_2_t1685999775 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1685999775, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1685999775, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1685999775_H
#ifndef QUATERNION_T993355479_H
#define QUATERNION_T993355479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t993355479 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t993355479, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t993355479, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t993355479, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t993355479, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t993355479_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t993355479  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t993355479_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t993355479  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t993355479 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t993355479  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T993355479_H
#ifndef VIRTUALBUTTONDATA_T3917278654_H
#define VIRTUALBUTTONDATA_T3917278654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/VirtualButtonData
#pragma pack(push, tp, 1)
struct  VirtualButtonData_t3917278654 
{
public:
	// System.Int32 Vuforia.VuforiaManagerImpl/VirtualButtonData::id
	int32_t ___id_0;
	// System.Int32 Vuforia.VuforiaManagerImpl/VirtualButtonData::isPressed
	int32_t ___isPressed_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(VirtualButtonData_t3917278654, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_isPressed_1() { return static_cast<int32_t>(offsetof(VirtualButtonData_t3917278654, ___isPressed_1)); }
	inline int32_t get_isPressed_1() const { return ___isPressed_1; }
	inline int32_t* get_address_of_isPressed_1() { return &___isPressed_1; }
	inline void set_isPressed_1(int32_t value)
	{
		___isPressed_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALBUTTONDATA_T3917278654_H
#ifndef PROFILEDATA_T2140972687_H
#define PROFILEDATA_T2140972687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamProfile/ProfileData
struct  ProfileData_t2140972687 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::RequestedTextureSize
	Vec2I_t3315422093  ___RequestedTextureSize_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::ResampledTextureSize
	Vec2I_t3315422093  ___ResampledTextureSize_1;
	// System.Int32 Vuforia.WebCamProfile/ProfileData::RequestedFPS
	int32_t ___RequestedFPS_2;

public:
	inline static int32_t get_offset_of_RequestedTextureSize_0() { return static_cast<int32_t>(offsetof(ProfileData_t2140972687, ___RequestedTextureSize_0)); }
	inline Vec2I_t3315422093  get_RequestedTextureSize_0() const { return ___RequestedTextureSize_0; }
	inline Vec2I_t3315422093 * get_address_of_RequestedTextureSize_0() { return &___RequestedTextureSize_0; }
	inline void set_RequestedTextureSize_0(Vec2I_t3315422093  value)
	{
		___RequestedTextureSize_0 = value;
	}

	inline static int32_t get_offset_of_ResampledTextureSize_1() { return static_cast<int32_t>(offsetof(ProfileData_t2140972687, ___ResampledTextureSize_1)); }
	inline Vec2I_t3315422093  get_ResampledTextureSize_1() const { return ___ResampledTextureSize_1; }
	inline Vec2I_t3315422093 * get_address_of_ResampledTextureSize_1() { return &___ResampledTextureSize_1; }
	inline void set_ResampledTextureSize_1(Vec2I_t3315422093  value)
	{
		___ResampledTextureSize_1 = value;
	}

	inline static int32_t get_offset_of_RequestedFPS_2() { return static_cast<int32_t>(offsetof(ProfileData_t2140972687, ___RequestedFPS_2)); }
	inline int32_t get_RequestedFPS_2() const { return ___RequestedFPS_2; }
	inline int32_t* get_address_of_RequestedFPS_2() { return &___RequestedFPS_2; }
	inline void set_RequestedFPS_2(int32_t value)
	{
		___RequestedFPS_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILEDATA_T2140972687_H
#ifndef STATUS_T2400265424_H
#define STATUS_T2400265424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t2400265424 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t2400265424, ___value___1)); }
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
#endif // STATUS_T2400265424_H
#ifndef KEYVALUEPAIR_2_T3679519377_H
#define KEYVALUEPAIR_2_T3679519377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>
struct  KeyValuePair_2_t3679519377 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	VirtualButtonData_t3917278654  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3679519377, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3679519377, ___value_1)); }
	inline VirtualButtonData_t3917278654  get_value_1() const { return ___value_1; }
	inline VirtualButtonData_t3917278654 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(VirtualButtonData_t3917278654  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3679519377_H
#ifndef KEYVALUEPAIR_2_T2806900012_H
#define KEYVALUEPAIR_2_T2806900012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct  KeyValuePair_2_t2806900012 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	IntPtr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2806900012, ___key_0)); }
	inline IntPtr_t get_key_0() const { return ___key_0; }
	inline IntPtr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(IntPtr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2806900012, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2806900012_H
#ifndef POSEINFO_T952174556_H
#define POSEINFO_T952174556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HoloLensExtendedTrackingManager/PoseInfo
struct  PoseInfo_t952174556 
{
public:
	// UnityEngine.Vector3 Vuforia.HoloLensExtendedTrackingManager/PoseInfo::Position
	Vector3_t3909200024  ___Position_0;
	// UnityEngine.Quaternion Vuforia.HoloLensExtendedTrackingManager/PoseInfo::Rotation
	Quaternion_t993355479  ___Rotation_1;
	// System.Int32 Vuforia.HoloLensExtendedTrackingManager/PoseInfo::NumFramesPoseWasOff
	int32_t ___NumFramesPoseWasOff_2;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(PoseInfo_t952174556, ___Position_0)); }
	inline Vector3_t3909200024  get_Position_0() const { return ___Position_0; }
	inline Vector3_t3909200024 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_t3909200024  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Rotation_1() { return static_cast<int32_t>(offsetof(PoseInfo_t952174556, ___Rotation_1)); }
	inline Quaternion_t993355479  get_Rotation_1() const { return ___Rotation_1; }
	inline Quaternion_t993355479 * get_address_of_Rotation_1() { return &___Rotation_1; }
	inline void set_Rotation_1(Quaternion_t993355479  value)
	{
		___Rotation_1 = value;
	}

	inline static int32_t get_offset_of_NumFramesPoseWasOff_2() { return static_cast<int32_t>(offsetof(PoseInfo_t952174556, ___NumFramesPoseWasOff_2)); }
	inline int32_t get_NumFramesPoseWasOff_2() const { return ___NumFramesPoseWasOff_2; }
	inline int32_t* get_address_of_NumFramesPoseWasOff_2() { return &___NumFramesPoseWasOff_2; }
	inline void set_NumFramesPoseWasOff_2(int32_t value)
	{
		___NumFramesPoseWasOff_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSEINFO_T952174556_H
#ifndef PIXEL_FORMAT_T507254859_H
#define PIXEL_FORMAT_T507254859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Image/PIXEL_FORMAT
struct  PIXEL_FORMAT_t507254859 
{
public:
	// System.Int32 Vuforia.Image/PIXEL_FORMAT::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PIXEL_FORMAT_t507254859, ___value___1)); }
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
#endif // PIXEL_FORMAT_T507254859_H
#ifndef KEYVALUEPAIR_2_T3145129673_H
#define KEYVALUEPAIR_2_T3145129673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct  KeyValuePair_2_t3145129673 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3145129673, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3145129673, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3145129673_H
#ifndef KEYVALUEPAIR_2_T2162506147_H
#define KEYVALUEPAIR_2_T2162506147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>
struct  KeyValuePair_2_t2162506147 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2162506147, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2162506147, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2162506147_H
#ifndef POSEAGEENTRY_T1134462591_H
#define POSEAGEENTRY_T1134462591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry
struct  PoseAgeEntry_t1134462591 
{
public:
	// Vuforia.HoloLensExtendedTrackingManager/PoseInfo Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry::Pose
	PoseInfo_t952174556  ___Pose_0;
	// Vuforia.HoloLensExtendedTrackingManager/PoseInfo Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry::CameraPose
	PoseInfo_t952174556  ___CameraPose_1;
	// System.Int32 Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry::Age
	int32_t ___Age_2;

public:
	inline static int32_t get_offset_of_Pose_0() { return static_cast<int32_t>(offsetof(PoseAgeEntry_t1134462591, ___Pose_0)); }
	inline PoseInfo_t952174556  get_Pose_0() const { return ___Pose_0; }
	inline PoseInfo_t952174556 * get_address_of_Pose_0() { return &___Pose_0; }
	inline void set_Pose_0(PoseInfo_t952174556  value)
	{
		___Pose_0 = value;
	}

	inline static int32_t get_offset_of_CameraPose_1() { return static_cast<int32_t>(offsetof(PoseAgeEntry_t1134462591, ___CameraPose_1)); }
	inline PoseInfo_t952174556  get_CameraPose_1() const { return ___CameraPose_1; }
	inline PoseInfo_t952174556 * get_address_of_CameraPose_1() { return &___CameraPose_1; }
	inline void set_CameraPose_1(PoseInfo_t952174556  value)
	{
		___CameraPose_1 = value;
	}

	inline static int32_t get_offset_of_Age_2() { return static_cast<int32_t>(offsetof(PoseAgeEntry_t1134462591, ___Age_2)); }
	inline int32_t get_Age_2() const { return ___Age_2; }
	inline int32_t* get_address_of_Age_2() { return &___Age_2; }
	inline void set_Age_2(int32_t value)
	{
		___Age_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSEAGEENTRY_T1134462591_H
#ifndef KEYVALUEPAIR_2_T2248068009_H
#define KEYVALUEPAIR_2_T2248068009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct  KeyValuePair_2_t2248068009 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ProfileData_t2140972687  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2248068009, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2248068009, ___value_1)); }
	inline ProfileData_t2140972687  get_value_1() const { return ___value_1; }
	inline ProfileData_t2140972687 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ProfileData_t2140972687  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2248068009_H
#ifndef KEYVALUEPAIR_2_T1422518221_H
#define KEYVALUEPAIR_2_T1422518221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>
struct  KeyValuePair_2_t1422518221 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableIdPair_t2990529261  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PoseAgeEntry_t1134462591  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1422518221, ___key_0)); }
	inline TrackableIdPair_t2990529261  get_key_0() const { return ___key_0; }
	inline TrackableIdPair_t2990529261 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TrackableIdPair_t2990529261  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1422518221, ___value_1)); }
	inline PoseAgeEntry_t1134462591  get_value_1() const { return ___value_1; }
	inline PoseAgeEntry_t1134462591 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(PoseAgeEntry_t1134462591  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1422518221_H
// System.String[]
struct StringU5BU5D_t56210401  : public RuntimeArray
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


// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m961490065_gshared (KeyValuePair_2_t1723176676 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2441620375_gshared (KeyValuePair_2_t1723176676 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2806610590_gshared (KeyValuePair_2_t1723176676 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m336174632_gshared (KeyValuePair_2_t1723176676 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3729632442_gshared (KeyValuePair_2_t1723176676 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m4178581561_gshared (KeyValuePair_2_t1723176676 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2961428422_gshared (KeyValuePair_2_t2162506147 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m895060694_gshared (KeyValuePair_2_t2162506147 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m30399798_gshared (KeyValuePair_2_t2162506147 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m3732189343_gshared (KeyValuePair_2_t2162506147 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m1506711026_gshared (KeyValuePair_2_t2162506147 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m4082147727_gshared (KeyValuePair_2_t2162506147 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2867317265_gshared (KeyValuePair_2_t3679519377 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1950199075_gshared (KeyValuePair_2_t3679519377 * __this, VirtualButtonData_t3917278654  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3353284800_gshared (KeyValuePair_2_t3679519377 * __this, int32_t ___key0, VirtualButtonData_t3917278654  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2262994400_gshared (KeyValuePair_2_t3679519377 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Value()
extern "C"  VirtualButtonData_t3917278654  KeyValuePair_2_get_Value_m2061980651_gshared (KeyValuePair_2_t3679519377 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1372367422_gshared (KeyValuePair_2_t3679519377 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2325539850_gshared (KeyValuePair_2_t2806900012 * __this, IntPtr_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1685291030_gshared (KeyValuePair_2_t2806900012 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2955402307_gshared (KeyValuePair_2_t2806900012 * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m1650025871_gshared (KeyValuePair_2_t2806900012 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2999629658_gshared (KeyValuePair_2_t2806900012 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3500307360_gshared (KeyValuePair_2_t2806900012 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2458271957_gshared (KeyValuePair_2_t1685999775 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3516502492_gshared (KeyValuePair_2_t1685999775 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2621766816_gshared (KeyValuePair_2_t1685999775 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1777935205_gshared (KeyValuePair_2_t1685999775 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m2441010111_gshared (KeyValuePair_2_t1685999775 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m499295571_gshared (KeyValuePair_2_t1685999775 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1322061305_gshared (KeyValuePair_2_t1720738086 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m144781874_gshared (KeyValuePair_2_t1720738086 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m260503154_gshared (KeyValuePair_2_t1720738086 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2445064929_gshared (KeyValuePair_2_t1720738086 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m2728092982_gshared (KeyValuePair_2_t1720738086 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2533433244_gshared (KeyValuePair_2_t1720738086 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2964475740_gshared (KeyValuePair_2_t2068031275 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m674996725_gshared (KeyValuePair_2_t2068031275 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4152180624_gshared (KeyValuePair_2_t2068031275 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m62745675_gshared (KeyValuePair_2_t2068031275 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3941111806_gshared (KeyValuePair_2_t2068031275 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3745938831_gshared (KeyValuePair_2_t2068031275 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1009761897_gshared (KeyValuePair_2_t1476789655 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m606177936_gshared (KeyValuePair_2_t1476789655 * __this, uint16_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3225594261_gshared (KeyValuePair_2_t1476789655 * __this, RuntimeObject * ___key0, uint16_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3663699944_gshared (KeyValuePair_2_t1476789655 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Value()
extern "C"  uint16_t KeyValuePair_2_get_Value_m3005476479_gshared (KeyValuePair_2_t1476789655 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1346361582_gshared (KeyValuePair_2_t1476789655 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3323971503_gshared (KeyValuePair_2_t2248068009 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m660994431_gshared (KeyValuePair_2_t2248068009 * __this, ProfileData_t2140972687  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4064463950_gshared (KeyValuePair_2_t2248068009 * __this, RuntimeObject * ___key0, ProfileData_t2140972687  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m77087598_gshared (KeyValuePair_2_t2248068009 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Value()
extern "C"  ProfileData_t2140972687  KeyValuePair_2_get_Value_m601466796_gshared (KeyValuePair_2_t2248068009 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m423680982_gshared (KeyValuePair_2_t2248068009 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m4025449791_gshared (KeyValuePair_2_t3145129673 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m197579227_gshared (KeyValuePair_2_t3145129673 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2219798208_gshared (KeyValuePair_2_t3145129673 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1536899443_gshared (KeyValuePair_2_t3145129673 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m148279779_gshared (KeyValuePair_2_t3145129673 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3641633883_gshared (KeyValuePair_2_t3145129673 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2182707032_gshared (KeyValuePair_2_t1422518221 * __this, TrackableIdPair_t2990529261  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2167147547_gshared (KeyValuePair_2_t1422518221 * __this, PoseAgeEntry_t1134462591  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4287756100_gshared (KeyValuePair_2_t1422518221 * __this, TrackableIdPair_t2990529261  ___key0, PoseAgeEntry_t1134462591  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::get_Key()
extern "C"  TrackableIdPair_t2990529261  KeyValuePair_2_get_Key_m1381432011_gshared (KeyValuePair_2_t1422518221 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::get_Value()
extern "C"  PoseAgeEntry_t1134462591  KeyValuePair_2_get_Value_m705133624_gshared (KeyValuePair_2_t1422518221 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1244425034_gshared (KeyValuePair_2_t1422518221 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m961490065(__this, p0, method) ((  void (*) (KeyValuePair_2_t1723176676 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m961490065_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2441620375(__this, p0, method) ((  void (*) (KeyValuePair_2_t1723176676 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m2441620375_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2806610590(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1723176676 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m2806610590_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m336174632(__this, method) ((  int32_t (*) (KeyValuePair_2_t1723176676 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m336174632_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m3729632442(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1723176676 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3729632442_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m2411924408 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m1289697295 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t56210401* ___values0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
#define KeyValuePair_2_ToString_m4178581561(__this, method) ((  String_t* (*) (KeyValuePair_2_t1723176676 *, const RuntimeMethod*))KeyValuePair_2_ToString_m4178581561_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2961428422(__this, p0, method) ((  void (*) (KeyValuePair_2_t2162506147 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m2961428422_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m895060694(__this, p0, method) ((  void (*) (KeyValuePair_2_t2162506147 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m895060694_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m30399798(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2162506147 *, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m30399798_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Key()
#define KeyValuePair_2_get_Key_m3732189343(__this, method) ((  int32_t (*) (KeyValuePair_2_t2162506147 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3732189343_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Value()
#define KeyValuePair_2_get_Value_m1506711026(__this, method) ((  int32_t (*) (KeyValuePair_2_t2162506147 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1506711026_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::ToString()
#define KeyValuePair_2_ToString_m4082147727(__this, method) ((  String_t* (*) (KeyValuePair_2_t2162506147 *, const RuntimeMethod*))KeyValuePair_2_ToString_m4082147727_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2867317265(__this, p0, method) ((  void (*) (KeyValuePair_2_t3679519377 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m2867317265_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1950199075(__this, p0, method) ((  void (*) (KeyValuePair_2_t3679519377 *, VirtualButtonData_t3917278654 , const RuntimeMethod*))KeyValuePair_2_set_Value_m1950199075_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3353284800(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3679519377 *, int32_t, VirtualButtonData_t3917278654 , const RuntimeMethod*))KeyValuePair_2__ctor_m3353284800_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Key()
#define KeyValuePair_2_get_Key_m2262994400(__this, method) ((  int32_t (*) (KeyValuePair_2_t3679519377 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2262994400_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Value()
#define KeyValuePair_2_get_Value_m2061980651(__this, method) ((  VirtualButtonData_t3917278654  (*) (KeyValuePair_2_t3679519377 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2061980651_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ToString()
#define KeyValuePair_2_ToString_m1372367422(__this, method) ((  String_t* (*) (KeyValuePair_2_t3679519377 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1372367422_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2325539850(__this, p0, method) ((  void (*) (KeyValuePair_2_t2806900012 *, IntPtr_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m2325539850_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1685291030(__this, p0, method) ((  void (*) (KeyValuePair_2_t2806900012 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m1685291030_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2955402307(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2806900012 *, IntPtr_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m2955402307_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1650025871(__this, method) ((  IntPtr_t (*) (KeyValuePair_2_t2806900012 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1650025871_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m2999629658(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2806900012 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2999629658_gshared)(__this, method)
// System.String System.IntPtr::ToString()
extern "C"  String_t* IntPtr_ToString_m3166948229 (IntPtr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
#define KeyValuePair_2_ToString_m3500307360(__this, method) ((  String_t* (*) (KeyValuePair_2_t2806900012 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3500307360_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2458271957(__this, p0, method) ((  void (*) (KeyValuePair_2_t1685999775 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m2458271957_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3516502492(__this, p0, method) ((  void (*) (KeyValuePair_2_t1685999775 *, bool, const RuntimeMethod*))KeyValuePair_2_set_Value_m3516502492_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2621766816(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1685999775 *, RuntimeObject *, bool, const RuntimeMethod*))KeyValuePair_2__ctor_m2621766816_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
#define KeyValuePair_2_get_Key_m1777935205(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1685999775 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1777935205_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
#define KeyValuePair_2_get_Value_m2441010111(__this, method) ((  bool (*) (KeyValuePair_2_t1685999775 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2441010111_gshared)(__this, method)
// System.String System.Boolean::ToString()
extern "C"  String_t* Boolean_ToString_m3370954723 (bool* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
#define KeyValuePair_2_ToString_m499295571(__this, method) ((  String_t* (*) (KeyValuePair_2_t1685999775 *, const RuntimeMethod*))KeyValuePair_2_ToString_m499295571_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1322061305(__this, p0, method) ((  void (*) (KeyValuePair_2_t1720738086 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m1322061305_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m144781874(__this, p0, method) ((  void (*) (KeyValuePair_2_t1720738086 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m144781874_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m260503154(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1720738086 *, RuntimeObject *, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m260503154_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m2445064929(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1720738086 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2445064929_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m2728092982(__this, method) ((  int32_t (*) (KeyValuePair_2_t1720738086 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2728092982_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m2533433244(__this, method) ((  String_t* (*) (KeyValuePair_2_t1720738086 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2533433244_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2964475740(__this, p0, method) ((  void (*) (KeyValuePair_2_t2068031275 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m2964475740_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m674996725(__this, p0, method) ((  void (*) (KeyValuePair_2_t2068031275 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m674996725_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m4152180624(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2068031275 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m4152180624_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m62745675(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2068031275 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m62745675_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m3941111806(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2068031275 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3941111806_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
#define KeyValuePair_2_ToString_m3745938831(__this, method) ((  String_t* (*) (KeyValuePair_2_t2068031275 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3745938831_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1009761897(__this, p0, method) ((  void (*) (KeyValuePair_2_t1476789655 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m1009761897_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m606177936(__this, p0, method) ((  void (*) (KeyValuePair_2_t1476789655 *, uint16_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m606177936_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3225594261(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1476789655 *, RuntimeObject *, uint16_t, const RuntimeMethod*))KeyValuePair_2__ctor_m3225594261_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Key()
#define KeyValuePair_2_get_Key_m3663699944(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1476789655 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3663699944_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Value()
#define KeyValuePair_2_get_Value_m3005476479(__this, method) ((  uint16_t (*) (KeyValuePair_2_t1476789655 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3005476479_gshared)(__this, method)
// System.String System.UInt16::ToString()
extern "C"  String_t* UInt16_ToString_m2435096269 (uint16_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::ToString()
#define KeyValuePair_2_ToString_m1346361582(__this, method) ((  String_t* (*) (KeyValuePair_2_t1476789655 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1346361582_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3323971503(__this, p0, method) ((  void (*) (KeyValuePair_2_t2248068009 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m3323971503_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m660994431(__this, p0, method) ((  void (*) (KeyValuePair_2_t2248068009 *, ProfileData_t2140972687 , const RuntimeMethod*))KeyValuePair_2_set_Value_m660994431_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m4064463950(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2248068009 *, RuntimeObject *, ProfileData_t2140972687 , const RuntimeMethod*))KeyValuePair_2__ctor_m4064463950_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Key()
#define KeyValuePair_2_get_Key_m77087598(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2248068009 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m77087598_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Value()
#define KeyValuePair_2_get_Value_m601466796(__this, method) ((  ProfileData_t2140972687  (*) (KeyValuePair_2_t2248068009 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m601466796_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToString()
#define KeyValuePair_2_ToString_m423680982(__this, method) ((  String_t* (*) (KeyValuePair_2_t2248068009 *, const RuntimeMethod*))KeyValuePair_2_ToString_m423680982_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m4025449791(__this, p0, method) ((  void (*) (KeyValuePair_2_t3145129673 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m4025449791_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m197579227(__this, p0, method) ((  void (*) (KeyValuePair_2_t3145129673 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m197579227_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2219798208(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3145129673 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m2219798208_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1536899443(__this, method) ((  int32_t (*) (KeyValuePair_2_t3145129673 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1536899443_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m148279779(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3145129673 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m148279779_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToString()
#define KeyValuePair_2_ToString_m3641633883(__this, method) ((  String_t* (*) (KeyValuePair_2_t3145129673 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3641633883_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2182707032(__this, p0, method) ((  void (*) (KeyValuePair_2_t1422518221 *, TrackableIdPair_t2990529261 , const RuntimeMethod*))KeyValuePair_2_set_Key_m2182707032_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2167147547(__this, p0, method) ((  void (*) (KeyValuePair_2_t1422518221 *, PoseAgeEntry_t1134462591 , const RuntimeMethod*))KeyValuePair_2_set_Value_m2167147547_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m4287756100(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1422518221 *, TrackableIdPair_t2990529261 , PoseAgeEntry_t1134462591 , const RuntimeMethod*))KeyValuePair_2__ctor_m4287756100_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::get_Key()
#define KeyValuePair_2_get_Key_m1381432011(__this, method) ((  TrackableIdPair_t2990529261  (*) (KeyValuePair_2_t1422518221 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1381432011_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::get_Value()
#define KeyValuePair_2_get_Value_m705133624(__this, method) ((  PoseAgeEntry_t1134462591  (*) (KeyValuePair_2_t1422518221 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m705133624_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::ToString()
#define KeyValuePair_2_ToString_m1244425034(__this, method) ((  String_t* (*) (KeyValuePair_2_t1422518221 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1244425034_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2806610590_gshared (KeyValuePair_2_t1723176676 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m961490065((KeyValuePair_2_t1723176676 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m2441620375((KeyValuePair_2_t1723176676 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2806610590_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1723176676 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1723176676 *>(__this + 1);
	KeyValuePair_2__ctor_m2806610590(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m336174632_gshared (KeyValuePair_2_t1723176676 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m336174632_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1723176676 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1723176676 *>(__this + 1);
	return KeyValuePair_2_get_Key_m336174632(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m961490065_gshared (KeyValuePair_2_t1723176676 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m961490065_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1723176676 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1723176676 *>(__this + 1);
	KeyValuePair_2_set_Key_m961490065(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3729632442_gshared (KeyValuePair_2_t1723176676 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3729632442_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1723176676 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1723176676 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3729632442(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2441620375_gshared (KeyValuePair_2_t1723176676 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2441620375_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1723176676 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1723176676 *>(__this + 1);
	KeyValuePair_2_set_Value_m2441620375(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m4178581561_gshared (KeyValuePair_2_t1723176676 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m4178581561_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t56210401* G_B2_1 = NULL;
	StringU5BU5D_t56210401* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t56210401* G_B1_1 = NULL;
	StringU5BU5D_t56210401* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t56210401* G_B3_2 = NULL;
	StringU5BU5D_t56210401* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t56210401* G_B5_1 = NULL;
	StringU5BU5D_t56210401* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t56210401* G_B4_1 = NULL;
	StringU5BU5D_t56210401* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t56210401* G_B6_2 = NULL;
	StringU5BU5D_t56210401* G_B6_3 = NULL;
	{
		StringU5BU5D_t56210401* L_0 = (StringU5BU5D_t56210401*)((StringU5BU5D_t56210401*)SZArrayNew(StringU5BU5D_t56210401_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4273512967);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4273512967);
		StringU5BU5D_t56210401* L_1 = (StringU5BU5D_t56210401*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m336174632((KeyValuePair_2_t1723176676 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m336174632((KeyValuePair_2_t1723176676 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m2411924408((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t56210401* L_6 = (StringU5BU5D_t56210401*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral551410592);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral551410592);
		StringU5BU5D_t56210401* L_7 = (StringU5BU5D_t56210401*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m3729632442((KeyValuePair_2_t1723176676 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m3729632442((KeyValuePair_2_t1723176676 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t56210401* L_12 = (StringU5BU5D_t56210401*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2976175714);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2976175714);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m1289697295(NULL /*static, unused*/, (StringU5BU5D_t56210401*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m4178581561_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1723176676 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1723176676 *>(__this + 1);
	return KeyValuePair_2_ToString_m4178581561(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m30399798_gshared (KeyValuePair_2_t2162506147 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2961428422((KeyValuePair_2_t2162506147 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m895060694((KeyValuePair_2_t2162506147 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m30399798_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2162506147 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2162506147 *>(__this + 1);
	KeyValuePair_2__ctor_m30399798(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m3732189343_gshared (KeyValuePair_2_t2162506147 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m3732189343_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2162506147 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2162506147 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3732189343(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2961428422_gshared (KeyValuePair_2_t2162506147 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2961428422_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2162506147 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2162506147 *>(__this + 1);
	KeyValuePair_2_set_Key_m2961428422(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m1506711026_gshared (KeyValuePair_2_t2162506147 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m1506711026_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2162506147 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2162506147 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1506711026(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m895060694_gshared (KeyValuePair_2_t2162506147 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m895060694_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2162506147 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2162506147 *>(__this + 1);
	KeyValuePair_2_set_Value_m895060694(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m4082147727_gshared (KeyValuePair_2_t2162506147 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m4082147727_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t56210401* G_B2_1 = NULL;
	StringU5BU5D_t56210401* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t56210401* G_B1_1 = NULL;
	StringU5BU5D_t56210401* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t56210401* G_B3_2 = NULL;
	StringU5BU5D_t56210401* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t56210401* G_B5_1 = NULL;
	StringU5BU5D_t56210401* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t56210401* G_B4_1 = NULL;
	StringU5BU5D_t56210401* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t56210401* G_B6_2 = NULL;
	StringU5BU5D_t56210401* G_B6_3 = NULL;
	{
		StringU5BU5D_t56210401* L_0 = (StringU5BU5D_t56210401*)((StringU5BU5D_t56210401*)SZArrayNew(StringU5BU5D_t56210401_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4273512967);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4273512967);
		StringU5BU5D_t56210401* L_1 = (StringU5BU5D_t56210401*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m3732189343((KeyValuePair_2_t2162506147 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m3732189343((KeyValuePair_2_t2162506147 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m2411924408((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t56210401* L_6 = (StringU5BU5D_t56210401*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral551410592);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral551410592);
		StringU5BU5D_t56210401* L_7 = (StringU5BU5D_t56210401*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m1506711026((KeyValuePair_2_t2162506147 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m1506711026((KeyValuePair_2_t2162506147 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_1) = *(int32_t*)UnBox(L_10);
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t56210401* L_13 = (StringU5BU5D_t56210401*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral2976175714);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2976175714);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m1289697295(NULL /*static, unused*/, (StringU5BU5D_t56210401*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m4082147727_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2162506147 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2162506147 *>(__this + 1);
	return KeyValuePair_2_ToString_m4082147727(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3353284800_gshared (KeyValuePair_2_t3679519377 * __this, int32_t ___key0, VirtualButtonData_t3917278654  ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2867317265((KeyValuePair_2_t3679519377 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		VirtualButtonData_t3917278654  L_1 = ___value1;
		KeyValuePair_2_set_Value_m1950199075((KeyValuePair_2_t3679519377 *)__this, (VirtualButtonData_t3917278654 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3353284800_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, VirtualButtonData_t3917278654  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3679519377 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3679519377 *>(__this + 1);
	KeyValuePair_2__ctor_m3353284800(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2262994400_gshared (KeyValuePair_2_t3679519377 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m2262994400_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3679519377 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3679519377 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2262994400(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2867317265_gshared (KeyValuePair_2_t3679519377 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2867317265_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3679519377 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3679519377 *>(__this + 1);
	KeyValuePair_2_set_Key_m2867317265(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Value()
extern "C"  VirtualButtonData_t3917278654  KeyValuePair_2_get_Value_m2061980651_gshared (KeyValuePair_2_t3679519377 * __this, const RuntimeMethod* method)
{
	{
		VirtualButtonData_t3917278654  L_0 = (VirtualButtonData_t3917278654 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  VirtualButtonData_t3917278654  KeyValuePair_2_get_Value_m2061980651_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3679519377 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3679519377 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2061980651(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1950199075_gshared (KeyValuePair_2_t3679519377 * __this, VirtualButtonData_t3917278654  ___value0, const RuntimeMethod* method)
{
	{
		VirtualButtonData_t3917278654  L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1950199075_AdjustorThunk (RuntimeObject * __this, VirtualButtonData_t3917278654  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3679519377 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3679519377 *>(__this + 1);
	KeyValuePair_2_set_Value_m1950199075(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1372367422_gshared (KeyValuePair_2_t3679519377 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1372367422_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VirtualButtonData_t3917278654  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t56210401* G_B2_1 = NULL;
	StringU5BU5D_t56210401* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t56210401* G_B1_1 = NULL;
	StringU5BU5D_t56210401* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t56210401* G_B3_2 = NULL;
	StringU5BU5D_t56210401* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t56210401* G_B5_1 = NULL;
	StringU5BU5D_t56210401* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t56210401* G_B4_1 = NULL;
	StringU5BU5D_t56210401* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t56210401* G_B6_2 = NULL;
	StringU5BU5D_t56210401* G_B6_3 = NULL;
	{
		StringU5BU5D_t56210401* L_0 = (StringU5BU5D_t56210401*)((StringU5BU5D_t56210401*)SZArrayNew(StringU5BU5D_t56210401_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4273512967);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4273512967);
		StringU5BU5D_t56210401* L_1 = (StringU5BU5D_t56210401*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m2262994400((KeyValuePair_2_t3679519377 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m2262994400((KeyValuePair_2_t3679519377 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m2411924408((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t56210401* L_6 = (StringU5BU5D_t56210401*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral551410592);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral551410592);
		StringU5BU5D_t56210401* L_7 = (StringU5BU5D_t56210401*)L_6;
		VirtualButtonData_t3917278654  L_8 = KeyValuePair_2_get_Value_m2061980651((KeyValuePair_2_t3679519377 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		VirtualButtonData_t3917278654  L_9 = KeyValuePair_2_get_Value_m2061980651((KeyValuePair_2_t3679519377 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (VirtualButtonData_t3917278654 )L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_1) = *(VirtualButtonData_t3917278654 *)UnBox(L_10);
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t56210401* L_13 = (StringU5BU5D_t56210401*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral2976175714);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2976175714);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m1289697295(NULL /*static, unused*/, (StringU5BU5D_t56210401*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1372367422_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3679519377 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3679519377 *>(__this + 1);
	return KeyValuePair_2_ToString_m1372367422(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2955402307_gshared (KeyValuePair_2_t2806900012 * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2325539850((KeyValuePair_2_t2806900012 *)__this, (IntPtr_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m1685291030((KeyValuePair_2_t2806900012 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2955402307_AdjustorThunk (RuntimeObject * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2806900012 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2806900012 *>(__this + 1);
	KeyValuePair_2__ctor_m2955402307(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m1650025871_gshared (KeyValuePair_2_t2806900012 * __this, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = (IntPtr_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m1650025871_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2806900012 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2806900012 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1650025871(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2325539850_gshared (KeyValuePair_2_t2806900012 * __this, IntPtr_t ___value0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2325539850_AdjustorThunk (RuntimeObject * __this, IntPtr_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2806900012 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2806900012 *>(__this + 1);
	KeyValuePair_2_set_Key_m2325539850(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2999629658_gshared (KeyValuePair_2_t2806900012 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2999629658_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2806900012 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2806900012 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2999629658(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1685291030_gshared (KeyValuePair_2_t2806900012 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1685291030_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2806900012 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2806900012 *>(__this + 1);
	KeyValuePair_2_set_Value_m1685291030(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3500307360_gshared (KeyValuePair_2_t2806900012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3500307360_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntPtr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t56210401* G_B2_1 = NULL;
	StringU5BU5D_t56210401* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t56210401* G_B1_1 = NULL;
	StringU5BU5D_t56210401* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t56210401* G_B3_2 = NULL;
	StringU5BU5D_t56210401* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t56210401* G_B5_1 = NULL;
	StringU5BU5D_t56210401* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t56210401* G_B4_1 = NULL;
	StringU5BU5D_t56210401* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t56210401* G_B6_2 = NULL;
	StringU5BU5D_t56210401* G_B6_3 = NULL;
	{
		StringU5BU5D_t56210401* L_0 = (StringU5BU5D_t56210401*)((StringU5BU5D_t56210401*)SZArrayNew(StringU5BU5D_t56210401_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4273512967);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4273512967);
		StringU5BU5D_t56210401* L_1 = (StringU5BU5D_t56210401*)L_0;
		IntPtr_t L_2 = KeyValuePair_2_get_Key_m1650025871((KeyValuePair_2_t2806900012 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		IntPtr_t L_3 = KeyValuePair_2_get_Key_m1650025871((KeyValuePair_2_t2806900012 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (IntPtr_t)L_3;
		String_t* L_4 = IntPtr_ToString_m3166948229((IntPtr_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t56210401* L_6 = (StringU5BU5D_t56210401*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral551410592);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral551410592);
		StringU5BU5D_t56210401* L_7 = (StringU5BU5D_t56210401*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m2999629658((KeyValuePair_2_t2806900012 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m2999629658((KeyValuePair_2_t2806900012 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t56210401* L_12 = (StringU5BU5D_t56210401*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2976175714);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2976175714);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m1289697295(NULL /*static, unused*/, (StringU5BU5D_t56210401*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3500307360_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2806900012 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2806900012 *>(__this + 1);
	return KeyValuePair_2_ToString_m3500307360(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2621766816_gshared (KeyValuePair_2_t1685999775 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m2458271957((KeyValuePair_2_t1685999775 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		bool L_1 = ___value1;
		KeyValuePair_2_set_Value_m3516502492((KeyValuePair_2_t1685999775 *)__this, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2621766816_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1685999775 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1685999775 *>(__this + 1);
	KeyValuePair_2__ctor_m2621766816(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1777935205_gshared (KeyValuePair_2_t1685999775 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1777935205_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1685999775 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1685999775 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1777935205(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2458271957_gshared (KeyValuePair_2_t1685999775 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2458271957_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1685999775 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1685999775 *>(__this + 1);
	KeyValuePair_2_set_Key_m2458271957(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m2441010111_gshared (KeyValuePair_2_t1685999775 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_1();
		return L_0;
	}
}
extern "C"  bool KeyValuePair_2_get_Value_m2441010111_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1685999775 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1685999775 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2441010111(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3516502492_gshared (KeyValuePair_2_t1685999775 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3516502492_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1685999775 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1685999775 *>(__this + 1);
	KeyValuePair_2_set_Value_m3516502492(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m499295571_gshared (KeyValuePair_2_t1685999775 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m499295571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t56210401* G_B2_1 = NULL;
	StringU5BU5D_t56210401* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t56210401* G_B1_1 = NULL;
	StringU5BU5D_t56210401* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t56210401* G_B3_2 = NULL;
	StringU5BU5D_t56210401* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t56210401* G_B5_1 = NULL;
	StringU5BU5D_t56210401* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t56210401* G_B4_1 = NULL;
	StringU5BU5D_t56210401* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t56210401* G_B6_2 = NULL;
	StringU5BU5D_t56210401* G_B6_3 = NULL;
	{
		StringU5BU5D_t56210401* L_0 = (StringU5BU5D_t56210401*)((StringU5BU5D_t56210401*)SZArrayNew(StringU5BU5D_t56210401_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4273512967);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4273512967);
		StringU5BU5D_t56210401* L_1 = (StringU5BU5D_t56210401*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m1777935205((KeyValuePair_2_t1685999775 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m1777935205((KeyValuePair_2_t1685999775 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		NullCheck((RuntimeObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t56210401* L_6 = (StringU5BU5D_t56210401*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral551410592);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral551410592);
		StringU5BU5D_t56210401* L_7 = (StringU5BU5D_t56210401*)L_6;
		bool L_8 = KeyValuePair_2_get_Value_m2441010111((KeyValuePair_2_t1685999775 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		bool L_9 = KeyValuePair_2_get_Value_m2441010111((KeyValuePair_2_t1685999775 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (bool)L_9;
		String_t* L_10 = Boolean_ToString_m3370954723((bool*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t56210401* L_12 = (StringU5BU5D_t56210401*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2976175714);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2976175714);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m1289697295(NULL /*static, unused*/, (StringU5BU5D_t56210401*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m499295571_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1685999775 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1685999775 *>(__this + 1);
	return KeyValuePair_2_ToString_m499295571(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m260503154_gshared (KeyValuePair_2_t1720738086 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m1322061305((KeyValuePair_2_t1720738086 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m144781874((KeyValuePair_2_t1720738086 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m260503154_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1720738086 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1720738086 *>(__this + 1);
	KeyValuePair_2__ctor_m260503154(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2445064929_gshared (KeyValuePair_2_t1720738086 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2445064929_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1720738086 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1720738086 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2445064929(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1322061305_gshared (KeyValuePair_2_t1720738086 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1322061305_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1720738086 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1720738086 *>(__this + 1);
	KeyValuePair_2_set_Key_m1322061305(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m2728092982_gshared (KeyValuePair_2_t1720738086 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m2728092982_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1720738086 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1720738086 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2728092982(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m144781874_gshared (KeyValuePair_2_t1720738086 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m144781874_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1720738086 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1720738086 *>(__this + 1);
	KeyValuePair_2_set_Value_m144781874(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2533433244_gshared (KeyValuePair_2_t1720738086 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2533433244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t56210401* G_B2_1 = NULL;
	StringU5BU5D_t56210401* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t56210401* G_B1_1 = NULL;
	StringU5BU5D_t56210401* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t56210401* G_B3_2 = NULL;
	StringU5BU5D_t56210401* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t56210401* G_B5_1 = NULL;
	StringU5BU5D_t56210401* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t56210401* G_B4_1 = NULL;
	StringU5BU5D_t56210401* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t56210401* G_B6_2 = NULL;
	StringU5BU5D_t56210401* G_B6_3 = NULL;
	{
		StringU5BU5D_t56210401* L_0 = (StringU5BU5D_t56210401*)((StringU5BU5D_t56210401*)SZArrayNew(StringU5BU5D_t56210401_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4273512967);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4273512967);
		StringU5BU5D_t56210401* L_1 = (StringU5BU5D_t56210401*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m2445064929((KeyValuePair_2_t1720738086 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m2445064929((KeyValuePair_2_t1720738086 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		NullCheck((RuntimeObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t56210401* L_6 = (StringU5BU5D_t56210401*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral551410592);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral551410592);
		StringU5BU5D_t56210401* L_7 = (StringU5BU5D_t56210401*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m2728092982((KeyValuePair_2_t1720738086 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m2728092982((KeyValuePair_2_t1720738086 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		String_t* L_10 = Int32_ToString_m2411924408((int32_t*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t56210401* L_12 = (StringU5BU5D_t56210401*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2976175714);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2976175714);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m1289697295(NULL /*static, unused*/, (StringU5BU5D_t56210401*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2533433244_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1720738086 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1720738086 *>(__this + 1);
	return KeyValuePair_2_ToString_m2533433244(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4152180624_gshared (KeyValuePair_2_t2068031275 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m2964475740((KeyValuePair_2_t2068031275 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m674996725((KeyValuePair_2_t2068031275 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m4152180624_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2068031275 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2068031275 *>(__this + 1);
	KeyValuePair_2__ctor_m4152180624(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m62745675_gshared (KeyValuePair_2_t2068031275 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m62745675_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2068031275 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2068031275 *>(__this + 1);
	return KeyValuePair_2_get_Key_m62745675(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2964475740_gshared (KeyValuePair_2_t2068031275 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2964475740_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2068031275 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2068031275 *>(__this + 1);
	KeyValuePair_2_set_Key_m2964475740(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3941111806_gshared (KeyValuePair_2_t2068031275 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3941111806_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2068031275 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2068031275 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3941111806(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m674996725_gshared (KeyValuePair_2_t2068031275 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m674996725_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2068031275 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2068031275 *>(__this + 1);
	KeyValuePair_2_set_Value_m674996725(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3745938831_gshared (KeyValuePair_2_t2068031275 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3745938831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t56210401* G_B2_1 = NULL;
	StringU5BU5D_t56210401* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t56210401* G_B1_1 = NULL;
	StringU5BU5D_t56210401* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t56210401* G_B3_2 = NULL;
	StringU5BU5D_t56210401* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t56210401* G_B5_1 = NULL;
	StringU5BU5D_t56210401* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t56210401* G_B4_1 = NULL;
	StringU5BU5D_t56210401* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t56210401* G_B6_2 = NULL;
	StringU5BU5D_t56210401* G_B6_3 = NULL;
	{
		StringU5BU5D_t56210401* L_0 = (StringU5BU5D_t56210401*)((StringU5BU5D_t56210401*)SZArrayNew(StringU5BU5D_t56210401_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4273512967);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4273512967);
		StringU5BU5D_t56210401* L_1 = (StringU5BU5D_t56210401*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m62745675((KeyValuePair_2_t2068031275 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m62745675((KeyValuePair_2_t2068031275 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		NullCheck((RuntimeObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t56210401* L_6 = (StringU5BU5D_t56210401*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral551410592);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral551410592);
		StringU5BU5D_t56210401* L_7 = (StringU5BU5D_t56210401*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m3941111806((KeyValuePair_2_t2068031275 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m3941111806((KeyValuePair_2_t2068031275 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t56210401* L_12 = (StringU5BU5D_t56210401*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2976175714);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2976175714);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m1289697295(NULL /*static, unused*/, (StringU5BU5D_t56210401*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3745938831_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2068031275 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2068031275 *>(__this + 1);
	return KeyValuePair_2_ToString_m3745938831(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3225594261_gshared (KeyValuePair_2_t1476789655 * __this, RuntimeObject * ___key0, uint16_t ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m1009761897((KeyValuePair_2_t1476789655 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint16_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m606177936((KeyValuePair_2_t1476789655 *)__this, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3225594261_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, uint16_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1476789655 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1476789655 *>(__this + 1);
	KeyValuePair_2__ctor_m3225594261(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3663699944_gshared (KeyValuePair_2_t1476789655 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3663699944_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1476789655 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1476789655 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3663699944(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1009761897_gshared (KeyValuePair_2_t1476789655 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1009761897_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1476789655 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1476789655 *>(__this + 1);
	KeyValuePair_2_set_Key_m1009761897(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Value()
extern "C"  uint16_t KeyValuePair_2_get_Value_m3005476479_gshared (KeyValuePair_2_t1476789655 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = (uint16_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  uint16_t KeyValuePair_2_get_Value_m3005476479_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1476789655 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1476789655 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3005476479(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m606177936_gshared (KeyValuePair_2_t1476789655 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m606177936_AdjustorThunk (RuntimeObject * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1476789655 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1476789655 *>(__this + 1);
	KeyValuePair_2_set_Value_m606177936(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1346361582_gshared (KeyValuePair_2_t1476789655 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1346361582_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	uint16_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t56210401* G_B2_1 = NULL;
	StringU5BU5D_t56210401* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t56210401* G_B1_1 = NULL;
	StringU5BU5D_t56210401* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t56210401* G_B3_2 = NULL;
	StringU5BU5D_t56210401* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t56210401* G_B5_1 = NULL;
	StringU5BU5D_t56210401* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t56210401* G_B4_1 = NULL;
	StringU5BU5D_t56210401* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t56210401* G_B6_2 = NULL;
	StringU5BU5D_t56210401* G_B6_3 = NULL;
	{
		StringU5BU5D_t56210401* L_0 = (StringU5BU5D_t56210401*)((StringU5BU5D_t56210401*)SZArrayNew(StringU5BU5D_t56210401_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4273512967);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4273512967);
		StringU5BU5D_t56210401* L_1 = (StringU5BU5D_t56210401*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m3663699944((KeyValuePair_2_t1476789655 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m3663699944((KeyValuePair_2_t1476789655 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		NullCheck((RuntimeObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t56210401* L_6 = (StringU5BU5D_t56210401*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral551410592);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral551410592);
		StringU5BU5D_t56210401* L_7 = (StringU5BU5D_t56210401*)L_6;
		uint16_t L_8 = KeyValuePair_2_get_Value_m3005476479((KeyValuePair_2_t1476789655 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		uint16_t L_9 = KeyValuePair_2_get_Value_m3005476479((KeyValuePair_2_t1476789655 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (uint16_t)L_9;
		String_t* L_10 = UInt16_ToString_m2435096269((uint16_t*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t56210401* L_12 = (StringU5BU5D_t56210401*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2976175714);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2976175714);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m1289697295(NULL /*static, unused*/, (StringU5BU5D_t56210401*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1346361582_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1476789655 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1476789655 *>(__this + 1);
	return KeyValuePair_2_ToString_m1346361582(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4064463950_gshared (KeyValuePair_2_t2248068009 * __this, RuntimeObject * ___key0, ProfileData_t2140972687  ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m3323971503((KeyValuePair_2_t2248068009 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ProfileData_t2140972687  L_1 = ___value1;
		KeyValuePair_2_set_Value_m660994431((KeyValuePair_2_t2248068009 *)__this, (ProfileData_t2140972687 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m4064463950_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, ProfileData_t2140972687  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2248068009 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2248068009 *>(__this + 1);
	KeyValuePair_2__ctor_m4064463950(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m77087598_gshared (KeyValuePair_2_t2248068009 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m77087598_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2248068009 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2248068009 *>(__this + 1);
	return KeyValuePair_2_get_Key_m77087598(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3323971503_gshared (KeyValuePair_2_t2248068009 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3323971503_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2248068009 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2248068009 *>(__this + 1);
	KeyValuePair_2_set_Key_m3323971503(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Value()
extern "C"  ProfileData_t2140972687  KeyValuePair_2_get_Value_m601466796_gshared (KeyValuePair_2_t2248068009 * __this, const RuntimeMethod* method)
{
	{
		ProfileData_t2140972687  L_0 = (ProfileData_t2140972687 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  ProfileData_t2140972687  KeyValuePair_2_get_Value_m601466796_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2248068009 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2248068009 *>(__this + 1);
	return KeyValuePair_2_get_Value_m601466796(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m660994431_gshared (KeyValuePair_2_t2248068009 * __this, ProfileData_t2140972687  ___value0, const RuntimeMethod* method)
{
	{
		ProfileData_t2140972687  L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m660994431_AdjustorThunk (RuntimeObject * __this, ProfileData_t2140972687  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2248068009 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2248068009 *>(__this + 1);
	KeyValuePair_2_set_Value_m660994431(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m423680982_gshared (KeyValuePair_2_t2248068009 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m423680982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	ProfileData_t2140972687  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t56210401* G_B2_1 = NULL;
	StringU5BU5D_t56210401* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t56210401* G_B1_1 = NULL;
	StringU5BU5D_t56210401* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t56210401* G_B3_2 = NULL;
	StringU5BU5D_t56210401* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t56210401* G_B5_1 = NULL;
	StringU5BU5D_t56210401* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t56210401* G_B4_1 = NULL;
	StringU5BU5D_t56210401* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t56210401* G_B6_2 = NULL;
	StringU5BU5D_t56210401* G_B6_3 = NULL;
	{
		StringU5BU5D_t56210401* L_0 = (StringU5BU5D_t56210401*)((StringU5BU5D_t56210401*)SZArrayNew(StringU5BU5D_t56210401_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4273512967);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4273512967);
		StringU5BU5D_t56210401* L_1 = (StringU5BU5D_t56210401*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m77087598((KeyValuePair_2_t2248068009 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m77087598((KeyValuePair_2_t2248068009 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		NullCheck((RuntimeObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t56210401* L_6 = (StringU5BU5D_t56210401*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral551410592);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral551410592);
		StringU5BU5D_t56210401* L_7 = (StringU5BU5D_t56210401*)L_6;
		ProfileData_t2140972687  L_8 = KeyValuePair_2_get_Value_m601466796((KeyValuePair_2_t2248068009 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		ProfileData_t2140972687  L_9 = KeyValuePair_2_get_Value_m601466796((KeyValuePair_2_t2248068009 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (ProfileData_t2140972687 )L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_1) = *(ProfileData_t2140972687 *)UnBox(L_10);
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t56210401* L_13 = (StringU5BU5D_t56210401*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral2976175714);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2976175714);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m1289697295(NULL /*static, unused*/, (StringU5BU5D_t56210401*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m423680982_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2248068009 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2248068009 *>(__this + 1);
	return KeyValuePair_2_ToString_m423680982(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2219798208_gshared (KeyValuePair_2_t3145129673 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m4025449791((KeyValuePair_2_t3145129673 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m197579227((KeyValuePair_2_t3145129673 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2219798208_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3145129673 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3145129673 *>(__this + 1);
	KeyValuePair_2__ctor_m2219798208(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1536899443_gshared (KeyValuePair_2_t3145129673 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1536899443_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3145129673 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3145129673 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1536899443(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m4025449791_gshared (KeyValuePair_2_t3145129673 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m4025449791_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3145129673 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3145129673 *>(__this + 1);
	KeyValuePair_2_set_Key_m4025449791(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m148279779_gshared (KeyValuePair_2_t3145129673 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m148279779_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3145129673 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3145129673 *>(__this + 1);
	return KeyValuePair_2_get_Value_m148279779(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m197579227_gshared (KeyValuePair_2_t3145129673 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m197579227_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3145129673 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3145129673 *>(__this + 1);
	KeyValuePair_2_set_Value_m197579227(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3641633883_gshared (KeyValuePair_2_t3145129673 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3641633883_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t56210401* G_B2_1 = NULL;
	StringU5BU5D_t56210401* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t56210401* G_B1_1 = NULL;
	StringU5BU5D_t56210401* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t56210401* G_B3_2 = NULL;
	StringU5BU5D_t56210401* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t56210401* G_B5_1 = NULL;
	StringU5BU5D_t56210401* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t56210401* G_B4_1 = NULL;
	StringU5BU5D_t56210401* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t56210401* G_B6_2 = NULL;
	StringU5BU5D_t56210401* G_B6_3 = NULL;
	{
		StringU5BU5D_t56210401* L_0 = (StringU5BU5D_t56210401*)((StringU5BU5D_t56210401*)SZArrayNew(StringU5BU5D_t56210401_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4273512967);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4273512967);
		StringU5BU5D_t56210401* L_1 = (StringU5BU5D_t56210401*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m1536899443((KeyValuePair_2_t3145129673 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m1536899443((KeyValuePair_2_t3145129673 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0));
		NullCheck((RuntimeObject *)L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_4);
		*(&V_0) = *(int32_t*)UnBox(L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t56210401* L_7 = (StringU5BU5D_t56210401*)G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral551410592);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral551410592);
		StringU5BU5D_t56210401* L_8 = (StringU5BU5D_t56210401*)L_7;
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m148279779((KeyValuePair_2_t3145129673 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!L_9)
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_10 = KeyValuePair_2_get_Value_m148279779((KeyValuePair_2_t3145129673 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_10;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t56210401* L_13 = (StringU5BU5D_t56210401*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral2976175714);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2976175714);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m1289697295(NULL /*static, unused*/, (StringU5BU5D_t56210401*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3641633883_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3145129673 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3145129673 *>(__this + 1);
	return KeyValuePair_2_ToString_m3641633883(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4287756100_gshared (KeyValuePair_2_t1422518221 * __this, TrackableIdPair_t2990529261  ___key0, PoseAgeEntry_t1134462591  ___value1, const RuntimeMethod* method)
{
	{
		TrackableIdPair_t2990529261  L_0 = ___key0;
		KeyValuePair_2_set_Key_m2182707032((KeyValuePair_2_t1422518221 *)__this, (TrackableIdPair_t2990529261 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		PoseAgeEntry_t1134462591  L_1 = ___value1;
		KeyValuePair_2_set_Value_m2167147547((KeyValuePair_2_t1422518221 *)__this, (PoseAgeEntry_t1134462591 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m4287756100_AdjustorThunk (RuntimeObject * __this, TrackableIdPair_t2990529261  ___key0, PoseAgeEntry_t1134462591  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1422518221 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1422518221 *>(__this + 1);
	KeyValuePair_2__ctor_m4287756100(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::get_Key()
extern "C"  TrackableIdPair_t2990529261  KeyValuePair_2_get_Key_m1381432011_gshared (KeyValuePair_2_t1422518221 * __this, const RuntimeMethod* method)
{
	{
		TrackableIdPair_t2990529261  L_0 = (TrackableIdPair_t2990529261 )__this->get_key_0();
		return L_0;
	}
}
extern "C"  TrackableIdPair_t2990529261  KeyValuePair_2_get_Key_m1381432011_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1422518221 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1422518221 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1381432011(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2182707032_gshared (KeyValuePair_2_t1422518221 * __this, TrackableIdPair_t2990529261  ___value0, const RuntimeMethod* method)
{
	{
		TrackableIdPair_t2990529261  L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2182707032_AdjustorThunk (RuntimeObject * __this, TrackableIdPair_t2990529261  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1422518221 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1422518221 *>(__this + 1);
	KeyValuePair_2_set_Key_m2182707032(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::get_Value()
extern "C"  PoseAgeEntry_t1134462591  KeyValuePair_2_get_Value_m705133624_gshared (KeyValuePair_2_t1422518221 * __this, const RuntimeMethod* method)
{
	{
		PoseAgeEntry_t1134462591  L_0 = (PoseAgeEntry_t1134462591 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  PoseAgeEntry_t1134462591  KeyValuePair_2_get_Value_m705133624_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1422518221 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1422518221 *>(__this + 1);
	return KeyValuePair_2_get_Value_m705133624(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2167147547_gshared (KeyValuePair_2_t1422518221 * __this, PoseAgeEntry_t1134462591  ___value0, const RuntimeMethod* method)
{
	{
		PoseAgeEntry_t1134462591  L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2167147547_AdjustorThunk (RuntimeObject * __this, PoseAgeEntry_t1134462591  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1422518221 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1422518221 *>(__this + 1);
	KeyValuePair_2_set_Value_m2167147547(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1244425034_gshared (KeyValuePair_2_t1422518221 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1244425034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TrackableIdPair_t2990529261  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PoseAgeEntry_t1134462591  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t56210401* G_B2_1 = NULL;
	StringU5BU5D_t56210401* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t56210401* G_B1_1 = NULL;
	StringU5BU5D_t56210401* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t56210401* G_B3_2 = NULL;
	StringU5BU5D_t56210401* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t56210401* G_B5_1 = NULL;
	StringU5BU5D_t56210401* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t56210401* G_B4_1 = NULL;
	StringU5BU5D_t56210401* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t56210401* G_B6_2 = NULL;
	StringU5BU5D_t56210401* G_B6_3 = NULL;
	{
		StringU5BU5D_t56210401* L_0 = (StringU5BU5D_t56210401*)((StringU5BU5D_t56210401*)SZArrayNew(StringU5BU5D_t56210401_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4273512967);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4273512967);
		StringU5BU5D_t56210401* L_1 = (StringU5BU5D_t56210401*)L_0;
		TrackableIdPair_t2990529261  L_2 = KeyValuePair_2_get_Key_m1381432011((KeyValuePair_2_t1422518221 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		TrackableIdPair_t2990529261  L_3 = KeyValuePair_2_get_Key_m1381432011((KeyValuePair_2_t1422518221 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (TrackableIdPair_t2990529261 )L_3;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0));
		NullCheck((RuntimeObject *)L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_4);
		*(&V_0) = *(TrackableIdPair_t2990529261 *)UnBox(L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t56210401* L_7 = (StringU5BU5D_t56210401*)G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral551410592);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral551410592);
		StringU5BU5D_t56210401* L_8 = (StringU5BU5D_t56210401*)L_7;
		PoseAgeEntry_t1134462591  L_9 = KeyValuePair_2_get_Value_m705133624((KeyValuePair_2_t1422518221 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
	}
	{
		PoseAgeEntry_t1134462591  L_10 = KeyValuePair_2_get_Value_m705133624((KeyValuePair_2_t1422518221 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (PoseAgeEntry_t1134462591 )L_10;
		RuntimeObject * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((RuntimeObject *)L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_11);
		*(&V_1) = *(PoseAgeEntry_t1134462591 *)UnBox(L_11);
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_13;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t56210401* L_14 = (StringU5BU5D_t56210401*)G_B6_3;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral2976175714);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2976175714);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m1289697295(NULL /*static, unused*/, (StringU5BU5D_t56210401*)L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1244425034_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1422518221 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1422518221 *>(__this + 1);
	return KeyValuePair_2_ToString_m1244425034(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
