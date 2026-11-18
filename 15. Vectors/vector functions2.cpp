#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector <int> numbers = {3, 9, 5, 7, 1};
    for (int e : numbers) {
        cout << e << " ";
    }

    cout << "\n";

    sort(numbers.begin(), numbers.end());

    for (int e : numbers) {
        cout << e << " ";
    }

    return 0;
}