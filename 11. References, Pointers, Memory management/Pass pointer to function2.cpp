#include <bits/stdc++.h>
using namespace std;

void fun(int *p){
    p = NULL; // Makes the local pointer 'p' point to nothing
}
int main(){
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout << *ptr << endl;

    return 0;
}