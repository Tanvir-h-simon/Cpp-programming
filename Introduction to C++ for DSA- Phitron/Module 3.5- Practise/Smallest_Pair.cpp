#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; // T = Test case
    cin >> T;

    while(T--) {
        int N; // N = Array Size
        cin >> N; 
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int min_sum = INT_MAX; // INT_MAX = Maximum number in integer

        // Try all i < j pairs
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                int sum = A[i] + A[j] + j - i;

                // if (sum < min_sum) {
                //     min_sum = sum;
                // }
                min_sum = min(min_sum, sum);
            }
        }
        cout << min_sum << endl;
    }
    return 0;
}