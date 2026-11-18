#include <iostream>
using namespace std;

class Base1 {
    public: // If we don't specify any access modifier, by default it is declared as private
        void show() {
            cout << "Base class 1" << "\n";
        }
};

class Base2 {
    public:
        void show() {
            cout << "Base class 2" << "\n";
        }
};

class Derived: public Base1, public Base2 {
    // Body
};

int main() {
    Derived obj;
    obj.Base1::show(); // Calls show() from Base1
    obj.Base2::show(); // Calls show() from Base2

    return 0;
}