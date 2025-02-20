#ifndef DEFENSIVELINEMAN_H
#define DEFENSIVELINEMAN_H

#include "Player.h"

using namespace std;

class DefensiveLineman : public Player {
public:
    DefensiveLineman(string name, int playerId);
    string getPlayerPositions();
    string play();
    string toString();
    ~DefensiveLineman();
};
#endif
