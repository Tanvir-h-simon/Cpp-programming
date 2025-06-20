#include <iostream>
using namespace std;
int main() {
    int x = 10;
    if (x % 2 == 0) {
        cout << "Even\n";
    } else {
        cout << "Odd\n";
    }
    // Ternary operator: (condition) ? True Statement(s) : False Statement(s);
    (x % 2 == 0) ? cout << "Even" : cout << "Odd"; 
    return 0;
}