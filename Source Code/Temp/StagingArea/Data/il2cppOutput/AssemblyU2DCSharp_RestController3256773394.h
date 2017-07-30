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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestController
struct  RestController_t3256773394  : public MonoBehaviour_t1158329972
{
public:
	// PlayerController RestController::playerscript
	PlayerController_t4148409433 * ___playerscript_2;
	// System.Single RestController::restrate
	float ___restrate_3;

public:
	inline static int32_t get_offset_of_playerscript_2() { return static_cast<int32_t>(offsetof(RestController_t3256773394, ___playerscript_2)); }
	inline PlayerController_t4148409433 * get_playerscript_2() const { return ___playerscript_2; }
	inline PlayerController_t4148409433 ** get_address_of_playerscript_2() { return &___playerscript_2; }
	inline void set_playerscript_2(PlayerController_t4148409433 * value)
	{
		___playerscript_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerscript_2, value);
	}

	inline static int32_t get_offset_of_restrate_3() { return static_cast<int32_t>(offsetof(RestController_t3256773394, ___restrate_3)); }
	inline float get_restrate_3() const { return ___restrate_3; }
	inline float* get_address_of_restrate_3() { return &___restrate_3; }
	inline void set_restrate_3(float value)
	{
		___restrate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
