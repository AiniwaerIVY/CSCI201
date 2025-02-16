#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>

using namespace std;

class Beverage {
public:
    string name;
    string description;
    int servingSize;
    double calories;
    double price;

public:
    // Constructors
    Beverage();
    Beverage(string name, string description, int servingSize, double calories, double price);

    // Setters
    void setName(string name);
    void setDescription(string description);
    void setServingSize(int servingSize);
    void setCalories(double calories);
    void setPrice(double price);

    // Getters
    string getName();
    string getDescription();
    int getServingSize();
    double getCalories();
    double getPrice();

    // Other member functions
    void toString();

    // Destructor
    ~Beverage();

};

#endif