#include <bits/stdc++.h>
using namespace std;

class Student {
    public: 
        int id;
        string name;
        char section;
        int totalMarks;

};

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        Student students[3];
        
        // Read information for 3 students
        for (int i = 0; i < 3; i++) {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].totalMarks;
        }
        
        // Find the student with highest marks
        Student topStudent = students[0];
        
        for (int i = 1; i < 3; i++) {
            if (students[i].totalMarks > topStudent.totalMarks || 
                (students[i].totalMarks == topStudent.totalMarks && students[i].id < topStudent.id)) {
                topStudent = students[i];
            }
        }
        
        cout << topStudent.id << " " << topStudent.name << " " << topStudent.section << " " << topStudent.totalMarks << endl;
    }
    
    return 0;
}