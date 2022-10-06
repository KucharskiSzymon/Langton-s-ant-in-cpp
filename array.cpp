#include "array.h"

using namespace std;


Array::Array() : nw(0), nh(0), Map(0){}

Array::Array(int nh, int nw){

	Map = new Cell *[nh];
	for (int i = 0; i < nh; i++)
		Map[i] = new Cell[nw];
}

Array::~Array(){}

Array::Array(const Array& ar) : nw(ar.nw), nh(ar.nh), Map(0){

	Map = new Cell *[nh];
	for (int i = 0; i < nh; i++)
		Map[i] = new Cell[nw];

	for (int i = 0; i < nh; i++){
		for (int j = 0; j < nw; j++)
			Map[i][j] = ar.Map[i][j];

	}
}
Array& Array::operator=(const Array & tab){

	if (this == &tab)
		return *this;

	nw = tab.nw;
	nh = tab.nh;

	for (int i = 0; i < nh; i++){
		for (int j = 0; j < nw; j++)
			Map[i][j] = tab.Map[i][j];
	}
	return *this;
}

int Array::getStep(){return s;}
int Array::getArrayWidth(){return nw;}
int Array::getArrayHeight(){return nh;}
int Array::getAntX(){return antX;}
int Array::getAntY(){return antY;}

void Array::setStep(int step){s=step;}
void Array::setArrayWidth(int widht){nw = widht;}
void Array::setArrayHeight(int height){nh = height;}
void Array::setAntX(int antx){antX = antx;}
void Array::setAntY(int anty){antY = anty;}
void Array::setAntDirection(char a){direction = a;}
char Array::getAntDirection(){return direction;}

void Array::ressurectCell(int x, int y){Map[x][y].setState(true);}

void Array::killCell(int x, int y) {Map[x][y].setState(false);}

Cell& Array::getCell(int x, int y){return Map[x][y];}

void Array::clearArray(){
	for (int i = 0; i < nh; i++){
		for (int j = 0; j < nw; j++)
			Map[i][j] = 0;
	}
}

