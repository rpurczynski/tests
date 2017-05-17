#include "quiz.h"
#include "UserInOut.h"
#include "operating_functions.h"
#include "Game.h"

#include <fstream>
#include <random>
#include <algorithm>
#include <ctime>

Quiz::Quiz(const std::string& quizLevel) :
		level(quizLevel)
{

}

int Quiz::readFile()
{
	std::string fileName = "quiz_" + level + ".txt";
	std::ifstream quiz(fileName.c_str());

	if (quiz.good() == false)  // inaczej if(!quiz)
	{
		UserInOut::setOutput("Ups! Brak pliku!\n");
		return 1;
	}

	unsigned int readLine = 0;
	std::string text;

	while (getline(quiz, text))
	{
		if (text.size() > 0 && text[0] != '#') //skip empty lines and comments from a file
		{
			if (readLine % 5 == 0)
				questions.push_back(Question(text));
			else
				questions.back().setAnswer(text);

			readLine++;
		}
	}

	quiz.close();
	return 0;
}

void Quiz::play()
{
	std::srand(unsigned(std::time(0)));
	std::random_shuffle(questions.begin(), questions.end());

	questions.resize(5, Question(""));

	for (unsigned int i = 0; i < questions.size(); ++i)
	{
		Game::scorePoints += questions[i].ask(i + 1, questions.size());
		++Game::questionsAsked;
		UserInOut::setOutput(
				"Twoja aktualna punktacja: " + toString(Game::scorePoints) + "/"
						+ toString(toString(Game::questionsAsked)) + "\n");
	}
}

