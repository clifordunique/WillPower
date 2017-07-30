#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3555666667  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CameraController::playcont
	GameObject_t1756533147 * ___playcont_2;
	// System.Single CameraController::zpos
	float ___zpos_3;

public:
	inline static int32_t get_offset_of_playcont_2() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___playcont_2)); }
	inline GameObject_t1756533147 * get_playcont_2() const { return ___playcont_2; }
	inline GameObject_t1756533147 ** get_address_of_playcont_2() { return &___playcont_2; }
	inline void set_playcont_2(GameObject_t1756533147 * value)
	{
		___playcont_2 = value;
		Il2CppCodeGenWriteBarrier(&___playcont_2, value);
	}

	inline static int32_t get_offset_of_zpos_3() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___zpos_3)); }
	inline float get_zpos_3() const { return ___zpos_3; }
	inline float* get_address_of_zpos_3() { return &___zpos_3; }
	inline void set_zpos_3(float value)
	{
		___zpos_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
