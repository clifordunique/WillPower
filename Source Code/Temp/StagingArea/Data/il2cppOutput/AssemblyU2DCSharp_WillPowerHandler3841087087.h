#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// PlayerController
struct PlayerController_t4148409433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WillPowerHandler
struct  WillPowerHandler_t3841087087  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text WillPowerHandler::willpowtext
	Text_t356221433 * ___willpowtext_2;
	// PlayerController WillPowerHandler::playcont
	PlayerController_t4148409433 * ___playcont_3;

public:
	inline static int32_t get_offset_of_willpowtext_2() { return static_cast<int32_t>(offsetof(WillPowerHandler_t3841087087, ___willpowtext_2)); }
	inline Text_t356221433 * get_willpowtext_2() const { return ___willpowtext_2; }
	inline Text_t356221433 ** get_address_of_willpowtext_2() { return &___willpowtext_2; }
	inline void set_willpowtext_2(Text_t356221433 * value)
	{
		___willpowtext_2 = value;
		Il2CppCodeGenWriteBarrier(&___willpowtext_2, value);
	}

	inline static int32_t get_offset_of_playcont_3() { return static_cast<int32_t>(offsetof(WillPowerHandler_t3841087087, ___playcont_3)); }
	inline PlayerController_t4148409433 * get_playcont_3() const { return ___playcont_3; }
	inline PlayerController_t4148409433 ** get_address_of_playcont_3() { return &___playcont_3; }
	inline void set_playcont_3(PlayerController_t4148409433 * value)
	{
		___playcont_3 = value;
		Il2CppCodeGenWriteBarrier(&___playcont_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
