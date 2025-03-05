# include "transaction.h"
# include <iostream>
# include <string>

using namespace std;

Transaction::Transaction(){
    Transaction::setTransactionId("T0001");
    Transaction::setAutomobileId("A0001");
    Transaction::setCustomerId("C0001");
    Transaction::setRentalDays(1);
    Transaction::setAmount(0.0);
    Transaction::setBalance(0.0);
}

Transaction::Transaction(string transactionId, string automobileId, string customerId, int rentalDays, double amount, double balance){
    Transaction::setTransactionId(transactionId);
    Transaction::setAutomobileId(automobileId);
    Transaction::setCustomerId(customerId);
    Transaction::setRentalDays(rentalDays);
    Transaction::setAmount(amount);
    Transaction::setBalance(balance);
}

void Transaction::setTransactionId(string transactionId){
    this->transactionId = transactionId;
}

void Transaction::setAutomobileId(string automobileId){
    this->automobileId = automobileId;
}

void Transaction::setCustomerId(string customerId){
    this->customerId = customerId;
}

void Transaction::setRentalDays(int rentalDays){
    this->rentalDays = rentalDays;
}

void Transaction::setAmount(double amount){
    this->amount = amount;
}

void Transaction::setBalance(double balance){
    this->balance = balance;
}

string Transaction::getTransactionId(){
    return transactionId;
}

string Transaction::getAutomobileId(){
    return automobileId;
}

string Transaction::getCustomerId(){
    return customerId;
}

int Transaction::getRentalDays(){
    return rentalDays;
}

double Transaction::getAmount(){
    return amount;
}

double Transaction::getBalance(){
    return balance;
}

void Transaction::displayTransaction(){
    cout << "Transaction ID: " << getTransactionId() << endl;
    cout << "Automobile ID: " << getAutomobileId() << endl;
    cout << "Customer ID: " << getCustomerId() << endl;
    cout << "Rental Days: " << getRentalDays() << endl;
    cout << "Amount: " << getAmount() << endl;
    cout << "Balance: " << getBalance() << endl;
    cout << endl;
}

double Transaction::calculateBalance(){
    return balance = amount * rentalDays;
}
