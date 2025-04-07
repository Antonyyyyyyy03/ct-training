#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask the user for array size
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n], sum = 0;

    // Get elements from the user
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; // Add each element to sum
    }

    // Display the sum
    cout << "Sum of the array elements: " << sum << endl;

    return 0;
}
