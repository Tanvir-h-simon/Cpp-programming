#include <iostream>
using namespace std;

class Vehicle { // Base/Parent Class
    public: 
        string brand = "Ford";
        void honk() {
            cout << "Tuut, tuut! \n";
        }
};
 
// Derived/Child class
class Car: public Vehicle { //: -> inheritance colon
    public:
        string model = "Mustang";
};

int main() {
    Car c1; // Automatically called default constructor
    c1.honk();

    cout << "Brand: " + c1.brand + ", " + "Model: " + c1.model << endl;  

    return 0;
}