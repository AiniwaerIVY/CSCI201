#include "Player.h"
#include "DefensiveLineman.h"
#include "Holder.h"
#include "Kicker.h"
#include "Linebacker.h"
#include "QuarterBack.h"
#include "RunningBack.h"
#include "TightEnd.h"
#include "WideReceiver.h"

#include <iostream>

using namespace std;

int main() {

    vector<Player*> offensivePlayers;
    vector<Player*> defensivePlayers;
    vector<Player*> specialTeamsPlayers;

    DefensiveLineman dl1("Cameron Heyward", 97);
    Holder h1("Jordan Berry", 4);
    Kicker k1("Chris Boswell", 9);
    Linebacker lb1("Ryan Shazier", 50);
    QuarterBack qb1("Tom Brady", 12);
    RunningBack rb1("Le'Veon Bell", 26);
    TightEnd te1("Rob Gronkowski", 87);
    WideReceiver wr1("Antonio Brown", 84);
    
    DefensiveLineman dl2("J.J. Watt", 99);
    Holder h2("Brett Kern", 6);
    Kicker k2("Ryan Succop", 4);
    Linebacker lb2("Derrick Johnson", 56);
    QuarterBack qb2("Patrick Mahomes", 15);
    RunningBack rb2("Kareem Hunt", 27);
    TightEnd te2("Travis Kelce", 87);
    WideReceiver wr2("Tyreek Hill", 10);

    offensivePlayers.push_back(&qb1);
    offensivePlayers.push_back(&rb1);
    offensivePlayers.push_back(&te1);
    offensivePlayers.push_back(&wr1);
    offensivePlayers.push_back(&qb2);
    offensivePlayers.push_back(&rb2);
    offensivePlayers.push_back(&te2);
    offensivePlayers.push_back(&wr2);
    defensivePlayers.push_back(&dl1);
    defensivePlayers.push_back(&lb1);
    defensivePlayers.push_back(&dl2);
    defensivePlayers.push_back(&lb2);
    specialTeamsPlayers.push_back(&h1);
    specialTeamsPlayers.push_back(&k1);
    specialTeamsPlayers.push_back(&h2);
    specialTeamsPlayers.push_back(&k2);
    
    cout << "==========================Players=========================" << endl;
    cout << "Offensive Players:" << endl;
    for (int i = 0; i < offensivePlayers.size(); i++) {
        cout << offensivePlayers[i]->toString() << endl;
        cout << offensivePlayers[i]->play() << endl;
    }
    cout << "Defensive Players:" << endl;
    for (int i = 0; i < defensivePlayers.size(); i++) {
        cout << defensivePlayers[i]->toString() << endl;
        cout << defensivePlayers[i]->play() << endl;
    }
    cout << "Special Teams Players:" << endl;
    for (int i = 0; i < specialTeamsPlayers.size(); i++) {
        cout << specialTeamsPlayers[i]->toString() << endl;
        cout << specialTeamsPlayers[i]->play() << endl;
    }

    cout << "==========================Play=========================" << endl;





    return 0;
}
