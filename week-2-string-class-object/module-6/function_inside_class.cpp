#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name, int roll, int math, int english){
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void total(){
        cout << "Hello " << name << " your roll is " << roll << endl;
        cout << "Your total marks in Math and English is " << math + english << endl;
    }
};

int main(){
    Student sakib("Sakib", 1, 85, 90);
    sakib.total(); 
    Student tamim("Tamim", 2, 88, 92);
    tamim.total();
    return 0;
}