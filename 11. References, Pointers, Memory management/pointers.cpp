#include <iostream>
using namespace std;

int main() {
    // A pointer is a variable that stores the memory address as its value.

    string food = "Pizza";  // A food variable of type string
    // string* mystring; // Preferred
    // string *mystring;
    // string * mystring;
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    return 0;
}