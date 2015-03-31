// https://leetcode.com/problems/house-robber/
// a easy dp

class Solution {
public:
    int rob(vector<int> &num) {
        int dp[1001][2];
        // dp[i][0] not pick
        // dp[i][1] pick
        int len=num.size();
        if(len==0) return 0;
        dp[0][1]=num[0];
        dp[0][0]=0;
        for(int i=1;i<len;i++)
        {
            dp[i][0]=max(dp[i-1][1],dp[i-1][0]);
            dp[i][1]=dp[i-1][0]+num[i];
        }
        return max(dp[len-1][0],dp[len-1][1]);
    }
};

