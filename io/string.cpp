#include <iostream>
#include <string>

int main() {
    std::string name;

    // Input
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Output
    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}
