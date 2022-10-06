#include <iostream>
#include "game.h"

Game::Game(){}
Game::~Game(){}

void Game::play(){
    inputFile();
    int sum=0;
	do {
        view();
        analize();
        wait();
        sum++;
	}
	while(sum!=tab->getStep());
	cout<< "Liczba krokow: "<<tab->getStep();
}

const Array& Game::getArray(){return *tab;}

void Game::analize(){
    char Z;
	bool moveAnt = false;

	tmp->clearArray();
	*tmp = *tab;
    for (int i = 0; i < tab->getArrayHeight(); i++){

		if (moveAnt == true)
			break;

		for (int j = 0; j < tab->getArrayWidth(); j++){

			if (moveAnt == true)
				break;

			if ((j == tab->getAntX()) && (i == tab->getAntY())) {

				if (tab->getCell(i, j).getState() == true) {

					switch (tab->getAntDirection()) {

						if (moveAnt == true)
							break;

							case 'A' :
							tmp->killCell(i, j);
							tab->setAntDirection('S');
							tab->setAntY(i + 1);
							moveAnt = true;
							break;

							case 'D' :
							tmp->killCell(i, j);
							tab->setAntDirection('W');
							tab->setAntY(i - 1);
							moveAnt = true;
							break;

                            case 'W' :
							tmp->killCell(i, j);
							tab->setAntDirection('A');
							tab->setAntX(j + 1);
							moveAnt = true;
							break;

                            case 'S' :
							tmp->killCell(i, j);
							tab->setAntDirection('D');
							tab->setAntX(j - 1);
							moveAnt = true;
							break;




					}


				}else if (tab->getCell(i, j).getState() == false) {

					switch (tab->getAntDirection()) {

						if (moveAnt == true)
							break;

							case 'A' :
							tmp->ressurectCell(i, j);
							tab->setAntDirection('W');
							tab->setAntY(i - 1);
							moveAnt = true;
							break;

							case 'D' :
							tmp->ressurectCell(i, j);
							tab->setAntDirection('S');
							tab->setAntY(i + 1);
							moveAnt = true;
							break;

                            case 'W' :
							tmp->ressurectCell(i, j);
							tab->setAntDirection('D');
							tab->setAntX(j - 1);
							moveAnt = true;
							break;

                            case 'S' :
							tmp->ressurectCell(i, j);
							tab->setAntDirection('A');
							tab->setAntX(j + 1);
							moveAnt = true;
							break;




					}
				}
			}
		}
	}

	*tab = *tmp;
}




