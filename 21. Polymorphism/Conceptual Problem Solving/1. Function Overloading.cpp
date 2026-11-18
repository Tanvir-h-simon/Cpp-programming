#include <iostream>
using namespace std;

class Math {
    public:
        void multiply(int x, int y) {
            cout << "Answer = " << x * y << endl;
        }

        void multiply(double x, double y) {
            cout << "Answer = " << x * y << endl;
        }

        void multiply (int x, double y) {
            cout << "Answer = " << x * y << endl;
        }
};

int main() {
    // Function Overloading is compile-time polymorphism. Always happens within the same class. Functions share the same name but have different parameter lists.
    Math m1;
    m1.multiply(5, 4);
    m1.multiply(5.5, 6.7);
    m1.multiply(5, 6.5);

    return 0;
}