#include <iostream>
using namespace std;

class StringLengthCalculator {
public:
    void displayLength(const string& name) {
        cout << "Full Name: " << name << ", Length: " << name.length() << endl;
    }
};

int main() {
    StringLengthCalculator calc;
    calc.displayLength("Your Full Name");
    return 0;
}