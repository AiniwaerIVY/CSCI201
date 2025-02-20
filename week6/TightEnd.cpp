#include "TightEnd.h"
#include <iostream>
#include <string>

using namespace std;

TightEnd::TightEnd(string name, int playerId) : Player(name, playerId){
    cout << "TightEnd constructor called" << endl;
}

string TightEnd::getPlayerPositions(){
    return "Tight End - Position: TE";
}

string TightEnd::play(){
    return "Tight End - Play: Block and catch passes";
}

string TightEnd::toString(){
    return "Tight End - Name: " + getName() + " - Player ID: " + to_string(getPlayerId());
}

TightEnd::~TightEnd(){
    cout << "TightEnd destructor called" << endl;
}
