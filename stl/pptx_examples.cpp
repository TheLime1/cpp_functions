#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Create a vector of integers and initialize it
    std::vector<int> numbers = {5, 2, 8, 1, 9, 3};

    // Display the first element
    if (!numbers.empty()) {
        std::cout << "First Element: " << numbers.front() << std::endl;
    }

    // Display the last element
    if (!numbers.empty()) {
        std::cout << "Last Element: " << numbers.back() << std::endl;
    }

    // Delete the last element
    if (!numbers.empty()) {
        numbers.pop_back();
        std::cout << "Last Element Deleted" << std::endl;
    }

    // Display the current size of the vector
    std::cout << "Current Size: " << numbers.size() << std::endl;

    // Sort the vector in ascending order
    std::sort(numbers.begin(), numbers.end());

    // Display the sorted vector
    std::cout << "Sorted Vector: ";
    for (const int& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Traverse the vector and display its content
    std::cout << "Vector Content: ";
    for (const int& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Traverse the vector using an iterator
    std::cout << "Vector Content (via Iterator): ";
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
