#include <iostream>

class EncapsulatedObject
{
private:
    int hiddenData;

public:
    void set(int value)
    {
        hiddenData = value;
    }

    int get()
    {
        return hiddenData;
    }
};

int main()
{
    EncapsulatedObject obj;

    obj.set(5);
    std::cout << "Hidden Data: " << obj.get() << std::endl;

    return 0;
}