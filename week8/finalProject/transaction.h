#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>

using namespace std;

class Transaction{
    private:
        string transactionId;
        string automobileId;
        string customerId;
        int rentalDays;
        double amount;
        double balance;

    public:
        Transaction();
        Transaction(string transactionId, string automobileId, string customerId, int rentalDays, double amount, double balance);

        void setTransactionId(string transactionId);
        void setAutomobileId(string automobileId);
        void setCustomerId(string customerId);
        void setRentalDays(int rentalDays);
        void setAmount(double amount);
        void setBalance(double balance);

        string getTransactionId();
        string getAutomobileId();
        string getCustomerId();
        int getRentalDays();
        double getAmount();
        double getBalance();

        void displayTransaction();
        double calculateBalance();
};
#endif