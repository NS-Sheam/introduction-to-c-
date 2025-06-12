#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hello World";
    string s2 = "World";
    // s.assign(s2); // Assign s2 to s
    // s.erase(3, 2 ); // Erase first two characters
    // s.replace(6, 5, "Bangladesh"); // Replace "lo" with "Bangladesh"
    // s.replace(6, 0, "Bangladesh "); 
    s.insert(6, "Bangladesh "); // Insert "Bangladesh " at position 6
    cout << s << endl;
    return 0;
}