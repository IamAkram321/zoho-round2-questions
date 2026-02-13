#include<bits/stdc++.h>
using namespace std;

int findFirstOccurence(string s1, string s2){
    int n=s1.size();
    int m=s2.size();
    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(s1[i+j]!=s2[j]){
                break;
            }
        }
        if(j==m) return i;
    }
    return -1;
}

int main(){
     string s1 = "test123string";
     string s2 = "123";
     cout<<findFirstOccurence(s1,s2)<<endl;
}