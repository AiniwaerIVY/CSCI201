# Car Rental System

## Overview

This project is a simple car rental system implemented in C++. It allows you to manage cars, customers, and rental transactions. The system includes classes for cars, customers, and transactions, and a rental system class to manage the overall functionality.

## Project Structure

The project consists of the following files:

- `main.cpp`: The main entry point of the application.
- `car.h` and `car.cpp`: Defines the `Car` class.
- `customer.h` and `customer.cpp`: Defines the `Customer` class.
- `rentalSystem.h` and `rentalSystem.cpp`: Defines the `RentalSystem` class.
- `automobile.h` and `automobile.cpp`: Defines the `Automobile` class.
- `transaction.h` and `transaction.cpp`: Defines the `Transaction` class.

## Classes

### Car

The `Car` class represents a car in the rental system. It includes attributes such as ID, make, model, type, year, mileage, availability, body style, fuel type, and price.

### Customer

The `Customer` class represents a customer in the rental system. It includes attributes such as ID, first name, last name, address, phone number, email, credit card number, expiration date, and CVV.

### RentalSystem

The `RentalSystem` class manages the overall functionality of the car rental system. It includes methods to add cars, add customers, and manage rental transactions.

### Automobile

The `Automobile` class is a base class for different types of automobiles. It includes common attributes such as ID, make, model, type, year, mileage, and availability.

### Transaction

The `Transaction` class represents a rental transaction in the system. It includes attributes such as transaction ID, customer ID, car ID, rental date, return date, and total cost.

## Usage

To compile and run the project, use the following commands:

```sh
g++ -o finalProject main.cpp car.cpp customer.cpp rentalSystem.cpp automobile.cpp transaction.cpp
./finalProject
