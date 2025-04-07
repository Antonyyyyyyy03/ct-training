#include <iostream>
using namespace std;

int main() {
    int n;

    // Input size of square matrix
    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    int matrix[n][n];
    bool isSymmetric = true;

    // Input matrix elements
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Check symmetry: matrix[i][j] == matrix[j][i]
    for (int i = 0; i < n && isSymmetric; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
    }

    // Output result
    if (isSymmetric) {
        cout << "The matrix is symmetric." << endl;
    } else {
        cout << "The matrix is not symmetric." << endl;
    }

    return 0;
}
