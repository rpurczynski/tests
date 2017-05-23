#ifndef GAME_H_
#define GAME_H_

#include <iostream>
#include <map>

class Game
{
public:
	Game();
	virtual ~Game();

	int play(const std::string& name);
	int showResult();
	void setBonusPoints(std::string points);

	static int scorePoints;
	static int questionsAsked;
	int bonusPoints = 0;
	std::map<int, std::string> ocena;

private:
};

#endif /* GAME_H_ */
