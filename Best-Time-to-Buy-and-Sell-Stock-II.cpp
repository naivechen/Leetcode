// https://oj.leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/


class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int len=prices.size();
        if(len<2) return 0;
        int ans=0;
        for(int i=1;i<len;i++)
        {
            if(prices[i]>prices[i-1])
                ans+=prices[i]-prices[i-1];
        }
        return ans;
    }
};

