#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Get dimensions of the array
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[rows][cols];

    // Input elements
    cout << "Enter elements of the 2D array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Find the largest element
    int maxElement = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
            }
        }
    }

    // Display the result
    cout << "The largest element in the array is: " << maxElement << endl;

    return 0;
}
