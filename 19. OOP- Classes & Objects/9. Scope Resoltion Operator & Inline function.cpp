#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    // Constructor using scope resolution (defined outside)
    Rectangle(int l, int b);

    // Copy Constructor (also using scope resolution)
    Rectangle(const Rectangle &r);

    // Inline setter functions
    void setLength(int l) {
        length = l;
    }

    void setBreadth(int b) {
        breadth = b;
    }

    // Inline getter functions
    int getLength() {
        return length;
    }

    int getBreadth() {
        return breadth;
    }

    // Function declarations
    int area();          // will use scope resolution
    int perimeter();     // will use scope resolution
    bool isSquare();     // will use scope resolution

    // Destructor using scope resolution
    ~Rectangle();
};

// Constructor definition using scope resolution operator
Rectangle::Rectangle(int l, int b) {
    length = l;
    breadth = b;
}

// Copy Constructor definition
Rectangle::Rectangle(const Rectangle &r) {
    length = r.length;
    breadth = r.breadth;
}

// Member function definitions using scope resolution
int Rectangle::area() {
    return length * breadth;
}

int Rectangle::perimeter() {
    return 2 * (length + breadth);
}

bool Rectangle::isSquare() {
    return length == breadth;
}

// Destructor definition
Rectangle::~Rectangle() {
    cout << "Destructor called for Rectangle with length = " << length << " and breadth = " << breadth << endl;
}

// Main function
int main() {
    Rectangle r1(10, 5); // Normal constructor
    Rectangle r2 = r1; // Copy constructor

    cout << "Length of r1: " << r1.getLength() << endl;
    cout << "Breadth of r1: " << r1.getBreadth() << endl;
    cout << "Area of r1: " << r1.area() << endl;
    cout << "Perimeter of r1: " << r1.perimeter() << endl;
    cout << "Is r1 a square? " << (r1.isSquare() ? "Yes" : "No") << endl;

    return 0;
}
