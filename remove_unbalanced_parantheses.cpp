#include<bits/stdc++.h>
using namespace std;

string balancedParantheses(string s){ 
    int n=s.size();
    string temp = "";
    int open = 0;
    //remove extra )
    for(char ch : s){
        if(ch=='('){
            open++;
            temp+=ch;
        }else if(ch==')'){
            if(open>0){
                open--;
                temp+=ch;
            }
        }else{
            temp+=ch;
        }
    }
    string result = "";
    int close=0;
    //remove extra (
    for(int i=temp.size()-1;i>=0;i--){
        char ch = s[i];
        if(ch==')'){
            close++;
            result+=ch;
        }else if(ch=='('){
            if(close>0){
                close--;
                result+=ch;
            }
        }else{
            result+=ch;
        }
    }
    reverse(result.begin(),result.end());
    return result;
}

int main(){
     string s1 = "((abc)((de))";
     string s2 = "(((ab)";
     cout<<balancedParantheses(s1)<<endl;
     cout<<balancedParantheses(s2)<<endl;
     
}