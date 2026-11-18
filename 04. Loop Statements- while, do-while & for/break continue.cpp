#include <iostream>
using namespace std;

int main() {
    // for (int i = 0; i < 10; i++) {
    //     if (i == 4) {
    //         break;
    //     }
    // cout << i << "\n";
    // }

    // cout << endl;

    // for (int i = 0; i < 10; i++) {
    //     if (i == 4) {
    //         continue;
    //     }
    // cout << i << "\n";
    // }

    int i = 0;
    while (i < 10) {
        cout << i << "\n";
        i++;
        if (i == 4) {
            break;
        }
    }

    cout << endl;

    int j = 0;
    while (j < 10) {
        if (j == 4) {
            j++;
            continue;
        }
        cout << j << "\n";
        j++;
    }

    return 0;
}