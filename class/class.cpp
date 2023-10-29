#include <iostream>

class Person {
public:
    // Public members (attributes)
    std::string name;
    int age;

    // Constructor
    Person(const std::string& n, int a) : name(n), age(a) {}

    // Member function to display information
    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << " years" << std::endl;
    }
};

int main() {
    // Create instances of the Person class
    Person person1("Alice", 30);
    Person person2("Bob", 25);

    // Access and display information using member functions
    person1.displayInfo();
    person2.displayInfo();

    return 0;
}
