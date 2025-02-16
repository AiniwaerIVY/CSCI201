#include "Beverage.h"
#include "Coffee.h"
#include "Tea.h"
#include "Soda.h"
#include "EnergyDrink.h"
#include <iostream>
using namespace std;

int main() {
    Beverage beverage("a beverage", "Hot beverage", 12, 5, 2.99);
    Coffee coffee("a coffee", "Hot coffee", 12, 5, 2.99, true, true, MEDIUM, 5, false, false);
    Tea tea("a tea", "Hot tea", 12, 5, 2.99, GREEN, true, false, false, false);
    Soda soda("a soda", "Cold soda", 12, 5, 2.99, "Coca Cola", COLA, false);
    EnergyDrink energyDrink("an energy drink", "Cold energy drink", 12, 5, 2.99, "Red Bull", CAFFEINE, true);

    cout << endl;
    cout << "Beverage: " << endl;
    beverage.toString();
    cout << endl;
    cout << "Coffee: " << endl;
    coffee.toString();
    cout << endl;
    cout << "Tea: " << endl;
    tea.toString();
    cout << endl;
    cout << "Soda: " << endl;
    soda.toString();
    cout << endl;
    cout << "Energy Drink: " << endl;
    energyDrink.toString();
    cout << endl;

    return 0;
}