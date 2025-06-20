#include <bits/stdc++.h>
using namespace std;

// void sort_it(int array_size, int A[]) {
//     for (int i = 0; i < array_size; i++) {
//         cin >> A[i];
//     }
//     sort(A, A + array_size, greater<int>());
// }

// int main() {
//     int N;
//     cin >> N;
//     int A[N];

//     sort_it(N, A);

//     for (int i = 0; i < N; i++) {
//         cout << A[i] << " ";
//     }

//     return 0;
// }

int* sort_it(int array_size) {
    int* array = new int[array_size];

    for (int i = 0; i < array_size; i++) {
        cin >> array[i];
    }

    sort(array, array + array_size, greater<int>());

    return array;
}

int main() {
    int N;
    cin >> N;
    
    int* sorted_array = sort_it(N);

    for (int i = 0; i < N; i++) {
        cout << sorted_array[i] << " "; 
    }

    delete[] sorted_array; // Need to free dynamically allocated memory

    return 0;
}