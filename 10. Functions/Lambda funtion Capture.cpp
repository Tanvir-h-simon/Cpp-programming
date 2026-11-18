#include <iostream>
using namespace std;

// int main() {
//   int x = 10;
//   auto show = [x]() {
//     cout << x;
//   };

//   show();
//   return 0;
// }

int main() {
  int x = 10;

  auto show = [&x]() {
    cout << x;
  };

  x = 20;  // Change x after the lambda is created

  show();
  return 0;
}