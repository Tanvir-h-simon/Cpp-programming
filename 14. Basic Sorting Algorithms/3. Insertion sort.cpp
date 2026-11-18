#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) { // Time complexity: O(n^2)
    for (int i = 1; i < size; i++) {
        int current = arr[i];
        int prev = i - 1;

        // Shift elements greater than current one position to the right
        while (prev >= 0 && arr[prev] > current) {        
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = current; // Insert current in correct position
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

    insertionSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}