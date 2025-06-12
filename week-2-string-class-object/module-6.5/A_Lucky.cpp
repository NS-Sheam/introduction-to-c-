#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int sum_of_first_3 = s[0] - '0' + s[1] - '0' + s[2] - '0';
        int sum_of_last_3 = s[3] - '0' + s[4] - '0' + s[5] - '0';
        if (sum_of_first_3 == sum_of_last_3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}