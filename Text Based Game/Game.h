#pragma once
#include <string>
#include <iostream>
#include <memory>

#include "StateBase.h"
#include "StatePlaying.h"
#include "lowercase.h"
#include "Text.h"
#include "Battle.h"

class Game
{
public:
	Game();
	~Game();

	void run();
	void update(std::string& input);
	std::string getInput();

	const StateBase* getState() const;


private:

	// game state
	std::unique_ptr<StateBase> state;
	
	bool game_is_running;
};

