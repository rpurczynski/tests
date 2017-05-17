/*
 * UserInOut.h
 *
 *  Created on: May 16, 2017
 *      Author: krwi
 */

#ifndef USERINOUT_H_
#define USERINOUT_H_

#include <iostream>

class UserInOut
{
public:
	UserInOut();
	~UserInOut();
	static std::string getInput();
	static void setOutput(const std::string& message);
};

#endif /* USERINOUT_H_ */
