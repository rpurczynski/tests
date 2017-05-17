#ifndef QUIZ_H
#define QUIZ_H

#include "question.h"

#include <string>
#include <vector>

class Quiz
{
public:
	Quiz(const std::string & quizLevel);
	void play();
	int readFile();

private:
	std::string level;
	std::vector<Question> questions;

};

#endif // QUIZ_H
