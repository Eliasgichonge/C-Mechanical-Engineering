#include <iostream>
using namespace std;

class DisplayInfo {
public:
    void showDetails(const string& name, const string& regNo, int year) {
        for (int i = 0; i < 1000; ++i) {
            cout << name << ", " << regNo << ", Year: " << year << endl;
        }
    }
};

int main() {
    DisplayInfo info;
    info.showDetails("Your Full Name", "Your Registration Number", 2023);
    return 0;
}