class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>mp1;
        for(char c: magazine){
            mp1[c]++;
        }

        for(char c:ransomNote){
            if(mp1[c] <=0){
                return false;
            }
            mp1[c]--;
        }

        return true;
        
    }
};