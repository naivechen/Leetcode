// https://oj.leetcode.com/problems/triangle/


class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        int n=triangle.size();
        if(n==1) return triangle[0][0];
        int *dp=new int[n+10];
        for(int i=0;i<n;i++)
            dp[i]=triangle[n-1][i];
        for(int i=n-2;i>=0;i--)
            for(int j=0;j<=i;j++)
                dp[j]=triangle[i][j]+min(dp[j],dp[j+1]);
        return dp[0];
    }
};
