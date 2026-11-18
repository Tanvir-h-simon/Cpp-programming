#include <iostream>
using namespace std;

int main() {
    // // Outer loop
    // for (int i = 1; i <= 2; ++i) {
    //     cout << "Outer: " << i << "\n"; // Executes 2 times

    //     // Inner loop
    //     for (int j = 1; j <= 3; ++j) {
    //         cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
    //     }
    // }
    for (int i = 1; i <= 4; i++) { // Outer loop- Row
        for (int j = 1; j <= 3; j++) { // Inner loop- Column
            cout << i * j << " ";
        }
        cout << "\n";
    }

    return 0;
}