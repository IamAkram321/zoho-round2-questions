#include<bits/stdc++.h>
using namespace std;

vector<int> reverse(string s){
    int n = s.size();
    reverse(s.begin(),s.end());
    string ans = "";
    for(int i=0;i<n;i++){
        string word="";
        while(i<n && s[i]!=' '){
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.size()>0){
            if(ans.size()>0) ans += " ";
            ans += word;
        }
    }
    return ans;
}

int main(){
     string str = "the sky is blue";
     string ans = reverse(str);
     cout<<ans;
}

/**************************USING RECURSION**************************************************/

#include<bits/stdc++.h>
using namespace std;

string reverseWordsRec(string s){
    int n = s.size();
    int i=0;
    while(i<n && s[i]==' '){ //removing leading spaces
        i++;
    }
    s = s.substr(i);
    while(!s.empty() && s.back()==' '){ //removing trainling spaces
        s.pop_back();
    }
    if(s.size()==0) return ""; //base case
    int spacePos = s.find(' ');
    if(spacePos == string::npos) return s; //if there is only one word
    string first_word = s.substr(0,spacePos);
    string remaining = s.substr(spacePos+1);
    string rec_ans=reverseWordsRec(remaining);
    return rec_ans+" "+first_word;
}

int main(){
     string str = "the sky is blue";
     string ans = reverseWordsRec(str);
     cout<<ans;
}