#include <iostream>
#include <string>

class Name {
private:
    std::string firstName;
    std::string middleName;
    std::string surname;

public:
    Name(const std::string& fName, const std::string& mName, const std::string& sName)
        : firstName(fName), middleName(mName), surname(sName) {}

    void displayFullName(int times) const {
        for (int i = 0; i < times; ++i) {
            std::cout << firstName << " " << middleName << " " << surname << std::endl;
        }
    }
};

int main() {
    Name myName("John", "A.", "Doe");
    myName.displayFullName(2000);
    return 0;
}