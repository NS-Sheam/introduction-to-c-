
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(getline(cin, s)) {
        string result;
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(s[i] != ' '){
                result += s[i];
            }
        }
        sort(result.begin(), result.end());
        cout << result << endl;
    }
    return 0;
}