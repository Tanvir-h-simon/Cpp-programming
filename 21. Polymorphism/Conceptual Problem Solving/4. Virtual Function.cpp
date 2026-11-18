#include <iostream>
using namespace std;

class Shape {
    public:
        virtual void area() {
            cout << "Calculating area of shape" << endl;
        }
};

class Circle: public Shape {
    public:
        void area() override {
            cout << "Area of Circle = M_PI * r^2" << endl;
        }
};

class Rectangle: public Shape {
    public:
        void area() override {
            cout << "Area of Rectangle = length * width" << endl;
        }
};

int main() {
    Shape *ptr; // Base class pointer

    Circle c;
    ptr = &c;
    ptr->area(); // Calls Circle::area()
    
    Rectangle r;
    ptr = &r;
    ptr->area(); // Calls Rectangle::area()
    

    return 0;
}