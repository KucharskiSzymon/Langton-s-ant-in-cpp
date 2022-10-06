#include <iostream>
#include "cell.h"

using namespace std;


Cell::Cell() : isAlive(false){}

Cell::Cell(bool isAlive){this->isAlive = isAlive;}

Cell::~Cell(){}

Cell::Cell(const Cell& c) : isAlive(c.isAlive){}

Cell& Cell::operator=(const Cell& c){
	if (this != &c)
		isAlive = c.isAlive;
	return *this;
}

bool Cell::getState(){return isAlive;}

void Cell::setState(bool st){isAlive = st;}

