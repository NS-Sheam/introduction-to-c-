
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, target;
        cin >> n >> target;
        int* arr = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        bool found = false;
        for(int i = 0; i < n - 2; i++) {
            int left = i + 1, right = n - 1;
            while(left < right) {
                int sum = arr[i] + arr[left] + arr[right];
                if(sum == target) {
                    cout << "YES" << endl;
                    found = true;
                    break;
                } else if(sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
            if(found) break;
        }
        if(!found) {
            cout << "NO" << endl;
        }
        delete[] arr; 
        
    }
    return 0;
}