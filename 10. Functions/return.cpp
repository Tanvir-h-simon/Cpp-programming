#include <iostream>
using namespace std;

// int myFunction(int x) {
//   return 5 + x;
// }

// int main() {
//   cout << myFunction(3);
//   return 0;
// }

// int myFunction(int x, int y) { // Multiple parameters
//   return x + y;
// }

// int main() {
//   cout << myFunction(5, 3);
//   return 0;
// }

int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int z = myFunction(5, 3); // Store the result
  cout << z;
  return 0;
}