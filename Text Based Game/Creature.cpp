#include "Creature.h"



Creature::Creature(std::string name, unsigned int hitPoints, unsigned int level = 1, double attackMultiplier = 1.0f, double defenceMultiplier = 1.0f) :
	m_name{ name },
	m_hitPoints{ hitPoints },
	m_level{ level },
	m_attackMultiplier{ attackMultiplier },
	m_defenceMultiplier{ defenceMultiplier }
{}

bool Creature::takeDamage(unsigned int damage) {
	if (damage >= m_hitPoints) {
		m_hitPoints = 0;
		return true;
	}
	else {
		m_hitPoints -= damage;
		return false;
	}
}

bool Creature::isDead() {
	return m_hitPoints == 0;
}

// returns true if the victim died
bool Creature::attack(Creature& victim) {

	unsigned int damage = round( 1.0f * m_attackMultiplier / victim.m_defenceMultiplier );

	if (victim.takeDamage(damage)) {  // if the damage killed the victim
		std::cout << victim.m_name << " was killed by " << m_name << "!" << std::endl;
		return true;
	}
	else { // if the creature didnt die
		std::cout << victim.m_name << " took " << damage << " damage!" << std::endl;
		return false;
	}

}