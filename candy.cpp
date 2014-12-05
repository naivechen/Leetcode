// https://oj.leetcode.com/problems/candy/


class Solution {
public:
    int candy(vector<int> &ratings) {
        int len=ratings.size(),ans=0;
        int *dp=new int[len+1];
        for(int i=0;i<len;i++) dp[i]=1;
        for(int i=1;i<len;i++)
            if(ratings[i]>ratings[i-1]) dp[i]=dp[i-1]+1;
        for(int i=len-1-1;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
            {
                int tmp=dp[i+1]+1;
                if(dp[i]<tmp) dp[i]=tmp;
            }
        }
        for(int i=0;i<len;i++)
            ans+=dp[i];
        return ans;
    }
};
