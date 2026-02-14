#include <bits/stdc++.h>
using namespace std;
//Pascal's Triangle
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        //spaces
        for(int s=0;s<n-i-1;s++){
            cout<<" ";
        }
        int num = 1;
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num = num*(i-j)/(j+1);
            
        }
        cout<<endl;
    }
    return 0;
}
/*
    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1 


*/