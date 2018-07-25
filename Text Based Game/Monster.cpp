#include "Monster.h"



Monster::Monster(std::string name, unsigned int hitPoints, unsigned int level, double attackMultiplier, double defenceMultiplier) :
	Creature(name, hitPoints, level, attackMultiplier, defenceMultiplier)
{
}


double Monster::difficulty() const {
	return m_level * m_attackMultiplier * m_defenceMultiplier;
}