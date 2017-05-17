#include "Game.h"
#include "operating_functions.h"
#include "UserInOut.h"
#include "quiz.h"

int Game::scorePoints = 0;
int Game::questionsAsked = 0;

Game::Game()
{

}

Game::~Game()
{

}

int Game::play()
{
	for (int i = 1; i <= 3; ++i)
	{
		Quiz newQuiz(toString(i));

		if (!newQuiz.readFile())
		{
			newQuiz.play();
		}
	}

	UserInOut::setOutput(
			"\n\nTwój końcowy wynik to " + toString(scorePoints) + "/" + toString(questionsAsked) + "\n\n");

	return 0;
}

