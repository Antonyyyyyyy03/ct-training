#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    // Display operation choices
    cout << "Simple Calculator\n";
    cout << "Choose an operation (+, -, *, /): ";
    cin >> op;

    // Get two numbers from the user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the chosen operation
    switch (op) {
        case '+':
            cout << "Result: " << (num1 + num2) << endl;
            break;
        case '-':
            cout << "Result: " << (num1 - num2) << endl;
            break;
        case '*':
            cout << "Result: " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << (num1 / num2) << endl;
            else
                cout << "Error: Division by zero is not allowed!" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
