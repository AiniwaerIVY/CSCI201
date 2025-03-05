# include "car.h"
# include <iostream>
# include <string>

using namespace std;

Car::Car(){
    Car::setCarType("SEDAN");
    Car::setGasType("UNLEADED");
    Car::setMileage(60000);
}

Car::Car(string automobileId, string brand, string model, AutomobileType automobileType, int year, double price, bool isRented, string carType, string gasType, int mileage){
    Car::setAutomobileId(automobileId);
    Car::setBrand(brand);
    Car::setModel(model);
    Car::setAutomobileType(automobileType);
    Car::setYear(year);
    Car::setPrice(price);
    Car::setIsRented(isRented);
    Car::setCarType(carType);
    Car::setGasType(gasType);
    Car::setMileage(mileage);
}

void Car::setCarType(string carType){
    this->carType = carType;
}

void Car::setGasType(string gasType){
    this->gasType = gasType;
}

void Car::setMileage(int mileage){
    this->mileage = mileage;
}

string Car::getCarType(){
    return carType;
}

string Car::getGasType(){
    return gasType;
}

int Car::getMileage(){
    return mileage;
}

void Car::display(){
    cout << "Automobile ID: " << Car::getAutomobileId() << endl;
    cout << "Brand: " << Car::getBrand() << endl;
    cout << "Model: " << Car::getModel() << endl;
    cout << "Automobile Type: " << (Car::getAutomobileType() == CAR ? "Car" : "Motorcycle") << endl;
    cout << "Year: " << Car::getYear() << endl;
    cout << "Price: " << Car::getPrice() << endl;
    cout << "Is Rented: " << (Car::getIsRented() ? "Yes" : "No") << endl;
    cout << "Car Type: " << Car::getCarType() << endl;
    cout << "Gas Type: " << Car::getGasType() << endl;
    cout << "Mileage: " << Car::getMileage() << endl;
    cout << endl;
}
