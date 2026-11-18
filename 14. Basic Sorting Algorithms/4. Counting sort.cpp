#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

void countingSort(int arr[], int size) { // Time complexity: O(n + k)
    int minValue = INT_MAX, maxValue = INT_MIN;
    for (int i = 0; i < size; i++) {
        minValue = min(minValue, arr[i]);
        maxValue = max(maxValue, arr[i]);
    }
    int range = (maxValue - minValue) + 1;
    int freqArr[range] = {0}; // Initialize frequency array to 0

    // Count frequency of each element
    // for (int i = 0; i < size; i++) {
    //     freqArr[arr[i]]++;
    // }
    
    for (int i = 0; i < size; i++) {
        freqArr[arr[i] - minValue]++; // Pretend the smallest number is 0 (If minimum value is negative, make the smallest number is zero)
    }

    // Refill original array in sorted order
    int index = 0;
    for (int i = 0; i < range; i++) {
        while (freqArr[i] > 0) {
            arr[index++] = i + minValue;
            freqArr[i]--;
        }
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

    countingSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
