#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

void maxSubarray(int arr[], int size) {
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < size; i++) { // O(n)
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);
        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    cout << "Maximum subarray sum = " << maxSum << endl;
}

int main() {
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    maxSubarray(arr, size);

    return 0;
}