#include "Game.h"

#include <iostream>

int main(int argc, char* argv[])
{
	Game g;

	if (argc == 2)
	{
		g.setBonusPoints(argv[1]);
	}

	g.play();
	g.showResult();

	return 0;
}
