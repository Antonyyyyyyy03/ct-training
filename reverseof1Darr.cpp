#include <iostream>
using namespace std;

int main() {
    int n;

    // Get the number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse the array using a loop
    for (int i = 0; i < n / 2; i++) {
        // Swap elements
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // Display the reversed array
    cout << "Reversed array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
