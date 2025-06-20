#include <iostream>
#include <iomanip> // Input output manipulation
using namespace std;
int main() {
    double s = 3.14159;
    cout << s << endl;
    cout << fixed << setprecision(2) << s << endl;
    return 0;
}