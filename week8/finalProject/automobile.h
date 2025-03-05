# ifndef AUTOMOBILE_H
# define AUTOMOBILE_H

# include <iostream>
using namespace std;

enum AutomobileType {
    CAR = 0,
    MOTORCICLE
};

class Automobile{
private:
    string automobileId;
    string brand;
    string model;
    AutomobileType automobileType;
    int year;
    double price;
    bool isRented;

public:
    // Constructors
    Automobile();
    Automobile(string automobileId, string brand, string model, AutomobileType automobileType, int year, double price, bool isRented);

    // Setters
    void setAutomobileId(string automobileId);
    void setBrand(string brand);
    void setModel(string model);
    void setAutomobileType(AutomobileType automobileType);
    void setYear(int year);
    void setPrice(double price);
    void setIsRented(bool isRented);

    // Getters
    string getAutomobileId();
    string getBrand();
    string getModel();
    AutomobileType getAutomobileType();
    int getYear();
    double getPrice();
    bool getIsRented();

    // Other member functions
    void display();
    bool rent();
    bool returnRental();
    double calculateRentalCost(int days);
};

# endif