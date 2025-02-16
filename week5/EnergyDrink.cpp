# include "EnergyDrink.h"
# include <iostream>

using namespace std;

// Constructors
EnergyDrink::EnergyDrink() {
    setBrand("Unknown Brand of Energy Drink");
    setStimulantType(CAFFEINE);
    setSweetener(false);
}

EnergyDrink::EnergyDrink(string brand, StimulantType stimulantType, bool sweetener) {
    setBrand(brand);
    setStimulantType(stimulantType);
    setSweetener(sweetener);
}

EnergyDrink::EnergyDrink(string name, string description, int servingSize, double calories, double price, string brand, StimulantType stimulantType, bool sweetener) {
    setName(name);
    setDescription(description);
    setServingSize(servingSize);
    setCalories(calories);
    setPrice(price);
    setBrand(brand);
    setStimulantType(stimulantType);
    setSweetener(sweetener);
}

// Setters
void EnergyDrink::setBrand(string brand) {
    this->brand = brand;
}

void EnergyDrink::setStimulantType(StimulantType stimulantType) {
    this->stimulantType = stimulantType;
}

void EnergyDrink::setSweetener(bool sweetener) {
    this->sweetener = sweetener;
}

// Getters

string EnergyDrink::getBrand() {
    return brand;
}

StimulantType EnergyDrink::getStimulantType() {
    return stimulantType;
}

bool EnergyDrink::getSweetener() {
    return sweetener;
}

// Other member functions

void EnergyDrink::toString() {
    cout << "Name: " << getName() << endl;
    cout << "Description: " << getDescription() << endl;
    cout << "Serving Size: " << getServingSize() << " oz" << endl;
    cout << "Calories: " << getCalories() << " cal" << endl;
    cout << "Price: $" << getPrice() << endl;
    cout << "Brand: " << brand << endl;
    cout << "Stimulant Type: ";
    switch (stimulantType) {
        case CAFFEINE:
            cout << "Caffeine" << endl;
            break;
        case TAURINE:
            cout << "Taurine" << endl;
            break;
        default:
            cout << "Unknown" << endl;
            break;
    }
    cout << "Sweetener: ";
    if (sweetener) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

// Destructor
EnergyDrink::~EnergyDrink() {
    cout << "Destroying " << getName() << " object" << endl;
}