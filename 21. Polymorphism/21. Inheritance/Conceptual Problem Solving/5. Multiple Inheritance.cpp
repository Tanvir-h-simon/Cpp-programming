#include <iostream>
using namespace std;

class Engine {
    public:
        float horsepower;

    Engine (float horsepower) {
        this->horsepower = horsepower;
    }    
};

class Body {
    public:
        string color;

    Body(string color) {
        this->color = color;
    }    
};

class Car: public Engine, public Body {
    public:
        string brand;
    
    Car(string brand, float horsepower, string color): Engine(horsepower), Body(color) {
        this->brand = brand;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Horsepower: " << horsepower << endl;
        cout << "Color: " << color << endl;
    }
};

int main() {
    Car car1("Toyota", 100, "Black");
    car1.display();
    
    return 0;
}