#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Get input from the user
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Use nested if-else to find the largest number
    if (num1 >= num2) {
        if (num1 >= num3) {
            cout << "The largest number is: " << num1 << endl;
        } else {
            cout << "The largest number is: " << num3 << endl;
        }
    } else {
        if (num2 >= num3) {
            cout << "The largest number is: " << num2 << endl;
        } else {
            cout << "The largest number is: " << num3 << endl;
        }
    }

    return 0;
}

