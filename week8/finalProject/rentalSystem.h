#ifndef RENTALSYSTEM_H
#define RENTALSYSTEM_H

#include <iostream>
#include "car.h"
#include "customer.h"
#include "transaction.h"

using namespace std;

class RentalSystem{
    private:
        vector<Car> automobiles;
        vector<Customer> customers;
        vector<Transaction> transactions;
    public:
        void addCar(Car car);
        void addCustomer(Customer customer);
        void rentCar(string automobileId, string customerId, int rentalDays);
        void returnCar(string automobileId, string customerId, int rentalDays, int mileage);
        vector<Car> displayAllCars();
        vector<Car> displayAvailableCars();
        vector<Car> displayRentedCars();
        vector<Customer> displayAllCustomers();
        vector<Transaction> displayAllTransactions();
        ~RentalSystem();
};
#endif