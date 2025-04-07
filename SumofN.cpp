#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;

    // Get the value of N from the user
    cout << "Enter a positive number N: ";
    cin >> N;

    // Calculate the sum using a for loop
    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    // Display the result
    cout << "Sum of the first " << N << " natural numbers is: " << sum << endl;

    return 0;
}
