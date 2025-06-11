#include<iostream>
using namespace std;

int main(){
    int x = 6;
    int mod = x % 2;
    switch(mod){
        case 0:
            cout << "x is even" << endl;
            break;
        case 1:
            cout << "x is odd" << endl;
            break;
        default:
            cout << "Unexpected value" << endl;
            break;
    }
}