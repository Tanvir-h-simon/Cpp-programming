#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int min_number = min({A, B, C});
    int max_number = max({A, B, C});

    cout << min_number << " " << max_number << endl;

    return 0;
}