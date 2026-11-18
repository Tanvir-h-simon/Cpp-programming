// #include <iostream>
// using namespace std;

// class Animal {
//   public:
//     void sound() {
//       cout << "Animal sound.\n";
//     }
// };

// class Dog : public Animal {
//   public:
//     void sound() {
//       cout << "Dog barks.\n";
//     }
// };

// int main() {
//   Animal *a;  // Declare a pointer to the base class (Animal)
//   Dog d;  // Create an object of the derived class (Dog)
//   a = &d;  // Point the base class pointer to the Dog object
//   a->sound(); // Output: Animal sound. // Call the sound() function using the pointer. Since sound() is not virtual, this calls Animal's version.
                // Without virtual, C++ decides which function to call based on the pointer type, not the actual object type.
//   return 0;
// }

#include <iostream>
using namespace std;

class Animal {
  public:
    virtual void sound() {
      cout << "Animal sound.\n";
    }
};

class Dog : public Animal {
  public:
    void sound() override { // Use override (optional, but recommended) in the derived class for clarity
      cout << "Dog barks.\n";
    }
};

int main() {
  Animal *a;
  Dog d;
  a = &d;
  a->sound(); // Output: Dog barks. // With virtual, it checks the actual object the pointer is pointing to.
  return 0;
}