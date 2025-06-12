#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int freq[26] = {0};
    for (char c : s){
        c = tolower(c);
        freq[c - 'a']++;
    }
    int min_freq = freq['e' - 'a'];
    min_freq = min(min_freq, freq['g' - 'a']);
    min_freq = min(min_freq, freq['y' - 'a']);
    min_freq = min(min_freq, freq['p' - 'a']);
    min_freq = min(min_freq, freq['t' - 'a']);
    // cout << freq['e' - 'a'] << " " 
    //      << freq['g' - 'a'] << " " 
    //      << freq['y' - 'a'] << " " 
    //      << freq['p' - 'a'] << " " 
    //      << freq['t' - 'a'] << endl;
   
    cout << min_freq << endl;
    return 0;
}