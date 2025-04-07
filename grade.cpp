#include <iostream>
using namespace std;

int main() {
    int marks;

    // Get marks from the user
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    // Check for valid range first
    if (marks >= 0 && marks <= 100) {
        // Nested if-else for grade classification
        if (marks >= 90) {
            cout << "Grade: A" << endl;
        } else if (marks >= 80) {
            cout << "Grade: B" << endl;
        } else if (marks >= 70) {
            cout << "Grade: C" << endl;
        } else if (marks >= 60) {
            cout << "Grade: D" << endl;
        } else if (marks >= 50) {
            cout << "Grade: E" << endl;
        } else {
            cout << "Grade: F (Fail)" << endl;
        }
    } else {
        cout << "Invalid input! Marks should be between 0 and 100." << endl;
    }

    return 0;
}
