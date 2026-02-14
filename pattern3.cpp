#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;

    for(int i = 1; i <= n; i++){

        // spaces
        for(int s = 1; s <= n - i; s++){
            cout << " ";
        }
        // ascending
        for(int j = i; j <= 2*i - 1; j++){
            cout << j;
        }
        // descending
        for(int j = 2*i - 2; j >= i; j--){
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
/*
    1
   232
  34543
 4567654
567898765

*/