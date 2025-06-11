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
        int smallestPairSum = INT_MAX;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int currentSum = arr[i] + arr[j] + (j - i);
                smallestPairSum = min(smallestPairSum, currentSum);
            }
        }
        delete[] arr;
        cout << smallestPairSum << endl;
    }
    
    return 0;
}