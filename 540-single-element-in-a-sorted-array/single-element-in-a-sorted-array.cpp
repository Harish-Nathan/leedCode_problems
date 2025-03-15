class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0; i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int freq=1;
        for(auto it:mp)
        {
            if(it.second == freq)
            {
                return it.first;
            }
        }
        return 0;
    }
};