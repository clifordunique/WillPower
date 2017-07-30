#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t10059812;
// SceneController
struct SceneController_t38942716;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovieController
struct  MovieController_t113853892  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Video.VideoPlayer MovieController::videoplayer
	VideoPlayer_t10059812 * ___videoplayer_2;
	// SceneController MovieController::sceneController
	SceneController_t38942716 * ___sceneController_3;
	// System.String MovieController::Exit_Scene_Name
	String_t* ___Exit_Scene_Name_4;
	// System.String MovieController::Enter_Scene_Name
	String_t* ___Enter_Scene_Name_5;

public:
	inline static int32_t get_offset_of_videoplayer_2() { return static_cast<int32_t>(offsetof(MovieController_t113853892, ___videoplayer_2)); }
	inline VideoPlayer_t10059812 * get_videoplayer_2() const { return ___videoplayer_2; }
	inline VideoPlayer_t10059812 ** get_address_of_videoplayer_2() { return &___videoplayer_2; }
	inline void set_videoplayer_2(VideoPlayer_t10059812 * value)
	{
		___videoplayer_2 = value;
		Il2CppCodeGenWriteBarrier(&___videoplayer_2, value);
	}

	inline static int32_t get_offset_of_sceneController_3() { return static_cast<int32_t>(offsetof(MovieController_t113853892, ___sceneController_3)); }
	inline SceneController_t38942716 * get_sceneController_3() const { return ___sceneController_3; }
	inline SceneController_t38942716 ** get_address_of_sceneController_3() { return &___sceneController_3; }
	inline void set_sceneController_3(SceneController_t38942716 * value)
	{
		___sceneController_3 = value;
		Il2CppCodeGenWriteBarrier(&___sceneController_3, value);
	}

	inline static int32_t get_offset_of_Exit_Scene_Name_4() { return static_cast<int32_t>(offsetof(MovieController_t113853892, ___Exit_Scene_Name_4)); }
	inline String_t* get_Exit_Scene_Name_4() const { return ___Exit_Scene_Name_4; }
	inline String_t** get_address_of_Exit_Scene_Name_4() { return &___Exit_Scene_Name_4; }
	inline void set_Exit_Scene_Name_4(String_t* value)
	{
		___Exit_Scene_Name_4 = value;
		Il2CppCodeGenWriteBarrier(&___Exit_Scene_Name_4, value);
	}

	inline static int32_t get_offset_of_Enter_Scene_Name_5() { return static_cast<int32_t>(offsetof(MovieController_t113853892, ___Enter_Scene_Name_5)); }
	inline String_t* get_Enter_Scene_Name_5() const { return ___Enter_Scene_Name_5; }
	inline String_t** get_address_of_Enter_Scene_Name_5() { return &___Enter_Scene_Name_5; }
	inline void set_Enter_Scene_Name_5(String_t* value)
	{
		___Enter_Scene_Name_5 = value;
		Il2CppCodeGenWriteBarrier(&___Enter_Scene_Name_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
