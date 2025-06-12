#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hello";
    // for(int i = 0; i < s.size(); i++){
    //     cout << s[i] << endl; 
    // }
    // cout << *s.begin() << endl; // Access first character using iterator
    // cout << *(s.end() - 1) << endl; // Access last character using iterator
    // for(string:: iterator it = s.begin(); it < s.end(); it++){
    //     cout << *it << endl; // Iterate through the string using iterator
    // }
    for(auto it = s.begin(); it < s.end(); it++){
        cout << *it << endl; // Iterate through the string using iterator
    }
    return 0;
}