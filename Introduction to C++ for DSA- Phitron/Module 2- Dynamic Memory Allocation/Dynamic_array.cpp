#include <bits/stdc++.h>
using namespace std;

// int main() {
//     // int array[5]; // Static array

//     int* array = new int[5]; // Dynamic array

//     for (int i = 0; i < 5; i++) {
//         cin >> array[i];
//     } 

//     for (int i = 0; i < 5; i++) {
//         cout << array[i] << " ";
//     }
    
//     return 0;
// }

// int* fun() {
//     int array[5]; // Static array

//     for (int i = 0; i < 5; i++) {
//         cin >> array[i];
//     }

//     return array;
// }

// int main() {
//     int* x = fun();

//         for (int i = 0; i < 5; i++) {
//         cout << x[i] << endl; // Static array deleted from stack memory.
//     }
//     return 0;
// }

int* fun() {
    int* array = new int[5]; // Dynamic array

    for (int i = 0; i < 5; i++) {
        cin >> array[i];
    }

    return array;
}

int main() {
    int* x = fun();

    for (int i = 0; i < 5; i++) {
        cout << x[i] << " "; // Dynamic array stored in heap memory.
    }
    delete[] x;
    return 0;
}