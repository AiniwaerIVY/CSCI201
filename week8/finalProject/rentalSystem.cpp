# include "rentalSystem.h"
# include <iostream>
# include <string>

using namespace std;

void RentalSystem::addCar(Car car){
    automobiles.push_back(car);
}

void RentalSystem::addCustomer(Customer customer){
    customers.push_back(customer);
}

void RentalSystem::rentCar(string automobileId, string customerId, int rentalDays){
    Transaction transaction;
    transaction.setTransactionId("T000" + to_string(transactions.size() + 1));
    transaction.setAutomobileId(automobileId);
    transaction.setCustomerId(customerId);
    transaction.setRentalDays(rentalDays);
    transaction.setAmount(automobiles[stoi(automobileId) - 1].getPrice());
    transaction.setBalance(transaction.calculateBalance());
    automobiles[stoi(automobileId) - 1].setIsRented(true);
    transactions.push_back(transaction);
}

void RentalSystem::returnCar(string automobileId, string customerId, int rentalDays, int mileage){
    for(int i = 0; i < transactions.size(); i++){
        if(transactions[i].getAutomobileId() == automobileId && transactions[i].getCustomerId() == customerId){
            double additionalCost = 0;

            if (rentalDays > transactions[i].getRentalDays()){
                double lateFee = automobiles[stoi(automobileId) - 1].calculateRentalCost(rentalDays - transactions[i].getRentalDays());
                additionalCost += lateFee;
                cout << "late fee "<< lateFee <<" is charged." << endl;
            }else{
                cout << "No late return fee is charged." << endl;
            }
            
            if (mileage > 1000){
                double mileageFee = (mileage - 1000) * 0.01;
                additionalCost += mileageFee;
                cout << "Mileage fee "<< mileageFee <<" is charged." << endl;
            }else{
                cout << "No mileage fee is charged." << endl;
            }

            transactions[i].setBalance(transactions[i].calculateBalance() + additionalCost);

            automobiles[stoi(automobileId) - 1].setIsRented(false);
            transactions[i].displayTransaction();
            double balance = transactions[i].getBalance();
            if (balance > 0){
                cout << "Please pay the remaining balance of $" << balance << " before returning the car." << endl;
            } else {
                cout << "Thank you for returning the car." << endl;
            }
            return;
        }
        
    }
    throw "Transaction not found. Please check the automobile ID and customer ID.";
}

vector<Car> RentalSystem::displayAllCars(){
    return automobiles;
}

vector<Car> RentalSystem::displayAvailableCars(){
    vector<Car> availableCars;
    for(int i = 0; i < automobiles.size(); i++){
        if(automobiles[i].getIsRented() == false){
            availableCars.push_back(automobiles[i]);
        }
    }
    return availableCars;
}

vector<Car> RentalSystem::displayRentedCars(){
    vector<Car> rentedCars;
    for(int i = 0; i < automobiles.size(); i++){
        if(automobiles[i].getIsRented() == true){
            rentedCars.push_back(automobiles[i]);
        }
    }
    return rentedCars;
}

vector<Customer> RentalSystem::displayAllCustomers(){
    return customers;
}

vector<Transaction> RentalSystem::displayAllTransactions(){
    return transactions;
}

RentalSystem::~RentalSystem(){
    automobiles.clear();
    customers.clear();
    transactions.clear();
}
