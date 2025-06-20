#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;

    int totalMarks() const {
        return math_marks + eng_marks;
    }
};

bool cmp(const Student &a, const Student &b) {
    if (a.totalMarks() != b.totalMarks())
        return a.totalMarks() > b.totalMarks(); 
    else
        return a.id < b.id; 
}

int main() {
    int N;
    cin >> N;

    vector<Student> students(N);

    for (int i = 0; i < N; ++i) {
        cin >> students[i].name >> students[i].cls >> students[i].section
            >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    // Sort students
    sort(students.begin(), students.end(), cmp);

    for (const Student &s : students) {
        cout << s.name << " " << s.cls << " " << s.section << " "
             << s.id << " " << s.math_marks << " " << s.eng_marks << endl;
    }

    return 0;
}