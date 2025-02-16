# ifndef SODA_H
# define SODA_H

# include <string>
# include "Beverage.h"

using namespace std;

enum SodaType {
    COLA = 0,
    LEMON_LIME,
    Birch
};

class Soda : public Beverage {
private:
    string brand;
    SodaType sodaType;
    bool isDiet;

public:
    // Constructors
    Soda();
    Soda(string brand, SodaType sodaType, bool isDiet);
    Soda(string name, string description, int servingSize, double calories, double price, string brand, SodaType sodaType, bool isDiet);

    // Setters
    void setBrand(string brand);
    void setSodaType(SodaType sodaType);
    void setIsDiet(bool isDiet);

    // Getters
    string getBrand();
    SodaType getSodaType();
    bool getIsDiet();

    // Other member functions
    void toString();

    // Destructor
    ~Soda();

};

# endif