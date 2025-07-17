#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include "include/termcolor.hpp"
#include "console.h"
#include "constants.h"
#include "scenes.h"

using namespace std;

namespace SCrystalStoneRPG
{
	static SCENE_INDEX currentSceneIndex;

	static void ShowIntroScene(void);
	static void ShowMainMenuScene(void);
	static void ShowCreditsScene(void);
	static void ShowCampScene(void);
	static void ShowBattleScene(void);

	void ShowScene(const SCENE_INDEX index)
	{
		Clear();

		switch (index)
		{
			case S_NONE:
				break;

			case S_INTRO:
				ShowIntroScene();
				break;

			case S_MAIN_MENU:
				ShowMainMenuScene();
				break;

			case S_CREDITS:
				ShowCreditsScene();
				break;

			case S_CAMP:
				ShowCampScene();
				break;

			case S_BATTLE:
				ShowBattleScene();
				break;

			default:
				break;
		}
	}

	SCENE_INDEX GetCurrentScene(void)
	{
		return currentSceneIndex;
	}

	// ================================= //
	// SCENES

	static void ShowIntroScene(void)
	{
		cout << '[' << string(120, '=') << ']' << endl;
		cout << endl;
		cout << "  _______  _______  ______    __   __  _______  _______  _______  ___      _______  _______  _______  __    _  _______ " << endl;
		cout << " |       ||       ||    _ |  |  | |  ||       ||       ||   _   ||   |    |       ||       ||       ||  |  | ||       |" << endl;
		cout << " |  _____||       ||   | ||  |  |_|  ||  _____||_     _||  |_|  ||   |    |  _____||_     _||   _   ||   |_| ||    ___|" << endl;
		cout << " | |_____ |       ||   |_||_ |       || |_____   |   |  |       ||   |    | |_____   |   |  |  | |  ||       ||   |___ " << endl;
		cout << " |_____  ||      _||    __  ||_     _||_____  |  |   |  |       ||   |___ |_____  |  |   |  |  |_|  ||  _    ||    ___|" << endl;
		cout << "  _____| ||     |_ |   |  | |  |   |   _____| |  |   |  |   _   ||       | _____| |  |   |  |       || | |   ||   |___ " << endl;
		cout << " |_______||_______||___|  |_|  |___|  |_______|  |___|  |__| |__||_______||_______|  |___|  |_______||_|  |__||_______|" << endl;
		cout << endl;
		cout << termcolor::on_white;
		cout << termcolor::grey;
		cout << "[ " << GAME_NAME << " - " << GAME_VERSION << " (C) " << GAME_AUTHOR << " - " << GAME_YEAR << " ]" << endl;
		cout << termcolor::reset;
		cout << endl;
		cout << '[' << string(120, '=') << ']' << endl;

		for (uint8_t i = 0; i < 8; i++)
		{
			cout << endl;
		}

		this_thread::sleep_for(chrono::seconds(2));

		cout << "Press Any Key to Continue..." << endl;
		cin.get();

		ShowScene(S_MAIN_MENU);
	}

	static void ShowMainMenuScene(void)
	{

	}

	static void ShowCreditsScene(void)
	{
	
	}

	static void ShowCampScene(void)
	{
	
	}

	static void ShowBattleScene(void)
	{
	
	}
}