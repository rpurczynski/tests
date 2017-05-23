#include "Game.h"

#include <iostream>

int main(int argc, char* argv[])
{
	Game g;

	if (argc > 2)
	{
		g.setBonusPoints(argv[2]);
	}

	if (argc > 1)
	{
		g.play(argv[1]);
		g.showResult();
	}
	else
	{
		std::cout << "Brak parametrów!" << std::endl;
		std::cout << "Używanie:" << std::endl;
		std::cout << argv[0] + std::string(" c++|stl [bonus_punkty]") << std::endl;
		std::cout << "np:" << std::endl;
		std::cout << argv[0] + std::string(" c++") << std::endl;
		std::cout << argv[0] + std::string(" stl 5") << std::endl;
	}

	return 0;
}
