#include<bits/stdc++.h>
using namespace std;
int* p;
void fun(){
    // int x = 10;
    int* x = new int;
    *x = 20;
    p = x;
    cout << "Value of x: " << *p << endl;
    return; 
}


int main(){
    // int *p = new int;
    // *p = 10;
    fun();
    cout << "Value of p: " << *p << endl;
    return 0;
}