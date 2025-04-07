#include <iostream>
using namespace std;

int main() {
    int n, key, index = -1;

    // Get the number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Get the element to search
    cout << "Enter the element to search: ";
    cin >> key;

    // Linear search
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    // Display result
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
