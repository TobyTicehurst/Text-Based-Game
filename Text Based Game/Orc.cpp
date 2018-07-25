#include "Orc.h"

// Variables
static std::string name = "Orc";
static unsigned int hitPoints = 30;
static unsigned int level = 2;

Orc::Orc() :
	Monster(name, hitPoints, level)
{
}


