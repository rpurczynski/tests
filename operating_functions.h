#ifndef OPERATING_FUNCTIONS_H
#define OPERATING_FUNCTIONS_H

#include <sstream>

bool keepingPlaying();
std::string selectLevel();

template<typename T>
std::string toString(T arg)
{
	std::stringstream s;
	s << arg;
	return s.str();
}

#endif // OPERATING_FUNCTIONS_H
