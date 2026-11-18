// Named Structure -multiple or reusable struct objects
#include <iostream>
using namespace std;

// Define the structure
struct myStructure {
    int myNum;
    string myString;
};

int main() {
    // Declare a structure variable
    myStructure s1, s2;

    // Assign values to members
    s1.myNum = 10;
    s1.myString = "Hello World!";
    s2.myNum = 20;
    s2.myString = "Hello Everyone!";

    // Print members
    cout << s1.myNum << endl;
    cout << s1.myString << endl;
    cout << s2.myNum << endl;
    cout << s2.myString << endl;

    return 0;
}