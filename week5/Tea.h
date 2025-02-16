# ifndef TEA_H
# define TEA_H

# include <string>
# include "Beverage.h"

using namespace std;

enum TeaType {
    GREEN = 0,
    BLACK,
    HERBAL,
    OOLONG
};

class Tea : public Beverage {
private:
    TeaType teaType;
    bool isHotOrCold;
    bool creamer;
    bool sweetener;
    bool lemon;

public:
    // Constructors
    Tea();
    Tea(TeaType teaType, bool isHotOrCold, bool creamer, bool sweetener, bool lemon);
    Tea(string name, string description, int servingSize, double calories, double price, TeaType teaType, bool isHotOrCold, bool creamer, bool sweetener, bool lemon);

    // Setters
    void setTeaType(TeaType teaType);
    void setIsHotOrCold(bool isHotOrCold);
    void setCreamer(bool creamer);
    void setSweetener(bool sweetener);
    void setLemon(bool lemon);

    // Getters
    TeaType getTeaType();
    bool getIsHotOrCold();
    bool getCreamer();
    bool getSweetener();
    bool getLemon();

    // Other member functions
    void toString();

    // Destructor
    ~Tea();

};

#endif