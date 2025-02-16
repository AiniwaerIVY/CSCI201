# include "Tea.h"
# include <iostream>

using namespace std;

// Constructors
Tea::Tea() {
    setTeaType(GREEN);
    setIsHotOrCold(true);
    setCreamer(false);
    setSweetener(false);
    setLemon(false);
}

Tea::Tea(TeaType teaType, bool isHotOrCold, bool creamer, bool sweetener, bool lemon) {
    setTeaType(teaType);
    setIsHotOrCold(isHotOrCold);
    setCreamer(creamer);
    setSweetener(sweetener);
    setLemon(lemon);
}

Tea::Tea(string name, string description, int servingSize, double calories, double price, TeaType teaType, bool isHotOrCold, bool creamer, bool sweetener, bool lemon) {
    setName(name);
    setDescription(description);
    setServingSize(servingSize);
    setCalories(calories);
    setPrice(price);
    setTeaType(teaType);
    setIsHotOrCold(isHotOrCold);
    setCreamer(creamer);
    setSweetener(sweetener);
    setLemon(lemon);
}

// Setters
void Tea::setTeaType(TeaType teaType) {
    this->teaType = teaType;
}

void Tea::setIsHotOrCold(bool isHotOrCold) {
    this->isHotOrCold = isHotOrCold;
}

void Tea::setCreamer(bool creamer) {
    this->creamer = creamer;
}

void Tea::setSweetener(bool sweetener) {
    this->sweetener = sweetener;
}

void Tea::setLemon(bool lemon) {
    this->lemon = lemon;
}

// Getters
TeaType Tea::getTeaType() {
    return teaType;
}

bool Tea::getIsHotOrCold() {
    return isHotOrCold;
}

bool Tea::getCreamer() {
    return creamer;
}

bool Tea::getSweetener() {
    return sweetener;
}

bool Tea::getLemon() {
    return lemon;
}

// Other member functions
void Tea::toString() {
    cout << "Name: " << getName() << endl;
    cout << "Description: " << getDescription() << endl;
    cout << "Serving Size: " << getServingSize() << " oz" << endl;
    cout << "Calories: " << getCalories() << " cal" << endl;
    cout << "Price: $" << getPrice() << endl;
    cout << "Tea Type: ";
    switch (teaType) {
        case GREEN:
            cout << "Green" << endl;
            break;
        case BLACK:
            cout << "Black" << endl;
            break;
        case HERBAL:
            cout << "Herbal" << endl;
            break;
        case OOLONG:
            cout << "Oolong" << endl;
            break;
        default:
            cout << "Unknown" << endl;
            break;
    }
    cout << "Hot or Cold: ";
    if (isHotOrCold) {
        cout << "Hot" << endl;
    } else {
        cout << "Cold" << endl;
    }
    cout << "Creamer: ";
    if (creamer) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    cout << "Sweetener: ";
    if (sweetener) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    cout << "Lemon: ";
    if (lemon) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

// Destructor
Tea::~Tea() {
    cout << "Tea destructor called" << endl;
}