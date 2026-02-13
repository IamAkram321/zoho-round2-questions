#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){ 
    int n=s.size();
    stack<char> st;
    char prevChar = ' ';
    for(int i=0;i<n;i++){
        char ch = s[i];
        if(ch=='('){
            st.push(ch);
        }else if(ch==')'){
            if(st.empty()){
                return false;
            }
            st.pop();
        }
        
        if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
            if(prevChar==' ' || prevChar=='('|| prevChar=='+'|| prevChar=='-'|| prevChar=='*'|| prevChar=='/'){
                return false;
            }
        }
        prevChar = ch;
    }
    return st.empty() && !(prevChar=='+'|| prevChar=='-'|| prevChar=='*'|| prevChar=='/');
}

int main(){
     string s1 = "(a+b)(a*b)";
     string s2 = "(ab)(ab+)";
     cout << s1 << " → " << (isValid(s1) ? "Valid" : "Invalid") << endl;

     cout << s2 << " → " << (isValid(s2) ? "Valid" : "Invalid") << endl;
}