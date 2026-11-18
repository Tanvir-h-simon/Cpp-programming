#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cout << "Array 1 size: ";
    int size1;
    cin >> size1;
    int arr1[size1];
    cout << "Enter elements of Array 1: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Array 2 size: ";
    int size2;
    cin >> size2;
    int arr2[size2];
    cout << "Enter elements of Array 2: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    int mergedArr[size1 + size2];

    // Copy array 1 into merged array
    // for (int i = 0; i < size1; i++) {
    //     mergedArr[i] = arr1[i];
    // }
    // copy(arr1, arr1 + size1, mergedArr);

    // Copy array 2 into merged array
    // for (int i = 0; i < size2; i++) {
    //     mergedArr[size1 + i] = arr2[i];
    // }
    // copy(arr2, arr2 + size2, mergedArr + size1);

    merge(arr1, arr1 + size1, arr2, arr2 + size2, mergedArr);

    cout << "Merged Array: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << mergedArr[i] << " ";
    }

    return 0;
}