#include <iostream>
using namespace std;

class Car {
  public:
    string brand;
    string model;

    Car (string brand, string model) { // Constructor with parameters
      this->brand = brand; 
      this->model = model; 
    }

    // Copy Constructor- Pass by reference 
    Car (Car &obj) {
        cout << "Custom copy constructor: " << endl;
        this->brand = obj.brand;
        this->model = obj.model;
    }
};

int main() {
    Car car1("BMW", "X5");
     // Car car2(car1); // Default Copy Constructor
    Car car2(car1); // Copy Constructor

    cout << "Car1: " << car1.brand << " " << car1.model << endl;
    cout << "Car2: " << car2.brand << " " << car2.model << endl;

    return 0;
}