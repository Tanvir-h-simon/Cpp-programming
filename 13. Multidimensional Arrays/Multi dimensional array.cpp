#include <iostream>
using namespace std;

int main() {
    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };

    // for (string i : letters) { // Error
    //     for (string e : i) {
    //         cout << e << endl;
    //     }
    // }

    letters[0][0] = "Z";
    cout << letters[0][0] << endl;

    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 4; j++) {
    //         cout << letters[i][j] << "\n";
    // }

    for (auto& i : letters) {
        for (auto& e : i) {
            cout << e << " ";
        }
        cout << endl;
    }

    return 0;
}