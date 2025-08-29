#include <iostream>
using namespace std;

class LoginSystem {
public:
    void login() {
        string username, password;
        cout << "Enter username: ";
        cin >> username;

        if (username == "YourSurname") {
            cout << "Enter password: ";
            cin >> password;

            if (password == "2023") {
                cout << "Login Successful, You're Welcome to Learn C++ Programming." << endl;
            } else {
                cout << "Wrong password! It doesn't match! Try again." << endl;
            }
        } else {
            cout << "Username not found! Goodbye." << endl;
        }
    }
};

int main() {
    LoginSystem login;
    login.login();
    return 0;
}