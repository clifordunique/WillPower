#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// CollisionController
struct CollisionController_t136233908;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerController::gravity
	float ___gravity_2;
	// UnityEngine.Vector2 PlayerController::velocity
	Vector2_t2243707579  ___velocity_3;
	// CollisionController PlayerController::controller
	CollisionController_t136233908 * ___controller_4;
	// System.Single PlayerController::jumpspd
	float ___jumpspd_5;
	// System.Single PlayerController::movespd
	float ___movespd_6;
	// System.Single PlayerController::hallucination_multiplier
	float ___hallucination_multiplier_7;
	// System.Boolean PlayerController::hallucinating
	bool ___hallucinating_8;
	// System.Single PlayerController::velocityXSmoothing
	float ___velocityXSmoothing_9;
	// System.Single PlayerController::accelerationTimeGrounded
	float ___accelerationTimeGrounded_10;
	// System.Single PlayerController::accelerationTimeAirborne
	float ___accelerationTimeAirborne_11;
	// System.Single PlayerController::sprintmultiplier
	float ___sprintmultiplier_12;
	// System.Single PlayerController::termvel
	float ___termvel_13;
	// System.Single PlayerController::platfallcounter
	float ___platfallcounter_14;
	// System.Single PlayerController::platfalltime
	float ___platfalltime_15;
	// System.Single PlayerController::willpowercapacity
	float ___willpowercapacity_16;
	// System.Single PlayerController::willpower
	float ___willpower_17;
	// System.Single PlayerController::willpowerdrain
	float ___willpowerdrain_18;
	// System.Single PlayerController::walkdrain
	float ___walkdrain_19;
	// System.Single PlayerController::rundrain
	float ___rundrain_20;
	// System.Single PlayerController::jumpdrain
	float ___jumpdrain_21;
	// System.Single PlayerController::normrestrate
	float ___normrestrate_22;
	// System.Single PlayerController::restrate
	float ___restrate_23;
	// System.Boolean PlayerController::resting
	bool ___resting_24;

public:
	inline static int32_t get_offset_of_gravity_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___gravity_2)); }
	inline float get_gravity_2() const { return ___gravity_2; }
	inline float* get_address_of_gravity_2() { return &___gravity_2; }
	inline void set_gravity_2(float value)
	{
		___gravity_2 = value;
	}

	inline static int32_t get_offset_of_velocity_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___velocity_3)); }
	inline Vector2_t2243707579  get_velocity_3() const { return ___velocity_3; }
	inline Vector2_t2243707579 * get_address_of_velocity_3() { return &___velocity_3; }
	inline void set_velocity_3(Vector2_t2243707579  value)
	{
		___velocity_3 = value;
	}

	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___controller_4)); }
	inline CollisionController_t136233908 * get_controller_4() const { return ___controller_4; }
	inline CollisionController_t136233908 ** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(CollisionController_t136233908 * value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier(&___controller_4, value);
	}

	inline static int32_t get_offset_of_jumpspd_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___jumpspd_5)); }
	inline float get_jumpspd_5() const { return ___jumpspd_5; }
	inline float* get_address_of_jumpspd_5() { return &___jumpspd_5; }
	inline void set_jumpspd_5(float value)
	{
		___jumpspd_5 = value;
	}

	inline static int32_t get_offset_of_movespd_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___movespd_6)); }
	inline float get_movespd_6() const { return ___movespd_6; }
	inline float* get_address_of_movespd_6() { return &___movespd_6; }
	inline void set_movespd_6(float value)
	{
		___movespd_6 = value;
	}

	inline static int32_t get_offset_of_hallucination_multiplier_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___hallucination_multiplier_7)); }
	inline float get_hallucination_multiplier_7() const { return ___hallucination_multiplier_7; }
	inline float* get_address_of_hallucination_multiplier_7() { return &___hallucination_multiplier_7; }
	inline void set_hallucination_multiplier_7(float value)
	{
		___hallucination_multiplier_7 = value;
	}

	inline static int32_t get_offset_of_hallucinating_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___hallucinating_8)); }
	inline bool get_hallucinating_8() const { return ___hallucinating_8; }
	inline bool* get_address_of_hallucinating_8() { return &___hallucinating_8; }
	inline void set_hallucinating_8(bool value)
	{
		___hallucinating_8 = value;
	}

	inline static int32_t get_offset_of_velocityXSmoothing_9() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___velocityXSmoothing_9)); }
	inline float get_velocityXSmoothing_9() const { return ___velocityXSmoothing_9; }
	inline float* get_address_of_velocityXSmoothing_9() { return &___velocityXSmoothing_9; }
	inline void set_velocityXSmoothing_9(float value)
	{
		___velocityXSmoothing_9 = value;
	}

	inline static int32_t get_offset_of_accelerationTimeGrounded_10() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___accelerationTimeGrounded_10)); }
	inline float get_accelerationTimeGrounded_10() const { return ___accelerationTimeGrounded_10; }
	inline float* get_address_of_accelerationTimeGrounded_10() { return &___accelerationTimeGrounded_10; }
	inline void set_accelerationTimeGrounded_10(float value)
	{
		___accelerationTimeGrounded_10 = value;
	}

	inline static int32_t get_offset_of_accelerationTimeAirborne_11() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___accelerationTimeAirborne_11)); }
	inline float get_accelerationTimeAirborne_11() const { return ___accelerationTimeAirborne_11; }
	inline float* get_address_of_accelerationTimeAirborne_11() { return &___accelerationTimeAirborne_11; }
	inline void set_accelerationTimeAirborne_11(float value)
	{
		___accelerationTimeAirborne_11 = value;
	}

	inline static int32_t get_offset_of_sprintmultiplier_12() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___sprintmultiplier_12)); }
	inline float get_sprintmultiplier_12() const { return ___sprintmultiplier_12; }
	inline float* get_address_of_sprintmultiplier_12() { return &___sprintmultiplier_12; }
	inline void set_sprintmultiplier_12(float value)
	{
		___sprintmultiplier_12 = value;
	}

	inline static int32_t get_offset_of_termvel_13() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___termvel_13)); }
	inline float get_termvel_13() const { return ___termvel_13; }
	inline float* get_address_of_termvel_13() { return &___termvel_13; }
	inline void set_termvel_13(float value)
	{
		___termvel_13 = value;
	}

	inline static int32_t get_offset_of_platfallcounter_14() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___platfallcounter_14)); }
	inline float get_platfallcounter_14() const { return ___platfallcounter_14; }
	inline float* get_address_of_platfallcounter_14() { return &___platfallcounter_14; }
	inline void set_platfallcounter_14(float value)
	{
		___platfallcounter_14 = value;
	}

	inline static int32_t get_offset_of_platfalltime_15() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___platfalltime_15)); }
	inline float get_platfalltime_15() const { return ___platfalltime_15; }
	inline float* get_address_of_platfalltime_15() { return &___platfalltime_15; }
	inline void set_platfalltime_15(float value)
	{
		___platfalltime_15 = value;
	}

	inline static int32_t get_offset_of_willpowercapacity_16() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___willpowercapacity_16)); }
	inline float get_willpowercapacity_16() const { return ___willpowercapacity_16; }
	inline float* get_address_of_willpowercapacity_16() { return &___willpowercapacity_16; }
	inline void set_willpowercapacity_16(float value)
	{
		___willpowercapacity_16 = value;
	}

	inline static int32_t get_offset_of_willpower_17() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___willpower_17)); }
	inline float get_willpower_17() const { return ___willpower_17; }
	inline float* get_address_of_willpower_17() { return &___willpower_17; }
	inline void set_willpower_17(float value)
	{
		___willpower_17 = value;
	}

	inline static int32_t get_offset_of_willpowerdrain_18() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___willpowerdrain_18)); }
	inline float get_willpowerdrain_18() const { return ___willpowerdrain_18; }
	inline float* get_address_of_willpowerdrain_18() { return &___willpowerdrain_18; }
	inline void set_willpowerdrain_18(float value)
	{
		___willpowerdrain_18 = value;
	}

	inline static int32_t get_offset_of_walkdrain_19() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___walkdrain_19)); }
	inline float get_walkdrain_19() const { return ___walkdrain_19; }
	inline float* get_address_of_walkdrain_19() { return &___walkdrain_19; }
	inline void set_walkdrain_19(float value)
	{
		___walkdrain_19 = value;
	}

	inline static int32_t get_offset_of_rundrain_20() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___rundrain_20)); }
	inline float get_rundrain_20() const { return ___rundrain_20; }
	inline float* get_address_of_rundrain_20() { return &___rundrain_20; }
	inline void set_rundrain_20(float value)
	{
		___rundrain_20 = value;
	}

	inline static int32_t get_offset_of_jumpdrain_21() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___jumpdrain_21)); }
	inline float get_jumpdrain_21() const { return ___jumpdrain_21; }
	inline float* get_address_of_jumpdrain_21() { return &___jumpdrain_21; }
	inline void set_jumpdrain_21(float value)
	{
		___jumpdrain_21 = value;
	}

	inline static int32_t get_offset_of_normrestrate_22() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___normrestrate_22)); }
	inline float get_normrestrate_22() const { return ___normrestrate_22; }
	inline float* get_address_of_normrestrate_22() { return &___normrestrate_22; }
	inline void set_normrestrate_22(float value)
	{
		___normrestrate_22 = value;
	}

	inline static int32_t get_offset_of_restrate_23() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___restrate_23)); }
	inline float get_restrate_23() const { return ___restrate_23; }
	inline float* get_address_of_restrate_23() { return &___restrate_23; }
	inline void set_restrate_23(float value)
	{
		___restrate_23 = value;
	}

	inline static int32_t get_offset_of_resting_24() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___resting_24)); }
	inline bool get_resting_24() const { return ___resting_24; }
	inline bool* get_address_of_resting_24() { return &___resting_24; }
	inline void set_resting_24(bool value)
	{
		___resting_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
