#include <iostream>
#include <vector>

int main() {
    // Declare a vector to store integers
    std::vector<int> numbers;

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Access and modify elements in the vector
    numbers[1] = 25;

    // Iterate and print the elements
    std::cout << "Vector elements:";
    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << " " << numbers[i];
    }
    std::cout << std::endl;

    // Using range-based for loop (C++11 and later)
    std::cout << "Vector elements (using range-based for loop):";
    for (int num : numbers) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    // Check if the vector is empty
    if (numbers.empty()) {
        std::cout << "Vector is empty." << std::endl;
    } else {
        std::cout << "Vector is not empty." << std::endl;
    }

    // Get the size of the vector
    std::cout << "Vector size: " << numbers.size() << std::endl;

    // Clear the vector
    numbers.clear();

    // Check if the vector is empty after clearing
    if (numbers.empty()) {
        std::cout << "Vector is empty after clearing." << std::endl;
    } else {
        std::cout << "Vector is not empty after clearing." << std::endl;
    }

    return 0;
}
