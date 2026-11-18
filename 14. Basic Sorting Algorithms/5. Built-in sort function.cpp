#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    sort(arr, arr + size); // sort(starting iterators, ending iterators);

    cout << "Sorted array (Ascending): ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    sort(arr, arr + size, greater<int>()); // sort(starting iterators, ending iterators, greater<int>());

    cout << "Sorted array (Decending): ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    // sort(arr + 1, arr + 5);

    // cout << "Sorted array in a range (Ascending): ";
    // for (int i = 0; i < size; i++)
    //     cout << arr[i] << " ";
    // cout << endl;

    return 0;
}