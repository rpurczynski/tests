#include "question.h"
#include "operating_functions.h"
#include "UserInOut.h"

#include <iostream>
#include <fstream>
#include <ctime>
#include <algorithm>

Question::Question(const std::string& Question) :
		question(Question)
{

}

int Question::ask(int number, int allNumber)
{

	UserInOut::setOutput(
			"\nPytanie nr " + toString(number) + "/" + toString(allNumber)
					+ "\n" + question + "\n");


	std::srand(unsigned(std::time(0)));
	std::random_shuffle(mAnswers.begin(), mAnswers.end());

	for (int i = 0; i < mAnswers.size(); ++i)
	{
		UserInOut::setOutput(
				toString(i + 1) + ". " + ((mAnswers[i].c_str()) + 2) + "\n");
	}

	int answer = getUserAnswer();
	char userAnswerFirstSign = mAnswers[answer - 1][0];

	if (userAnswerFirstSign == '+')
	{
		UserInOut::setOutput(std::string("Bardzo dobrze!") + "\n");
		return 1;
	}
	else
	{
		UserInOut::setOutput(std::string("Niestety zle!") + "\n");
		UserInOut::setOutput(std::string("Poprawna odpowiedz to: ") + getProperAnswer() + "\n");
		return 0;
	}
}

int Question::getUserAnswer()
{
	std::string userAnswer;

	do
	{
		UserInOut::setOutput("Zaznacz odpowiedz 1|2|3|4: ");
		userAnswer = UserInOut::getInput();

	} while (userAnswer != "1" && userAnswer != "2" && userAnswer != "3"
			&& userAnswer != "4");

	return atoi(userAnswer.c_str());
}

std::string Question::getProperAnswer()
{
	std::string ProperAnswer;

	for (int i = 0 ; i < mAnswers.size() ; ++i)
	{
		if (mAnswers[i][0] == '+')
		{
			return ((mAnswers[i].c_str()) + 2);
		}
	}
	return "";

}

