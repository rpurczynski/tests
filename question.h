#ifndef QUESTION_H
#define QUESTION_H

#include <iostream>
#include <vector>

class Question
{
public:
	Question(const std::string& Question);
	int ask(int i, int allNumber);

//	void setA(std::string arg)
//	{
//		a = arg;
//	}
//	void setB(std::string arg)
//	{
//		b = arg;
//	}
//	void setC(std::string arg)
//	{
//		c = arg;
//	}
//	void setD(std::string arg)
//	{
//		d = arg;
//	}

	void setAnswer(std::string arg)
	{
		mAnswers.push_back(arg);
	}

private:
	int getUserAnswer();
	std::string getProperAnswer();
	std::string question;
	std::vector<std::string> mAnswers;
};

#endif // QUESTION_H
