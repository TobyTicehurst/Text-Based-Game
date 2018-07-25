#include "Game.h"



Game::Game() :
	state{std::make_unique<StatePlaying>()},
	game_is_running{ true }
{
}


Game::~Game()
{
}

void Game::run() {

	const StateBase* test = getState();




	Player player("Player 1", 10000);

	Battle battle(player);
	battle.run();


	while (game_is_running) {

		// get user input (lowercase)
		std::string input = getInput();
 
		Text test("hello", std::vector<std::string>{"world"});

		bool tf = (test == input);

		// state specific update // currently just couts
		state->update(input);

		// general update
		update(input);

		

	}

}

std::string Game::getInput() {

	// the input
	std::string input;

	// wait for user here
	std::cin >> input;

	// change to lowercase
	input = lowercase(input);

	return input;
}

void Game::update(std::string& input) {

	// close the game
	if (input == "x") {
		game_is_running = false;
	}
}

const StateBase* Game::getState() const {
	return state.get();
}