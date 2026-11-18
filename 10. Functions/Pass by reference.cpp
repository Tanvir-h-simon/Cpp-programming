#include <iostream>
using namespace std;

void swapNums(int &x, int &y) { // Pass by reference
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << "\n";
    cout << "First Number: " << firstNum  << ", " << "Address: " <<  &firstNum << endl;  
    cout << "Second Number: " << secondNum << ", " << "Address: " <<  &secondNum << endl;  

    // Call the function, which will change the values of firstNum and secondNum
    swapNums(firstNum, secondNum);

    cout << "After swap: " << "\n";
    cout << "First Number: " << firstNum << ", " << "Address: " <<  &firstNum << endl;  
    cout << "Second Number: " << secondNum << ", " << "Address: " <<  &secondNum << endl;  

    return 0;
}