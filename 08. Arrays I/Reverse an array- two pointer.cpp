#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    // Two-pointer approach
    int left = 0;
    int right = size - 1;

    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}