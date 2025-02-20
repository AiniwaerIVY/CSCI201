#include "Linebacker.h"
#include <iostream>
#include <string>

using namespace std;

Linebacker::Linebacker(string name, int playerId) : Player(name, playerId) {
    cout << "Linebacker constructor called" << endl;
}

string Linebacker::getPlayerPositions() {
    return "Linebacker - Position: LB";
}

string Linebacker::play() {
    return "Linebacker - Play: Run";
}

string Linebacker::toString() {
    return "Linebacker - Name: " + getName() + " - Player ID: " + to_string(getPlayerId());
}

Linebacker::~Linebacker() {
    cout << "Linebacker destructor called" << endl;
}
