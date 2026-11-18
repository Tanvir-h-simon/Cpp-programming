#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int number;
    cin >> number;
    int reversedNumber = 0;
    while (number) {
        // Get last number and add it to the reversedNumber
        reversedNumber = (reversedNumber * 10) + number % 10;
        // Remove the last number 
        number /= 10;
    }
    cout << "Reversed number: " << reversedNumber << "\n";
    
    return 0;
}