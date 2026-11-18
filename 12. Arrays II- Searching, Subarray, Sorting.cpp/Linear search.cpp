#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int key) {
    bool isFound = false; // Flag
    for (int i = 0; i < size; i++) { // Time complexity = O(n)
        if (arr[i] == key)
            isFound = true;
    }

    if (isFound) cout << "Found";
    else cout << "Not found";
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) 
        cin >> arr[i];

    int x;
    cin >> x;
    // cout << boolalpha << linearSearch(arr, size, x);
    linearSearch(arr, size, x);

    return 0;
}