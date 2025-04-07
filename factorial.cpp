#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1; // Using long long to handle large results

    // Get the number from the user
    cout << "Enter a positive integer: ";
    cin >> n;

    // Validate input
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int i = 1;
        while (i <= n) {
            factorial *= i;
            i++;
        }

        // Display the result
        cout << "Factorial of " << n << " is: " << factorial << endl;
    }

    return 0;
}
