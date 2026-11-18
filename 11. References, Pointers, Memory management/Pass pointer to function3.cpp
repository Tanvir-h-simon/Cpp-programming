#include <bits/stdc++.h>
using namespace std;
void fun(int *&p){ // reference to pointer
    p = NULL;  // This will affect 'ptr' in main
}

int main() {
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout << ptr << endl;
    return 0;
}