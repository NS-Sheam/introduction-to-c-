#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int* arr = new int[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int evenCount = 0, oddCount = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] % 2 == 0) evenCount++;
            else oddCount++;
        }
        if(evenCount==oddCount){
            cout<<"0"<<endl;
        }
        else{
          int diff = abs(evenCount - oddCount);
            if(diff % 2 == 0){
                cout << diff / 2 << endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }


    }
    return 0;
}