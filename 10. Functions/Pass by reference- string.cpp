#include <iostream>
using namespace std;

void modifyStr(string &str) { // Pass by reference
  str += " World!";
}

int main() {
  string greeting = "Hello";
  modifyStr(greeting);
  cout << greeting;
  return 0;
}