class Solution {
public: //T.C: O(n) and S.C: O(1)
    int firstUniqChar(string s) {
        int freq[26] = {0};
        for(char x : s){
            freq[x-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(freq[s[i]-'a']==1) return i;
        }
        return -1;
    }
};