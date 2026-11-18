#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T; // Test 
    
    while (T--) {
        int N;
        cin >> N; // Size

        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];   

        // Sort in Ascending order
        sort(A.begin(), A.end());
        // unique() keeps first of each consecutive duplicate, shifts others to back, returns new end position
        // auto it = unique(A.begin(), A.end());
        // A.erase(it, A.end()); // Actually deletes the unwanted elements and resizes vector
        A.erase(unique(A.begin(), A.end()), A.end()); 

        // unique() = logical removal (rearranges, doesn't change size)
        // erase() = physical removal (actually deletes, changes size)

        // for (int i = 0; i < N; i++) // Wrong size
        for (int i = 0; i < A.size(); i++) // Wrong size
            cout << A[i] << " ";

        cout << endl;

    }

    return 0;
}