#include <bits/stdc++.h>
using namespace std;

// int main() {
//     // int x = 10;
//     int *p = new int;
//     *p = 100;
//     cout << *p  << endl;
//     return 0;
// }

// int *p;

// void fun() {
//     int x = 10;
//     p = &x;
//     cout << "Fun " << *p << endl;
// }
// int main() {
//     fun();
//     cout << "Fun " << *p << endl; // Variable (static) deleted from stack memory, that's why value of x deleted.
//     return 0;
// }

int *p;

void fun() {
    int* x = new int;
    *x = 10;
    p = x;
    cout << "Fun " << *p << endl;
}
int main() {
    fun();
    cout << "Fun " << *p << endl; // Dynamic Variable stored in heap memory, that's why value of x = 10.
    return 0;
}