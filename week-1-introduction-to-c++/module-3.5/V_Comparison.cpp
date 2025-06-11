#include<bits/stdc++.h>

using namespace std;
int main(){
    int left, right;
    char op;
    cin >> left >> op >> right;
    string result;
    if(op == '<'){
        result = (left < right) ? "Right" : "Wrong";      
    } else if(op == '>'){
        result = (left > right) ? "Right" : "Wrong";      
    } else if(op == '='){
        result = (left == right) ? "Right" : "Wrong";      
    } else {
        cout << "Invalid operator" << endl;
        return 1;
    }
    cout << result << endl;
    return 0;
}