#include<bits/stdc++.h>
using namespace std;

void printOutput(string s){
    int n = s.size();
    for(int i=0;i<n;i++){
        int left = i;
        int right = n-i-1;
        //for mirroring
        if(i>n/2){
            left = n-i-1;
            right = i;
        }
        //for spaces before left
        for(int j=0;j<left;j++){
            cout<<" ";
        }
        cout << s[left];
        //for spaced in middle of char
        if(left != right){
            int gap = right-left-1;
            for(int j=0;j<gap;j++){
                cout << " ";
            }
            cout << s[right];
        }
        cout << endl;
    }
}

int main(){
    string s1 = "12345";
    string s2 = "geeksforgeeks";
    cout<<"Output for "<<s1<<endl;
    printOutput(s1);
    cout<<"Output for"<<s2<<endl;
    printOutput(s2);
    return 0;
}