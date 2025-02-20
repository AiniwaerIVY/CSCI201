#include "WideReceiver.h"
#include <iostream>

using namespace std;

WideReceiver::WideReceiver(string name, int playerId) : Player(name, playerId) {
    cout << "WideReceiver constructor called" << endl;
}

string WideReceiver::getPlayerPositions() {
    return "Wide Receiver - Position: WR";
}

string WideReceiver::play() {
    return "Wide Receiver - Catch the ball";
}

string WideReceiver::toString() {
    return "Wide Receiver - Name: " + getName() + " - Player ID: " + to_string(getPlayerId());
}

WideReceiver::~WideReceiver() {
    cout << "WideReceiver destructor called" << endl;
}
