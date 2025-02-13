#include <iostream>
#include <vector>
#include <string>

using namespace std;


class PersonalComputer {
    private:
        string manufacturer;
        string formFactor;
        string serialNumber;
        string processor;
        string ram;
        string storageType;
        string storageSize;

    public:
        // Constructor
        PersonalComputer(string m, string f, string s, string p, string r, string st, string ss) {
            setManufacturer(m);
            setFormFactor(f);
            setSerialNumber(s);
            setProcessor(p);
            setRam(r);
            setStorageType(st);
            setStorageSize(ss);
        }
        
        // Getters
        string getManufacturer() {
            return manufacturer;
        }
        string getFormFactor() {
            return formFactor;
        }
        string getSerialNumber() {
            return serialNumber;
        }
        string getProcessor() {
            return processor;
        }
        string getRam() {
            return ram;
        }
        string getStorageType() {
            return storageType;
        }
        string getStorageSize() {
            return storageSize;
        }

        // Setters
        void setManufacturer(string m) {
            if (m.empty()) {
                throw invalid_argument("Invalid manufacturer");
            }
            manufacturer = m;
        }

        void setFormFactor(string f) {
            if (f.empty()) {
                throw invalid_argument("Invalid form factor");
            }
            formFactor = f;
        }

        void setSerialNumber(string s) {
            if (s.empty()) {
                throw invalid_argument("Invalid serial number");
            }
            serialNumber = s;
        }

        void setProcessor(string p) {
            if (p.empty()) {
                throw invalid_argument("Invalid processor");
            }
            processor = p;
        }

        void setRam(string r) {
            if (r.empty()) {
                throw invalid_argument("Invalid RAM");
            }
            ram = r;
        }

        void setStorageType(string st) {
            if (st.empty()) {
                throw invalid_argument("Invalid storage type");
            }
            storageType = st;
        }

        void setStorageSize(string ss) {
            if (ss.empty()) {
                throw invalid_argument("Invalid storage size");
            }
            storageSize = ss;
        }

        // Methods

        string toString() {
            return "Manufacturer: " + manufacturer + "\nForm Factor: " + formFactor + "\nSerial Number: " + serialNumber + "\nProcessor: " + processor + "\nRAM: " + ram + "\nStorage Type: " + storageType + "\nStorage Size: " + storageSize;
        }
};


int main() {

    vector<PersonalComputer> pcs;

    bool isContinue = true;

    while (isContinue) {
        string manufacturer, formFactor, serialNumber, processor, ram, storageType, storageSize;

        // User input with validation
        cout << "Enter the manufacturer of the personal computer: ";
        cin >> manufacturer;

        cout << "Enter the form factor of the personal computer: ";
        cin >> formFactor;

        cout << "Enter the serial number of the personal computer: ";
        cin >> serialNumber;

        cout << "Enter the processor of the personal computer: ";
        cin >> processor;

        cout << "Enter the RAM of the personal computer: ";
        cin >> ram;

        cout << "Enter the storage type of the personal computer: ";
        cin >> storageType;

        cout << "Enter the storage size of the personal computer: ";
        cin >> storageSize;

        cout << "Terminate? (y/n): ";
        string terminate;
        cin >> terminate;
        if (terminate == "y" || terminate == "Y") {
            isContinue = false;
        }

        try {
            PersonalComputer pc(manufacturer, formFactor, serialNumber, processor, ram, storageType, storageSize);
            pcs.push_back(pc);
        }
        catch(const invalid_argument &e) {
            cerr << e.what() << '\n';
            isContinue = false;
            break;
        }
    }

    cout << "Personal Computers counts: " << pcs.size() << endl;
    for (int i = 0; i < pcs.size(); i++) {
        cout << pcs[i].toString() << "\n" << endl;
    }

    return 0;
}
