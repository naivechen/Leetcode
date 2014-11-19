// https://oj.leetcode.com/problems/maximum-subarray/


class Solution {
public:
    int maxSubArray(int A[], int n) {
        int ans=A[0],tmp=A[0];
        for(int i=1;i<n;i++)
        {
            if(tmp<0) tmp=A[i];
            else tmp=tmp+A[i];
            ans=max(ans,tmp);
        }
        return ans;
    }
};
