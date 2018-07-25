#include "Option.h"



Option::Option(const Text text) :
	m_text{ text }
{
}

bool Option::test(const std::string input) const {
	return m_text == input;
}
