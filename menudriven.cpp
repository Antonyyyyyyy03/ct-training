#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    // Display the menu
    cout << "Simple Calculator Menu:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Get two numbers from the user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the selected operation
    switch (choice) {
        case 1:
            cout << "Result: " << (num1 + num2) << endl;
            break;
        case 2:
            cout << "Result: " << (num1 - num2) << endl;
            break;
        case 3:
            cout << "Result: " << (num1 * num2) << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "Result: " << (num1 / num2) << endl;
            else
                cout << "Error: Division by zero is not allowed!" << endl;
            break;
        default:
            cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
    }

    return 0;
}
