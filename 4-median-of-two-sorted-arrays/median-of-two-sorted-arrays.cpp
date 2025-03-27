class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums3;
        for(auto num:nums1){
            nums3.push_back(num);
        }
        for(auto num:nums2){
            nums3.push_back(num);
        }
        sort(nums3.begin(),nums3.end());

        int n=nums3.size(); 

        return n%2?nums3[n/2]:(nums3[n/2-1]+nums3[n/2])/2.0;
        
    }
};