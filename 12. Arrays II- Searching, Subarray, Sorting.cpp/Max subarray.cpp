#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

void maxSubarray(int arr[], int size) {
    int maxSum = INT_MIN;

    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            int currentSum = 0;
            for (int k = i; k <= j; k++) {
                currentSum += arr[k];
            }

            if (currentSum > maxSum) {
                maxSum = currentSum;
            }

            // maxSum = max(maxSum, currentSum);

            cout << currentSum << ", ";
        }
        cout << endl;
    }

    cout << "Maximum Subarray Sum = " << maxSum << endl;
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