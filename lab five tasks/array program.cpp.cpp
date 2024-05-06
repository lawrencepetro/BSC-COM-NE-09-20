#include <iostream>
#include <string>
#include <vector>

int main() {
    // Declare and initialize the array
    std::vector<std::string> elementsArray = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    // Iterate through each element of the array
    for (const auto &element : elementsArray) {
        // Check if the current element starts with the letter "B"
        if (element[0] == 'B') {
            // Output the element to the console
            std::cout << element << std::endl;
        }
    }

    return 0;
}