class Solution {
public:
    int jump(vector<int>& nums) {
        int further = 0;
        int current = 0;
        int jumps =0;
        for(int i=0; i <nums.size()-1;i++)
        {
            further = max(further, nums[i]+i);

            if(i==current)
            {
                current = further;
                jumps++;
            }
        }
        return jumps;
        
    }
};