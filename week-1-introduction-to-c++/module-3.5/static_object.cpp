#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    int name;
    int roll;
    int section;
    int math_marks;
    int cls;
    Student(int name, int roll, int section, int math_marks, int cls) {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};
int main() {
    Student s1(1, 101, 1, 85, 10);
    Student s2(2, 102, 1, 90, 10);
    Student s3(3, 103, 1, 78, 10);
    cout << "Highest Marks: " << max(s1.math_marks, max(s2.math_marks, s3.math_marks)) << endl;
    cout << "Lowest Marks: " << min(s1.math_marks, min(s2.math_marks, s3.math_marks)) << endl;
}