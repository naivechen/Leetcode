// https://oj.leetcode.com/problems/best-time-to-buy-and-sell-stock/


class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int len=prices.size();
        if(!len) return 0;
        int ans=0,low=prices[0];
        for(int i=1;i<len;i++)
        {
            if(prices[i]<low) low=prices[i];
            else if(prices[i]-low>ans) ans=prices[i]-low;
        }
        return ans;
    }
};
