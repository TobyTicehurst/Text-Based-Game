#pragma once
#include <string>
#include <iostream>
#include "StateBase.h"

class StatePlaying : public StateBase
{
public:
	StatePlaying();
	~StatePlaying();

	void update(std::string& input);
};

