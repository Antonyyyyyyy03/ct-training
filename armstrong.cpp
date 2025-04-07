#include <iostream>
#include <cmath> // For pow() function
using namespace std;

int main() {
    int num, originalNum, digit, sum = 0;

    // Get a 3-digit number from the user
    cout << "Enter a three-digit number: ";
    cin >> num;

    // Check if the number is actually three digits
    if (num >= 100 && num <= 999) {
        originalNum = num;

        // Extract digits and compute the sum of their cubes
        while (num != 0) {
            digit = num % 10;
            sum += pow(digit, 3);
            num /= 10;
        }

        // Check if it's an Armstrong number
        if (sum == originalNum) {
            cout << originalNum << " is an Armstrong number." << endl;
        } else {
            cout << originalNum << " is not an Armstrong number." << endl;
        }

    } else {
        cout << "Invalid input! Please enter a 3-digit number." << endl;
    }

    return 0;
}
