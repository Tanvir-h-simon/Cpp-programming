#include <bits/stdc++.h>
using namespace std;

void fun(int *p) {
    *p = 20;   // Dereference the pointer 'p' and assign 20 to that location
}

int main() {
    int val = 10;       // val = 10
    int *ptr = &val;    // ptr stores the address of val
    fun(ptr);           // Call fun(), passing the address of val
    cout << *ptr << endl; // Output the value pointed by ptr
    return 0;
}