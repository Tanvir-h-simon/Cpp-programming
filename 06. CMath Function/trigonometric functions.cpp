#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x = 45.0;
    cout << "sin(45 radians): " << sin(x) << endl;

    x = 0.5;
    cout << "asin(0.5) radians: " << asin(x) << endl;
    cout << "asin(0.5) in degrees: " << asin(x) * (180 / 3.14159) << endl;

    return 0;
}