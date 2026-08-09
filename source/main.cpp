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
void Mage() {
	// Mage character class
}
void Rouge() {
	// Rouge character class
}
void Warrior() {
	// Warrior character class
}
void characterSelection()
{
	// Adding New Character Selection, code by Owenb135
	cout << "Choose your character:";
	cout << "\n1. Warrior";
	cout << "\n2. Mage";
	cout << "\n3. Rouge";
	cout << "\n\nEnter your choice use 1-3: ";
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		cout << "You have chosen the Warrior!";
		Warrior();
	}
	else if (choice == 2)
	{
		cout << "You have chosen the Mage!";
		Mage();
	}
	else if (choice == 3)
	{
		cout << "You have chosen the Rouge!";
		Rouge();
	}
	else
	{
		cout << "Invalid choice!";
	}
}

int main()
{
	Clear();

	start();
	characterSelection();
	stop();

	return 0;
}
