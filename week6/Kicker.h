#ifndef KICKER_H
#define KICKER_H

#include "Player.h"

using namespace std;

class Kicker : public Player {
    public:
        Kicker(string name, int playerId);
        string getPlayerPositions();
        string play();
        string toString();
        ~Kicker();
};

#endif