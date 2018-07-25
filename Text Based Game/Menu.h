#pragma once
#include <vector>
#include "Option.h"

class Menu
{
public:
	Menu();
	void update(const std::string input) const;

private:
	std::vector<Option> m_options;
};

