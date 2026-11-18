#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cout << "Array 1 size: ";
    int size1;
    cin >> size1;

    vector<int> arr1(size1);
    cout << "Enter elements of Array 1: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Array 2 size: ";
    int size2;
    cin >> size2;

    vector<int> arr2(size2);
    cout << "Enter elements of Array 2: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    vector<int> mergedArr(size1 + size2);

    // For arrays: we passed pointers (arr1, arr1 + size1)
    // For vectors: we pass iterators (arr1.begin(), arr1.end())
    
    merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), mergedArr.begin());

    cout << "Merged Array: ";
    for (int val : mergedArr) {
        cout << val << " ";
    }

    return 0;
}
