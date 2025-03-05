#ifndef CAR_H
#define CAR_H

#include "automobile.h"
#include <iostream>

using namespace std;

class Car : public Automobile{
private:
    string carType;
    string gasType;
    int mileage;

public:
    Car();
    Car(string automobileId, string brand, string model, AutomobileType automobileType, int year, double price, bool isRented, string carType, string gasType, int mileage);

    void setCarType(string carType);
    void setGasType(string gasType);
    void setMileage(int mileage);

    string getCarType();
    string getGasType();
    int getMileage();

    void display();
};
#endif