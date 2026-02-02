#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>& arr){
    int n = arr.size();
    if(n<2) return -1;
    int largest = arr[0];
    int sec_largest = INT_MIN;
    bool found = false;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            sec_largest = largest;
            largest = arr[i];
            found = true;
        }else if(arr[i]>sec_largest && arr[i] != largest){
            sec_largest = arr[i];
            found = true;
        }
    }
    return found?sec_largest:-1;
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int result = secondLargest(arr);
    cout << result;
    return 0;
}