#include <iostream>
#include <string>

using namespace std;

class Date {
    private:
        int day;
        int month;
        int year;
    public:
        // Constructor
        Date(int m, int d, int y) {
            try {
                if (m < 1 || m > 12) {
                    throw invalid_argument("Invalid month");
                }
                if (d < 1 || d > 31) {
                    throw invalid_argument("Invalid day");
                }
                if (y < 1900 || y > 2020) {
                    throw invalid_argument("Invalid year");
                }
                if (m == 2 && d > 29) {
                    throw invalid_argument("Invalid day for February");
                }
                if (m == 4 || m == 6 || m == 9 || m == 11) {
                    if (d > 30) {
                        throw invalid_argument("Invalid day for this month");
                    }
                }
            } catch (const invalid_argument &msg) {
                cerr << msg.what() << endl;
                exit(1);
            }
            month = m;
            day = d;
            year = y;
        }
        
        // Getters
        int getDay() {
            return day;
        }
        int getMonth() {
            return month;
        }
        int getYear() {
            return year;
        }

        // Setters

        void setDay(int d) {
            try
            {
                if (d < 1 || d > 31) {
                    throw invalid_argument("Invalid day");
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
                day = 0;
                return;
            }
            
            day = d;
        }
        void setMonth(int m) {
            try
            {
                if (m < 1 || m > 12) {
                    throw invalid_argument("Invalid month");
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
                month = 0;
                return;
            }
            month = m;
        }
        void setYear(int y) {
            try
            {
                if (y < 1900 || y > 2020) {
                    throw invalid_argument("Invalid year");
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
                year = 0;
                return;
            }
            year = y;
        }

        void toString() {
            string monthName = "";

            if (month == 1){
                monthName = "January";
            }
            else if (month == 2){
                monthName = "February";
            }
            else if (month == 3){
                monthName = "March";
            }
            else if (month == 4){
                monthName = "April";
            }
            else if (month == 5){
                monthName = "May";
            }
            else if (month == 6){
                monthName = "June";
            }
            else if (month == 7){
                monthName = "July";
            }
            else if (month == 8){
                monthName = "August";
            }
            else if (month == 9){
                monthName = "September";
            }
            else if (month == 10){
                monthName = "October";
            }
            else if (month == 11){
                monthName = "November";
            }
            else if (month == 12){
                monthName = "December";
            }
            else {
                monthName = "Invalid month";
            }
            cout << monthName << " " << day << ", " << year << endl;
        }

        // Methods
        void displayDate() {
            toString();
        }
};


int main() {

    int day, month, year;

    // User input with validation
    cout << "Enter the month of the date: ";
    cin >> month;

    cout << "Enter the day of the date: ";
    cin >> day;

    cout << "Enter the year of the date: ";
    cin >> year;

    // Create an object of the Date class
    Date date1(month, day, year);
    cout << "The date is: ";
    date1.displayDate();

    // user input for alter the date
    cout << "Enter the new month of the date: ";
    cin >> month;
    
    cout << "Enter the new day of the date: ";
    cin >> day;

    cout << "Enter the new year of the date: ";
    cin >> year;

    date1.setMonth(month);
    date1.setDay(day);
    date1.setYear(year);

    cout << "The new date is: ";
    date1.displayDate();

    return 0;
}