#include<bits/stdc++.h>
using namespace std;

string expandString(string s){
    int n = s.size();
    string result="";
    for(int i=0;i<n;i++){
        char ch = s[i];
        string num = "";
        while(i+1<n && isdigit(s[i+1])){
            num += s[i+1];
            i++;
        }
        int count = stoi(num);
        result.append(count,ch);
    }
    return result;
}

int main(){
    string s1 = "a4b10";
    string s2 = "b3c6d15";
    cout<<"Output 1: " << expandString(s1)<<endl;
    cout<<"Output 2: " << expandString(s2)<<endl;
    return 0;
}