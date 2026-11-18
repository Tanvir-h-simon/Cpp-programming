#include <iostream>
using namespace std;

int main() {
    try {  // try block: code that might cause an exception
        cout << "Enter your age: "; 
        int age;
        cin >> age;
        if (age >= 18) {
            cout << "Access granted - you are old enough.";
        } else {
            throw (age); // throw the value as an exception
        }
    } catch (int num) { // catch block: handles the exception and runs this code when an error is thrown
                        // catch (int age)  // same thing, different name: it’s common style to use a different name (myNum) to show that it’s a copy, not the same variable.
    // } catch (...) { // If you do not know the throw type used in the try block, you can use the "three dots" syntax (...) inside the catch block, which will handle any type of exception.

        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Age is: " << num;
    }

    return 0;
}