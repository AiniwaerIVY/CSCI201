# include <iostream>
# include <string>
# include <vector>
# include <stdexcept>

using namespace std;

class nerfGun {
    private:
        string model;
        int range;
        int capacity;
        int numberOfDarts;

        // Setters
        void setModel(string model) {
            this->model = model;
        }

        void setRange(int range) {
            this->range = range;
        }

        void setCapacity(int capacity) {
            if (capacity != 144) {
                this->capacity = 144;
            } else {
                this->capacity = capacity;
            }
        }

        void setNumberOfDarts(int numberOfDarts) {
            this->numberOfDarts = numberOfDarts;
        }

    public:
        // Constructors
        nerfGun(string model, int range, int capacity = 144) {
            setModel(model);
            setRange(range);
            setCapacity(capacity);
            setNumberOfDarts(capacity);
        }

        // Getters
        string getModel() {
            return model;
        }

        int getCapacity() {
            return capacity;
        }

        int getDartCount() {
            return numberOfDarts;
        }

        // Methods
        void fire() {
            if (numberOfDarts > 0) {
                numberOfDarts--;
            } else {
                throw std::underflow_error("No darts left!");
            }
        }

        void reload(int quantity) {

            if (quantity > capacity) {
                throw std::overflow_error("Too many darts!");
            }
            else if (quantity < 0) {
                throw std::invalid_argument("Invalid quantity!");
            }
            else {
                numberOfDarts += quantity;
                if (numberOfDarts > capacity) {
                    throw std::overflow_error("Too many darts!");
                }
            }
        }

        // will create overloading operators in the next part
        /*
        Create overloaded operators:
        bool operator == that overloads the == operator to check if two nerf guns have the same amount of ammunition.
        bool operator < that overloads the < operator and checks to see if one gun has less ammunition than the other.
        Overload the -– operators (both prefix and postfix) to fire the gun (and decrease the ammunition). Throw an appropriate exception if an attempt is made to fire a gun without remaining ammunition.
        Overload the += operator to allow the gun to be reloaded (by adding the specified number of rounds). Throw an appropriate exception if someone attempts to add more ammunition than the gun can handle.
        Overload the stream insertion operator << to allow the guns information to be printed:
        cout << myGun;
        */
};


int main() {

    vector<nerfGun> guns;

    nerfGun gun0("Nerf I", 30, 100);
    nerfGun gun1("Nerf II", 30, 144);
    nerfGun gun2("Nerf III", 30, 200);
    nerfGun gun3("Nerf IV", 30, 300);
    nerfGun gun4("Nerf V", 30);

    guns.push_back(gun0);
    guns.push_back(gun1);
    guns.push_back(gun2);
    guns.push_back(gun3);
    guns.push_back(gun4);

    for (int i = 0; i < guns.size(); i++) {
        cout << guns[i].getModel() << endl;
        cout << guns[i].getCapacity() << endl;
        cout << guns[i].getDartCount() << endl;
        cout << endl;
    }

    /*Compare the guns using the overloaded operator and display which one has the most ammunition.
    Use the overloaded operators to fire and reload the guns randomly, displaying their status/information.
    Handle any exceptions for overloading or exhausting the guns ammunition.
    */

    return 0;
}