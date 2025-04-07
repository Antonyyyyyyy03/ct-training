#include <iostream>
using namespace std;

int main() {
    int units;
    double bill = 0;

    // Get the number of units from the user
    cout << "Enter the number of electricity units consumed: ";
    cin >> units;

    // Calculate the bill based on slabs
    if (units <= 100) {
        bill = units * 2;
    } else if (units <= 300) {
        bill = 100 * 2 + (units - 100) * 5;
    } else {
        bill = 100 * 2 + 200 * 5 + (units - 300) * 8;
    }

    // Display the total bill
    cout << "Total Electricity Bill: ₹" << bill << endl;

    return 0;
}
