# include "player.h"
# include <iostream>
# include <string>

using namespace std;

Player::Player(string name, int playerId){
    Player::setName(name);
    Player::setPlayerId(playerId);
}

string Player::getName(){
    return name;
}

int Player::getPlayerId(){
    return playerId;
}

void Player::setName(string name){
    this->name = name;
}

void Player::setPlayerId(int playerId){
    this->playerId = playerId;
}

Player::~Player(){
    cout << "Player destructor called" << endl;
}
