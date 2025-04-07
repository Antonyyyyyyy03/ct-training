#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;

    // Preset valid credentials
    string validUsername = "admin";
    string validPassword = "12345";

    // Ask the user to enter username and password
    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    // Check credentials using if-else
    if (username == validUsername && password == validPassword) {
        cout << "Login successful! Welcome, " << username << "." << endl;
    } else {
        cout << "Login failed! Invalid username or password." << endl;
    }

    return 0;
}
