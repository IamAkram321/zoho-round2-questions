#include <bits/stdc++.h>
using namespace std;

//counting factors here
int factorCount(int n){
    int count = 0;

    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            count++;          // i
            if(i != n/i){
                count++;  // n/i
            }
        }
    }
    return count;
}

int main(){
    vector<int> arr = {8,2,3,12,16};

    vector<pair<int,int>> vec;
    for(int x : arr){
        vec.push_back({x, factorCount(x)});
    }

    // Sorting by factor count in decreasing manner
    sort(vec.begin(), vec.end(),
        [](pair<int,int> a, pair<int,int> b){
            if(a.second == b.second){
                return a.first < b.first;
            }
            return a.second > b.second;
        });
    vector<int> ans;
    for(auto p : vec){
        ans.push_back(p.first);
    }

    for(int x : ans){
        cout << x << " ";
    }
}
