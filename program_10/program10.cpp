#include <iostream>

class Vehicle {
public:
    virtual void move() const {
        std::cout << "The vehicle has started moving.\n";
    }

    virtual ~Vehicle() = default;
};

class Car : public Vehicle {
public:
    void move() const override {
        std::cout << "The car is travelling along the road.\n";
    }
};

class Boat : public Vehicle {
public:
    void move() const override {
        std::cout << "The boat is travelling across the water.\n";
    }
};

int main() {
    Car car;
    Boat boat;

    car.move();
    boat.move();

    return 0;
}