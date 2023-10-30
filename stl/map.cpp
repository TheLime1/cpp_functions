#include <iostream>
#include <map>

int main() {
    // Create a map of student names and their corresponding scores
    std::map<std::string, int> studentScores;

    // Insert elements into the map
    studentScores["Alice"] = 95;
    studentScores["Bob"] = 87;
    studentScores["Charlie"] = 92;

    // Access and modify elements in the map
    studentScores["Bob"] = 90;

    // Find and print the score for a specific student
    std::string studentName = "Charlie";
    if (studentScores.find(studentName) != studentScores.end()) {
        std::cout << studentName << "'s score: " << studentScores[studentName] << std::endl;
    } else {
        std::cout << studentName << " not found in the map." << std::endl;
    }

    // Iterate through the map and print all students and their scores
    std::cout << "Student Scores:" << std::endl;
    for (const auto& pair : studentScores) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
