#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BlinkScript
struct  BlinkScript_t338104339  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BlinkScript::blinkspeed
	float ___blinkspeed_2;
	// System.Single BlinkScript::blinkdist
	float ___blinkdist_3;
	// UnityEngine.Transform BlinkScript::Blink1
	Transform_t3275118058 * ___Blink1_4;
	// UnityEngine.Transform BlinkScript::Blink2
	Transform_t3275118058 * ___Blink2_5;
	// UnityEngine.Vector3 BlinkScript::blink1_vel
	Vector3_t2243707580  ___blink1_vel_6;
	// UnityEngine.Vector3 BlinkScript::blink2_vel
	Vector3_t2243707580  ___blink2_vel_7;
	// System.Boolean BlinkScript::blinking
	bool ___blinking_8;
	// System.Single BlinkScript::blinktime
	float ___blinktime_9;
	// System.Single BlinkScript::blinkcounter
	float ___blinkcounter_10;
	// System.Single BlinkScript::maxblinktime
	float ___maxblinktime_11;
	// System.Single BlinkScript::minblinktime
	float ___minblinktime_12;

public:
	inline static int32_t get_offset_of_blinkspeed_2() { return static_cast<int32_t>(offsetof(BlinkScript_t338104339, ___blinkspeed_2)); }
	inline float get_blinkspeed_2() const { return ___blinkspeed_2; }
	inline float* get_address_of_blinkspeed_2() { return &___blinkspeed_2; }
	inline void set_blinkspeed_2(float value)
	{
		___blinkspeed_2 = value;
	}

	inline static int32_t get_offset_of_blinkdist_3() { return static_cast<int32_t>(offsetof(BlinkScript_t338104339, ___blinkdist_3)); }
	inline float get_blinkdist_3() const { return ___blinkdist_3; }
	inline float* get_address_of_blinkdist_3() { return &___blinkdist_3; }
	inline void set_blinkdist_3(float value)
	{
		___blinkdist_3 = value;
	}

	inline static int32_t get_offset_of_Blink1_4() { return static_cast<int32_t>(offsetof(BlinkScript_t338104339, ___Blink1_4)); }
	inline Transform_t3275118058 * get_Blink1_4() const { return ___Blink1_4; }
	inline Transform_t3275118058 ** get_address_of_Blink1_4() { return &___Blink1_4; }
	inline void set_Blink1_4(Transform_t3275118058 * value)
	{
		___Blink1_4 = value;
		Il2CppCodeGenWriteBarrier(&___Blink1_4, value);
	}

	inline static int32_t get_offset_of_Blink2_5() { return static_cast<int32_t>(offsetof(BlinkScript_t338104339, ___Blink2_5)); }
	inline Transform_t3275118058 * get_Blink2_5() const { return ___Blink2_5; }
	inline Transform_t3275118058 ** get_address_of_Blink2_5() { return &___Blink2_5; }
	inline void set_Blink2_5(Transform_t3275118058 * value)
	{
		___Blink2_5 = value;
		Il2CppCodeGenWriteBarrier(&___Blink2_5, value);
	}

	inline static int32_t get_offset_of_blink1_vel_6() { return static_cast<int32_t>(offsetof(BlinkScript_t338104339, ___blink1_vel_6)); }
	inline Vector3_t2243707580  get_blink1_vel_6() const { return ___blink1_vel_6; }
	inline Vector3_t2243707580 * get_address_of_blink1_vel_6() { return &___blink1_vel_6; }
	inline void set_blink1_vel_6(Vector3_t2243707580  value)
	{
		___blink1_vel_6 = value;
	}

	inline static int32_t get_offset_of_blink2_vel_7() { return static_cast<int32_t>(offsetof(BlinkScript_t338104339, ___blink2_vel_7)); }
	inline Vector3_t2243707580  get_blink2_vel_7() const { return ___blink2_vel_7; }
	inline Vector3_t2243707580 * get_address_of_blink2_vel_7() { return &___blink2_vel_7; }
	inline void set_blink2_vel_7(Vector3_t2243707580  value)
	{
		___blink2_vel_7 = value;
	}

	inline static int32_t get_offset_of_blinking_8() { return static_cast<int32_t>(offsetof(BlinkScript_t338104339, ___blinking_8)); }
	inline bool get_blinking_8() const { return ___blinking_8; }
	inline bool* get_address_of_blinking_8() { return &___blinking_8; }
	inline void set_blinking_8(bool value)
	{
		___blinking_8 = value;
	}

	inline static int32_t get_offset_of_blinktime_9() { return static_cast<int32_t>(offsetof(BlinkScript_t338104339, ___blinktime_9)); }
	inline float get_blinktime_9() const { return ___blinktime_9; }
	inline float* get_address_of_blinktime_9() { return &___blinktime_9; }
	inline void set_blinktime_9(float value)
	{
		___blinktime_9 = value;
	}

	inline static int32_t get_offset_of_blinkcounter_10() { return static_cast<int32_t>(offsetof(BlinkScript_t338104339, ___blinkcounter_10)); }
	inline float get_blinkcounter_10() const { return ___blinkcounter_10; }
	inline float* get_address_of_blinkcounter_10() { return &___blinkcounter_10; }
	inline void set_blinkcounter_10(float value)
	{
		___blinkcounter_10 = value;
	}

	inline static int32_t get_offset_of_maxblinktime_11() { return static_cast<int32_t>(offsetof(BlinkScript_t338104339, ___maxblinktime_11)); }
	inline float get_maxblinktime_11() const { return ___maxblinktime_11; }
	inline float* get_address_of_maxblinktime_11() { return &___maxblinktime_11; }
	inline void set_maxblinktime_11(float value)
	{
		___maxblinktime_11 = value;
	}

	inline static int32_t get_offset_of_minblinktime_12() { return static_cast<int32_t>(offsetof(BlinkScript_t338104339, ___minblinktime_12)); }
	inline float get_minblinktime_12() const { return ___minblinktime_12; }
	inline float* get_address_of_minblinktime_12() { return &___minblinktime_12; }
	inline void set_minblinktime_12(float value)
	{
		___minblinktime_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
