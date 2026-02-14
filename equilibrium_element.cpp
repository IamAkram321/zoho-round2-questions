#include<bits/stdc++.h>
using namespace std;
//T.C: O(n) and S.C: O(1)
int findEquilibrium(vector<int>& arr){
    int n=arr.size();
    int leftSum=0, rightSum = 0, totalSum=0;
    for(int x : arr) totalSum+=x;
    for(int i=0;i<n;i++){
        rightSum = totalSum-leftSum-arr[i];
        if(leftSum == rightSum){
            return arr[i];
        }else{
            leftSum += arr[i];
        }
    }
    return -1;
}

int main(){
     vector<int> arr = {1,2,3,7,6};
     int result = findEquilibrium(arr);
     cout << result;
}