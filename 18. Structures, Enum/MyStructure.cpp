//Anonymous Struct-  one-time use
#include <iostream>
#include <string>
using namespace std;

// Create a structure variable called myStructure
struct {
  int myNum;
  string myString;
} myStructure;

int main() {
    // Assign values
    myStructure.myNum = 10;
    myStructure.myString = "Hello World!";

    // Print members
    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";

    return 0;
}