# include "Coffee.h"
# include <iostream>

using namespace std;

// Constructors
Coffee::Coffee() {
    setIsHotOrCold(true);
    setIsCaffeinated(true);
    setRoastType(MEDIUM);
    setStrength(5);
    setCreamer(false);
    setSweetener(false);
}

Coffee::Coffee(bool isHotOrCold, bool isCaffeinated, RoastType roastType, int strength, bool creamer, bool sweetener) {
    setIsHotOrCold(isHotOrCold);
    setIsCaffeinated(isCaffeinated);
    setRoastType(roastType);
    setStrength(strength);
    setCreamer(creamer);
    setSweetener(sweetener);
}

Coffee::Coffee(string name, string description, int servingSize, double calories, double price, bool isHotOrCold, bool isCaffeinated, RoastType roastType, int strength, bool creamer, bool sweetener) {
    setName(name);
    setDescription(description);
    setServingSize(servingSize);
    setCalories(calories);
    setPrice(price);
    setIsHotOrCold(isHotOrCold);
    setIsCaffeinated(isCaffeinated);
    setRoastType(roastType);
    setStrength(strength);
    setCreamer(creamer);
    setSweetener(sweetener);
}

// Setters
void Coffee::setIsHotOrCold(bool isHotOrCold) {
    this->isHotOrCold = isHotOrCold;
}

void Coffee::setIsCaffeinated(bool isCaffeinated) {
    this->isCaffeinated = isCaffeinated;
}

void Coffee::setRoastType(RoastType roastType) {
    this->roastType = roastType;
}

void Coffee::setStrength(int strength) {
    this->strength = strength;
}

void Coffee::setCreamer(bool creamer) {
    this->creamer = creamer;
}

void Coffee::setSweetener(bool sweetener) {
    this->sweetener = sweetener;
}

// Getters

bool Coffee::getIsHotOrCold() {
    return isHotOrCold;
}

bool Coffee::getIsCaffeinated() {
    return isCaffeinated;
}

RoastType Coffee::getRoastType() {
    return roastType;
}

int Coffee::getStrength() {
    return strength;
}

bool Coffee::getCreamer() {
    return creamer;
}

bool Coffee::getSweetener() {
    return sweetener;
}

// Other member functions

void Coffee::toString() {
    cout << "Name: " << name << endl;
    cout << "Description: " << description << endl;
    cout << "Serving Size: " << servingSize << " oz" << endl;
    cout << "Calories: " << calories << " cal" << endl;
    cout << "Price: $" << price << endl;
    cout << "Is Hot or Cold: " << (isHotOrCold ? "Hot" : "Cold") << endl;
    cout << "Is Caffeinated: " << (isCaffeinated ? "Yes" : "No") << endl;
    cout << "Roast Type: " << (roastType == LIGHT ? "Light" : roastType == MEDIUM ? "Medium" : "Dark") << endl;
    cout << "Strength: " << strength << endl;
    cout << "Creamer: " << (creamer ? "Yes" : "No") << endl;
    cout << "Sweetener: " << (sweetener ? "Yes" : "No") << endl;
}

// Destructor
Coffee::~Coffee() {
    cout << "Coffee object is being deleted" << endl;
}