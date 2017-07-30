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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// CharacterSceneChanger
struct CharacterSceneChanger_t1246820209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharController
struct  CharController_t127724996  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CharController::gravity
	float ___gravity_2;
	// UnityEngine.Vector2 CharController::velocity
	Vector2_t2243707579  ___velocity_3;
	// CollisionController CharController::controller
	CollisionController_t136233908 * ___controller_4;
	// System.Single CharController::jumpspd
	float ___jumpspd_5;
	// System.Single CharController::movespd
	float ___movespd_6;
	// System.Single CharController::keepdist
	float ___keepdist_7;
	// System.Single CharController::velocityXSmoothing
	float ___velocityXSmoothing_8;
	// System.Single CharController::accelerationTimeGrounded
	float ___accelerationTimeGrounded_9;
	// System.Single CharController::accelerationTimeAirborne
	float ___accelerationTimeAirborne_10;
	// System.Single CharController::sprintmultiplier
	float ___sprintmultiplier_11;
	// System.Single CharController::termvel
	float ___termvel_12;
	// System.Single CharController::platfallcounter
	float ___platfallcounter_13;
	// System.Single CharController::platfalltime
	float ___platfalltime_14;
	// System.Single CharController::jumpangle
	float ___jumpangle_15;
	// System.Single CharController::lightamount
	float ___lightamount_16;
	// System.Single CharController::nolightdist
	float ___nolightdist_17;
	// System.Single CharController::gradientdist
	float ___gradientdist_18;
	// UnityEngine.GameObject CharController::player
	GameObject_t1756533147 * ___player_19;
	// CharacterSceneChanger CharController::charscenechange
	CharacterSceneChanger_t1246820209 * ___charscenechange_20;

public:
	inline static int32_t get_offset_of_gravity_2() { return static_cast<int32_t>(offsetof(CharController_t127724996, ___gravity_2)); }
	inline float get_gravity_2() const { return ___gravity_2; }
	inline float* get_address_of_gravity_2() { return &___gravity_2; }
	inline void set_gravity_2(float value)
	{
		___gravity_2 = value;
	}

	inline static int32_t get_offset_of_velocity_3() { return static_cast<int32_t>(offsetof(CharController_t127724996, ___velocity_3)); }
	inline Vector2_t2243707579  get_velocity_3() const { return ___velocity_3; }
	inline Vector2_t2243707579 * get_address_of_velocity_3() { return &___velocity_3; }
	inline void set_velocity_3(Vector2_t2243707579  value)
	{
		___velocity_3 = value;
	}

	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(CharController_t127724996, ___controller_4)); }
	inline CollisionController_t136233908 * get_controller_4() const { return ___controller_4; }
	inline CollisionController_t136233908 ** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(CollisionController_t136233908 * value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier(&___controller_4, value);
	}

	inline static int32_t get_offset_of_jumpspd_5() { return static_cast<int32_t>(offsetof(CharController_t127724996, ___jumpspd_5)); }
	inline float get_jumpspd_5() const { return ___jumpspd_5; }
	inline float* get_address_of_jumpspd_5() { return &___jumpspd_5; }
	inline void set_jumpspd_5(float value)
	{
		___jumpspd_5 = value;
	}

	inline static int32_t get_offset_of_movespd_6() { return static_cast<int32_t>(offsetof(CharController_t127724996, ___movespd_6)); }
	inline float get_movespd_6() const { return ___movespd_6; }
	inline float* get_address_of_movespd_6() { return &___movespd_6; }
	inline void set_movespd_6(float value)
	{
		___movespd_6 = value;
	}

	inline static int32_t get_offset_of_keepdist_7() { return static_cast<int32_t>(offsetof(CharController_t127724996, ___keepdist_7)); }
	inline float get_keepdist_7() const { return ___keepdist_7; }
	inline float* get_address_of_keepdist_7() { return &___keepdist_7; }
	inline void set_keepdist_7(float value)
	{
		___keepdist_7 = value;
	}

	inline static int32_t get_offset_of_velocityXSmoothing_8() { return static_cast<int32_t>(offsetof(CharController_t127724996, ___velocityXSmoothing_8)); }
	inline float get_velocityXSmoothing_8() const { return ___velocityXSmoothing_8; }
	inline float* get_address_of_velocityXSmoothing_8() { return &___velocityXSmoothing_8; }
	inline void set_velocityXSmoothing_8(float value)
	{
		___velocityXSmoothing_8 = value;
	}

	inline static int32_t get_offset_of_accelerationTimeGrounded_9() { return static_cast<int32_t>(offsetof(CharController_t127724996, ___accelerationTimeGrounded_9)); }
	inline float get_accelerationTimeGrounded_9() const { return ___accelerationTimeGrounded_9; }
	inline float* get_address_of_accelerationTimeGrounded_9() { return &___accelerationTimeGrounded_9; }
	inline void set_accelerationTimeGrounded_9(float value)
	{
		___accelerationTimeGrounded_9 = value;
	}

	inline static int32_t get_offset_of_accelerationTimeAirborne_10() { return static_cast<int32_t>(offsetof(CharController_t127724996, ___accelerationTimeAirborne_10)); }
	inline float get_accelerationTimeAirborne_10() const { return ___accelerationTimeAirborne_10; }
	inline float* get_address_of_accelerationTimeAirborne_10() { return &___accelerationTimeAirborne_10; }
	inline void set_accelerationTimeAirborne_10(float value)
	{
		___accelerationTimeAirborne_10 = value;
	}

	inline static int32_t get_offset_of_sprintmultiplier_11() { return static_cast<int32_t>(offsetof(CharController_t127724996, ___sprintmultiplier_11)); }
	inline float get_sprintmultiplier_11() const { return ___sprintmultiplier_11; }
	inline float* get_address_of_sprintmultiplier_11() { return &___sprintmultiplier_11; }
	inline void set_sprintmultiplier_11(float value)
	{
		___sprintmultiplier_11 = value;
	}

	inline static int32_t get_offset_of_termvel_12() { return static_cast<int32_t>(offsetof(CharController_t127724996, ___termvel_12)); }
	inline float get_termvel_12() const { return ___termvel_12; }
	inline float* get_address_of_termvel_12() { return &___termvel_12; }
	inline void set_termvel_12(float value)
	{
		___termvel_12 = value;
	}

	inline static int32_t get_offset_of_platfallcounter_13() { return static_cast<int32_t>(offsetof(CharController_t127724996, ___platfallcounter_13)); }
	inline float get_platfallcounter_13() const { return ___platfallcounter_13; }
	inline float* get_address_of_platfallcounter_13() { return &___platfallcounter_13; }
	inline void set_platfallcounter_13(float value)
	{
		___platfallcounter_13 = value;
	}

	inline static int32_t get_offset_of_platfalltime_14() { return static_cast<int32_t>(offsetof(CharController_t127724996, ___platfalltime_14)); }
	inline float get_platfalltime_14() const { return ___platfalltime_14; }
	inline float* get_address_of_platfalltime_14() { return &___platfalltime_14; }
	inline void set_platfalltime_14(float value)
	{
		___platfalltime_14 = value;
	}

	inline static int32_t get_offset_of_jumpangle_15() { return static_cast<int32_t>(offsetof(CharController_t127724996, ___jumpangle_15)); }
	inline float get_jumpangle_15() const { return ___jumpangle_15; }
	inline float* get_address_of_jumpangle_15() { return &___jumpangle_15; }
	inline void set_jumpangle_15(float value)
	{
		___jumpangle_15 = value;
	}

	inline static int32_t get_offset_of_lightamount_16() { return static_cast<int32_t>(offsetof(CharController_t127724996, ___lightamount_16)); }
	inline float get_lightamount_16() const { return ___lightamount_16; }
	inline float* get_address_of_lightamount_16() { return &___lightamount_16; }
	inline void set_lightamount_16(float value)
	{
		___lightamount_16 = value;
	}

	inline static int32_t get_offset_of_nolightdist_17() { return static_cast<int32_t>(offsetof(CharController_t127724996, ___nolightdist_17)); }
	inline float get_nolightdist_17() const { return ___nolightdist_17; }
	inline float* get_address_of_nolightdist_17() { return &___nolightdist_17; }
	inline void set_nolightdist_17(float value)
	{
		___nolightdist_17 = value;
	}

	inline static int32_t get_offset_of_gradientdist_18() { return static_cast<int32_t>(offsetof(CharController_t127724996, ___gradientdist_18)); }
	inline float get_gradientdist_18() const { return ___gradientdist_18; }
	inline float* get_address_of_gradientdist_18() { return &___gradientdist_18; }
	inline void set_gradientdist_18(float value)
	{
		___gradientdist_18 = value;
	}

	inline static int32_t get_offset_of_player_19() { return static_cast<int32_t>(offsetof(CharController_t127724996, ___player_19)); }
	inline GameObject_t1756533147 * get_player_19() const { return ___player_19; }
	inline GameObject_t1756533147 ** get_address_of_player_19() { return &___player_19; }
	inline void set_player_19(GameObject_t1756533147 * value)
	{
		___player_19 = value;
		Il2CppCodeGenWriteBarrier(&___player_19, value);
	}

	inline static int32_t get_offset_of_charscenechange_20() { return static_cast<int32_t>(offsetof(CharController_t127724996, ___charscenechange_20)); }
	inline CharacterSceneChanger_t1246820209 * get_charscenechange_20() const { return ___charscenechange_20; }
	inline CharacterSceneChanger_t1246820209 ** get_address_of_charscenechange_20() { return &___charscenechange_20; }
	inline void set_charscenechange_20(CharacterSceneChanger_t1246820209 * value)
	{
		___charscenechange_20 = value;
		Il2CppCodeGenWriteBarrier(&___charscenechange_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
