#include <bits/stdc++.h>
using namespace std;

int main() {
    // int size;
    // cin >> size;
    // int arr[size];

    // for (int i = 0; i < size; i++) {
    //     cin >> arr[i];
    // }

    // reverse(arr, arr + size);

    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] << " ";
    // }
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}