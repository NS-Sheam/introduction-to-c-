#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1, num2, num3;
    char op1, op2;
    cin >> num1 >> op1 >> num2 >> op2 >> num3;
    if(op1 == '+'){
        (num1 + num2 == num3) ? cout << "Yes" : cout << (num1 + num2) << endl;
    } else if(op1 == '-'){
        (num1 - num2 == num3) ? cout << "Yes" : cout << (num1 - num2) << endl;
    } else if(op1 == '*'){
        (num1 * num2 == num3) ? cout << "Yes" : cout << (num1 * num2) << endl;
    } else {
        cout << "Invalid operator" << endl;
    }
    return 0;
}