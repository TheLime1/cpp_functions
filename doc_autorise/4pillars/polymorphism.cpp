#include <iostream>

// Base class
class BaseClass
{
public:
    virtual void function()
    {
        std::cout << "Function of Base Class." << std::endl;
    }
};

// Derived class
class DerivedClass : public BaseClass
{
public:
    void function() override
    {
        std::cout << "Function of Derived Class." << std::endl;
    }
};

int main()
{
    BaseClass *base = new BaseClass();
    BaseClass *derived = new DerivedClass();

    base->function();    // Calls function of Base Class
    derived->function(); // Calls function of Derived Class

    delete base;
    delete derived;

    return 0;
}