#include <iostream>
using namespace std;

int findLastOccurence(int arr[], int size, int index, int target) {
    if (index == size) {
        return -1;
    }

    if (arr[index] == target) {
        return index;
    }

    return findLastOccurence(arr, size, index + 1, target);
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
        cout << "First occurrence at index: " << result << endl;
    else
        cout << "Target not found." << endl;

    return 0;
}