#include <iostream>
using namespace std;

enum Level {
  LOW = 1,
  MEDIUM, // 2
  HIGH // 3
};

int main() {
  enum Level myVar = MEDIUM;

  switch (myVar) {
    case 1:
      cout << "Low Level";
      break;
    case 2:
      cout << "Medium level";
      break;
    case 3:
      cout << "High level";
      break;
  }
  return 0;
}