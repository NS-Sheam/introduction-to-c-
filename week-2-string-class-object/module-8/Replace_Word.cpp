#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s, x;
        cin >> s >> x;
        string replacedStr;
        int i = 0;
        while (i < s.size()) {
            if (s.substr(i, x.size()) == x) {
                replacedStr += "#";
                i += x.size();
            } else {
                replacedStr += s[i];
                i++;
            }
        }
        cout << replacedStr << endl;
    }
    return 0;
}