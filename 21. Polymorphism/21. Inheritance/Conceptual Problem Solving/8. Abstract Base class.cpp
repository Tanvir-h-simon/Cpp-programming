#include <iostream>
using namespace std;

class Shape {
    public:
    virtual float area() = 0; // Pure virtual function
    virtual ~Shape() { // Virtual destructor

    }
};

class Rectangle: public Shape {
    float length, width;
    public: 
        Rectangle(float length, float width) {
            this->length = length;
            this->width = width;
        }

        float area() override {
            return length * width;
        }
};

class Circle: public Shape {
    float radius;
    public:
        Circle(float radius) {
            this->radius = radius;
        }

        float area() override {
            return 3.14159 * radius * radius;
        }
};

int main() {
    Shape *shapes[2];  // Array of Shape pointers

    shapes[0] = new Rectangle(4, 5);
    shapes[1] = new Circle(3);

    for (int i = 0; i < 2; i++) {
        cout << "Area: " << shapes[i]->area() << endl;
    }

    
    // Cleanup
    delete shapes[0];
    delete shapes[1];

    return 0;
}