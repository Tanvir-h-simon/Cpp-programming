#include <iostream>
using namespace std;

class Base {
    public:
        void func1() {
            cout << "Function of base class." << endl;
        }
};

class Derived: public Base {
    public:
        void func2() {
            cout << "Function of derived class." << endl;
        }
}; 

int main() {
    Derived d;
    // d.func1();
    // d.func2();
    Base *ptr = &d;
    ptr->func1();
    // ptr->func2(); // Error

    // Base b;
    // Derived *ptr = &b; // Error
    
    return 0;
}