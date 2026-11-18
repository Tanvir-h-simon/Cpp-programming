#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num; // Decimal number

    int binNum = 0;
    int place = 1; // Represents the position (1, 10, 100, ... in binary form)

    while (num > 0) {
        int remainder = num % 2;
        binNum += remainder * place;
        num /= 2;
        place *= 10;
    }

    cout << binNum << endl;
    
    return 0;
}