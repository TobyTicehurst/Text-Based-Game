#include "Text.h"

Text::Text(std::string mainText, std::vector<std::string> validInputs, char c, int i) :
	m_mainText{ mainText },
	m_validInputs{ lowercase(validInputs) },
	m_character{ c },
	m_number{ i }
{}

// everything should already be lower case
const bool Text::operator == (const std::string& string) const {

	// test string against the main text
	if (string == lowercase(m_mainText))
		return true;

	// test string against each valid input
	for (auto& s : m_validInputs) {
		if (string == s)
			return true;
	}

	// test string against the shortcut character
	if (string == std::string(1, m_character))
		return true;

	// test string against the shortcut number
	if (string == std::to_string(m_number))
		return true;

	// if all that's failed return false
	return false;
}