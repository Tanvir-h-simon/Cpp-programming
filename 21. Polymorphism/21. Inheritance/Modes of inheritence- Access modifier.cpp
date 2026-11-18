#include <iostream>
using namespace std;

class Base {
private:
    int privateVariable = 1; // Only accessible inside Base Class

protected:
    int protectedVariable = 2; // Accessible in Base and derived classes

public:
    int publicVariable = 3; // Accessible anywhere

    void showBase() {
        cout << "Base -> private variable: " << privateVariable << endl;
        cout << "Base -> protected variable: " << protectedVariable << endl;
        cout << "Base -> public variable: " << publicVariable << endl;

        cout << endl;
    }
};

class Derived : public Base {
public:
    void showDerived() {
        // cout << "Base -> private variable: " << privateVariable << endl;  // Error: privateVar is not accessible
        cout << "Derived -> protected variable: " << protectedVariable << endl; 
        cout << "Derived -> public variable: " << publicVariable << endl; 

        cout << endl;
    }
};

int main() {
    Derived d;
    d.showDerived();

    // d.protectedVar = 10; // protectedVar not accessible from outside
    // d.privateVar = 10; // privateVar not accessible at all
    d.publicVariable = 100;

    d.showDerived();

    return 0;
}