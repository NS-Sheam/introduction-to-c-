#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
        string name;
        int roll;
        int marks;
};

int main(){
    int n;
    cin >> n;
    Student a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    // int minMarks = INT_MAX;
    Student minStudent;
    minStudent.marks = INT_MAX;
    for(int i = 0; i < n; i++){
        if(a[i].marks < minStudent.marks){
            minStudent = a[i];
        }
    }
    cout << "Student with minimum marks: " << minStudent.name << " " << minStudent.roll << " " << minStudent.marks << endl;
    return 0;
}