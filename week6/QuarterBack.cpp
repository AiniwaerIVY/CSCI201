# include "QuarterBack.h"
# include <iostream>

using namespace std;

QuarterBack::QuarterBack(string name, int playerId):Player(name, playerId){
    cout << "QuarterBack constructor called" << endl;
}

string QuarterBack::getPlayerPositions(){
    return "QuarterBack - Position: QB";
}

string QuarterBack::play(){
    return "QuarterBack - Throw the ball";
}

string QuarterBack::toString(){
    return "QuarterBack -" + getName() + " -  Player ID: " + to_string(getPlayerId());
}

QuarterBack::~QuarterBack(){
    cout << "QuarterBack destructor called" << endl;
}
