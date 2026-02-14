#include <bits/stdc++.h>
using namespace std;

int replace0With5(int n){
    int result=0, place=1;
    while(n){
        int digit = n%10;
        if(digit==0){
            digit=5;
        }
        result += digit*place;
        place*=10;
        n/=10;
    }
    return result;
}

int main(){

  int n=1002;
  int result = replace0With5(n);
  cout<<result;
}
