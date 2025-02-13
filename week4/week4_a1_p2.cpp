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
            if (numberOfDarts > capacity) {
                throw overflow_error("Too many darts!");
            }
            else if (numberOfDarts < 0) {
                throw invalid_argument("Invalid quantity!");
            }
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
                throw underflow_error("No darts left!");
            }
        }

        void reload(int quantity) {

            if (quantity > capacity) {
                throw overflow_error("Too many darts!");
            }
            else if (quantity < 0) {
                throw invalid_argument("Invalid quantity!");
            }
            else {
                numberOfDarts += quantity;
                if (numberOfDarts > capacity) {
                    throw overflow_error("Too many darts!");
                }
            }
        }

        //bool operator == that overloads the == operator to check if two nerf guns have the same amount of ammunition.
        bool operator == (nerfGun &gun) {
            return numberOfDarts == gun.numberOfDarts;
        }

        //bool operator < that overloads the < operator and checks to see if one gun has less ammunition than the other.
        bool operator < (nerfGun &gun) {
            return numberOfDarts < gun.numberOfDarts;
        }

        //Overload the -– operators (both prefix and postfix) to fire the gun (and decrease the ammunition). Throw an appropriate exception if an attempt is made to fire a gun without remaining ammunition.
        void operator -- () {
            if (numberOfDarts > 0) {
                numberOfDarts--;
            } else {
                throw underflow_error("No darts left!");
            }
        }

        void operator -- (int) {
            if (numberOfDarts > 0) {
                numberOfDarts--;
            } else {
                throw underflow_error("No darts left!");
            }
        }

        //Overload the += operator to allow the gun to be reloaded (by adding the specified number of rounds). Throw an appropriate exception if someone attempts to add more ammunition than the gun can handle.
        void operator += (int quantity) {
            if (quantity > capacity) {
                throw overflow_error("Too many darts!");
            }
            else if (quantity < 0) {
                throw invalid_argument("Invalid quantity!");
            }
            else {
                numberOfDarts += quantity;
                if (numberOfDarts > capacity) {
                    throw overflow_error("Too many darts!");
                }
            }
        }

        //Overload the stream insertion operator << to allow the guns information to be printed:
        friend ostream &operator << (ostream &output, const nerfGun &gun) {
            output << "Model: " << gun.model << endl;
            output << "Range: " << gun.range << endl;
            output << "Capacity: " << gun.capacity << endl;
            output << "Dart Count: " << gun.numberOfDarts << endl;
            return output;
        }
};


int main() {

    vector<nerfGun> guns;

    try {
        nerfGun gun0("Nerf I", 30, 100);
        nerfGun gun1("Nerf II", 30, 144);
        nerfGun gun2("Nerf III", 30, 20);
        nerfGun gun3("Nerf IV", 30, 30);
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

        if (gun0 == gun1) {
            cout << "Gun 0 and Gun 1 have the same amount of ammunition." << endl;
            cout << gun0 << endl;
            cout << gun1 << endl;
        } else {
            if (gun0 < gun1) {
                cout << "Gun 0 has less ammunition than Gun 1." << endl;
                cout << gun0 << endl;
                cout << gun1 << endl;
            } else {
                cout << "Gun 1 has less ammunition than Gun 0." << endl;
                cout << gun0 << endl;
                cout << gun1 << endl;
            }
        }

        gun4.fire();
        gun4.fire();
        gun4.fire();
        gun4.fire();
        gun4.fire();

        gun4 += 2;

        cout << gun4 << endl;
    }
    catch (exception &e) {
        cout << e.what() << endl;
    }
    
    return 0;
}