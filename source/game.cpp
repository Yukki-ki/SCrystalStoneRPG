#include "game.h"
#include "scenes.h"

namespace SCrystalStoneRPG
{
	Game::Game()
	{

	}

	Game::~Game()
	{

	}

	void Game::Initialize(void)
	{
		ShowScene(S_INTRO);
	}
}