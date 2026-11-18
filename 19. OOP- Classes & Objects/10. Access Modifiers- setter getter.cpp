#include <iostream>
using namespace std;

class MyClass {
    private:   // Private access specifier
        int x;   // Private attribute
    public:    // Public access specifier
        int y;   // Public attribute

        void setx(int a) { // Setter- To set a private values
            x = a; 
        }

        int getx() { // Getter- To get a private values
            return x;
        }
};

int main() {
    MyClass obj;
    // obj.x = 25;  // Not Allowed (private)
    obj.setx(25); // Use setter method to set(initialize/declare) a value.
    obj.y = 50;  // Not allowed (public)

    // cout << "x: " << x << endl; // Not allowed(private)
    cout << "x: " << obj.getx() << endl; // Use getter method to get(return) a value 
    cout << "y: " << obj.y << endl;

    return 0;
}