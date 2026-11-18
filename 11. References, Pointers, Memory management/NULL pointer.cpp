#include <iostream>
using namespace std;

int main() {
    // int *ptr = nullptr;
    int *ptr = NULL;
    // cout << *ptr << endl; // Segmentation fault
    cout << ptr << endl;
    return 0;
}