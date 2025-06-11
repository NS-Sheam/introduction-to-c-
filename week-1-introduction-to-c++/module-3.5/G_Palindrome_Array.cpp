
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bool isPalindrome = true;
    int left = 0, right = n - 1;
    while(left < right){
        if(arr[left] != arr[right]){
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    if(isPalindrome){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}