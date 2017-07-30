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

// HallucinationController
struct  HallucinationController_t3118580067  : public MonoBehaviour_t1158329972
{
public:
	// PlayerController HallucinationController::playcont
	PlayerController_t4148409433 * ___playcont_2;

public:
	inline static int32_t get_offset_of_playcont_2() { return static_cast<int32_t>(offsetof(HallucinationController_t3118580067, ___playcont_2)); }
	inline PlayerController_t4148409433 * get_playcont_2() const { return ___playcont_2; }
	inline PlayerController_t4148409433 ** get_address_of_playcont_2() { return &___playcont_2; }
	inline void set_playcont_2(PlayerController_t4148409433 * value)
	{
		___playcont_2 = value;
		Il2CppCodeGenWriteBarrier(&___playcont_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
