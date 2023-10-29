#include <iostream>

class MyClass {
private:
    int data;

public:
    // Constructor with no arguments
    MyClass() {
        data = 0;
        std::cout << "Default Constructor called" << std::endl;
    }

    // Constructor with one argument
    MyClass(int value) {
        data = value;
        std::cout << "Parameterized Constructor called with value " << value << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called for data " << data << std::endl;
    }

    void displayData() {
        std::cout << "Data: " << data << std::endl;
    }
};

int main() {
    // Create objects using constructors
    MyClass obj1;             // Default constructor
    MyClass obj2(42);         // Parameterized constructor
    MyClass obj3(100);

    // Display data from objects
    obj1.displayData();
    obj2.displayData();
    obj3.displayData();

    // Destructor will be called when objects go out of scope
    return 0;
}
