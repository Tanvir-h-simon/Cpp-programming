#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int numbers[N];
    for(int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    int maximum_number = numbers[0]; // Let A[0] is the maximum number
    for(int i = 0; i < N; i++) {
        maximum_number = max(maximum_number, numbers[i]);
    }
    cout << maximum_number << endl; 
    return 0;
}