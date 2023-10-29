#include <iostream>

int main() {
    int num1, num2;

    // Input
    std::cout << "Enter two integers separated by a space: ";
    std::cin >> num1 >> num2;

    // Output
    std::cout << "You entered the following values:" << std::endl;
    std::cout << "Integer 1: " << num1 << std::endl;
    std::cout << "Integer 2: " << num2 << std::endl;

    return 0;
}
