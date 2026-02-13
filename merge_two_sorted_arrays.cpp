#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> arr1, vector<int> arr2){
    vector<int> ans;
    int n=arr1.size();
    int m=arr2.size();
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
          if(ans.empty()|| ans.back()!=arr1[i]){
              ans.push_back(arr1[i]);
          }
          i++;
        }else if(arr1[i]>arr2[j]){
            if(ans.empty()|| ans.back()!=arr2[j]){
              ans.push_back(arr2[j]);
            }
            j++;
        }else{
            if(ans.empty() || ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    while(i<n){
      if(ans.empty() || ans.back()!=arr1[i]){
          ans.push_back(arr1[i]);
      }
      i++;
    } 
    while(j<m){
      if(ans.empty() || ans.back()!=arr2[j]){
          ans.push_back(arr2[j]);
      }
      j++;
    } 
    return ans;
}

int main(){
     vector<int> arr1 = {2,4,5,6,7,9,13};
     vector<int> arr2 = {2,3,4,5,6,7,8,9,11,15};
     vector<int> ans = merge(arr1,arr2);
     for(int x : ans){
        cout << x << " ";
     }
}