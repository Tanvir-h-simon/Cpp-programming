#include <bits/stdc++.h>
using namespace std;

int main() {
    int array_size;
    cin >> array_size;
    int arr[array_size];
    for (int i = 0; i < array_size; i++) {
        cin >> arr[i];
    }

    // Ascending order
    // sort(starting point, ending point + 1);
    sort(arr, arr + 5); // arr[0] => arr = starting point, ending point = arr + array_size
    
    for (int i = 0; i < array_size; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;

    // Descending order
    sort(arr, arr + 5, greater<int>()); // greater<data-type>()

    for (int i = 0; i < array_size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}