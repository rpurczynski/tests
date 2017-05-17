#ifndef GAME_H_
#define GAME_H_

#include <iostream>

class Game
{
public:
	Game();
	virtual ~Game();

	int play();

	static int scorePoints;
	static int questionsAsked;

private:
};

#endif /* GAME_H_ */
