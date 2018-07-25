#pragma once
#include <string>
#include <vector>
#include "lowercase.h"

class Text
{
public:
	Text(std::string mainText, std::vector<std::string> validInputs, char c = '!', int i = -1);

	// == // TODO does this need to be const bool?
	const bool operator == (const std::string& s) const;
	//const bool operator == (const int i) const;
	//const bool operator == (const char c) const;

private:
	// The text that is displayed (so not lower case)
	std::string m_mainText;

	// Other valid things for a user to input (all lowercase)
	std::vector<std::string> m_validInputs;

	// May have a shortcut character or number. Default ! and -1
	char m_character;
	int m_number;

};

