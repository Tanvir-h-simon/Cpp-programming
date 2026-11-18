#include <iostream>
using namespace std;

bool binarySearch(int arr[], int size, int key) { // O(log n)
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key) {
            return true;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else if (arr[mid] > key) {
            right = mid - 1;
        }
    }
    return false;
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) 
        cin >> arr[i];

    int x;
    cin >> x;
    // binarySearch(arr, size, x);
    cout << (binarySearch(arr, size, x)? "Found" : "Not found");

    return 0;
}