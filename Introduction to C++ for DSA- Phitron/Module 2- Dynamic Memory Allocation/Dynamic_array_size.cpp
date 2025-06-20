#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int array_1[3];

//     for (int i = 0; i < 3; i++) {
//         cin >> array_1[i];
//     }

//     int array_2[5];

//     for (int i = 0; i < 3; i++) {
//         array_2[i] = array_1[i]; 
//     }
//     array_2[3] = 40;
//     array_2[4] = 50;

//     for (int i = 0; i < 5; i++) {
//         cout << array_2[i] << " ";
//     }
//     return 0;
// }

int main() {
    int* array_1 = new int[3];

    for (int i = 0; i < 3; i++) {
        cin >> array_1[i];
    }

    int* array_2 = new int[5];

    for (int i = 0; i < 3; i++) {
        array_2[i] = array_1[i]; 
    }

    delete[] array_1; // Can delete dynamic array from memory, but static array cann't be deleted

    array_2[3] = 40;
    array_2[4] = 50;

    for (int i = 0; i < 5; i++) {
        cout << array_2[i] << " ";
    }
    return 0;
}