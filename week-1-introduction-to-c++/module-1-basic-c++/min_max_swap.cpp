#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    cout << min(a, b) << " " << max(a, b) << endl;
    cout << min({a, b, 10, 20, 2}) << " " << max({a, b, 10, 20, 2}) << endl;

    cout << "Before swap: " << a << " " << b << endl;
    swap(a, b);
    cout << a << " " << b << endl;
    
}