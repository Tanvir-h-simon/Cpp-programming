#include <iostream>
using namespace std;

// void myFunction(string fname) { // Parameters/Arguments
//   cout << fname << " Refsnes\n";
// }

// int main() {
//   myFunction("Liam");
//   myFunction("Jenny");
//   myFunction("Anja");
//   return 0;
// }

// We can also use a default parameter value, by using the equals sign (=).
// void myFunction(string country = "Norway") { // Default parameters
//   cout << country << "\n";
// }

// int main() {
//   myFunction("Sweden");
//   myFunction("India");
//   myFunction();
//   myFunction("USA");
//   return 0;
// }

void myFunction(string fname, int age) { // Multiple parameters
  cout << fname << " Refsnes. " << age << " years old. \n";
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}