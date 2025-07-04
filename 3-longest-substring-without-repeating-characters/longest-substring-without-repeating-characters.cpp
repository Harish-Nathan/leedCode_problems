class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int maxlen = 0;

        unordered_set<char> lastseen;

        for(int right =0;right<s.length(); right++){
            while(lastseen.count(s[right])){
                lastseen.erase(s[left]);
                left++;
            }

            lastseen.insert(s[right]);
            maxlen = max(maxlen, right-left+1);
        }
        return maxlen;
    }
};