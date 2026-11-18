#include <iostream>
using namespace std;

int main() {
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    int *arr = new int[size];

    int sum = 0;

    cout << "Enter the elements of the array: ";

    for (int i = 0; i < size; i++)  {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum = " << sum << endl;

    delete[] arr;

    return 0;
}