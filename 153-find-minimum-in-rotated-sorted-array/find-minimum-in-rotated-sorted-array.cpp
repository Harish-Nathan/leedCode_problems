class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = nums[0];
        for(int i=0; i<nums.size(); i++)
        {
            ans = min(ans,nums[i]);
        }
        return ans;
        
    }
};