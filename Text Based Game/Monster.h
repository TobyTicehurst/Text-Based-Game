#pragma once
#include "Creature.h"

class Monster : public Creature
{
public:
	Monster(std::string name, unsigned int hitPoints, unsigned int level = 1, double attackMultiplier = 1.0f, double defenceMultiplier = 1.0f);

	double difficulty() const;

private:

};

