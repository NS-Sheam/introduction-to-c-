#include<iostream>
using namespace std;
int main(){

    int x;
    char c;
    double d;
    cin >> x >> c >> d;
    cout << "You entered: " << x << " " << c << endl << d << endl;
    int ascii = c;
    cout << "ASCII value of '" << c << "' is: " << ascii << endl;
    cout << int(c) << endl;
    int y = 65;
    cout << "Character for ASCII value " << y << " is: " << char(y) << endl;
    return 0;
}