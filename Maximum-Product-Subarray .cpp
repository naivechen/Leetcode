// https://oj.leetcode.com/problems/maximum-product-subarray/


class Solution {
public:
    int maxProduct(int A[], int n) {
        if(n==0) return 0;
        // if(n==1) return A[0];
        int curmax=A[0],ans=A[0],curmin=A[0];
        for(int i=1;i<n;i++)
        {
            int tmp=curmax*A[i];
            curmax=max(A[i],max(tmp,curmin*A[i]));
            curmin=min(A[i],min(tmp,curmin*A[i]));
            ans=max(ans,curmax);
        }
        return ans;
    }
};

