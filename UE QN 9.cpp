#include <iostream>
using namespace std;

class Converter {
public:
    void MeterToCentimeter(double meters) {
        cout << meters << " meters = " << meters * 100 << " centimeters" << endl;
    }

    void CentimeterToMeter(double centimeters) {
        cout << centimeters << " centimeters = " << centimeters / 100 << " meters" << endl;
    }

    void menu() {
        int choice;
        double value;
        cout << "1. Convert Meters to Centimeters\n";
        cout << "2. Convert Centimeters to Meters\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "Enter the value: ";
        cin >> value;

        switch (choice) {
            case 1:
                MeterToCentimeter(value);
                break;
            case 2:
                CentimeterToMeter(value);
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
};

int main() {
    Converter converter;
    converter.menu();
    return 0;
}