#include <iostream>
using namespace std;

int fibonacci(int n) {
    // if (n == 0) return 0; 
    // if (n == 1) return 1; 
    if (n == 0 || n == 1) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n; // n-th(0 based) number in fibonacci series
    cin  >> n;

    int result = fibonacci(n);
    cout << result << endl;

    return 0;
}