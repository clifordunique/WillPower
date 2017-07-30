#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Light[]
struct LightU5BU5D_t1037744493;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// flickerlightscript
struct  flickerlightscript_t3178297075  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean flickerlightscript::flickering
	bool ___flickering_2;
	// System.Single flickerlightscript::offchance
	float ___offchance_3;
	// System.Single flickerlightscript::onchance
	float ___onchance_4;
	// System.Boolean flickerlightscript::lightOn
	bool ___lightOn_5;
	// UnityEngine.Light[] flickerlightscript::mylights
	LightU5BU5D_t1037744493* ___mylights_6;

public:
	inline static int32_t get_offset_of_flickering_2() { return static_cast<int32_t>(offsetof(flickerlightscript_t3178297075, ___flickering_2)); }
	inline bool get_flickering_2() const { return ___flickering_2; }
	inline bool* get_address_of_flickering_2() { return &___flickering_2; }
	inline void set_flickering_2(bool value)
	{
		___flickering_2 = value;
	}

	inline static int32_t get_offset_of_offchance_3() { return static_cast<int32_t>(offsetof(flickerlightscript_t3178297075, ___offchance_3)); }
	inline float get_offchance_3() const { return ___offchance_3; }
	inline float* get_address_of_offchance_3() { return &___offchance_3; }
	inline void set_offchance_3(float value)
	{
		___offchance_3 = value;
	}

	inline static int32_t get_offset_of_onchance_4() { return static_cast<int32_t>(offsetof(flickerlightscript_t3178297075, ___onchance_4)); }
	inline float get_onchance_4() const { return ___onchance_4; }
	inline float* get_address_of_onchance_4() { return &___onchance_4; }
	inline void set_onchance_4(float value)
	{
		___onchance_4 = value;
	}

	inline static int32_t get_offset_of_lightOn_5() { return static_cast<int32_t>(offsetof(flickerlightscript_t3178297075, ___lightOn_5)); }
	inline bool get_lightOn_5() const { return ___lightOn_5; }
	inline bool* get_address_of_lightOn_5() { return &___lightOn_5; }
	inline void set_lightOn_5(bool value)
	{
		___lightOn_5 = value;
	}

	inline static int32_t get_offset_of_mylights_6() { return static_cast<int32_t>(offsetof(flickerlightscript_t3178297075, ___mylights_6)); }
	inline LightU5BU5D_t1037744493* get_mylights_6() const { return ___mylights_6; }
	inline LightU5BU5D_t1037744493** get_address_of_mylights_6() { return &___mylights_6; }
	inline void set_mylights_6(LightU5BU5D_t1037744493* value)
	{
		___mylights_6 = value;
		Il2CppCodeGenWriteBarrier(&___mylights_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
