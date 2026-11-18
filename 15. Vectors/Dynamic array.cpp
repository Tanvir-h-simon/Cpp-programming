#include <iostream>
using namespace std;

int main() {
    // int arr[10] = {1, 2, 3, 4, 5};
    int size;
    cin >> size;
    int *arr = new int[size];
    delete arr;
    return 0;
}