#pragma once
#include "Option.h"



class Attack : public Option
{
public:
	Attack(const Text text);

	void activate(Game* game) override;

};

