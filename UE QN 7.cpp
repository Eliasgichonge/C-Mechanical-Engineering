#include <iostream>
using namespace std;

class Calculator {
public:
    void performOperation(double num1, double num2, char operation) {
        double result;
        switch (operation) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
            default:
                cout << "Invalid operation!" << endl;
                return;
        }
        cout << "Result: " << result << endl;
    }
};

int main() {
    double num1, num2;
    char operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    Calculator calc;
    calc.performOperation(num1, num2, operation);
    return 0;
}