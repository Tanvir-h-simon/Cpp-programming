#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x = -10;
    cout << abs(x) << endl; // Absolue value
    
    x = -10.45;
    cout << fabs(x) << endl; // Absolute value for floating point number

    x = 57;
    int y = 5;
    // cout <<  x % y << endl;
    cout << remainder(x, y) << endl; // IEEE remainder
    
    x = 57.3;
    y = 4.5;
    cout << fmod(x, y) << endl; // Floating point remainder

    int quotient;
    cout << remquo(x, y, &quotient) << endl;

    return 0;
}