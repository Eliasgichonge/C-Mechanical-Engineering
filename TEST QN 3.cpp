#include <iostream>
#include <cmath>

class ShapeCalculator {
public:
    static double calculateArea(double radius) {
        return M_PI * radius * radius;
    }

    static double calculateVolume(double radius, double height) {
        return M_PI * radius * radius * height;
    }

    void displayResult(int choice, double radius, double height = 0) {
        if (choice == 1) {
            std::cout << "Area of circle: " << calculateArea(radius) << std::endl;
        } else if (choice == 2) {
            std::cout << "Volume of cylinder: " << calculateVolume(radius, height) << std::endl;
        } else {
            std::cout << "Invalid choice." << std::endl;
        }
    }
};

int main() {
    ShapeCalculator calculator;
    int choice;
    std::cout << "Enter 1 for area of circle or 2 for volume of cylinder: ";
    std::cin >> choice;

    if (choice == 1) {
        calculator.displayResult(choice, 24);
    } else if (choice == 2) {
        calculator.displayResult(choice, 40, 60);
    }

    return 0;
}