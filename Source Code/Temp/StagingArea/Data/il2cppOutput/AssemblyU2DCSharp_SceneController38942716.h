#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// SceneController
struct SceneController_t38942716;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneController
struct  SceneController_t38942716  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean SceneController::startscenegeneration
	bool ___startscenegeneration_3;
	// System.String SceneController::FirstScene
	String_t* ___FirstScene_4;

public:
	inline static int32_t get_offset_of_startscenegeneration_3() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___startscenegeneration_3)); }
	inline bool get_startscenegeneration_3() const { return ___startscenegeneration_3; }
	inline bool* get_address_of_startscenegeneration_3() { return &___startscenegeneration_3; }
	inline void set_startscenegeneration_3(bool value)
	{
		___startscenegeneration_3 = value;
	}

	inline static int32_t get_offset_of_FirstScene_4() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___FirstScene_4)); }
	inline String_t* get_FirstScene_4() const { return ___FirstScene_4; }
	inline String_t** get_address_of_FirstScene_4() { return &___FirstScene_4; }
	inline void set_FirstScene_4(String_t* value)
	{
		___FirstScene_4 = value;
		Il2CppCodeGenWriteBarrier(&___FirstScene_4, value);
	}
};

struct SceneController_t38942716_StaticFields
{
public:
	// SceneController SceneController::<Instance>k__BackingField
	SceneController_t38942716 * ___U3CInstanceU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SceneController_t38942716_StaticFields, ___U3CInstanceU3Ek__BackingField_2)); }
	inline SceneController_t38942716 * get_U3CInstanceU3Ek__BackingField_2() const { return ___U3CInstanceU3Ek__BackingField_2; }
	inline SceneController_t38942716 ** get_address_of_U3CInstanceU3Ek__BackingField_2() { return &___U3CInstanceU3Ek__BackingField_2; }
	inline void set_U3CInstanceU3Ek__BackingField_2(SceneController_t38942716 * value)
	{
		___U3CInstanceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInstanceU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
