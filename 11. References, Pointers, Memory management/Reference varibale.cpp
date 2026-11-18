#include <iostream>
using namespace std;

int main() {
    // A reference variable is an alias for an existing variable. It is created using the & operator.
    string food = "Pizza";
    string &meal = food; // Reference to food - The & operator was used to create a reference variable.

    // Both food and meal refer to the same memory location. Changing one affects the other.
    cout << &food << endl;
    cout << &meal << endl;

    cout << food << "\n";  // Outputs Pizza
    cout << meal << "\n";  // Outputs Pizza

    return 0;
}