#pragma once
#include "Creature.h"

class Player : public Creature
{
public:
	Player(std::string name, unsigned int hitPoints, unsigned int level = 1, double attackMultiplier = 1.0f, double defenceMultiplier = 1.0f);
};


