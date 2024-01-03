#include <iostream>

// Base class
class BaseClass
{
public:
    void baseFunction()
    {
        std::cout << "Function of Base Class." << std::endl;
    }
};

// Derived class
class DerivedClass : public BaseClass
{
public:
    void derivedFunction()
    {
        std::cout << "Function of Derived Class." << std::endl;
    }
};

int main()
{
    DerivedClass obj;

    obj.baseFunction();    // Calling function of base class
    obj.derivedFunction(); // Calling function of derived class

    return 0;
}