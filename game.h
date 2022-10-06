#ifndef game_H
#define game_H

#include "array.h"

class Game{
public:

	Game();
    ~Game();
    Array *tab, *tmp;
	Game(const Game& g);
	Game& operator=(const Game& g);
	void play();
	void analize();
	virtual void inputFile() = 0;
	const Array& getArray();
	virtual void view() = 0;
	virtual void wait() = 0;
};

#endif
