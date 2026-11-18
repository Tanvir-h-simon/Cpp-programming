#include <iostream>
using namespace std;

// int main() {
//   auto message = []() {
//     cout << "Hello World!\n";
//   };

//   message();
//   return 0;
// }

int main() {
  auto add = [](int a, int b) {
    return a + b;
  };

  cout << add(3, 4);
  return 0;
}