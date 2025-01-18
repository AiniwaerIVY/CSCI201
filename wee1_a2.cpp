#include <iostream>
#include <string>

using namespace std;

class StereoReceiver {
    private:
        string manufacturer;
        string model;
        string serialNumber;
        int wattage;
        int numberOfChannels;
        string band;
        string frequency;
        int volume;
        bool power;
        double price;
        string color;
    
    public:
        // Constructor
        StereoReceiver(string m, string mo, string s, int w, int n) {
            manufacturer = m;
            model = mo;
            serialNumber = s;
            wattage = w;
            numberOfChannels = n;
            band = "DEFAULT";
            frequency = "DEFAULT_FREQUENCY";
            volume = 0;
            power = false;
            price = 0.0;
            color = "BLACK";
        }

        StereoReceiver(string m, string mo, string s, int w, int n, string b, string f, int v, bool p, double pr, string c) {
            manufacturer = m;
            model = mo;
            serialNumber = s;
            wattage = w;
            numberOfChannels = n;
            band = b;
            frequency = f;
            volume = v;
            power = p;
            price = pr;
            color = c;
        }

        // Getters
        string getManufacturer() {
            return manufacturer;
        }
        string getModel() {
            return model;
        }
        string getSerialNumber() {
            return serialNumber;
        }
        int getWattage() {
            return wattage;
        }
        int getNumberOfChannels() {
            return numberOfChannels;
        }
        string getBand() {
            return band;
        }
        string getFrequency() {
            return frequency;
        }
        int getVolume() {
            return volume;
        }
        bool getPower() {
            return power;
        }
        double getPrice() {
            return price;
        }
        string getColor() {
            return color;
        }

        // Setters
        void setManufacturer(string m) {
            manufacturer = m;
        }
        void setModel(string mo) {
            model = mo;
        }
        void setSerialNumber(string s) {
            serialNumber = s;
        }
        void setWattage(int w) {
            wattage = w;
        }
        void setNumberOfChannels(int n) {
            numberOfChannels = n;
        }
        void setBand(string b) {
            band = b;
        }
        void setFrequency(string f) {
            frequency = f;
        }
        void setVolume(int v) {
            volume = v;
        }
        void setPower(bool p) {
            power = p;
        }
        void setPrice(double pr) {
            price = pr;
        }
        void setColor(string c) {
            color = c;
        }

        // Methods
        void powerOn() {
            power = true;
        }

        void powerOff() {
            power = false;
        }

        void increaseVolume() {
            volume++;
        }

        void decreaseVolume() {
            volume--;
        }

        void display() {
            cout << "Manufacturer: " << manufacturer << endl;
            cout << "Model: " << model << endl;
            cout << "Serial Number: " << serialNumber << endl;
            cout << "Wattage: " << wattage << endl;
            cout << "Number of Channels: " << numberOfChannels << endl;
            cout << "Band: " << band << endl;
            cout << "Frequency: " << frequency << endl;
            cout << "Volume: " << volume << endl;
            cout << "Power: " << power << endl;
            cout << "Price: " << price << endl;
            cout << "Color: " << color << endl;
        }

};


int main() {

    string manufacturer, model, serialNumber, band, frequency, color;
    int wattage, numberOfChannels, volume;
    bool power;
    double price;

    // User input with validation
    cout << "Enter the manufacturer of the stereo receiver: ";
    cin >> manufacturer;

    cout << "Enter the model of the stereo receiver: ";
    cin >> model;

    cout << "Enter the serial number of the stereo receiver: ";
    cin >> serialNumber;

    cout << "Enter the wattage of the stereo receiver: ";
    while (!(cin >> wattage) || wattage <= 0) {
        cout << "Invalid input. Please enter a positive integer for wattage: ";
        cin.clear();
    }

    cout << "Enter the number of channels of the stereo receiver: ";
    while (!(cin >> numberOfChannels) || numberOfChannels <= 0) {
        cout << "Invalid input. Please enter a positive integer for number of channels: ";
        cin.clear();
    }

    cout << "Enter the band of the stereo receiver: ";
    cin >> band;

    cout << "Enter the frequency of the stereo receiver: ";
    cin >> frequency;

    cout << "Enter the volume of the stereo receiver: ";
    while (!(cin >> volume) || volume <= 0) {
        cout << "Invalid input. Please enter a positive integer for volume: ";
        cin.clear();
    }

    cout << "Enter the power of the stereo receiver (0 for off, 1 for on): ";
    while (!(cin >> power) || (power != 0 && power != 1)) {
        cout << "Invalid input. Please enter 0 for off or 1 for on: ";
        cin.clear();
    }

    cout << "Enter the price of the stereo receiver: ";
    while (!(cin >> price) || price <= 0) {
        cout << "Invalid input. Please enter a positive number for price: ";
        cin.clear();
    }

    cout << "Enter the color of the stereo receiver: ";
    cin >> color;

    // Create an object of the StereoReceiver class
    StereoReceiver myStereo(manufacturer, model, serialNumber, wattage, numberOfChannels, band, frequency, volume, power, price, color);
    myStereo.display();

    // turning on the stereo
    myStereo.powerOn();
    myStereo.display();

    cout << "Please enter the new band of the stereo receiver: ";
    cin >> band;
    myStereo.setBand(band);

    cout << "Please enter the new frequency of the stereo receiver: ";
    cin >> frequency;
    myStereo.setFrequency(frequency);

    cout << "Please enter the new volume of the stereo receiver: ";
    while (!(cin >> volume) || volume <= 0) {
        cout << "Invalid input. Please enter a positive integer for volume: ";
        cin.clear();
    }
    myStereo.setVolume(volume);

    myStereo.display();

    myStereo.powerOff();
    myStereo.display();

    return 0;
}
