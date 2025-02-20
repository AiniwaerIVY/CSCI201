#ifndef RUNNINGBACK_H
#define RUNNINGBACK_H

#include "Player.h"
using namespace std;

class RunningBack : public Player {
    public:
        RunningBack(string name, int playerId);
        string getPlayerPositions();
        string play();
        string toString();
        ~RunningBack();
};
#endif
