#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        string s;
        cin >> s;
        int count = 0;
        bool solved[26] = {false};
        for(char c : s) {
            if(solved[c - 'A']) {
                count++;
            } else {
                solved[c - 'A'] = true;
                count+=2;
            }
        }
        cout << count << endl;
    }
    return 0;
}