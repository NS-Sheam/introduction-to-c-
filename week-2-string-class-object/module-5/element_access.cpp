#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    cout << s[0] << endl; // Access first character
    cout << s.at(0) << endl; // Access first character using at()
    cout << s.back() << endl; // Access last character
    cout << s[s.size() - 1] << endl; // Access last character using size()
    cout << s.front() << endl; // Access first character using front()
    cout << s << endl; // Print the entire string
    string s2 = "Hi";
    // s+=s2;
    // s.append(s2); // Append s2 to s
    s.push_back('!'); // Add '!' to the end of s
    cout << s << endl; // Concatenate s2 to s
    return 0;
}