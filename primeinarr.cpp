#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;

    // Get the number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n], primeCount = 0;

    // Input array elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (isPrime(arr[i])) {
            primeCount++;
        }
    }

    // Display result
    cout << "Number of prime elements in the array: " << primeCount << endl;

    return 0;
}
