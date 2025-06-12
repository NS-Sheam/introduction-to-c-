#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "Hello, World!";
    cout << str.size() << endl; 
    cout << str.max_size() << endl;
    cout << str.capacity() << endl;
    cout << str.length() << endl;
    // str.clear();
    cout << str.empty() << endl; 
    str.resize(20, 'x'); 
    cout << str << endl;
    return 0;
}