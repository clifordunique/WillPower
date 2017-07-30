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

// EndSceneChanger
struct  EndSceneChanger_t1283928431  : public MonoBehaviour_t1158329972
{
public:
	// SceneController EndSceneChanger::sceneController
	SceneController_t38942716 * ___sceneController_2;
	// System.String EndSceneChanger::Exit_Scene_Name
	String_t* ___Exit_Scene_Name_3;
	// System.String EndSceneChanger::Enter_Scene_Name
	String_t* ___Enter_Scene_Name_4;
	// System.Boolean EndSceneChanger::scenechange
	bool ___scenechange_5;

public:
	inline static int32_t get_offset_of_sceneController_2() { return static_cast<int32_t>(offsetof(EndSceneChanger_t1283928431, ___sceneController_2)); }
	inline SceneController_t38942716 * get_sceneController_2() const { return ___sceneController_2; }
	inline SceneController_t38942716 ** get_address_of_sceneController_2() { return &___sceneController_2; }
	inline void set_sceneController_2(SceneController_t38942716 * value)
	{
		___sceneController_2 = value;
		Il2CppCodeGenWriteBarrier(&___sceneController_2, value);
	}

	inline static int32_t get_offset_of_Exit_Scene_Name_3() { return static_cast<int32_t>(offsetof(EndSceneChanger_t1283928431, ___Exit_Scene_Name_3)); }
	inline String_t* get_Exit_Scene_Name_3() const { return ___Exit_Scene_Name_3; }
	inline String_t** get_address_of_Exit_Scene_Name_3() { return &___Exit_Scene_Name_3; }
	inline void set_Exit_Scene_Name_3(String_t* value)
	{
		___Exit_Scene_Name_3 = value;
		Il2CppCodeGenWriteBarrier(&___Exit_Scene_Name_3, value);
	}

	inline static int32_t get_offset_of_Enter_Scene_Name_4() { return static_cast<int32_t>(offsetof(EndSceneChanger_t1283928431, ___Enter_Scene_Name_4)); }
	inline String_t* get_Enter_Scene_Name_4() const { return ___Enter_Scene_Name_4; }
	inline String_t** get_address_of_Enter_Scene_Name_4() { return &___Enter_Scene_Name_4; }
	inline void set_Enter_Scene_Name_4(String_t* value)
	{
		___Enter_Scene_Name_4 = value;
		Il2CppCodeGenWriteBarrier(&___Enter_Scene_Name_4, value);
	}

	inline static int32_t get_offset_of_scenechange_5() { return static_cast<int32_t>(offsetof(EndSceneChanger_t1283928431, ___scenechange_5)); }
	inline bool get_scenechange_5() const { return ___scenechange_5; }
	inline bool* get_address_of_scenechange_5() { return &___scenechange_5; }
	inline void set_scenechange_5(bool value)
	{
		___scenechange_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
