#include "UserInOut.h"

// re-define that class in Unit Tests

UserInOut::UserInOut()
{

}

UserInOut::~UserInOut()
{

}

std::string UserInOut::getInput()
{
	// At Unit Test we may inject some input.
	std::string input;
	std::cin >> input;
	return input;
}

void UserInOut::setOutput(const std::string& message)
{
	// At Unit Test we may expect some output, so we
	// should re-define that function and check if
	// argument is passed as we expected.
	std::cout << message;
}
