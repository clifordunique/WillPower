#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// wearyscript
struct  wearyscript_t9880941  : public MonoBehaviour_t1158329972
{
public:
	// PlayerController wearyscript::playscript
	PlayerController_t4148409433 * ___playscript_2;
	// UnityEngine.UI.Image wearyscript::myimage
	Image_t2042527209 * ___myimage_3;
	// System.Single wearyscript::maxalpha
	float ___maxalpha_4;

public:
	inline static int32_t get_offset_of_playscript_2() { return static_cast<int32_t>(offsetof(wearyscript_t9880941, ___playscript_2)); }
	inline PlayerController_t4148409433 * get_playscript_2() const { return ___playscript_2; }
	inline PlayerController_t4148409433 ** get_address_of_playscript_2() { return &___playscript_2; }
	inline void set_playscript_2(PlayerController_t4148409433 * value)
	{
		___playscript_2 = value;
		Il2CppCodeGenWriteBarrier(&___playscript_2, value);
	}

	inline static int32_t get_offset_of_myimage_3() { return static_cast<int32_t>(offsetof(wearyscript_t9880941, ___myimage_3)); }
	inline Image_t2042527209 * get_myimage_3() const { return ___myimage_3; }
	inline Image_t2042527209 ** get_address_of_myimage_3() { return &___myimage_3; }
	inline void set_myimage_3(Image_t2042527209 * value)
	{
		___myimage_3 = value;
		Il2CppCodeGenWriteBarrier(&___myimage_3, value);
	}

	inline static int32_t get_offset_of_maxalpha_4() { return static_cast<int32_t>(offsetof(wearyscript_t9880941, ___maxalpha_4)); }
	inline float get_maxalpha_4() const { return ___maxalpha_4; }
	inline float* get_address_of_maxalpha_4() { return &___maxalpha_4; }
	inline void set_maxalpha_4(float value)
	{
		___maxalpha_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
