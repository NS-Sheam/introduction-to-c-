#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    cout << ss.str() << endl; // Print the entire string
    string word;
    // ss >>word;
    // cout << word << endl; 
    // ss >> word;
    // cout << word << endl;
    while(ss >> word){ 
        cout << word << endl; 
    }
    return 0;
}