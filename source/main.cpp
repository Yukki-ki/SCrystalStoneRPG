#include <iostream>
#include "game.h"
#include "console.h"

using namespace std;
using namespace SCrystalStoneRPG;

Game* game;

static void start(void)
{
	game = new Game;
	game->Initialize();
}

static void stop(void)
{
	delete game;
}

int main()
{
	Clear();

	start();
	stop();

	cout << "Hello World!" << endl;
	return 0;
}
