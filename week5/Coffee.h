#ifndef COFFEE_H
#define COFFEE_H

#include <string>
# include "Beverage.h"

using namespace std;

enum RoastType {
    LIGHT = 0,
    MEDIUM,
    DARK
};

class Coffee : public Beverage {
private:
    bool isHotOrCold;
    bool isCaffeinated;
    RoastType roastType;
    int strength;
    bool creamer;
    bool sweetener;

public:
    // Constructors
    Coffee();
    Coffee(bool isHotOrCold, bool isCaffeinated, RoastType roastType, int strength, bool creamer, bool sweetener);
    Coffee(string name, string description, int servingSize, double calories, double price, bool isHotOrCold, bool isCaffeinated, RoastType roastType, int strength, bool creamer, bool sweetener);

    // Setters
    void setIsHotOrCold(bool isHotOrCold);
    void setIsCaffeinated(bool isCaffeinated);
    void setRoastType(RoastType roastType);
    void setStrength(int strength);
    void setCreamer(bool creamer);
    void setSweetener(bool sweetener);

    // Getters
    bool getIsHotOrCold();
    bool getIsCaffeinated();
    RoastType getRoastType();
    int getStrength();
    bool getCreamer();  
    bool getSweetener();

    // Other member functions
    void toString();

    // Destructor
    ~Coffee();

};

#endif