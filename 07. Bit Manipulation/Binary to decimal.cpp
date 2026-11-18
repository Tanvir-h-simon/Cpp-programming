#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num; // Binary number

    int decNum = 0;
    int power = 0; // 2^0, 2^1, etc.

    while (num > 0) {
        int remainder = num % 10;
        decNum += remainder * pow(2, power);
        num /= 10;
        power++;
    }
    cout << decNum << endl;
    
    return 0;
}