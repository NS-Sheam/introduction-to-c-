#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
   string target = "EGYPT";
    string replacement = " ";
    int i = 0;
    string new_s = "";
    while (i<s.size()){
        if (s.substr(i, target.size()) == target) {
            new_s += replacement;
            i += target.size();
        } else {
            new_s += s[i];
            i++;
        }
    }
    cout << new_s;
    return 0;
}