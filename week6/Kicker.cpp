#include "Kicker.h"
#include <iostream>
#include <string>

using namespace std;

Kicker::Kicker(string name, int playerId) : Player(name, playerId) {
    cout << "Kicker constructor" << endl;    
}

string Kicker::getPlayerPositions() {
    return "Kicker - Position: Kicker";
}

string Kicker::play() {
    return "Kicker - Kick the ball";
}

string Kicker::toString() {
    return "Kicker - Name: " + getName() + " - PlayerId: " + to_string(getPlayerId());
}

Kicker::~Kicker() {
    cout << "Kicker destructor" << endl;
}
