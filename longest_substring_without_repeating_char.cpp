#include<bits/stdc++.h>
using namespace std;

int longest(string s){
    int n = s.size();
    int start = 0, end = 0, maxLen = 0;
    vector<int> freq(256,0);
    while(end < n){
        freq[s[end]]++;
        while(freq[s[end]] > 1){
            freq[s[start]]--;
            start++;
        }
        maxLen = max(maxLen,end-start+1);
        end++;
    }
    return maxLen;
}

int main(){
  
    int n;
    cin >> n;
    
    string s;
    cin>>s;
    
    int result = longest(s);
    cout << result << endl;
  
}