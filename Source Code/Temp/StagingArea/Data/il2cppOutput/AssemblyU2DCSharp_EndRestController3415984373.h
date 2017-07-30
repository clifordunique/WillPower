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
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EndRestController
struct  EndRestController_t3415984373  : public MonoBehaviour_t1158329972
{
public:
	// PlayerController EndRestController::playerscript
	PlayerController_t4148409433 * ___playerscript_2;
	// System.Single EndRestController::restrate
	float ___restrate_3;
	// UnityEngine.GameObject EndRestController::willpowertext
	GameObject_t1756533147 * ___willpowertext_4;

public:
	inline static int32_t get_offset_of_playerscript_2() { return static_cast<int32_t>(offsetof(EndRestController_t3415984373, ___playerscript_2)); }
	inline PlayerController_t4148409433 * get_playerscript_2() const { return ___playerscript_2; }
	inline PlayerController_t4148409433 ** get_address_of_playerscript_2() { return &___playerscript_2; }
	inline void set_playerscript_2(PlayerController_t4148409433 * value)
	{
		___playerscript_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerscript_2, value);
	}

	inline static int32_t get_offset_of_restrate_3() { return static_cast<int32_t>(offsetof(EndRestController_t3415984373, ___restrate_3)); }
	inline float get_restrate_3() const { return ___restrate_3; }
	inline float* get_address_of_restrate_3() { return &___restrate_3; }
	inline void set_restrate_3(float value)
	{
		___restrate_3 = value;
	}

	inline static int32_t get_offset_of_willpowertext_4() { return static_cast<int32_t>(offsetof(EndRestController_t3415984373, ___willpowertext_4)); }
	inline GameObject_t1756533147 * get_willpowertext_4() const { return ___willpowertext_4; }
	inline GameObject_t1756533147 ** get_address_of_willpowertext_4() { return &___willpowertext_4; }
	inline void set_willpowertext_4(GameObject_t1756533147 * value)
	{
		___willpowertext_4 = value;
		Il2CppCodeGenWriteBarrier(&___willpowertext_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
