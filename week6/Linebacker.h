#ifndef LINEBACKER_H
#define LINEBACKER_H

#include "Player.h"

using namespace std;

class Linebacker : public Player {
public:
    Linebacker(string name, int playerId);
    string getPlayerPositions();
    string play();
    string toString();
    ~Linebacker();
};
#endif
