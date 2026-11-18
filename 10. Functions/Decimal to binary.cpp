#include <iostream>
using namespace std;

void decToBin(int num) {
    int binNum = 0;
    int place = 1; // Represents the position (1, 10, 100, ... in binary form)

    while (num > 0) {
        int remainder = num % 2;
        binNum += remainder * place;
        num /= 2;
        place *= 10;
    }

    cout << binNum << endl;
}

int main() {
    int num;
    cin >> num; // Decimal number
    decToBin(num);
    return 0;
}