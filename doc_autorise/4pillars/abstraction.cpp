#include <iostream>

// Abstract class
class AbstractClass
{
public:
    virtual void AbstractMethod() = 0; // Pure virtual function makes this class Abstract
};

// Concrete class
class ConcreteClass : public AbstractClass
{
public:
    void AbstractMethod() override
    {
        std::cout << "Implementation of the Abstract Method in Concrete Class." << std::endl;
    }
};

int main()
{
    ConcreteClass obj;

    obj.AbstractMethod();

    return 0;
}