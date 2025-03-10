class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxRight=0;
        int maxProfit=0;
        for(int i=prices.size()-1;i>=0;i--)
        {
            maxRight = max(prices[i],maxRight);
            maxProfit = max(maxRight-prices[i],maxProfit);
        }
        return maxProfit;
    }
};