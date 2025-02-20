#ifndef WIDE_RECEIVER_H
#define WIDE_RECEIVER_H

#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

class WideReceiver : public Player {
public:
    WideReceiver(string name, int playerId);
    string getPlayerPositions();
    string play();
    string toString();
    ~WideReceiver();
};
#endif