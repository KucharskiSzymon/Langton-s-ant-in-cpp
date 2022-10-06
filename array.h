#ifndef array_H
#define array_H

#include "cell.h"

using namespace std;

class Array{
public:

	friend class Game;
	Array();
    int s, nw, nh, antX, antY;
	char direction;
	Cell **Map;
	Array(int nh, int nw);
	~Array();
	Array(const Array & ar);
	Array& operator=(const Array& ar);
	int getStep();
	int getArrayWidth();
	int getArrayHeight();
    int getAntX();
	int getAntY();
    char getAntDirection();

	void setStep(int step);
	void setArrayWidth(int width);
	void setArrayHeight(int height);
	void setAntX(int antx);
	void setAntY(int anty);
    void setAntDirection(char d);
    void ressurectCell(int x, int y);
	void killCell(int x, int y);
	Cell& getCell(int x, int y);
	void clearArray();
};

#endif
