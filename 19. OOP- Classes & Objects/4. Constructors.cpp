#include <iostream>
using namespace std;

// class Car { // The class
//     public: // Access specifier
//         Car() { // Constructor- A constructor is a special method that is automatically called when an object of a class is created.
//             cout << "Speed"; 
//         }
// };

// int main() {
//     Car obj; // Create an object of Car (this will call the constructor)
//     return 0;
// }

// class Car {      
//   public:        
//     string brand; 
//     string model; 
//     int year;      
//     Car(string x, string y, int z) { // Constructor with parameters
//       brand = x;
//       model = y;
//       year = z;
//     }
// };

// int main() {
//   // Create Car objects and call the constructor with different values
//   Car carObj1("BMW", "X5", 1999);
//   Car carObj2("Ford", "Mustang", 1969);

//   cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
//   cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
//   return 0;
// }

class Car {      
  public:         
    string brand;  
    string model;  
    int year;      
    Car(string x, string y, int z); // Constructor declaration
};

// Constructor definition using scope operator outside the class
Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}