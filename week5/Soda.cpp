# include "Soda.h"
# include <iostream>

using namespace std;

// Constructors
Soda::Soda() {
    setBrand("Unknown Brand of Soda");
    setSodaType(COLA);
    setIsDiet(false);
}

Soda::Soda(string brand, SodaType sodaType, bool isDiet) {
    setBrand(brand);
    setSodaType(sodaType);
    setIsDiet(isDiet);
}

Soda::Soda(string name, string description, int servingSize, double calories, double price, string brand, SodaType sodaType, bool isDiet) {
    setName(name);
    setDescription(description);
    setServingSize(servingSize);
    setCalories(calories);
    setPrice(price);
    setBrand(brand);
    setSodaType(sodaType);
    setIsDiet(isDiet);
}

// Setters
void Soda::setBrand(string brand) {
    this->brand = brand;
}

void Soda::setSodaType(SodaType sodaType) {
    this->sodaType = sodaType;
}

void Soda::setIsDiet(bool isDiet) {
    this->isDiet = isDiet;
}

// Getters

string Soda::getBrand() {
    return brand;
}

SodaType Soda::getSodaType() {
    return sodaType;
}

bool Soda::getIsDiet() {
    return isDiet;
}

// Other member functions
void Soda::toString() {
    cout << "Name: " << getName() << endl;
    cout << "Description: " << getDescription() << endl;
    cout << "Serving Size: " << getServingSize() << " oz" << endl;
    cout << "Calories: " << getCalories() << " cal" << endl;
    cout << "Price: $" << getPrice() << endl;
    cout << "Brand: " << getBrand() << endl;
    cout << "Soda Type: ";
    switch (sodaType) {
        case COLA:
            cout << "Cola" << endl;
            break;
        case LEMON_LIME:
            cout << "Lemon Lime" << endl;
            break;
        case Birch:
            cout << "Birch" << endl;
            break;
        default:
            cout << "Unknown" << endl;
            break;
    }
    cout << "Diet: ";
    if (isDiet) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

// Destructor
Soda::~Soda() {
    cout << "Soda destructor called" << endl;
}