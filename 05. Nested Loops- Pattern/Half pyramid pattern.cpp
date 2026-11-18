#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of rows

    // for (int i = 1; i <= n; i++) {       
    //     for (int j = 1; j <= i; j++) {    
    //         cout << "* "; // Left-aligned
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++)
            cout << "  ";

        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch << " "; // Right-aligned
            ch++;
        }

        cout << endl;
    }

    return 0;
}