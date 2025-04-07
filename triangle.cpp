#include <iostream>
using namespace std;

int main() {
    float side1, side2, side3;

    // Get the sides of the triangle
    cout << "Enter the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    // Check if it's a valid triangle first
    if ((side1 + side2 > side3) &&
        (side1 + side3 > side2) &&
        (side2 + side3 > side1)) {

        // Now classify the triangle
        if (side1 == side2 && side2 == side3) {
            cout << "The triangle is Equilateral." << endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "The triangle is Isosceles." << endl;
        } else {
            cout << "The triangle is Scalene." << endl;
        }

    } else {
        cout << "The given sides do not form a valid triangle." << endl;
    }

    return 0;
}
