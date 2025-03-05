# include "automobile.h"
# include <iostream>
# include <string>

using namespace std;

Automobile::Automobile(){
    Automobile::setAutomobileId("000000");
    Automobile::setBrand("TOYOTA");
    Automobile::setModel("COROLLA");
    Automobile::setAutomobileType(CAR);
    Automobile::setYear(2021);
    Automobile::setPrice(90.0);
    Automobile::setIsRented(true);
}

Automobile::Automobile(string automobileId, string brand, string model, AutomobileType automobileType, int year, double price, bool isRented){
    Automobile::setAutomobileId(automobileId);
    Automobile::setBrand(brand);
    Automobile::setModel(model);
    Automobile::setAutomobileType(automobileType);
    Automobile::setYear(year);
    Automobile::setPrice(price);
    Automobile::setIsRented(isRented);
}

void Automobile::setAutomobileId(string automobileId){
    this->automobileId = automobileId;
}

void Automobile::setBrand(string brand){
    this->brand = brand;
}

void Automobile::setModel(string model){
    this->model = model;
}

void Automobile::setAutomobileType(AutomobileType automobileType){
    this->automobileType = automobileType;
}

void Automobile::setYear(int year){
    this->year = year;
}

void Automobile::setPrice(double price){
    this->price = price;
}

void Automobile::setIsRented(bool isRented){
    this->isRented = isRented;
}

string Automobile::getAutomobileId(){
    return automobileId;
}

string Automobile::getBrand(){
    return brand;
}

string Automobile::getModel(){
    return model;
}

AutomobileType Automobile::getAutomobileType(){
    return automobileType;
}

int Automobile::getYear(){
    return year;
}

double Automobile::getPrice(){
    return price;
}

bool Automobile::getIsRented(){
    return isRented;
}

void Automobile::display(){
    cout << "Automobile ID: " << automobileId << endl;
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Type: " << (automobileType == CAR ? "Car" : "Motorcycle") << endl;
    cout << "Year: " << year << endl;
    cout << "Price: " << price << endl;
    cout << "Is rented: " << (isRented ? "Yes" : "No") << endl;
}

bool Automobile::rent(){
    if(isRented){
        cout << "Automobile is already rented" << endl;
        return false;
    }
    isRented = true;
    return true;
}

bool Automobile::returnRental(){
    if(!isRented){
        cout << "Automobile is not rented" << endl;
        return false;
    }
    isRented = false;
    return true;
}

double Automobile::calculateRentalCost(int days){
    return price * days;
}
