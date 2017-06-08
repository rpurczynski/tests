#include "Game.h"
#include "operating_functions.h"
#include "UserInOut.h"
#include "quiz.h"

#include <stdlib.h>

int Game::scorePoints = 0;
int Game::questionsAsked = 0;

Game::Game()
{
	ocena[0] = "2";
	ocena[1] = "2";
	ocena[2] = "2";
	ocena[3] = "2";
	ocena[4] = "2";
	ocena[5] = "2";
	ocena[6] = "2";
	ocena[7] = "3";
	ocena[8] = "3.5";
	ocena[9] = "3.5";
	ocena[10] = "4";
	ocena[11] = "4";
	ocena[12] = "4.5";
	ocena[13] = "4.5";
	ocena[14] = "5";
	ocena[15] = "5";
}

Game::~Game()
{

}

int Game::play(const std::string& name)
{
	for (int i = 1; i <= 3; ++i)
	{
		Quiz newQuiz(name + "_" + toString(i));

		if (!newQuiz.readFile())
		{
			newQuiz.play();
		}
	}

	return 0;
}

int Game::showResult()
{
	int finalPoints = scorePoints + bonusPoints;

	if (finalPoints > 15)
	{
		finalPoints = 15;
	}

	std::string text = "\n\nTwoj koncowy wynik to " + toString(scorePoints)
			+ "/" + toString(questionsAsked) + ".\nBonusowych punktow "
			+ toString(bonusPoints) + "\nRazem punktow "
			+ toString(scorePoints + bonusPoints) + "\n\nTwoja ocena to "
			+ ocena[finalPoints] + "\n\n";

	UserInOut::setOutput(text);

	return finalPoints;
}

void Game::setBonusPoints(std::string points)
{
	bonusPoints += atoi(points.c_str());
	UserInOut::setOutput("Punkty bonusowe: " + toString(bonusPoints) + "\n");
}

