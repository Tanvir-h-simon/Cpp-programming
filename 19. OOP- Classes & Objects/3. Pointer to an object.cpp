#include <iostream>
using namespace std;

class Rectangle {
    public:
        int length;
        int breadth;

        // Default constructor
        Rectangle() {

        }

        int area() {
            return length * breadth;
        }

        int perimeter() {
            return 2 * (length * breadth);
        }
};

int main() {
    // Static object- object created in stack memory
    // Rectangle r;
    // // r.length = 10;
    // // r.breadth = 5;
    // Rectangle *ptr;
    // ptr = &r;
    // ptr->length = 10;
    // ptr->breadth = 5;

    // cout << "Area: " << ptr->area() << endl;
    // cout << "Perimeter: " << ptr->perimeter() << endl;


    // Dynamic object- object created in heap memory
    Rectangle *ptr = new Rectangle();
    ptr->length = 10;
    ptr->breadth = 5;

    cout << "Area: " << ptr->area() << endl;
    cout << "Perimeter: " << ptr->perimeter() << endl;

    delete ptr;

    return 0;
}