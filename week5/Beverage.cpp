#include "Beverage.h"
#include <iostream>

using namespace std;

// Constructors
Beverage::Beverage() {
    setName("Unknown Beverage");
    setDescription("This is a Unknown Beverage");
    setServingSize(0);
    setCalories(0);
    setPrice(0);
}

Beverage::Beverage(string name, string description, int servingSize, double calories, double price) {
    setName(name);
    setDescription(description);
    setServingSize(servingSize);
    setCalories(calories);
    setPrice(price);
}

// Setters
void Beverage::setName(string name) {
    this->name = name;
}

void Beverage::setDescription(string description) {
    this->description = description;
}

void Beverage::setServingSize(int servingSize) {
    this->servingSize = servingSize;
}

void Beverage::setCalories(double calories) {
    this->calories = calories;
}

void Beverage::setPrice(double price) {
    this->price = price;
}

// Getters
string Beverage::getName() {
    return name;
}

string Beverage::getDescription() {
    return description;
}

int Beverage::getServingSize() {
    return servingSize;
}

double Beverage::getCalories() {
    return calories;
}

double Beverage::getPrice() {
    return price;
}

// Other member functions
void Beverage::toString() {
    cout << "Name: " << name << endl;
    cout << "Description: " << description << endl;
    cout << "Serving Size: " << servingSize << " oz" << endl;
    cout << "Calories: " << calories << " kcal" << endl;
    cout << "Price: $" << price << endl;
}

// Destructor
Beverage::~Beverage() {
    cout << "Beverage object destroyed" << endl;
}