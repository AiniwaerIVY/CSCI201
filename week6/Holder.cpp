#include "Holder.h"
#include <iostream>
#include <string>

using namespace std;

Holder::Holder(string name, int playerId) : Player(name, playerId){
    cout << "Holder constructor called" << endl;
}

string Holder::getPlayerPositions(){
    return "Holder - positions: holder";
}

string Holder::play(){
    return "Holder - play: hold the ball";
}

string Holder::toString(){
    return "Holder - name: " + getName() + ", playerId: " + to_string(getPlayerId());
}

Holder::~Holder(){
    cout << "Holder destructor called" << endl;
}
