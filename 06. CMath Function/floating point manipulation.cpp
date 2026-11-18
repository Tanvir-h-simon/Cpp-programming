#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x = 12.8;
    int exponent;
    double mantissa = frexp(x, &exponent);
    cout << "x = " << x << " = " << mantissa << " * 2^" << exponent << endl;

    double m = 0.8;
    int n = 4;

    double result = ldexp(m, n);
    cout << m << " * 2^" << n << " = " << result << endl;

    return 0;
}