#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // bool flag = true;

    // for (int i = 0; i < N; i++) {
    //     if (A[i] != A[N - 1 - i]) {
    //         flag = false;
    //         break;
    //     }
    // }

    int left = 0, right = N - 1;
    bool flag = true;

    while (left < right) {
        if (A[left] != A[right]) {
            flag = false;
            break;
        }
        left++;
        right--;
    }

    if(flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}