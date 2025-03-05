
#include <iostream>
#include "car.h"
#include "customer.h"
#include "rentalSystem.h"
#include "automobile.h"
#include "transaction.h"

using namespace std;

int main() {
    Car car1("1", "Toyota", "Corolla", AutomobileType::CAR, 2019, 99.99, false, "Sedan", "Gasoline", 10000);
    Car car2("2", "Toyota", "Camry", AutomobileType::CAR, 2019, 150.00, false, "Sedan", "Gasoline", 52000);
    Car car3("3", "Toyota", "RAV4", AutomobileType::CAR, 2019, 250.00, false, "SUV", "Gasoline", 13000);
    Car car4("4", "Toyota", "Highlander", AutomobileType::CAR, 2019, 205.50, false, "SUV", "Gasoline", 12222);
    Car car5("5", "Toyota", "Sienna", AutomobileType::CAR, 2019, 130.45, false, "Van", "Gasoline", 45004);
    Car car6("6", "Toyota", "Tacoma", AutomobileType::CAR, 2019, 125.35, false, "Truck", "Gasoline", 23223);
    Car car7("7", "Toyota", "Tundra", AutomobileType::CAR, 2019, 330.25, false, "Truck", "Gasoline", 1222);
    Car car8("8", "Toyota", "Prius", AutomobileType::CAR, 2019, 45.45, false, "Hybrid", "Gasoline", 100054);
    Car car9("9", "Toyota", "Mirai", AutomobileType::CAR, 2019, 50.99, false, "Hybrid", "Hydrogen", 89881);
    Car car10("10", "Toyota", "Corolla Hybrid", AutomobileType::CAR, 2019, 55.10, false, "Sedan", "Gasoline", 19888);

    Customer customer1("1", "John", "Doe", "123 Main St", "1234567890", "john.doe@test.com", "4111 1111 1111 1111", "07/2030", "123");
    Customer customer2("2", "Jane", "Smith", "456 Not Main St", "9876543210", "jane.smith@test.com", "4111 1111 1111 2222", "09/2029", "231");
    Customer customer3("3", "Aaron", "Will", "789 106th St", "4567891230", "aaron.will@test.com", "4111 1111 1111 3333", "12/2025", "321");


    RentalSystem rentalSystem;
    rentalSystem.addCar(car1);
    rentalSystem.addCar(car2);
    rentalSystem.addCar(car3);
    rentalSystem.addCar(car4);
    rentalSystem.addCar(car5);
    rentalSystem.addCar(car6);
    rentalSystem.addCar(car7);
    rentalSystem.addCar(car8);
    rentalSystem.addCar(car9);
    rentalSystem.addCar(car10);

    rentalSystem.addCustomer(customer1);
    rentalSystem.addCustomer(customer2);
    rentalSystem.addCustomer(customer3);

    rentalSystem.rentCar("1", "1", 5);
    rentalSystem.rentCar("2", "2", 3);

    for (Transaction transaction : rentalSystem.displayAllTransactions()) {
        transaction.displayTransaction();
    }
    
    vector<Car>rentedCars = rentalSystem.displayRentedCars();
    for (Car car : rentedCars) {
        car.display();
    }

    try
    {
        rentalSystem.returnCar("1", "1", 10, 15000);
    }
    catch(const char* msg)
    {
        cerr << msg << endl;
    }


    try
    {
        rentalSystem.returnCar("2", "2", 7, 15000);
    }
    catch(const char* msg)
    {
        cerr << msg << endl;
    }

    return 0;
}
