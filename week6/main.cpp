#include "Player.h"
#include "QuarterBack.h"
#include "WideReceiver.h"
#include <iostream>

using namespace std;

int main() {
    QuarterBack player2("Patrick Mahomes", 15);
    cout << player2.getName() << endl;
    cout << player2.getPlayerId() << endl;
    player2.setName("Tom Brady");
    cout << player2.getName() << endl;
    cout << player2.getPlayerPositions() << endl;
    cout << player2.play() << endl;
    cout << player2.toString() << endl;

    WideReceiver player3("Tyreek Hill", 10);
    cout << player3.getName() << endl;
    cout << player3.getPlayerId() << endl;
    player3.setName("Julian Edelman");
    cout << player3.getName() << endl;
    cout << player3.getPlayerPositions() << endl;   
    cout << player3.play() << endl;
    cout << player3.toString() << endl;
    return 0;
}
