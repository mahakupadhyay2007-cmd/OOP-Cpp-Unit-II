#include <iostream>
#include <string>
#include <utility>

class Vehicle {
protected:
    std::string registrationNumber;

public:
    explicit Vehicle(std::string registration)
        : registrationNumber(std::move(registration)) {}

    void start() const {
        std::cout << "Vehicle " << registrationNumber << " is ready to go." << std::endl;
    }
};

class Car : public Vehicle {
public:
    explicit Car(std::string registration)
        : Vehicle(std::move(registration)) {}

    void openBoot() const {
        std::cout << "Car storage compartment opened." << std::endl;
    }
};

class Bike : public Vehicle {
public:
    explicit Bike(std::string registration)
        : Vehicle(std::move(registration)) {}

    void helmetReminder() const {
        std::cout << "Safety first! Wear your helmet." << std::endl;
    }
};

int main() {
    Car car("MH12AB1234");
    Bike bike("MH12CD5678");

    car.start();
    car.openBoot();

    bike.start();
    bike.helmetReminder();

    return 0;
}