#include <iostream>
using namespace std;

int main() {
    int N, i = 2;

    // Get the upper limit from the user
    cout << "Enter the value of N: ";
    cin >> N;

    cout << "Even numbers from 1 to " << N << " are:" << endl;

    // Use while loop to print even numbers
    while (i <= N) {
        cout << i << " ";
        i += 2; // Increment by 2 to get even numbers
    }

    cout << endl;
    return 0;
}
