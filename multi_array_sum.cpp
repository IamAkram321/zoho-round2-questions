#include <bits/stdc++.h>
using namespace std;

long long arrayToNumber(vector<int> arr){
    long long num = 0;
    for(int digit : arr){
        num = num * 10 + digit;
    }
    return num;
}

int main(){

    int n;
    cout << "Enter number of arrays: ";
    cin >> n;

    long long totalSum = 0;

    for(int i = 0; i < n; i++){

        int size;
        cout << "\nEnter size of array " << i+1 << ": ";
        cin >> size;

        vector<int> arr(size);

        cout << "Enter elements: ";
        for(int j = 0; j < size; j++){
            cin >> arr[j];
        }

        long long num = arrayToNumber(arr);
        totalSum += num;
    }

    cout << "\nFinal Sum = " << totalSum << endl;

    return 0;
}
