#include <iostream>
using namespace std;

int findLastOccurence(int arr[], int size, int index, int target) {
    if (index == size) {
        return -1;
    }

    int indexFound = findLastOccurence(arr, size, index + 1, target);

    // // If found later in recursion, return that index
    // if (restResult != -1) {
    //     return restResult;
    // }

    // // Otherwise, check current element
    // if (arr[index] == target) {
    //     return index;
    // }
    if (indexFound == -1 && arr[index] == target) {
        return index;
    }

    // Not found
    return -1;
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int result = findLastOccurence(arr, size, 0, target);

    if (result != -1)
        cout << "Last occurrence at index: " << result << endl;
    else
        cout << "Target not found." << endl;

    return 0;
}