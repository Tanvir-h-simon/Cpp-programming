#include <iostream>
// #include <algorithm>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int copyArr[size]; // Reverse copy array

    // reverse(arr, arr + n); // Built-in reverse function

    // Copy in reverse order
    for (int i = 0; i < size; i++) {
        int j = size - i - 1;
        copyArr[i] = arr[j];
    }

    // Print reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++)
        cout << copyArr[i] << " ";
    cout << endl;

    return 0;
}