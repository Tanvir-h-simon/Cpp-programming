#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp; 
}

int main() {
    cout << "Enter two numbers: ";
    int num1, num2;
    cin >> num1 >> num2;

    swap(num1, num2);
    
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;

    return 0;
}