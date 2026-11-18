#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int size) { // Time complexity: O(n^2)
    for (int i = 0; i < size - 1; i++) {
        bool isSwap = false; // To make the algorithm more efficient
        for (int j = 0; j < (size - 1) - i; j++) {
            if (arr[j] > arr[j + 1]) {  // Ascending order
                // // swap elements
                // int temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
            // if (arr[j] < arr[j + 1]) {  // Decending order
            //     // swap elements
            //     // int temp = arr[j + 1];
            //     // arr[j + 1] = arr[j];
            //     // arr[j] = temp;
            //     swap(arr[j + 1], arr[j]);
            // }
        }
        // If no two elements were swapped, the array is already sorted
        if (!isSwap) {
            break;
        }
    }
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    bubbleSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    // cout << "Sorted array (Ascending order): ";
    // for (int i = 0; i < size; i++)
    //     cout << arr[i] << " ";
    // cout << endl;

    // cout << "Sorted array (Decending order): ";
    // for (int i = size - 1; i >= 0; i--)
    //     cout << arr[i] << " ";
    // cout << endl;

    return 0;
}