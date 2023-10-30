#include <iostream>
#include <list>

int main() {
    // Create a list of integers
    std::list<int> numbers;

    // Add elements to the list
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Insert an element at the beginning
    numbers.push_front(5);

    // Iterate and print the elements using a range-based for loop
    std::cout << "List elements: ";
    for (const int& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Remove an element from the list
    std::list<int>::iterator it = numbers.begin();
    std::advance(it, 2); // Advance iterator to the third element
    numbers.erase(it);

    // Print the updated list
    std::cout << "Updated List: ";
    for (const int& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Check if the list is empty
    if (numbers.empty()) {
        std::cout << "List is empty." << std::endl;
    } else {
        std::cout << "List is not empty." << std::endl;
    }

    // Get the size of the list
    std::cout << "List size: " << numbers.size() << std::endl;

    return 0;
}
