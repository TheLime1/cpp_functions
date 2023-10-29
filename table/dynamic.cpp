#include <iostream>

int main() {
    // Dynamic memory allocation using 'new'
    int* dynamicArray = new int[5];

    std::cout << "Enter 5 integer values:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cin >> dynamicArray[i];
    }

    std::cout << "You entered the following values:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Element " << i << ": " << dynamicArray[i] << std::endl;
    }

    // Deallocate memory using 'delete'
    delete[] dynamicArray;

    return 0;
}
