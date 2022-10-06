#include <iostream>
#include "gameTXT.h"


GameTXT::GameTXT(){
}

GameTXT::~GameTXT(){
}


void GameTXT::view(){
	system("cls");

	for (int i = 0; i < tab->getArrayHeight(); i++){
		for (int j = 0; j < tab->getArrayWidth(); j++){
			if (tab->getCell(i, j).getState() == true){

				if ((j == tab->getAntX()) && (i == tab->getAntY())){
					cout << "X" << "  ";
				}else{
					cout << "8" << "  ";
				}
			}else{
				if ((j == tab->getAntX()) && (i == tab->getAntY())) {
					cout << "X" << "  ";
				}
				else {
					cout << "-" << "  ";
				}
			}
		}
		cout << endl;
	}
}

void GameTXT::inputFile(){

	int step, width, height, x, y;
	char direction;
	ifstream findFile;
    findFile.open("plik.txt");
    findFile >> step;
    findFile >> direction;
    findFile >> width;
    findFile >> height;
    tab = new Array(height, width);
    tab->setStep(step);
    tab->setArrayWidth(width);
    tab->setArrayHeight(height);
    tmp = new Array(*tab);
    tab->setAntDirection(direction);
	findFile >> x;
	findFile >> y;

	tab->setAntX(x-1);
	tab->setAntY(y-1);

	findFile.close();
}

void GameTXT::wait(){
	Sleep(300);
}

