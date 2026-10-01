#include <iostream>

class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}

    double area() const override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    explicit Circle(double givenRadius)
        : radius(givenRadius) {}

    double area() const override {
        return 3.141592653589793 * radius * radius;
    }
};

int main() {
    Rectangle rectangle(30, 50);
    Circle circle(10.0);

    std::cout << "Area of the rectangle: "
              << rectangle.area() << '\n';

    std::cout << "Area of the circle: "
              << circle.area() << '\n';

    return 0;
}