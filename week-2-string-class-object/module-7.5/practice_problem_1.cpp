#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student a, Student b) {
    if(a.marks == b.marks) {
        return a.roll < b.roll;
    }
    return a.marks > b.marks;
}
int main(){
    int n;
    cin >> n;
    Student* student = new Student[n];
    for(int i = 0; i < n; i++){
        cin >> student[i].name >> student[i].roll >> student[i].marks;
    }
    // sort(student, student + n, cmp);
    reverse(student, student + n);
    for(int i = 0; i < n; i++){
        cout << student[i].name << " " << student[i].roll << " " << student[i].marks << endl;
    }
    return 0;
}