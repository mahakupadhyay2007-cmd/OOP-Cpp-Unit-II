#include <iostream>
#include <string>
#include <utility>

class Person {
protected:
    std::string name;

public:
    explicit Person(std::string personName)
        : name(std::move(personName)) {}
};

class Student : public Person {
private:
    int rollNumber;

public:
    Student(std::string studentName, int roll)
        : Person(std::move(studentName)), rollNumber(roll) {}

    void display() const {
        std::cout << "Student Name: " << name << '\n';
        std::cout << "Student Roll No.: " << rollNumber << '\n';
    }
};

int main() {
    Student student("Aarav", 18);

    student.display();

    return 0;
}