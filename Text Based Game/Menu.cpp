#include "Menu.h"



Menu::Menu()
{
}

void Menu::update(std::string input) const {

	for (unsigned int i = 0; i < m_options.size(); i++) {

		if (m_options[i].test(input)) {
			m_options[i].activate();
		}

	}

}