#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string name;
    int cls;
    char section;
    int id;
};

int main() {
    int N;
    cin >> N;

    vector<Student> students(N);

    // Read student data
    for (int i = 0; i < N; ++i) {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
    }

    // Reverse the sections
    for (int i = 0; i < N / 2; ++i) {
        swap(students[i].section, students[N - 1 - i].section);
    }

    // Print updated student data
    for (int i = 0; i < N; ++i) {
        cout << students[i].name << " "
             << students[i].cls << " "
             << students[i].section << " "
             << students[i].id << endl;
    }

    return 0;
}