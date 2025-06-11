
#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
        int id;
        string name;
        char section;
        int total_marks;
};
int main(){
    int n;
    cin >> n;
    
    while (n--) {
        Student best;
        for (int i = 0; i < 3; i++) {
            Student s;
            cin >> s.id >> s.name >> s.section >> s.total_marks;
            
            if (i == 0 || 
                s.total_marks > best.total_marks || 
                (s.total_marks == best.total_marks && s.id < best.id)) {
                best = s;
            }
        }
        cout << best.id << " " << best.name << " " << best.section << " " << best.total_marks << endl;
    }
    
    return 0;
}