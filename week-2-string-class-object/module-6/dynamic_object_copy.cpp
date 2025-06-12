#include<bits/stdc++.h>
using namespace std;

class Cricketer {
    public:
    string country;
    int jersey;

    Cricketer(string country, int jersey) {
        this->country = country;
        this->jersey = jersey;
    }
};


int main(){
    Cricketer* dhoni = new Cricketer("India", 10);
    cout << "Country: " << dhoni->country << ", Jersey: " << dhoni->jersey << endl;
    Cricketer* kohli = new Cricketer("India", 18);
    // kohli = dhoni;
    // *kohli = *dhoni;
    kohli->country = dhoni->country;
    kohli->jersey = dhoni->jersey;
    delete dhoni;
    cout << "Country: " << kohli->country << ", Jersey: " << kohli->jersey << endl;
    return 0;
}