#include <iostream>
using namespace std;

int main() {
    int n, k;

    // Input size of array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input rotation value
    cout << "Enter the number of positions to rotate to the right: ";
    cin >> k;

    // Handle cases where k > n
    k = k % n;

    // Temporary array to hold rotated result
    int rotated[n];

    // Copy last k elements to beginning
    for (int i = 0; i < k; i++) {
        rotated[i] = arr[n - k + i];
    }

    // Copy the first n-k elements after that
    for (int i = 0; i < n - k; i++) {
        rotated[i + k] = arr[i];
    }

    // Display the rotated array
    cout << "Array after right rotation by " << k << " positions:\n";
    for (int i = 0; i < n; i++) {
        cout << rotated[i] << " ";
    }
    cout << endl;

    return 0;
}
