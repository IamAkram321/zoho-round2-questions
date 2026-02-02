#include<bits/stdc++.h>
using namespace std;
//T.C: O(n) and S.C: O(1)
bool isPalindrome(string s){
    int n = s.size();
    int i=0;
    int j=n-1;
    while(i<j){
      while(i<j && !isalnum(s[i])) i++;
      while(i<j && !isalnum(s[j])) j--;
      if(tolower(s[i++]) != tolower(s[j--])) return false;
    }
    return true;
}

int main(){
  string s;
  cin >> s;
  bool result = isPalindrome(s);
  if(result) cout << "It is palindrome"<<endl;
  else cout<<"It is not palindrome"<<endl;
  return 0;
}