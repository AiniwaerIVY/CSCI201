#ifndef HOLDER_H
#define HOLDER_H

#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

class Holder : public Player{
    public:
        Holder(string name, int playerId);
        string getPlayerPositions();
        string play();
        string toString();
        ~Holder();
};
#endif