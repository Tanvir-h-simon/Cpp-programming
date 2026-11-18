#include <iostream>
using namespace std;

int factorial(int num) {
    if (num == 0) {
        return 1; // 0! = 1 // Base case
    }

    return num * factorial(num - 1); // n! = n * (n - 1)! -> Recurrence relation // Recursive function
}

int main() {
    int number;
    cin >> number;

    int result = factorial(number);
    cout << result;

    return 0;
}