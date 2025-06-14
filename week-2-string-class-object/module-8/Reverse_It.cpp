#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
        string nm;
        int cls;
        char s;
        string id;
};

bool cmp(Student a, Student b){
    return a.s < b.s;
}

int main(){
    int n;
    cin >> n;
    Student students[n];
    for(int i = 0; i < n; i++){
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id;
    }

    for(int i = 0; i < n/2; i++){
        swap(students[i].s, students[n - 1 - i].s);
    }

    for(int i = 0; i < n; i++){
            cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " "<< students[i].id << endl;
    }
    return 0;
}