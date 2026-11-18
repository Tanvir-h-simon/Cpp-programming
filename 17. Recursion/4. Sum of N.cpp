#include <iostream>
using namespace std;

int calcSum(int n) {
    if (n == 1) {
        return 1;
    }
    return n + calcSum(n - 1);
}

int main() {
    int n;
    cin >> n;

    int result = calcSum(n);

    cout << result << endl;

    return 0;
}