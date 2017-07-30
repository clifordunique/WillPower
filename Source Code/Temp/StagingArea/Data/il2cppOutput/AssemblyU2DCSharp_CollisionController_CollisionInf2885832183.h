#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_RaycastHit2D4063908774.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CollisionController/CollisionInfo
struct  CollisionInfo_t2885832183 
{
public:
	// System.Boolean CollisionController/CollisionInfo::above
	bool ___above_0;
	// System.Boolean CollisionController/CollisionInfo::below
	bool ___below_1;
	// System.Boolean CollisionController/CollisionInfo::left
	bool ___left_2;
	// System.Boolean CollisionController/CollisionInfo::right
	bool ___right_3;
	// System.Boolean CollisionController/CollisionInfo::climbingSlope
	bool ___climbingSlope_4;
	// System.Boolean CollisionController/CollisionInfo::descendingSlope
	bool ___descendingSlope_5;
	// System.Single CollisionController/CollisionInfo::slopeAngle
	float ___slopeAngle_6;
	// System.Single CollisionController/CollisionInfo::slopeAngleOld
	float ___slopeAngleOld_7;
	// System.Single CollisionController/CollisionInfo::belowcounter
	float ___belowcounter_8;
	// UnityEngine.Vector3 CollisionController/CollisionInfo::velocityOld
	Vector3_t2243707580  ___velocityOld_9;
	// UnityEngine.RaycastHit2D CollisionController/CollisionInfo::groundhit
	RaycastHit2D_t4063908774  ___groundhit_10;

public:
	inline static int32_t get_offset_of_above_0() { return static_cast<int32_t>(offsetof(CollisionInfo_t2885832183, ___above_0)); }
	inline bool get_above_0() const { return ___above_0; }
	inline bool* get_address_of_above_0() { return &___above_0; }
	inline void set_above_0(bool value)
	{
		___above_0 = value;
	}

	inline static int32_t get_offset_of_below_1() { return static_cast<int32_t>(offsetof(CollisionInfo_t2885832183, ___below_1)); }
	inline bool get_below_1() const { return ___below_1; }
	inline bool* get_address_of_below_1() { return &___below_1; }
	inline void set_below_1(bool value)
	{
		___below_1 = value;
	}

	inline static int32_t get_offset_of_left_2() { return static_cast<int32_t>(offsetof(CollisionInfo_t2885832183, ___left_2)); }
	inline bool get_left_2() const { return ___left_2; }
	inline bool* get_address_of_left_2() { return &___left_2; }
	inline void set_left_2(bool value)
	{
		___left_2 = value;
	}

	inline static int32_t get_offset_of_right_3() { return static_cast<int32_t>(offsetof(CollisionInfo_t2885832183, ___right_3)); }
	inline bool get_right_3() const { return ___right_3; }
	inline bool* get_address_of_right_3() { return &___right_3; }
	inline void set_right_3(bool value)
	{
		___right_3 = value;
	}

	inline static int32_t get_offset_of_climbingSlope_4() { return static_cast<int32_t>(offsetof(CollisionInfo_t2885832183, ___climbingSlope_4)); }
	inline bool get_climbingSlope_4() const { return ___climbingSlope_4; }
	inline bool* get_address_of_climbingSlope_4() { return &___climbingSlope_4; }
	inline void set_climbingSlope_4(bool value)
	{
		___climbingSlope_4 = value;
	}

	inline static int32_t get_offset_of_descendingSlope_5() { return static_cast<int32_t>(offsetof(CollisionInfo_t2885832183, ___descendingSlope_5)); }
	inline bool get_descendingSlope_5() const { return ___descendingSlope_5; }
	inline bool* get_address_of_descendingSlope_5() { return &___descendingSlope_5; }
	inline void set_descendingSlope_5(bool value)
	{
		___descendingSlope_5 = value;
	}

	inline static int32_t get_offset_of_slopeAngle_6() { return static_cast<int32_t>(offsetof(CollisionInfo_t2885832183, ___slopeAngle_6)); }
	inline float get_slopeAngle_6() const { return ___slopeAngle_6; }
	inline float* get_address_of_slopeAngle_6() { return &___slopeAngle_6; }
	inline void set_slopeAngle_6(float value)
	{
		___slopeAngle_6 = value;
	}

	inline static int32_t get_offset_of_slopeAngleOld_7() { return static_cast<int32_t>(offsetof(CollisionInfo_t2885832183, ___slopeAngleOld_7)); }
	inline float get_slopeAngleOld_7() const { return ___slopeAngleOld_7; }
	inline float* get_address_of_slopeAngleOld_7() { return &___slopeAngleOld_7; }
	inline void set_slopeAngleOld_7(float value)
	{
		___slopeAngleOld_7 = value;
	}

	inline static int32_t get_offset_of_belowcounter_8() { return static_cast<int32_t>(offsetof(CollisionInfo_t2885832183, ___belowcounter_8)); }
	inline float get_belowcounter_8() const { return ___belowcounter_8; }
	inline float* get_address_of_belowcounter_8() { return &___belowcounter_8; }
	inline void set_belowcounter_8(float value)
	{
		___belowcounter_8 = value;
	}

	inline static int32_t get_offset_of_velocityOld_9() { return static_cast<int32_t>(offsetof(CollisionInfo_t2885832183, ___velocityOld_9)); }
	inline Vector3_t2243707580  get_velocityOld_9() const { return ___velocityOld_9; }
	inline Vector3_t2243707580 * get_address_of_velocityOld_9() { return &___velocityOld_9; }
	inline void set_velocityOld_9(Vector3_t2243707580  value)
	{
		___velocityOld_9 = value;
	}

	inline static int32_t get_offset_of_groundhit_10() { return static_cast<int32_t>(offsetof(CollisionInfo_t2885832183, ___groundhit_10)); }
	inline RaycastHit2D_t4063908774  get_groundhit_10() const { return ___groundhit_10; }
	inline RaycastHit2D_t4063908774 * get_address_of_groundhit_10() { return &___groundhit_10; }
	inline void set_groundhit_10(RaycastHit2D_t4063908774  value)
	{
		___groundhit_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of CollisionController/CollisionInfo
struct CollisionInfo_t2885832183_marshaled_pinvoke
{
	int32_t ___above_0;
	int32_t ___below_1;
	int32_t ___left_2;
	int32_t ___right_3;
	int32_t ___climbingSlope_4;
	int32_t ___descendingSlope_5;
	float ___slopeAngle_6;
	float ___slopeAngleOld_7;
	float ___belowcounter_8;
	Vector3_t2243707580  ___velocityOld_9;
	RaycastHit2D_t4063908774_marshaled_pinvoke ___groundhit_10;
};
// Native definition for COM marshalling of CollisionController/CollisionInfo
struct CollisionInfo_t2885832183_marshaled_com
{
	int32_t ___above_0;
	int32_t ___below_1;
	int32_t ___left_2;
	int32_t ___right_3;
	int32_t ___climbingSlope_4;
	int32_t ___descendingSlope_5;
	float ___slopeAngle_6;
	float ___slopeAngleOld_7;
	float ___belowcounter_8;
	Vector3_t2243707580  ___velocityOld_9;
	RaycastHit2D_t4063908774_marshaled_com ___groundhit_10;
};
