#pragma once
#include <vector>
#include "Monster.h"
#include "Goblin.h"
#include "Player.h"

class Battle
{
public:
	Battle(Player& p);

	void run();
	bool over();
	void takeTurn();

private:

	void playerturn();
	void monstersturn();


	std::vector<Monster> m_monsters;

	unsigned int alive;
	unsigned int dead;

	Player& player;

};

