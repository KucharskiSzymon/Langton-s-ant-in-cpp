#ifndef gameTXT_H
#define gameTxT_H

#include "game.h"
#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

class GameTXT : public Game{
public:
	GameTXT();
	virtual ~GameTXT();
	virtual void view();
	virtual void inputFile();
	virtual void wait();
};

#endif
