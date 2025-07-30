class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        
        int minIdx = min_element(nums.begin(), nums.end()) - nums.begin();
        int maxIdx = max_element(nums.begin(), nums.end()) - nums.begin();

       
        if (minIdx > maxIdx) swap(minIdx, maxIdx);
        
        int front = max(minIdx, maxIdx) + 1;
        int back = n - min(minIdx, maxIdx);
        int both = (minIdx + 1) + (n - maxIdx);

        return min({front, back, both});
    }
};
