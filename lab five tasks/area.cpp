#include <iostream>
#include <limits> // For input validation

// Function prototypes
double calculateSquareArea(double side);
double calculateRectangleArea(double length, double width);
double calculateTriangleArea(double base, double height);

int main() {
    char choice;
    do {
        std::cout << "Select a shape to calculate the area:" << std::endl;
        std::cout << "1. Square" << std::endl;
        std::cout << "2. Rectangle" << std::endl;
        std::cout << "3. Triangle" << std::endl;
        std::cout << "Enter your choice (1, 2, 3) or 'q' to quit: ";
        std::cin >> choice;

        switch (choice) {
            case '1': {
                double side;
                std::cout << "Enter the side length of the square: ";
                std::cin >> side;

                // Input validation
                if (std::cin.fail() || side <= 0) {
                    std::cin.clear(); // Clear error flags
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
                    std::cout << "Invalid input. Please enter a valid numeric value." << std::endl;
                    break;
                }

                double area = calculateSquareArea(side);
                std::cout << "The area of the square is: " << area << std::endl;
                break;
            }
            case '2': {
                double length, width;
                std::cout << "Enter the length of the rectangle: ";
                std::cin >> length;
                std::cout << "Enter the width of the rectangle: ";
                std::cin >> width;

                // Input validation
                if (std::cin.fail() || length <= 0 || width <= 0) {
                    std::cin.clear(); // Clear error flags
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
                    std::cout << "Invalid input. Please enter valid numeric values." << std::endl;
                    break;
                }

                double area = calculateRectangleArea(length, width);
                std::cout << "The area of the rectangle is: " << area << std::endl;
                break;
            }
            case '3': {
                double base, height;
                std::cout << "Enter the base of the triangle: ";
                std::cin >> base;
                std::cout << "Enter the height of the triangle: ";
                std::cin >> height;

                // Input validation
                if (std::cin.fail() || base <= 0 || height <= 0) {
                    std::cin.clear(); // Clear error flags
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
                    std::cout << "Invalid input. Please enter valid numeric values." << std::endl;
                    break;
                }

                double area = calculateTriangleArea(base, height);
                std::cout << "The area of the triangle is: " << area << std::endl;
                break;
            }
            case 'q': {
                std::cout << "Exiting the program." << std::endl;
                return 0;
            }
            default:
                std::cout << "Invalid input. Please enter a valid input." << std::endl;
        }
    } while (true);

    return 0;
}

// Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}
