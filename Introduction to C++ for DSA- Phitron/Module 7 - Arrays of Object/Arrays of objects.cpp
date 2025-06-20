#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        int marks;
};

int main() {
    cout << "Enter the number of student(s): ";
    int number;
    cin >> number;

    // Student arr[number];
    vector<Student> arr(number);

    for (int i = 0; i < number; i++) {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    for (int i = 0; i < number; i++) {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }
    return 0;
}