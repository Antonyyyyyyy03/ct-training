#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 5 == 0) {
            continue; // Skip multiples of 5
        }
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
