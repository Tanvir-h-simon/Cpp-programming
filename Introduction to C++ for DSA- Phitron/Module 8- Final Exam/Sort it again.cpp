#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int cls;
    char section;
    long long id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student &a, Student &b) {
    if (a.eng_marks != b.eng_marks)
        return a.eng_marks > b.eng_marks;  // Descending English marks
    else if (a.math_marks != b.math_marks)
        return a.math_marks > b.math_marks;  // Descending Math marks
    else
        return a.id < b.id;  // Ascending ID
}

int main() {
    int N;
    cin >> N;

    vector<Student> students(N);

    for (int i = 0; i < N; ++i) {
        cin >> students[i].name >> students[i].cls >> students[i].section
            >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    sort(students.begin(), students.end(), cmp);

    for (Student &s : students) {
        cout << s.name << " " << s.cls << " " << s.section << " "
             << s.id << " " << s.math_marks << " " << s.eng_marks << endl;
    }

    return 0;
}