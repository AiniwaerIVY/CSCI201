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
            try
            {
                if (m == "") {
                    throw invalid_argument("Invalid manufacturer");
                }
                if (mo == "") {
                    throw invalid_argument("Invalid model");
                }
                if (s == "") {
                    throw invalid_argument("Invalid serial number");
                }
                if (w <= 0) {
                    throw invalid_argument("Invalid wattage");
                }
                if (n <= 0) {
                    throw invalid_argument("Invalid number of channels");
                }            
            }
            catch(const invalid_argument &e)
            {
                std::cerr << e.what() << '\n';
                exit(1);
            }
            
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

            try
            {
                if (m == "") {
                    throw invalid_argument("Invalid manufacturer");
                }
                if (mo == "") {
                    throw invalid_argument("Invalid model");
                }
                if (s == "") {
                    throw invalid_argument("Invalid serial number");
                }
                if (w <= 0) {
                    throw invalid_argument("Invalid wattage");
                }
                if (n <= 0) {
                    throw invalid_argument("Invalid number of channels");
                }
                if (b == "") {
                    throw invalid_argument("Invalid band");
                }
                if (f == "") {
                    throw invalid_argument("Invalid frequency");
                }
                if (v <= 0) {
                    throw invalid_argument("Invalid volume");
                }
                if (p != 0 && p != 1) {
                    throw invalid_argument("Invalid power");
                }
                if (pr <= 0) {
                    throw invalid_argument("Invalid price");
                }
                if (c == "") {
                    throw invalid_argument("Invalid color");
                }             
            }
            catch(const invalid_argument &e)
            {
                std::cerr << e.what() << '\n';
                exit(1);
            }
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
            try
            {
                if (m == "") {
                    throw invalid_argument("Invalid manufacturer");
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
                return;
            }
            
            manufacturer = m;
        }
        void setModel(string mo) {
            try
            {
                if (mo == "") {
                    throw invalid_argument("Invalid model");
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
                return;
            }
            model = mo;
        }
        void setSerialNumber(string s) {
            try
            {
                if (s == "") {
                    throw invalid_argument("Invalid serial number");
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
                return;
            }
            serialNumber = s;
        }
        void setWattage(int w) {
            try
            {
                if (w <= 0) {
                    throw invalid_argument("Invalid wattage");
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
                return;
            }
            wattage = w;
        }
        void setNumberOfChannels(int n) {
            try
            {
                if (n <= 0) {
                    throw invalid_argument("Invalid number of channels");
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
                return;
            }
            numberOfChannels = n;
        }
        void setBand(string b) {
            try
            {
                if (b == "") {
                    throw invalid_argument("Invalid band");
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
                return;
            }
            band = b;
        }
        void setFrequency(string f) {
            try
            {
                if (f == "") {
                    throw invalid_argument("Invalid frequency");
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
                return;
            }
            frequency = f;
        }
        void setVolume(int v) {
            try
            {
                if (v <= 0) {
                    throw invalid_argument("Invalid volume");
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
                return;
            }
            volume = v;
        }
        void setPower(bool p) {
            try
            {
                if (p != 0 && p != 1) {
                    throw invalid_argument("Invalid power");
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
                return;
            }
            power = p;
        }
        void setPrice(double pr) {
            try
            {
                if (pr <= 0) {
                    throw invalid_argument("Invalid price");
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
                return;
            }
            price = pr;
        }
        void setColor(string c) {
            try
            {
                if (c == "") {
                    throw invalid_argument("Invalid color");
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
                return;
            }
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
    cin >> wattage;

    cout << "Enter the number of channels of the stereo receiver: ";
    cin >> numberOfChannels;

    cout << "Enter the band of the stereo receiver: ";
    cin >> band;

    cout << "Enter the frequency of the stereo receiver: ";
    cin >> frequency;

    cout << "Enter the volume of the stereo receiver: ";
    cin >> volume;

    cout << "Enter the power of the stereo receiver (0 for off, 1 for on): ";
    cin >> power;

    cout << "Enter the price of the stereo receiver: ";
    cin >> price;

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
    cin >> volume;
    myStereo.setVolume(volume);

    myStereo.display();

    myStereo.powerOff();
    myStereo.display();

    return 0;
}
