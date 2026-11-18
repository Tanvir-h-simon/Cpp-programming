#include <iostream>
using namespace std;

// struct Car {
//   string brand;
//   int year;
// };

// void myFunction(Car c) {
//   cout << "Brand: " << c.brand << ", Year: " << c.year << "\n";
// }

// int main() {
//   Car myCar = {"Toyota", 2020};
//   myFunction(myCar);
//   return 0;
// }

struct Car {
  string brand;
  int year;
};

void updateYear(Car& c) {
  c.year++;
}

int main() {
  Car myCar = {"Toyota", 2020};
  updateYear(myCar);
  cout << "The " << myCar.brand << " is now from year " << myCar.year << ".\n";
  return 0;
}