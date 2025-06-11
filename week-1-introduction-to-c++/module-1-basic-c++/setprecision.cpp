#include<iostream>
#include<iomanip> // For std::setprecision
using namespace std;

int main(){
    double d = 3.14159265358979323846;
    cout << "Default precision: " << d << endl;
    cout << fixed << setprecision(2) << "Fixed precision (2): " << d << endl;
    cout << fixed << setprecision(5) << "Fixed precision (5): " << d << endl;
    cout << fixed << setprecision(10) << "Fixed precision (10): " << d << endl;
}