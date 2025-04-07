#include <iostream>
using namespace std;

int main() {
    int year;

    // Ask the user to enter a year
    cout << "Enter a year: ";
    cin >> year;

    // Check if it's a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is
