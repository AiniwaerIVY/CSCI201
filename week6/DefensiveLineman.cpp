#include "DefensiveLineman.h"
#include <iostream>
#include <string>

using namespace std;

DefensiveLineman::DefensiveLineman(string name, int playerId) : Player(name, playerId) {
    cout << "DefensiveLineman constructor called" << endl;
}

string DefensiveLineman::getPlayerPositions() {
    return "Defensive Lineman - Position: DL";
}

string DefensiveLineman::play() {
    return "Defensive Lineman - Play: Tackle";
}

string DefensiveLineman::toString() {
    return "Defensive Lineman - Name: " + getName() + " - Player ID: " + to_string(getPlayerId());
}

DefensiveLineman::~DefensiveLineman() {
    cout << "DefensiveLineman destructor called" << endl;
}
