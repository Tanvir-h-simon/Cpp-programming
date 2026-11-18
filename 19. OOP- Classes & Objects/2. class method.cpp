#include <iostream>
using namespace std;

class Car {
  public: 
    int speed(int maxSpeed); // Method-fuunction declaration
    // void speed() { // Method-function defined inside the class
    //     cout << "Speed";
    // }
};

// Method-function definition outside the class
int Car::speed(int maxSpeed) { // The scope resolution :: operator followed by the name of the function
    return maxSpeed;
}

int main() {
    Car obj;
    // obj.speed(); // Call the method
    cout << obj.speed(200) << endl; // Call the method with an arguments 

    return 0;
}