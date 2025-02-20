# ifndef PLAYER_H
# define PLAYER_H

# include <iostream>
using namespace std;

class Player{
private:
    string name;
    int playerId;

public:
    // Constructor
    Player(string name, int playerId);
    //setters and getters
    string getName();
    int getPlayerId();
    void setName(string name);
    void setPlayerId(int playerId);
    //virtual functions
    virtual string getPlayerPositions() = 0;
    virtual string play() = 0;
    virtual string toString() = 0;
    //destructor
    ~Player();
};

# endif