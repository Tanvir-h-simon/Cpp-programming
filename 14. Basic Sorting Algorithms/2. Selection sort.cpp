#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int size) { // Time complexity: O(n^2)
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) { // Ascending order
                minIndex = j;
            }
            // if (arr[j] > arr[minIndex]) { // Decending order
            //     minIndex = j;
            // }
        }
        swap(arr[i], arr[minIndex]);
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

    selectionSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}