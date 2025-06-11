#include<bits/stdc++.h>
using namespace std;
class Cricketer {
    public:
    int jersey_no;
    char country[20];
};
int main(){
    Cricketer* dhoni = new Cricketer();
    dhoni->jersey_no = 7;
    strcpy(dhoni->country, "India");
    Cricketer* kohli = new Cricketer();
    kohli = dhoni;
    cout << "Kohli's Jersey No: " << kohli->jersey_no << ", Country: " << kohli->country << endl;
    kohli->jersey_no = dhoni->jersey_no;
    strcpy(kohli->country, dhoni->country);
    cout << "Dhoni's Jersey No: " << dhoni->jersey_no << ", Country: " << dhoni->country << endl;
    cout << "Kohli's Jersey No: " << kohli->jersey_no << ", Country: " << kohli->country << endl;
    return 0;
}