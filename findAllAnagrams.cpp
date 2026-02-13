#include<bits/stdc++.h>
using namespace std;
//T.C: O(n × k log k)
vector<string> findAllAnagrams(vector<string> arr, string word){
    vector<string> result;
    sort(word.begin(),word.end());
    for(int i=0;i<arr.size();i++){
        string each = arr[i];
        string temp = each;
        sort(temp.begin(),temp.end());
        if(word==temp){
            result.push_back(each);
        }
    }
    return result;
}

int main(){
     vector<string> arr = {"catch","tea","eat","tap","pat"};
     string word = "ate";
     vector<string> ans = findAllAnagrams(arr,word);
     for(string x : ans){
        cout<<x<<" ";
     }
}
/******************OPTIMAL SOLUTION T.C: o(n*k)********************** */

#include<bits/stdc++.h>
using namespace std;

vector<string> findAllAnagrams(vector<string> arr, string word){

    vector<string> result;

    vector<int> freqWord(26,0);

    for(char c : word){
        freqWord[c-'a']++;
    }

    for(string each : arr){
        if(each.size() != word.size()) continue;
        vector<int> freq(26,0);
        for(char c : each){
            freq[c-'a']++;
        }
        if(freq == freqWord) result.push_back(each);
    }

    return result;
}

int main(){

    vector<string> arr = {"catch","tea","eat","tap","pat"};
    string word = "ate";

    vector<string> ans = findAllAnagrams(arr,word);

    for(string x : ans)
        cout << x << " ";
}
