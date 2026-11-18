#include <iostream>
using namespace std;

namespace MyNamespace {
    int x = 5;
}

int main() {
    cout << MyNamespace::x;   
    return 0;
}