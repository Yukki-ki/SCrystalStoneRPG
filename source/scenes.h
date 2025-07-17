#pragma once

#include <cstdint>

namespace SCrystalStoneRPG
{
	enum SCENE_INDEX : uint8_t
	{
		S_NONE,
		S_INTRO,
		S_MAIN_MENU,
		S_CREDITS,
		S_CAMP,
		S_BATTLE,
	};

	void ShowScene(const SCENE_INDEX index);
	SCENE_INDEX GetCurrentScene(void);
}