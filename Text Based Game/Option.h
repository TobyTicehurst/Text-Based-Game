#pragma once
#include "Text.h"
#include "Game.h"

class Option
{
public:
	Option(const Text text);

	virtual void activate() const = 0;

	bool test(std::string input) const;

protected:
	// Text to display
	const Text m_text;
	
};

