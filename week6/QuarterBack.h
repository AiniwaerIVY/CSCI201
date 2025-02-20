#ifndef QUARTERBACK_H
#define QUARTERBACK_H

#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

class QuarterBack : public Player{

    public:
        QuarterBack(string name, int playerId);
        string getPlayerPositions();
        string play();
        string toString();
        ~QuarterBack();

};
#endif