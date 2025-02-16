# ifndef ENERGYDRINK_H
# define ENERGYDRINK_H

# include <string>
# include "Beverage.h"

using namespace std;

enum StimulantType {
    CAFFEINE = 0,
    TAURINE
};

class EnergyDrink : public Beverage {
private:
    string brand;
    StimulantType stimulantType;
    bool sweetener;

public:
    // Constructors
    EnergyDrink();
    EnergyDrink(string brand, StimulantType stimulantType, bool sweetener);
    EnergyDrink(string name, string description, int servingSize, double calories, double price, string brand, StimulantType stimulantType, bool sweetener);

    // Setters
    void setBrand(string brand);
    void setStimulantType(StimulantType stimulantType);
    void setSweetener(bool sweetener);

    // Getters
    string getBrand();
    StimulantType getStimulantType();
    bool getSweetener();

    // Other member functions
    void toString();

    // Destructor
    ~EnergyDrink();
    
};

# endif