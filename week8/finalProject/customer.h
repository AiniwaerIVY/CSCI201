#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>

using namespace std;

class Customer{
private:
    string customerId;
    string firstName;
    string lastName;
    string address;
    string phoneNumber;
    string email;
    string creditCardNumber;
    string expirationDate;
    string securityCode;

public:
    Customer();
    Customer(string customerId, string firstName, string lastName, string address, string phoneNumber, string email, string creditCardNumber, string expirationDate, string securityCode);

    void setCustomerId(string customerId);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setAddress(string address);
    void setPhoneNumber(string phoneNumber);
    void setEmail(string email);
    void setCreditCardNumber(string creditCardNumber);
    void setExpirationDate(string expirationDate);
    void setSecurityCode(string securityCode);

    string getCustomerId();
    string getFirstName();
    string getLastName();
    string getAddress();
    string getPhoneNumber();
    string getEmail();
    string getCreditCardNumber();
    string getExpirationDate();
    string getSecurityCode();

    void displayCustomer();
};
#endif