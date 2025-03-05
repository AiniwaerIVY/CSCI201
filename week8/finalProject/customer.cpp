# include "customer.h"
# include <iostream>
# include <string>

using namespace std;

Customer::Customer(){
    Customer::setCustomerId("C0001");
    Customer::setFirstName("John");
    Customer::setLastName("Doe");
    Customer::setAddress("1234 Main St, Anytown, USA");
    Customer::setPhoneNumber("123-456-7890");
    Customer::setEmail("John.Doe@test.com");
    Customer::setCreditCardNumber("1234-5678-9012-3456");
    Customer::setExpirationDate("12/2022");
    Customer::setSecurityCode("123");
}

Customer::Customer(string customerId, string firstName, string lastName, string address, string phoneNumber, string email, string creditCardNumber, string expirationDate, string securityCode){
    Customer::setCustomerId(customerId);
    Customer::setFirstName(firstName);
    Customer::setLastName(lastName);
    Customer::setAddress(address);
    Customer::setPhoneNumber(phoneNumber);
    Customer::setEmail(email);
    Customer::setCreditCardNumber(creditCardNumber);
    Customer::setExpirationDate(expirationDate);
    Customer::setSecurityCode(securityCode);
}

void Customer::setCustomerId(string customerId){
    this->customerId = customerId;
}

void Customer::setFirstName(string firstName){
    this->firstName = firstName;
}

void Customer::setLastName(string lastName){
    this->lastName = lastName;
}

void Customer::setAddress(string address){
    this->address = address;
}

void Customer::setPhoneNumber(string phoneNumber){
    this->phoneNumber = phoneNumber;
}

void Customer::setEmail(string email){
    this->email = email;
}

void Customer::setCreditCardNumber(string creditCardNumber){
    this->creditCardNumber = creditCardNumber;
}

void Customer::setExpirationDate(string expirationDate){
    this->expirationDate = expirationDate;
}

void Customer::setSecurityCode(string securityCode){
    this->securityCode = securityCode;
}

string Customer::getCustomerId(){
    return customerId;
}

string Customer::getFirstName(){
    return firstName;
}

string Customer::getLastName(){
    return lastName;
}

string Customer::getAddress(){
    return address;
}

string Customer::getPhoneNumber(){
    return phoneNumber;
}

string Customer::getEmail(){
    return email;
}

string Customer::getCreditCardNumber(){
    return creditCardNumber;
}

string Customer::getExpirationDate(){
    return expirationDate;
}

string Customer::getSecurityCode(){
    return securityCode;
}

void Customer::displayCustomer(){
    cout << "Customer ID: " << Customer::getCustomerId() << endl;
    cout << "First Name: " << Customer::getFirstName() << endl;
    cout << "Last Name: " << Customer::getLastName() << endl;
    cout << "Address: " << Customer::getAddress() << endl;
    cout << "Phone Number: " << Customer::getPhoneNumber() << endl;
    cout << "Email: " << Customer::getEmail() << endl;
    cout << "Credit Card Number: " << Customer::getCreditCardNumber() << endl;
    cout << "Expiration Date: " << Customer::getExpirationDate() << endl;
    cout << "Security Code: " << Customer::getSecurityCode() << endl;
    cout << endl;
}
