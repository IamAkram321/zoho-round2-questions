#include<bits/stdc++.h>
using namespace std;
//brute force : T.C: O(n*m)
string firtOccurenceRange(string s1, string s2){
    
    int n = s1.size();
    int m = s2.size();
    int smallestIndex = INT_MAX;
    int largestIndex  = INT_MIN;
    
    for(int i=0;i<m;i++){
        char ch = s2[i];
        bool found = false;
        for(int j=0;j<n;j++){
            if(ch == s1[j]){
                smallestIndex = min(smallestIndex,j);
                largestIndex = max(largestIndex,j);
                found = true;
                break;
            }
        }
        if(!found) return "-1";
    }
    string ans = s1.substr(smallestIndex,largestIndex-smallestIndex+1);
    return ans;
}

int main(){
     string s1 = "ZOHOCORPORATION";
     string s2 = "PORT";
     string ans = firtOccurenceRange(s1,s2);
     cout<<ans;
}

/*OPTIMAL SOLUTION T.C: O(n + m)*/

#include<bits/stdc++.h>
using namespace std;

string firstOccurenceRange(string s1, string s2){

    unordered_map<char,int> firstPos;
    for(int i=0;i<s1.size();i++){
        if(firstPos.find(s1[i]) == firstPos.end())
            firstPos[s1[i]] = i;
    }

    int smallest = INT_MAX;
    int largest  = INT_MIN;

    for(char ch : s2){

        if(firstPos.find(ch) == firstPos.end())
            return "-1";

        int idx = firstPos[ch];

        smallest = min(smallest, idx);
        largest  = max(largest, idx);
    }
    return s1.substr(smallest,largest - smallest + 1);
}
