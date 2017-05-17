#include <iostream>
#include "UserInOut.h"

bool keepingPlaying()
{
	UserInOut::setOutput("Play again? Y/n \n");
	std::string playAgain = UserInOut::getInput();
	return (playAgain == "Y" || playAgain == "y" || playAgain == "");
}

std::string selectLevel()
{
	UserInOut::setOutput("Select level: 1|2|3 \n");
	return UserInOut::getInput();
}
