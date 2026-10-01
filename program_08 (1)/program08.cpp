#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base class object initialized.\n";
    }

    ~Base() {
        std::cout << "Base class object released.\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived class object initialized.\n";
    }

    ~Derived() {
        std::cout << "Derived class object released.\n";
    }
};

int main() {
    Derived object;

    return 0;
}