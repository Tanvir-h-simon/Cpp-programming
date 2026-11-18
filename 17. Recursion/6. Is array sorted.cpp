#include <iostream>
using namespace std;

bool isSorted(int arr[], int size, int index) {
    if (index == size - 1) {
        return true; // Base case: reached end
    }

    if (arr[index] > arr[index + 1]) {
        return false;
    }

    return isSorted(arr, size, index + 1); // Move to next pair
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    bool result = isSorted(arr, size, 0);

    cout << (result ? "Sorted" : "Not Sorted") << endl;

    return 0;
}