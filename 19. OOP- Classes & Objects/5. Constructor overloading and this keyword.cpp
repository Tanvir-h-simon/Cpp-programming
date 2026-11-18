#include <iostream>
using namespace std;

class Car {
  public:
    string brand;
    string model;

    Car() { // Default Constructor
      brand = "Unknown";
      model = "Unknown";
    }

    // Car(string b, string m) { // Constructor with parameters
    //   brand = b;
    //   model = m;
    // }
    Car (string brand, string model) { // Constructor with parameters
      // (*this).brand = brand; // this is a special pointer that points to the current object
      // (*this).model = model;
      this->brand = brand; 
      this->model = model; 
    }
};

int main() {
  Car car1; 
  Car car2("BMW", "X5");
  Car car3("Ford", "Mustang");

  cout << "Car1: " << car1.brand << " " << car1.model << "\n";
  cout << "Car2: " << car2.brand << " " << car2.model << "\n";
  cout << "Car3: " << car3.brand << " " << car3.model;
  return 0;
}