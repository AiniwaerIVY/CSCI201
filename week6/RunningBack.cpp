#include "RunningBack.h"
#include <iostream>
#include <string>

using namespace std;

RunningBack::RunningBack(string name, int playerId) : Player(name, playerId) {
    cout << "RunningBack constructor called" << endl;
}

string RunningBack::getPlayerPositions() {
    return "Running Back - Position: RB";
}

string RunningBack::play() {
    return "Running Back - Play: Run";
}

string RunningBack::toString() {
    return "Running Back - Name: " + getName() + " - Player ID: " + to_string(getPlayerId());
}

RunningBack::~RunningBack() {
    cout << "RunningBack destructor called" << endl;
}
