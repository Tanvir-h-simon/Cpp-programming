#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    vector<int>::iterator it; // Declare iterator

    cout << *(v.begin() + 1) << endl;
    cout << *(v.begin() + 2) << endl;
    cout << *(v.end() - 1);

    return 0;
}