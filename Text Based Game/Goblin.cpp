#include "Goblin.h"

// Variables
static std::string name = "Goblin";
static unsigned int hitPoints = 10;


Goblin::Goblin() :
	Monster(name, hitPoints)
{
}
