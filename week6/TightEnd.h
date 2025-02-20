#ifndef TIHGTEND_H
#define TIHGTEND_H

#include "Player.h"

using namespace std;

class TightEnd : public Player{
    public: 
        TightEnd(string name, int playerId);
        string getPlayerPositions();
        string play();
        string toString();
        ~TightEnd();
};
#endif