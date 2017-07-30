#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "AssemblyU2DCSharp_CollisionController_RaycastOrigi2880005531.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "AssemblyU2DCSharp_CollisionController_CollisionInf2885832183.h"

// UnityEngine.BoxCollider2D
struct BoxCollider2D_t948534547;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CollisionController
struct  CollisionController_t136233908  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.LayerMask CollisionController::collisionMask
	LayerMask_t3188175821  ___collisionMask_2;
	// System.Int32 CollisionController::horizontalRayCount
	int32_t ___horizontalRayCount_4;
	// System.Int32 CollisionController::verticalRayCount
	int32_t ___verticalRayCount_5;
	// System.Single CollisionController::maxClimbAngle
	float ___maxClimbAngle_6;
	// System.Single CollisionController::maxDescendAngle
	float ___maxDescendAngle_7;
	// System.Single CollisionController::horizontalRaySpacing
	float ___horizontalRaySpacing_8;
	// System.Single CollisionController::verticalRaySpacing
	float ___verticalRaySpacing_9;
	// UnityEngine.BoxCollider2D CollisionController::collider
	BoxCollider2D_t948534547 * ___collider_10;
	// CollisionController/RaycastOrigins CollisionController::raycastOrigins
	RaycastOrigins_t2880005531  ___raycastOrigins_11;
	// UnityEngine.Bounds CollisionController::bounds
	Bounds_t3033363703  ___bounds_12;
	// CollisionController/CollisionInfo CollisionController::collisions
	CollisionInfo_t2885832183  ___collisions_13;

public:
	inline static int32_t get_offset_of_collisionMask_2() { return static_cast<int32_t>(offsetof(CollisionController_t136233908, ___collisionMask_2)); }
	inline LayerMask_t3188175821  get_collisionMask_2() const { return ___collisionMask_2; }
	inline LayerMask_t3188175821 * get_address_of_collisionMask_2() { return &___collisionMask_2; }
	inline void set_collisionMask_2(LayerMask_t3188175821  value)
	{
		___collisionMask_2 = value;
	}

	inline static int32_t get_offset_of_horizontalRayCount_4() { return static_cast<int32_t>(offsetof(CollisionController_t136233908, ___horizontalRayCount_4)); }
	inline int32_t get_horizontalRayCount_4() const { return ___horizontalRayCount_4; }
	inline int32_t* get_address_of_horizontalRayCount_4() { return &___horizontalRayCount_4; }
	inline void set_horizontalRayCount_4(int32_t value)
	{
		___horizontalRayCount_4 = value;
	}

	inline static int32_t get_offset_of_verticalRayCount_5() { return static_cast<int32_t>(offsetof(CollisionController_t136233908, ___verticalRayCount_5)); }
	inline int32_t get_verticalRayCount_5() const { return ___verticalRayCount_5; }
	inline int32_t* get_address_of_verticalRayCount_5() { return &___verticalRayCount_5; }
	inline void set_verticalRayCount_5(int32_t value)
	{
		___verticalRayCount_5 = value;
	}

	inline static int32_t get_offset_of_maxClimbAngle_6() { return static_cast<int32_t>(offsetof(CollisionController_t136233908, ___maxClimbAngle_6)); }
	inline float get_maxClimbAngle_6() const { return ___maxClimbAngle_6; }
	inline float* get_address_of_maxClimbAngle_6() { return &___maxClimbAngle_6; }
	inline void set_maxClimbAngle_6(float value)
	{
		___maxClimbAngle_6 = value;
	}

	inline static int32_t get_offset_of_maxDescendAngle_7() { return static_cast<int32_t>(offsetof(CollisionController_t136233908, ___maxDescendAngle_7)); }
	inline float get_maxDescendAngle_7() const { return ___maxDescendAngle_7; }
	inline float* get_address_of_maxDescendAngle_7() { return &___maxDescendAngle_7; }
	inline void set_maxDescendAngle_7(float value)
	{
		___maxDescendAngle_7 = value;
	}

	inline static int32_t get_offset_of_horizontalRaySpacing_8() { return static_cast<int32_t>(offsetof(CollisionController_t136233908, ___horizontalRaySpacing_8)); }
	inline float get_horizontalRaySpacing_8() const { return ___horizontalRaySpacing_8; }
	inline float* get_address_of_horizontalRaySpacing_8() { return &___horizontalRaySpacing_8; }
	inline void set_horizontalRaySpacing_8(float value)
	{
		___horizontalRaySpacing_8 = value;
	}

	inline static int32_t get_offset_of_verticalRaySpacing_9() { return static_cast<int32_t>(offsetof(CollisionController_t136233908, ___verticalRaySpacing_9)); }
	inline float get_verticalRaySpacing_9() const { return ___verticalRaySpacing_9; }
	inline float* get_address_of_verticalRaySpacing_9() { return &___verticalRaySpacing_9; }
	inline void set_verticalRaySpacing_9(float value)
	{
		___verticalRaySpacing_9 = value;
	}

	inline static int32_t get_offset_of_collider_10() { return static_cast<int32_t>(offsetof(CollisionController_t136233908, ___collider_10)); }
	inline BoxCollider2D_t948534547 * get_collider_10() const { return ___collider_10; }
	inline BoxCollider2D_t948534547 ** get_address_of_collider_10() { return &___collider_10; }
	inline void set_collider_10(BoxCollider2D_t948534547 * value)
	{
		___collider_10 = value;
		Il2CppCodeGenWriteBarrier(&___collider_10, value);
	}

	inline static int32_t get_offset_of_raycastOrigins_11() { return static_cast<int32_t>(offsetof(CollisionController_t136233908, ___raycastOrigins_11)); }
	inline RaycastOrigins_t2880005531  get_raycastOrigins_11() const { return ___raycastOrigins_11; }
	inline RaycastOrigins_t2880005531 * get_address_of_raycastOrigins_11() { return &___raycastOrigins_11; }
	inline void set_raycastOrigins_11(RaycastOrigins_t2880005531  value)
	{
		___raycastOrigins_11 = value;
	}

	inline static int32_t get_offset_of_bounds_12() { return static_cast<int32_t>(offsetof(CollisionController_t136233908, ___bounds_12)); }
	inline Bounds_t3033363703  get_bounds_12() const { return ___bounds_12; }
	inline Bounds_t3033363703 * get_address_of_bounds_12() { return &___bounds_12; }
	inline void set_bounds_12(Bounds_t3033363703  value)
	{
		___bounds_12 = value;
	}

	inline static int32_t get_offset_of_collisions_13() { return static_cast<int32_t>(offsetof(CollisionController_t136233908, ___collisions_13)); }
	inline CollisionInfo_t2885832183  get_collisions_13() const { return ___collisions_13; }
	inline CollisionInfo_t2885832183 * get_address_of_collisions_13() { return &___collisions_13; }
	inline void set_collisions_13(CollisionInfo_t2885832183  value)
	{
		___collisions_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
