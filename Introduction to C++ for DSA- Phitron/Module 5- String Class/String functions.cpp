#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello World";
    int size = s.size(); // String is class in Cpp, that's why object.function()
    cout << size << endl;
    s.resize(15, 'x');
    cout << s << endl;
    return 0;
}