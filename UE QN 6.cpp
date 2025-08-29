#include <iostream>
using namespace std;

class OddNumberPrinter {
public:
    void printOddNumbers() {
        for (int i = 63; i < 121; i += 2) {
            cout << i << endl;
        }
    }
};

int main() {
    OddNumberPrinter printer;
    printer.printOddNumbers();
    return 0;
}