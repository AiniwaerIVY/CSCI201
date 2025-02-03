#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;


struct state {
    string longName;
    string governor;
    string stateFlower;
};

int main() {
    
    string stateAbbreviation;
    map<string, state> states;

    ifstream file("assets/states.txt");


    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            stringstream ss(line);
            string longName, governor, stateFlower;

            getline(ss, stateAbbreviation, ',');
            getline(ss, longName, ',');
            getline(ss, governor, ',');
            getline(ss, stateFlower, ',');

            state s = {longName, governor, stateFlower};

            states[stateAbbreviation] = s;
        }
    }

    file.close();

    cout << "Enter a state abbreviation: ";
    cin >> stateAbbreviation;

    cout << "Searching for state abbreviation: '" << stateAbbreviation << "'" << endl;

    if (states.find(stateAbbreviation) == states.end()) {
        cout << "State not found.   ENVER" << endl;
    } else {
        cout << "State: " << states[stateAbbreviation].longName << endl;
        cout << "Governor: " << states[stateAbbreviation].governor << endl;
        cout << "State Flower: " << states[stateAbbreviation].stateFlower << endl;
    }
    
    return 0;
}
