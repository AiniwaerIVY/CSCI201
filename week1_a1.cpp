#include <iostream>
#include <string>

using namespace std;

class Cube {
    private:
        int length;
        int width;
        int height;
        string color;
    public:
        // Constructor
        Cube(int l, int w, int h, string c) {
            length = l;
            width = w;
            height = h;
            color = c;
        }
        
        // Getters
        int getLength() {
            return length;
        }
        int getWidth() {
            return width;
        }
        int getHeight() {
            return height;
        }
        string getColor() {
            return color;
        }

        // Setters

        void setLength(int l) {
            length = l;
        }
        void setWidth(int w) {
            width = w;
        }
        void setHeight(int h) {
            height = h;
        }
        void setColor(string c) {
            color = c;
        }

        // Methods
        int getVolume() {
            return length * width * height;
        }
};


int main() {

    int length, width, height;
    string color;

    // User input with validation
    cout << "Enter the length of the cube: ";
    while (!(cin >> length) || length <= 0) {
        cout << "Invalid input. Please enter a positive integer for length: ";
        cin.clear();
    }

    cout << "Enter the width of the cube: ";
    while (!(cin >> width) || width <= 0) {
        cout << "Invalid input. Please enter a positive integer for width: ";
        cin.clear();
    }

    cout << "Enter the height of the cube: ";
    while (!(cin >> height) || height <= 0) {
        cout << "Invalid input. Please enter a positive integer for height: ";
        cin.clear();
    }
    cout << "Enter the color of the cube: ";
    cin >> color;
    
    // Create an object of the Cube class
    Cube cube1(length, width, height, color);
    cout << "The length of the cube is: " << cube1.getLength() << endl;
    cout << "The width of the cube is: " << cube1.getWidth() << endl;
    cout << "The height of the cube is: " << cube1.getHeight() << endl;
    cout << "The color of the cube is: " << cube1.getColor() << endl;
    cout << "The volume of the cube is: " << cube1.getVolume() << endl;

    // user input for alter the cube
    cout << "Enter the new length of the cube: ";
    while (!(cin >> length) || length <= 0) {
        cout << "Invalid input. Please enter a positive integer for length: ";
        cin.clear();
    }

    cout << "Enter the new width of the cube: ";
    while (!(cin >> width) || width <= 0) {
        cout << "Invalid input. Please enter a positive integer for width: ";
        cin.clear();
    }

    cout << "Enter the new height of the cube: ";
    while (!(cin >> height) || height <= 0) {
        cout << "Invalid input. Please enter a positive integer for height: ";
        cin.clear();
    }
    cout << "Enter the new color of the cube: ";
    cin >> color;

    // Set the new values
    cube1.setLength(length);
    cube1.setWidth(width);
    cube1.setHeight(height);
    cube1.setColor(color);

    cout << "The new length of the cube is: " << cube1.getLength() << endl;
    cout << "The new width of the cube is: " << cube1.getWidth() << endl;
    cout << "The new height of the cube is: " << cube1.getHeight() << endl;
    cout << "The new color of the cube is: " << cube1.getColor() << endl;
    cout << "The new volume of the cube is: " << cube1.getVolume() << endl;

    return 0;
}
