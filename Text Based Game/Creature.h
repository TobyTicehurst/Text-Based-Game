#pragma once
#include <string>
#include <iostream>
#include <math.h>

class Creature
{
public:
	Creature(std::string name, unsigned int hitPoints, unsigned int level, double attackMultiplier, double defenceMultiplier);

	// returns true if the creature died
	bool takeDamage(unsigned int damage);

	// returns true if the creature has 0 hit points (and so is dead)
	bool isDead();

	// returns true if the victim died
	bool attack(Creature& victim);

protected:

	// name
	std::string m_name;

	// level - minimum level 1
	unsigned int m_level;

	// hp
	unsigned int m_hitPoints;

	// multipliers - damage is: base damage * (m_level * m_attackMultiplier) / (their_level * their_defenceMultiplier)
	double m_attackMultiplier;
	double m_defenceMultiplier;
	// eg. a boss may have high multipliers to make it a harder fight at a lower level


};

