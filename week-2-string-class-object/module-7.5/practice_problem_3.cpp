#include<bits/stdc++.h>
using namespace std;
int main(){
    string sentence;
    getline(cin, sentence);
    string target;
    cin >> target;
    string word;
    stringstream ss(sentence);

    int count = 0;
    while(ss >> word){
        if(word == target){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}