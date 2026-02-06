#include<bits/stdc++.h>
using namespace std;
//T.C:O(n) and S.C: O(n)
string longest(string s){
    int n = s.size();
    string ans = "";
    
    for(int i=0;i<n;){
        char curr = s[i];
        int count = 0;
        while(i<n && curr == s[i]){
            count++;
            i++;
        }
        ans += curr;
        ans+= to_string(count);
    }
    return ans;
}

int main(){
  
    int n;
    cin >> n;
    
    string s;
    cin>>s;
    
    string result = longest(s);
    cout << result << endl;
  
}