#include "Battle.h"


Battle::Battle(Player& p) :
	player{ p },
	m_monsters{ Goblin(), Goblin() },
	alive{ m_monsters.size() },
	dead{ 0 }
{}


void Battle::run() {

	// Do battle till it's over
	while (!over()) {
		takeTurn();
	}

	// Results
	// if the player won
	// if the player ran

}

bool Battle::over() {
	// if no monsters are alive // TODO or player is dead or player ran
	return alive == 0;
}

void Battle::takeTurn() {
	playerturn();
	monstersturn();
}

void Battle::playerturn() {

	// Make a decision
	// 1. Attack
	// 2. Run

	// find a moster that isn't dead and attack it

	for (auto& e : m_monsters) {
		if (!e.isDead()) {
			if (player.attack(e)) { // if the monster dies
				alive--;
				dead++;
			}
			break;
		}
	}


}

void Battle::monstersturn() {

	// monsters attack player
	for (auto& e : m_monsters) {
		if (!e.isDead()) {
			e.attack(player);
		}
	}

}

