#include <iostream>
#include <string>
using namespace std;

struct student {
  string name;
  int age;
  char grade;
};

int main() {
  student s1;

  s1.name = "John";
  s1.age = 35;
  s1.grade = 'A';

  cout << "Name: " << s1.name << "\n";
  cout << "Age: " << s1.age << "\n";
  cout << "Grade: " << s1.grade << "\n";

  return 0;
}